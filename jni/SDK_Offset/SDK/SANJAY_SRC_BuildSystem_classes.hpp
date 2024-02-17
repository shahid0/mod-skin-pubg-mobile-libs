#pragma once

// Pubg Mobile Beta (3.0) SDK by Telegram @Sanjay_Src

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class BuildSystem.BuildingActorBase
// 0x0170 (0x0510 - 0x03A0)
class ABuildingActorBase : public ALuaActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03A0(0x0010) MISSED OFFSET
	bool                                               bCustomBlockingChannels;                                  // 0x03B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03B1(0x0003) MISSED OFFSET
	TArray<TEnumAsByte<ECollisionChannel>>             CustomBlockingChannels;                                   // 0x03B4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               bCheckVisibilitySkipTypes;                                // 0x03C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSkipCheckOwnerCollision;                                 // 0x03C1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x03C2(0x0002) MISSED OFFSET
	TArray<class UClass*>                              VisibilitySkipTypes;                                      // 0x03C4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FBuildingActorWorldSnapSetup                WorldSnapSetup;                                           // 0x03D0(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	float                                              DebugHealthDistance;                                      // 0x03F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DebugHealthOffset;                                        // 0x03F8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              ProhibitedActorTemplateList;                              // 0x0404(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              EnableBuildingList;                                       // 0x0410(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData03[0x4];                                       // 0x041C(0x0004) MISSED OFFSET
	struct FSoftObjectPath                             PreBuildingEffectPath;                                    // 0x0420(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	bool                                               CanBuildUnderWater;                                       // 0x0438(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldSnapToWorldGrid;                                   // 0x0439(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x043A(0x0002) MISSED OFFSET
	float                                              UnderWaterMaxBuildDepth;                                  // 0x043C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  DestroyedParticleTransformOffset;                         // 0x0440(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FSoftObjectPath                             DestroyBuildingEffectPath;                                // 0x0470(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	bool                                               bUseExtraCenterOffset;                                    // 0x0488(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseExtraCenterRotation;                                  // 0x0489(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x048A(0x0002) MISSED OFFSET
	struct FVector                                     ActorCollisionBoxExtern;                                  // 0x048C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ActorCollisionBoxCenter;                                  // 0x0498(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    ActorCollisionBoxRotator;                                 // 0x04A4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ViewLocationOffset;                                       // 0x04B0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	float                                              Health;                                                   // 0x04BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDestroyWhenZeroHealth;                                   // 0x04C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x04C1(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnHealthChangeNotify;                                     // 0x04C4(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              MaxDeviation;                                             // 0x04D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxTraceDepth;                                            // 0x04D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDoQuadTrace;                                             // 0x04D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EBuildingActorConstructingMode>        ConstructingMode;                                         // 0x04D9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableOverlayPlace;                                      // 0x04DA(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnablePitchRotatePlace;                                  // 0x04DB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAutoPickValidPlace;                                      // 0x04DC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x04DD(0x0003) MISSED OFFSET
	float                                              OverlayPlaceHeight;                                       // 0x04E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OverlayMaxHeightFromGround;                               // 0x04E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DetectDeath;                                              // 0x04E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x04EC(0x0004) MISSED OFFSET
	int                                                MaxCountLimit;                                            // 0x04F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDoDensityCheck;                                          // 0x04F4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x04F5(0x0003) MISSED OFFSET
	struct FString                                     LuaModPath;                                               // 0x04F8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData10[0xC];                                       // 0x0504(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BuildSystem.BuildingActorBase");
		return pStaticClass;
	}


	static void SpawnDestroyParticle(bool bSpawnParticle, const struct FTransform& Loc, const struct FSoftObjectPath& DestroyBuildingEffectPath, class UWorld* World);
	void PlayDestroyAnimation(bool bUseParticle);
	void OnTakeDamageFromVehicle(class AActor* DamagedActor, float ForwardSpeed, class AActor* DamageCauser);
	void OnRep_Health();
	void OnPlayDestroyAnimation(bool bUseParticle);
	void OnBuildingActorDamaged(float Health);
	void OnBornAnimationPlayEndInClient();
	int GetBuildID();
	void BPOnOwnerChanged();
};


