#pragma once

// Pubg Mobile Beta (3.0) SDK by Telegram @Sanjay_Src

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Basic.OnlyActorComponent
// 0x0000 (0x00C8 - 0x00C8)
class UOnlyActorComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.OnlyActorComponent");
		return pStaticClass;
	}

};


// Class Basic.UAENetActor
// 0x0008 (0x03A8 - 0x03A0)
class AUAENetActor : public ALuaActor
{
public:
	int                                                iRegionActor;                                             // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x03A4(0x0002) MISSED OFFSET
	bool                                               bStaticAddNetworkActor;                                   // 0x03A6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      AutoDormancyType;                                         // 0x03A7(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.UAENetActor");
		return pStaticClass;
	}


	void ReceivedPlayerActiveRegionsChanged(bool bEnter);
};


// Class Basic.UAEAnimListComponentBase
// 0x00B8 (0x0180 - 0x00C8)
class UUAEAnimListComponentBase : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x4C];                                      // 0x00C8(0x004C) MISSED OFFSET
	TMap<int, struct FAnimListMapValueData>            AnimListMap;                                              // 0x0114(0x0050) (ZeroConstructor, Transient)
	TArray<class UAnimationAsset*>                     AnimationCatcheList;                                      // 0x0150(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x1C];                                      // 0x015C(0x001C) MISSED OFFSET
	bool                                               bDisableAnimListOnDS;                                     // 0x0178(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0179(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.UAEAnimListComponentBase");
		return pStaticClass;
	}

};


// Class Basic.ItemHandleBase
// 0x006C (0x0088 - 0x001C)
class UItemHandleBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	int                                                MaxCount;                                                 // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUnique;                                                  // 0x0024(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStackable;                                               // 0x0025(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSingle;                                                  // 0x0026(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0027(0x0001) MISSED OFFSET
	TMap<int, struct FItemAssociation>                 AssociationMap;                                           // 0x0028(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	struct FItemDefineID                               DefineID;                                                 // 0x0068(0x0018)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0080(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.ItemHandleBase");
		return pStaticClass;
	}


	void SetAssociation(int AssociationType, const struct FItemAssociation& Association);
	void RemoveAssociation(int AssociationType);
	void Init(const struct FItemDefineID& InDefineID);
	struct FItemDefineID GetDefineID();
	TMap<int, struct FItemAssociation> GetAssociationMap();
	TArray<struct FItemAssociation> GetAssociationListByTargetType(int Type);
	struct FItemAssociation GetAssociationByTargetDefineID(const struct FItemDefineID& TargetDefineID);
	struct FItemAssociation GetAssociation(int AssociationType);
	void Constuct(const struct FItemDefineID& InDefineID);
	void AddAssociation(int AssociationType, const struct FItemAssociation& Association);
};


// Class Basic.BattleItemHandleBase
// 0x0068 (0x00F0 - 0x0088)
class UBattleItemHandleBase : public UItemHandleBase
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0088(0x003C) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x00C4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bEquipping;                                               // 0x00D0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EItemStoreArea                                     ItemStoreArea;                                            // 0x00D1(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00D2(0x0002) MISSED OFFSET
	TArray<struct FBattleItemAdditionalData>           AdditionalData;                                           // 0x00D4(0x000C) (BlueprintVisible, ZeroConstructor)
	bool                                               bDropOnDead;                                              // 0x00E0(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00E1(0x0003) MISSED OFFSET
	float                                              UnitWeight;                                               // 0x00E4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEquippable;                                              // 0x00E8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bConsumable;                                              // 0x00E9(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoEquipAndDrop;                                        // 0x00EA(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x00EB(0x0001) MISSED OFFSET
	int                                                ItemAttrsFlag;                                            // 0x00EC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.BattleItemHandleBase");
		return pStaticClass;
	}


	void UpdateAttributeModify(bool bEnable);
	bool UnEquip();
	bool HanldePickupAssociationData(TArray<struct FBattleItemAdditionalData> PickupAdditionalData);
	bool HanldeDropAssociationData();
	bool HanldeCleared();
	bool HandleUse(const struct FBattleItemUseTarget& Target, EBattleItemUseReason Reason);
	bool HandlePickup(const TScriptInterface<class UItemContainerInterface>& ItemContainer, const struct FBattleItemPickupInfo& PickupInfo, EBattleItemPickupReason Reason);
	bool HandleEnable(bool bEnable);
	bool HandleDrop(int InCount, EBattleItemDropReason Reason);
	bool HandleDisuse(EBattleItemDisuseReason Reason);
	bool HandleChangeItemStoreArea(EItemStoreArea InItemStoreArea);
	bool HandleBindToTargetItem();
	class UWorld* GetWorldInternal();
	class UWorld* GetCurrentWorld();
	struct FBattleItemData ExtractItemData();
	void ClearAdditionalData();
	bool CheckCanUse(const TScriptInterface<class UItemContainerInterface>& ItemContainer, const struct FBattleItemUseTarget& Target, EBattleItemUseReason Reason);
};


// Class Basic.UAENetPoolActor
// 0x0050 (0x03F8 - 0x03A8)
class AUAENetPoolActor : public AUAENetActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x03A8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.UAENetPoolActor");
		return pStaticClass;
	}


	void OnBPRespawned();
	void OnBPRecycled();
};


// Class Basic.UAEBaseSkillCondition
// 0x0008 (0x0060 - 0x0058)
class UUAEBaseSkillCondition : public UUTSkillCondition
{
public:
	class APawn*                                       OwnerPawnForBuff;                                         // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.UAEBaseSkillCondition");
		return pStaticClass;
	}

};


// Class Basic.DataProviderBase
// 0x0004 (0x0020 - 0x001C)
class UDataProviderBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.DataProviderBase");
		return pStaticClass;
	}

};


// Class Basic.STBuffAction
// 0x002C (0x0048 - 0x001C)
class USTBuffAction : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x001C(0x0010) MISSED OFFSET
	float                                              ExecuteDelay;                                             // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ArrayIndex;                                               // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               AutoEnabled;                                              // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	TWeakObjectPtr<class USTBuff>                      OwnerBuff;                                                // 0x0038(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UActorComponent*                             CurOwnerActorComponent;                                   // 0x0040(0x0004) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	int                                                CurInstID;                                                // 0x0044(0x0004) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBuffAction");
		return pStaticClass;
	}


	void Tick(class UActorComponent* BuffSystemComponent, int InstID, float DetalTime);
	void SetEnabled(class UActorComponent* BuffSystemComponent, int InstID, bool Enabled);
	void ResetExecute(class UActorComponent* BuffSystemComponent, int InstID, bool IgnoreEnd);
	void OnTick(float DetalTime);
	void OnResetExecute(bool IgnoreEnd);
	void OnInitialize();
	void OnExecute();
	void OnEnd();
	void OnDestroy();
	void OnCheckLinkActionEnabled();
	void OnChangeNotify();
	void Initialize(class UActorComponent* BuffSystemComponent, int InstID);
	TEnumAsByte<ENetRole> GetRealOwnerRole();
	class AActor* GetOwner();
	class AActor* GetCauser();
	void End(class UActorComponent* BuffSystemComponent, int InstID);
	void Destroy(class UActorComponent* BuffSystemComponent, int InstID);
	void CheckLinkActionEnabled(class UActorComponent* BuffSystemComponent, int InstID);
	void ChangeNotify(class UActorComponent* BuffSystemComponent, int InstID);
};


// Class Basic.STBuffCondition
// 0x001C (0x0038 - 0x001C)
class USTBuffCondition : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x001C(0x0010) MISSED OFFSET
	EBuffConditionAndOr                                AndOrPrev;                                                // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsKeepResult;                                             // 0x002D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x002E(0x0002) MISSED OFFSET
	class USTBuffAction*                               OwnerAction;                                              // 0x0030(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBuffCondition");
		return pStaticClass;
	}


	void OnInitialize();
	void OnDestroy();
	class AActor* GetOwner();
	class AActor* GetCauser();
	class USTBuffCondition* Copy(class UObject* Outer);
	bool CheckIsTrue();
};


