#include "Tools.h"
#include "Substrate/CydiaSubstrate.h"
#include "Includes/obfuscate.h"
#include <openssl/evp.h>
#include <openssl/pem.h>
#include <openssl/rsa.h>
#include <openssl/err.h>
#include <openssl/md5.h>

#include <sys/syscall.h>

pid_t target_pid = -1;

#define INRANGE(x, a, b)        (x >= a && x <= b)
#define getBits(x)              (INRANGE(x,'0','9') ? (x - '0') : ((x&(~0x20)) - 'A' + 0xa))
#define getByte(x)              (getBits(x[0]) << 4 | getBits(x[1]))

#if defined(__arm__)
int process_vm_readv_syscall = 376;
int process_vm_writev_syscall = 377;
#elif defined(__aarch64__)
int process_vm_readv_syscall = 270;
int process_vm_writev_syscall = 271;
#elif defined(__i386__)
int process_vm_readv_syscall = 347;
int process_vm_writev_syscall = 348;
#else
int process_vm_readv_syscall = 310;
int process_vm_writev_syscall = 311;
#endif

#ifndef __NR_process_vm_readv
#if defined(__x86_64__)
#define __NR_process_vm_readv 310
#elif defined(__aarch64__)
#define __NR_process_vm_readv 270
#elif defined(__i386__)
#define __NR_process_vm_readv 347
#elif defined(__arm__)
#define __NR_process_vm_readv 376
#endif
#endif

ssize_t Tools::process_v(pid_t pid, const struct iovec *local_iov, unsigned long local_iov_count, const struct iovec *remote_iov, unsigned long remote_iov_count, unsigned long flags, bool iswrite) {
    int syscall_num = iswrite ? process_vm_writev_syscall : process_vm_readv_syscall;
    return syscall(syscall_num, pid, local_iov, local_iov_count, remote_iov, remote_iov_count, flags);
}

bool Tools::pvm(void *address, void *buffer, size_t size, bool iswrite) {
    pid_t pid = getpid();
    struct iovec local[1];
    struct iovec remote[1];

    local[0].iov_base = buffer;
    local[0].iov_len = size;
    remote[0].iov_base = address;
    remote[0].iov_len = size;

    ssize_t bytes = process_v(pid, local, 1, remote, 1, 0, iswrite);
    return bytes == size;
}

bool Tools::vm_readv(long int address, void* buffer, size_t size) {
    return Tools::pvm(reinterpret_cast<void*>(address), buffer, size, false);
}

long int Tools::getint(long int addr) {
    if (addr < 0xFFFFFF) {
        return 0;
    }
    long int var[4] = {0};
    memset(var, 0, 4);
    Tools::vm_readv(addr, var, 4);
    return var[0];
}
ssize_t process_vm_readv(pid_t pid,
                         const struct iovec *local_iov,
                         unsigned long liovcnt,
                         const struct iovec *remote_iov,
                         unsigned long riovcnt,
                         unsigned long flags) {
    return syscall(__NR_process_vm_readv, pid, local_iov, liovcnt, remote_iov, riovcnt, flags);
}
bool Tools::read_memory(pid_t pid, void *address, void *buffer, size_t size) {
    struct iovec local[1];
    struct iovec remote[1];

    local[0].iov_base = buffer;
    local[0].iov_len = size;
    remote[0].iov_base = address;
    remote[0].iov_len = size;

    ssize_t bytes = process_vm_readv(pid, local, 1, remote, 1, 0);
    return bytes == size;
}

long int Tools::get_int_value(pid_t pid, long int address) {
    long int value = 0;
    if (!read_memory(pid, (void*)address, &value, sizeof(value))) {
        return 0;
    }
    return value;
}

void Tools::Hook(void *target, void *replace, void **backup) {
    unsigned long page_size = sysconf(_SC_PAGESIZE);
    unsigned long size = page_size * sizeof(uintptr_t);
    void *p = (void *) ((uintptr_t) target - ((uintptr_t) target % page_size) - page_size);
    if (mprotect(p, (size_t) size, PROT_EXEC | PROT_READ | PROT_WRITE) == 0) {
		//DobbyHook(target, replace, backup);
    }
}

bool Tools::Read(void *addr, void *buffer, size_t length) {
	return memcpy(buffer, addr, length) != 0;
}

bool Tools::Write(void *addr, void *buffer, size_t length) {
	return memcpy(addr, buffer, length) != 0;
}

bool Tools::ReadAddr(void *addr, void *buffer, size_t length) {
	unsigned long page_size = sysconf(_SC_PAGESIZE);
	unsigned long size = page_size * sizeof(uintptr_t);
	return mprotect((void *) ((uintptr_t) addr - ((uintptr_t) addr % page_size) - page_size), (size_t) size, PROT_EXEC | PROT_READ | PROT_WRITE) == 0 && memcpy(buffer, addr, length) != 0;
}