// Class BuildSystem.BuildSystemComponent
// 0x01F0 (0x0340 - 0x0150)
class UBuildSystemComponent : public ULuaActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnConstructionComplete;                                   // 0x0150(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDoubleClickMode2Event;                                  // 0x015C(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDoubleClickMode2PercentEvent;                           // 0x0168(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              MaxmumConstructingDistance;                               // 0x0174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentAvatarID;                                          // 0x0178(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x017C(0x0038) MISSED OFFSET
	class UClass*                                      BuildingSelectorClass;                                    // 0x01B4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      SelectBuildMeshClass;                                     // 0x01B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UpdateBuildEnableTimer;                                   // 0x01BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinBuildDist;                                             // 0x01C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GridGroundThreshold;                                      // 0x01C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AIIsOpenAdsorb;                                           // 0x01C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AIIsOpenLeftAndRightTry;                                  // 0x01C9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x01CA(0x0002) MISSED OFFSET
	float                                              GridGroundCheckDepth;                                     // 0x01CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWorldGridData                              WorldGridData;                                            // 0x01D0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	bool                                               bCanPlaceOnConstructableActor;                            // 0x01DC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x01DD(0x0003) MISSED OFFSET
	int                                                bIsFastPlacementMode;                                     // 0x01E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Mode2PressTouchBuildIndex;                                // 0x01E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsStartPreBuildMode2;                                    // 0x01E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x01E9(0x0003) MISSED OFFSET
	struct FVector2D                                   Mode2PreBuildPos;                                         // 0x01EC(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentDoubleClickDuration;                               // 0x01F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ValidDoubleClickDuration;                                 // 0x01F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ValidDoubleClickInterval;                                 // 0x01FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ValidDoubleClickDistance;                                 // 0x0200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSouldSkipOwningPlayer;                                   // 0x0204(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bNativeTouchActorBuildEnabled;                            // 0x0205(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bNativeDoubleCkickBuildEnabled;                           // 0x0206(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x0207(0x0001) MISSED OFFSET
	unsigned char                                      UnknownData05[0x3C];                                      // 0x0207(0x003C) UNKNOWN PROPERTY: MapProperty BuildSystem.BuildSystemComponent.ActorSelectorMap
	TArray<class UClass*>                              SkippingObjects;                                          // 0x0244(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               bDebugDraw;                                               // 0x0250(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPickLocationDebugDraw;                                   // 0x0251(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0252(0x0002) MISSED OFFSET
	TArray<class UClass*>                              FilterTemplates;                                          // 0x0254(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              ActorsShouldSkipVisiblityCheck;                           // 0x0260(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<ECollisionChannel>                     BuildingGridChannel;                                      // 0x026C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x026D(0x0003) MISSED OFFSET
	float                                              MaxCanAdsorbAngle;                                        // 0x0270(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SnappingDistance;                                         // 0x0274(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SnappingDetectRadius;                                     // 0x0278(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AIMaxCanRotateAngle;                                      // 0x027C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCheckPlaceActorPosSwitch;                                // 0x0280(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0281(0x0003) MISSED OFFSET
	float                                              FloatErrorTolerance;                                      // 0x0284(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ASelectBuildActor*                           SelectBuildActor;                                         // 0x0288(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x20];                                      // 0x028C(0x0020) MISSED OFFSET
	int                                                CachedCDOIndex;                                           // 0x02AC(0x0004) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      CachedCDOActor;                                           // 0x02B0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x8C];                                      // 0x02B4(0x008C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BuildSystem.BuildSystemComponent");
		return pStaticClass;
	}


	void TryAttachToMoveablePlatform(class AActor* SpawnedBuilding, const struct FVector& BuildLocation);
	void StopPlaceBuilding();
	void StartPrePlaceBuilding(int InBuildID, int AvatarID, TEnumAsByte<EBuildingViewType> viewType);
	void SkipCDTimeByBuildID(int InBuildID, float IncreaseRate);
	bool ShouldEnableDoubleTouchMode();
	void SetPrebuildEnabled(bool CanBePlaced, bool IsVisible);
	void SetBuildingData(int Index, const struct FBuildingData& InData);
	void ServerStopPlaceBuilding();
	void ServerStartPrePlaceBuilding();
	void ServerPlaceBuildActor(int BuildingIndex, const struct FVector& BuildLocation, const struct FRotator& BuildRotation, uint32_t InResult, int AvatarID, bool Relative);
	void S2C_SkipCDTimeByBuildID(int InBuildID, float IncreaseRate);
	void S2C_ResetBuildngCDByBuildID(int InBuildID, float InNewCDTime);
	void ResetBuildngCDByBuildID(int InBuildID, float InNewCDTime);
	void ResetBuildList();
	bool ProccessNothingHitTraceOverlap(const struct FVector& DestLocation, const struct FRotator& DestRotation, float MaxBuildDist, int buildIndex, const struct FVector& ViewLocation, struct FVector* OutLocation);
	void PlaceBuildingWithIndex(int buildIndex, int AvatarID, bool bRelative);
	void PlaceBuildingAtLocation(int buildIndex, const struct FVector& Loc, const struct FRotator& Rot);
	void PlaceBuilding(int AvatarID, bool bRelative);
	void OverriveDeploymentTransform(const struct FRotator& rotIn, const struct FVector& locIn, struct FRotator* rotOut, struct FVector* locOut);
	void OverrideBuildingMaxBuildDistance(float BuildingMaxDistance, bool SetAll, int BuildingID);
	void OnTouchedConstructableBoxEnded(TEnumAsByte<ETouchIndex> FingerIndex, class UPrimitiveComponent* TouchedComponent);
	void OnTouchedConstructableBox(TEnumAsByte<ETouchIndex> FingerIndex, class UPrimitiveComponent* TouchedComponent);
	void OnTouchActorBuild(const struct FVector2D& ScreenPosition, class APlayerController* Controller);
	void OnAsyncLoadingEffectFinished(int buildIndex);
	void OnAsyncLoadingBuildingFinished(int buildIndex);
	bool IsValidAvatar(int AvatarID);
	bool IsOverlayBuildHeightValid(const struct FVector& BuildLocation, float OverlayMaxHeightFromGround);
	bool IsInPreBuildingMode();
	bool IsCanPlaceBuildingBP(int InBuildID);
	bool IsCanPlaceBuilding(int InBuildID, TEnumAsByte<EBuildingActionType> _TYPE);
	bool IsActorProhibited(class AActor* Actor);
	struct FSoftObjectPath GetPreBuildingEffectPath(int InBuildID, int AvatarID);
	class APlayerController* GetOwnerPlayerController();
	float GetMaxDistance();
	bool GetIsHasInitData();
	int GetIndexByBuildingID(int BuildID);
	TEnumAsByte<EBuildingType> GetCurrentBuildType();
	class AActor* GetCDOByIndex(int Index);
	TArray<struct FBuildingData> GetBuildingList();
	void EnableBuildingByID(int BuildID, bool bEnable);
	void DoSceenTouchBuild(int buildIndex, const struct FVector2D& ScreenPostion, int PointerIndex, TEnumAsByte<EBuildingActionType> _TYPE, bool IsBegin, TEnumAsByte<EBuildingActionType> CustomBuildEvent);
	bool DensityCheck(const struct FBuildingActorDensityCheck& DensityCheckParmas);
	bool CheckShouldSkipByVisibility(class UPrimitiveComponent* _comp, int buildIndex);
	bool CheckPlacementWithPitch(const struct FHitResult& Hit, const struct FVector& BoxExtent, const struct FBuildingData& CurBuildData, struct FVector* OutLocation, struct FRotator* OutRotation);
	bool CheckPlacementOverlap(TArray<struct FHitResult> HitArray, const struct FVector& ViewLocation, const struct FVector& BoxExtent, const struct FBuildingData& CurBuildData, const struct FRotator& BuildRotation, const struct FRotator& ControlRot, struct FVector* OutLocation, bool* HasForbiddenObject);
	bool CheckObjectIsOneOfTheTemplate(class UObject* Obj, TArray<class UClass*> _ActorFilterTemplates);
	bool CheckCollisionNeedSkipOwner(int buildIndex);
	bool BuildAtWorldLoc(int buildIndex, const struct FTransform& tranx, const struct FVector& EndLocation, bool bUseTrace, TEnumAsByte<EBuildingActionType> BuildType);
	void AddBuildingData(const struct FBuildingData& InData);
};


