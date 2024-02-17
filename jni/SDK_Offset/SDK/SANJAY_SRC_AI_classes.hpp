#pragma once

// Pubg Mobile Beta (3.0) SDK by Telegram @Sanjay_Src

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AI.AESpawner
// 0x0038 (0x0450 - 0x0418)
class AAESpawner : public ASTSpawnerBase
{
public:
	struct FScriptMulticastDelegate                    OnUnitTakeDamage;                                         // 0x0418(0x000C) (ZeroConstructor, InstancedReference)
	unsigned char                                      bEnableTeamAI : 1;                                        // 0x0424(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0425(0x0003) MISSED OFFSET
	TArray<class UClass*>                              TeamAIClasses;                                            // 0x0428(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                SpawnerTeamID;                                            // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBotCategray>                          SpeciesCategory;                                          // 0x0438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0439(0x0003) MISSED OFFSET
	int                                                SpawnerCampItemID;                                        // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GroupID;                                                  // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UActorComponent*>                     TeamAIComponents;                                         // 0x0444(0x000C) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.AESpawner");
		return pStaticClass;
	}


	void SwitchTeamAI(bool bEnable);
	void OnUnitTakeDamageEvent(float Damage, const struct FDamageEvent& DamageEvent, class AActor* Victim, class AActor* Causer);
	void OnUnitSpawned(class AActor* NewUnit, const struct FSTSpawnParam& SpawnParam, class ASTSpawnerBase* Spawner);
	void OnSpawnTimingRipe(bool IsRipe);
	void OnOwnedMobDead(class ASTExtraSimpleCharacter* DeadCharacter, class AController* Killer, class AActor* DamageCauser, const struct FHitResult& KillingHitInfo, const struct FVector& KillingHitImpulseDir, class UClass* KillingHitDamageType);
	void OnOwnedFakePlayerDead(class ASTExtraBaseCharacter* DeadCharacter, class AController* Killer, class AActor* DamageCauser, const struct FHitResult& KillingHitInfo, const struct FVector& KillingHitImpulseDir, class UClass* KillingHitDamageType);
	TEnumAsByte<EBotCategray> GetSpeciesCategory();
	float GetSpawnerTeamID();
	float GetSpawnerGroupID();
	int GenerateParamID(int ConfigId, int BaseParamID, const struct FSTSpawnParam& SpawnParam);
	void DeactivateSpawner();
	void BPOnUnitSpawned(class APawn* AIPawn, int ConfigId, const struct FSTSpawnParam& SpawnParam);
	void ActivateSpawner();
};


// Class AI.AESpawnSubsystem
// 0x0190 (0x02E0 - 0x0150)
class UAESpawnSubsystem : public USTSpawnSubsystem
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0150(0x0008) MISSED OFFSET
	unsigned char                                      bPopQueAfterCustomPreCheckFailed : 1;                     // 0x0158(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0159(0x0003) MISSED OFFSET
	struct FMonsterParams                              CacheMobParams;                                           // 0x015C(0x0058)
	struct FFakePlayerParams                           CacheFPParams;                                            // 0x01B4(0x0010)
	struct FAIPlayerParams                             CacheAIPParams;                                           // 0x01C4(0x000C)
	struct FVehicleParams                              CacheVehicleParams;                                       // 0x01D0(0x0014)
	TMap<TEnumAsByte<EBotCategray>, int>               UnitsNumberThreshold;                                     // 0x01E4(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData02[0xC0];                                      // 0x0220(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.AESpawnSubsystem");
		return pStaticClass;
	}


	class AActor* SpawnUnit(const struct FSTSpawnParam& SpawnParam);
	void RegisterSpawner(class ASTSpawnerBase* Spawner);
	bool PreCheck();
	void ModifyThreshold(TEnumAsByte<EBotCategray> Category, int Threshold);
	int GetUnitsNumByCategory(TEnumAsByte<EBotCategray> Category);
	int GetUnitConfigID(class AActor* Unit);
	TArray<class ASTSpawnerBase*> GetGroupedSpawners(int InGroupID);
	void EnQueue(class ASTSpawnerBase* Spawner, struct FSTSpawnParam* SpawnParam);
	void CleanQueue();
	bool CheckCategoryLimit(class ASTSpawnerBase* Spawner, int* AvailableBalance);
};


// Class AI.AIActionExecutionComponent
// 0x0018 (0x0168 - 0x0150)
class UAIActionExecutionComponent : public ULuaActorComponent
{
public:
	class AController*                                 OwnerController;                                          // 0x0150(0x0004) (ZeroConstructor, IsPlainOldData)
	class ANewFakePlayerAIController*                  MyAIController;                                           // 0x0154(0x0004) (ZeroConstructor, IsPlainOldData)
	class ASTExtraPlayerController*                    MyPlayerController;                                       // 0x0158(0x0004) (ZeroConstructor, IsPlainOldData)
	class ASTExtraBaseCharacter*                       MyPlayerPawn;                                             // 0x015C(0x0004) (ZeroConstructor, IsPlainOldData)
	class UMLAIControllerComponent*                    MyMLAIControllerComp;                                     // 0x0160(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0164(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.AIActionExecutionComponent");
		return pStaticClass;
	}


	void UseItem(int ItemId, int WeaponSlot);
	void SwapAttachmentItem(int ItemId, int SourceWeaponSlot, int TargetWeaponSlot);
	void SetGrenadeLastSelectID(int WeaponId);
	void SetFocusRotation(float InPitch, float InYaw, float InRoll);
	void SetCurShootingPose();
	void RescueTarget(class ASTExtraBaseCharacter* RescueCharacter);
	void OpenDoor();
	void OnFakePlayerRespawn();
	bool IsValid();
	bool IsFreeCamera();
	class APickUpWrapperActor* GetPickActorWithID(int UID);
	class ASTExtraBaseCharacter* GetOwnerBaseCharacter();
	class UBackpackComponent* GetBackpackComponent();
	void DropItem(int ItemId, int Count);
	void DoActionMove(bool IsRun, float DirectionX, float DirectionY, float DirectionZ);
	void DoActionFreeCamera(bool IsEnter, float InPitch, float InYaw, float InRoll);
	void DisuseItem(int ItemId, int WeaponSlot);
	void CloseDoor();
};


// Class AI.AIBasicStateInfoComponent
// 0x0000 (0x0150 - 0x0150)
class UAIBasicStateInfoComponent : public ULuaActorComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.AIBasicStateInfoComponent");
		return pStaticClass;
	}


	void OnItemStateChanged(const struct FVector& Location);
	struct FTLogAIShootInfo GetTLogAIShootInfo();
	class APickUpWrapperActor* GetPickActorWithID(int UID);
};


// Class AI.AIBehaviorAdapter_VehicleBase
// 0x00F8 (0x0248 - 0x0150)
class UAIBehaviorAdapter_VehicleBase : public UVehicleComponent
{
public:
	float                                              LoseSightRadius;                                          // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              QueryEnemyRange;                                          // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              QueryEnemyAngle;                                          // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinTimeLockTarget;                                        // 0x015C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRememberEnemySeconds;                                  // 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PreciseHatredDecreaseSpeed;                               // 0x0164(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCorrectAfterTurnOver : 1;                                // 0x0168(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0169(0x0003) MISSED OFFSET
	float                                              CorrectAfterTurnOverCD;                                   // 0x016C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FBehaviorRegion>                     BehaviorRegions;                                          // 0x0170(0x000C) (Edit, ZeroConstructor)
	float                                              FollowSegmentTolerance;                                   // 0x017C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 CurveThrottleInput;                                       // 0x0180(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinAngleWhenPivotSteering;                                // 0x0184(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 CurveThrottleRateWhenTurning;                             // 0x0188(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 CurveSteeringInput;                                       // 0x018C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseBrakeWhenTurning;                                     // 0x0190(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0191(0x0003) MISSED OFFSET
	float                                              MinRequiredSteeringChange;                                // 0x0194(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinLengthRateAlmostReach;                                 // 0x0198(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 CurveBrakeAlmostReach;                                    // 0x019C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SteeringThresholdUseBrake;                                // 0x01A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpeedThresholdUseBrake;                                   // 0x01A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bBlockTest : 1;                                           // 0x01A8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x3];                                       // 0x01A9(0x0003) MISSED OFFSET
	float                                              BlockTestingTime;                                         // 0x01AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlockSpeedThresholdKMH;                                   // 0x01B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DeadInventoryBoxTemplate;                                 // 0x01B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DropID;                                                   // 0x01B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x01BC(0x0004) MISSED OFFSET
	struct FName                                       WrapperBoxName;                                           // 0x01C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class APlayerTombBox*                              DeadTombBox;                                              // 0x01C8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebug;                                                   // 0x01CC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x01CD(0x0003) MISSED OFFSET
	int                                                DebugLevel;                                               // 0x01D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DebugInterval;                                            // 0x01D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     BehaviorServiceDebugInfo;                                 // 0x01D8(0x000C) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData05[0x3C];                                      // 0x01E4(0x003C) MISSED OFFSET
	class ASTExtraVehicleBase*                         OwnerVehicle;                                             // 0x0220(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCacheMeshOnHit : 1;                                      // 0x0224(0x0001)
	unsigned char                                      UnknownData06[0x23];                                      // 0x0225(0x0023) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.AIBehaviorAdapter_VehicleBase");
		return pStaticClass;
	}


	void Suicide();
	void RPC_Client_SetServiceDebugInfo(const struct FString& Info);
	void OnInit();
	void OnDeath(class AController* InstigatedBy);
	float LuaCalculateHitRate(float Distance, float BaseHitRate);
	bool IsInBehaviorRegion(const struct FVector& InLocation);
	bool IsAlive();
	void HandleOnVehicleUnderAttack(class AController* EventInstigator, const struct FDamageEvent& DamageEvent, class AActor* DamageCauser, float Damage);
	void HandleOnVehicleHealthStateChanged(ESTExtraVehicleHealthState InVehicleHealthState);
	void HandleOnMeshHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void BroadcastServiceDebugInfo();
	void BPReceiveDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser, TEnumAsByte<EDamageType> DamageEventType);
};


// Class AI.AIBehaviorAdapter_Tank
// 0x00D8 (0x0320 - 0x0248)
class UAIBehaviorAdapter_Tank : public UAIBehaviorAdapter_VehicleBase
{
public:
	struct FVector2D                                   AimDurationDeviation;                                     // 0x0248(0x0008) (Edit, IsPlainOldData)
	float                                              ShootTurretCD;                                            // 0x0250(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BulletExplosionRange;                                     // 0x0254(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AimingLockRange;                                          // 0x0258(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AimingLockRangeWhenFiring;                                // 0x025C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   TurretAimRange;                                           // 0x0260(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      bPredictEnemyMove : 1;                                    // 0x0268(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0269(0x0003) MISSED OFFSET
	struct FVector2D                                   TurretShootRange;                                         // 0x026C(0x0008) (Edit, IsPlainOldData)
	unsigned char                                      bAimingConstantLerp : 1;                                  // 0x0274(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0275(0x0003) MISSED OFFSET
	float                                              TurretAimingInterpConstantSpeed;                          // 0x0278(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TurretAimingInterpSpeed;                                  // 0x027C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SimTurretAimingInterpConstantSpeed;                       // 0x0280(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TurretAimingErrorTolerance;                               // 0x0284(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAlsoCheckArcLength : 1;                                  // 0x0288(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0289(0x0003) MISSED OFFSET
	float                                              ShootTargetLocationOffset;                                // 0x028C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bTraceBlockShootTargetLocation : 1;                       // 0x0290(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0291(0x0003) MISSED OFFSET
	int                                                MaxTraceBlockTryTimes;                                    // 0x0294(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bResetTurretAfterDestroy : 1;                             // 0x0298(0x0001) (Edit)
	unsigned char                                      bFailedAimingWhenTurretCollided : 1;                      // 0x0298(0x0001) (Edit)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0299(0x0003) MISSED OFFSET
	TMap<float, float>                                 BaseHitRate;                                              // 0x029C(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              ShootMGCD;                                                // 0x02D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ShootMGDuration;                                          // 0x02DC(0x0008) (Edit, IsPlainOldData)
	float                                              ShootMGInterval;                                          // 0x02E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ShootUpDownRange;                                         // 0x02E8(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   ShootLeftRightRange;                                      // 0x02F0(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   ShootLeftRightRangeDistance;                              // 0x02F8(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   ShootTargetSpeedRange;                                    // 0x0300(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   ShootTargetDistanceRangeDueToSpeed;                       // 0x0308(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   MGShootRange;                                             // 0x0310(0x0008) (Edit, IsPlainOldData)
	unsigned char                                      bShouldMissOnPurpose : 1;                                 // 0x0318(0x0001)
	unsigned char                                      bCacheUsingMG : 1;                                        // 0x0318(0x0001)
	unsigned char                                      bCacheUsingTurret : 1;                                    // 0x0318(0x0001)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0319(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.AIBehaviorAdapter_Tank");
		return pStaticClass;
	}


	bool UpdateTurretAimingTarget(const struct FVector& TargetLocation, float DeltaSeconds, bool FailedWhenCollided);
	bool ShootTurret();
	bool ShootMachineGun();
	void OnInit();
	void OnDeath(class AController* InstigatedBy);
	bool IsTurretLockTarget(const struct FVector& TargetLocation, float LockRadius);
	bool IsAlive();
	void HandleOnVehicleHealthStateChanged(ESTExtraVehicleHealthState InVehicleHealthState);
	void BroadcastTankShootWeapon(bool IsTurret);
};


// Class AI.AIPerceptionDynamicItemComponent
// 0x0020 (0x0170 - 0x0150)
class UAIPerceptionDynamicItemComponent : public ULuaActorComponent
{
public:
	int                                                Category;                                                 // 0x0150(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FChildDynamicItem>                   ChildArray;                                               // 0x0154(0x000C) (Edit, ZeroConstructor)
	struct FScriptDelegate                             GetDynamicItemDurabilityDelegate;                         // 0x0160(0x0010) (Edit, ZeroConstructor, InstancedReference)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.AIPerceptionDynamicItemComponent");
		return pStaticClass;
	}

};


// Class AI.AISoundCollectionComponent
// 0x0130 (0x0280 - 0x0150)
class UAISoundCollectionComponent : public ULuaActorComponent
{
public:
	TMap<uint32_t, struct FCacheSoundState>            CacheStepSounds;                                          // 0x0150(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FCacheSoundState>            CacheWeaponSounds;                                        // 0x018C(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FCacheSoundState>            CacheVehicleSounds;                                       // 0x01C8(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FCacheSoundState>            CacheGrenadeSounds;                                       // 0x0204(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0240(0x0018) MISSED OFFSET
	float                                              ClearStepSoundTime;                                       // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClearWeaponSoundTime;                                     // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClearVehicleSoundTime;                                    // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClearGrenadeSoundTime;                                    // 0x0264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                StepSoundMaxNum;                                          // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                WeaponSoundMaxNum;                                        // 0x026C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                VehicleSoundMaxNum;                                       // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GrenadeSoundMaxNum;                                       // 0x0274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AController*                                 OwnerController;                                          // 0x0278(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x027C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.AISoundCollectionComponent");
		return pStaticClass;
	}


	void OnCollectionHearSound(ESoundType soundType, const struct FVector& InPos, class AActor* InSourceActor);
	void OnAISoundManagerHear(class AActor* InTargetActor, ESoundType soundType, const struct FVector& InPos, class AActor* InSourceActor);
	TArray<struct FSoundState> GetCollectSoundInfo();
};


// Class AI.AIStateInfoComponent
// 0x0CA0 (0x0DF0 - 0x0150)
class UAIStateInfoComponent : public UAIBasicStateInfoComponent
{
public:
	TMap<int, int>                                     ProgressSkillConfig;                                      // 0x0150(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int, bool>                                    AvailableBackpacItemTypes;                                // 0x018C(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int, int>                                     GrenadeTypeConfig;                                        // 0x01C8(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              VisibleAngle;                                             // 0x0204(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HeadOffset;                                               // 0x0208(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              NearByEnemyRange;                                         // 0x0214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              FogWeatherRangeScale;                                     // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	int                                                NearByEnemyMaxNum;                                        // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsSearchNearItem;                                         // 0x0220(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0221(0x0003) MISSED OFFSET
	int                                                NearbyItemMaxNum;                                         // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NearbyMaxBoxNum;                                          // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NearbyAirDropBoxRangeInner;                               // 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NearbyAirDropBoxRangeOuter;                               // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NearbyDeathBoxRange;                                      // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NearbyPickUpWrapperRange;                                 // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CacheNearbyItemRangeCoefficient;                          // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NearbyMaxTreasureChestNum;                                // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NearbyTreasureChestRange;                                 // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NearbyMaxWeedNum;                                         // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NearbyWeedRange;                                          // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NearbyFindBuildingRange;                                  // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ItemStateChangedRange;                                    // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsItemVisiable;                                           // 0x0258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsUseItemSpotLoc;                                         // 0x0259(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x025A(0x0002) MISSED OFFSET
	float                                              NearbyObstacleRange;                                      // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NearbyThrownRange;                                        // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NearbySmokeRange;                                         // 0x0264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NearbyThrownMaxNum;                                       // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x026C(0x0004) MISSED OFFSET
	int                                                NearbyDoorMaxNum;                                         // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NearbyVehicleRange;                                       // 0x0274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	int                                                NearbyVehicleMaxNum;                                      // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NearbyBulletHoleRange;                                    // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NearbyBulletHoleMaxNum;                                   // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NearbyDynamicItemsRange;                                  // 0x0284(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NearbyDynamicItemsMaxNum;                                 // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NearbyMonsterRange;                                       // 0x028C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NearbyMonsterMaxNum;                                      // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0294(0x0004) MISSED OFFSET
	struct FAIStateInfo                                CacheAIStateInfo;                                         // 0x0298(0x05A0)
	struct FDiffAIStateInfo                            CacheDiffAIStateInfo;                                     // 0x0838(0x04A0)
	bool                                               IsTouchedPlayer;                                          // 0x0CD8(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreTreeAIWhenNoPlayerAround;                          // 0x0CD9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0CDA(0x0002) MISSED OFFSET
	float                                              IgnoreTreeAIRadius;                                       // 0x0CDC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           FrameNo;                                                  // 0x0CE0(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               UseBodyTPPCamera;                                         // 0x0CE4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0CE5(0x0003) MISSED OFFSET
	TArray<int>                                        IgnoredMonsterIDs;                                        // 0x0CE8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class ASTExtraPlayerController*                    MyPlayerController;                                       // 0x0CF4(0x0004) (ZeroConstructor, IsPlainOldData)
	class AController*                                 OwnerController;                                          // 0x0CF8(0x0004) (ZeroConstructor, IsPlainOldData)
	class ANewFakePlayerAIController*                  MyAIController;                                           // 0x0CFC(0x0004) (ZeroConstructor, IsPlainOldData)
	class UAIActingComponent*                          AIActingComp;                                             // 0x0D00(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class APawn*                                       MyOwnerPawn;                                              // 0x0D04(0x0004) (ZeroConstructor, IsPlainOldData)
	class ABattleRoyaleGameModeBase*                   MyGameMode;                                               // 0x0D08(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x6C];                                      // 0x0D0C(0x006C) MISSED OFFSET
	TArray<struct FVehicleDamageInfo>                  VehicleDamageInfo;                                        // 0x0D78(0x000C) (ZeroConstructor)
	TMap<int, class APickUpWrapperActor*>              CacheAINearByItem;                                        // 0x0D84(0x0050) (ZeroConstructor)
	struct FCacheNearbyItemState                       CacheNearbyItemState;                                     // 0x0DC0(0x001C)
	class UMLAIControllerComponent*                    MyMLAIControllerComp;                                     // 0x0DDC(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	uint32_t                                           CacheModeMapId;                                           // 0x0DE0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0xC];                                       // 0x0DE4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.AIStateInfoComponent");
		return pStaticClass;
	}


	static void SetIsRequestComprehensiveData(bool InIsRequestComprehensiveData);
	TArray<struct FItemStateData> QueryItemStates(int MaxBoxNum, int MaxItemNum, float AirDropBoxRangeInner, float AirDropBoxRangeOuter, float DeathBoxRange, float PickUpWrapperRange, float FindBuildingRange, bool InIsUseItemSpotLoc, int MaxTreasureChestNum, float TreasureChestRange, int MaxWeedNum, float WeedRange);
	void OnVehicleDamageInfo(class AController* InstigatorController, class AController* VictimController, int DamageTypeId, float Damage, bool bIsFatalHealthCost, class AActor* DamageCauser, class AActor* VictimVehicle);
	void OnFakePlayerRespawn();
	void OnAIStateRequestEnd();
	bool IsValid();
	bool IsAvailableBackpacItemType(const struct FItemDefineID& DefineID);
	bool HasPlayerAround();
	struct FVector GetViewForwardVector(class ACharacter* InCharacter);
	static struct FVehicleState GetVehicleStatus(class ASTExtraVehicleBase* InVehicle, class ASTExtraBaseCharacter* PawnInCar);
	struct FTLogAIShootInfo GetTLogAIShootInfo();
	struct FAIStateInfo GetTeammatePlayerStateInfo(class ASTExtraBaseCharacter* InCharacter, TArray<struct FString> InWhiteList);
	TArray<struct FSoundState> GetSoundInfo();
	struct FProgressBarState GetProgressBarState();
	struct FAIPlayerInteractInfo GetPlayerInteractInfo();
	class ASTExtraBaseCharacter* GetOwnerBaseCharacter();
	TArray<struct FObstacleState> GetObstaclesState(class ASTExtraBaseCharacter* InPawn, float Range);
	TArray<struct FVehicleState> GetNearbyVehicles(class ASTExtraBaseCharacter* InPawn);
	static struct FGlobalGameState GetGlobalGameState(class UWorld* InWorld, bool bUpdateLastCache);
	uint32_t GetFrameNo();
	TArray<struct FDoorState> GetDoorsState(float Range, int MaxNum);
	static struct FDiffGlobalGameStateGeneral GetDiffGlobalGameStateGeneral(class UWorld* InWorld);
	static struct FDiffGlobalGameState GetDiffGlobalGameState(class UWorld* InWorld);
	static struct FDiffAllPlayerInfoGeneral GetDiffAllPlayerStateInfoGeneral(class UWorld* InWorld, bool bNeedDebugInfo);
	static struct FDiffAllPlayerInfo GetDiffAllPlayerStateInfoCCS(class UWorld* InWorld, bool bUseDiff, bool bSeparate);
	struct FDiffAIStateInfoGeneral GetDiffAIStateInfoGeneral();
	struct FDiffAIStateInfo GetDiffAIStateInfo();
	struct FAIDamageSources GetDamageSources();
	struct FCameraState GetCameraState(class ASTExtraBaseCharacter* InCharacter);
	static TArray<struct FAIStateInfo> GetAllPlayerStateInfo(class UWorld* InWorld, bool bNeedUpdateCache);
	struct FAIStateInfo GetAIStateInfoInternal();
	struct FAIStateInfo GetAIStateInfo();
	TArray<struct FAIBackpackItem> GetAIPlayerBackpackItems();
	TArray<struct FAINearbyThrown> GetAINearbyThrownState(class ASTExtraBaseCharacter* InCharacter, float InRange, float InCheckAngle, int MaxNum, float InSmokeRange);
	void ClearVehicleDamageInfo();
	void ClearPlayerInteractInfo();
	void ClearDamageSources();
};