bool Tools::WriteAddr(void *addr, void *buffer, size_t length) {
	unsigned long page_size = sysconf(_SC_PAGESIZE);
    unsigned long size = page_size * sizeof(uintptr_t);
    return mprotect((void *) ((uintptr_t) addr - ((uintptr_t) addr % page_size) - page_size), (size_t) size, PROT_EXEC | PROT_READ | PROT_WRITE) == 0 && memcpy(addr, buffer, length) != 0;
}

bool Tools::SetWriteable(void *addr) {
    long page_size = sysconf(_SC_PAGESIZE);
    long protect_size = page_size * sizeof(uintptr_t);
    void *p = (void *) ((uintptr_t) addr - ((uintptr_t) addr % page_size) - page_size);
    return mprotect(p, (size_t) protect_size, PROT_EXEC | PROT_READ | PROT_WRITE) == 0;
}

bool Tools::PVM_ReadAddr(void *addr, void *buffer, size_t length) {
    return pvm(addr, buffer, length, false);
}

bool Tools::PVM_WriteAddr(void *addr, void *buffer, size_t length) {
	Tools::SetWriteable(addr);
    return pvm(addr, buffer, length, true);
}


uintptr_t Tools::GetBaseAddress(const char *name) {
    uintptr_t base = 0;
    char line[512];

    FILE *f = fopen(OBFUSCATE("/proc/self/maps"), OBFUSCATE("r"));

    if (!f) {
        return 0;
    }
    while (fgets(line, sizeof line, f)) {
        uintptr_t tmpBase;
        char tmpName[256];
        if (sscanf(line, "%" PRIXPTR "-%*" PRIXPTR "%*s %*s %*s %*s %s", &tmpBase, tmpName) > 0) {
            if (!strcmp(basename(tmpName), name)) {
                base = tmpBase;
                break;
            }
        }
    }
    fclose(f);
    return base;
}

uintptr_t Tools::GetBaseAddress2(const char *name) {
    uintptr_t base = 0;
    char line[512];

    FILE *f = fopen(OBFUSCATE("/proc/self/maps"), OBFUSCATE("r"));

    if (!f) {
        return 0;
    }

    bool foundLib = false;
    bool extractBase = false;
    while (fgets(line, sizeof(line), f)) {
        if (foundLib) {
            if (extractBase) {
                uintptr_t tmpBase;
                if (sscanf(line, "%" PRIXPTR, &tmpBase) > 0) {
                    base = tmpBase;
                    break;
                }
            }
            if (strstr(line, "00:00 0")) {
                extractBase = true;
            }
        } else if (strstr(line, name)) {
            foundLib = true;
        }
    }
    fclose(f);
    return base;
}

uintptr_t Tools::GetBaseAddress3(const char *name) {
    uintptr_t base = 0;
    char line[512];

    FILE *f = fopen(OBFUSCATE("/proc/self/maps"), OBFUSCATE("r"));

    if (!f) {
        return 0;
    }

    bool foundLib = false;
    bool extractBase = false;
    int zero00Count = 0;  // Track the occurrence of "00:00 0"
    
    while (fgets(line, sizeof(line), f)) {
        if (foundLib) {
            if (extractBase) {
                uintptr_t tmpBase;
                if (sscanf(line, "%" PRIXPTR, &tmpBase) > 0) {
                    base = tmpBase;
                    break;
                }
            }
            if (strstr(line, "00:00 0")) {
                zero00Count++;
                if (zero00Count == 2) {
                    extractBase = true;
                }
            }
        } else if (strstr(line, name)) {
            foundLib = true;
        }
    }
    fclose(f);
    return base;
}



bool Tools::IsPtrValid(void *addr) {
    if (!addr) {
        return false;
    }
    static int fd = -1;
    if (fd == -1) {
        fd = open("/dev/random", O_WRONLY);
    }
    return write(fd, addr, 4) >= 0;
}

uintptr_t Tools::GetEndAddress(const char *name) {
    uintptr_t end = 0;
    char line[512];

    FILE *f = fopen(OBFUSCATE("/proc/self/maps"), OBFUSCATE("r"));

    if (!f) {
        return 0;
    }

    bool found = false;
    while (fgets(line, sizeof line, f)) {
        uintptr_t tmpEnd;
        char tmpName[256];
        if (sscanf(line, "%*" PRIXPTR "-%" PRIXPTR "%*s %*s %*s %*s %s", &tmpEnd, tmpName) > 0) {
            if (!strcmp(basename(tmpName), name)) {
                if (!found) {
                    found = true;
                }
            } else {
                if (found) {
                    end = tmpEnd;
                    break;
                }
            }
        }
    }

    fclose(f);
    return end;
}