// Class BuildSystem.BuildingActorInterface
// 0x0000 (0x0020 - 0x0020)
class UBuildingActorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BuildSystem.BuildingActorInterface");
		return pStaticClass;
	}


	bool ShouldUseExtraRotation();
	bool ShouldUseExtraOffset();
	bool ShouldSnapToGrid();
	bool ShouldSkipCheckOwnerCollision();
	bool ShouldCustomBlockingChannels();
	bool ShouldCheckVisibilityTypes();
	bool ShouldAttachToMovementPlatform();
	void SetBuildingActorID(int BuildID);
	void PrebuildCDOBodyInstance(class UWorld* World, const struct FTransform& tranx);
	void NonCullingBeginPlay();
	float MaxUnderWaterBuildDepth();
	bool IsEnablePitchRotatePlace();
	bool IsEnableOverlayPlace();
	bool IsAutoPickValidPlace();
	void HandleBuildingDestroyed(class AController* InstigatedBy);
	void HandleBuildingConstructed(class AController* InstigatedBy);
	struct FBuildingActorWorldSnapSetup GetWorldSnapSetup();
	TArray<class UClass*> GetVisibilitySkipTypes();
	struct FVector GetViewLocationOffset();
	TArray<class UClass*> GetProhibitedActorTemplateList();
	struct FSoftObjectPath GetPreBuildingEffectPath();
	float GetOverlayPlaceHeight();
	float GetOverlayMaxHeightFromGround();
	float GetMaxTraceDepth();
	float GetMaxDeviation();
	float GetDetectDeath();
	struct FTransform GetDestroyedParticleTransformOffset();
	struct FBuildingActorDensityCheck GetDensityParams(const struct FVector& Location);
	TArray<TEnumAsByte<ECollisionChannel>> GetCustomBlockingChannels();
	TEnumAsByte<EBuildingActorConstructingMode> GetConstructingMode();
	int GetBuildingActorID();
	struct FRotator GetActorCollisionBoxRotator();
	struct FVector GetActorCollisionBoxExtern();
	struct FVector GetActorCollisionBoxCenter();
	bool CanDoQuadTrace();
	bool CanBuildUnderWater();
	bool BPCheckPlacement(class UWorld* World, const struct FTransform& tranx, int CheckType, int CurrentAvatarID);
};