// Class AI.AIStateInfoComponentBase
// 0x10E8 (0x1238 - 0x0150)
class UAIStateInfoComponentBase : public UAIBasicStateInfoComponent
{
public:
	class UAIStateInfoDataAsset*                       AIStateInfoDataAsset;                                     // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0154(0x0004) MISSED OFFSET
	struct FAIStateInfoBaseMod                         CacheAIStateInfoBaseMod;                                  // 0x0158(0x03D0)
	struct FAIStateInfoBaseMod                         LastAIStateInfoBaseMod;                                   // 0x0528(0x03D0)
	struct FDiffAIStateInfoBaseModGeneral              CacheDiffAIStateInfoBaseModGeneral;                       // 0x08F8(0x04E0)
	struct FDiffAIStateInfoBaseMod                     CacheDiffAIStateInfoBaseMod;                              // 0x0DD8(0x0350)
	bool                                               IsTouchedPlayer;                                          // 0x1128(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1129(0x0003) MISSED OFFSET
	uint32_t                                           FrameNo;                                                  // 0x112C(0x0004) (ZeroConstructor, IsPlainOldData)
	class ASTExtraPlayerController*                    MyPlayerController;                                       // 0x1130(0x0004) (ZeroConstructor, IsPlainOldData)
	class AController*                                 OwnerController;                                          // 0x1134(0x0004) (ZeroConstructor, IsPlainOldData)
	class ANewFakePlayerAIController*                  MyAIController;                                           // 0x1138(0x0004) (ZeroConstructor, IsPlainOldData)
	class UAIActingComponent*                          AIActingComp;                                             // 0x113C(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class APawn*                                       MyOwnerPawn;                                              // 0x1140(0x0004) (ZeroConstructor, IsPlainOldData)
	class ABattleRoyaleGameModeBase*                   MyGameMode;                                               // 0x1144(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6C];                                      // 0x1148(0x006C) MISSED OFFSET
	TArray<struct FVehicleDamageInfo>                  VehicleDamageInfo;                                        // 0x11B4(0x000C) (ZeroConstructor)
	TMap<int, class APickUpWrapperActor*>              CacheAINearByItem;                                        // 0x11C0(0x0050) (ZeroConstructor)
	TArray<class ASTExtraBaseCharacter*>               CacheNearbyEnemies;                                       // 0x11FC(0x000C) (ZeroConstructor)
	struct FCacheNearbyItemState                       CacheNearbyItemState;                                     // 0x1208(0x001C)
	class UMLAIControllerComponent*                    MyMLAIControllerComp;                                     // 0x1224(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	uint32_t                                           CacheModeMapId;                                           // 0x1228(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x122C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.AIStateInfoComponentBase");
		return pStaticClass;
	}


	static void SetIsRequestComprehensiveData(bool InIsRequestComprehensiveData);
	TArray<struct FItemStateData> QueryItemStates(int MaxBoxNum, int MaxItemNum, float AirDropBoxRangeInner, float AirDropBoxRangeOuter, float DeathBoxRange, float PickUpWrapperRange, float FindBuildingRange, bool InIsUseItemSpotLoc, int MaxTreasureChestNum, float TreasureChestRange, int MaxWeedNum, float WeedRange);
	void OnVehicleDamageInfo(class AController* InstigatorController, class AController* VictimController, int DamageTypeId, float Damage, bool bIsFatalHealthCost, class AActor* DamageCauser, class AActor* VictimVehicle);
	void OnFakePlayerRespawn();
	void OnAIStateRequestEnd();
	bool IsValid();
	bool IsAvailableBackpackItemType(const struct FItemDefineID& DefineID);
	bool HasPlayerAround();
	struct FVector GetViewForwardVector(class ACharacter* InCharacter);
	struct FAIStateInfo GetTeammatePlayerStateInfo(class ASTExtraBaseCharacter* InCharacter, TArray<struct FString> InWhiteList);
	TArray<struct FSoundState> GetSoundInfo();
	struct FProgressBarState GetProgressBarState();
	struct FAIPlayerInteractInfo GetPlayerInteractInfo();
	class ASTExtraBaseCharacter* GetOwnerBaseCharacter();
	TArray<struct FObstacleState> GetObstaclesState(class ASTExtraBaseCharacter* InPawn, float Range);
	uint32_t GetFrameNo();
	void GetDiffAIStateInfoToCacheGeneral();
	void GetDiffAIStateInfoToCache();
	struct FAIDamageSources GetDamageSources();
	struct FCameraState GetCameraState(class ASTExtraBaseCharacter* InCharacter);
	void GetAIStateInfoToCache();
	void GetAIStateInfoBaseModInternal();
	void GetAIPlayerBackpackItems(TArray<struct FAIBackpackItem>* Items);
	void GetAINearbyThrownState(class ASTExtraBaseCharacter* InCharacter, float InRange, float InCheckAngle, int MaxNum, float InSmokeRange, TArray<struct FAINearbyThrown>* Ret);
	void ClearVehicleDamageInfo();
	void ClearPlayerInteractInfo();
	void ClearDamageSources();
};


// Class AI.AIStateInfoComponentBRBase
// 0x09C8 (0x1C00 - 0x1238)
class UAIStateInfoComponentBRBase : public UAIStateInfoComponentBase
{
public:
	struct FAIStateInfoBRBase                          CacheAIStateInfoBRBase;                                   // 0x1238(0x0250)
	struct FAIStateInfoBRBase                          LastAIStateInfoBRBase;                                    // 0x1488(0x0250)
	struct FDiffAIStateInfoBRBaseGeneral               CacheDiffAIStateInfoBRBaseGeneral;                        // 0x16D8(0x0318)
	struct FDiffAIStateInfoBRBase                      CacheDiffAIStateInfoBRBase;                               // 0x19F0(0x0210)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.AIStateInfoComponentBRBase");
		return pStaticClass;
	}

};


// Class AI.AIStateInfoComponentMPBase
// 0x0128 (0x1360 - 0x1238)
class UAIStateInfoComponentMPBase : public UAIStateInfoComponentBase
{
public:
	struct FAIStateInfoMPBase                          CacheAIStateInfoMPBase;                                   // 0x1238(0x0060)
	struct FAIStateInfoMPBase                          LastAIStateInfoMPBase;                                    // 0x1298(0x0060)
	struct FDiffAIStateInfoMPBaseGeneral               CacheDiffAIStateInfoMPBaseGeneral;                        // 0x12F8(0x0068)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.AIStateInfoComponentMPBase");
		return pStaticClass;
	}

};


// Class AI.AIStateInfoComponentTeamDeath
// 0x00A8 (0x1408 - 0x1360)
class UAIStateInfoComponentTeamDeath : public UAIStateInfoComponentMPBase
{
public:
	struct FAIStateInfoTeamDeath                       CacheAIStateInfoTeamDeath;                                // 0x1360(0x0038)
	struct FAIStateInfoTeamDeath                       LastAIStateInfoTeamDeath;                                 // 0x1398(0x0038)
	struct FDiffAIStateInfoTeamDeathGeneral            CacheDiffAIStateInfoTeamDeathGeneral;                     // 0x13D0(0x0038)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.AIStateInfoComponentTeamDeath");
		return pStaticClass;
	}

};


// Class AI.AIStateInfoDataAsset
// 0x0160 (0x0180 - 0x0020)
class UAIStateInfoDataAsset : public UDataAsset
{
public:
	TMap<int, int>                                     ProgressSkillConfig;                                      // 0x0020(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int, bool>                                    AvailableBackpacItemTypes;                                // 0x005C(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int, int>                                     GrenadeTypeConfig;                                        // 0x0098(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              VisibleAngle;                                             // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HeadOffset;                                               // 0x00D8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              NearByEnemyRange;                                         // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              FogWeatherRangeScale;                                     // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	int                                                NearByEnemyMaxNum;                                        // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsSearchNearItem;                                         // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00F1(0x0003) MISSED OFFSET
	int                                                NearbyItemMaxNum;                                         // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NearbyMaxBoxNum;                                          // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NearbyAirDropBoxRangeInner;                               // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NearbyAirDropBoxRangeOuter;                               // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NearbyDeathBoxRange;                                      // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NearbyPickUpWrapperRange;                                 // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CacheNearbyItemRangeCoefficient;                          // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NearbyMaxTreasureChestNum;                                // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NearbyTreasureChestRange;                                 // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NearbyMaxWeedNum;                                         // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NearbyWeedRange;                                          // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NearbyFindBuildingRange;                                  // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ItemStateChangedRange;                                    // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsItemVisiable;                                           // 0x0128(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsUseItemSpotLoc;                                         // 0x0129(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x012A(0x0002) MISSED OFFSET
	float                                              NearbyObstacleRange;                                      // 0x012C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NearbyThrownRange;                                        // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NearbySmokeRange;                                         // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NearbyThrownMaxNum;                                       // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x013C(0x0004) MISSED OFFSET
	int                                                NearbyDoorMaxNum;                                         // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NearbyVehicleRange;                                       // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	int                                                NearbyVehicleMaxNum;                                      // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NearbyBulletHoleRange;                                    // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NearbyBulletHoleMaxNum;                                   // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NearbyDynamicItemsRange;                                  // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NearbyDynamicItemsMaxNum;                                 // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NearbyMonsterRange;                                       // 0x015C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NearbyMonsterMaxNum;                                      // 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreTreeAIWhenNoPlayerAround;                          // 0x0164(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0165(0x0003) MISSED OFFSET
	float                                              IgnoreTreeAIRadius;                                       // 0x0168(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseBodyTPPCamera;                                         // 0x016C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x016D(0x0003) MISSED OFFSET
	TArray<int>                                        IgnoredMonsterIDs;                                        // 0x0170(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData05[0x4];                                       // 0x017C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.AIStateInfoDataAsset");
		return pStaticClass;
	}

};


// Class AI.BTD_CheckObstacleInCustomRange
// 0x0070 (0x00D0 - 0x0060)
class UBTD_CheckObstacleInCustomRange : public UBTDecorator_BlackboardBase
{
public:
	EObstacleDetectionSpace                            ObstacleDetectionType;                                    // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	struct FBlackboardKeySelector                      BBK_OriginLoc;                                            // 0x0068(0x0020) (Edit)
	unsigned char                                      bDrawDebug : 1;                                           // 0x0088(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	int                                                DrawSegments;                                             // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpaceSize;                                                // 0x0090(0x000C) (Edit, IsPlainOldData)
	float                                              GravityScale;                                             // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CustomMaxHeight;                                          // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      BBK_CapsuleSweepFinalLoc;                                 // 0x00A8(0x0020) (Edit)
	float                                              CapsuleScaleFactor;                                       // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTD_CheckObstacleInCustomRange");
		return pStaticClass;
	}

};


// Class AI.BTDecorator_AttrObserver
// 0x0010 (0x0050 - 0x0040)
class UBTDecorator_AttrObserver : public UBTDecorator
{
public:
	TArray<struct FAIAttrObserver>                     AttrObserverList;                                         // 0x0040(0x000C) (Edit, ZeroConstructor)
	unsigned char                                      bEnableObserver : 1;                                      // 0x004C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_AttrObserver");
		return pStaticClass;
	}

};


// Class AI.BTDecorator_BlackboardValueCheck
// 0x0028 (0x0068 - 0x0040)
class UBTDecorator_BlackboardValueCheck : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      StrategyKey;                                              // 0x0040(0x0020) (Edit)
	unsigned char                                      EnumValue;                                                // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_BlackboardValueCheck");
		return pStaticClass;
	}

};


// Class AI.BTDecorator_CheckFlyingStatus
// 0x0000 (0x0040 - 0x0040)
class UBTDecorator_CheckFlyingStatus : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_CheckFlyingStatus");
		return pStaticClass;
	}

};


// Class AI.BTDecorator_CheckShootingPose
// 0x0000 (0x0040 - 0x0040)
class UBTDecorator_CheckShootingPose : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_CheckShootingPose");
		return pStaticClass;
	}

};


// Class AI.BTDecorator_DistanceCheck
// 0x0048 (0x0088 - 0x0040)
class UBTDecorator_DistanceCheck : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      CenterActorBlackBoardKey;                                 // 0x0040(0x0020) (Edit)
	struct FBlackboardKeySelector                      TargetActorBlackBoardKey;                                 // 0x0060(0x0020) (Edit)
	TEnumAsByte<ECompareLengthType>                    CompareOperation;                                         // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	float                                              Distance;                                                 // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_DistanceCheck");
		return pStaticClass;
	}

};


// Class AI.BTDecorator_DoesDistanceSatisfy
// 0x0050 (0x0090 - 0x0040)
class UBTDecorator_DoesDistanceSatisfy : public UBTDecorator
{
public:
	struct FVector2D                                   TestDistanceRange;                                        // 0x0040(0x0008) (Edit, IsPlainOldData)
	bool                                               bCustomSrcLoc;                                            // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	struct FBlackboardKeySelector                      TargetBlackboardKey;                                      // 0x0050(0x0020) (Edit)
	struct FBlackboardKeySelector                      SrcBlackboardKey;                                         // 0x0070(0x0020) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_DoesDistanceSatisfy");
		return pStaticClass;
	}

};


// Class AI.BTDecorator_GameModeCheck
// 0x0008 (0x0048 - 0x0040)
class UBTDecorator_GameModeCheck : public UBTDecorator
{
public:
	int                                                PlayerNumPerTeam;                                         // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_GameModeCheck");
		return pStaticClass;
	}

};


// Class AI.BTDecorator_GeneralLineTrace
// 0x0058 (0x0098 - 0x0040)
class UBTDecorator_GeneralLineTrace : public UBTDecorator
{
public:
	TArray<TEnumAsByte<ECollisionChannel>>             traceObjectTypes;                                         // 0x0040(0x000C) (Edit, ZeroConstructor)
	EAIDecoratorGeneralLineTraceType                   lineTraceType;                                            // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	float                                              ForwardTestForwardOffset;                                 // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ForwardTestHeightOffset;                                  // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreOwner;                                             // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSelfToTarget;                                        // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x005A(0x0006) MISSED OFFSET
	struct FBlackboardKeySelector                      BBKTargetActor;                                           // 0x0060(0x0020) (Edit)
	bool                                               bUseSingleTrace;                                          // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	TArray<class UClass*>                              IgnoreActorsClass;                                        // 0x0084(0x000C) (Edit, ZeroConstructor)
	bool                                               bDebug;                                                   // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0091(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_GeneralLineTrace");
		return pStaticClass;
	}

};


// Class AI.BTDecorator_HasOccludeBuildActor
// 0x0000 (0x0040 - 0x0040)
class UBTDecorator_HasOccludeBuildActor : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_HasOccludeBuildActor");
		return pStaticClass;
	}

};


// Class AI.BTDecorator_HasPlayerAIState
// 0x0010 (0x0050 - 0x0040)
class UBTDecorator_HasPlayerAIState : public UBTDecorator
{
public:
	TArray<EPawnState>                                 AIStates;                                                 // 0x0040(0x000C) (Edit, ZeroConstructor)
	bool                                               IsMatchAll;                                               // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_HasPlayerAIState");
		return pStaticClass;
	}

};


// Class AI.BTDecorator_HasStaticOccludePos
// 0x0000 (0x0040 - 0x0040)
class UBTDecorator_HasStaticOccludePos : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_HasStaticOccludePos");
		return pStaticClass;
	}

};


// Class AI.BTDecorator_IsEnemyInBuilding
// 0x0000 (0x0040 - 0x0040)
class UBTDecorator_IsEnemyInBuilding : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_IsEnemyInBuilding");
		return pStaticClass;
	}

};


// Class AI.BTDecorator_IsInSafetyCircle
// 0x0028 (0x0068 - 0x0040)
class UBTDecorator_IsInSafetyCircle : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      CheckTargetBlackboardKey;                                 // 0x0040(0x0020) (Edit)
	EInSafetyCircleType                                IsCheackByCircleType;                                     // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_IsInSafetyCircle");
		return pStaticClass;
	}

};


// Class AI.BTDecorator_IsMovementMode
// 0x0008 (0x0068 - 0x0060)
class UBTDecorator_IsMovementMode : public UBTDecorator_BlackboardBase
{
public:
	TEnumAsByte<EMovementMode>                         MovementMode;                                             // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_IsMovementMode");
		return pStaticClass;
	}

};


// Class AI.BTDecorator_IsOcclusionSafe
// 0x0030 (0x0070 - 0x0040)
class UBTDecorator_IsOcclusionSafe : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      BBKeyTargetEnemy;                                         // 0x0040(0x0020) (Edit)
	float                                              CheckRadiusXY;                                            // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CheckRadiusZ;                                             // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OcclusionPadAngle;                                        // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_IsOcclusionSafe");
		return pStaticClass;
	}

};


// Class AI.BTDecorator_IsSkillReady
// 0x0008 (0x0048 - 0x0040)
class UBTDecorator_IsSkillReady : public UBTDecorator
{
public:
	int                                                SkillID;                                                  // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_IsSkillReady");
		return pStaticClass;
	}

};


// Class AI.BTDecorator_IsWayPointNeedRotate
// 0x0020 (0x0060 - 0x0040)
class UBTDecorator_IsWayPointNeedRotate : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      CurrentEventWayPointActor;                                // 0x0040(0x0020) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_IsWayPointNeedRotate");
		return pStaticClass;
	}

};


// Class AI.BTDecorator_ItemNumberCheck
// 0x0008 (0x0048 - 0x0040)
class UBTDecorator_ItemNumberCheck : public UBTDecorator
{
public:
	int                                                ItemId;                                                   // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ItemNum;                                                  // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_ItemNumberCheck");
		return pStaticClass;
	}

};


// Class AI.BTDecorator_Mob_CheckJump
// 0x0020 (0x0080 - 0x0060)
class UBTDecorator_Mob_CheckJump : public UBTDecorator_BlackboardBase
{
public:
	int                                                RandomReachablePointRadius;                               // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   JumpHighRange;                                            // 0x0064(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   JumpLowRange;                                             // 0x006C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	int                                                JumpStartOffsetZ;                                         // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                JumpHighThreshold;                                        // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_Mob_CheckJump");
		return pStaticClass;
	}

};


// Class AI.BTDecorator_Mob_CheckJumpToLowDirect
// 0x0010 (0x0070 - 0x0060)
class UBTDecorator_Mob_CheckJumpToLowDirect : public UBTDecorator_BlackboardBase
{
public:
	float                                              JumpToLowThreshold;                                       // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CheckDistance;                                            // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JumpToLowSpeed;                                           // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_Mob_CheckJumpToLowDirect");
		return pStaticClass;
	}

};


// Class AI.BTDecorator_Mob_CheckObstacle
// 0x0008 (0x0068 - 0x0060)
class UBTDecorator_Mob_CheckObstacle : public UBTDecorator_BlackboardBase
{
public:
	int                                                CheckDistance;                                            // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BackDistance;                                             // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_Mob_CheckObstacle");
		return pStaticClass;
	}

};


// Class AI.BTDecorator_Mob_CloseEnough
// 0x0008 (0x0068 - 0x0060)
class UBTDecorator_Mob_CloseEnough : public UBTDecorator_BlackboardBase
{
public:
	float                                              AcceptableDistance;                                       // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckDistanceIn2D;                                       // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReachTestIncludesAgentRadius;                            // 0x0065(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReachTestIncludesGoalRadius;                             // 0x0066(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0067(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_Mob_CloseEnough");
		return pStaticClass;
	}

};


// Class AI.BTDecorator_Mob_HasAIState
// 0x0000 (0x0040 - 0x0040)
class UBTDecorator_Mob_HasAIState : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_Mob_HasAIState");
		return pStaticClass;
	}

};


// Class AI.BTDecorator_Mob_IsTargetAbove
// 0x0008 (0x0068 - 0x0060)
class UBTDecorator_Mob_IsTargetAbove : public UBTDecorator_BlackboardBase
{
public:
	float                                              AcceptableDistance;                                       // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_Mob_IsTargetAbove");
		return pStaticClass;
	}

};


// Class AI.BTDecorator_Mob_LineTrace
// 0x0010 (0x0070 - 0x0060)
class UBTDecorator_Mob_LineTrace : public UBTDecorator_BlackboardBase
{
public:
	TArray<TEnumAsByte<ECollisionChannel>>             traceObjectTypes;                                         // 0x0060(0x000C) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_Mob_LineTrace");
		return pStaticClass;
	}

};


// Class AI.BTDecorator_Mob_LinkCheckJumpWall
// 0x0008 (0x0068 - 0x0060)
class UBTDecorator_Mob_LinkCheckJumpWall : public UBTDecorator_BlackboardBase
{
public:
	int                                                KeepDistance;                                             // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LineTraceHeightOffset;                                    // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_Mob_LinkCheckJumpWall");
		return pStaticClass;
	}

};