// Class Basic.STBaseBuffManager
// 0x010C (0x0128 - 0x001C)
class USTBaseBuffManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	TArray<class UClass*>                              BuffListTemplates;                                        // 0x0028(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int, class USTBaseBuff*>                      BuffInstancedTemplateMap;                                 // 0x0034(0x0050) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData01[0xB8];                                      // 0x0070(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBaseBuffManager");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffStatusType
// 0x0004 (0x0020 - 0x001C)
class USTBaseBuffStatusType : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBaseBuffStatusType");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffSystemComponent
// 0x0118 (0x01E0 - 0x00C8)
class USTBaseBuffSystemComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x00C8(0x0038) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBuffAttached;                                           // 0x0100(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBuffDetached;                                           // 0x010C(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0118(0x0040) MISSED OFFSET
	TArray<struct FUTBuffSynData>                      BuffSyncList;                                             // 0x0158(0x000C) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	struct FString                                     ServerBuffString;                                         // 0x0164(0x000C) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	float                                              BuffSyncRemainingPeriod;                                  // 0x0170(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FBuffInstancedItem>                  AllBuffs;                                                 // 0x0174(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0180(0x0008) MISSED OFFSET
	bool                                               isNeedCheckValidation;                                    // 0x0188(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x57];                                      // 0x0189(0x0057) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBaseBuffSystemComponent");
		return pStaticClass;
	}


	bool SetBuffExpiry(const struct FName& BuffName, float ExpirySeconds);
	void ResetForDeath();
	void RepBuffSyncList();
	bool RemoveBuffWithCauser(const struct FName& BuffName, bool RemoveLayerOnly, class AController* pCauser);
	bool RemoveBuffByID(int BuffID, bool RemoveLayerOnly, class AController* pCauser, class AActor* BuffApplierActor);
	bool RemoveBuff(const struct FName& BuffName, bool RemoveLayerOnly, class AActor* BuffApplierActor);
	void RefreshAllBuffs();
	bool IsBufferMutexed(const struct FName& NewBuffName);
	bool HasBuffID(int BuffID);
	bool HasBuff(const struct FName& BuffName);
	class APawn* GetPawnOwner();
	struct FName GetBuffName(int BuffID);
	int GetBuffID(const struct FName& BuffName);
	float GetBuffExpiry(const struct FName& BuffName);
	class USTBaseBuff* GetBuffByName(const struct FName& BuffName);
	class AActor* GetActorOwner();
	void ClientSimulateRemoveBuff(const struct FName& BuffName, bool RemoveLayerOnly, class AActor* BuffApplierActor);
	void ClientSimulateAddBuff(const struct FName& BuffName, class AController* BuffCauser, int LayerCount, class AActor* BuffApplierActor);
	void ClientMulticastSimulateRemoveBuff(const struct FName& BuffName, bool RemoveLayerOnly, class AActor* BuffApplierActor);
	void ClientMulticastSimulateAddBuff(const struct FName& BuffName, class AController* BuffCauser, int LayerCount, class AActor* BuffApplierActor);
	void ClientMulticastSetBuffExpiry(const struct FName& BuffName, float LeftSecondsAfterNow);
	void ClearBuff(bool bDebuff, bool bGainBuff);
	bool CheckBuffStatus(class UClass* Status, bool* Value);
	void BuffDetached__DelegateSignature(const struct FName& BuffName);
	void BuffAttached__DelegateSignature(const struct FName& BuffName);
	bool AddBuffLayer(const struct FName& BuffName, int layerNum);
	bool AddBuffExpiry(const struct FName& BuffName, float ExpirySeconds);
	int AddBuffByID(int BuffID, class AController* BuffCauser, int LayerCount, class AActor* BuffApplierActor);
	int AddBuff(const struct FName& BuffName, class AController* BuffCauser, int LayerCount, class AActor* BuffApplierActor, class AActor* CauserActor);
};


// Class Basic.STBaseBuffTriggerParam
// 0x0004 (0x0020 - 0x001C)
class USTBaseBuffTriggerParam : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBaseBuffTriggerParam");
		return pStaticClass;
	}

};


// Class Basic.UAEGameInstance
// 0x01A8 (0x0380 - 0x01D8)
class UUAEGameInstance : public UGameInstance
{
public:
	struct FClientBaseInfo                             ClientBaseInfo;                                           // 0x01D8(0x0108)
	struct FScriptMulticastDelegate                    EnginePreTick;                                            // 0x02E0(0x000C) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x44];                                      // 0x02EC(0x0044) MISSED OFFSET
	class UFrontendHUD*                                AssociatedFrontendHUD;                                    // 0x0330(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0334(0x0004) MISSED OFFSET
	class ULuaStateWrapper*                            LuaStateWrapper;                                          // 0x0338(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bStandAloneFromLobby;                                     // 0x033C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1B];                                      // 0x033D(0x001B) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPreBattleResult;                                        // 0x0358(0x000C) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0364(0x0008) MISSED OFFSET
	TArray<struct FString>                             HighWeatherNames;                                         // 0x036C(0x000C) (ZeroConstructor, Config)
	int                                                HighWeatherMinRenderQuality;                              // 0x0378(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	int                                                HighWeatherMaxRenderQuality;                              // 0x037C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.UAEGameInstance");
		return pStaticClass;
	}


	void SetLuaStateWrapper(class ULuaStateWrapper* TLuaStateWrapper);
	void OpenAssetLoadLog();
	void OnPreBattleResult__DelegateSignature();
	void LuaLeakDetect();
	void LuaDoString(const struct FString& LuaString);
	float GetWeatherTime();
	struct FString GetWeatherLevelName();
	int GetWeatherID();
	class ULuaStateWrapper* GetLuaStateWrapper();
	struct FString GetLoadWeatherName(const struct FString& InWeatherName);
	bool GetIsHighWeatherLevel(const struct FString& InWeatherLevelName);
	struct FString GetGameID();
	int GetDeviceLevel();
	class UUAEDataTable* GetDataTable_Mod(const struct FString& tableName);
	class UUAEDataTable* GetDataTable(const struct FString& tableName);
	class UFrontendHUD* GetAssociatedFrontendHUD();
	void CloseAssetLoadLog();
};


// Class Basic.UAENetBunchQueueSystem
// 0x0000 (0x0020 - 0x0020)
class UUAENetBunchQueueSystem : public UWorldSubsystem
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.UAENetBunchQueueSystem");
		return pStaticClass;
	}

};


