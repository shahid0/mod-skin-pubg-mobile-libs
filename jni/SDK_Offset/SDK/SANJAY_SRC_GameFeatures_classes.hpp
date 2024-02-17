#pragma once

// Pubg Mobile Beta (3.0) SDK by Telegram @Sanjay_Src

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GameFeatures.GameFeatureAction
// 0x0004 (0x0020 - 0x001C)
class UGameFeatureAction : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameFeatures.GameFeatureAction");
		return pStaticClass;
	}

};


// Class GameFeatures.GameFeatureAction_AddComponents
// 0x0020 (0x0040 - 0x0020)
class UGameFeatureAction_AddComponents : public UGameFeatureAction
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0020(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameFeatures.GameFeatureAction_AddComponents");
		return pStaticClass;
	}

};


// Class GameFeatures.GameFeatureData
// 0x0018 (0x0038 - 0x0020)
class UGameFeatureData : public UPrimaryDataAsset
{
public:
	TArray<class UGameFeatureAction*>                  Actions;                                                  // 0x0020(0x000C) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FPrimaryAssetTypeInfo>               PrimaryAssetTypesToScan;                                  // 0x002C(0x000C) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameFeatures.GameFeatureData");
		return pStaticClass;
	}

};


// Class GameFeatures.GameFeaturePluginStateMachine
// 0x00B4 (0x00D0 - 0x001C)
class UGameFeaturePluginStateMachine : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x001C(0x001C) MISSED OFFSET
	struct FGameFeaturePluginStateMachineProperties    StateProperties;                                          // 0x0038(0x0048) (Transient)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0080(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameFeatures.GameFeaturePluginStateMachine");
		return pStaticClass;
	}

};


// Class GameFeatures.GameFeaturesProjectPolicies
// 0x0004 (0x0020 - 0x001C)
class UGameFeaturesProjectPolicies : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameFeatures.GameFeaturesProjectPolicies");
		return pStaticClass;
	}

};


// Class GameFeatures.DefaultGameFeaturesProjectPolicies
// 0x0000 (0x0020 - 0x0020)
class UDefaultGameFeaturesProjectPolicies : public UGameFeaturesProjectPolicies
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameFeatures.DefaultGameFeaturesProjectPolicies");
		return pStaticClass;
	}

};


// Class GameFeatures.GameFeaturesSubsystem
// 0x0090 (0x00B0 - 0x0020)
class UGameFeaturesSubsystem : public UEngineSubsystem
{
public:
	TMap<struct FString, class UGameFeaturePluginStateMachine*> GameFeaturePluginStateMachines;                           // 0x0020(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x005C(0x003C) MISSED OFFSET
	TArray<class UGameFeatureStateChangeObserver*>     Observers;                                                // 0x0098(0x000C) (ZeroConstructor, Transient)
	class UGameFeaturesProjectPolicies*                GameSpecificPolicies;                                     // 0x00A4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameFeatures.GameFeaturesSubsystem");
		return pStaticClass;
	}

};


// Class GameFeatures.GameFeaturesSubsystemSettings
// 0x0040 (0x0070 - 0x0030)
class UGameFeaturesSubsystemSettings : public UDeveloperSettings
{
public:
	struct FSoftClassPath                              GameFeaturesManagerClassName;                             // 0x0030(0x0018) (Edit, Config)
	TArray<struct FString>                             DisabledPlugins;                                          // 0x0048(0x000C) (Edit, ZeroConstructor, Config)
	TArray<struct FString>                             AdditionalPluginMetadataKeys;                             // 0x0054(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     BuiltInGameFeaturePluginsFolder;                          // 0x0060(0x000C) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameFeatures.GameFeaturesSubsystemSettings");
		return pStaticClass;
	}

};


// Class GameFeatures.GameFeatureStateChangeObserver
// 0x0004 (0x0020 - 0x001C)
class UGameFeatureStateChangeObserver : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameFeatures.GameFeatureStateChangeObserver");
		return pStaticClass;
	}

};


}

