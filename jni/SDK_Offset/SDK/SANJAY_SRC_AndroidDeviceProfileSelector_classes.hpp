#pragma once

// Pubg Mobile Beta (3.0) SDK by Telegram @Sanjay_Src

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AndroidDeviceProfileSelector.AndroidCommonDeviceProfileGradeScore
// 0x001C (0x0038 - 0x001C)
class UAndroidCommonDeviceProfileGradeScore : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<struct FGradeScoreProfileName>              GradeScoreProfileName;                                    // 0x0020(0x000C) (Edit, ZeroConstructor, Config)
	TArray<float>                                      GradeScoreTypePercentage;                                 // 0x002C(0x000C) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AndroidDeviceProfileSelector.AndroidCommonDeviceProfileGradeScore");
		return pStaticClass;
	}

};


// Class AndroidDeviceProfileSelector.AndroidCommonDeviceProfileMatchingRules
// 0x000C (0x0028 - 0x001C)
class UAndroidCommonDeviceProfileMatchingRules : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AndroidDeviceProfileSelector.AndroidCommonDeviceProfileMatchingRules");
		return pStaticClass;
	}

};


// Class AndroidDeviceProfileSelector.AndroidCommonDeviceProfileVulkanBlackList
// 0x000C (0x0028 - 0x001C)
class UAndroidCommonDeviceProfileVulkanBlackList : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AndroidDeviceProfileSelector.AndroidCommonDeviceProfileVulkanBlackList");
		return pStaticClass;
	}

};


// Class AndroidDeviceProfileSelector.AndroidCommonDeviceProfileVulkanWhiteList
// 0x000C (0x0028 - 0x001C)
class UAndroidCommonDeviceProfileVulkanWhiteList : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AndroidDeviceProfileSelector.AndroidCommonDeviceProfileVulkanWhiteList");
		return pStaticClass;
	}

};


// Class AndroidDeviceProfileSelector.AndroidCommonDeviceProfileWhiteList
// 0x000C (0x0028 - 0x001C)
class UAndroidCommonDeviceProfileWhiteList : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AndroidDeviceProfileSelector.AndroidCommonDeviceProfileWhiteList");
		return pStaticClass;
	}

};


// Class AndroidDeviceProfileSelector.AndroidDeviceProfileMatchingRules
// 0x000C (0x0028 - 0x001C)
class UAndroidDeviceProfileMatchingRules : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AndroidDeviceProfileSelector.AndroidDeviceProfileMatchingRules");
		return pStaticClass;
	}

};


// Class AndroidDeviceProfileSelector.AndroidJavaSurfaceViewDevices
// 0x000C (0x0028 - 0x001C)
class UAndroidJavaSurfaceViewDevices : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AndroidDeviceProfileSelector.AndroidJavaSurfaceViewDevices");
		return pStaticClass;
	}

};


// Class AndroidDeviceProfileSelector.AndroidProjectDeviceProfileWhiteList
// 0x000C (0x0028 - 0x001C)
class UAndroidProjectDeviceProfileWhiteList : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AndroidDeviceProfileSelector.AndroidProjectDeviceProfileWhiteList");
		return pStaticClass;
	}

};


}