// Class Basic.AttrModifyComponent
// 0x0568 (0x0630 - 0x00C8)
class UAttrModifyComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x00C8(0x00B0) MISSED OFFSET
	int                                                ConfigAutoAddAttId;                                       // 0x0178(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7C];                                      // 0x017C(0x007C) MISSED OFFSET
	TArray<struct FAttrModifyItem>                     ConfigAttrModifyList;                                     // 0x01F8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance)
	uint32_t                                           AttrModifyStateList;                                      // 0x0204(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x58];                                      // 0x0208(0x0058) MISSED OFFSET
	struct FRepAttributeModify                         DynamicModifierRep;                                       // 0x0260(0x0010) (Net)
	struct FRepAttributeModify                         DynamicModifierRepOnlyOwner;                              // 0x0270(0x0010) (Net)
	unsigned char                                      UnknownData03[0x14];                                      // 0x0280(0x0014) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnAttrModified;                                           // 0x0294(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAttrRemoved;                                            // 0x02A0(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FAttrDynamicModifier                        DynamicModifier;                                          // 0x02AC(0x007C)
	unsigned char                                      UnknownData04[0x3C];                                      // 0x0328(0x003C) MISSED OFFSET
	TArray<struct FAttributeExpand>                    AttributeExpands;                                         // 0x0364(0x000C) (Edit, ZeroConstructor)
	bool                                               bAddReserveNum;                                           // 0x0370(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0371(0x0003) MISSED OFFSET
	TMap<struct FString, struct FRelateAttributeGroup> RelateAttributeGroup;                                     // 0x0374(0x0050) (ZeroConstructor)
	EActorRegAttrTableType                             ActorAttrType;                                            // 0x03B0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0xC7];                                      // 0x03B1(0x00C7) MISSED OFFSET
	TArray<struct FModAttrSimulateSyncItem>            ModSimulateSyncList;                                      // 0x0478(0x000C) (Net, ZeroConstructor)
	unsigned char                                      UnknownData07[0xC8];                                      // 0x0484(0x00C8) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnNeedSetSpeedOverLimit;                                  // 0x054C(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData08[0xBC];                                      // 0x0558(0x00BC) MISSED OFFSET
	TArray<struct FAttrModifyRecordItem>               ExceptionAttrModifyRecords_DS;                            // 0x0614(0x000C) (BlueprintVisible, Net, ZeroConstructor)
	TArray<struct FAttrModifyRecordItem>               ExceptionAttrModifyRecords_Client;                        // 0x0620(0x000C) (BlueprintVisible, Net, ZeroConstructor)
	unsigned char                                      UnknownData09[0x4];                                       // 0x062C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.AttrModifyComponent");
		return pStaticClass;
	}


	void StartTimerToSyncRecordAttrValue(float Time);
	void SetValueToAttributeSafety(const struct FString& AttrName, float Value, int ModifyRecordType);
	void SetOrignalValueToAttribute(const struct FString& AttrName, float Value);
	void SetAttrModifyStateValue(int Index, bool Value);
	void SetAttributeMaxValue(const struct FString& AttrName, float MaxValue);
	void ServerSendExceptionType(const struct FString& AttrName, int ExceptionType);
	void ServerRequestRecordAttrValue(const struct FString& AttrName);
	void ResponeAttrValue(const struct FString& AttrName, float FinalValue);
	void RequestAttrValue(const struct FString& AttrName);
	bool RemoveModifyItemFromCache(uint32_t ModifyUID);
	void RemoveAttrListener(const struct FString& AttrName, const struct FSluaBPVar& Listener);
	void RemoveAllDynamicModifier(bool bForce);
	bool RegisterModifyAbleAttr(bool bSetAttrByOrigin, TArray<struct FAttrRegisterItem>* AttrRegists);
	void RegistAttrModifyRecordList(const struct FString& AttrName, int RecordLen);
	void PushAttrModifyRecordItem(const struct FString& AttrName, float PreValue, float CurValue, int ModifyRecordType, const struct FString& ModifyDesc);
	void OnRep_ModSimulateSyncList();
	void OnRep_ExceptionAttrModifyRecords();
	void OnRep_DynamicModifier();
	void OnRep_AttrModifyStateList();
	void OnNeedSetSpeedOverLimit__DelegateSignature();
	void OnAttrModifiedEvent__DelegateSignature(TArray<struct FAttrAffected> AffectedAttrS);
	void LuaSetValueToAttributeSafety(const struct FString& AttrName, float Value);
	bool IsAttrModifyStateValidIndex(int Index);
	bool HasDynamicModifier(const struct FString& AttrModifyId);
	void HandleExceptionAttrModify(const struct FString& AttrName, int ExceptionType);
	class UAttrModifyModDataSubsystem* GetSubsystem();
	struct FString GetMaxAttrName(const struct FString& AttrName);
	bool GetAttrModifyStateValue(int Index);
	int GetAttrModifyStateNum();
	struct FAttrModifyItem GetAttrModifyItemByItemName(const struct FString& ItemName);
	float GetAttributeValue(const struct FString& AttrName);
	float GetAttributeOrignalValue(const struct FString& AttrName);
	bool EnableAttrModifierByIndex(int ModifyConfigIndex);
	bool EnableAttrModifier(const struct FString& AttrModifyItemName);
	bool DisableAttrModifierByIndex(int ModifyConfigIndex);
	bool DisableAttrModifier(const struct FString& AttrModifyItemName);
	bool DisableAllAttrModifier(bool bForce);
	void ConditionSyncRecordAttrValue();
	void ClientSyncRecordAttrValue(TArray<struct FAttrDesc> AttrDescs);
	void ClientSendRecordData(const struct FAttrModifyRecordItem& RecordItem, int ExceptionType);
	void ClearAllAttrModify();
	void AddValueToAttribute(const struct FString& AttrName, float Value);
	uint32_t AddModifyItemAndCache(const struct FString& AttrName, EAttrModifyRefType CModifyType, float CValue, bool bEnable, class UObject* Causer, bool oldModify);
	void AddDynamicModifier(bool RepOnlyOwner, struct FAttrModifyItem* AttrModifyItem);
	uint32_t AddBModifyAndCacheWithCParam(const struct FString& AttrName, EAttrModifyRefType CModifyType, float CValue);
	uint32_t AddBModifyAndCache(const struct FString& AttrName, EAttrOperator ModifyType, float Value);
	void AddAttrListener(const struct FString& AttrName, const struct FSluaBPVar& Listener);
};


// Class Basic.AttrModifyInterface
// 0x0000 (0x0020 - 0x0020)
class UAttrModifyInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.AttrModifyInterface");
		return pStaticClass;
	}


	void SetAttrValue(const struct FString& AttrName, float NewVal, int Reason);
	void RequestAttrValue(const struct FString& AttrName);
	void RegisterModifiedAttributes();
	float GetAttrValue(const struct FString& AttrName);
	TArray<class AActor*> GetAttrModifyRelevantActors();
	class UAttrModifyComponent* GetAttrModifyComponent();
	float GetAttributeValue(const struct FString& AttrName);
	void AddAttrValue(const struct FString& AttrName, float AddVal, int Reason);
};


// Class Basic.AttrModifyModDataSubsystem
// 0x0100 (0x0120 - 0x0020)
class UAttrModifyModDataSubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x0020(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.AttrModifyModDataSubsystem");
		return pStaticClass;
	}

};


// Class Basic.BlueprintFunctionOverride
// 0x0048 (0x0068 - 0x0020)
class UBlueprintFunctionOverride : public UBlueprintFunctionLibrary
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0020(0x003C) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x005C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.BlueprintFunctionOverride");
		return pStaticClass;
	}

};


// Class Basic.BPClassManager
// 0x0108 (0x0128 - 0x0020)
class UBPClassManager : public UDataAsset
{
public:
	TArray<struct FBPClassItem>                        BPClassList;                                              // 0x0020(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x002C(0x003C) UNKNOWN PROPERTY: MapProperty Basic.BPClassManager.BPClassLookUp
	TMap<class UClass*, struct FBPClassItemMap>        BPClassLookUpOverride;                                    // 0x0068(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x3C];                                      // 0x00A4(0x003C) UNKNOWN PROPERTY: MapProperty Basic.BPClassManager.BPClassNameLookUp
	TMap<struct FString, struct FBPClassItemMap>       BPClassNameLookUpOverride;                                // 0x00E0(0x0050) (ZeroConstructor, Transient)
	struct FString                                     BPClassManagerPath;                                       // 0x011C(0x000C) (ZeroConstructor, Config)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.BPClassManager");
		return pStaticClass;
	}


	void ModifyClass(class UClass* InNativeClass, const struct FString& ModTag);
	class UClass* GetUClass(int KeyIndex);
	class UClass* GetBPClassOverrideByName(const struct FString& ClassTagName, const struct FString& ModTag);
	class UClass* GetBPClassOverride(class UClass* InNativeClass, const struct FString& ModTag);
	static class UBPClassManager* Get();
};


// Class Basic.BuffNodeLuaInterface
// 0x0000 (0x0020 - 0x0020)
class UBuffNodeLuaInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.BuffNodeLuaInterface");
		return pStaticClass;
	}

};


// Class Basic.BuffUtils
// 0x0000 (0x0020 - 0x0020)
class UBuffUtils : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.BuffUtils");
		return pStaticClass;
	}

};


// Class Basic.DataSearcherInterface
// 0x0000 (0x0020 - 0x0020)
class UDataSearcherInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.DataSearcherInterface");
		return pStaticClass;
	}

};


// Class Basic.DelayReplicationInterface
// 0x0000 (0x0020 - 0x0020)
class UDelayReplicationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.DelayReplicationInterface");
		return pStaticClass;
	}


	void ReSendRPCAfterBeginPlay();
	void ReCallRepAfterBeginPlay();
};


// Class Basic.FeatureSetDefine
// 0x0004 (0x0020 - 0x001C)
class UFeatureSetDefine : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.FeatureSetDefine");
		return pStaticClass;
	}

};


// Class Basic.PathCompressionRef
// 0x0028 (0x0048 - 0x0020)
class UPathCompressionRef : public UDataAsset
{
public:
	struct FString                                     Dict;                                                     // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FSoftObjectPath                             DataTableRef;                                             // 0x0030(0x0018) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.PathCompressionRef");
		return pStaticClass;
	}

};


// Class Basic.GameModeEnvInterface
// 0x0000 (0x0020 - 0x0020)
class UGameModeEnvInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.GameModeEnvInterface");
		return pStaticClass;
	}

};