// Class AI.BTDecorator_Mob_Once
// 0x0008 (0x0048 - 0x0040)
class UBTDecorator_Mob_Once : public UBTDecorator
{
public:
	int                                                AllowTimes;                                               // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_Mob_Once");
		return pStaticClass;
	}

};


// Class AI.BTDecorator_NearTargetLoc
// 0x0008 (0x0048 - 0x0040)
class UBTDecorator_NearTargetLoc : public UBTDecorator
{
public:
	float                                              Range;                                                    // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_NearTargetLoc");
		return pStaticClass;
	}

};


// Class AI.BTDecorator_NewCoolDown
// 0x0000 (0x0048 - 0x0048)
class UBTDecorator_NewCoolDown : public UBTDecorator_Cooldown
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_NewCoolDown");
		return pStaticClass;
	}

};


// Class AI.BTDecorator_NewSatisfyAttkDist
// 0x0010 (0x0050 - 0x0040)
class UBTDecorator_NewSatisfyAttkDist : public UBTDecorator
{
public:
	float                                              DefaultAttackDist;                                        // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsInversed;                                              // 0x0044(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	float                                              ExtraDistance;                                            // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_NewSatisfyAttkDist");
		return pStaticClass;
	}

};


// Class AI.BTDecorator_PreCheckLaunchMove
// 0x0078 (0x00B8 - 0x0040)
class UBTDecorator_PreCheckLaunchMove : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      KeyLaunchToTarget;                                        // 0x0040(0x0020) (Edit, BlueprintVisible)
	float                                              CustomDestDirAngle;                                       // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CustomDestDistance;                                       // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UsePawnHalfHeightAsOffsetOfTargetLocation;                // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	struct FVector                                     OffsetOfTargetLocation;                                   // 0x006C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   JumpSpeedRange;                                           // 0x0078(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              JumpSpeedInterval;                                        // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESuggestProjVelocityTraceOption>       JumpProjTraceType;                                        // 0x0084(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0085(0x0003) MISSED OFFSET
	float                                              OverrideGravityZ;                                         // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CollisionRadius;                                          // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFavorHighArc;                                            // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawDebug;                                               // 0x0091(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0092(0x0006) MISSED OFFSET
	struct FBlackboardKeySelector                      OutJumpVelocityBlackboardKey;                             // 0x0098(0x0020) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_PreCheckLaunchMove");
		return pStaticClass;
	}

};


// Class AI.BTDecorator_Probability
// 0x0048 (0x0088 - 0x0040)
class UBTDecorator_Probability : public UBTDecorator
{
public:
	float                                              ExecuteProbability;                                       // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseDifficultyLevel;                                      // 0x0044(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	TMap<int, float>                                   DifficultyProbabilityCfg;                                 // 0x0048(0x0050) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_Probability");
		return pStaticClass;
	}

};


// Class AI.AIQueryShapeDesc_Base
// 0x0004 (0x0020 - 0x001C)
class UAIQueryShapeDesc_Base : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.AIQueryShapeDesc_Base");
		return pStaticClass;
	}

};


// Class AI.AIQueryShapeDesc_Cylinder
// 0x0018 (0x0038 - 0x0020)
class UAIQueryShapeDesc_Cylinder : public UAIQueryShapeDesc_Base
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
	float                                              RadiusOutside;                                            // 0x0028(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RadiusInside;                                             // 0x002C(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // 0x0030(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // 0x0034(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.AIQueryShapeDesc_Cylinder");
		return pStaticClass;
	}

};


// Class AI.BTDecorator_QueryTarget
// 0x0038 (0x0078 - 0x0040)
class UBTDecorator_QueryTarget : public UBTDecorator
{
public:
	class UAIQueryShapeDesc_Base*                      QueryShape;                                               // 0x0040(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      bUsePawnLocationAsCenter : 1;                             // 0x0044(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	struct FBlackboardKeySelector                      CenterLocationFromBBD;                                    // 0x0048(0x0020) (Edit, BlueprintVisible)
	struct FVector                                     TargetAnchorOffset;                                       // 0x0068(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0074(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_QueryTarget");
		return pStaticClass;
	}

};


// Class AI.BTDecorator_RandomStrategy
// 0x0060 (0x00A0 - 0x0040)
class UBTDecorator_RandomStrategy : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      StrategyKey;                                              // 0x0040(0x0020) (Edit)
	TMap<EBornLandAIStrategyType, float>               StrategyWeight;                                           // 0x0060(0x0050) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_RandomStrategy");
		return pStaticClass;
	}

};


// Class AI.BTDecorator_SatisfyAttkDist
// 0x0008 (0x0048 - 0x0040)
class UBTDecorator_SatisfyAttkDist : public UBTDecorator
{
public:
	float                                              AttackDist;                                               // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsInversed;                                              // 0x0044(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_SatisfyAttkDist");
		return pStaticClass;
	}

};


// Class AI.BTDecorator_SatisfyAttkDistWithWeapon
// 0x0048 (0x0088 - 0x0040)
class UBTDecorator_SatisfyAttkDistWithWeapon : public UBTDecorator
{
public:
	float                                              DefaultAttackDist;                                        // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsInversed;                                              // 0x0044(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	float                                              ExtraDistance;                                            // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<TEnumAsByte<EWeaponTypeNew>, float>           WeaponTypeRange;                                          // 0x004C(0x0050) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_SatisfyAttkDistWithWeapon");
		return pStaticClass;
	}

};


// Class AI.BTDecorator_TargetEnemyLandedTimeCheck
// 0x0008 (0x0048 - 0x0040)
class UBTDecorator_TargetEnemyLandedTimeCheck : public UBTDecorator
{
public:
	float                                              LandedCheckTime;                                          // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_TargetEnemyLandedTimeCheck");
		return pStaticClass;
	}

};


// Class AI.BTDecorator_WeaponTypeCheck
// 0x0000 (0x0040 - 0x0040)
class UBTDecorator_WeaponTypeCheck : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_WeaponTypeCheck");
		return pStaticClass;
	}

};


// Class AI.BTService_AdvancedShooting
// 0x0080 (0x00C8 - 0x0048)
class UBTService_AdvancedShooting : public UBTService
{
public:
	float                                              DeviationScale;                                           // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ShootGunDeviationAngle;                                   // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RandomShootFreqRange;                                     // 0x0050(0x0008) (Edit, IsPlainOldData)
	struct FBlackboardKeySelector                      ReloadBlackBoardKey;                                      // 0x0058(0x0020) (Edit)
	bool                                               bSetCanSeeTargetFlag;                                     // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseTargetEnemyCfg;                                       // 0x0079(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bNeedCheckBullets;                                        // 0x007A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x007B(0x0001) MISSED OFFSET
	struct FVector2D                                   ShootUpDownRange;                                         // 0x007C(0x0008) (Edit, IsPlainOldData)
	float                                              TargetWidth;                                              // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ShootLeftRightRange;                                      // 0x0088(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   ShootLeftRightRangeDistance;                              // 0x0090(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   ShootTargetSpeedRange;                                    // 0x0098(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   ShootTargetDistanceRangeDueToSpeed;                       // 0x00A0(0x0008) (Edit, IsPlainOldData)
	float                                              HitRateLerpSpeed;                                         // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseLerpHitRate;                                          // 0x00AC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bMissOnPurpose;                                           // 0x00AD(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00AE(0x0002) MISSED OFFSET
	float                                              ScaleForHitPart;                                          // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bStopShootingWhenCannotSee;                               // 0x00B4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableShootProbabilityCompensate;                        // 0x00B5(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x00B6(0x0002) MISSED OFFSET
	class UCurveFloat*                                 LowSpeedScaleShootProbabilityCurve;                       // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowDebugLine;                                           // 0x00BC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
	float                                              LineLifeTime;                                             // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_AdvancedShooting");
		return pStaticClass;
	}

};


// Class AI.BTService_CheckAttackTarget
// 0x0008 (0x0050 - 0x0048)
class UBTService_CheckAttackTarget : public UBTService
{
public:
	float                                              SensedRadius;                                             // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EquipWeaponSensedRadius;                                  // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_CheckAttackTarget");
		return pStaticClass;
	}

};


// Class AI.BTService_CheckMaxDistanceFromSpawnPoint
// 0x0050 (0x0098 - 0x0048)
class UBTService_CheckMaxDistanceFromSpawnPoint : public UBTService
{
public:
	float                                              MaxDistAllowedFromSpawnPoint;                             // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      BBKeyIsOutOfMaxDistance;                                  // 0x0050(0x0020) (Edit)
	struct FBlackboardKeySelector                      BBKeySpawnPoint;                                          // 0x0070(0x0020) (Edit)
	bool                                               bClearEnemyTargetWhenOutOfMaxDist;                        // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAIMaxMoveDistanceVolume;                              // 0x0091(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0092(0x0002) MISSED OFFSET
	float                                              HeightTestOffset;                                         // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_CheckMaxDistanceFromSpawnPoint");
		return pStaticClass;
	}

};


// Class AI.BTService_ChooseEnemy
// 0x0138 (0x0180 - 0x0048)
class UBTService_ChooseEnemy : public UBTService
{
public:
	struct FBlackboardKeySelector                      BBKeySearchEnemyMethodIndex;                              // 0x0048(0x0020) (Edit)
	float                                              MaxRememberEnemyTimeInSeconds;                            // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxRememberLastAttackedMeTimeInSeconds;                   // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxTraceLastAttackedMeDistance;                           // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinTimeWhenCannotSeeTarget;                               // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinTimeLockTarget;                                        // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SensedRadius;                                             // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EquipWeaponSensedRadius;                                  // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EquipWeaponNightSensedRadius;                             // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EmergencyRadius;                                          // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FWeaponType2Range>                   WeaponType2Ranges;                                        // 0x008C(0x000C) (Edit, ZeroConstructor)
	TArray<struct FWeaponTypeToRange>                  DefaultWeaponTypeToRanges;                                // 0x0098(0x000C) (Edit, ZeroConstructor)
	TMap<EWeatherStatusType, struct FWeatherToRange>   WeatherToRange;                                           // 0x00A4(0x0050) (Edit, ZeroConstructor)
	TMap<EWeatherStatusType, EWeatherStatusType>       WeatherTypeToWeatherRange;                                // 0x00E0(0x0050) (Edit, ZeroConstructor)
	float                                              PVESensedRadius;                                          // 0x011C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FinalCircleSensedRate;                                    // 0x0120(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              UnderGroundSensedRate;                                    // 0x0124(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DarkAreaSensedRate;                                       // 0x0128(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FinalCircleAIPriorityDistSqRate;                          // 0x012C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableWarning;                                           // 0x0130(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0131(0x0003) MISSED OFFSET
	float                                              WarningCD;                                                // 0x0134(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableSmokingVisibilityCheck;                            // 0x0138(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     SmokingVisibilityCheckChannel;                            // 0x0139(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x013A(0x0006) MISSED OFFSET
	struct FName                                       SmokingVisibilityCheckTag;                                // 0x0140(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnablePeekShootingCheck;                                 // 0x0148(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnablePeekShootingCheckAtOcclusion;                      // 0x0149(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x014A(0x0002) MISSED OFFSET
	float                                              PeekShootingCheckAtOcclusionOfOcclusionRadius;            // 0x014C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<EAIShootingPose>                            PeekShootingCheckArray_Stand;                             // 0x0150(0x000C) (Edit, ZeroConstructor)
	TArray<EAIShootingPose>                            PeekShootingCheckArray_Crouch;                            // 0x015C(0x000C) (Edit, ZeroConstructor)
	bool                                               DoNotAttackNearDeathEnemyFirst;                           // 0x0168(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreAIWhenNoPlayerAround;                              // 0x0169(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x016A(0x0002) MISSED OFFSET
	float                                              IgnoreAIRadius;                                           // 0x016C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bClearEnemyWhenSameTeam;                                  // 0x0170(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSenseZombie;                                             // 0x0171(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSelectEnemyInSafety;                                     // 0x0172(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowDebugInfo;                                           // 0x0173(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DebugInfoLife;                                            // 0x0174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DebugRadius;                                              // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsBornLandFindEnemy;                                     // 0x017C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x017D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_ChooseEnemy");
		return pStaticClass;
	}

};


// Class AI.BTService_ChooseEnemyByShape
// 0x0010 (0x0190 - 0x0180)
class UBTService_ChooseEnemyByShape : public UBTService_ChooseEnemy
{
public:
	TArray<struct FWeaponTypeToRangeWithPawnState>     WeaponTypeToRangeWithPawnStates;                          // 0x0180(0x000C) (Edit, ZeroConstructor)
	bool                                               bUseVisibilityTrace;                                      // 0x018C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x018D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_ChooseEnemyByShape");
		return pStaticClass;
	}

};


// Class AI.BTService_ChooseEnemySingleTraining
// 0x0000 (0x0180 - 0x0180)
class UBTService_ChooseEnemySingleTraining : public UBTService_ChooseEnemy
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_ChooseEnemySingleTraining");
		return pStaticClass;
	}

};


// Class AI.BTService_ChooseFightbackEnemy
// 0x0010 (0x0058 - 0x0048)
class UBTService_ChooseFightbackEnemy : public UBTService
{
public:
	float                                              SensedRadius;                                             // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EquipWeaponSensedRadius;                                  // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EmergencyRadius;                                          // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_ChooseFightbackEnemy");
		return pStaticClass;
	}

};


// Class AI.BTService_CJChooseEnemy
// 0x00D8 (0x0120 - 0x0048)
class UBTService_CJChooseEnemy : public UBTService
{
public:
	TArray<struct FUpdateItemInterval>                 UpdateItemIntervalList;                                   // 0x0048(0x000C) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      OutTargetEnemyActor;                                      // 0x0058(0x0020) (Edit)
	struct FBlackboardKeySelector                      OutIsCanNotSeeTarget;                                     // 0x0078(0x0020) (Edit)
	float                                              MaxRememberLastAttackedMeTimeInSeconds;                   // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxTraceLastAttackedMeDistance;                           // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FEnemyInfo>                          EnemyInfoList;                                            // 0x00A0(0x000C) (Edit, ZeroConstructor)
	float                                              MinTimeLockTarget;                                        // 0x00AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinTimeWhenCannotSeeTarget;                               // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SensedRadius;                                             // 0x00B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                EquipWeaponSensedRadius;                                  // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseFanChoose;                                            // 0x00BC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
	TArray<struct FSightFanInfo>                       FanInfoList;                                              // 0x00C0(0x000C) (Edit, ZeroConstructor)
	bool                                               bFindNearestEnemyPawn;                                    // 0x00CC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	struct FBlackboardKeySelector                      OutNearestEnemyPawnVisible;                               // 0x00D0(0x0020) (Edit)
	struct FBlackboardKeySelector                      OutNearestEnemyPawnInVisible;                             // 0x00F0(0x0020) (Edit)
	float                                              NearestEnemyVisibleMemoryTime;                            // 0x0110(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SensedNearestEnemyVisibleRadius;                          // 0x0114(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SensedNearestEnemyInVisibleRadius;                        // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x011C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_CJChooseEnemy");
		return pStaticClass;
	}

};


// Class AI.BTService_ClearTrouble
// 0x0020 (0x0068 - 0x0048)
class UBTService_ClearTrouble : public UBTService
{
public:
	float                                              PathFindTestRadius;                                       // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           UnreachablePointsToBeInTrouble;                           // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      TestPathFilterClass;                                      // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FInTroubleTeleportConfig                    TeleportCfg;                                              // 0x0054(0x0010) (Edit)
	bool                                               bShowDebugPoint;                                          // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0065(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_ClearTrouble");
		return pStaticClass;
	}

};


// Class AI.BTService_Cruising
// 0x0000 (0x0048 - 0x0048)
class UBTService_Cruising : public UBTService
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_Cruising");
		return pStaticClass;
	}

};


// Class AI.BTService_DebugInfo
// 0x0010 (0x0058 - 0x0048)
class UBTService_DebugInfo : public UBTService
{
public:
	struct FString                                     Info;                                                     // 0x0048(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bShowControllerName;                                      // 0x0054(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0055(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_DebugInfo");
		return pStaticClass;
	}


	struct FString GetInfo();
};


// Class AI.BTService_DeliverControl
// 0x0010 (0x0058 - 0x0048)
class UBTService_DeliverControl : public UBTService
{
public:
	TArray<struct FDeliverControlRatingConfig>         RatingConfig;                                             // 0x0048(0x000C) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_DeliverControl");
		return pStaticClass;
	}

};


// Class AI.BTService_DetectVehicle
// 0x0050 (0x0098 - 0x0048)
class UBTService_DetectVehicle : public UBTService
{
public:
	float                                              QueryRange;                                               // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DetectionRange;                                           // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DetectionAngle;                                           // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      BBKeySensedVehicle;                                       // 0x0058(0x0020) (Edit)
	struct FBlackboardKeySelector                      BBKeyResult;                                              // 0x0078(0x0020) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_DetectVehicle");
		return pStaticClass;
	}

};


// Class AI.BTService_DistantJudge
// 0x0030 (0x0078 - 0x0048)
class UBTService_DistantJudge : public UBTService
{
public:
	struct FBlackboardKeySelector                      WatchTargetBlackBoardKey;                                 // 0x0048(0x0020) (Edit)
	TArray<struct FAIDistantJudgeNoftify>              DistantJudges;                                            // 0x0068(0x000C) (Edit, ZeroConstructor)
	bool                                               ResetModifyBBData;                                        // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0075(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_DistantJudge");
		return pStaticClass;
	}

};


// Class AI.BTService_FightDecisionSystem
// 0x0008 (0x0050 - 0x0048)
class UBTService_FightDecisionSystem : public UBTService
{
public:
	float                                              EnemyTraceRadius;                                         // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_FightDecisionSystem");
		return pStaticClass;
	}

};


// Class AI.BTService_FlyingChooseEnemy
// 0x0018 (0x0060 - 0x0048)
class UBTService_FlyingChooseEnemy : public UBTService
{
public:
	float                                              SensedRadius;                                             // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SensedAngle;                                              // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinTimeLockTarget;                                        // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinTimeWhenCannotSeeTarget;                               // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxRememberEnemyTimeInSeconds;                            // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_FlyingChooseEnemy");
		return pStaticClass;
	}

};


// Class AI.BTService_Focus
// 0x0000 (0x0070 - 0x0070)
class UBTService_Focus : public UBTService_DefaultFocus
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_Focus");
		return pStaticClass;
	}

};


// Class AI.BTService_HealthCheck
// 0x0028 (0x0070 - 0x0048)
class UBTService_HealthCheck : public UBTService
{
public:
	float                                              HealthChangeVaule;                                        // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      HealthChangeBlackBoardKey;                                // 0x0050(0x0020) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_HealthCheck");
		return pStaticClass;
	}

};


// Class AI.BTService_LookAround
// 0x0020 (0x0068 - 0x0048)
class UBTService_LookAround : public UBTService
{
public:
	struct FVector2D                                   RotationSpeed;                                            // 0x0048(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   RotationAngle;                                            // 0x0050(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   WaitTimeWhenStop;                                         // 0x0058(0x0008) (Edit, IsPlainOldData)
	float                                              AcceptToleranceInDegree;                                  // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_LookAround");
		return pStaticClass;
	}

};


// Class AI.BTService_Mob_AddHp
// 0x0008 (0x0050 - 0x0048)
class UBTService_Mob_AddHp : public UBTService
{
public:
	int                                                BuffID_AddHP;                                             // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EMobAddHPServiceType                               addHPType;                                                // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_Mob_AddHp");
		return pStaticClass;
	}

};


// Class AI.BTService_Mob_AdvancedMovementDetector
// 0x0000 (0x0048 - 0x0048)
class UBTService_Mob_AdvancedMovementDetector : public UBTService
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_Mob_AdvancedMovementDetector");
		return pStaticClass;
	}

};


// Class AI.BTService_Mob_AutoDestroy
// 0x0008 (0x0050 - 0x0048)
class UBTService_Mob_AutoDestroy : public UBTService
{
public:
	float                                              CheckRadius;                                              // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_Mob_AutoDestroy");
		return pStaticClass;
	}

};


// Class AI.BTService_Mob_CheckLocation
// 0x0008 (0x0050 - 0x0048)
class UBTService_Mob_CheckLocation : public UBTService
{
public:
	float                                              MaxAllowedDistanceFromSpawnPointSq;                       // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_Mob_CheckLocation");
		return pStaticClass;
	}

};


// Class AI.BTService_Mob_CheckLoseTarget
// 0x0010 (0x0058 - 0x0048)
class UBTService_Mob_CheckLoseTarget : public UBTService
{
public:
	float                                              LoseTargetThreshold;                                      // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCheckNoPlayerNearby : 1;                                 // 0x004C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	float                                              CheckNoPlayerRange;                                       // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_Mob_CheckLoseTarget");
		return pStaticClass;
	}

};


// Class AI.BTService_Mob_CheckPathExist
// 0x0000 (0x0048 - 0x0048)
class UBTService_Mob_CheckPathExist : public UBTService
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_Mob_CheckPathExist");
		return pStaticClass;
	}

};


// Class AI.BTService_Mob_ChooseEnemy
// 0x0058 (0x00A0 - 0x0048)
class UBTService_Mob_ChooseEnemy : public UBTService
{
public:
	float                                              MaxRememberEnemyTimeInSeconds;                            // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinTimeLockTarget;                                        // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinTimeWhenCannotSeeTarget;                               // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SensedRadius;                                             // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAISearchEnemyType                                 searchType;                                               // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	float                                              SensedAngle;                                              // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SenseEnemyWithLineTrace;                                  // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	float                                              PreciseHatredDecreaseSpeed;                               // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SensedRadiusAdvanceInNight;                               // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	float                                              LoseSightRadius;                                          // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DontAttackWhenTargetInWater;                              // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableWarning;                                           // 0x0071(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0072(0x0002) MISSED OFFSET
	float                                              WarningCD;                                                // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttackVehicleInRadius;                                    // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AttackVehicleInRadiusEnabled;                             // 0x007C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAISearchEnemyType                                 searchVehicleType;                                        // 0x007D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x007E(0x0002) MISSED OFFSET
	TArray<ESTExtraVehicleShapeType>                   IgnoreVehicleTypes;                                       // 0x0080(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bSelectEnemyInSafety;                                     // 0x008C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDoNotAttackNearDeathEnemyFirst : 1;                      // 0x008D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bIgnoreNearDeathEnemy : 1;                                // 0x008D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData05[0xE];                                       // 0x008E(0x000E) MISSED OFFSET
	class ASTExtraSimpleCharacter*                     ControlledMobPawn;                                        // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_Mob_ChooseEnemy");
		return pStaticClass;
	}

};


