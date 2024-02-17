#pragma once

// Pubg Mobile Beta (3.0) SDK by Telegram @Sanjay_Src

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PandoraComponent.PandoraBpFunctionLibrary
// 0x0000 (0x0020 - 0x0020)
class UPandoraBpFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PandoraComponent.PandoraBpFunctionLibrary");
		return pStaticClass;
	}


	static void Tnm2Test(const struct FString& errMsg, int iId, int iType, bool bSend);
	static void SetGameInstance(class UGameInstance* Instance);
	static struct FString OnClickOpenPop();
	static struct FString OnClickInit();
	static struct FString OnClickClose();
	static void LogoutPandora();
	static bool InitPandora(const struct FString& InOpenId, const struct FString& InRoleId, const struct FString& InAppId, const struct FString& InPlatId, const struct FString& InAccType, const struct FString& InArea, const struct FString& InPartion, const struct FString& InCloudTest, const struct FString& InAccessToken, const struct FString& InSdkVersion, const struct FString& InGameVersion);
	static struct FString GetHappyMessage();
};


// Class PandoraComponent.PandoraInterface
// 0x0004 (0x0020 - 0x001C)
class UPandoraInterface : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PandoraComponent.PandoraInterface");
		return pStaticClass;
	}

};


// Class PandoraComponent.PandoraRichTextBox
// 0x0280 (0x0350 - 0x00D0)
class UPandoraRichTextBox : public UWidget
{
public:
	struct FText                                       Text;                                                     // 0x00D0(0x000C) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	struct FScriptDelegate                             TextDelegate;                                             // 0x00E0(0x0010) (ZeroConstructor, InstancedReference)
	struct FSlateFontInfo                              Font;                                                     // 0x00F0(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FLinearColor                                Color;                                                    // 0x0130(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TEnumAsByte<ETextJustify>                          Justification;                                            // 0x0140(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AutoWrapText;                                             // 0x0141(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0142(0x0002) MISSED OFFSET
	float                                              WrapTextAt;                                               // 0x0144(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     Margin;                                                   // 0x0148(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              LineHeightPercentage;                                     // 0x0158(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class URichTextBlockDecorator*>             Decorators;                                               // 0x015C(0x000C) (Edit, ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData02[0x1E8];                                     // 0x0168(0x01E8) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PandoraComponent.PandoraRichTextBox");
		return pStaticClass;
	}


	void SetText(const struct FText& InText);
	struct FText GetText();
};


// Class PandoraComponent.PandoraSceneComponent
// 0x0000 (0x02C0 - 0x02C0)
class UPandoraSceneComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PandoraComponent.PandoraSceneComponent");
		return pStaticClass;
	}

};


// Class PandoraComponent.PandoraLuaActor
// 0x0048 (0x0358 - 0x0310)
class APandoraLuaActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0310(0x002C) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x033C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LuaStateName;                                             // 0x0348(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0354(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PandoraComponent.PandoraLuaActor");
		return pStaticClass;
	}


	struct FPandoraLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPandoraLuaBPVar> Args);
};


// Class PandoraComponent.PandoraLuaPawn
// 0x0040 (0x0398 - 0x0358)
class APandoraLuaPawn : public APawn
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0358(0x0028) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0380(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LuaStateName;                                             // 0x038C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PandoraComponent.PandoraLuaPawn");
		return pStaticClass;
	}


	struct FPandoraLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPandoraLuaBPVar> Args);
};


// Class PandoraComponent.PandoraLuaCharacter
// 0x0050 (0x0670 - 0x0620)
class APandoraLuaCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0620(0x002C) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x064C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LuaStateName;                                             // 0x0658(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0664(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PandoraComponent.PandoraLuaCharacter");
		return pStaticClass;
	}


	struct FPandoraLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPandoraLuaBPVar> Args);
};


// Class PandoraComponent.PandoraLuaController
// 0x0048 (0x03A8 - 0x0360)
class APandoraLuaController : public AController
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0360(0x002C) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x038C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LuaStateName;                                             // 0x0398(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03A4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PandoraComponent.PandoraLuaController");
		return pStaticClass;
	}


	struct FPandoraLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPandoraLuaBPVar> Args);
};


// Class PandoraComponent.PandoraLuaPlayerController
// 0x0048 (0x0600 - 0x05B8)
class APandoraLuaPlayerController : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x05B8(0x002C) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x05E4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LuaStateName;                                             // 0x05F0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x05FC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PandoraComponent.PandoraLuaPlayerController");
		return pStaticClass;
	}


	struct FPandoraLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPandoraLuaBPVar> Args);
};


// Class PandoraComponent.PandoraLuaGameModeBase
// 0x0048 (0x03A8 - 0x0360)
class APandoraLuaGameModeBase : public AGameModeBase
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0360(0x002C) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x038C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LuaStateName;                                             // 0x0398(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03A4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PandoraComponent.PandoraLuaGameModeBase");
		return pStaticClass;
	}


	struct FPandoraLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPandoraLuaBPVar> Args);
};


// Class PandoraComponent.PandoraLuaHUD
// 0x0040 (0x03F8 - 0x03B8)
class APandoraLuaHUD : public AHUD
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x03B8(0x0028) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x03E0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LuaStateName;                                             // 0x03EC(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PandoraComponent.PandoraLuaHUD");
		return pStaticClass;
	}


	struct FPandoraLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPandoraLuaBPVar> Args);
};


// Class PandoraComponent.PandoraLuaBlueprintLibrary
// 0x0000 (0x0020 - 0x0020)
class UPandoraLuaBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PandoraComponent.PandoraLuaBlueprintLibrary");
		return pStaticClass;
	}


	static struct FString GetStringFromVar(const struct FPandoraLuaBPVar& Value, int Index);
	static class UObject* GetObjectFromVar(const struct FPandoraLuaBPVar& Value, int Index);
	static float GetNumberFromVar(const struct FPandoraLuaBPVar& Value, int Index);
	static int GetIntFromVar(const struct FPandoraLuaBPVar& Value, int Index);
	static bool GetBoolFromVar(const struct FPandoraLuaBPVar& Value, int Index);
	static struct FPandoraLuaBPVar CreateVarFromString(const struct FString& Value);
	static struct FPandoraLuaBPVar CreateVarFromObject(class UObject* Value);
	static struct FPandoraLuaBPVar CreateVarFromNumber(float Value);
	static struct FPandoraLuaBPVar CreateVarFromInt(int Value);
	static struct FPandoraLuaBPVar CreateVarFromBool(bool Value);
	static struct FPandoraLuaBPVar CallToLuaWithArgs(const struct FString& FunctionName, TArray<struct FPandoraLuaBPVar> Args, const struct FString& StateName);
	static struct FPandoraLuaBPVar CallToLua(const struct FString& FunctionName, const struct FString& StateName);
};


// Class PandoraComponent.PandoraLuaDelegate
// 0x000C (0x0028 - 0x001C)
class UPandoraLuaDelegate : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PandoraComponent.PandoraLuaDelegate");
		return pStaticClass;
	}


	void EventTrigger();
};


// Class PandoraComponent.PandoraLuaUserWidget
// 0x0078 (0x0280 - 0x0208)
class UPandoraLuaUserWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0208(0x0028) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0230(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LuaStateName;                                             // 0x023C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x38];                                      // 0x0248(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PandoraComponent.PandoraLuaUserWidget");
		return pStaticClass;
	}


	struct FPandoraLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPandoraLuaBPVar> Args);
};


}