// Class Basic.ItemContainerInterface
// 0x0000 (0x0020 - 0x0020)
class UItemContainerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.ItemContainerInterface");
		return pStaticClass;
	}


	class UObject* GetOwningObject();
	TArray<class UItemHandleBase*> GetItemHandleListByDefineID(const struct FItemDefineID& DefineID);
	class UItemHandleBase* GetItemHandleByDefineID(const struct FItemDefineID& DefineID);
	TArray<struct FItemDefineID> GetItemDefineIDList();
	struct FItemDefineID GetFirstItemDefineBySpecificID(int ID);
};


// Class Basic.ItemContainerOwnerInterface
// 0x0000 (0x0020 - 0x0020)
class UItemContainerOwnerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.ItemContainerOwnerInterface");
		return pStaticClass;
	}


	void NotifyUpdateCapacity(float inBackPackCapacity, float inOccupiedCapacity);
	void NotifyItemUpdated(const struct FItemDefineID& DefineID, const struct FBattleItemData& ItemData);
	void NotifyItemRemoved(const struct FItemDefineID& DefineID, const struct FBattleItemData& ItemData);
	void NotifyItemEmpty();
	void NotifyItemAdded(const struct FItemDefineID& DefineID, const struct FBattleItemData& ItemData);
};


// Class Basic.ItemFactoryInterface
// 0x0000 (0x0020 - 0x0020)
class UItemFactoryInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.ItemFactoryInterface");
		return pStaticClass;
	}

};


// Class Basic.LuaEventBridgeFunction
// 0x0000 (0x0020 - 0x0020)
class ULuaEventBridgeFunction : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.LuaEventBridgeFunction");
		return pStaticClass;
	}


	static void UnRegisterEventByTarget(class UObject* ObjContext);
	static void UnRegisterEvent(const struct FString& FEventType, const struct FString& EventID, class UObject* ObjContext, int EventHandle);
	static int RegistEvent(const struct FString& EventType, const struct FString& EventID, class UObject* ObjContext, const struct FString& FunctionName);
};


// Class Basic.LuaEventBridge
// 0x00E4 (0x0100 - 0x001C)
class ULuaEventBridge : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	TMap<struct FString, struct FEventTypeContainer>   RegisterEventMap;                                         // 0x0028(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FLuaEventTypeContainer> LuaRegisterEventMap;                                      // 0x0064(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FLuaEventTypeToIDSet>        FilterKeyRegisterMap;                                     // 0x00A0(0x0050) (ZeroConstructor)
	TArray<class ULuaTemBPData*>                       CurrentParamArray;                                        // 0x00DC(0x000C) (ZeroConstructor)
	TArray<class UProperty*>                           Params;                                                   // 0x00E8(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData01[0xC];                                       // 0x00F4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.LuaEventBridge");
		return pStaticClass;
	}


	void SyncLuaRegisterEventNum(const struct FString& EventType, const struct FString& EventID, int Number);
	TArray<class ULuaTemBPData*> GetCurrentParam();
	void DeactivateEventsByFilterKey(uint32_t FilterKey);
	bool CheckNeedPostEventWithFilterKey(uint32_t FilterKey, const struct FString& EventType, const struct FString& EventID, bool bCheckNeedPostLua);
	void ActiveEventByFilterKey(uint32_t FilterKey, const struct FString& EventType, const struct FString& EventID, bool bActive);
};


// Class Basic.LuaEventSubsystem
// 0x00C8 (0x00E8 - 0x0020)
class ULuaEventSubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0020(0x0040) MISSED OFFSET
	TArray<class ULuaTemBPData*>                       CurrentParamArray;                                        // 0x0060(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x7C];                                      // 0x006C(0x007C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.LuaEventSubsystem");
		return pStaticClass;
	}


	void UnRegistEvent(int EventHandle);
	void SetBridgeFunction(const struct FSluaBPVar& OnRegistEvent, const struct FSluaBPVar& OnUnRegistEvent, const struct FSluaBPVar& OnPostEvent, const struct FSluaBPVar& OnPostBlueprintEvent);
	int RegistEvent(const struct FString& EventID, const struct FString& EventType, class UObject* Object, const struct FString& FunctionName);
};


// Class Basic.ModTable
// 0x00C4 (0x00E0 - 0x001C)
class UModTable : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC4];                                      // 0x001C(0x00C4) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.ModTable");
		return pStaticClass;
	}

};


// Class Basic.NetRelevancyGroup
// 0x0024 (0x0040 - 0x001C)
class UNetRelevancyGroup : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<class UUAENetConnection*>                   Connections;                                              // 0x0020(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x14];                                      // 0x002C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.NetRelevancyGroup");
		return pStaticClass;
	}

};


// Class Basic.OnlyActorCompManagerComponent
// 0x0048 (0x0110 - 0x00C8)
class UOnlyActorCompManagerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x00C8(0x0038) MISSED OFFSET
	TArray<class UOnlyActorComponent*>                 CacheUpdateComponents;                                    // 0x0100(0x000C) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x010C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.OnlyActorCompManagerComponent");
		return pStaticClass;
	}

};


// Class Basic.OnlyActorComponentManagerInterface
// 0x0000 (0x0020 - 0x0020)
class UOnlyActorComponentManagerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.OnlyActorComponentManagerInterface");
		return pStaticClass;
	}

};


// Class Basic.OwnerRelevancyDependencyInterface
// 0x0000 (0x0020 - 0x0020)
class UOwnerRelevancyDependencyInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.OwnerRelevancyDependencyInterface");
		return pStaticClass;
	}

};


// Class Basic.PlayerActorChannelEx
// 0x0000 (0x0390 - 0x0390)
class UPlayerActorChannelEx : public UActorChannel
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.PlayerActorChannelEx");
		return pStaticClass;
	}

};


// Class Basic.PlayerActorChannelExActor
// 0x0000 (0x0310 - 0x0310)
class APlayerActorChannelExActor : public AActor
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.PlayerActorChannelExActor");
		return pStaticClass;
	}

};


// Class Basic.PlayerReliableSequentialSyncActor
// 0x0010 (0x0320 - 0x0310)
class APlayerReliableSequentialSyncActor : public APlayerActorChannelExActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0310(0x0008) MISSED OFFSET
	class APlayerController*                           OwningController;                                         // 0x0318(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x031C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.PlayerReliableSequentialSyncActor");
		return pStaticClass;
	}


	void OnActorSpawned(class AActor* Actor);
};


// Class Basic.PlayerReliableSequentialSyncActorChannel
// 0x0000 (0x0390 - 0x0390)
class UPlayerReliableSequentialSyncActorChannel : public UPlayerActorChannelEx
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.PlayerReliableSequentialSyncActorChannel");
		return pStaticClass;
	}

};


// Class Basic.RenderFunctionLibrary
// 0x0000 (0x0020 - 0x0020)
class URenderFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.RenderFunctionLibrary");
		return pStaticClass;
	}


	static void MarkComponentRenderStateDirty(class UActorComponent* Comp);
};