// Class AI.BTService_Mob_ChooseEnemyBySingleRule
// 0x0030 (0x00D0 - 0x00A0)
class UBTService_Mob_ChooseEnemyBySingleRule : public UBTService_Mob_ChooseEnemy
{
public:
	EAISearchEnemySingleRule                           SearchEnemySingleRule;                                    // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET
	struct FBlackboardKeySelector                      BBKeySearchEnemyMethodIndex;                              // 0x00A8(0x0020) (Edit)
	unsigned char                                      bRunBaseChooseEnemy : 1;                                  // 0x00C8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bForceUpdateTarget : 1;                                   // 0x00C8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00C9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_Mob_ChooseEnemyBySingleRule");
		return pStaticClass;
	}

};


// Class AI.BTService_Mob_DetectionEnemy
// 0x0000 (0x00A0 - 0x00A0)
class UBTService_Mob_DetectionEnemy : public UBTService_Mob_ChooseEnemy
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_Mob_DetectionEnemy");
		return pStaticClass;
	}

};


// Class AI.BTService_Mob_Hearing
// 0x0010 (0x0058 - 0x0048)
class UBTService_Mob_Hearing : public UBTService
{
public:
	float                                              MinTimeLockTarget;                                        // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxTimeLockWhenNoNextSound;                               // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ENoiseSearchType                                   searchType;                                               // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	float                                              AcceptableDistance;                                       // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_Mob_Hearing");
		return pStaticClass;
	}

};


// Class AI.BTService_Mob_MoveBlockTimer
// 0x0008 (0x0050 - 0x0048)
class UBTService_Mob_MoveBlockTimer : public UBTService
{
public:
	float                                              ClearBlockStatusTime;                                     // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_Mob_MoveBlockTimer");
		return pStaticClass;
	}

};


// Class AI.BTService_Mob_OpenDoor
// 0x0010 (0x0058 - 0x0048)
class UBTService_Mob_OpenDoor : public UBTService
{
public:
	float                                              OpenDoorRangeSq;                                          // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AutoOpenDoorInterval;                                     // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_Mob_OpenDoor");
		return pStaticClass;
	}

};


// Class AI.BTService_ModifyBlackboardValue
// 0x0060 (0x00A8 - 0x0048)
class UBTService_ModifyBlackboardValue : public UBTService
{
public:
	struct FBlackboardKeySelector                      EnterModifyBlackboardKey;                                 // 0x0048(0x0020) (Edit)
	struct FString                                     EnterSetValue;                                            // 0x0068(0x000C) (Edit, ZeroConstructor)
	bool                                               bExitModifyBlackboardKey;                                 // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
	struct FBlackboardKeySelector                      ExitModifyBlackboardKey;                                  // 0x0078(0x0020) (Edit)
	struct FString                                     ExitSetValue;                                             // 0x0098(0x000C) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_ModifyBlackboardValue");
		return pStaticClass;
	}

};


// Class AI.BTService_OccupyHandler
// 0x0040 (0x0088 - 0x0048)
class UBTService_OccupyHandler : public UBTService
{
public:
	struct FBlackboardKeySelector                      OutCurOccupyPointActor;                                   // 0x0048(0x0020) (Edit)
	struct FBlackboardKeySelector                      OutIsOccupying;                                           // 0x0068(0x0020) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_OccupyHandler");
		return pStaticClass;
	}

};


// Class AI.BTService_OpenDoor
// 0x0008 (0x0050 - 0x0048)
class UBTService_OpenDoor : public UBTService
{
public:
	float                                              OpenDoorRange;                                            // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_OpenDoor");
		return pStaticClass;
	}

};


// Class AI.BTService_RescueHandler
// 0x0008 (0x0050 - 0x0048)
class UBTService_RescueHandler : public UBTService
{
public:
	int                                                RescueRange;                                              // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_RescueHandler");
		return pStaticClass;
	}

};


// Class AI.BTService_SensedEnemy
// 0x0058 (0x00A0 - 0x0048)
class UBTService_SensedEnemy : public UBTService
{
public:
	float                                              IsNotSeeTargetTime;                                       // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SensedRadius;                                             // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EquipWeaponSensedRadius;                                  // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EquipWeaponNightSensedRadius;                             // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EmergencyRadius;                                          // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<int, float>                                   AISensedEnemyPoseRatio;                                   // 0x005C(0x0050) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_SensedEnemy");
		return pStaticClass;
	}

};


// Class AI.BTService_SenseGrenade
// 0x00F0 (0x0138 - 0x0048)
class UBTService_SenseGrenade : public UBTService
{
public:
	TMap<EAISenseGrenadeType, bool>                    GrenadeSenseEnable;                                       // 0x0048(0x0050) (Edit, ZeroConstructor)
	TArray<struct FBPAISenseGrenadeDistanceConfig>     SenseDistanceConfig;                                      // 0x0084(0x000C) (Edit, ZeroConstructor)
	TMap<EAISenseGrenadeType, struct FAISenseGrenadeClassConfig> GrenadeClasses;                                           // 0x0090(0x0050) (Edit, ZeroConstructor)
	TArray<struct FAISenseGrenadeBBKeyInfo>            GrenadeBBKeyConfig;                                       // 0x00CC(0x000C) (Edit, ZeroConstructor)
	TArray<TEnumAsByte<ECollisionChannel>>             GrenadeCollisionChannels;                                 // 0x00D8(0x000C) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      BBKeyHasBeenFlashed;                                      // 0x00E8(0x0020) (Edit)
	int                                                FlashBombBuffID;                                          // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      BBKeyHasSensedGrenade;                                    // 0x0110(0x0020) (Edit)
	float                                              StopVelocityThreshold;                                    // 0x0130(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0134(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_SenseGrenade");
		return pStaticClass;
	}

};


// Class AI.BTService_Shooting
// 0x0008 (0x0050 - 0x0048)
class UBTService_Shooting : public UBTService
{
public:
	float                                              DeviationScale;                                           // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_Shooting");
		return pStaticClass;
	}

};


// Class AI.BTService_SimpleCheckBehindEnemy
// 0x0030 (0x0078 - 0x0048)
class UBTService_SimpleCheckBehindEnemy : public UBTService
{
public:
	struct FBlackboardKeySelector                      IsFoundBehindEnemyKey;                                    // 0x0048(0x0020) (Edit)
	float                                              SensedRadius;                                             // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SensedBehindAngle;                                        // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SensedHeightDiff;                                         // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DontAttackWhenTargetInWater;                              // 0x0074(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SenseEnemyWithLineTrace;                                  // 0x0075(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0076(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_SimpleCheckBehindEnemy");
		return pStaticClass;
	}

};


// Class AI.BTService_SimpleShooting
// 0x0020 (0x0068 - 0x0048)
class UBTService_SimpleShooting : public UBTService
{
public:
	float                                              DeviationScale;                                           // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ShootUpDownRange;                                         // 0x004C(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   RandomShootFreqRange;                                     // 0x0054(0x0008) (Edit, IsPlainOldData)
	bool                                               bShowDebugLine;                                           // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	float                                              LineLifeTime;                                             // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_SimpleShooting");
		return pStaticClass;
	}

};


// Class AI.BTService_Tank_RotateTurret
// 0x0048 (0x0090 - 0x0048)
class UBTService_Tank_RotateTurret : public UBTService
{
public:
	struct FBlackboardKeySelector                      BBKeyAimingTarget;                                        // 0x0048(0x0020) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      BBKeyAimingFinished;                                      // 0x0068(0x0020) (Edit, BlueprintVisible)
	float                                              AimingLockRange;                                          // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UAIBehaviorAdapter_Tank*                     OwnerAdapter;                                             // 0x008C(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_Tank_RotateTurret");
		return pStaticClass;
	}

};


// Class AI.BTService_Tank_Shooting
// 0x0048 (0x0090 - 0x0048)
class UBTService_Tank_Shooting : public UBTService
{
public:
	struct FBlackboardKeySelector                      BBKeyShootingCD;                                          // 0x0048(0x0020) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      BBKeyAimingFailed;                                        // 0x0068(0x0020) (Edit, BlueprintVisible)
	class UAIBehaviorAdapter_Tank*                     OwnerAdapter;                                             // 0x0088(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_Tank_Shooting");
		return pStaticClass;
	}

};


// Class AI.BTService_TargetAngleCheck
// 0x0030 (0x0078 - 0x0048)
class UBTService_TargetAngleCheck : public UBTService
{
public:
	float                                              FocusTime;                                                // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FocusDegree;                                              // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DistanceSqr;                                              // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      FocusState;                                               // 0x0058(0x0020) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_TargetAngleCheck");
		return pStaticClass;
	}

};


// Class AI.BTService_TargetEnemyHP
// 0x0000 (0x0048 - 0x0048)
class UBTService_TargetEnemyHP : public UBTService
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_TargetEnemyHP");
		return pStaticClass;
	}

};


// Class AI.BTService_TurnAround
// 0x0028 (0x0070 - 0x0048)
class UBTService_TurnAround : public UBTService
{
public:
	struct FBlackboardKeySelector                      OutTatget;                                                // 0x0048(0x0020) (Edit)
	float                                              TurnAroundVelocity;                                       // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_TurnAround");
		return pStaticClass;
	}

};


// Class AI.BTService_UseSkill
// 0x0030 (0x0078 - 0x0048)
class UBTService_UseSkill : public UBTService
{
public:
	int                                                SkillID;                                                  // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CoolDown;                                                 // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CastSkillDistance;                                        // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      SkillTargetBlackBoardKey;                                 // 0x0058(0x0020) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_UseSkill");
		return pStaticClass;
	}

};


// Class AI.BTService_VH_ChooseEnemy
// 0x0010 (0x0058 - 0x0048)
class UBTService_VH_ChooseEnemy : public UBTService
{
public:
	TArray<class UClass*>                              IgnoreActorsClass;                                        // 0x0048(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class UAIBehaviorAdapter_VehicleBase*              OwnerAdapter;                                             // 0x0054(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_VH_ChooseEnemy");
		return pStaticClass;
	}

};


// Class AI.BTService_WeaponHandler
// 0x0000 (0x0048 - 0x0048)
class UBTService_WeaponHandler : public UBTService
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_WeaponHandler");
		return pStaticClass;
	}

};


// Class AI.BTService_WeatherTimeCount
// 0x0050 (0x0098 - 0x0048)
class UBTService_WeatherTimeCount : public UBTService
{
public:
	struct FBlackboardKeySelector                      StartCurrentWeatherCountDownBlackboardKey;                // 0x0048(0x0020) (Edit)
	struct FBlackboardKeySelector                      IsCurrentWeatherBlackboardKey;                            // 0x0068(0x0020) (Edit)
	EWeatherStatusType                                 NewWeatherStatusType;                                     // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0089(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_WeatherTimeCount");
		return pStaticClass;
	}

};


// Class AI.BTTask_AddItem
// 0x0030 (0x0080 - 0x0050)
class UBTTask_AddItem : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
	unsigned char                                      bItemIDUseBBK : 1;                                        // 0x0058(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x0060(0x0020) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_AddItem");
		return pStaticClass;
	}

};


// Class AI.BTTask_AdvancedWait
// 0x0040 (0x0098 - 0x0058)
class UBTTask_AdvancedWait : public UBTTask_Wait
{
public:
	TMap<int, struct FDifficultyTimeConfig>            DifficultyTimeCfg;                                        // 0x0058(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_AdvancedWait");
		return pStaticClass;
	}

};


// Class AI.BTTask_AdvFindOcclusionPoint
// 0x0088 (0x00F8 - 0x0070)
class UBTTask_AdvFindOcclusionPoint : public UBTTask_BlackboardBase
{
public:
	float                                              SearchRadius;                                             // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              UseLastPointRadius;                                       // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBlackboardKeySelector                      BBKeyOcclusionLocation;                                   // 0x0078(0x0020) (Edit)
	bool                                               bDebug;                                                   // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bChoosePointByEnemy;                                      // 0x0099(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x009A(0x0002) MISSED OFFSET
	float                                              CirclePainThreshold;                                      // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DoNotUseCurrentOcclusionFirst;                            // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	float                                              CurrentOcclusionRadius;                                   // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<EAIAdvFindOcclusionPointPoseType>           AcceptableOcclusionTypeArray;                             // 0x00A8(0x000C) (Edit, ZeroConstructor)
	bool                                               bUsePointNearSelfCompareToEnemy;                          // 0x00B4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseNavMeshDistance;                                      // 0x00B5(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x00B6(0x0002) MISSED OFFSET
	float                                              MaxNavMeshSearchDistance;                                 // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EAIAdvFindOcclusionPointSearchBestOcclusionMethod  searchBestOcclusionMethod;                                // 0x00BC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
	float                                              OcclusionPointChooseZFactor;                              // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OcclusionPointChooseBushFactor;                           // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ChooseAttackableOcclusionFirst;                           // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00C9(0x0003) MISSED OFFSET
	float                                              ChooseAttackableOcclusionFactor;                          // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OcclusionPadAngle_Normal;                                 // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OcclusionPadAngle_Aggressive;                             // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ChooseAttackableOcclusionWithLineTrace;                   // 0x00D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x00D9(0x0003) MISSED OFFSET
	float                                              SelfStandHalfHeight;                                      // 0x00DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ChooseTagOcclusionEnable;                                 // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x00E1(0x0003) MISSED OFFSET
	struct FString                                     OcclusionTagForChosen;                                    // 0x00E4(0x000C) (Edit, ZeroConstructor)
	bool                                               bIgnorePossibleAttackableOcclusion;                       // 0x00F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_AdvFindOcclusionPoint");
		return pStaticClass;
	}

};


// Class AI.BTTask_AnimalFindDirectedPoint
// 0x0060 (0x00B0 - 0x0050)
class UBTTask_AnimalFindDirectedPoint : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0050(0x0004) MISSED OFFSET
	struct FVector2D                                   AngleRange;                                               // 0x0054(0x0008) (Edit, IsPlainOldData)
	float                                              TraceHeightOffset;                                        // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           TryFindLocNum;                                            // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDoWaterTest;                                             // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDoNavmeshProjectTest;                                    // 0x0065(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0066(0x0002) MISSED OFFSET
	class UClass*                                      ProjectFilterClass;                                       // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDoLimitFindPointArea;                                    // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
	struct FBlackboardKeySelector                      TargetBlackboardKey;                                      // 0x0070(0x0020) (Edit)
	struct FBlackboardKeySelector                      OutputBlackboardKey;                                      // 0x0090(0x0020) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_AnimalFindDirectedPoint");
		return pStaticClass;
	}

};


// Class AI.BTTask_AnimalFindRandomPoint
// 0x0070 (0x00C0 - 0x0050)
class UBTTask_AnimalFindRandomPoint : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0050(0x0004) MISSED OFFSET
	float                                              TraceHeightOffset;                                        // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           TryFindLocNum;                                            // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDoNavmeshProjectTest;                                    // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	class UClass*                                      ProjectFilterClass;                                       // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDoOnlyStaticTrace;                                       // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDoWaterTest;                                             // 0x0065(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDoLimitFindPointArea;                                    // 0x0066(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0067(0x0001) MISSED OFFSET
	float                                              CollisionExcludeAngle;                                    // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLimitResultInForwardAngle;                               // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
	float                                              LimitInForwardAngle;                                      // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      CenterBlackboardKey;                                      // 0x0078(0x0020) (Edit)
	struct FBlackboardKeySelector                      OutputBlackboardKey;                                      // 0x0098(0x0020) (Edit)
	bool                                               bDebugDraw;                                               // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x00B9(0x0003) MISSED OFFSET
	float                                              DebugDrawPointTime;                                       // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_AnimalFindRandomPoint");
		return pStaticClass;
	}

};


// Class AI.BTTask_AnimalMove
// 0x0028 (0x00A8 - 0x0080)
class UBTTask_AnimalMove : public UBTTask_MoveTo
{
public:
	bool                                               bOpenCollisionDetect;                                     // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	float                                              CollisionDetectAdvancedTime;                              // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CollisionDetectFreq;                                      // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSweep;                                                // 0x008C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // 0x008D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRandomAcceptableRadius;                                  // 0x008E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x008F(0x0001) MISSED OFFSET
	struct FVector2D                                   RandomAcceptableRadiusRange;                              // 0x0090(0x0008) (Edit, IsPlainOldData)
	bool                                               MoveWithOutPathFinding;                                   // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0099(0x0003) MISSED OFFSET
	float                                              MoveFailReviseLocationInterval;                           // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MoveFailLocationSearchRadius;                             // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAsyncExecuteTask;                                        // 0x00A4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowTargetLoc;                                           // 0x00A5(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowDetectLine;                                          // 0x00A6(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x00A7(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_AnimalMove");
		return pStaticClass;
	}

};


// Class AI.BTTask_AnimalTeleport
// 0x0030 (0x00A0 - 0x0070)
class UBTTask_AnimalTeleport : public UBTTask_BlackboardBase
{
public:
	float                                              RangeMin;                                                 // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RangeMax;                                                 // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDoOnlyStaticTrace;                                       // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OnlyTeleportToLand;                                       // 0x0079(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               NotTeleportToHouse;                                       // 0x007A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x007B(0x0001) MISSED OFFSET
	float                                              OriginCheckRadius;                                        // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DestCheckRadius;                                          // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TraceHeightOffset;                                        // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TargetLocZOffset;                                         // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             ValidTraceActorIncludeName;                               // 0x008C(0x000C) (Edit, ZeroConstructor)
	int                                                TryFindLocNum;                                            // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bForceSuccess;                                            // 0x009C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x009D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_AnimalTeleport");
		return pStaticClass;
	}

};


// Class AI.BTTask_ChangeWalkSpeed
// 0x0028 (0x0078 - 0x0050)
class UBTTask_ChangeWalkSpeed : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      KeyDefaultMaxAcceleration;                                // 0x0050(0x0020) (Edit, BlueprintVisible)
	bool                                               IsEnableAcceleration;                                     // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	float                                              MaxAcceleration;                                          // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_ChangeWalkSpeed");
		return pStaticClass;
	}

};


// Class AI.BTTask_ClearBlackboardData
// 0x0000 (0x0070 - 0x0070)
class UBTTask_ClearBlackboardData : public UBTTask_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_ClearBlackboardData");
		return pStaticClass;
	}

};


// Class AI.BTTask_ClearDelivery
// 0x0000 (0x0050 - 0x0050)
class UBTTask_ClearDelivery : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_ClearDelivery");
		return pStaticClass;
	}

};


// Class AI.BTTask_ConvertActorToRotaion
// 0x0040 (0x0090 - 0x0050)
class UBTTask_ConvertActorToRotaion : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      ActorBlackboardKey;                                       // 0x0050(0x0020) (Edit)
	struct FBlackboardKeySelector                      ToRotationKey;                                            // 0x0070(0x0020) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_ConvertActorToRotaion");
		return pStaticClass;
	}

};


// Class AI.BTTask_CopyBlackboardData
// 0x0040 (0x0090 - 0x0050)
class UBTTask_CopyBlackboardData : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      SrcBlackboardKey;                                         // 0x0050(0x0020) (Edit)
	struct FBlackboardKeySelector                      TargetBlackboardKey;                                      // 0x0070(0x0020) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_CopyBlackboardData");
		return pStaticClass;
	}

};


// Class AI.BTTask_CrowdMove
// 0x0048 (0x00B8 - 0x0070)
class UBTTask_CrowdMove : public UBTTask_BlackboardBase
{
public:
	float                                              StopMoveRadius;                                           // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              UpdateDestIntervel;                                       // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOpenPredictMovement;                                     // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	float                                              PredictMovementTime;                                      // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ForceFacingTargetDist;                                    // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeLimit;                                                // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsHalfFrame;                                             // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSmoothLocation;                                          // 0x0089(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSmoothRotation;                                          // 0x008A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x008B(0x0001) MISSED OFFSET
	float                                              SmoothLocationTime;                                       // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SmoothRotationTime;                                       // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOpenExceptCheck;                                         // 0x0094(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOpenDebug;                                               // 0x0095(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSetRotation;                                             // 0x0096(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOpenSeparetionAdjust;                                    // 0x0097(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TempMoveLocationRadius;                                   // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              UpdateTempLocIntervel;                                    // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EAIMovePose                                        MoveType;                                                 // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	class UClass*                                      FilterClass;                                              // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableCustomSpeed;                                       // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00A9(0x0003) MISSED OFFSET
	float                                              CustomSpeedValue;                                         // 0x00AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HeightOffsetForPathFinding;                               // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_CrowdMove");
		return pStaticClass;
	}

};


// Class AI.BTTask_CrowdMoveToOcclusion
// 0x0038 (0x00F0 - 0x00B8)
class UBTTask_CrowdMoveToOcclusion : public UBTTask_CrowdMove
{
public:
	float                                              UseLastPointRadius;                                       // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NearDistanceValue;                                        // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PointInNearDistanceValue;                                 // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bChoosePointByEnemy;                                      // 0x00C4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bForceStand;                                              // 0x00C5(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00C6(0x0002) MISSED OFFSET
	float                                              CirclePainThreshold;                                      // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      EnemyBlackboardKey;                                       // 0x00D0(0x0020) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_CrowdMoveToOcclusion");
		return pStaticClass;
	}

};