// Class BuildSystem.BuildingActorMgr
// 0x0010 (0x0320 - 0x0310)
class ABuildingActorMgr : public AActor
{
public:
	TArray<struct FBuildingActorInfo>                  BuildingActorList;                                        // 0x0310(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x031C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BuildSystem.BuildingActorMgr");
		return pStaticClass;
	}


	void OnBuildingActorSpawned(class AActor* InOwnerActor, class ABuildingActorBase* InBuildingActor);
	void OnBuildingActorDestroyed(class ABuildingActorBase* InBuildingActor);
	static class ABuildingActorMgr* GetInstance(class UObject* WorldContextObject);
};


// Class BuildSystem.BuildingGridComponent
// 0x0020 (0x06B0 - 0x0690)
class UBuildingGridComponent : public UBoxComponent
{
public:
	struct FName                                       CollisionProfileName;                                     // 0x0690(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BuildCenterOffset;                                        // 0x0698(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x06A4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BuildSystem.BuildingGridComponent");
		return pStaticClass;
	}

};


// Class BuildSystem.SelectBuildActor
// 0x0008 (0x0318 - 0x0310)
class ASelectBuildActor : public AActor
{
public:
	class UParticleSystemComponent*                    SelectBuildEffect;                                        // 0x0310(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0314(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BuildSystem.SelectBuildActor");
		return pStaticClass;
	}


	void SetSelectActorTemplate(class UParticleSystem* Template);
	void SetSelectActorPlacementEnable(bool PlacementEnable, bool IsVisible);
	void SetIsPlacementEnable(bool Val);
	void OnParticleLoaded();
	bool IsCurrentPlacementEnable();
	bool GetIsPlacementEnable();
};


}

