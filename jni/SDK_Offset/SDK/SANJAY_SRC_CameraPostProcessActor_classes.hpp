#pragma once

// Pubg Mobile Beta (3.0) SDK by Telegram @Sanjay_Src

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CameraPostProcessActor.CameraPostProcessActor_C
// 0x0560 (0x0870 - 0x0310)
class ACameraPostProcessActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0310(0x0004) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0314(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_LerpPPSettings_104_7E99B53D425173C51E1B2D83BB82148A;// 0x0318(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_LerpPPSettings_103_7E99B53D425173C51E1B2D83BB82148A;// 0x031C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_LerpPPSettings_102_7E99B53D425173C51E1B2D83BB82148A;// 0x0320(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_LerpPPSettings_101_7E99B53D425173C51E1B2D83BB82148A;// 0x0324(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_LerpPPSettings__Direction_7E99B53D425173C51E1B2D83BB82148A;// 0x0328(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0329(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_LerpPPSettings;                                  // 0x032C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class APostProcessVolume*                          currentPostProcessVolumn;                                 // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                isLerp;                                                   // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<TEnumAsByte<EDepthOfFieldMethod>>           depthOfFieldMethodArray;                                  // 0x0338(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              LerpAlpha;                                                // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isReverse;                                                // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0349(0x0007) MISSED OFFSET
	struct FPostProcessSettings                        previousPPSettingsStruct;                                 // 0x0350(0x0520) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass CameraPostProcessActor.CameraPostProcessActor_C");
		return pStaticClass;
	}


	void UserConstructionScript();
	void Timeline_LerpPPSettings__FinishedFunc();
	void Timeline_LerpPPSettings__UpdateFunc();
	void Event_LerpPostProcessSettings(class APostProcessVolume* currentPPVolumn, const struct FBP_STRUCT_CameraPostProcessSettings_type& targetPPSettingsStruct, float Time, int ID, bool isReverse);
	void ExecuteUbergraph_CameraPostProcessActor(int EntryPoint);
};


}