// Class AI.BTTask_DealNextBuildingPathNode
// 0x0008 (0x0078 - 0x0070)
class UBTTask_DealNextBuildingPathNode : public UBTTask_BlackboardBase
{
public:
	float                                              findSpotXYOffset;                                         // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              findSpotZOffset;                                          // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_DealNextBuildingPathNode");
		return pStaticClass;
	}

};


// Class AI.BTTask_ShortDistanceMove
// 0x0050 (0x00C0 - 0x0070)
class UBTTask_ShortDistanceMove : public UBTTask_BlackboardBase
{
public:
	EAIMovePose                                        MoveType;                                                 // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EAIMoveType                                        MovePathType;                                             // 0x0071(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0072(0x0002) MISSED OFFSET
	int                                                SampleNumber;                                             // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ControllPoint1;                                           // 0x0078(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   ControllPoint2;                                           // 0x0080(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   DirectionAngleRange;                                      // 0x0088(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   MoveTargetDistRange;                                      // 0x0090(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   ExecutionDuration;                                        // 0x0098(0x0008) (Edit, IsPlainOldData)
	float                                              RePlanTime;                                               // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AlwaysSuccess;                                            // 0x00A4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00A5(0x0003) MISSED OFFSET
	float                                              AcceptRadius;                                             // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               StopOnOverlap;                                            // 0x00AC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UsePathfinding;                                           // 0x00AD(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AllowPartialPath;                                         // 0x00AE(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ProjectDestinationToNavigation;                           // 0x00AF(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ExceptionRandomRadius;                                    // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DebugDrawPath;                                            // 0x00B4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00B5(0x0003) MISSED OFFSET
	class UNavCostModifier*                            NavCostModifier;                                          // 0x00B8(0x0004) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_ShortDistanceMove");
		return pStaticClass;
	}

};


// Class AI.BTTask_Escape
// 0x0038 (0x00F8 - 0x00C0)
class UBTTask_Escape : public UBTTask_ShortDistanceMove
{
public:
	float                                              TryLineTestDistance;                                      // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxTrySampleTimes;                                        // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinTrySampleDistance;                                     // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinTryEscapeDistance;                                     // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EscapeStopDistance;                                       // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      EnemyBlackboardKey;                                       // 0x00D8(0x0020) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_Escape");
		return pStaticClass;
	}

};


// Class AI.BTTask_MagicMove
// 0x0010 (0x0090 - 0x0080)
class UBTTask_MagicMove : public UBTTask_MoveTo
{
public:
	float                                              TimeLimit;                                                // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ForceSuccess;                                             // 0x0084(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               MoveWithOutPathFinding;                                   // 0x0085(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               GotoExceptionWhenFailed;                                  // 0x0086(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0087(0x0001) MISSED OFFSET
	class UNavCostModifier*                            NavCostModifier;                                          // 0x0088(0x0004) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      bForceStandWhenAborted : 1;                               // 0x008C(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x008D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_MagicMove");
		return pStaticClass;
	}

};


// Class AI.BTTask_FindAndPickItem
// 0x0000 (0x0090 - 0x0090)
class UBTTask_FindAndPickItem : public UBTTask_MagicMove
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_FindAndPickItem");
		return pStaticClass;
	}

};


// Class AI.BTTask_FindAndPickupEquip
// 0x0000 (0x0080 - 0x0080)
class UBTTask_FindAndPickupEquip : public UBTTask_MoveTo
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_FindAndPickupEquip");
		return pStaticClass;
	}

};


// Class AI.BTTask_FindCustomActorWithTag
// 0x0028 (0x0098 - 0x0070)
class UBTTask_FindCustomActorWithTag : public UBTTask_BlackboardBase
{
public:
	float                                              SphereRadius;                                             // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              QueryObjectType;                                          // 0x0074(0x000C) (Edit, ZeroConstructor)
	struct FName                                       ActorTag;                                                 // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActorClassFilter;                                         // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IgnoreDistance;                                           // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_FindCustomActorWithTag");
		return pStaticClass;
	}

};


// Class AI.BTTask_FindFlyingHoverPoint
// 0x00A0 (0x00F0 - 0x0050)
class UBTTask_FindFlyingHoverPoint : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
	struct FBlackboardKeySelector                      BBKeyHoverLoc1;                                           // 0x0058(0x0020) (Edit)
	struct FBlackboardKeySelector                      BBKeyHoverLoc2;                                           // 0x0078(0x0020) (Edit)
	struct FBlackboardKeySelector                      BBKeyHoverLoc3;                                           // 0x0098(0x0020) (Edit)
	struct FBlackboardKeySelector                      BBKeyHoverLoc4;                                           // 0x00B8(0x0020) (Edit)
	EFindFlyingHoverPointOneSideShapeOType             OneSideShapeOType;                                        // 0x00D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00D9(0x0003) MISSED OFFSET
	struct FVector2D                                   OneSideShapeOForwardLength;                               // 0x00DC(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   OneSideShapeOSideDirectionLength;                         // 0x00E4(0x0008) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_FindFlyingHoverPoint");
		return pStaticClass;
	}

};


// Class AI.BTTask_FindNearestTombBoxTask
// 0x0010 (0x0080 - 0x0070)
class UBTTask_FindNearestTombBoxTask : public UBTTask_BlackboardBase
{
public:
	float                                              PlayerBackpackSearchRadius;                               // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AirDropSearchRadius;                                      // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AirDropBoxRadius;                                         // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxPainFindInBlueCircle;                                  // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_FindNearestTombBoxTask");
		return pStaticClass;
	}

};


// Class AI.BTTask_FindOcclusionPoint
// 0x0030 (0x00A0 - 0x0070)
class UBTTask_FindOcclusionPoint : public UBTTask_BlackboardBase
{
public:
	float                                              SearchRadius;                                             // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOcclusionSaveToBlackBoard;                               // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
	struct FBlackboardKeySelector                      BBKeyOcclusionLocation;                                   // 0x0078(0x0020) (Edit)
	bool                                               bDebug;                                                   // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0099(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_FindOcclusionPoint");
		return pStaticClass;
	}

};


// Class AI.BTTask_FindRandPosInOccupyPt
// 0x0048 (0x0098 - 0x0050)
class UBTTask_FindRandPosInOccupyPt : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      OutOccupyPointActor;                                      // 0x0050(0x0020) (Edit)
	struct FBlackboardKeySelector                      OutOccupyPos;                                             // 0x0070(0x0020) (Edit)
	int                                                MaxTryFindTime;                                           // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_FindRandPosInOccupyPt");
		return pStaticClass;
	}

};


// Class AI.BTTask_FindSnowfallHoleUpPoint
// 0x0068 (0x00B8 - 0x0050)
class UBTTask_FindSnowfallHoleUpPoint : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      FindOriginBlackboardKey;                                  // 0x0050(0x0020) (Edit)
	struct FBlackboardKeySelector                      HoleUpPointBlackboardKey;                                 // 0x0070(0x0020) (Edit)
	struct FBlackboardKeySelector                      IsFindHoleUpSnowfallBlackboardKey;                        // 0x0090(0x0020) (Edit)
	float                                              MaxMoveSpeed;                                             // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SearchRadius;                                             // 0x00B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_FindSnowfallHoleUpPoint");
		return pStaticClass;
	}

};


// Class AI.BTTask_FindTargetPTInHardPT
// 0x0040 (0x0090 - 0x0050)
class UBTTask_FindTargetPTInHardPT : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      InHardPTKey;                                              // 0x0050(0x0020) (Edit)
	struct FBlackboardKeySelector                      OutTargetPTKey;                                           // 0x0070(0x0020) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_FindTargetPTInHardPT");
		return pStaticClass;
	}

};


// Class AI.BTTask_FindWayPoint
// 0x0040 (0x00B0 - 0x0070)
class UBTTask_FindWayPoint : public UBTTask_BlackboardBase
{
public:
	float                                              InPointRadius;                                            // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MaxRandIterTimes;                                         // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRandUseNav;                                              // 0x0075(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDraw;                                               // 0x0076(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0077(0x0001) MISSED OFFSET
	float                                              DebugDrawPointTime;                                       // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FindPointRange;                                           // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomTargetLocRadius;                                    // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      BBK_CurrentWayPoint;                                      // 0x0088(0x0020) (Edit)
	bool                                               bFindNextInRange;                                         // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_FindWayPoint");
		return pStaticClass;
	}

};


// Class AI.BTTask_FinishOrder
// 0x0000 (0x0050 - 0x0050)
class UBTTask_FinishOrder : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_FinishOrder");
		return pStaticClass;
	}

};


// Class AI.BTTask_FlyTo
// 0x0060 (0x00B0 - 0x0050)
class UBTTask_FlyTo : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      BBKeyFlyToTarget;                                         // 0x0050(0x0020) (Edit)
	float                                              FlySpeedRatio;                                            // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUse3DNavigation;                                         // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
	float                                              OverrideAgentRadius;                                      // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableFlyCurveSimulate;                                  // 0x007C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
	float                                              FlyCurvatureFactor;                                       // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FlyCurveSimulationMinAngle;                               // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                FlyCurveSimulationLineSegemnts;                           // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EFlyToPathfindingThread                            PathfindingThread;                                        // 0x008C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x008D(0x0003) MISSED OFFSET
	TArray<EST3DNavigationPathfindingPartialStrategy>  PartialStrategyArray;                                     // 0x0090(0x000C) (Edit, ZeroConstructor)
	bool                                               bBrakingBeforeDestination;                                // 0x009C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x009D(0x0003) MISSED OFFSET
	float                                              DistanceOfBrakingBeforeDestination;                       // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FlySpeedRatioOfBrakingBeforeDestination;                  // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawDebugPath;                                           // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_FlyTo");
		return pStaticClass;
	}

};


// Class AI.BTTask_ForceIdle
// 0x0060 (0x00B0 - 0x0050)
class UBTTask_ForceIdle : public UBTTaskNode
{
public:
	float                                              RandomDeviation;                                          // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRandIdle;                                                // 0x0054(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	int                                                IdleBlendSpaceValue;                                      // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ValidIdleBSValues;                                        // 0x005C(0x000C) (Edit, ZeroConstructor)
	struct FBlackboardKeySelector                      KeyIdleTime;                                              // 0x0068(0x0020) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      KeyIdleBlendSpaceValue;                                   // 0x0088(0x0020) (Edit, BlueprintVisible)
	bool                                               bFinishResetIdle;                                         // 0x00A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_ForceIdle");
		return pStaticClass;
	}

};


// Class AI.BTTask_GeneralActivateNextWayPoint
// 0x0030 (0x0080 - 0x0050)
class UBTTask_GeneralActivateNextWayPoint : public UBTTaskNode
{
public:
	float                                              HasReachedRadius;                                         // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      CurrentWayPointActor;                                     // 0x0058(0x0020) (Edit)
	bool                                               ReachedEndNoNextWayPointRetFalse;                         // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bFindNextInRange;                                         // 0x0079(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x007A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_GeneralActivateNextWayPoint");
		return pStaticClass;
	}

};


// Class AI.BTTask_GeneralAIWayPointPathSelector
// 0x0028 (0x0078 - 0x0050)
class UBTTask_GeneralAIWayPointPathSelector : public UBTTaskNode
{
public:
	struct FName                                       NameOfWayPointSelector;                                   // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBlackboardKeySelector                      CurrentEventWayPointActor;                                // 0x0058(0x0020) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_GeneralAIWayPointPathSelector");
		return pStaticClass;
	}

};


// Class AI.BTTask_GeneralExecuteEventsOfWayPoint
// 0x0048 (0x0098 - 0x0050)
class UBTTask_GeneralExecuteEventsOfWayPoint : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      CurrentEventWayPointActor;                                // 0x0050(0x0020) (Edit)
	bool                                               bEnableWait;                                              // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	class UCurveFloat*                                 WaitTimeCurveFloat;                                       // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FixedWaitTime;                                            // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDirectRotateAIOrRotateToControllerRotation;              // 0x007C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
	TArray<struct FWayPointEvent>                      CacheWayPointEvents;                                      // 0x0080(0x000C) (ZeroConstructor)
	class AAIEventWayPointActor*                       CurrentEventWayPointActorPtr;                             // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0090(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_GeneralExecuteEventsOfWayPoint");
		return pStaticClass;
	}

};


// Class AI.BTTask_GeneralExecuteEventsOfWayPointNew
// 0x0020 (0x0070 - 0x0050)
class UBTTask_GeneralExecuteEventsOfWayPointNew : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      CurrentEventWayPointActor;                                // 0x0050(0x0020) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_GeneralExecuteEventsOfWayPointNew");
		return pStaticClass;
	}

};


// Class AI.BTTask_GeneralFindAttackablePosition
// 0x0070 (0x00C0 - 0x0050)
class UBTTask_GeneralFindAttackablePosition : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      BBKeyTargetEnemy;                                         // 0x0050(0x0020) (Edit)
	struct FBlackboardKeySelector                      BBKeyFoundAttackablePosition;                             // 0x0070(0x0020) (Edit)
	unsigned char                                      bReachableTest : 1;                                       // 0x0090(0x0001) (Edit)
	unsigned char                                      bUseNavSystem : 1;                                        // 0x0090(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	float                                              MaxAttackableRadius;                                      // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScanMinOuterCircleRadius;                                 // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScanRingWidth;                                            // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxIterations;                                            // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FGeneralRandLocationRetryRule>       retryRules;                                               // 0x00A4(0x000C) (Edit, ZeroConstructor)
	float                                              HeightTestOffset;                                         // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCapsuleTrace;                                         // 0x00B4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00B5(0x0003) MISSED OFFSET
	float                                              TraceCapsuleScale;                                        // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyLandscape;                                           // 0x00BC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_GeneralFindAttackablePosition");
		return pStaticClass;
	}

};


// Class AI.BTTask_GeneralFindEscapePosition
// 0x0068 (0x00B8 - 0x0050)
class UBTTask_GeneralFindEscapePosition : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      BBKeyEscapeTarget;                                        // 0x0050(0x0020) (Edit)
	struct FBlackboardKeySelector                      BBKeyFoundEscapePosition;                                 // 0x0070(0x0020) (Edit)
	TArray<struct FGeneralRandLocationRetryRule>       retryRules;                                               // 0x0090(0x000C) (Edit, ZeroConstructor)
	struct FVector2D                                   EscapeDistanceRange;                                      // 0x009C(0x0008) (Edit, IsPlainOldData)
	bool                                               bEnableEscapePointReachableTest;                          // 0x00A4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableMaxNavMeshDistanceCheck;                           // 0x00A5(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00A6(0x0002) MISSED OFFSET
	float                                              fMaxNavMeshDistance;                                      // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bNoPartialPath;                                           // 0x00AC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00AD(0x0003) MISSED OFFSET
	float                                              HeightTestOffset;                                         // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDebug;                                                   // 0x00B4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00B5(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_GeneralFindEscapePosition");
		return pStaticClass;
	}

};


// Class AI.BTTask_GeneralSendEventOfEventWayPoint
// 0x0040 (0x0090 - 0x0050)
class UBTTask_GeneralSendEventOfEventWayPoint : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      CurrentEventWayPointActor;                                // 0x0050(0x0020) (Edit)
	struct FBlackboardKeySelector                      EventName;                                                // 0x0070(0x0020) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_GeneralSendEventOfEventWayPoint");
		return pStaticClass;
	}

};


// Class AI.BTTask_GeneralStrategyMove
// 0x0030 (0x00A0 - 0x0070)
class UBTTask_GeneralStrategyMove : public UBTTask_BlackboardBase
{
public:
	struct FVector2D                                   DirectionAngleRange;                                      // 0x0070(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   MoveTargetDistRange;                                      // 0x0078(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   ExecutionDuration;                                        // 0x0080(0x0008) (Edit, IsPlainOldData)
	float                                              RePlanTime;                                               // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AlwaysSuccess;                                            // 0x008C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x008D(0x0003) MISSED OFFSET
	float                                              AcceptRadius;                                             // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               StopOnOverlap;                                            // 0x0094(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UsePathfinding;                                           // 0x0095(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AllowPartialPath;                                         // 0x0096(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ProjectDestinationToNavigation;                           // 0x0097(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ExceptionRandomRadius;                                    // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCanMoveWhenNoTarget;                                     // 0x009C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckWallPass;                                           // 0x009D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DebugDrawPath;                                            // 0x009E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x009F(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_GeneralStrategyMove");
		return pStaticClass;
	}

};


// Class AI.BTTask_GeneralTriggerSkillEvent
// 0x0010 (0x0060 - 0x0050)
class UBTTask_GeneralTriggerSkillEvent : public UBTTaskNode
{
public:
	int                                                SkillID;                                                  // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventName;                                                // 0x0054(0x000C) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_GeneralTriggerSkillEvent");
		return pStaticClass;
	}

};


// Class AI.BTTask_GetRandomAttackablePosition
// 0x0010 (0x0080 - 0x0070)
class UBTTask_GetRandomAttackablePosition : public UBTTask_BlackboardBase
{
public:
	float                                              AttackableRadius;                                         // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              KeepDistanceFromTarget;                                   // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomMoveRadius;                                         // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                RetryTimes;                                               // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_GetRandomAttackablePosition");
		return pStaticClass;
	}

};


// Class AI.BTTask_LaunchMove
// 0x00A0 (0x00F0 - 0x0050)
class UBTTask_LaunchMove : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      JumpVelocityBlackboardKey;                                // 0x0050(0x0020) (Edit, BlueprintVisible)
	bool                                               bUseCustomDestLocation;                                   // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	struct FBlackboardKeySelector                      KeyLaunchToTarget;                                        // 0x0078(0x0020) (Edit, BlueprintVisible)
	float                                              CustomDestDirAngle;                                       // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CustomDestDistance;                                       // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UsePawnHalfHeightAsOffsetOfTargetLocation;                // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	struct FVector                                     OffsetOfTargetLocation;                                   // 0x00A4(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bDrawDebugLine;                                           // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	struct FVector2D                                   JumpSpeedRange;                                           // 0x00B4(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              JumpSpeedInterval;                                        // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESuggestProjVelocityTraceOption>       JumpProjTraceType;                                        // 0x00C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00C1(0x0003) MISSED OFFSET
	float                                              OverrideGravityZ;                                         // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CollisionRadius;                                          // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFavorHighArc;                                            // 0x00CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawDebug;                                               // 0x00CD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x00CE(0x0002) MISSED OFFSET
	float                                              CacheLastTossSpeed;                                       // 0x00D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                CacheLastIterations;                                      // 0x00D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector                                     CacheLastTossVelocity;                                    // 0x00D8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	float                                              CacheLastTossVelocityHorizontal;                          // 0x00E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              CacheLastTossVelocityHertical;                            // 0x00E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_LaunchMove");
		return pStaticClass;
	}

};


// Class AI.BTTask_MagicMoveAndJump
// 0x0008 (0x0098 - 0x0090)
class UBTTask_MagicMoveAndJump : public UBTTask_MagicMove
{
public:
	float                                              MinJumpInterval;                                          // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxJumpInterval;                                          // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_MagicMoveAndJump");
		return pStaticClass;
	}

};


// Class AI.BTTask_Mob_CastSkill
// 0x0008 (0x0058 - 0x0050)
class UBTTask_Mob_CastSkill : public UBTTaskNode
{
public:
	int                                                skillindex;                                               // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_Mob_CastSkill");
		return pStaticClass;
	}

};


// Class AI.BTTask_Mob_EnterState
// 0x0008 (0x0078 - 0x0070)
class UBTTask_Mob_EnterState : public UBTTask_BlackboardBase
{
public:
	EBPAIState                                         IState;                                                   // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_Mob_EnterState");
		return pStaticClass;
	}

};


// Class AI.BTTask_Mob_Explode
// 0x0010 (0x0080 - 0x0070)
class UBTTask_Mob_Explode : public UBTTask_BlackboardBase
{
public:
	int                                                ExplodeSkillIndex;                                        // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SkillID;                                                  // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUTSkillEventType>                     ExplodeSkillType;                                         // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_Mob_Explode");
		return pStaticClass;
	}

};


// Class AI.BTTask_Mob_FaceEnemy
// 0x0008 (0x0078 - 0x0070)
class UBTTask_Mob_FaceEnemy : public UBTTask_BlackboardBase
{
public:
	float                                              AcceptableAngle;                                          // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TurnSpeed;                                                // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_Mob_FaceEnemy");
		return pStaticClass;
	}

};


// Class AI.BTTask_Mob_FindNextPathPosition
// 0x0000 (0x0050 - 0x0050)
class UBTTask_Mob_FindNextPathPosition : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_Mob_FindNextPathPosition");
		return pStaticClass;
	}

};


// Class AI.BTTask_Mob_FindNextPatrolPosition
// 0x0008 (0x0058 - 0x0050)
class UBTTask_Mob_FindNextPatrolPosition : public UBTTaskNode
{
public:
	bool                                               bEnableRaycastTest;                                       // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	float                                              MinSquaredDistanceFromSpawnPoint;                         // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_Mob_FindNextPatrolPosition");
		return pStaticClass;
	}

};


// Class AI.BTTask_Mob_FindPosByTarget
// 0x0038 (0x00A8 - 0x0070)
class UBTTask_Mob_FindPosByTarget : public UBTTask_BlackboardBase
{
public:
	float                                              SearchRadius;                                             // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseNav;                                                  // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               NotInBossContainer;                                       // 0x0075(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0076(0x0002) MISSED OFFSET
	TArray<struct FMobRandLocationRetryRule>           retryRules;                                               // 0x0078(0x000C) (Edit, ZeroConstructor)
	bool                                               StopWhenFindPos;                                          // 0x0084(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               KeepCloseToEnemy;                                         // 0x0085(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0086(0x0002) MISSED OFFSET
	float                                              MinMoveDistance;                                          // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HeightTestOffset;                                         // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SimulateMoveWithLineCheck;                                // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	float                                              SimulateMoveDistance;                                     // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SimulateCapsuleRadius;                                    // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SimulateCapsuleHalfHeight;                                // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsDirForwardToTarget;                                     // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_Mob_FindPosByTarget");
		return pStaticClass;
	}

};