// Class Basic.RepPropertyModOptim
// 0x004C (0x0068 - 0x001C)
class URepPropertyModOptim : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4C];                                      // 0x001C(0x004C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.RepPropertyModOptim");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuff
// 0x0114 (0x0130 - 0x001C)
class USTBaseBuff : public UObject
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x001C(0x0014) MISSED OFFSET
	struct FString                                     BuffName;                                                 // 0x0030(0x000C) (ZeroConstructor, Transient)
	struct FString                                     DisplayName;                                              // 0x003C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Message;                                                  // 0x0048(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class UTexture2D*                                  Icon;                                                     // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  SoundData;                                                // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsDeBuff;                                                 // 0x005C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreMagicalImmunity;                                    // 0x005D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowOtherPawnRefreshBuff;                               // 0x005E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Layerable;                                                // 0x005F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NeedDetachAndAttachForReplaceExit;                        // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NeedDetachAndAttachForAddLayer;                           // 0x0061(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ReplaceExsist;                                            // 0x0062(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               StaysOnDeath;                                             // 0x0063(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LayerMax;                                                 // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InitialLayerCount;                                        // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LayerCount;                                               // 0x006C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              ValidityTime;                                             // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Internal;                                                 // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UUTSkillCondition*>                   BuffConditions;                                           // 0x0078(0x000C) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	float                                              Expiry;                                                   // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FStatusChange>                       StatusChanges;                                            // 0x0088(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               NeedSimulateToClientMulticast;                            // 0x0094(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NeedSimulateToClient;                                     // 0x0095(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESimulateAddBuffRole>                  SimulateAddBuffRole;                                      // 0x0096(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0097(0x0001) MISSED OFFSET
	TArray<struct FName>                               MutexBuffers;                                             // 0x0098(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBuffActionItem>                     BuffActions;                                              // 0x00A4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBuffEventActionItem>                EventBuffActions;                                         // 0x00B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              fADScale;                                                 // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              fAPScale;                                                 // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsAlwaysExists;                                           // 0x00C4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00C5(0x0003) MISSED OFFSET
	class AController*                                 CauserPawnController;                                     // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      CauserPawnActor;                                          // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x00D0(0x000C) MISSED OFFSET
	TArray<struct FUAEBlackboardParameter>             UAEBlackboardParamList;                                   // 0x00DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class AActor*                                      BuffApplier;                                              // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	TMap<class UObject*, int>                          InstancedNodeNameToMemoryMap;                             // 0x00EC(0x0050) (ZeroConstructor)
	int                                                InstancedNodesTotalSize;                                  // 0x0128(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x012C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBaseBuff");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffCarrierInterface
// 0x0000 (0x0020 - 0x0020)
class USTBaseBuffCarrierInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBaseBuffCarrierInterface");
		return pStaticClass;
	}


	void SyncInvincibleData(float TotalTime);
	bool RemoveBuffBySkill(int SkillID, int LayerCount, class AActor* Causer);
	bool RemoveBuffByID(int BuffID, class AActor* Causer, int LayerCount, int CauseSkillID);
	bool IsSameTeamWithFirstPC();
	bool HasBuffID(int BuffID);
	float GetBuffDuration(int InstID, int CauseSkillID);
	bool CheckBuffTarget(class USTBuff* Buff);
	bool ChangeBuffDuration(int InstID, float Duration);
	bool AddBuffBySkill(int SkillID, int LayerCount, class AActor* Causer, int Level);
	int AddBuffByID(int BuffID, class AActor* Causer, int LayerCount, int CauseSkillID, int Level);
};


// Class Basic.STBaseBuffConditionBase
// 0x0008 (0x00D0 - 0x00C8)
class USTBaseBuffConditionBase : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBaseBuffConditionBase");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffEventType
// 0x0004 (0x0020 - 0x001C)
class USTBaseBuffEventType : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBaseBuffEventType");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffEventType_LayerMax
// 0x0000 (0x0020 - 0x0020)
class USTBaseBuffEventType_LayerMax : public USTBaseBuffEventType
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBaseBuffEventType_LayerMax");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffEventType_LayerSpecific
// 0x0008 (0x0028 - 0x0020)
class USTBaseBuffEventType_LayerSpecific : public USTBaseBuffEventType
{
public:
	int                                                LayerCountParam;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBaseBuffEventType_LayerSpecific");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffEventType_Removed
// 0x0000 (0x0020 - 0x0020)
class USTBaseBuffEventType_Removed : public USTBaseBuffEventType
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBaseBuffEventType_Removed");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffEventType_TakeBuffDamage
// 0x0000 (0x0020 - 0x0020)
class USTBaseBuffEventType_TakeBuffDamage : public USTBaseBuffEventType
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBaseBuffEventType_TakeBuffDamage");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffEventType_OnAttach
// 0x0000 (0x0020 - 0x0020)
class USTBaseBuffEventType_OnAttach : public USTBaseBuffEventType
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBaseBuffEventType_OnAttach");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffEventType_ConditionNotMatch
// 0x0000 (0x0020 - 0x0020)
class USTBaseBuffEventType_ConditionNotMatch : public USTBaseBuffEventType
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBaseBuffEventType_ConditionNotMatch");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffEventType_Resurrection
// 0x0000 (0x0020 - 0x0020)
class USTBaseBuffEventType_Resurrection : public USTBaseBuffEventType
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBaseBuffEventType_Resurrection");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffEventType_WeaponAttack
// 0x0010 (0x0030 - 0x0020)
class USTBaseBuffEventType_WeaponAttack : public USTBaseBuffEventType
{
public:
	class AActor*                                      Attacter;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      Victim;                                                   // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HitCount;                                                 // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBaseBuffEventType_WeaponAttack");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffList
// 0x001C (0x0038 - 0x001C)
class USTBaseBuffList : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	TArray<struct FSTBaseBuffTemplateItem>             BuffList;                                                 // 0x0028(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBaseBuffList");
		return pStaticClass;
	}

};


// Class Basic.BuffManagerPathClass
// 0x0018 (0x0328 - 0x0310)
class ABuffManagerPathClass : public AActor
{
public:
	struct FString                                     BuffManagerBlueprintPath;                                 // 0x0310(0x000C) (ZeroConstructor, Config)
	TArray<struct FBuffManagerModPath>                 BuffListPathMap;                                          // 0x031C(0x000C) (ZeroConstructor, Config)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.BuffManagerPathClass");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffStatusType_ImmuneDebuff
// 0x0000 (0x0020 - 0x0020)
class USTBaseBuffStatusType_ImmuneDebuff : public USTBaseBuffStatusType
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBaseBuffStatusType_ImmuneDebuff");
		return pStaticClass;
	}

};


// Class Basic.STBuff
// 0x00FC (0x0118 - 0x001C)
class USTBuff : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x001C(0x0010) MISSED OFFSET
	int                                                BuffID;                                                   // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     BuffName;                                                 // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Desc;                                                     // 0x003C(0x000C) (BlueprintVisible, ZeroConstructor)
	int                                                LayerMax;                                                 // 0x0048(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClientSyncInterval;                                       // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EBuffClientSyncType                                ClientSyncType;                                           // 0x0054(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EBuffTargetType                                    TargetType;                                               // 0x0055(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EBuffRefreshType                                   RefreshType;                                              // 0x0056(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EBuffReActionType                                  ReActionType;                                             // 0x0057(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMultiCauserHandleType                             MultiCauserHandleType;                                    // 0x0058(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMultiSkillHandleType                              MultiSkillHandleType;                                     // 0x0059(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsExecuteOnece;                                           // 0x005A(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RemoveAllLayer;                                           // 0x005B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class USTBuffAction*>                       Actions;                                                  // 0x005C(0x000C) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	bool                                               bNeedShowBuffInBuffList;                                  // 0x0068(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	int                                                LocalizeDescID;                                           // 0x006C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     IconPath;                                                 // 0x0070(0x000C) (BlueprintVisible, ZeroConstructor)
	bool                                               IsClientOwnLife;                                          // 0x007C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ExistForever;                                             // 0x007D(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x007E(0x0002) MISSED OFFSET
	int                                                TipsOnAddBuff;                                            // 0x0080(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     TimeFormula;                                              // 0x0084(0x000C) (BlueprintVisible, ZeroConstructor)
	TArray<class UDataProviderBase*>                   DataProviders;                                            // 0x0090(0x000C) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	TMap<class UObject*, int>                          InstancedNodeNameToMemoryMap;                             // 0x009C(0x0050) (ZeroConstructor)
	int                                                InstancedNodesTotalSize;                                  // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3C];                                      // 0x00DC(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBuff");
		return pStaticClass;
	}


	void TryGetParams(int CauseSkillID);
	void Tick(class UActorComponent* BuffSystemComponent, int InstID, float DetalTime, float TimeSeconds);
	void ResetActionExecute(class UActorComponent* BuffSystemComponent, int InstID);
	void Initialize(class UActorComponent* BuffSystemComponent, int InstID);
	void End(class UActorComponent* BuffSystemComponent, int InstID);
	void Destroy(class UActorComponent* BuffSystemComponent, int InstID);
	bool CopyActions();
	void ChangeNotify(class UActorComponent* BuffSystemComponent, int InstID);
};


