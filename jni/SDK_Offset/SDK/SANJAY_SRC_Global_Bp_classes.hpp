#pragma once

// Pubg Mobile Beta (3.0) SDK by Telegram @Sanjay_Src

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Global_Bp.Global_Bp_C
// 0x00CC (0x0424 - 0x0358)
class UGlobal_Bp_C : public UUAEUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0004) (Transient, DuplicateTransient)
	class USettingConfig_C*                            SettingConfigObject;                                      // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FString, class UTexture2D*>            corpsIconTextureMap;                                      // 0x0360(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class Abp_global_C*                                bp_global;                                                // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FString, class UTexture2D*>            rankTextureMap;                                           // 0x03A0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, class UUserWidget*>                      dragDropItemMap;                                          // 0x03DC(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               isPostProcessVolumeInit;                                  // 0x0418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0419(0x0003) MISSED OFFSET
	class APostProcessVolume*                          postProcessClassic;                                       // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ACameraPostProcessActor_C*                   cameraPostProcessActor;                                   // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Global_Bp.Global_Bp_C");
		return pStaticClass;
	}


	void InitFireGyroSensibilitySettingData(class USettingConfig_C* ServerSettingConfig);
	void MapFromCBToESBH(class USettingConfig_C* SettingConfig);
	void InitMirrorObjMapPickupSetting(class USettingConfig_C* ServerSettingConfig);
	void InitThrowObjMapPickupSetting(class USettingConfig_C* ServerSettingConfig);
	void InitDrugMapPickupSetting(class USettingConfig_C* ServerSettingConfig);
	void InitBasicSettingData(class USettingConfig_C* ServerSettingConfig);
	void InitPickupSettingData_XT(class USettingConfig_C* SettingConfig);
	void InitPickupSettingData(class USettingConfig_C* ServerSettingConfig);
	void InitSensibilitySettingData(class USettingConfig_C* ServerSettingConfig);
	void SetGrenadeDefaultPickValue();
	void InitMapFromCBToES();
	void MapFromCBToESGlobal(class USettingConfig_C* SettingConfig);
	void MapFromCBToESJK(class USettingConfig_C* SettingConfig);
	void MapFromCBToESVN(class USettingConfig_C* SettingConfig);
	void LoadSettingConfigFromSlot();
	void UpdateBigHandOperateRedPoint();
	void SetPostProcessSettings(int ID, float Time, bool isReverse, bool isClosing);
	void ShowItemPreviewPress();
	void ShowItemPreviewClick(int ItemId);
	void SaveAnniversaryNeedShow();
	void GetAnniversaryNeedShow();
	void SaveResidentEvilNeedShow();
	void GetResidentEvilNeedShow();
	void SaveChristmasNeedShow();
	void GetChristmasNeedShow();
	void GetDragDropWidget(int dragDropType);
	void GetRankTexture(int rankIntegral, class UTexture2D** Output);
	void GetCorpsIconTexture(int IconID, class UTexture2D** Value);
	void GetFrameTexture(int frameLevel, class UTexture2D** Output);
	void EventAndroidQuitGame();
	void EnterLogin();
	void Construct();
	void RecoverMaxFps();
	void ExecuteUbergraph_Global_Bp(int EntryPoint);
};


}