uintptr_t Tools::FindPattern(const char *lib, const char *pattern) {
    auto start = GetBaseAddress(lib);
    if (!start)
        return 0;
    auto end = GetEndAddress(lib);
    if (!end)
        return 0;
    auto curPat = reinterpret_cast<const unsigned char *>(pattern);
    uintptr_t firstMatch = 0;
    for (uintptr_t pCur = start; pCur < end; ++pCur) {
        if (*(uint8_t *) curPat == (uint8_t) '\?' || *(uint8_t *) pCur == getByte(curPat)) {
            if (!firstMatch) {
                firstMatch = pCur;
            }
            curPat += (*(uint16_t *) curPat == (uint16_t) '\?\?' || *(uint8_t *) curPat != (uint8_t) '\?') ? 2 : 1;
            if (!*curPat) {
                return firstMatch;
            }
            curPat++;
            if (!*curPat) {
                return firstMatch;
            }
        } else if (firstMatch) {
            pCur = firstMatch;
            curPat = reinterpret_cast<const unsigned char *>(pattern);
            firstMatch = 0;
        }
    }
    return 0;
}

uintptr_t Tools::GetRealOffsets(const char *libraryName, uintptr_t relativeAddr) {
	uintptr_t libBase = Tools::GetBaseAddress(libraryName);
	if (libBase == 0)
		return 0;
	return (reinterpret_cast<uintptr_t>(libBase + relativeAddr));
}

uintptr_t Tools::String2Offset(const char *c) {
    int base = 16;
	static_assert(sizeof(uintptr_t) == sizeof(unsigned long) || sizeof(uintptr_t) == sizeof(unsigned long long), "Please add string to handle conversion for this architecture.");
	
    if (sizeof(uintptr_t) == sizeof(unsigned long)) {
        return strtoul(c, nullptr, base);
    }
    return strtoull(c, nullptr, base);
}

const char *Tools::GetAndroidID(JNIEnv *env, jobject context) {
    jclass contextClass = env->FindClass(OBFUSCATE("android/content/Context"));
    jmethodID getContentResolverMethod = env->GetMethodID(contextClass, OBFUSCATE("getContentResolver"), OBFUSCATE("()Landroid/content/ContentResolver;"));
    jclass settingSecureClass = env->FindClass(OBFUSCATE("android/provider/Settings$Secure"));
    jmethodID getStringMethod = env->GetStaticMethodID(settingSecureClass, OBFUSCATE("getString"), OBFUSCATE("(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;"));

    auto obj = env->CallObjectMethod(context, getContentResolverMethod);
    auto str = (jstring) env->CallStaticObjectMethod(settingSecureClass, getStringMethod, obj, env->NewStringUTF(OBFUSCATE("android_id")));
    return env->GetStringUTFChars(str, 0);
}

const char *Tools::GetDeviceModel(JNIEnv *env) {
	jclass buildClass = env->FindClass(OBFUSCATE("android/os/Build"));
	jfieldID modelId = env->GetStaticFieldID(buildClass, OBFUSCATE("MODEL"), OBFUSCATE("Ljava/lang/String;"));
	
	auto str = (jstring) env->GetStaticObjectField(buildClass, modelId);
	return env->GetStringUTFChars(str, 0);
}

const char *Tools::GetDeviceBrand(JNIEnv *env) {
	jclass buildClass = env->FindClass(OBFUSCATE("android/os/Build"));
	jfieldID modelId = env->GetStaticFieldID(buildClass, OBFUSCATE("BRAND"), OBFUSCATE("Ljava/lang/String;"));
	
	auto str = (jstring) env->GetStaticObjectField(buildClass, modelId);
	return env->GetStringUTFChars(str, 0);
}

const char *Tools::GetDeviceUniqueIdentifier(JNIEnv *env, const char *uuid) {
    jclass uuidClass = env->FindClass(OBFUSCATE("java/util/UUID"));

    auto len = strlen(uuid);

    jbyteArray myJByteArray = env->NewByteArray(len);
    env->SetByteArrayRegion(myJByteArray, 0, len, (jbyte *) uuid);

    jmethodID nameUUIDFromBytesMethod = env->GetStaticMethodID(uuidClass, OBFUSCATE("nameUUIDFromBytes"), OBFUSCATE("([B)Ljava/util/UUID;"));
    jmethodID toStringMethod = env->GetMethodID(uuidClass, OBFUSCATE("toString"), OBFUSCATE("()Ljava/lang/String;"));

    auto obj = env->CallStaticObjectMethod(uuidClass, nameUUIDFromBytesMethod, myJByteArray);
    auto str = (jstring) env->CallObjectMethod(obj, toStringMethod);
    return env->GetStringUTFChars(str, 0);
}

std::string Tools::CalcMD5(std::string s) {
    std::string result;

    unsigned char hash[MD5_DIGEST_LENGTH];
    char tmp[4];

    MD5_CTX md5;
    MD5_Init(&md5);
    MD5_Update(&md5, s.c_str(), s.length());
    MD5_Final(hash, &md5);
    for (unsigned char i : hash) {
        sprintf(tmp, "%02x", i);
        result += tmp;
    }
    return result;
}