// Class AI.BTTask_Mob_FindRandomAttackablePosition
// 0x0040 (0x00B0 - 0x0070)
class UBTTask_Mob_FindRandomAttackablePosition : public UBTTask_BlackboardBase
{
public:
	float                                              AttackableRadius;                                         // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              KeepDistanceFromTarget;                                   // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinMoveDistance;                                          // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               WithLineTrace;                                            // 0x007C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EMobFindAttackablePositionLineTraceType            lineTraceType;                                            // 0x007D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x007E(0x0002) MISSED OFFSET
	float                                              CustomLineTraceHeightOffset;                              // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               WithLineTraceTop;                                         // 0x0084(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0085(0x0003) MISSED OFFSET
	float                                              HeightTestOffset;                                         // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FMobRandLocationRetryRule>           retryRules;                                               // 0x008C(0x000C) (Edit, ZeroConstructor)
	bool                                               ReachableTest;                                            // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0099(0x0003) MISSED OFFSET
	float                                              ReachableTestRadius;                                      // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               EnableTriggerCastSkillBlockAfterFailed;                   // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	int                                                TriggerCastSkillBlockAfterFailedTimes;                    // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               NotInBossContainer;                                       // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_Mob_FindRandomAttackablePosition");
		return pStaticClass;
	}

};


// Class AI.BTTask_Mob_GetNearDeathCharNearby
// 0x0028 (0x0098 - 0x0070)
class UBTTask_Mob_GetNearDeathCharNearby : public UBTTask_BlackboardBase
{
public:
	struct FBlackboardKeySelector                      TargetChar;                                               // 0x0070(0x0020) (Edit)
	float                                              SearchRadius;                                             // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CheckInterval;                                            // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_Mob_GetNearDeathCharNearby");
		return pStaticClass;
	}

};


// Class AI.BTTask_Mob_GetRandomAttackTargetInRadius
// 0x0020 (0x0090 - 0x0070)
class UBTTask_Mob_GetRandomAttackTargetInRadius : public UBTTask_BlackboardBase
{
public:
	int                                                TriggerMinTimes;                                          // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TriggerMaxTimes;                                          // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ChooseCurEnemyProbability;                                // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ESearchType                                        searchType;                                               // 0x007C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
	float                                              SearchRadius;                                             // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpecificLocation;                                         // 0x0084(0x000C) (Edit, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_Mob_GetRandomAttackTargetInRadius");
		return pStaticClass;
	}

};


// Class AI.BTTask_Mob_GetRandomSkill
// 0x0008 (0x0078 - 0x0070)
class UBTTask_Mob_GetRandomSkill : public UBTTask_BlackboardBase
{
public:
	bool                                               DontChangeSkillWhenTargetNearBossContainer;               // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_Mob_GetRandomSkill");
		return pStaticClass;
	}

};


// Class AI.BTTask_Mob_GetTargetVehicle
// 0x0020 (0x0090 - 0x0070)
class UBTTask_Mob_GetTargetVehicle : public UBTTask_BlackboardBase
{
public:
	struct FBlackboardKeySelector                      TargetVehicle;                                            // 0x0070(0x0020) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_Mob_GetTargetVehicle");
		return pStaticClass;
	}

};


// Class AI.BTTask_Mob_GetVehicleNearby
// 0x0028 (0x0098 - 0x0070)
class UBTTask_Mob_GetVehicleNearby : public UBTTask_BlackboardBase
{
public:
	struct FBlackboardKeySelector                      TargetVehicle;                                            // 0x0070(0x0020) (Edit)
	float                                              SearchRadius;                                             // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CheckInterval;                                            // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_Mob_GetVehicleNearby");
		return pStaticClass;
	}

};


// Class AI.BTTask_Mob_LeaveState
// 0x0008 (0x0078 - 0x0070)
class UBTTask_Mob_LeaveState : public UBTTask_BlackboardBase
{
public:
	EBPAIState                                         IState;                                                   // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_Mob_LeaveState");
		return pStaticClass;
	}

};


// Class AI.BTTask_Mob_LinkGetJumpVelocity
// 0x0010 (0x0080 - 0x0070)
class UBTTask_Mob_LinkGetJumpVelocity : public UBTTask_BlackboardBase
{
public:
	float                                              JumpForwardOffset;                                        // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   JumpSpeedRange;                                           // 0x0074(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	TEnumAsByte<ESuggestProjVelocityTraceOption>       Stride_JumpProjTraceType;                                 // 0x007C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SetJumpFaceAngle;                                         // 0x007D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x007E(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_Mob_LinkGetJumpVelocity");
		return pStaticClass;
	}

};


// Class AI.BTTask_Mob_MoveTo
// 0x0020 (0x00A0 - 0x0080)
class UBTTask_Mob_MoveTo : public UBTTask_MoveTo
{
public:
	float                                              BlockTimeLimit;                                           // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlockVelocitySizeThreshold;                               // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               BlockDistCheck;                                           // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	float                                              BlockThresholdValidMoveDist;                              // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlockThresholdValidMoveTime;                              // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlockThresholdValidVelocitySize;                          // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ForceSuccess;                                             // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               GotoExceptionWhenFailed;                                  // 0x0099(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SupportWalkType;                                          // 0x009A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EMobWalkType                                       iWalkType;                                                // 0x009B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bMobUsePathFinding : 1;                                   // 0x009C(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x009D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_Mob_MoveTo");
		return pStaticClass;
	}

};


// Class AI.BTTask_Mob_NewFindPatrolPosition
// 0x0038 (0x0088 - 0x0050)
class UBTTask_Mob_NewFindPatrolPosition : public UBTTaskNode
{
public:
	float                                              MinMoveDistance;                                          // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              fHalfAngle;                                               // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxExecuteTimes;                                          // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ExceptionRandomRadius;                                    // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableRaycastTest;                                       // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	struct FBlackboardKeySelector                      KeyTargetLocation;                                        // 0x0068(0x0020) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_Mob_NewFindPatrolPosition");
		return pStaticClass;
	}

};


// Class AI.BTTask_Mob_SnakeMove
// 0x0020 (0x0090 - 0x0070)
class UBTTask_Mob_SnakeMove : public UBTTask_BlackboardBase
{
public:
	float                                              NormalDis;                                                // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   DisOffset;                                                // 0x0074(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   AngleOffset;                                              // 0x007C(0x0008) (Edit, IsPlainOldData)
	float                                              TaskMaxTime;                                              // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AcceptRadius;                                             // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               StopOnOverlap;                                            // 0x008C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UsePathfinding;                                           // 0x008D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AllowPartialPath;                                         // 0x008E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ProjectDestinationToNavigation;                           // 0x008F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_Mob_SnakeMove");
		return pStaticClass;
	}

};


// Class AI.BTTask_Mob_Suicide
// 0x0000 (0x0070 - 0x0070)
class UBTTask_Mob_Suicide : public UBTTask_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_Mob_Suicide");
		return pStaticClass;
	}

};


// Class AI.BTTask_Mob_SwimDirect
// 0x0010 (0x0080 - 0x0070)
class UBTTask_Mob_SwimDirect : public UBTTask_BlackboardBase
{
public:
	float                                              SwimVelocitySize;                                         // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AcceptableRadius;                                         // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReachTestIncludesAgentRadius;                            // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReachTestIncludesGoalRadius;                             // 0x0079(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x007A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_Mob_SwimDirect");
		return pStaticClass;
	}

};


// Class AI.BTTask_MobCMD_CastSkill
// 0x0020 (0x0070 - 0x0050)
class UBTTask_MobCMD_CastSkill : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      SkillIndexBlackBoardKey;                                  // 0x0050(0x0020) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_MobCMD_CastSkill");
		return pStaticClass;
	}

};


// Class AI.BTTask_ModifyBlackboardData
// 0x0010 (0x0080 - 0x0070)
class UBTTask_ModifyBlackboardData : public UBTTask_BlackboardBase
{
public:
	EModifyBlackboardDataValueType                     ValueType;                                                // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	struct FString                                     SetValue;                                                 // 0x0074(0x000C) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_ModifyBlackboardData");
		return pStaticClass;
	}

};


// Class AI.BTTask_MoveAround
// 0x0058 (0x00C8 - 0x0070)
class UBTTask_MoveAround : public UBTTask_BlackboardBase
{
public:
	float                                              MoveRadius;                                               // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RotationSpeed;                                            // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EAIMovePose                                        MoveType;                                                 // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	struct FVector2D                                   WaitTimeRange;                                            // 0x007C(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   ExecutionDuration;                                        // 0x0084(0x0008) (Edit, IsPlainOldData)
	float                                              AcceptRadius;                                             // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeNeighborVerts;                                    // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSetFocus;                                                // 0x0091(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCanMoveWhenNoTarget;                                     // 0x0092(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0093(0x0001) MISSED OFFSET
	struct FVector2D                                   DirectionAngleRange;                                      // 0x0094(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   MoveTargetDistRange;                                      // 0x009C(0x0008) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      EnemyBlackboardKey;                                       // 0x00A8(0x0020) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_MoveAround");
		return pStaticClass;
	}

};


// Class AI.BTTask_MoveToBuildingOcclusion
// 0x0030 (0x00E8 - 0x00B8)
class UBTTask_MoveToBuildingOcclusion : public UBTTask_CrowdMove
{
public:
	bool                                               bChoosePointByEnemy;                                      // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bForceStand;                                              // 0x00B9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00BA(0x0002) MISSED OFFSET
	float                                              CirclePainThreshold;                                      // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxStraightLineDistanceRate;                              // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      EnemyBlackboardKey;                                       // 0x00C8(0x0020) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_MoveToBuildingOcclusion");
		return pStaticClass;
	}

};


// Class AI.BTTask_MoveToOcclusion
// 0x0098 (0x0128 - 0x0090)
class UBTTask_MoveToOcclusion : public UBTTask_MagicMove
{
public:
	float                                              SearchRadius;                                             // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              UseLastPointRadius;                                       // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bChoosePointByEnemy;                                      // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bForceStand;                                              // 0x0099(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x009A(0x0002) MISSED OFFSET
	float                                              CirclePainThreshold;                                      // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DoNotUseCurrentOcclusionFirst;                            // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	float                                              CurrentOcclusionRadius;                                   // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<EAIMoveToOcclusionPoseType>                 AcceptableOcclusionTypeArray;                             // 0x00A8(0x000C) (Edit, ZeroConstructor)
	bool                                               bUsePointNearSelfCompareToEnemy;                          // 0x00B4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseNavMeshDistance;                                      // 0x00B5(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x00B6(0x0002) MISSED OFFSET
	float                                              MaxNavMeshSearchDistance;                                 // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EAIMoveToOcclusionSearchBestOcclusionMethod        searchBestOcclusionMethod;                                // 0x00BC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
	float                                              OcclusionPointChooseZFactor;                              // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OcclusionPointChooseBushFactor;                           // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ChooseAttackableOcclusionFirst;                           // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00C9(0x0003) MISSED OFFSET
	float                                              ChooseAttackableOcclusionFactor;                          // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OcclusionPadAngle_Normal;                                 // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OcclusionPadAngle_Aggressive;                             // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ChooseAttackableOcclusionWithLineTrace;                   // 0x00D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x00D9(0x0003) MISSED OFFSET
	float                                              SelfStandHalfHeight;                                      // 0x00DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ChooseTagOcclusionEnable;                                 // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x00E1(0x0003) MISSED OFFSET
	struct FString                                     OcclusionTagForChosen;                                    // 0x00E4(0x000C) (Edit, ZeroConstructor)
	bool                                               bIgnorePossibleAttackableOcclusion;                       // 0x00F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bChooseGeneratedOcclusionPoints : 1;                      // 0x00F1(0x0001) (Edit)
	bool                                               bDebug;                                                   // 0x00F2(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x5];                                       // 0x00F3(0x0005) MISSED OFFSET
	struct FBlackboardKeySelector                      EnemyBlackboardKey;                                       // 0x00F8(0x0020) (Edit)
	EAIMoveToOcclusionMovingPoseType                   MovingPoseType;                                           // 0x0118(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0119(0x0003) MISSED OFFSET
	float                                              MoveToOcclusionKeepCurPoseDistance;                       // 0x011C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EAIMoveToOcclusionFinishMovePoseType               finishMovePoseType;                                       // 0x0120(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0121(0x0003) MISSED OFFSET
	float                                              OccupiedRadius;                                           // 0x0124(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_MoveToOcclusion");
		return pStaticClass;
	}

};


// Class AI.BTTask_MoveToSafeArea
// 0x0010 (0x00A0 - 0x0090)
class UBTTask_MoveToSafeArea : public UBTTask_MagicMove
{
public:
	float                                              RadiusScale;                                              // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlueCircleOffsetRadius;                                   // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RandomLength;                                             // 0x0098(0x0008) (Edit, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_MoveToSafeArea");
		return pStaticClass;
	}

};


// Class AI.BTTask_PickUpItemAtTombBox
// 0x0008 (0x0058 - 0x0050)
class UBTTask_PickUpItemAtTombBox : public UBTTaskNode
{
public:
	int                                                MaxPickCount;                                             // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_PickUpItemAtTombBox");
		return pStaticClass;
	}

};


// Class AI.BTTask_RotateToTarget
// 0x0030 (0x0080 - 0x0050)
class UBTTask_RotateToTarget : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      InRotationTarget;                                         // 0x0050(0x0020) (Edit)
	class UCurveFloat*                                 TimeCurve;                                                // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DefaultWaitTime;                                          // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FinishWaitTime;                                           // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowLog;                                                 // 0x007C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x007D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_RotateToTarget");
		return pStaticClass;
	}

};


// Class AI.BTTask_SeekFlyPoint
// 0x0080 (0x00D0 - 0x0050)
class UBTTask_SeekFlyPoint : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      BBKeyTargetEnemy;                                         // 0x0050(0x0020) (Edit)
	struct FBlackboardKeySelector                      BBKeyFoundFlyPoint;                                       // 0x0070(0x0020) (Edit)
	ESeekFlyPointCenterLocType                         ChooseFlyPointCenterLocType;                              // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	struct FVector2D                                   ChooseFlyPointHorizontalRadiusRange;                      // 0x0094(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   ChooseFlyPointHeightRange;                                // 0x009C(0x0008) (Edit, IsPlainOldData)
	ESeekFlyPointHorizontalAngleType                   HorizontalAngleType;                                      // 0x00A4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00A5(0x0003) MISSED OFFSET
	struct FVector2D                                   ChooseFlyPointAngleRange;                                 // 0x00A8(0x0008) (Edit, IsPlainOldData)
	float                                              AcceptableMinMoveDistance;                                // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AcceptableMinVerticalAngle;                               // 0x00B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AcceptableMaxHorizontalAngleFromLastMove;                 // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxSearchTimes;                                           // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PerConditionExtraSearchTimes;                             // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OverrideAgentRadius;                                      // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bFirstInChooseAsBornLocation;                             // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               FlyToLastPointWhenFailed;                                 // 0x00C9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x00CA(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_SeekFlyPoint");
		return pStaticClass;
	}

};


// Class AI.BTTask_SetDownwardPos
// 0x0060 (0x00B0 - 0x0050)
class UBTTask_SetDownwardPos : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      ActorBlackboardKey;                                       // 0x0050(0x0020) (Edit)
	struct FBlackboardKeySelector                      PosBlackboardKey;                                         // 0x0070(0x0020) (Edit)
	float                                              DownwardTraceDistance;                                    // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OffsetZ;                                                  // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              TracableObjectTemplate;                                   // 0x0098(0x000C) (Edit, ZeroConstructor)
	bool                                               bForceSuccess;                                            // 0x00A4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00A5(0x0003) MISSED OFFSET
	float                                              SearchRadius;                                             // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreStartPenetratingLoc;                               // 0x00AC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00AD(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_SetDownwardPos");
		return pStaticClass;
	}

};


// Class AI.BTTask_SpawnItem
// 0x0010 (0x0080 - 0x0070)
class UBTTask_SpawnItem : public UBTTask_BlackboardBase
{
public:
	float                                              CheckNoPlayerRadiusSquare;                                // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAIEquipSpawnGroupDataBase>          SpawnEquipDataBase;                                       // 0x0074(0x000C) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_SpawnItem");
		return pStaticClass;
	}

};


// Class AI.BTTask_StrategyMove
// 0x0050 (0x00C0 - 0x0070)
class UBTTask_StrategyMove : public UBTTask_BlackboardBase
{
public:
	bool                                               bIsSimpleCharacter;                                       // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EAIMovePose                                        MoveType;                                                 // 0x0071(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EAIMoveType                                        MovePathType;                                             // 0x0072(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0073(0x0001) MISSED OFFSET
	int                                                SampleNumber;                                             // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ControllPoint1;                                           // 0x0078(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   ControllPoint2;                                           // 0x0080(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   DirectionAngleRange;                                      // 0x0088(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   MoveTargetDistRange;                                      // 0x0090(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   ExecutionDuration;                                        // 0x0098(0x0008) (Edit, IsPlainOldData)
	bool                                               bStopMoveWhenExecutionDurationRanOut;                     // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	float                                              RePlanTime;                                               // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AlwaysSuccess;                                            // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00A9(0x0003) MISSED OFFSET
	float                                              AcceptRadius;                                             // 0x00AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               StopOnOverlap;                                            // 0x00B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UsePathfinding;                                           // 0x00B1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AllowPartialPath;                                         // 0x00B2(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ProjectDestinationToNavigation;                           // 0x00B3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ExceptionRandomRadius;                                    // 0x00B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCanMoveWhenNoTarget;                                     // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckWallPass;                                           // 0x00B9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DebugDrawPath;                                            // 0x00BA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x00BB(0x0001) MISSED OFFSET
	class UNavCostModifier*                            NavCostModifier;                                          // 0x00BC(0x0004) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_StrategyMove");
		return pStaticClass;
	}

};


// Class AI.BTTask_SummonActor
// 0x0038 (0x0088 - 0x0050)
class UBTTask_SummonActor : public UBTTaskNode
{
public:
	int                                                SummonNum;                                                // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxSummonNum;                                             // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSummonPoint;                                          // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	TArray<TEnumAsByte<EObjectTypeQuery>>              QueryObjectType;                                          // 0x005C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              SphereRadius;                                             // 0x0068(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      SummonLocationClass;                                      // 0x006C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OffsetMax;                                                // 0x0070(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     OffsetMin;                                                // 0x007C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_SummonActor");
		return pStaticClass;
	}


	TArray<struct FVector> GetSummonLocations(class AActor* Invoker);
};


// Class AI.BTTask_TeleportToSpecLoc
// 0x0020 (0x0090 - 0x0070)
class UBTTask_TeleportToSpecLoc : public UBTTask_BlackboardBase
{
public:
	float                                              RangeMin;                                                 // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RangeMax;                                                 // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OnlyTeleportToLand;                                       // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	float                                              OriginCheckSquare;                                        // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DestCheckSquare;                                          // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TraceHeight;                                              // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                HouseCheckTimes;                                          // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckSight;                                              // 0x008C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bForceSuccess;                                            // 0x008D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x008E(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_TeleportToSpecLoc");
		return pStaticClass;
	}

};


// Class AI.BTTask_TryFightback
// 0x0018 (0x00A8 - 0x0090)
class UBTTask_TryFightback : public UBTTask_MagicMove
{
public:
	float                                              MaxTraceRadius;                                           // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxTraceTime;                                             // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CheckTargetVisableTimeIntervel;                           // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsCheckHasWeapon;                                        // 0x009C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x009D(0x0003) MISSED OFFSET
	float                                              MinEnemyInSightTime;                                      // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_TryFightback");
		return pStaticClass;
	}

};


// Class AI.BTTask_VH_Locate
// 0x0088 (0x00D8 - 0x0050)
class UBTTask_VH_Locate : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      BBKey_OutPoint;                                           // 0x0050(0x0020) (Edit, BlueprintVisible)
	int                                                MaxTryTimes;                                              // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      BBKey_BasePoint;                                          // 0x0078(0x0020) (Edit, BlueprintVisible)
	struct FVector2D                                   RandomRange;                                              // 0x0098(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              RandomAngle;                                              // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   AttackRange;                                              // 0x00A4(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	TArray<struct FLocationRetryRule>                  retryRules;                                               // 0x00AC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              HeightTestOffset;                                         // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bFilterBuilding : 1;                                      // 0x00BC(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bFilterWater : 1;                                         // 0x00BC(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bFilterOutBehaviorRegion : 1;                             // 0x00BC(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bReachableTest : 1;                                       // 0x00BC(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUseNavmesh : 1;                                          // 0x00BC(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
	struct FName                                       SpecificNaVName;                                          // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     CollisionChannel;                                         // 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00C9(0x0003) MISSED OFFSET
	float                                              MaxLocationTraceHeightZ;                                  // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDebug : 1;                                               // 0x00D0(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00D1(0x0003) MISSED OFFSET
	class UAIBehaviorAdapter_Tank*                     OwnerAdapter;                                             // 0x00D4(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_VH_Locate");
		return pStaticClass;
	}

};


// Class AI.BTTask_VH_NavigateTo
// 0x0048 (0x00C8 - 0x0080)
class UBTTask_VH_NavigateTo : public UBTTask_MoveTo
{
public:
	struct FVector2D                                   ExecutionDuration;                                        // 0x0080(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      bModifyUsePathFinding : 1;                                // 0x0088(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bStopEngineWhenTaskFinished : 1;                          // 0x0088(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	float                                              AcceptableAngle;                                          // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   DirectionAngleRange;                                      // 0x0090(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   MoveTargetDistRange;                                      // 0x0098(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ThrottleInputScale;                                       // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bNoSteering : 1;                                          // 0x00A4(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00A5(0x0003) MISSED OFFSET
	struct FVector2D                                   Deviation;                                                // 0x00A8(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              DistanceExtendRate;                                       // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Throttle;                                                 // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TowardAngle;                                              // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bTrackingTargetWhenRotateToward : 1;                      // 0x00BC(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
	class UAIBehaviorAdapter_Tank*                     OwnerAdapter;                                             // 0x00C0(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_VH_NavigateTo");
		return pStaticClass;
	}

};