// Class Basic.STBuffAction_Lua
// 0x00D8 (0x0120 - 0x0048)
class USTBuffAction_Lua : public USTBuffAction
{
public:
	unsigned char                                      UnknownData00[0x8C];                                      // 0x0048(0x008C) MISSED OFFSET
	TMap<struct FName, struct FString>                 ActionParams;                                             // 0x00D4(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bEnableLuaPrivateData;                                    // 0x0110(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0111(0x0003) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0114(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBuffAction_Lua");
		return pStaticClass;
	}


	void OnTick(float DetalTime);
	void OnInitialize();
	void OnExecute();
	void OnEnd();
	void OnDestroy();
	void OnChangeNotify();
};


// Class Basic.STBuffCondition_Lua
// 0x00D8 (0x0110 - 0x0038)
class USTBuffCondition_Lua : public USTBuffCondition
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0038(0x0088) MISSED OFFSET
	TMap<struct FName, struct FString>                 ActionParams;                                             // 0x00C0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bEnableLuaPrivateData;                                    // 0x00FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00FD(0x0003) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0100(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData02[0x4];                                       // 0x010C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBuffCondition_Lua");
		return pStaticClass;
	}


	void OnInitialize();
	void OnDestroy();
	bool CheckIsTrue();
};


// Class Basic.STBuffConditionComplex
// 0x0008 (0x0040 - 0x0038)
class USTBuffConditionComplex : public USTBuffCondition
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBuffConditionComplex");
		return pStaticClass;
	}


	void OnInitialize();
	void OnDestroy();
	class USTBuffCondition* Copy(class UObject* Outer);
	bool CheckIsTrue();
};


// Class Basic.STBuffConditionNot
// 0x0000 (0x0038 - 0x0038)
class USTBuffConditionNot : public USTBuffCondition
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBuffConditionNot");
		return pStaticClass;
	}


	void OnInitialize();
	void OnDestroy();
	class USTBuffCondition* Copy(class UObject* Outer);
	bool CheckIsTrue();
};


// Class Basic.STBuffConditionAction
// 0x0020 (0x0068 - 0x0048)
class USTBuffConditionAction : public USTBuffAction
{
public:
	class USTBuffCondition*                            Condition;                                                // 0x0048(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ConditionTickInterval;                                    // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Probality;                                                // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EBuffConditionExecuteTimeType                      ExecuteTimeType;                                          // 0x0054(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsDoOnFalse;                                              // 0x0055(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsNeedTick;                                               // 0x0056(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsSetFalseWhenExecute;                                    // 0x0057(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBuffConditionActionItem>            LinkActions;                                              // 0x0058(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBuffConditionAction");
		return pStaticClass;
	}


	void OnTick(float DetalTime);
	void OnInitialize();
	void OnDestroy();
	void OnConditionTrue();
	void OnConditionFalse();
	void OnChangeNotify();
	void CheckCondition();
};


// Class Basic.STBuffSystemComponent
// 0x01E8 (0x02B0 - 0x00C8)
class USTBuffSystemComponent : public UActorComponent
{
public:
	float                                              RPCSyncInterval;                                          // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnClientAddBuffEvent;                                     // 0x00CC(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnClientRemoveBuffEvent;                                  // 0x00D8(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnClientUpdateBuffEvent;                                  // 0x00E4(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAddBuffEvent;                                           // 0x00F0(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TMap<int, class UUAEBlackboard*>                   BuffBlackboardMap;                                        // 0x00FC(0x0050) (ZeroConstructor)
	struct FBuffIncNetArray                            SyncBriefs;                                               // 0x0138(0x0018) (Net)
	struct FBuffIncNetArray                            SyncRefBriefs;                                            // 0x0150(0x0018)
	struct FBuffIncNetArray                            OwnerSyncBriefs;                                          // 0x0168(0x0018) (Net)
	struct FBuffIncNetArray                            OwnerSyncRefBriefs;                                       // 0x0180(0x0018)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0198(0x003C) UNKNOWN PROPERTY: SetProperty Basic.STBuffSystemComponent.BriefRemoveInstIds
	unsigned char                                      UnknownData01[0xDC];                                      // 0x01D4(0x00DC) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBuffSystemComponent");
		return pStaticClass;
	}


	void UpdateClientBuff(const struct FClientSyncBrief& Brief);
	void RemoveClientBuff(int InstID);
	void RemoveBuff(int BuffID, int LayerCount, class AActor* Causer, int CauseSkillID);
	void RemoveAllBuffs();
	void OnRep_SyncBriefs();
	void OnRep_OwnerSyncBriefs();
	void OnClientUpdateBuffEvent__DelegateSignature(int BuffID, int SkillID, int InstID);
	void OnClientRemoveBuffEvent__DelegateSignature(int BuffID, int SkillID, int InstID);
	void OnClientAddBuffEvent__DelegateSignature(int BuffID, int SkillID, int InstID);
	void OnAddBuffEvent__DelegateSignature(int BuffID, int SkillID, bool IsExist, class AActor* Causer);
	bool HasSkillID(int SkillID);
	bool HasBuff(int BuffID);
	class UBuffConfigSubsystem* GetSubsystem();
	class USTBuff* GetSTBuffByBuffID(int BuffID);
	TEnumAsByte<ENetRole> GetRealOwnerRoleSafety();
	int GetBuffLayerCount(int InstID, int CauseSkillID);
	TArray<struct FBuffInstInfo> GetBuffInfoByBuffID(int BuffID);
	bool GetBuffInfo(int InstID, struct FBuffInstInfo* OutBuff);
	float GetBuffDuration(int InstID, int CauseSkillID);
	float GetBuffDSEndTime(int InstID, int CauseSkillID);
	TArray<struct FBuffInstInfo> GetAllBuffInfo();
	void ClearBuffs(bool bClearAll, bool bImmediately);
	bool ChangeDuration(int InstID, float Duration);
	int AddBuff(int BuffID, class AActor* Causer, int LayerCount, int CauseSkillID, int Level);
};


// Class Basic.BuffConfigSubsystem
// 0x00E8 (0x0108 - 0x0020)
class UBuffConfigSubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x0020(0x0024) MISSED OFFSET
	TMap<int, struct FBuffTableRow>                    Table;                                                    // 0x0044(0x0050) (ZeroConstructor)
	TMap<struct FString, class UClass*>                BuffClassMap;                                             // 0x0080(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x4C];                                      // 0x00BC(0x004C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.BuffConfigSubsystem");
		return pStaticClass;
	}

};


// Class Basic.UStringMap
// 0x003C (0x0058 - 0x001C)
class UUStringMap : public UObject
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x001C(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.UStringMap");
		return pStaticClass;
	}

};


// Class Basic.STExtraNetPriorityConfig
// 0x0088 (0x00A8 - 0x0020)
class USTExtraNetPriorityConfig : public UWorldSubsystem
{
public:
	bool                                               ExtraNetPriorityEnabled;                                  // 0x0020(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	TMap<ESTExtraNetPriorityFlags, float>              ExtraNetPriorityFactor;                                   // 0x0024(0x0050) (ZeroConstructor, Config)
	bool                                               EnemyExtraNetPriorityEnabled;                             // 0x0060(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	float                                              EnemyExtraNetPriorityFactor;                              // 0x0064(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	TMap<ESTExtraNetPriorityIssueID, ESTExtraNetPriorityFlags> NetPriorityIssue;                                         // 0x0068(0x0050) (ZeroConstructor, Config)
	float                                              MoveExtraNetPriorityVelocitySquared;                      // 0x00A4(0x0004) (ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STExtraNetPriorityConfig");
		return pStaticClass;
	}

};


// Class Basic.STExtraNetPriorityInterface
// 0x0000 (0x0020 - 0x0020)
class USTExtraNetPriorityInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STExtraNetPriorityInterface");
		return pStaticClass;
	}

};


// Class Basic.DataTableRowDesc
// 0x0054 (0x0070 - 0x001C)
class UDataTableRowDesc : public UObject
{
public:
	unsigned char                                      UnknownData00[0x54];                                      // 0x001C(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.DataTableRowDesc");
		return pStaticClass;
	}

};


// Class Basic.DataTableProxy
// 0x0084 (0x00A0 - 0x001C)
class UDataTableProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UDataTable*                                  DataTable;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x78];                                      // 0x0024(0x0078) MISSED OFFSET
	class UDataTableRowDesc*                           Desc;                                                     // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.DataTableProxy");
		return pStaticClass;
	}

};


