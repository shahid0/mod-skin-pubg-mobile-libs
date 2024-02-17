#pragma once
#include <dirent.h>
#include <sys/syscall.h>
#include <curl/curl.h>
#include <openssl/rsa.h>
#include <openssl/pem.h>
#include <jni.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>
#include <stdint.h>
#include <inttypes.h>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <sstream>
#include <vector>
#include <map>
#include <iomanip>
#include <thread>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/resource.h>
#include <sys/uio.h>
#include <fcntl.h>
#include <android/log.h>
#include <pthread.h>
#include <dirent.h>
#include <list>
#include <libgen.h>
#include <sys/mman.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/un.h>
#include <codecvt>
#include <chrono>
#include <queue>
//
// Memory Tools Internal by foxcheatsid@gmail.com
// Created on Tue Apr 4 13:03:13 2023
//

/*
* Type
*/
enum Type {
    TYPE_DWORD,
    TYPE_FLOAT,
    TYPE_DOUBLE,
    TYPE_WORD,
    TYPE_BYTE,
    TYPE_QWORD,
};

/*
* Maps, Semua hasil pencarian ada di sini 
*/
struct Maps_t {
    uintptr_t start, end;
	Type type;
    struct Maps_t *next;
};

#define SIZE sizeof(struct Maps_t)

/*
* List Memori Region 
*/
enum RegionType {
    ALL,
    JAVA_HEAP,
    C_HEAP,
    C_ALLOC,
    C_DATA,
    C_BSS,
    PPSSPP,
    ANONYMOUS,
    JAVA,
    STACK,
    ASHMEM,
    VIDEO,
    OTHER,
    BAD,
    CODE_APP,
    CODE_SYS
};

namespace kFox 
{
    /*
    * Mendapatkan PackageName
    */
	const char *GetPackageName();
	
    /*
    * Mendapatkan semua hasil pencarian memori
    */
	extern Maps_t* GetResult();
	
    /*
    * Menghapus semua hasil pencarian memori
    */
	extern void ClearResult();
	
    /*
    * Set maximal hasil pencarian
    */
	extern void SetMaxResult(int max_result);
	
    /*
    * Set Region
    */
	extern int SetSearchRange(RegionType type);
	
    /*
    * Mencari value berdasarkan Region dan Type
    */
    extern void MemorySearch(char* value, Type type);
	
    /*
    * Mencari value offset berdasarkan Region dan Type
    */
	extern void MemoryOffset(char *value, long int offset, Type type);
	
    /*
    * Write value berdasarkan offset
    */
	extern void MemoryWrite(char *value, long int offset, Type type);
	
    /*
    * Write value
    */
	extern void WriteValues(uintptr_t address, void *value, ssize_t size);
	
    /*
    * Read value
    */
	extern long ReadValues(uintptr_t address, void *buffer, ssize_t size);
}
