#include "Includes.h"

namespace Tools {
	void Hook(void *target, void *replace, void **backup);
	ssize_t process_v(pid_t pid, const struct iovec *local_iov, unsigned long local_iov_count, const struct iovec *remote_iov, unsigned long remote_iov_count, unsigned long flags, bool iswrite);
    bool vm_readv(long int address, void* buffer, size_t size);
    long int getint(long int addr);
    bool pvm(void *address, void *buffer, size_t size, bool iswrite);
    
    bool read_memory(pid_t pid, void *address, void *buffer, size_t size);
    long int get_int_value(pid_t pid, long int address);
    
	bool Read(void *addr, void *buffer, size_t length);
	bool Write(void *addr, void *buffer, size_t length);
	bool ReadAddr(void *addr, void *buffer, size_t length);
	bool WriteAddr(void *addr, void *buffer, size_t length);
	bool SetWriteable(void *addr);
	bool PVM_ReadAddr(void *addr, void *buffer, size_t length);
	bool PVM_WriteAddr(void *addr, void *buffer, size_t length);
	bool IsPtrValid(void *addr);
	
	uintptr_t GetBaseAddress(const char *name);
	uintptr_t GetBaseAddress2(const char *name);
	uintptr_t GetBaseAddress3(const char *name);
	uintptr_t GetEndAddress(const char *name);
	uintptr_t FindPattern(const char *lib, const char* pattern);
	uintptr_t GetRealOffsets(const char *libraryName, uintptr_t relativeAddr);
	uintptr_t String2Offset(const char *c);
	
	const char *GetAndroidID(JNIEnv *env, jobject context);
	const char *GetDeviceModel(JNIEnv *env);
	const char *GetDeviceBrand(JNIEnv *env);
	const char *GetDeviceUniqueIdentifier(JNIEnv *env, const char *uuid);
	std::string CalcMD5(std::string s);
}