// Class Basic.TableManagerSubsystem
// 0x0078 (0x0098 - 0x0020)
class UTableManagerSubsystem : public UGameInstanceSubsystem
{
public:
	struct FString                                     BaseTableRelativeDir;                                     // 0x0020(0x000C) (ZeroConstructor, Config)
	struct FString                                     ModTableRelativeDir;                                      // 0x002C(0x000C) (ZeroConstructor, Config)
	struct FString                                     TableRelativeDir;                                         // 0x0038(0x000C) (ZeroConstructor, Config)
	struct FString                                     ManualTableDirectory;                                     // 0x0044(0x000C) (ZeroConstructor, Config)
	struct FString                                     CurrentModName;                                           // 0x0050(0x000C) (ZeroConstructor)
	TMap<struct FString, class UDataTableProxy*>       TableCache;                                               // 0x005C(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.TableManagerSubsystem");
		return pStaticClass;
	}


	void SetModName(const struct FString& ModName);
	class UDataTableProxy* GetTableProxy(const struct FString& tableName, bool bTempory);
	static bool GetTableDataField(const struct FString& tableName, const struct FTableRowBase& Key, const struct FString& Field, struct FTableRowBase* Out);
	static bool GetTableData(const struct FString& tableName, const struct FString& Key, struct FTableRowBase* OutRow);
};


// Class Basic.UAEBPGameSubsystem
// 0x0050 (0x0070 - 0x0020)
class UUAEBPGameSubsystem : public UWorldSubsystem
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0020(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.UAEBPGameSubsystem");
		return pStaticClass;
	}

};


// Class Basic.UAEBuffPoolSubsystem
// 0x0048 (0x0068 - 0x0020)
class UUAEBuffPoolSubsystem : public UWorldSubsystem
{
public:
	TArray<class USTBuff*>                             BuffList;                                                 // 0x0020(0x000C) (ExportObject, ZeroConstructor)
	TMap<struct FString, class USTBuff*>               BuffInstancedTemplateMap;                                 // 0x002C(0x0050) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.UAEBuffPoolSubsystem");
		return pStaticClass;
	}

};


// Class Basic.UAEGameEngine
// 0x0048 (0x0BF8 - 0x0BB0)
class UUAEGameEngine : public UGameEngine
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0BB0(0x000C) MISSED OFFSET
	class UBackendHUD*                                 AssociatedBackendHUD;                                     // 0x0BBC(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0BC0(0x000C) MISSED OFFSET
	bool                                               bEnableAutoStat;                                          // 0x0BCC(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableAutoTickDeltaThreshold;                            // 0x0BCD(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0BCE(0x0002) MISSED OFFSET
	float                                              AutoTickDeltaThresholdFactor;                             // 0x0BD0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              StatCollection_AvgTickDeltaThreshold;                     // 0x0BD4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              AutoStat_AvgTickDeltaThreshold;                           // 0x0BD8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              AutoStat_StartTime;                                       // 0x0BDC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0BE0(0x0004) MISSED OFFSET
	float                                              AutoStat_Duration_Engine;                                 // 0x0BE4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              AutoStat_Duration_PhysX;                                  // 0x0BE8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                                       // 0x0BEC(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.UAEGameEngine");
		return pStaticClass;
	}

};


// Class Basic.BPTable
// 0x0084 (0x00A0 - 0x001C)
class UBPTable : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	TMap<int, struct FBPTableItem>                     BPTableItemMap;                                           // 0x0028(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<int, struct FBPTableItem>                     BPTableItemMap_Mod;                                       // 0x0064(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.BPTable");
		return pStaticClass;
	}


	struct FString GetWrapperPath(int ID);
	class UClass* GetWrapperClass(int ID);
	struct FString GetPath(int ID, bool IsLobby, bool bForceLobby);
	class UObject* GetObject(int ID, class UObject* Outer, bool IsLobby, bool IsLowDevice);
	class UObject* GetModObject(int ID, class UObject* Outer, bool IsLobby);
	class UClass* GetModClass(int ID, bool IsLobby);
	class UClass* GetCustom1Class(int ID);
	class UClass* GetClass(int ID, bool IsLobby, bool IsLowDevice);
	void ConvertPath(int ID);
};


// Class Basic.UAELoadedClassManager
// 0x0254 (0x0270 - 0x001C)
class UUAELoadedClassManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x001C(0x003C) MISSED OFFSET
	TMap<struct FString, class UBPTable*>              BPTableMap_Mod;                                           // 0x0058(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<int, struct FString>                          BPTableNameMap;                                           // 0x0094(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LoadedClassManagerClassName;                              // 0x00D0(0x000C) (ZeroConstructor, Config)
	unsigned char                                      UnknownData01[0x150];                                     // 0x00DC(0x0150) MISSED OFFSET
	TMap<class UObject*, struct FSoftClassPath>        AsyncLoadClassDict;                                       // 0x022C(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0268(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.UAELoadedClassManager");
		return pStaticClass;
	}


	void InitTableData();
	void InitialModTableItemMap();
	void InitBPTableMap_Mod();
	void InitBPTableMap();
	void HandleTableModNameChanged(const struct FString& InModName);
	struct FString GetWrapperPath(const struct FString& BPTableName, int ID);
	class UClass* GetWrapperClass(const struct FString& BPTableName, int ID);
	struct FString GetPath(const struct FString& BPTableName, int ID, bool IsLobby, bool bForceLobby);
	class UObject* GetObject(const struct FString& BPTableName, int ID, class UObject* Outer, bool IsLobby, bool IsLowDevice);
	class UClass* GetCustom1Class(const struct FString& BPTableName, int ID);
	class UClass* GetClass(const struct FString& BPTableName, int ID, bool IsLobby, bool IsLowDevice);
	struct FString GetBPTableName(int Type);
	void GetAssetByAssetReferenceAsync(const struct FSoftObjectPath& AssetReference, const struct FScriptDelegate& AssetLoadSuccessDelegate);
	static class UUAELoadedClassManager* Get();
	class UBPTable* CreateAndAddBPTable_Mod(const struct FString& BPTableName);
	class UBPTable* CreateAndAddBPTable(const struct FString& BPTableName);
	void ClearModTableItemMap();
	void ClearBPTable_Mod();
	void ClearBPTable();
	void ClearAssetByAssetReferenceAsync(const struct FScriptDelegate& AssetLoadSuccessDelegate);
	void ClearAllData();
};


// Class Basic.UAEMeshComponent
// 0x0000 (0x0BA0 - 0x0BA0)
class UUAEMeshComponent : public USkeletalMeshComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.UAEMeshComponent");
		return pStaticClass;
	}


	int GetPredictedLODLevel();
};


// Class Basic.UAENetConnection
// 0x0290 (0x2B728 - 0x2B498)
class UUAENetConnection : public UIpConnection
{
public:
	unsigned char                                      UnknownData00[0x9C];                                      // 0x2B498(0x009C) MISSED OFFSET
	int                                                InitialHandshakeTimeoutNumThreshold;                      // 0x2B534(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x2B538(0x0004) MISSED OFFSET
	int                                                ActorChannelProcessBunchErrorNumThreshold_Server_Global;  // 0x2B53C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                ActorChannelProcessBunchErrorNumThreshold_Client_Global;  // 0x2B540(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                ActorChannelProcessBunchErrorNumThreshold_Client_PerActor;// 0x2B544(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3C];                                      // 0x2B548(0x003C) MISSED OFFSET
	bool                                               bEnableHTTPDNS;                                           // 0x2B584(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x2B585(0x0003) MISSED OFFSET
	struct FString                                     HTTPDNSServerAddr;                                        // 0x2B588(0x000C) (ZeroConstructor, Config)
	float                                              HTTPDNSResponseTimeout;                                   // 0x2B594(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0x10];                                      // 0x2B598(0x0010) MISSED OFFSET
	float                                              CheckLevelInitializedTime;                                // 0x2B5A8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              CheckLevelActorsOvertime;                                 // 0x2B5AC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              TempCheckLevelInitializedTime;                            // 0x2B5B0(0x0004) (ZeroConstructor, IsPlainOldData)
	TMap<struct FName, struct FUnLoadLevelActorCollection> UnLevelInitActors;                                        // 0x2B5B4(0x0050) (ZeroConstructor)
	class UNetRelevancyGroup*                          RelevancyGroup;                                           // 0x2B5F0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0xC8];                                      // 0x2B5F4(0x00C8) MISSED OFFSET
	TArray<struct FPendingRegionNetworkObject>         PendingRegionNetworkObjects;                              // 0x2B6BC(0x000C) (ZeroConstructor)
	float                                              MinRegionActorTickDelta;                                  // 0x2B6C8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxRegionActorTickDelta;                                  // 0x2B6CC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData06[0xC];                                       // 0x2B6D0(0x000C) MISSED OFFSET
	bool                                               EnableWeakNetUpdate;                                      // 0x2B6DC(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x2B6DD(0x0003) MISSED OFFSET
	float                                              MinWeakNetUpdateDelay;                                    // 0x2B6E0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxWeakNetUpdateDelay;                                    // 0x2B6E4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              SquareSegmentSize;                                        // 0x2B6E8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxSegmentDistance;                                       // 0x2B6EC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxObjectNumInSegments;                                   // 0x2B6F0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData08[0xD];                                       // 0x2B6F4(0x000D) MISSED OFFSET
	bool                                               bRecreateSocketOnLost;                                    // 0x2B701(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData09[0x12];                                      // 0x2B702(0x0012) MISSED OFFSET
	float                                              UpdateClientPingTimeThreshold;                            // 0x2B714(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData10[0x10];                                      // 0x2B718(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.UAENetConnection");
		return pStaticClass;
	}


	bool IsClosed();
	bool HasSameRegion(const struct FVector& OldLoc, const struct FVector& NewLoc);
	void ForceRefreshRegionWeakNetUpdateObjects(float WeakNetConsiderFrequency);
};


