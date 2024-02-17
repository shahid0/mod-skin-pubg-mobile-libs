#pragma once

// Pubg Mobile Beta (3.0) SDK by Telegram @Sanjay_Src

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum ClientNet.EIMSDKPlatformType
enum class EIMSDKPlatformType : uint8_t
{
	EIMSDKPlatformType__kIMSDKPlatformTypeUnknow = 0,
	EIMSDKPlatformType__kIMSDKPlatformTypeIOS = 1,
	EIMSDKPlatformType__kIMSDKPlatformTypeAndroid = 2,
	EIMSDKPlatformType__EIMSDKPlatformType_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ClientNet.IMSDKLoginResult
// 0x0038
struct FIMSDKLoginResult
{
	int                                                imsdkRetCode;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                thirdRetCode;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     OpenID;                                                   // 0x0008(0x000C) (ZeroConstructor)
	struct FString                                     Token;                                                    // 0x0014(0x000C) (ZeroConstructor)
	int64_t                                            tokenExpire;                                              // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     retExtraJson;                                             // 0x0028(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct ClientNet.IMSDKExtraInfo
// 0x003C
struct FIMSDKExtraInfo
{
	TMap<struct FString, struct FString>               ExtraInfo;                                                // 0x0000(0x0050) (ZeroConstructor)
};

}

