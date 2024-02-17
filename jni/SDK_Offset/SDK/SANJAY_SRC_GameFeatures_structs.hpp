#pragma once

// Pubg Mobile Beta (3.0) SDK by Telegram @Sanjay_Src

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameFeatures.GameFeatureComponentEntry
// 0x0058
struct FGameFeatureComponentEntry
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty GameFeatures.GameFeatureComponentEntry.ActorClass
	unsigned char                                      UnknownData01[0x28];                                      // 0x0028(0x0028) UNKNOWN PROPERTY: SoftClassProperty GameFeatures.GameFeatureComponentEntry.ComponentClass
	unsigned char                                      bClientComponent : 1;                                     // 0x0050(0x0001) (Edit)
	unsigned char                                      bServerComponent : 1;                                     // 0x0050(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct GameFeatures.GameFeaturePluginStateMachineProperties
// 0x0048
struct FGameFeaturePluginStateMachineProperties
{
	unsigned char                                      UnknownData00[0x44];                                      // 0x0000(0x0044) MISSED OFFSET
	class UGameFeatureData*                            GameFeatureData;                                          // 0x0044(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

}