// Class Basic.UAENetDriver
// 0x00F8 (0x0620 - 0x0528)
class UUAENetDriver : public UIpNetDriver
{
public:
	bool                                               bEnableCollectNetStats;                                   // 0x0528(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableResetNetStats;                                     // 0x0529(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF6];                                      // 0x052A(0x00F6) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.UAENetDriver");
		return pStaticClass;
	}

};


// Class Basic.UAETableManager
// 0x0414 (0x0430 - 0x001C)
class UUAETableManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	TArray<struct FName>                               TablesNeedReleasedInBattle;                               // 0x0028(0x000C) (ZeroConstructor, Config)
	struct FString                                     ManualTableDirectory;                                     // 0x0034(0x000C) (ZeroConstructor, Config)
	unsigned char                                      UnknownData01[0xC0];                                      // 0x0040(0x00C0) MISSED OFFSET
	bool                                               AllowItemTable;                                           // 0x0100(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0101(0x0003) MISSED OFFSET
	TArray<class UUAEDataTable*>                       TableObjList;                                             // 0x0104(0x000C) (ZeroConstructor)
	class UWorld*                                      CurWorld;                                                 // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData)
	TMap<struct FName, TWeakObjectPtr<class UUAEDataTable>> TableObjMap;                                              // 0x0114(0x0050) (ZeroConstructor)
	TMap<struct FName, TWeakObjectPtr<class UUAEDataTable>> TableObjMap_Mod;                                          // 0x0150(0x0050) (ZeroConstructor)
	struct FScriptMulticastDelegate                    OnTableCreateInFighting;                                  // 0x018C(0x000C) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData03[0xCC];                                      // 0x0198(0x00CC) MISSED OFFSET
	struct FString                                     PathCompressionConfigsPath;                               // 0x0264(0x000C) (ZeroConstructor, Config)
	bool                                               bIsPathCompression;                                       // 0x0270(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bIsPathCompressionCache;                                  // 0x0271(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0272(0x0002) MISSED OFFSET
	int                                                PathCompressionCacheMaxSize;                              // 0x0274(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bTranslationFallBackUnloadDuplicate;                      // 0x0278(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bShrinkTranslationMap;                                    // 0x0279(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData05[0x6];                                       // 0x027A(0x0006) MISSED OFFSET
	struct FString                                     BaseTableRelativeDir;                                     // 0x0280(0x000C) (ZeroConstructor, Config)
	struct FString                                     ModTableRelativeDir;                                      // 0x028C(0x000C) (ZeroConstructor, Config)
	TArray<struct FString>                             BaseModTableConfig;                                       // 0x0298(0x000C) (ZeroConstructor, Config)
	TMap<struct FName, class UModTable*>               ModTableMap;                                              // 0x02A4(0x0050) (ZeroConstructor)
	TMap<struct FName, TWeakObjectPtr<class UUAEDataTable>> ModTableObjMap;                                           // 0x02E0(0x0050) (ZeroConstructor)
	TArray<class UUAEDataTable*>                       InGameTableObjList;                                       // 0x031C(0x000C) (ZeroConstructor)
	TMap<struct FName, bool>                           CheckNeedModMap;                                          // 0x0328(0x0050) (ZeroConstructor)
	struct FString                                     CurrentModName;                                           // 0x0364(0x000C) (ZeroConstructor)
	struct FString                                     EmptyModName;                                             // 0x0370(0x000C) (ZeroConstructor)
	TMap<struct FString, class UBaseTableResMap*>      LoadedTableMap;                                           // 0x037C(0x0050) (ZeroConstructor)
	TMap<struct FString, bool>                         CheckMapTable;                                            // 0x03B8(0x0050) (ZeroConstructor)
	TMap<struct FString, class UDataTableProxy*>       TableCache;                                               // 0x03F4(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.UAETableManager");
		return pStaticClass;
	}


	void ReleaseTable(const struct FName& TableFName);
	class UUAEDataTable* GetTablePtr_Mod(const struct FName& tableName);
	class UUAEDataTable* GetTablePtr(const struct FName& tableName, bool bCheckModTable);
	class UBaseTableResMap* GetTableMap(const struct FString& tableName);
	static bool GetTableData(const struct FString& tableName, const struct FString& Key, struct FTableRowBase* OutRow);
	static class UUAETableManager* GetInstance();
	static struct FString GetDomainByID(int ID);
	static class UUAEDataTable* GetDataTableStatic_Mod(const struct FString& tableName);
	static class UUAEDataTable* GetDataTableStatic(const struct FString& tableName);
	class UDataTableProxy* GetDataTableProxy(const struct FString& tableName, bool bTempory);
};


// Class Basic.UELanguageUtilityMethods
// 0x0000 (0x0020 - 0x0020)
class UUELanguageUtilityMethods : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.UELanguageUtilityMethods");
		return pStaticClass;
	}


	static void SetDownLoadLanguageName(const struct FString& Language);
	static bool IsJaguar();
	static struct FString GetPublishRegion();
	static struct FString GetDownLoadLanguageName();
	static struct FString GetCurrentLanguageName();
	static bool CheckLocalizationExist();
};


// Class Basic.UEMathUtilityMethods
// 0x0000 (0x0020 - 0x0020)
class UUEMathUtilityMethods : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.UEMathUtilityMethods");
		return pStaticClass;
	}


	static void VectorNormalizeMultiple(const struct FVector& v1, float Multiple, struct FVector* Out);
	static void VectorMultiple(const struct FVector& v1, float Multiple, struct FVector* Out);
	static void VectorMinus(const struct FVector& v1, const struct FVector& v2, struct FVector* Out);
	static void VectorAdditive(const struct FVector& v1, const struct FVector& v2, struct FVector* Out);
	static bool FilterOKForCurrentMode(unsigned char ModeType, int ModeOpenFlag, const struct FString& ModeTypes);
	static void Conv_VectorToRotator(const struct FVector& Vec, struct FRotator* Out);
	static float CalculateAngleToTargetAngle(float StartAngle, float targetAngle, float stepAngle, EAngleRotationDirectionType Dir);
	static int BKDRHash(const struct FString& StrToHash, int Mod);
	static float AngleDis(float angleA, float angleB);
};


// Class Basic.UEPathUtilityMethods
// 0x0000 (0x0020 - 0x0020)
class UUEPathUtilityMethods : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.UEPathUtilityMethods");
		return pStaticClass;
	}


	static bool IsPathExist(const struct FString& HandlePath);
	static bool IsAvatarResPathExist(const struct FString& HandlePath);
	static struct FString GetModName(class UObject* WorldContext);
	static void GetFullModName(class UObject* WorldContext, struct FString* MainMod, struct FString* SubMod);
	static bool FilterOKForCurrentModeString(const struct FString& CurrentModeString, const struct FString& CurrentExtraModeString, const struct FString& ModStringInfo, unsigned char ModeType, int ModeOpenFlag);
};


}