// Class AI.BTTask_WayPointDirectMove
// 0x0010 (0x0080 - 0x0070)
class UBTTask_WayPointDirectMove : public UBTTask_BlackboardBase
{
public:
	bool                                               bAllowPartialPath;                                        // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	float                                              AcceptableRadius;                                         // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowStrafe;                                             // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReachTestIncludesAgentRadius;                            // 0x0079(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReachTestIncludesGoalRadius;                             // 0x007A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bProjectGoalLocation;                                     // 0x007B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUsePathfinding;                                          // 0x007C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bMoveToActor;                                             // 0x007D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x007E(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_WayPointDirectMove");
		return pStaticClass;
	}

};


// Class AI.BTTask_WayPointListMove
// 0x0020 (0x0090 - 0x0070)
class UBTTask_WayPointListMove : public UBTTask_BlackboardBase
{
public:
	bool                                               bAllowPartialPath;                                        // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	float                                              AcceptableRadius;                                         // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowStrafe;                                             // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReachTestIncludesAgentRadius;                            // 0x0079(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReachTestIncludesGoalRadius;                             // 0x007A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bProjectGoalLocation;                                     // 0x007B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUsePathfinding;                                          // 0x007C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
	TArray<struct FVector>                             OverrideWayPointList;                                     // 0x0080(0x000C) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData02[0x4];                                       // 0x008C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_WayPointListMove");
		return pStaticClass;
	}

};


// Class AI.BTTaskNode_CastSkill
// 0x0008 (0x0058 - 0x0050)
class UBTTaskNode_CastSkill : public UBTTaskNode
{
public:
	int                                                SkillID;                                                  // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_CastSkill");
		return pStaticClass;
	}

};


// Class AI.BTTaskNode_CharacterCastNoneTargetSkill
// 0x0030 (0x00A0 - 0x0070)
class UBTTaskNode_CharacterCastNoneTargetSkill : public UBTTask_BlackboardBase
{
public:
	int                                                SkillID;                                                  // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      SkillIDBlackBoardKey;                                     // 0x0078(0x0020) (Edit)
	int                                                RescueRange;                                              // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class ASTExtraBaseCharacter*                       RescueCharacter;                                          // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_CharacterCastNoneTargetSkill");
		return pStaticClass;
	}

};


// Class AI.BTTaskNode_CharacterCastOnTargetSkill
// 0x0028 (0x0098 - 0x0070)
class UBTTaskNode_CharacterCastOnTargetSkill : public UBTTask_BlackboardBase
{
public:
	int                                                SkillID;                                                  // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      SkillIDBlackBoardKey;                                     // 0x0078(0x0020) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_CharacterCastOnTargetSkill");
		return pStaticClass;
	}

};


// Class AI.BTTaskNode_CharacterCastSkill
// 0x00E8 (0x0158 - 0x0070)
class UBTTaskNode_CharacterCastSkill : public UBTTask_BlackboardBase
{
public:
	EAITaskNodeThrowGrenadeMethod                      throwMethod;                                              // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseHighThrowFirst;                                       // 0x0071(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0072(0x0002) MISSED OFFSET
	struct FVector2D                                   AcceptableHighThrowPitchRangle;                           // 0x0074(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   AcceptableLowThrowPitchRangle;                            // 0x007C(0x0008) (Edit, IsPlainOldData)
	struct FVector                                     HighThrowStartOffset_Stand;                               // 0x0084(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     HighThrowStartOffset_Crouch;                              // 0x0090(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     HighThrowStartOffset_Prone;                               // 0x009C(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     LowThrowStartOffset_Stand;                                // 0x00A8(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     LowThrowStartOffset_Crouch;                               // 0x00B4(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     LowThrowStartOffset_Prone;                                // 0x00C0(0x000C) (Edit, IsPlainOldData)
	float                                              HighThrowSpeed;                                           // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LowThrowSpeed;                                            // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    HighThrowViewOffsetRotation;                              // 0x00D4(0x000C) (Edit, IsPlainOldData)
	struct FRotator                                    LowThrowViewOffsetRotation;                               // 0x00E0(0x000C) (Edit, IsPlainOldData)
	float                                              ProjectileCollisionRadius;                                // 0x00EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESuggestProjVelocityTraceOption>       ProjVelocityTraceType;                                    // 0x00F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00F1(0x0003) MISSED OFFSET
	float                                              fReplanThrowAngleDistance;                                // 0x00F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAITaskNodeThrowGrenadeTargetLocRandomableConfig> TargetLocRandomableConfig;                                // 0x00F8(0x000C) (Edit, ZeroConstructor)
	bool                                               bDebug;                                                   // 0x0104(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0105(0x0003) MISSED OFFSET
	int                                                SkillID;                                                  // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      SkillIDBlackBoardKey;                                     // 0x0110(0x0020) (Edit)
	bool                                               bNeedCheckItem;                                           // 0x0130(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0131(0x0003) MISSED OFFSET
	int                                                CheckExitItemID;                                          // 0x0134(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CheckExitItemType;                                        // 0x0138(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SkillMinReleaseInterval;                                  // 0x013C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SkillMaxReleaseInterval;                                  // 0x0140(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FaceToTargetSpeed;                                        // 0x0144(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HighThrowDistance;                                        // 0x0148(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 HighThrowDistanceToPitchCurve;                            // 0x014C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 LowThrowDistanceToPitchCurve;                             // 0x0150(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseNewTargetLocWhenNormalModeAiming;                      // 0x0154(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0155(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_CharacterCastSkill");
		return pStaticClass;
	}

};


// Class AI.BTTaskNode_CheckOcclusionSafe
// 0x0008 (0x0078 - 0x0070)
class UBTTaskNode_CheckOcclusionSafe : public UBTTask_BlackboardBase
{
public:
	float                                              CheckRadius;                                              // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_CheckOcclusionSafe");
		return pStaticClass;
	}

};


// Class AI.BTTaskNode_ClearCurrentEnemy
// 0x0000 (0x0050 - 0x0050)
class UBTTaskNode_ClearCurrentEnemy : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_ClearCurrentEnemy");
		return pStaticClass;
	}

};


// Class AI.BTTaskNode_ClearFocus
// 0x0000 (0x0050 - 0x0050)
class UBTTaskNode_ClearFocus : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_ClearFocus");
		return pStaticClass;
	}

};


// Class AI.BTTaskNode_EmptyShot
// 0x0000 (0x0050 - 0x0050)
class UBTTaskNode_EmptyShot : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_EmptyShot");
		return pStaticClass;
	}

};


// Class AI.BTTaskNode_EquipItemDirectly
// 0x0010 (0x0060 - 0x0050)
class UBTTaskNode_EquipItemDirectly : public UBTTaskNode
{
public:
	TArray<struct FAIEquipSpawnGroup>                  RandomSpawnEquipGroupSet;                                 // 0x0050(0x000C) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_EquipItemDirectly");
		return pStaticClass;
	}

};


// Class AI.BTTaskNode_EquipOrUnWeapon
// 0x0000 (0x0050 - 0x0050)
class UBTTaskNode_EquipOrUnWeapon : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_EquipOrUnWeapon");
		return pStaticClass;
	}

};


// Class AI.BTTaskNode_FindBuilding
// 0x0020 (0x0090 - 0x0070)
class UBTTaskNode_FindBuilding : public UBTTask_BlackboardBase
{
public:
	TArray<struct FFindBuildingRatingConfig>           RatingConfig;                                             // 0x0070(0x000C) (Edit, ZeroConstructor)
	bool                                               OnlySafeBuildings;                                        // 0x007C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
	float                                              MaxMoveSpeed;                                             // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              findSpotXYOffset;                                         // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              findSpotZOffset;                                          // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GoBackThreshold;                                          // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_FindBuilding");
		return pStaticClass;
	}

};


// Class AI.BTTaskNode_FindItemSpot
// 0x0000 (0x0070 - 0x0070)
class UBTTaskNode_FindItemSpot : public UBTTask_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_FindItemSpot");
		return pStaticClass;
	}

};


// Class AI.BTTaskNode_FindPosByTarget
// 0x0008 (0x0078 - 0x0070)
class UBTTaskNode_FindPosByTarget : public UBTTask_BlackboardBase
{
public:
	float                                              SearchRadius;                                             // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseNav;                                                  // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0075(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_FindPosByTarget");
		return pStaticClass;
	}

};


// Class AI.BTTaskNode_ForceSuccess
// 0x0000 (0x0050 - 0x0050)
class UBTTaskNode_ForceSuccess : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_ForceSuccess");
		return pStaticClass;
	}

};


// Class AI.BTTaskNode_HumanAction
// 0x0000 (0x0050 - 0x0050)
class UBTTaskNode_HumanAction : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_HumanAction");
		return pStaticClass;
	}

};


// Class AI.BTTaskNode_MeleeAttack
// 0x0000 (0x0050 - 0x0050)
class UBTTaskNode_MeleeAttack : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_MeleeAttack");
		return pStaticClass;
	}

};


// Class AI.BTTaskNode_MonsterCastSkill
// 0x0010 (0x0080 - 0x0070)
class UBTTaskNode_MonsterCastSkill : public UBTTask_BlackboardBase
{
public:
	int                                                skillindex;                                               // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SkillID;                                                  // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUTSkillEventType>                     SkillType;                                                // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCanCastWithoutTarget;                                    // 0x0079(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreSkillCastDistanceCheck;                            // 0x007A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x007B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_MonsterCastSkill");
		return pStaticClass;
	}

};


// Class AI.BTTaskNode_MonsterJumpToPos
// 0x0000 (0x0070 - 0x0070)
class UBTTaskNode_MonsterJumpToPos : public UBTTask_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_MonsterJumpToPos");
		return pStaticClass;
	}

};


// Class AI.BTTaskNode_NewParachuteJumpBase
// 0x0038 (0x0088 - 0x0050)
class UBTTaskNode_NewParachuteJumpBase : public UBTTaskNode
{
public:
	float                                              RandomEndJumpTime;                                        // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              JumpRadius;                                               // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              JumpHeight;                                               // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MoveForwardRate;                                          // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OpenParachuteHeight;                                      // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CheckOpenParachuteFreq;                                   // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ForceForwardHeight;                                       // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CloseParachuteHeight;                                     // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CheckCloseParachuteFreq;                                  // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LockFocusTime;                                            // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DelayClearParachuteTime;                                  // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxFallingTime;                                           // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bNotiyParachuteComp;                                      // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0081(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_NewParachuteJumpBase");
		return pStaticClass;
	}


	void DelayClearParachute(class ASTExtraPlayerCharacter* ControlledPawn);
};


// Class AI.BTTaskNode_NewParachuteJump
// 0x0000 (0x0088 - 0x0088)
class UBTTaskNode_NewParachuteJump : public UBTTaskNode_NewParachuteJumpBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_NewParachuteJump");
		return pStaticClass;
	}

};


// Class AI.BTTaskNode_NewParachuteJumpBigEvent
// 0x0008 (0x0090 - 0x0088)
class UBTTaskNode_NewParachuteJumpBigEvent : public UBTTaskNode_NewParachuteJump
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_NewParachuteJumpBigEvent");
		return pStaticClass;
	}

};


// Class AI.BTTaskNode_NewParachuteJumpDoubleCircle
// 0x0010 (0x0098 - 0x0088)
class UBTTaskNode_NewParachuteJumpDoubleCircle : public UBTTaskNode_NewParachuteJumpBase
{
public:
	float                                              InnerRadiusDeltaValue;                                    // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              JumpRangeDistance;                                        // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxTargetPositonDistance;                                 // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxAttempt;                                               // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_NewParachuteJumpDoubleCircle");
		return pStaticClass;
	}

};


// Class AI.BTTaskNode_ParachuteJump
// 0x0010 (0x0060 - 0x0050)
class UBTTaskNode_ParachuteJump : public UBTTaskNode
{
public:
	float                                              RandomRadius;                                             // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              JumpStartTime;                                            // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              JumpEndTime;                                              // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_ParachuteJump");
		return pStaticClass;
	}

};


// Class AI.BTTaskNode_ParachuteJumpV3
// 0x0028 (0x0078 - 0x0050)
class UBTTaskNode_ParachuteJumpV3 : public UBTTaskNode
{
public:
	float                                              RandomEndJumpTime;                                        // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              JumpRadius;                                               // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              JumpHeight;                                               // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomAccelerateStart;                                    // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomAccelerateEnd;                                      // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OpenParachuteHeight;                                      // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CheckOpenParachuteFreq;                                   // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CloseParachuteHeight;                                     // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CheckCloseParachuteFreq;                                  // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_ParachuteJumpV3");
		return pStaticClass;
	}

};


// Class AI.BTTaskNode_PickItemsAtSpot
// 0x0008 (0x0058 - 0x0050)
class UBTTaskNode_PickItemsAtSpot : public UBTTaskNode
{
public:
	int                                                MaxPickCount;                                             // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_PickItemsAtSpot");
		return pStaticClass;
	}

};


// Class AI.BTTaskNode_PlayEmote
// 0x0078 (0x00C8 - 0x0050)
class UBTTaskNode_PlayEmote : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0050(0x0038) MISSED OFFSET
	TMap<int, float>                                   EmotePlayTimeMap;                                         // 0x0088(0x0050) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_PlayEmote");
		return pStaticClass;
	}

};


// Class AI.BTTaskNode_PlaySound
// 0x0000 (0x0050 - 0x0050)
class UBTTaskNode_PlaySound : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_PlaySound");
		return pStaticClass;
	}

};


// Class AI.BTTaskNode_PostLuaEvent
// 0x0018 (0x0068 - 0x0050)
class UBTTaskNode_PostLuaEvent : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
	struct FString                                     EventID;                                                  // 0x0058(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_PostLuaEvent");
		return pStaticClass;
	}

};


// Class AI.BTTaskNode_RefreshWeaponBBD
// 0x0000 (0x0050 - 0x0050)
class UBTTaskNode_RefreshWeaponBBD : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_RefreshWeaponBBD");
		return pStaticClass;
	}

};


// Class AI.BTTaskNode_Rescue
// 0x0000 (0x0070 - 0x0070)
class UBTTaskNode_Rescue : public UBTTask_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_Rescue");
		return pStaticClass;
	}

};


// Class AI.BTTaskNode_StopMeleeAttack
// 0x0008 (0x0078 - 0x0070)
class UBTTaskNode_StopMeleeAttack : public UBTTask_BlackboardBase
{
public:
	float                                              StopTimeout;                                              // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_StopMeleeAttack");
		return pStaticClass;
	}

};


// Class AI.BTTaskNode_StopShooting
// 0x0000 (0x0050 - 0x0050)
class UBTTaskNode_StopShooting : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_StopShooting");
		return pStaticClass;
	}

};


// Class AI.BTTaskNode_TakeMedicine
// 0x0010 (0x0060 - 0x0050)
class UBTTaskNode_TakeMedicine : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0050(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_TakeMedicine");
		return pStaticClass;
	}

};


// Class AI.CustomDamageEventComponent
// 0x00F8 (0x0248 - 0x0150)
class UCustomDamageEventComponent : public ULuaActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnSpawnActor;                                             // 0x0150(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x4];                                       // 0x015C(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x015C(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AI.CustomDamageEventComponent.EventDataTable
	float                                              ActorSpawnGlobalCooldown;                                 // 0x0188(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnThrowBox;                                               // 0x018C(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0198(0x0004) MISSED OFFSET
	float                                              OwnerHealthPercentage;                                    // 0x019C(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x01A0(0x000C) MISSED OFFSET
	TArray<struct FTriggeredCustomDamageEvent>         ClientEvents;                                             // 0x01AC(0x000C) (Net, ZeroConstructor)
	unsigned char                                      UnknownData04[0x50];                                      // 0x01B8(0x0050) MISSED OFFSET
	TMap<struct FName, class UObject*>                 CacheUObjectMap;                                          // 0x0208(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0244(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.CustomDamageEventComponent");
		return pStaticClass;
	}


	void OnRep_ClientEvents();
};


// Class AI.CharacterCustomDamageEventComponent
// 0x0000 (0x0248 - 0x0248)
class UCharacterCustomDamageEventComponent : public UCustomDamageEventComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.CharacterCustomDamageEventComponent");
		return pStaticClass;
	}


	void OnTakeDamageEvent(float Damage, const struct FDamageEvent& DamageEvent, class AActor* Victim, class AActor* Causer);
};


// Class AI.MLAIControllerComponent
// 0x0188 (0x0250 - 0x00C8)
class UMLAIControllerComponent : public UActorComponent
{
public:
	class UClass*                                      AISoundCollectCompClass;                                  // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AIStateInfoCompClass;                                     // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MLAIParachuteJumpCompClass;                               // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UAIActionExecutionComponent*                 AIActionExecutionComp;                                    // 0x00D4(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAIBasicStateInfoComponent*                  AIStateInfoComp;                                          // 0x00D8(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAISoundCollectionComponent*                 AISoundCollectComp;                                       // 0x00DC(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMLAIParachuteJumpComponent*                 MLAIParachuteJumpComp;                                    // 0x00E0(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              HearRadius;                                               // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<TEnumAsByte<ESTEPoseState>, struct FCameraViewPitchLimitData> CameraViewPitchLimitDataMap;                              // 0x00E8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FCameraViewPitchLimitData                   FreeFallCameraViewPitchLimitData;                         // 0x0124(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector                                     PrePos;                                                   // 0x012C(0x000C) (IsPlainOldData)
	float                                              PreTickTime;                                              // 0x0138(0x0004) (ZeroConstructor, IsPlainOldData)
	class AController*                                 OwnerController;                                          // 0x013C(0x0004) (ZeroConstructor, IsPlainOldData)
	class ANewFakePlayerAIController*                  MyAIController;                                           // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData)
	class ASTExtraPlayerController*                    MyPlayerController;                                       // 0x0144(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0148(0x0014) MISSED OFFSET
	float                                              FindNavLocationRadius;                                    // 0x015C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxNavLocationFindTimes;                                  // 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseLerpRotation;                                         // 0x0164(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0165(0x0003) MISSED OFFSET
	float                                              LerpRotationThreshold;                                    // 0x0168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsForceTargetRotation;                                    // 0x016C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x016D(0x0003) MISSED OFFSET
	float                                              FirstLerpRotationDeltaTime;                               // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FreeCameraTurnVelocity;                                   // 0x0174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnVelocity;                                             // 0x0178(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAIShootingPoseOffsetInfo                   shootingPoseOffsetInfo;                                   // 0x017C(0x0054) (Edit)
	float                                              AutoOpenDoorRange;                                        // 0x01D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x01D4(0x0008) MISSED OFFSET
	bool                                               IsModifyDamageLuaOverride;                                // 0x01DC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x01DD(0x0003) MISSED OFFSET
	float                                              RatingDamageScaleLuaOverride;                             // 0x01E0(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bShouldSendVehicleInfo;                                   // 0x01E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1B];                                      // 0x01E5(0x001B) MISSED OFFSET
	bool                                               IsChangeStatePC;                                          // 0x0200(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4F];                                      // 0x0201(0x004F) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.MLAIControllerComponent");
		return pStaticClass;
	}


	void UnBindDelegates(bool IsEndPlay);
	void SetLuaAIParamConfigString(const struct FString& InAIParamConfigString, int InLuaAIParamType);
	void SetIsMLAI(bool InIsMLAI);
	void SetCurShootingPose(EAIShootingPose InCurAIShootingPose);
	void SetAILevel(uint32_t NewAILevel);
	bool IsValid();
	bool IsFreeCamera();
	void InitAIStateInfoComponent(class UAIBasicStateInfoComponent* AIStateInfoComponent);
	struct FRotator GetViewRotation();
	struct FVector GetViewForwardVector();
	class ASTExtraBaseCharacter* GetOwnerBaseCharacter();
	class UMLAIParachuteJumpComponent* GetMLAIParachuteJumpComp();
	class UBackpackComponent* GetBackpackComponent();
	class UAIBasicStateInfoComponent* GetAIStateInfoComp();
	uint32_t GetAILevel();
	class UAIActionExecutionComponent* GetAIActionExecutionComp();
	void DoActionFreeCamera(bool IsEnter, float InPitch, float InYaw, float InRoll);
	bool CheckCameraViewPitchLimit(struct FRotator* InOutTargetRot);
	void BindDelegates();
};


// Class AI.MLAIParachuteJumpComponent
// 0x0040 (0x0190 - 0x0150)
class UMLAIParachuteJumpComponent : public ULuaActorComponent
{
public:
	float                                              JumpRadius;                                               // 0x0150(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              JumpHeight;                                               // 0x0154(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OpenParachuteHeight;                                      // 0x0158(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CheckOpenParachuteFreq;                                   // 0x015C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CloseParachuteHeight;                                     // 0x0160(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CheckCloseParachuteFreq;                                  // 0x0164(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DelayClearParachuteTime;                                  // 0x0168(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxFallingTime;                                           // 0x016C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EMLAIJumpingPhase                                  JumpingPhase;                                             // 0x0170(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0171(0x0003) MISSED OFFSET
	class ANewFakePlayerAIController*                  OwnerController;                                          // 0x0174(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FallingTime;                                              // 0x0178(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CheckCountTime;                                           // 0x017C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     LastLocation;                                             // 0x0180(0x000C) (IsPlainOldData)
	bool                                               bNotiyParachuteComp;                                      // 0x018C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x018D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.MLAIParachuteJumpComponent");
		return pStaticClass;
	}


	void ParachuteMove(float ForwardRate, float RightRate);
	void OpenParachute();
	void JumpFromPoint();
	void JumpFromPlane();
	void EnterParachuteJumpPhase(const struct FVector& StartLoc, const struct FRotator& StartRot);
	void EndJump(bool bSuccess);
};


