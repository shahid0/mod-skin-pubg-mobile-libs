#pragma once

// Pubg Mobile Beta (3.0) SDK by Telegram @Sanjay_Src

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CosHelper.CosBase
// 0x0004 (0x0020 - 0x001C)
class UCosBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CosHelper.CosBase");
		return pStaticClass;
	}


	TArray<unsigned char> GetContent();
};


// Class CosHelper.CosHelper
// 0x00B4 (0x00D0 - 0x001C)
class UCosHelper : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB4];                                      // 0x001C(0x00B4) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CosHelper.CosHelper");
		return pStaticClass;
	}

};


// Class CosHelper.CosHelperBlueprintLibrary
// 0x0000 (0x0020 - 0x0020)
class UCosHelperBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CosHelper.CosHelperBlueprintLibrary");
		return pStaticClass;
	}


	static class UCosRequest* UploadFileMemory(class UCosHelper* CosHelper, TArray<unsigned char> FileMemoryBuffer, const struct FString& URIPathName, const struct FString& URLParameters, const struct FScriptDelegate& OnCosRequestCompleted);
	static class UCosRequest* UploadFile(class UCosHelper* CosHelper, const struct FString& FilePathName, const struct FString& URIPathName, const struct FString& URLParameters, const struct FScriptDelegate& OnCosRequestCompleted);
	static struct FCosHelperInitializeInfo InitCosInfo(const struct FString& Section);
	static class UCosRequest* GetFileInfo(class UCosHelper* CosHelper, const struct FString& URIPathName, const struct FString& URLParameters, int FileInfoType, const struct FScriptDelegate& OnCosRequestCompleted);
	static class UCosRequest* DownloadFile(class UCosHelper* CosHelper, const struct FString& URIPathName, const struct FString& URLParameters, const struct FString& SavedPathName, const struct FScriptDelegate& OnCosRequestCompleted);
	static void DestroyCosHelper(class UCosHelper* CosHelper);
	static class UCosHelper* ConstructCosHelper(const struct FCosHelperInitializeInfo& InitializeInfo);
};


// Class CosHelper.CosRequest
// 0x0008 (0x0028 - 0x0020)
class UCosRequest : public UCosBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CosHelper.CosRequest");
		return pStaticClass;
	}

};


// Class CosHelper.CosResponse
// 0x0048 (0x0068 - 0x0020)
class UCosResponse : public UCosBase
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0020(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CosHelper.CosResponse");
		return pStaticClass;
	}


	bool IsOK();
	int GetResponseCode();
	struct FString GetRequestURL();
	struct FString GetFileInfo(ECosHelperFileInfoType InFileInfoType);
	struct FString GetContentAsString();
};


}