// Class AI.MLAISubSystem
// 0x0820 (0x0840 - 0x0020)
class UMLAISubSystem : public UWorldSubsystem
{
public:
	struct FScriptMulticastDelegate                    OnAIStateRequestEnd;                                      // 0x0020(0x000C) (ZeroConstructor, InstancedReference)
	TMap<uint32_t, struct FAIPlayerState>              CacheAIPlayerStates;                                      // 0x002C(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FAIPlayerInteractInfo>       CachePlayerDamageInfo;                                    // 0x0068(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FVehicleDamageInfoContainer> CacheVehicleDamageInfo;                                   // 0x00A4(0x0050) (ZeroConstructor)
	int                                                MaxCacheDamageInfoNum;                                    // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData)
	TMap<uint32_t, struct FAIPlayerWeapon>             CacheAIPlayerWeapons;                                     // 0x00E4(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FAIPlayerEquipment>          CacheAIPlayerEquipments;                                  // 0x0120(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FAIPlayerBackpack>           CacheAIPlayerBackpacks;                                   // 0x015C(0x0050) (ZeroConstructor)
	TArray<class UAIBasicStateInfoComponent*>          AIStateInfoComps;                                         // 0x0198(0x000C) (ExportObject, ZeroConstructor)
	TArray<struct FBulletHoleRecordInfo>               CacheBulletHoles;                                         // 0x01A4(0x000C) (ZeroConstructor)
	struct FDiffSpecialZone                            CacheDiffSpecialZone;                                     // 0x01B0(0x0024)
	TMap<uint32_t, struct FDiffAIPlayerState>          CacheDiffAIPlayerStates;                                  // 0x01D4(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FDiffAIPlayerWeapon>         CacheDiffAIPlayerWeapons;                                 // 0x0210(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FDiffAIPlayerEquipment>      CacheDiffAIPlayerEquipments;                              // 0x024C(0x0050) (ZeroConstructor)
	TMap<uint32_t, bool>                               CacheDiffAIPlayerStatesRet;                               // 0x0288(0x0050) (ZeroConstructor)
	TMap<uint32_t, bool>                               CacheDiffAIPlayerWeaponsRet;                              // 0x02C4(0x0050) (ZeroConstructor)
	TMap<uint32_t, bool>                               CacheDiffAIPlayerEquipmentsRet;                           // 0x0300(0x0050) (ZeroConstructor)
	TMap<uint32_t, bool>                               DeadTeammatePlayerStateSendIDs;                           // 0x033C(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FAIStateInfo>                CacheTeammatePlayerStateInfos;                            // 0x0378(0x0050) (ZeroConstructor)
	TMap<uint32_t, uint32_t>                           CacheDiffTeammatePlayerStateKeys;                         // 0x03B4(0x0050) (ZeroConstructor)
	TMap<uint32_t, bool>                               TeammatePlayerDiffChecks;                                 // 0x03F0(0x0050) (ZeroConstructor)
	TArray<int>                                        PlayerAvailableBackpackItemTypes;                         // 0x042C(0x000C) (ZeroConstructor)
	TArray<struct FString>                             TeammateStateWhiteList;                                   // 0x0438(0x000C) (ZeroConstructor)
	TArray<TWeakObjectPtr<class AAirDropBoxActor>>     AirDropBoxActors;                                         // 0x0444(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0450(0x003C) MISSED OFFSET
	TMap<uint32_t, struct FAIStateInfo>                CacheAllPlayerInfo;                                       // 0x048C(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04C8(0x0004) MISSED OFFSET
	struct FRedZoneState                               CacheRedZoneInfo;                                         // 0x04CC(0x0030)
	float                                              AirAttackTotalTime;                                       // 0x04FC(0x0004) (ZeroConstructor, IsPlainOldData)
	class UAirAttackComponent*                         AirAttackComp;                                            // 0x0500(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0504(0x0004) MISSED OFFSET
	struct FGlobalGameState                            GlobalGameState;                                          // 0x0508(0x0170)
	struct FGlobalGameState                            LastGlobalGameState;                                      // 0x0678(0x0170)
	class UMLAIUtilsBase*                              MlaiUtils;                                                // 0x07E8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x07EC(0x0008) MISSED OFFSET
	TMap<class AActor*, class ASpecialZoneActor*>      CacheSpecialZoneParents;                                  // 0x07F4(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0830(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.MLAISubSystem");
		return pStaticClass;
	}


	void UpdateSpecialZoneInfo(struct FSpecialZoneState* NewZoneInfo);
	void UpdateRedZoneState(class UWorld* InWorld);
	void UpdateAirDropBoxStates();
	void StartRequestCache();
	void SetSpecialZoneCustomState(class AActor* InParent, int InCustomState);
	void SetMLAIUtils(class UMLAIUtilsBase* MlaiUtils);
	void RemoveSpecialZoneInfo(uint32_t ZoneID, uint32_t Type);
	void OnVehicleDamageInfo(class AController* InstigatorController, class AController* VictimController, int DamageTypeId, float Damage, bool bIsFatalHealthCost, class AActor* DamageCauser, class AActor* VictimVehicle);
	void OnPlayerDamageInfo(class ASTExtraPlayerState* InstigatorPlayerState, class ASTExtraPlayerState* VictimPlayerState, float Damage, const struct FDamageEvent& DamageEvent, float DamageBeforeCalArmor, bool bIsFatalHealthCost, class AActor* DamageCauser, bool bIsNearDeathHealthCost);
	void OnItemStateChanged(const struct FVector& Location);
	void OnAirPlaneRouteSet(const struct FVector& StartLoc, const struct FVector& TargetLoc, const struct FVector& CanJumpLoc, const struct FVector& ForceJumpLoc);
	void OnAirDropBoxSpawn(class AAirDropBoxActor* AirDropBoxActor);
	void OnAirAttackInfo(EAirAttackInfo airattacktype, int waveIndex, const struct FAirAttackOrder& InAirAttackOrder, const struct FVector& InAirAttackArea);
	bool IsAvailableBackpackItemType(const struct FItemDefineID& DefineID);
	bool IsAIBotGame();
	TArray<class ASTExtraBaseCharacter*> GetValidTeammatePlayers(class UAIStateInfoComponent* AIStateInfoComp);
	struct FAIStateInfo GetTeammatePlayerStateInfo(class UAIStateInfoComponent* InAIStateInfoComp, class ASTExtraBaseCharacter* InCharacter);
	float GetLossTime(class ASTExtraPlayerController* PlayerController);
	struct FDiffAIStateInfo GetDiffTeammatePlayerStateInfo(class UAIStateInfoComponent* InAIStateInfoComp, class ASTExtraBaseCharacter* InCharacter);
	void EndRequestCache();
	void ChangeMLAIInfo(class AFakePlayerAIController* AIController, const struct FString& Name, uint64_t DisplayUID, struct FPlayerOBInfo* OBInfo);
	void AddAIAttributeConfig(uint32_t InID, const struct FString& InKey);
};


// Class AI.MLAITrainingComponent
// 0x0018 (0x00E0 - 0x00C8)
class UMLAITrainingComponent : public UActorComponent
{
public:
	class APlayerState*                                PauseGamePlayerState;                                     // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsPausing;                                               // 0x00CC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x13];                                      // 0x00CD(0x0013) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.MLAITrainingComponent");
		return pStaticClass;
	}


	void StopRunnable();
	void SetPauseGamePlayerState(class APlayerState* InPlayerState);
	bool SetPause(bool bInPause, float InPauseTime);
	void SendAIStateRequest(TArray<unsigned char> Packet);
	bool IsRequestAIState();
	void InitRunnable(float InStartCollectingInterval, float InSendInterval, float InTimeOutInterval);
	void EndRequestAIState();
};


// Class AI.MLAIUtilsBase
// 0x07B4 (0x07D0 - 0x001C)
class UMLAIUtilsBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x001C(0x0040) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x005C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bUseGlobalNearbyInfo;                                     // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNeedDebugNearbyInfo;                                     // 0x0069(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x006A(0x0002) MISSED OFFSET
	TMap<uint64_t, struct FItemStateData>              CacheItemData;                                            // 0x006C(0x0050) (ZeroConstructor)
	TMap<uint64_t, struct FAINearbyThrown>             CacheAINearbyThrown;                                      // 0x00A8(0x0050) (ZeroConstructor)
	TMap<uint64_t, struct FObstacleState>              CacheObstacleStates;                                      // 0x00E4(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FAIPlayerStateBaseMod>       CacheAIPlayerStatesBaseMod;                               // 0x0120(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FAIPlayerWeapon>             CacheAIPlayerWeaponsBaseMod;                              // 0x015C(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FAIPlayerEquipment>          CacheAIPlayerEquipmentsBaseMod;                           // 0x0198(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x4];                                       // 0x01D4(0x0004) MISSED OFFSET
	struct FGlobalGameStateBaseMod                     CacheGlobalGameStateBaseMod;                              // 0x01D8(0x0080)
	struct FGlobalGameStateBaseMod                     LastGlobalGameStateBaseMod;                               // 0x0258(0x0080)
	struct FDiffGlobalGameStateBaseMod                 DiffGlobalGameStateBaseMod;                               // 0x02D8(0x0098)
	struct FDiffGlobalGameStateBaseModGeneral          DiffGlobalGameStateBaseModGeneral;                        // 0x0370(0x00C8)
	struct FDiffListIDMap                              DiffPlayerIDToListIDMap;                                  // 0x0438(0x003C)
	TMap<uint64_t, struct FPropertyNameListIDMap>      DiffAIPlayerInfoListIDMaps;                               // 0x0474(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FDiffAIPlayerStateBaseMod>   CacheDiffAIPlayerStatesBaseMod;                           // 0x04B0(0x0050) (ZeroConstructor)
	TMap<uint32_t, bool>                               CacheDiffAIPlayerStatesRetBaseMod;                        // 0x04EC(0x0050) (ZeroConstructor)
	TArray<struct FAIStateInfoBaseMod>                 CacheAllPlayersInfoBaseMod;                               // 0x0528(0x000C) (ZeroConstructor)
	struct FDiffAllPlayerInfoBaseModGeneral            CacheDiffAllPlayersInfoBaseModGeneral;                    // 0x0534(0x0070)
	unsigned char                                      UnknownData03[0x4];                                       // 0x05A4(0x0004) MISSED OFFSET
	struct FDiffAllPlayerInfoBaseMod                   CacheAllPlayersInfoBaseModCSS;                            // 0x05A8(0x0170)
	TMap<uint32_t, struct FAIStateInfoBaseMod>         LastAllPlayerInfoMapBaseMod;                              // 0x0718(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FAIStateInfoBaseMod>         CacheAllPlayersInfoMapBaseMod;                            // 0x0754(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData04[0x40];                                      // 0x0790(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.MLAIUtilsBase");
		return pStaticClass;
	}


	void StartRequestCache();
	void GetGlobalGameStateInfoToCache(class UWorld* InWorld);
	void GetDiffGlobalGameStateInfoToCache(class UWorld* InWorld);
	void GetDiffGlobalGameStateBaseModToCacheGeneral(class UWorld* InWorld);
	void GetDiffGlobalGameStatBaseModToCache(class UWorld* InWorld);
	void GetDiffAllPlayerStateInfoToCacheCSS(class UWorld* InWorld, bool bUseDiff, bool bSeparate);
	void GetDiffAllPlayerStateInfoToCache(class UWorld* InWorld);
	void GetDiffAllPlayerStateInfoBaseModToCacheCCS(class UWorld* InWorld, bool bUseDiff, bool bSeparate);
	void GetAllPlayerStateInfoToCache(class UWorld* InWorld);
	void EndRequestCache();
};


// Class AI.MLAIUtilsBRBase
// 0x0B48 (0x1318 - 0x07D0)
class UMLAIUtilsBRBase : public UMLAIUtilsBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x07D0(0x0038) MISSED OFFSET
	TMap<uint64_t, struct FVehicleState>               CacheVehicleStates;                                       // 0x0808(0x0050) (ZeroConstructor)
	TMap<uint64_t, struct FDynamicItem>                CacheDynamicItems;                                        // 0x0844(0x0050) (ZeroConstructor)
	TMap<uint64_t, struct FMonsterState>               CacheMonsterStats;                                        // 0x0880(0x0050) (ZeroConstructor)
	struct FGlobalGameStateBRBase                      CacheGlobalGameStateBRBase;                               // 0x08BC(0x015C)
	struct FGlobalGameStateBRBase                      LastGlobalGameStateBRBase;                                // 0x0A18(0x015C)
	struct FDiffGlobalGameStateBRBase                  DiffGlobalGameStateBRBase;                                // 0x0B74(0x00F0)
	struct FDiffGlobalGameStateBRBaseGeneral           DiffGlobalGameStateBRBaseGeneral;                         // 0x0C64(0x0204)
	struct FRedZoneState                               CacheRedZoneInfo;                                         // 0x0E68(0x0030)
	TMap<uint32_t, struct FAIPlayerStateBRBase>        CacheAIPlayerStatesBRBase;                                // 0x0E98(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FDiffAIPlayerState>          CacheDiffAIPlayerStates;                                  // 0x0ED4(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FDiffAIPlayerStateBRBase>    CacheDiffAIPlayerStatesBRBase;                            // 0x0F10(0x0050) (ZeroConstructor)
	TMap<uint32_t, bool>                               CacheDiffAIPlayerStatesRetBRBase;                         // 0x0F4C(0x0050) (ZeroConstructor)
	TArray<struct FAIStateInfoBRBase>                  CacheAllPlayersInfoBRBase;                                // 0x0F88(0x000C) (ZeroConstructor)
	struct FDiffAllPlayerInfoBRBaseGeneral             CacheDiffAllPlayersInfoBRBaseGeneral;                     // 0x0F94(0x006C)
	struct FDiffAllPlayerInfoBRBase                    CacheAllPlayersInfoBRBaseCSS;                             // 0x1000(0x02A0)
	TMap<uint32_t, struct FAIStateInfoBRBase>          LastAllPlayerInfoMapBRBase;                               // 0x12A0(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x3C];                                      // 0x12DC(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.MLAIUtilsBRBase");
		return pStaticClass;
	}


	void GetRedZoneState(class UWorld* InWorld, struct FRedZoneState* ZoneState);
	void GetCacheAIPlayerStateInfoBRBase(class ASTExtraBaseCharacter* InPawn, bool bIsCache, struct FAIPlayerStateBRBase* AIPlayerState);
	void GetAIPlayerStateBRBase(class ASTExtraBaseCharacter* InCharacter, struct FAIPlayerStateBRBase* Ret);
};


// Class AI.MLAIUtilsMPBase
// 0x0180 (0x0950 - 0x07D0)
class UMLAIUtilsMPBase : public UMLAIUtilsBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x07D0(0x0038) MISSED OFFSET
	struct FGlobalGameStateMPBase                      CacheGlobalGameStateMPBase;                               // 0x0808(0x0024)
	struct FGlobalGameStateMPBase                      LastGlobalGameStateMPBase;                                // 0x082C(0x0024)
	struct FDiffGlobalGameStateMPBaseGeneral           DiffGlobalGameStateMPBaseGeneral;                         // 0x0850(0x0030)
	TArray<struct FAIStateInfoMPBase>                  CacheAllPlayersInfoMPBase;                                // 0x0880(0x000C) (ZeroConstructor)
	struct FDiffAllPlayerInfoMPBaseGeneral             CacheDiffAllPlayersInfoMPBaseGeneral;                     // 0x088C(0x006C)
	TMap<uint32_t, struct FAIStateInfoMPBase>          LastAllPlayerInfoMapMPBase;                               // 0x08F8(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x1C];                                      // 0x0934(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.MLAIUtilsMPBase");
		return pStaticClass;
	}

};


// Class AI.MlAIUtilsTeamDeath
// 0x0000 (0x0950 - 0x0950)
class UMlAIUtilsTeamDeath : public UMLAIUtilsMPBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.MlAIUtilsTeamDeath");
		return pStaticClass;
	}

};


// Class AI.SpecialZoneShapeComponent
// 0x0000 (0x0680 - 0x0680)
class USpecialZoneShapeComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.SpecialZoneShapeComponent");
		return pStaticClass;
	}

};


// Class AI.SpecialZoneActor
// 0x0018 (0x0328 - 0x0310)
class ASpecialZoneActor : public AActor
{
public:
	int                                                ZoneID;                                                   // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CustomState;                                              // 0x031C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpecialZoneShapeComponent*                  SpecialZoneShapeComponent;                                // 0x0320(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      CacheParentActor;                                         // 0x0324(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.SpecialZoneActor");
		return pStaticClass;
	}


	void UpdateCustomState(int InCustomState);
	struct FSpecialZoneState GetSpecialZoneState();
};


// Class AI.STStrategyLocation_Range
// 0x0038 (0x0100 - 0x00C8)
class USTStrategyLocation_Range : public USTStrategyLocation
{
public:
	float                                              Range;                                                    // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxTryTimes;                                              // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCheckPlayerSight : 1;                                    // 0x00D0(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00D1(0x0003) MISSED OFFSET
	float                                              VerticalOffset;                                           // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PlayerViewDistance;                                       // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     CollisionChannel;                                         // 0x00DC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00DD(0x0003) MISSED OFFSET
	float                                              MaxLocationTraceHeightZ;                                  // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FSpawnArea>                          CustomAreas;                                              // 0x00E4(0x000C) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData02[0x10];                                      // 0x00F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.STStrategyLocation_Range");
		return pStaticClass;
	}


	void ModifyBaseLocation(const struct FVector& InLocation);
	bool GetSpawnLocation(class AActor* Requester, int ReferenceCount, TArray<struct FSpawnSpotInfo>* OutArr);
	void AddSpawnArea(const struct FSpawnArea& NewArea, bool ForceAdd);
	void ActivateStrategy(class ASTSpawnerBase* Owner);
};


// Class AI.STStrategySpecies_Candidate
// 0x0000 (0x00D0 - 0x00D0)
class USTStrategySpecies_Candidate : public USTStrategySpecies
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.STStrategySpecies_Candidate");
		return pStaticClass;
	}


	TArray<struct FUnitConfig> Supply(int ReferencedCount, TArray<struct FSpawnSpotInfo> SpotSpecies);
	void ActivateStrategy(class ASTSpawnerBase* Owner);
};


// Class AI.STStrategySpecies_Lua
// 0x0000 (0x00D0 - 0x00D0)
class USTStrategySpecies_Lua : public USTStrategySpecies
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.STStrategySpecies_Lua");
		return pStaticClass;
	}


	TArray<struct FUnitConfig> Supply(int ReferencedCount, TArray<struct FSpawnSpotInfo> SpotSpecies);
	void LuaSupply(int ReferencedCount);
};


// Class AI.STStrategyTiming_Event
// 0x0018 (0x00C8 - 0x00B0)
class USTStrategyTiming_Event : public USTStrategyTiming
{
public:
	struct FString                                     EventID;                                                  // 0x00B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     EventName;                                                // 0x00BC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.STStrategyTiming_Event");
		return pStaticClass;
	}


	void TickStrategy(float DeltaTime);
	void OnSpawnEventBroadcast(uint32_t SpawnerID);
	void ActivateStrategy(class ASTSpawnerBase* Owner);
};


// Class AI.TeammateMLAIControllerComponent
// 0x0018 (0x0168 - 0x0150)
class UTeammateMLAIControllerComponent : public ULuaActorComponent
{
public:
	uint32_t                                           AILevel;                                                  // 0x0150(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           TargetPlayerKey;                                          // 0x0154(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     DefaultLuaFilePath;                                       // 0x0158(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0164(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.TeammateMLAIControllerComponent");
		return pStaticClass;
	}


	void OnControllerStateChanged(EStateType StateType);
};


// Class AI.VehicleAIController
// 0x0080 (0x0638 - 0x05B8)
class AVehicleAIController : public ABasicAIController
{
public:
	class ASTExtraVehicleBase*                         ControlledVehicle;                                        // 0x05B8(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIVehicleStateData                         AIVehicleStateData;                                       // 0x05BC(0x0078)
	class UAIBehaviorAdapter_VehicleBase*              AIBehaviorAdapter;                                        // 0x0634(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.VehicleAIController");
		return pStaticClass;
	}


	void SetCurEnemy(class APawn* NewEnemy);
	class UVehiclePathFollowingComponent* GetVehiclePathFollow();
	class APawn* GetCurEnemy();
	float GetAIHitRate(float Distance);
	void ExplodeAndDeath();
	void DelayInitVehicleWeapon();
};


// Class AI.VehicleAIUserComponent
// 0x0000 (0x01B0 - 0x01B0)
class UVehicleAIUserComponent : public UVehicleUserComponentBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.VehicleAIUserComponent");
		return pStaticClass;
	}


	void ServerVehicleLeanOut(bool bLeanOut);
	void ServerExitVehicle();
	void ServerEnterVehicle(class ASTExtraVehicleBase* InVehicle, unsigned char SeatType);
	void ServerChangeVehicleSeat(int InSeatIndex);
	void MulticastExitVehicle();
	void MulticastEnterVehicle(class ASTExtraVehicleBase* InVehicle, class ASTExtraPlayerCharacter* Pawn, bool bSuccess, unsigned char SeatType, int SeatIndex);
	void MulticastChangeVehicleSeat(int InSeatIndex);
};


// Class AI.VehicleCustomDamageEventComponent
// 0x0000 (0x0248 - 0x0248)
class UVehicleCustomDamageEventComponent : public UCustomDamageEventComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.VehicleCustomDamageEventComponent");
		return pStaticClass;
	}


	void OnVehicleHPFuelChanged(float HP, float Fuel);
};


// Class AI.VehiclePathFollowingComponent
// 0x0020 (0x0268 - 0x0248)
class UVehiclePathFollowingComponent : public UPathFollowingComponent
{
public:
	unsigned char                                      bWritable_SteeringOnly : 1;                               // 0x0248(0x0001)
	unsigned char                                      bWritable_ThrottleOnly : 1;                               // 0x0248(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0249(0x0003) MISSED OFFSET
	class UAIBehaviorAdapter_VehicleBase*              VehicleAdapter;                                           // 0x024C(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bPathDebug;                                               // 0x0250(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x0251(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.VehiclePathFollowingComponent");
		return pStaticClass;
	}

};


}

