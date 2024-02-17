#pragma once

// Pubg Mobile Beta (3.0) SDK by Telegram @Sanjay_Src

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum AI.EAISoundCollectType
enum class EAISoundCollectType : uint8_t
{
	EAISoundCollectType__AISoundCollectType_Step = 0,
	EAISoundCollectType__AISoundCollectType_Weapon = 1,
	EAISoundCollectType__AISoundCollectType_Vehicle = 2,
	EAISoundCollectType__AISoundCollectType_Horn = 3,
	EAISoundCollectType__AISoundCollectType_Grenade = 4,
	EAISoundCollectType__AISoundCollectType_MAX = 5
};


// Enum AI.EObstacleDetectionSpace
enum class EObstacleDetectionSpace : uint8_t
{
	EObstacleDetectionSpace__ObstacleDetection_Box = 0,
	EObstacleDetectionSpace__ObstacleDetection_CapsuleSweep = 1,
	EObstacleDetectionSpace__ObstacleDetection_MAX = 2
};


// Enum AI.EAICheckFlyingStatusType
enum class EAICheckFlyingStatusType : uint8_t
{
	EAICheckFlyingStatusType__FlyingStatus_HasNavigationSystem = 0,
	EAICheckFlyingStatusType__FlyingStatus_NavigationVoxelDataDone = 1,
	EAICheckFlyingStatusType__FlyingStatus_MAX = 2
};


// Enum AI.EAICheckShootingPoseType
enum class EAICheckShootingPoseType : uint8_t
{
	EAICheckShootingPoseType__ShootingPose_Normal = 0,
	EAICheckShootingPoseType__ShootingPose_Stand = 1,
	EAICheckShootingPoseType__ShootingPose_Peek = 2,
	EAICheckShootingPoseType__ShootingPose_WaitVisibilityCheck = 3,
	EAICheckShootingPoseType__ShootingPose_MAX = 4
};


// Enum AI.ECompareLengthType
enum class ECompareLengthType : uint8_t
{
	ELengthGreater                 = 0,
	ELengthLess                    = 1,
	ELengthEequal                  = 2,
	ECompareLengthType_MAX         = 3
};


// Enum AI.EAIDecoratorGeneralLineTraceType
enum class EAIDecoratorGeneralLineTraceType : uint8_t
{
	EAIDecoratorGeneralLineTraceType__LineTraceType_Forward = 0,
	EAIDecoratorGeneralLineTraceType__LineTraceType_MAX = 1
};


// Enum AI.EInSafetyCircleType
enum class EInSafetyCircleType : uint8_t
{
	EInSafetyCircleType__EInSafetyCircleType_None = 0,
	EInSafetyCircleType__EInSafetyCircleType_BlueCircle = 1,
	EInSafetyCircleType__EInSafetyCircleType_WhiteCircle = 2,
	EInSafetyCircleType__EInSafetyCircleType_MAX = 3
};


// Enum AI.EItemNumCheckType
enum class EItemNumCheckType : uint8_t
{
	ItemNumGreater                 = 0,
	ItemNumLess                    = 1,
	ItemNumEequal                  = 2,
	EItemNumCheckType_MAX          = 3
};


// Enum AI.EChooseEnemySearchMethod
enum class EChooseEnemySearchMethod : uint8_t
{
	EChooseEnemySearchMethod__SearchMethod_Nearest = 0,
	EChooseEnemySearchMethod__SearchMethod_MostHP = 1,
	EChooseEnemySearchMethod__SearchMethod_LeastHP = 2,
	EChooseEnemySearchMethod__SearchMethod_ByBlackboardValue = 3,
	EChooseEnemySearchMethod__SearchMethod_MAX = 4
};


// Enum AI.EChooseEnemyType
enum class EChooseEnemyType : uint8_t
{
	EChooseEnemyType__EnemyType_Player = 0,
	EChooseEnemyType__EnemyType_Animal = 1,
	EChooseEnemyType__EnemyType_Zombie = 2,
	EChooseEnemyType__EnemyType_UAV = 3,
	EChooseEnemyType__EnemyType_MAX = 4
};


// Enum AI.EMobAddHPServiceType
enum class EMobAddHPServiceType : uint8_t
{
	EMobAddHPServiceType__LoseTarget = 0,
	EMobAddHPServiceType__EMobAddHPServiceType_MAX = 1
};


// Enum AI.EAISearchEnemyType
enum class EAISearchEnemyType : uint8_t
{
	EAISearchEnemyType__Nearest    = 0,
	EAISearchEnemyType__Random     = 1,
	EAISearchEnemyType__EAISearchEnemyType_MAX = 2
};


// Enum AI.EAISearchEnemySingleRule
enum class EAISearchEnemySingleRule : uint8_t
{
	EAISearchEnemySingleRule__SingleRule_Hatred = 0,
	EAISearchEnemySingleRule__SingleRule_Random = 1,
	EAISearchEnemySingleRule__SingleRule_Nearest = 2,
	EAISearchEnemySingleRule__SingleRule_MostHP = 3,
	EAISearchEnemySingleRule__SingleRule_PoorHP = 4,
	EAISearchEnemySingleRule__SingleRule_BlackboardValue = 5,
	EAISearchEnemySingleRule__SingleRule_MAX = 6
};


// Enum AI.EAISenseGrenadeType
enum class EAISenseGrenadeType : uint8_t
{
	EAISenseGrenadeType__ExplosionGrenade = 0,
	EAISenseGrenadeType__BurningGrenade = 1,
	EAISenseGrenadeType__SmokingGrenade = 2,
	EAISenseGrenadeType__FlashBomb = 3,
	EAISenseGrenadeType__Grenade_MaxNum = 4,
	EAISenseGrenadeType__EAISenseGrenadeType_MAX = 5
};


// Enum AI.ETargetAngleCheck
enum class ETargetAngleCheck : uint8_t
{
	TargetAngleCheckFocus          = 0,
	TargetAngleCheckFocusFail      = 1,
	TargetAngleCheckFocusSuccess   = 2,
	ETargetAngleCheck_MAX          = 3
};


// Enum AI.EVHQueryEnemyRule
enum class EVHQueryEnemyRule : uint8_t
{
	EVHQueryEnemyRule__Nearest     = 0,
	EVHQueryEnemyRule__Random      = 1,
	EVHQueryEnemyRule__EVHQueryEnemyRule_MAX = 2
};


// Enum AI.EVHEnemyType
enum class EVHEnemyType : uint8_t
{
	EVHEnemyType__EVHEnemyType_Player = 0,
	EVHEnemyType__EVHEnemyType_Car = 1,
	EVHEnemyType__EVHEnemyType_Mob = 2,
	EVHEnemyType__EVHEnemyType_FakePlayer = 3,
	EVHEnemyType__EVHEnemyType_MAX = 4
};


// Enum AI.EAIAdvFindOcclusionPointSearchBestOcclusionMethod
enum class EAIAdvFindOcclusionPointSearchBestOcclusionMethod : uint8_t
{
	EAIAdvFindOcclusionPointSearchBestOcclusionMethod__Method_Normal = 0,
	EAIAdvFindOcclusionPointSearchBestOcclusionMethod__Method_NearToTarget = 1,
	EAIAdvFindOcclusionPointSearchBestOcclusionMethod__Method_FarToTarget = 2,
	EAIAdvFindOcclusionPointSearchBestOcclusionMethod__Method_NearToSelf = 3,
	EAIAdvFindOcclusionPointSearchBestOcclusionMethod__Method_RandomOfSelf = 4,
	EAIAdvFindOcclusionPointSearchBestOcclusionMethod__Method_MAX = 5
};


// Enum AI.EAIAdvFindOcclusionPointPoseType
enum class EAIAdvFindOcclusionPointPoseType : uint8_t
{
	EAIAdvFindOcclusionPointPoseType__Occlusion_PoseProne = 0,
	EAIAdvFindOcclusionPointPoseType__Occlusion_PoseCrouch = 1,
	EAIAdvFindOcclusionPointPoseType__Occlusion_PoseStand = 2,
	EAIAdvFindOcclusionPointPoseType__Occlusion_PoseBush = 3,
	EAIAdvFindOcclusionPointPoseType__Occlusion_MAX = 4
};


// Enum AI.EFindFlyingHoverPointOneSideShapeOType
enum class EFindFlyingHoverPointOneSideShapeOType : uint8_t
{
	EFindFlyingHoverPointOneSideShapeOType__OT_RandomSide = 0,
	EFindFlyingHoverPointOneSideShapeOType__OT_LeftSide = 1,
	EFindFlyingHoverPointOneSideShapeOType__OT_RightSide = 2,
	EFindFlyingHoverPointOneSideShapeOType__OT_MAX = 3
};


// Enum AI.EFindFlyingHoverPointHoverType
enum class EFindFlyingHoverPointHoverType : uint8_t
{
	EFindFlyingHoverPointHoverType__HT_OneSideShapeO = 0,
	EFindFlyingHoverPointHoverType__HT_MAX = 1
};


// Enum AI.EFlyToPathfindingThread
enum class EFlyToPathfindingThread : uint8_t
{
	EFlyToPathfindingThread__Sync  = 0,
	EFlyToPathfindingThread__ASync = 1,
	EFlyToPathfindingThread__EFlyToPathfindingThread_MAX = 2
};


// Enum AI.EMobFindAttackablePositionLineTraceType
enum class EMobFindAttackablePositionLineTraceType : uint8_t
{
	EMobFindAttackablePositionLineTraceType__Normal = 0,
	EMobFindAttackablePositionLineTraceType__HalfHeightOffset = 1,
	EMobFindAttackablePositionLineTraceType__CustomHeightOffset = 2,
	EMobFindAttackablePositionLineTraceType__EMobFindAttackablePositionLineTraceType_MAX = 3
};


// Enum AI.ESearchType
enum class ESearchType : uint8_t
{
	ESearchType__CenterInSelfLocation = 0,
	ESearchType__CenterInSpecificLocation = 1,
	ESearchType__ESearchType_MAX   = 2
};


// Enum AI.EAIMoveToOcclusionFinishMovePoseType
enum class EAIMoveToOcclusionFinishMovePoseType : uint8_t
{
	EAIMoveToOcclusionFinishMovePoseType__FinishMovePoseType_Normal = 0,
	EAIMoveToOcclusionFinishMovePoseType__FinishMovePoseType_CrouchIfACrouchOcclusion = 1,
	EAIMoveToOcclusionFinishMovePoseType__FinishMovePoseType_MAX = 2
};


// Enum AI.EAIMoveToOcclusionMovingPoseType
enum class EAIMoveToOcclusionMovingPoseType : uint8_t
{
	EAIMoveToOcclusionMovingPoseType__MovingPoseType_Normal = 0,
	EAIMoveToOcclusionMovingPoseType__MovingPoseType_CrouchSprintIfAlreadyCrouched = 1,
	EAIMoveToOcclusionMovingPoseType__MovingPoseType_MAX = 2
};


// Enum AI.EAIMoveToOcclusionSearchBestOcclusionMethod
enum class EAIMoveToOcclusionSearchBestOcclusionMethod : uint8_t
{
	EAIMoveToOcclusionSearchBestOcclusionMethod__Normal = 0,
	EAIMoveToOcclusionSearchBestOcclusionMethod__NearToTarget = 1,
	EAIMoveToOcclusionSearchBestOcclusionMethod__FarToTarget = 2,
	EAIMoveToOcclusionSearchBestOcclusionMethod__NearToSelf = 3,
	EAIMoveToOcclusionSearchBestOcclusionMethod__RandomOfSelf = 4,
	EAIMoveToOcclusionSearchBestOcclusionMethod__EAIMoveToOcclusionSearchBestOcclusionMethod_MAX = 5
};


// Enum AI.EAIMoveToOcclusionPoseType
enum class EAIMoveToOcclusionPoseType : uint8_t
{
	EAIMoveToOcclusionPoseType__PoseProne = 0,
	EAIMoveToOcclusionPoseType__PoseCrouch = 1,
	EAIMoveToOcclusionPoseType__PoseStand = 2,
	EAIMoveToOcclusionPoseType__PoseBush = 3,
	EAIMoveToOcclusionPoseType__EAIMoveToOcclusionPoseType_MAX = 4
};


// Enum AI.ESeekFlyPointHorizontalAngleType
enum class ESeekFlyPointHorizontalAngleType : uint8_t
{
	ESeekFlyPointHorizontalAngleType__TargetView = 0,
	ESeekFlyPointHorizontalAngleType__TargetToSelf = 1,
	ESeekFlyPointHorizontalAngleType__BornLocationView = 2,
	ESeekFlyPointHorizontalAngleType__ESeekFlyPointHorizontalAngleType_MAX = 3
};


// Enum AI.ESeekFlyPointCenterLocType
enum class ESeekFlyPointCenterLocType : uint8_t
{
	ESeekFlyPointCenterLocType__Target = 0,
	ESeekFlyPointCenterLocType__Self = 1,
	ESeekFlyPointCenterLocType__BornLocation = 2,
	ESeekFlyPointCenterLocType__ESeekFlyPointCenterLocType_MAX = 3
};


// Enum AI.ELocateType
enum class ELocateType : uint8_t
{
	ELocateType__ELocateType_Random = 0,
	ELocateType__ELocateType_Strategy = 1,
	ELocateType__ELocateType_Escape = 2,
	ELocateType__ELocateType_MAX   = 3
};


// Enum AI.EAIVHMoveType
enum class EAIVHMoveType : uint8_t
{
	EAIVHMoveType__ELocateType_Normal = 0,
	EAIVHMoveType__ELocateType_Strategy = 1,
	EAIVHMoveType__ELocateType_Directly = 2,
	EAIVHMoveType__ELocateType_Toward = 3,
	EAIVHMoveType__ELocateType_MAX = 4
};


// Enum AI.EAITaskNodeThrowGrenadeMethod
enum class EAITaskNodeThrowGrenadeMethod : uint8_t
{
	EAITaskNodeThrowGrenadeMethod__ThrowGrenadeMethod_Normal = 0,
	EAITaskNodeThrowGrenadeMethod__ThrowGrenadeMethod_Advanced = 1,
	EAITaskNodeThrowGrenadeMethod__ThrowGrenadeMethod_MAX = 2
};


// Enum AI.ECustomDamageEventReactionType
enum class ECustomDamageEventReactionType : uint8_t
{
	ECustomDamageEventReactionType__SpawnActor = 0,
	ECustomDamageEventReactionType__ActiveParticles = 1,
	ECustomDamageEventReactionType__DetactiveParticles = 2,
	ECustomDamageEventReactionType__HideMesh = 3,
	ECustomDamageEventReactionType__HideMeshInstance = 4,
	ECustomDamageEventReactionType__HideBone = 5,
	ECustomDamageEventReactionType__ApplyPhysicalAnimationProfile = 6,
	ECustomDamageEventReactionType__SetCollisionEnabled = 7,
	ECustomDamageEventReactionType__ECustomDamageEventReactionType_MAX = 8
};


// Enum AI.ECustomDamageEventTriggerType
enum class ECustomDamageEventTriggerType : uint8_t
{
	ECustomDamageEventTriggerType__OnPassedDamageThreshold = 0,
	ECustomDamageEventTriggerType__OnAnyDamage = 1,
	ECustomDamageEventTriggerType__ECustomDamageEventTriggerType_MAX = 2
};


// Enum AI.EMLAIJumpingPhase
enum class EMLAIJumpingPhase : uint8_t
{
	EMLAIJumpingPhase__Before      = 0,
	EMLAIJumpingPhase__FreeFalling = 1,
	EMLAIJumpingPhase__OpenParachute = 2,
	EMLAIJumpingPhase__Landing     = 3,
	EMLAIJumpingPhase__EMLAIJumpingPhase_MAX = 4
};


// Enum AI.ENearItemType
enum class ENearItemType : uint8_t
{
	ENearItemType__Box             = 0,
	ENearItemType__Item            = 1,
	ENearItemType__AirDropBox      = 2,
	ENearItemType__TreasureChest   = 3,
	ENearItemType__Weed            = 4,
	ENearItemType__ENearItemType_MAX = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AI.TLogAIShootInfo
// 0x000C
struct FTLogAIShootInfo
{
	int                                                TargetDistance;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TargetType;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                WeaponId;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.BehaviorRegion
// 0x0028
struct FBehaviorRegion
{
	struct FVector                                     BasePosition;                                             // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              SphereRadius;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // 0x001C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct AI.ChildDynamicItem
// 0x0014
struct FChildDynamicItem
{
	int                                                Category;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     ChildName;                                                // 0x0004(0x000C) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0010(0x0004) MISSED OFFSET
};

// ScriptStruct AI.AIStateInfoBase
// 0x000C
struct FAIStateInfoBase
{
	TArray<struct FString>                             IgnoreNames;                                              // 0x0000(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.AIStateXYZ
// 0x000C (0x0018 - 0x000C)
struct FAIStateXYZ : public FAIStateInfoBase
{
	float                                              X;                                                        // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.SoundState
// 0x0020 (0x002C - 0x000C)
struct FSoundState : public FAIStateInfoBase
{
	int                                                Type;                                                     // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Location;                                                 // 0x0010(0x0018)
	uint32_t                                           ID;                                                       // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.CacheSoundState
// 0x0030
struct FCacheSoundState
{
	struct FSoundState                                 SoundState;                                               // 0x0000(0x002C)
	float                                              Time;                                                     // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.UniqueStateInfo
// 0x000C (0x0018 - 0x000C)
struct FUniqueStateInfo : public FAIStateInfoBase
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	uint64_t                                           diff_mark_id;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.AIAttribute
// 0x0008 (0x0020 - 0x0018)
struct FAIAttribute : public FUniqueStateInfo
{
	uint32_t                                           ID;                                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.AIPlayerState
// 0x0124 (0x0130 - 0x000C)
struct FAIPlayerState : public FAIStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           unique_id;                                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                expect_delivery_num;                                      // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                remain_delivery_num;                                      // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           actor_id;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                team_id;                                                  // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x0028(0x0018)
	struct FAIStateXYZ                                 Rotation;                                                 // 0x0040(0x0018)
	struct FAIStateXYZ                                 Speed;                                                    // 0x0058(0x0018)
	float                                              HP;                                                       // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Energy;                                                   // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              dying_hp;                                                 // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              oxygen;                                                   // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                active_weapon_slot;                                       // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                weapon_status;                                            // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_switching;                                             // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	int                                                alive_state;                                              // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                kill_count;                                               // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                assist_count;                                             // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                death_count;                                              // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Damages;                                                  // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           pawn_states;                                              // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               is_running;                                               // 0x00A8(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_aiming;                                                // 0x00A9(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_left_probe;                                            // 0x00AA(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_right_probe;                                           // 0x00AB(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_floating;                                              // 0x00AC(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_diving;                                                // 0x00AD(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_vehicle_probe;                                         // 0x00AE(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_in_vehicle;                                            // 0x00AF(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_firing;                                                // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_using_skill;                                           // 0x00B1(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00B2(0x0002) MISSED OFFSET
	int                                                using_skill_id;                                           // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                skill_phase_index;                                        // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_holding;                                               // 0x00BC(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_stun;                                                  // 0x00BD(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_pose_acting;                                           // 0x00BE(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_picking;                                               // 0x00BF(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_weapon_near_wall;                                      // 0x00C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00C1(0x0003) MISSED OFFSET
	int                                                body_state;                                               // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                location_state;                                           // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               has_smoke;                                                // 0x00CC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	int                                                vehicle_role;                                             // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                player_type;                                              // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               in_delivery_pool;                                         // 0x00D8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00D9(0x0003) MISSED OFFSET
	int                                                ai_level;                                                 // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_move_has_collision;                                    // 0x00E0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_lost_connection;                                       // 0x00E1(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x00E2(0x0002) MISSED OFFSET
	int                                                revival_count;                                            // 0x00E4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              rating_score;                                             // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              real_hidden_score;                                        // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                zone_id;                                                  // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_invincible;                                            // 0x00F4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x00F5(0x0003) MISSED OFFSET
	TArray<struct FAIAttribute>                        Attributes;                                               // 0x00F8(0x000C) (ZeroConstructor)
	int                                                ai_kill_count;                                            // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               in_shoveling;                                             // 0x0108(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0109(0x0003) MISSED OFFSET
	uint32_t                                           parachute_state;                                          // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           plane_id;                                                 // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                parallel_world_id;                                        // 0x0114(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_be_spectated;                                          // 0x0118(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0119(0x0003) MISSED OFFSET
	int                                                gender;                                                   // 0x011C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           related_id;                                               // 0x0120(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               has_gone;                                                 // 0x0124(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               in_afk;                                                   // 0x0125(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x0126(0x0002) MISSED OFFSET
	int                                                emote_id;                                                 // 0x0128(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               can_parachute_jump;                                       // 0x012C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x012D(0x0003) MISSED OFFSET
};

// ScriptStruct AI.AIHeardSound
// 0x000C
struct FAIHeardSound
{
	TArray<struct FSoundState>                         heard_sound;                                              // 0x0000(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.AIDamageSources
// 0x0024 (0x0030 - 0x000C)
struct FAIDamageSources : public FAIStateInfoBase
{
	TArray<struct FAIStateXYZ>                         damage_source;                                            // 0x000C(0x000C) (ZeroConstructor)
	TArray<int>                                        damage_type;                                              // 0x0018(0x000C) (ZeroConstructor)
	TArray<int>                                        damage_weapon_type;                                       // 0x0024(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.AIDamageInfo
// 0x0018 (0x0024 - 0x000C)
struct FAIDamageInfo : public FAIStateInfoBase
{
	uint32_t                                           PlayerKey;                                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                damage_type;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                damage_weapon_type;                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           damage_part;                                              // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              damage_before_cal_armor;                                  // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.AIPlayerInteractInfo
// 0x0030 (0x003C - 0x000C)
struct FAIPlayerInteractInfo : public FAIStateInfoBase
{
	TArray<struct FAIDamageInfo>                       active_damage;                                            // 0x000C(0x000C) (ZeroConstructor)
	TArray<struct FAIDamageInfo>                       passive_damage;                                           // 0x0018(0x000C) (ZeroConstructor)
	TArray<uint32_t>                                   kill_list;                                                // 0x0024(0x000C) (ZeroConstructor)
	TArray<uint32_t>                                   knock_down_list;                                          // 0x0030(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.CameraState
// 0x0048 (0x0054 - 0x000C)
struct FCameraState : public FAIStateInfoBase
{
	struct FAIStateXYZ                                 Position;                                                 // 0x000C(0x0018)
	struct FAIStateXYZ                                 Rotation;                                                 // 0x0024(0x0018)
	struct FAIStateXYZ                                 view_position;                                            // 0x003C(0x0018)
};

// ScriptStruct AI.AIWeaponStateInfo
// 0x0028 (0x0040 - 0x0018)
struct FAIWeaponStateInfo : public FUniqueStateInfo
{
	int                                                slot_id;                                                  // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Category;                                                 // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Bullet;                                                   // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                bullet_in_backpak;                                        // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              remain_reloading;                                         // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        attachments;                                              // 0x0030(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.AIPlayerWeapon
// 0x000C
struct FAIPlayerWeapon
{
	TArray<struct FAIWeaponStateInfo>                  player_weapon;                                            // 0x0000(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.AIBackpackItem
// 0x0010 (0x0028 - 0x0018)
struct FAIBackpackItem : public FUniqueStateInfo
{
	int                                                Category;                                                 // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct AI.AIPlayerBackpack
// 0x000C
struct FAIPlayerBackpack
{
	TArray<struct FAIBackpackItem>                     backpack_item;                                            // 0x0000(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.AIGameModePlayerWeaponSchemeSlotInfo
// 0x0018 (0x0024 - 0x000C)
struct FAIGameModePlayerWeaponSchemeSlotInfo : public FAIStateInfoBase
{
	int                                                slot_index;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                item_id;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        attach_list;                                              // 0x0018(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.AIGameModePlayerWeaponSchemeInfo
// 0x0014 (0x0020 - 0x000C)
struct FAIGameModePlayerWeaponSchemeInfo : public FAIStateInfoBase
{
	int                                                scheme_index;                                             // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_locked;                                                // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	TArray<struct FAIGameModePlayerWeaponSchemeSlotInfo> slot_list;                                                // 0x0014(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.DeathMatchAIPlayerEquipment
// 0x0010 (0x001C - 0x000C)
struct FDeathMatchAIPlayerEquipment : public FAIStateInfoBase
{
	TArray<struct FAIGameModePlayerWeaponSchemeInfo>   weapon_scheme_info_list;                                  // 0x000C(0x000C) (ZeroConstructor)
	int                                                cur_weapon_scheme_index;                                  // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.AIEquipmentInfo
// 0x0010 (0x0028 - 0x0018)
struct FAIEquipmentInfo : public FUniqueStateInfo
{
	int                                                Category;                                                 // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Durability;                                               // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct AI.AIPlayerEquipment
// 0x000C
struct FAIPlayerEquipment
{
	TArray<struct FAIEquipmentInfo>                    equipment_item;                                           // 0x0000(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.DiffStateInfoBase
// 0x000C
struct FDiffStateInfoBase
{
	TArray<struct FString>                             IgnoreNames;                                              // 0x0000(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.ProgressBarState
// 0x000C (0x0018 - 0x000C)
struct FProgressBarState : public FDiffStateInfoBase
{
	int                                                Type;                                                     // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              remain_time;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           targetid;                                                 // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.AINearbyPlayer
// 0x0148 (0x0160 - 0x0018)
struct FAINearbyPlayer : public FUniqueStateInfo
{
	struct FAIPlayerState                              State;                                                    // 0x0018(0x0130)
	struct FAIPlayerWeapon                             Weapon;                                                   // 0x0148(0x000C)
	struct FAIPlayerEquipment                          equipment;                                                // 0x0154(0x000C)
};

// ScriptStruct AI.ItemStateData
// 0x0038 (0x0050 - 0x0018)
struct FItemStateData : public FUniqueStateInfo
{
	int                                                Type;                                                     // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Category;                                                 // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                UID;                                                      // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Durability;                                               // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x002C(0x0018)
	uint32_t                                           player_id;                                                // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           unique_id;                                                // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.ObstacleState
// 0x0048 (0x0060 - 0x0018)
struct FObstacleState : public FUniqueStateInfo
{
	uint32_t                                           ID;                                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Category;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HP;                                                       // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              max_hp;                                                   // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x002C(0x0018)
	struct FAIStateXYZ                                 Rotation;                                                 // 0x0044(0x0018)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.AINearbyThrown
// 0x0030 (0x0048 - 0x0018)
struct FAINearbyThrown : public FUniqueStateInfo
{
	int                                                Type;                                                     // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x001C(0x0018)
	float                                              remain_time;                                              // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              explode_time;                                             // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_own;                                                   // 0x003C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_held;                                                  // 0x003D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003E(0x0002) MISSED OFFSET
	uint32_t                                           actorid;                                                  // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           sourceid;                                                 // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.DoorState
// 0x0038 (0x0050 - 0x0018)
struct FDoorState : public FUniqueStateInfo
{
	struct FAIStateXYZ                                 Position;                                                 // 0x0018(0x0018)
	int                                                State;                                                    // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           ID;                                                       // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Rotation;                                                 // 0x0038(0x0018)
};

// ScriptStruct AI.AIPlayerHitInfo
// 0x0014 (0x0020 - 0x000C)
struct FAIPlayerHitInfo : public FAIStateInfoBase
{
	int                                                fire_count;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                hit_count;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                hit_head_count;                                           // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                hit_count_filter;                                         // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                hit_head_filter;                                          // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.SafetyAreaState
// 0x0048 (0x0054 - 0x000C)
struct FSafetyAreaState : public FAIStateInfoBase
{
	int                                                State;                                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Center;                                                   // 0x0010(0x0018)
	float                                              Radius;                                                   // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 next_center;                                              // 0x002C(0x0018)
	float                                              next_radius;                                              // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Time;                                                     // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                total_time;                                               // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                circle_index;                                             // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.RedZoneState
// 0x0024 (0x0030 - 0x000C)
struct FRedZoneState : public FAIStateInfoBase
{
	struct FAIStateXYZ                                 Center;                                                   // 0x000C(0x0018)
	float                                              Radius;                                                   // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              remain_time;                                              // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              start_time;                                               // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.TeamScoreData
// 0x0008 (0x0020 - 0x0018)
struct FTeamScoreData : public FUniqueStateInfo
{
	int                                                team_id;                                                  // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                team_score;                                               // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.AIGameState
// 0x0044 (0x0050 - 0x000C)
struct FAIGameState : public FAIStateInfoBase
{
	bool                                               is_over;                                                  // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	int                                                alive_player_count;                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Stage;                                                    // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           mode_map;                                                 // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           mode_type;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     game_ds_version;                                          // 0x0020(0x000C) (ZeroConstructor)
	int                                                zone_id;                                                  // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           left_time;                                                // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           stage_time;                                               // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FTeamScoreData>                      team_score_datas;                                         // 0x0040(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.VehicleDamageInfo
// 0x0014 (0x0020 - 0x000C)
struct FVehicleDamageInfo : public FAIStateInfoBase
{
	uint32_t                                           vehicle_id;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                damage_type;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_kill;                                                  // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct AI.VehicleState
// 0x00D8 (0x00F0 - 0x0018)
struct FVehicleState : public FUniqueStateInfo
{
	uint32_t                                           ID;                                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x001C(0x0018)
	struct FAIStateXYZ                                 Rotation;                                                 // 0x0034(0x0018)
	float                                              HP;                                                       // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              gas;                                                      // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Speed;                                                    // 0x0054(0x0018)
	uint32_t                                           damaged_num;                                              // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           Category;                                                 // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_reverse;                                               // 0x0074(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               has_player;                                               // 0x0075(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_full;                                                  // 0x0076(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0077(0x0001) MISSED OFFSET
	struct FCameraState                                Camera;                                                   // 0x0078(0x0054)
	int                                                location_state;                                           // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<float>                                      wheels_hp;                                                // 0x00D0(0x000C) (ZeroConstructor)
	TArray<struct FVehicleDamageInfo>                  damage_info;                                              // 0x00DC(0x000C) (ZeroConstructor)
	bool                                               is_has_collision;                                         // 0x00E8(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_using_horn;                                            // 0x00E9(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_attached;                                              // 0x00EA(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x00EB(0x0001) MISSED OFFSET
	uint32_t                                           born_island_owner_id;                                     // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.AIBulletHoles
// 0x0018 (0x0024 - 0x000C)
struct FAIBulletHoles : public FAIStateInfoBase
{
	TArray<struct FAIStateXYZ>                         hole_pos;                                                 // 0x000C(0x000C) (ZeroConstructor)
	TArray<struct FAIStateXYZ>                         hole_source_pos;                                          // 0x0018(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.AIRecipients
// 0x0028 (0x0034 - 0x000C)
struct FAIRecipients : public FAIStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           team_id;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x0014(0x0018)
	float                                              HP;                                                       // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           Type;                                                     // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.SpecialZoneState
// 0x0058 (0x0070 - 0x0018)
struct FSpecialZoneState : public FUniqueStateInfo
{
	uint32_t                                           ID;                                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Center;                                                   // 0x001C(0x0018)
	float                                              Radius;                                                   // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           Type;                                                     // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                custom_state;                                             // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x0040(0x0018)
	struct FAIStateXYZ                                 Rotation;                                                 // 0x0058(0x0018)
};

// ScriptStruct AI.DynamicItem
// 0x0040 (0x0058 - 0x0018)
struct FDynamicItem : public FUniqueStateInfo
{
	int                                                Category;                                                 // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           ID;                                                       // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Center;                                                   // 0x0020(0x0018)
	struct FAIStateXYZ                                 Rotation;                                                 // 0x0038(0x0018)
	float                                              Durability;                                               // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct AI.AIStateConfig
// 0x0008 (0x0014 - 0x000C)
struct FAIStateConfig : public FAIStateInfoBase
{
	int                                                Level;                                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Style;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.MonsterState
// 0x0060 (0x0078 - 0x0018)
struct FMonsterState : public FUniqueStateInfo
{
	uint32_t                                           ID;                                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Category;                                                 // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x0020(0x0018)
	struct FAIStateXYZ                                 Rotation;                                                 // 0x0038(0x0018)
	struct FAIStateXYZ                                 Speed;                                                    // 0x0050(0x0018)
	float                                              HP;                                                       // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              hp_max;                                                   // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                using_skill_id;                                           // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
};

// ScriptStruct AI.ChatMsgInfo
// 0x0028 (0x0034 - 0x000C)
struct FChatMsgInfo : public FAIStateInfoBase
{
	struct FString                                     msg_content;                                              // 0x000C(0x000C) (ZeroConstructor)
	uint32_t                                           item_id;                                                  // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 hit_position;                                             // 0x001C(0x0018)
};

// ScriptStruct AI.SignMsgInfo
// 0x0020 (0x002C - 0x000C)
struct FSignMsgInfo : public FAIStateInfoBase
{
	struct FAIStateXYZ                                 hit_pos;                                                  // 0x000C(0x0018)
	uint32_t                                           item_id;                                                  // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           msg_type;                                                 // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.MapMarkInfo
// 0x0024 (0x0030 - 0x000C)
struct FMapMarkInfo : public FAIStateInfoBase
{
	struct FAIStateXYZ                                 mapmark_loc;                                              // 0x000C(0x0018)
	TArray<struct FAIStateXYZ>                         mapmultimark_list;                                        // 0x0024(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.AIStateInfo
// 0x0588 (0x05A0 - 0x0018)
struct FAIStateInfo : public FUniqueStateInfo
{
	struct FAIPlayerState                              State;                                                    // 0x0018(0x0130)
	struct FAIHeardSound                               Sound;                                                    // 0x0148(0x000C)
	struct FAIDamageSources                            damage_sources;                                           // 0x0154(0x0030)
	struct FAIPlayerInteractInfo                       player_interact_info;                                     // 0x0184(0x003C)
	struct FCameraState                                Camera;                                                   // 0x01C0(0x0054)
	struct FAIPlayerWeapon                             Weapon;                                                   // 0x0214(0x000C)
	struct FAIPlayerBackpack                           BackPack;                                                 // 0x0220(0x000C)
	struct FDeathMatchAIPlayerEquipment                deathmatch_backpack;                                      // 0x022C(0x001C)
	struct FAIPlayerEquipment                          equipment;                                                // 0x0248(0x000C)
	struct FProgressBarState                           progress_bar;                                             // 0x0254(0x0018)
	TArray<struct FAINearbyPlayer>                     nearby_player;                                            // 0x026C(0x000C) (ZeroConstructor)
	TArray<struct FItemStateData>                      nearby_item;                                              // 0x0278(0x000C) (ZeroConstructor)
	TArray<struct FObstacleState>                      nearby_obstacle;                                          // 0x0284(0x000C) (ZeroConstructor)
	TArray<struct FAINearbyThrown>                     nearby_thrown;                                            // 0x0290(0x000C) (ZeroConstructor)
	TArray<struct FDoorState>                          nearby_door;                                              // 0x029C(0x000C) (ZeroConstructor)
	struct FAIPlayerHitInfo                            player_hit_info;                                          // 0x02A8(0x0020)
	struct FSafetyAreaState                            safety_area;                                              // 0x02C8(0x0054)
	struct FRedZoneState                               red_zone;                                                 // 0x031C(0x0030)
	unsigned char                                      UnknownData00[0x4];                                       // 0x034C(0x0004) MISSED OFFSET
	struct FAIGameState                                Game;                                                     // 0x0350(0x0050)
	uint32_t                                           Key;                                                      // 0x03A0(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           deliver_target_id;                                        // 0x03A4(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVehicleState                               vehicle_state;                                            // 0x03A8(0x00F0)
	TArray<struct FVehicleState>                       nearby_vehicles;                                          // 0x0498(0x000C) (ZeroConstructor)
	struct FAIBulletHoles                              bullet_holes;                                             // 0x04A4(0x0024)
	TArray<struct FAIRecipients>                       recipients;                                               // 0x04C8(0x000C) (ZeroConstructor)
	TArray<struct FSpecialZoneState>                   special_zones;                                            // 0x04D4(0x000C) (ZeroConstructor)
	TArray<struct FDynamicItem>                        dynamic_items;                                            // 0x04E0(0x000C) (ZeroConstructor)
	uint32_t                                           ai_style;                                                 // 0x04EC(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateConfig                              Config;                                                   // 0x04F0(0x0014)
	TArray<struct FMonsterState>                       monster_states;                                           // 0x0504(0x000C) (ZeroConstructor)
	struct FChatMsgInfo                                chatmsg_info;                                             // 0x0510(0x0034)
	struct FSignMsgInfo                                signmsg_info;                                             // 0x0544(0x002C)
	struct FMapMarkInfo                                mapmark_info;                                             // 0x0570(0x0030)
};

// ScriptStruct AI.DiffStateInfoInt32
// 0x0004
struct FDiffStateInfoInt32
{
	int                                                Value;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.DiffStateInfoFloat
// 0x0004
struct FDiffStateInfoFloat
{
	float                                              Value;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.DiffStateInfoVector
// 0x000C
struct FDiffStateInfoVector
{
	struct FDiffStateInfoFloat                         X;                                                        // 0x0000(0x0004)
	struct FDiffStateInfoFloat                         Y;                                                        // 0x0004(0x0004)
	struct FDiffStateInfoFloat                         Z;                                                        // 0x0008(0x0004)
};

// ScriptStruct AI.DiffStateInfoBool
// 0x0001
struct FDiffStateInfoBool
{
	bool                                               Value;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.DiffAttribute
// 0x0008 (0x0014 - 0x000C)
struct FDiffAttribute : public FDiffStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffStateInfoFloat                         Value;                                                    // 0x0010(0x0004)
};

// ScriptStruct AI.DiffAIAttributes
// 0x0018 (0x0024 - 0x000C)
struct FDiffAIAttributes : public FDiffStateInfoBase
{
	TArray<struct FDiffAttribute>                      attribute_state;                                          // 0x000C(0x000C) (ZeroConstructor)
	TArray<uint32_t>                                   item_state;                                               // 0x0018(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.DiffStateInfoUInt64
// 0x0008
struct FDiffStateInfoUInt64
{
	uint64_t                                           Value;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.DiffStateInfoUInt32
// 0x0004
struct FDiffStateInfoUInt32
{
	uint32_t                                           Value;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.DiffAIPlayerState
// 0x00D4 (0x00E0 - 0x000C)
struct FDiffAIPlayerState : public FDiffStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffStateInfoInt32                         actor_id;                                                 // 0x0010(0x0004)
	struct FDiffStateInfoInt32                         team_id;                                                  // 0x0014(0x0004)
	struct FDiffStateInfoVector                        Position;                                                 // 0x0018(0x000C)
	struct FDiffStateInfoVector                        Rotation;                                                 // 0x0024(0x000C)
	struct FDiffStateInfoVector                        Speed;                                                    // 0x0030(0x000C)
	struct FDiffStateInfoFloat                         HP;                                                       // 0x003C(0x0004)
	struct FDiffStateInfoFloat                         Energy;                                                   // 0x0040(0x0004)
	struct FDiffStateInfoFloat                         dying_hp;                                                 // 0x0044(0x0004)
	struct FDiffStateInfoFloat                         oxygen;                                                   // 0x0048(0x0004)
	struct FDiffStateInfoInt32                         active_weapon_slot;                                       // 0x004C(0x0004)
	struct FDiffStateInfoInt32                         weapon_status;                                            // 0x0050(0x0004)
	struct FDiffStateInfoBool                          is_switching;                                             // 0x0054(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	struct FDiffStateInfoInt32                         alive_state;                                              // 0x0058(0x0004)
	struct FDiffStateInfoInt32                         kill_count;                                               // 0x005C(0x0004)
	struct FDiffStateInfoInt32                         Damages;                                                  // 0x0060(0x0004)
	struct FDiffStateInfoBool                          is_running;                                               // 0x0064(0x0001)
	struct FDiffStateInfoBool                          is_aiming;                                                // 0x0065(0x0001)
	struct FDiffStateInfoBool                          is_left_probe;                                            // 0x0066(0x0001)
	struct FDiffStateInfoBool                          is_right_probe;                                           // 0x0067(0x0001)
	struct FDiffStateInfoBool                          is_floating;                                              // 0x0068(0x0001)
	struct FDiffStateInfoBool                          is_diving;                                                // 0x0069(0x0001)
	struct FDiffStateInfoBool                          is_vehicle_probe;                                         // 0x006A(0x0001)
	struct FDiffStateInfoBool                          is_in_vehicle;                                            // 0x006B(0x0001)
	struct FDiffStateInfoBool                          is_firing;                                                // 0x006C(0x0001)
	struct FDiffStateInfoBool                          is_using_skill;                                           // 0x006D(0x0001)
	struct FDiffStateInfoBool                          is_holding;                                               // 0x006E(0x0001)
	struct FDiffStateInfoBool                          is_stun;                                                  // 0x006F(0x0001)
	struct FDiffStateInfoBool                          is_pose_acting;                                           // 0x0070(0x0001)
	struct FDiffStateInfoBool                          is_picking;                                               // 0x0071(0x0001)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0072(0x0002) MISSED OFFSET
	struct FDiffStateInfoInt32                         body_state;                                               // 0x0074(0x0004)
	struct FDiffStateInfoInt32                         location_state;                                           // 0x0078(0x0004)
	struct FDiffStateInfoBool                          has_smoke;                                                // 0x007C(0x0001)
	unsigned char                                      UnknownData02[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
	struct FDiffStateInfoInt32                         vehicle_role;                                             // 0x0080(0x0004)
	struct FDiffStateInfoInt32                         player_type;                                              // 0x0084(0x0004)
	struct FDiffStateInfoInt32                         revival_count;                                            // 0x0088(0x0004)
	struct FDiffAIAttributes                           Attributes;                                               // 0x008C(0x0024)
	struct FDiffStateInfoInt32                         using_skill_id;                                           // 0x00B0(0x0004)
	struct FDiffStateInfoBool                          is_lost_connection;                                       // 0x00B4(0x0001)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00B5(0x0003) MISSED OFFSET
	struct FDiffStateInfoInt32                         ai_kill_count;                                            // 0x00B8(0x0004)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	struct FDiffStateInfoUInt64                        pawn_states;                                              // 0x00C0(0x0008)
	struct FDiffStateInfoInt32                         assist_count;                                             // 0x00C8(0x0004)
	struct FDiffStateInfoBool                          is_be_spectated;                                          // 0x00CC(0x0001)
	unsigned char                                      UnknownData05[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	struct FDiffStateInfoInt32                         parallel_world_id;                                        // 0x00D0(0x0004)
	struct FDiffStateInfoUInt32                        related_id;                                               // 0x00D4(0x0004)
	struct FDiffStateInfoBool                          has_gone;                                                 // 0x00D8(0x0001)
	struct FDiffStateInfoBool                          in_afk;                                                   // 0x00D9(0x0001)
	unsigned char                                      UnknownData06[0x2];                                       // 0x00DA(0x0002) MISSED OFFSET
	struct FDiffStateInfoInt32                         emote_id;                                                 // 0x00DC(0x0004)
};

// ScriptStruct AI.DiffCameraState
// 0x0024 (0x0030 - 0x000C)
struct FDiffCameraState : public FDiffStateInfoBase
{
	struct FDiffStateInfoVector                        Position;                                                 // 0x000C(0x000C)
	struct FDiffStateInfoVector                        Rotation;                                                 // 0x0018(0x000C)
	struct FDiffStateInfoVector                        view_position;                                            // 0x0024(0x000C)
};

// ScriptStruct AI.DiffAIWeaponStateInfo
// 0x0020 (0x002C - 0x000C)
struct FDiffAIWeaponStateInfo : public FDiffStateInfoBase
{
	uint32_t                                           slot_id;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffStateInfoInt32                         Category;                                                 // 0x0010(0x0004)
	struct FDiffStateInfoInt32                         Type;                                                     // 0x0014(0x0004)
	struct FDiffStateInfoInt32                         Bullet;                                                   // 0x0018(0x0004)
	struct FDiffStateInfoFloat                         remain_reloading;                                         // 0x001C(0x0004)
	TArray<int>                                        attachments;                                              // 0x0020(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIPlayerWeapon
// 0x0018 (0x0024 - 0x000C)
struct FDiffAIPlayerWeapon : public FDiffStateInfoBase
{
	TArray<struct FDiffAIWeaponStateInfo>              player_weapon;                                            // 0x000C(0x000C) (ZeroConstructor)
	TArray<uint32_t>                                   item_state;                                               // 0x0018(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIBackpackItem
// 0x000C (0x0018 - 0x000C)
struct FDiffAIBackpackItem : public FDiffStateInfoBase
{
	struct FDiffStateInfoInt32                         Category;                                                 // 0x000C(0x0004)
	uint32_t                                           ID;                                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffStateInfoUInt32                        Count;                                                    // 0x0014(0x0004)
};

// ScriptStruct AI.DiffPlayerBackpack
// 0x0018 (0x0024 - 0x000C)
struct FDiffPlayerBackpack : public FDiffStateInfoBase
{
	TArray<struct FDiffAIBackpackItem>                 backpack_item;                                            // 0x000C(0x000C) (ZeroConstructor)
	TArray<uint32_t>                                   item_state;                                               // 0x0018(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIEquipmentInfo
// 0x000C (0x0018 - 0x000C)
struct FDiffAIEquipmentInfo : public FDiffStateInfoBase
{
	struct FDiffStateInfoInt32                         Category;                                                 // 0x000C(0x0004)
	uint32_t                                           ID;                                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffStateInfoFloat                         Durability;                                               // 0x0014(0x0004)
};

// ScriptStruct AI.DiffAIPlayerEquipment
// 0x0018 (0x0024 - 0x000C)
struct FDiffAIPlayerEquipment : public FDiffStateInfoBase
{
	TArray<struct FDiffAIEquipmentInfo>                equipment_item;                                           // 0x000C(0x000C) (ZeroConstructor)
	TArray<uint32_t>                                   item_state;                                               // 0x0018(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.DiffProgressBarState
// 0x0008 (0x0014 - 0x000C)
struct FDiffProgressBarState : public FDiffStateInfoBase
{
	struct FDiffStateInfoInt32                         Type;                                                     // 0x000C(0x0004)
	struct FDiffStateInfoFloat                         remain_time;                                              // 0x0010(0x0004)
};

// ScriptStruct AI.DiffAINearbyPlayer
// 0x012C (0x0138 - 0x000C)
struct FDiffAINearbyPlayer : public FDiffStateInfoBase
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FDiffAIPlayerState                          State;                                                    // 0x0010(0x00E0)
	struct FDiffAIPlayerWeapon                         Weapon;                                                   // 0x00F0(0x0024)
	struct FDiffAIPlayerEquipment                      equipment;                                                // 0x0114(0x0024)
};

// ScriptStruct AI.DiffAINearbyPlayers
// 0x0018 (0x0024 - 0x000C)
struct FDiffAINearbyPlayers : public FDiffStateInfoBase
{
	TArray<struct FDiffAINearbyPlayer>                 Players;                                                  // 0x000C(0x000C) (ZeroConstructor)
	TArray<uint32_t>                                   item_state;                                               // 0x0018(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.DiffItemStateData
// 0x002C (0x0038 - 0x000C)
struct FDiffItemStateData : public FDiffStateInfoBase
{
	struct FDiffStateInfoInt32                         Type;                                                     // 0x000C(0x0004)
	struct FDiffStateInfoInt32                         Category;                                                 // 0x0010(0x0004)
	struct FDiffStateInfoUInt32                        ID;                                                       // 0x0014(0x0004)
	int                                                UID;                                                      // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffStateInfoVector                        Position;                                                 // 0x001C(0x000C)
	struct FDiffStateInfoFloat                         Durability;                                               // 0x0028(0x0004)
	struct FDiffStateInfoUInt32                        player_id;                                                // 0x002C(0x0004)
	struct FDiffStateInfoUInt64                        unique_id;                                                // 0x0030(0x0008)
};

// ScriptStruct AI.DiffItemStateDatas
// 0x0018 (0x0024 - 0x000C)
struct FDiffItemStateDatas : public FDiffStateInfoBase
{
	TArray<struct FDiffItemStateData>                  Items;                                                    // 0x000C(0x000C) (ZeroConstructor)
	TArray<uint32_t>                                   item_state;                                               // 0x0018(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.DiffSafetyAreaState
// 0x0030 (0x003C - 0x000C)
struct FDiffSafetyAreaState : public FDiffStateInfoBase
{
	struct FDiffStateInfoInt32                         State;                                                    // 0x000C(0x0004)
	struct FDiffStateInfoVector                        Center;                                                   // 0x0010(0x000C)
	struct FDiffStateInfoFloat                         Radius;                                                   // 0x001C(0x0004)
	struct FDiffStateInfoVector                        next_center;                                              // 0x0020(0x000C)
	struct FDiffStateInfoFloat                         next_radius;                                              // 0x002C(0x0004)
	struct FDiffStateInfoInt32                         Time;                                                     // 0x0030(0x0004)
	struct FDiffStateInfoInt32                         total_time;                                               // 0x0034(0x0004)
	struct FDiffStateInfoInt32                         circle_index;                                             // 0x0038(0x0004)
};

// ScriptStruct AI.DiffAIGameState
// 0x0034 (0x0040 - 0x000C)
struct FDiffAIGameState : public FDiffStateInfoBase
{
	struct FDiffStateInfoBool                          is_over;                                                  // 0x000C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FDiffStateInfoInt32                         alive_player_count;                                       // 0x0010(0x0004)
	struct FDiffStateInfoInt32                         Stage;                                                    // 0x0014(0x0004)
	struct FDiffStateInfoUInt32                        mode_type;                                                // 0x0018(0x0004)
	struct FDiffStateInfoUInt32                        mode_map;                                                 // 0x001C(0x0004)
	struct FString                                     game_ds_version;                                          // 0x0020(0x000C) (ZeroConstructor)
	struct FDiffStateInfoInt32                         zone_id;                                                  // 0x002C(0x0004)
	struct FDiffStateInfoUInt64                        left_time;                                                // 0x0030(0x0008)
	struct FDiffStateInfoUInt64                        stage_time;                                               // 0x0038(0x0008)
};

// ScriptStruct AI.DiffRedZoneState
// 0x0018 (0x0024 - 0x000C)
struct FDiffRedZoneState : public FDiffStateInfoBase
{
	struct FDiffStateInfoVector                        Center;                                                   // 0x000C(0x000C)
	struct FDiffStateInfoFloat                         Radius;                                                   // 0x0018(0x0004)
	struct FDiffStateInfoFloat                         remain_time;                                              // 0x001C(0x0004)
	struct FDiffStateInfoFloat                         start_time;                                               // 0x0020(0x0004)
};

// ScriptStruct AI.DiffVehicleState
// 0x0074 (0x0080 - 0x000C)
struct FDiffVehicleState : public FDiffStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffStateInfoVector                        Position;                                                 // 0x0010(0x000C)
	struct FDiffStateInfoVector                        Rotation;                                                 // 0x001C(0x000C)
	struct FDiffStateInfoFloat                         HP;                                                       // 0x0028(0x0004)
	struct FDiffStateInfoFloat                         gas;                                                      // 0x002C(0x0004)
	struct FDiffStateInfoVector                        Speed;                                                    // 0x0030(0x000C)
	struct FDiffStateInfoUInt32                        damaged_num;                                              // 0x003C(0x0004)
	struct FDiffStateInfoUInt32                        Category;                                                 // 0x0040(0x0004)
	struct FDiffStateInfoBool                          is_reverse;                                               // 0x0044(0x0001)
	struct FDiffStateInfoBool                          has_player;                                               // 0x0045(0x0001)
	struct FDiffStateInfoBool                          is_full;                                                  // 0x0046(0x0001)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0047(0x0001) MISSED OFFSET
	struct FDiffCameraState                            Camera;                                                   // 0x0048(0x0030)
	struct FDiffStateInfoInt32                         location_state;                                           // 0x0078(0x0004)
	struct FDiffStateInfoBool                          is_attached;                                              // 0x007C(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
};

// ScriptStruct AI.DiffVehicleStates
// 0x0018 (0x0024 - 0x000C)
struct FDiffVehicleStates : public FDiffStateInfoBase
{
	TArray<struct FDiffVehicleState>                   vehicle_states;                                           // 0x000C(0x000C) (ZeroConstructor)
	TArray<uint32_t>                                   item_state;                                               // 0x0018(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.DiffSpecialZoneState
// 0x0034 (0x0040 - 0x000C)
struct FDiffSpecialZoneState : public FDiffStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffStateInfoVector                        Center;                                                   // 0x0010(0x000C)
	struct FDiffStateInfoFloat                         Radius;                                                   // 0x001C(0x0004)
	struct FDiffStateInfoUInt32                        Type;                                                     // 0x0020(0x0004)
	struct FDiffStateInfoVector                        Position;                                                 // 0x0024(0x000C)
	struct FDiffStateInfoVector                        Rotation;                                                 // 0x0030(0x000C)
	struct FDiffStateInfoInt32                         custom_state;                                             // 0x003C(0x0004)
};

// ScriptStruct AI.DiffSpecialZone
// 0x0018 (0x0024 - 0x000C)
struct FDiffSpecialZone : public FDiffStateInfoBase
{
	TArray<struct FDiffSpecialZoneState>               State;                                                    // 0x000C(0x000C) (ZeroConstructor)
	TArray<uint32_t>                                   item_state;                                               // 0x0018(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.DiffDynamicItem
// 0x0024 (0x0030 - 0x000C)
struct FDiffDynamicItem : public FDiffStateInfoBase
{
	struct FDiffStateInfoInt32                         Category;                                                 // 0x000C(0x0004)
	uint32_t                                           ID;                                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffStateInfoVector                        Center;                                                   // 0x0014(0x000C)
	struct FDiffStateInfoVector                        Rotation;                                                 // 0x0020(0x000C)
	struct FDiffStateInfoFloat                         Durability;                                               // 0x002C(0x0004)
};

// ScriptStruct AI.DiffDynamicItemStates
// 0x0018 (0x0024 - 0x000C)
struct FDiffDynamicItemStates : public FDiffStateInfoBase
{
	TArray<struct FDiffDynamicItem>                    dynamic_items;                                            // 0x000C(0x000C) (ZeroConstructor)
	TArray<uint32_t>                                   item_state;                                               // 0x0018(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIConfig
// 0x0008
struct FDiffAIConfig
{
	struct FDiffStateInfoInt32                         Level;                                                    // 0x0000(0x0004)
	struct FDiffStateInfoInt32                         Style;                                                    // 0x0004(0x0004)
};

// ScriptStruct AI.DiffMonsterState
// 0x0038 (0x0044 - 0x000C)
struct FDiffMonsterState : public FDiffStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffStateInfoUInt32                        Category;                                                 // 0x0010(0x0004)
	struct FDiffStateInfoVector                        Position;                                                 // 0x0014(0x000C)
	struct FDiffStateInfoVector                        Rotation;                                                 // 0x0020(0x000C)
	struct FDiffStateInfoVector                        Speed;                                                    // 0x002C(0x000C)
	struct FDiffStateInfoFloat                         HP;                                                       // 0x0038(0x0004)
	struct FDiffStateInfoFloat                         hp_max;                                                   // 0x003C(0x0004)
	struct FDiffStateInfoInt32                         using_skill_id;                                           // 0x0040(0x0004)
};

// ScriptStruct AI.DiffMonsterStates
// 0x0018 (0x0024 - 0x000C)
struct FDiffMonsterStates : public FDiffStateInfoBase
{
	TArray<struct FDiffMonsterState>                   States;                                                   // 0x000C(0x000C) (ZeroConstructor)
	TArray<uint32_t>                                   item_state;                                               // 0x0018(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIStateInfo
// 0x0494 (0x04A0 - 0x000C)
struct FDiffAIStateInfo : public FDiffStateInfoBase
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FDiffAIPlayerState                          State;                                                    // 0x0010(0x00E0)
	struct FAIHeardSound                               Sound;                                                    // 0x00F0(0x000C)
	struct FDiffCameraState                            Camera;                                                   // 0x00FC(0x0030)
	struct FDiffAIPlayerWeapon                         Weapon;                                                   // 0x012C(0x0024)
	struct FDiffPlayerBackpack                         BackPack;                                                 // 0x0150(0x0024)
	struct FDiffAIPlayerEquipment                      equipment;                                                // 0x0174(0x0024)
	struct FDiffProgressBarState                       progress_bar;                                             // 0x0198(0x0014)
	struct FDiffAINearbyPlayers                        nearby_player;                                            // 0x01AC(0x0024)
	struct FDiffItemStateDatas                         nearby_item;                                              // 0x01D0(0x0024)
	TArray<struct FObstacleState>                      nearby_obstacle;                                          // 0x01F4(0x000C) (ZeroConstructor)
	TArray<struct FAINearbyThrown>                     nearby_thrown;                                            // 0x0200(0x000C) (ZeroConstructor)
	struct FDiffSafetyAreaState                        safety_area;                                              // 0x020C(0x003C)
	struct FDiffAIGameState                            Game;                                                     // 0x0248(0x0040)
	TArray<struct FDoorState>                          nearby_door;                                              // 0x0288(0x000C) (ZeroConstructor)
	struct FDiffRedZoneState                           red_zone;                                                 // 0x0294(0x0024)
	struct FAIDamageSources                            damage_sources;                                           // 0x02B8(0x0030)
	uint32_t                                           Key;                                                      // 0x02E8(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FItemStateData>                      nearby_box_item;                                          // 0x02EC(0x000C) (ZeroConstructor)
	struct FDiffVehicleState                           vehicle_state;                                            // 0x02F8(0x0080)
	struct FDiffVehicleStates                          nearby_vehicles;                                          // 0x0378(0x0024)
	TArray<struct FAIRecipients>                       recipients;                                               // 0x039C(0x000C) (ZeroConstructor)
	struct FAIPlayerHitInfo                            player_hit_info;                                          // 0x03A8(0x0020)
	struct FAIBulletHoles                              bullet_holes;                                             // 0x03C8(0x0024)
	struct FDiffSpecialZone                            special_zone;                                             // 0x03EC(0x0024)
	struct FDiffDynamicItemStates                      dynamic_item_states;                                      // 0x0410(0x0024)
	uint32_t                                           ai_style;                                                 // 0x0434(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffAIConfig                               Config;                                                   // 0x0438(0x0008)
	struct FDiffMonsterStates                          monster_states;                                           // 0x0440(0x0024)
	struct FAIPlayerInteractInfo                       player_interact_info;                                     // 0x0464(0x003C)
};

// ScriptStruct AI.CacheNearbyItemState
// 0x001C
struct FCacheNearbyItemState
{
	TArray<struct FItemStateData>                      States;                                                   // 0x0000(0x000C) (ZeroConstructor)
	struct FVector                                     Position;                                                 // 0x000C(0x000C) (IsPlainOldData)
	bool                                               IsDirty;                                                  // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct AI.FlightInfo
// 0x0060 (0x006C - 0x000C)
struct FFlightInfo : public FAIStateInfoBase
{
	struct FAIStateXYZ                                 start_loc;                                                // 0x000C(0x0018)
	struct FAIStateXYZ                                 end_loc;                                                  // 0x0024(0x0018)
	struct FAIStateXYZ                                 can_jump_loc;                                             // 0x003C(0x0018)
	struct FAIStateXYZ                                 force_jump_loc;                                           // 0x0054(0x0018)
};

// ScriptStruct AI.AirDropBoxState
// 0x0020 (0x0038 - 0x0018)
struct FAirDropBoxState : public FUniqueStateInfo
{
	uint32_t                                           ID;                                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x0020(0x0018)
};

// ScriptStruct AI.PlaneInfo
// 0x0020 (0x0038 - 0x0018)
struct FPlaneInfo : public FUniqueStateInfo
{
	uint32_t                                           ID;                                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x0020(0x0018)
};

// ScriptStruct AI.GlobalGameState
// 0x0164 (0x0170 - 0x000C)
struct FGlobalGameState : public FAIStateInfoBase
{
	struct FFlightInfo                                 flight_info;                                              // 0x000C(0x006C)
	TArray<struct FAirDropBoxState>                    air_drop_box_states;                                      // 0x0078(0x000C) (ZeroConstructor)
	TArray<struct FSpecialZoneState>                   special_zones;                                            // 0x0084(0x000C) (ZeroConstructor)
	struct FAIGameState                                Game;                                                     // 0x0090(0x0050)
	struct FRedZoneState                               red_zone;                                                 // 0x00E0(0x0030)
	struct FSafetyAreaState                            safety_area;                                              // 0x0110(0x0054)
	TArray<struct FPlaneInfo>                          airplane_list;                                            // 0x0164(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.DiffAirDropBoxStatesGeneral
// 0x0018 (0x0024 - 0x000C)
struct FDiffAirDropBoxStatesGeneral : public FDiffStateInfoBase
{
	TArray<struct FAirDropBoxState>                    Values;                                                   // 0x000C(0x000C) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0018(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.DiffSpecialZoneGeneral
// 0x0018 (0x0024 - 0x000C)
struct FDiffSpecialZoneGeneral : public FDiffStateInfoBase
{
	TArray<struct FSpecialZoneState>                   Values;                                                   // 0x000C(0x000C) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0018(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.DiffGameScoreDatas
// 0x0018
struct FDiffGameScoreDatas
{
	TArray<struct FTeamScoreData>                      Values;                                                   // 0x0000(0x000C) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x000C(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIGameStateGeneral
// 0x0044 (0x0050 - 0x000C)
struct FDiffAIGameStateGeneral : public FDiffStateInfoBase
{
	bool                                               is_over;                                                  // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	int                                                alive_player_count;                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Stage;                                                    // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           mode_map;                                                 // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           mode_type;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     game_ds_version;                                          // 0x0020(0x000C) (ZeroConstructor)
	int                                                zone_id;                                                  // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           left_time;                                                // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FDiffGameScoreDatas                         team_score_datas;                                         // 0x0038(0x0018)
};

// ScriptStruct AI.DiffPlaneInfoGeneral
// 0x0018 (0x0024 - 0x000C)
struct FDiffPlaneInfoGeneral : public FDiffStateInfoBase
{
	TArray<struct FPlaneInfo>                          Values;                                                   // 0x000C(0x000C) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0018(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.DiffGlobalGameStateGeneral
// 0x01AC (0x01B8 - 0x000C)
struct FDiffGlobalGameStateGeneral : public FAIStateInfoBase
{
	struct FFlightInfo                                 flight_info;                                              // 0x000C(0x006C)
	struct FDiffAirDropBoxStatesGeneral                air_drop_box_states;                                      // 0x0078(0x0024)
	struct FDiffSpecialZoneGeneral                     special_zones;                                            // 0x009C(0x0024)
	struct FDiffAIGameStateGeneral                     Game;                                                     // 0x00C0(0x0050)
	struct FRedZoneState                               red_zone;                                                 // 0x0110(0x0030)
	struct FSafetyAreaState                            safety_area;                                              // 0x0140(0x0054)
	struct FDiffPlaneInfoGeneral                       airplane_list;                                            // 0x0194(0x0024)
};

// ScriptStruct AI.DiffFlightInfo
// 0x0030 (0x003C - 0x000C)
struct FDiffFlightInfo : public FDiffStateInfoBase
{
	struct FDiffStateInfoVector                        start_loc;                                                // 0x000C(0x000C)
	struct FDiffStateInfoVector                        end_loc;                                                  // 0x0018(0x000C)
	struct FDiffStateInfoVector                        can_jump_loc;                                             // 0x0024(0x000C)
	struct FDiffStateInfoVector                        force_jump_loc;                                           // 0x0030(0x000C)
};

// ScriptStruct AI.DiffAirDropBoxState
// 0x0014 (0x0020 - 0x000C)
struct FDiffAirDropBoxState : public FDiffStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffStateInfoInt32                         Type;                                                     // 0x0010(0x0004)
	struct FDiffStateInfoVector                        Position;                                                 // 0x0014(0x000C)
};

// ScriptStruct AI.DiffAirDropBoxStates
// 0x0018 (0x0024 - 0x000C)
struct FDiffAirDropBoxStates : public FDiffStateInfoBase
{
	TArray<struct FDiffAirDropBoxState>                States;                                                   // 0x000C(0x000C) (ZeroConstructor)
	TArray<uint32_t>                                   item_state;                                               // 0x0018(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.DiffGlobalGameState
// 0x0124 (0x0130 - 0x000C)
struct FDiffGlobalGameState : public FAIStateInfoBase
{
	struct FDiffFlightInfo                             flight_info;                                              // 0x000C(0x003C)
	struct FDiffAirDropBoxStates                       air_drop_box_states;                                      // 0x0048(0x0024)
	struct FDiffSpecialZone                            special_zones;                                            // 0x006C(0x0024)
	struct FDiffAIGameState                            Game;                                                     // 0x0090(0x0040)
	struct FDiffRedZoneState                           red_zone;                                                 // 0x00D0(0x0024)
	struct FDiffSafetyAreaState                        safety_area;                                              // 0x00F4(0x003C)
};

// ScriptStruct AI.DiffUniqueStateInfo
// 0x000C (0x0018 - 0x000C)
struct FDiffUniqueStateInfo : public FDiffStateInfoBase
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	uint64_t                                           diff_mark_id;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.DiffAIAttributesGeneral
// 0x0018 (0x0024 - 0x000C)
struct FDiffAIAttributesGeneral : public FDiffStateInfoBase
{
	TArray<struct FAIAttribute>                        Values;                                                   // 0x000C(0x000C) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0018(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIPlayerStateGeneral
// 0x013C (0x0148 - 0x000C)
struct FDiffAIPlayerStateGeneral : public FAIStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           unique_id;                                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                expect_delivery_num;                                      // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                remain_delivery_num;                                      // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           actor_id;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                team_id;                                                  // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x0028(0x0018)
	struct FAIStateXYZ                                 Rotation;                                                 // 0x0040(0x0018)
	struct FAIStateXYZ                                 Speed;                                                    // 0x0058(0x0018)
	float                                              HP;                                                       // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Energy;                                                   // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              dying_hp;                                                 // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              oxygen;                                                   // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                active_weapon_slot;                                       // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                weapon_status;                                            // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_switching;                                             // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	int                                                alive_state;                                              // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                kill_count;                                               // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                assist_count;                                             // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                death_count;                                              // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Damages;                                                  // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           pawn_states;                                              // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               is_running;                                               // 0x00A8(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_aiming;                                                // 0x00A9(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_left_probe;                                            // 0x00AA(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_right_probe;                                           // 0x00AB(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_floating;                                              // 0x00AC(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_diving;                                                // 0x00AD(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_vehicle_probe;                                         // 0x00AE(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_in_vehicle;                                            // 0x00AF(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_firing;                                                // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_using_skill;                                           // 0x00B1(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00B2(0x0002) MISSED OFFSET
	int                                                using_skill_id;                                           // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                skill_phase_index;                                        // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_holding;                                               // 0x00BC(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_stun;                                                  // 0x00BD(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_pose_acting;                                           // 0x00BE(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_picking;                                               // 0x00BF(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_weapon_near_wall;                                      // 0x00C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00C1(0x0003) MISSED OFFSET
	int                                                body_state;                                               // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                location_state;                                           // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               has_smoke;                                                // 0x00CC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	int                                                vehicle_role;                                             // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                player_type;                                              // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               in_delivery_pool;                                         // 0x00D8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00D9(0x0003) MISSED OFFSET
	int                                                ai_level;                                                 // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_move_has_collision;                                    // 0x00E0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_lost_connection;                                       // 0x00E1(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x00E2(0x0002) MISSED OFFSET
	int                                                revival_count;                                            // 0x00E4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              rating_score;                                             // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              real_hidden_score;                                        // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                zone_id;                                                  // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_invincible;                                            // 0x00F4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x00F5(0x0003) MISSED OFFSET
	struct FDiffAIAttributesGeneral                    Attributes;                                               // 0x00F8(0x0024)
	int                                                ai_kill_count;                                            // 0x011C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               in_shoveling;                                             // 0x0120(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0121(0x0003) MISSED OFFSET
	uint32_t                                           parachute_state;                                          // 0x0124(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           plane_id;                                                 // 0x0128(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                parallel_world_id;                                        // 0x012C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_be_spectated;                                          // 0x0130(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0131(0x0003) MISSED OFFSET
	int                                                gender;                                                   // 0x0134(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           related_id;                                               // 0x0138(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               has_gone;                                                 // 0x013C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               in_afk;                                                   // 0x013D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x013E(0x0002) MISSED OFFSET
	int                                                emote_id;                                                 // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               can_parachute_jump;                                       // 0x0144(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0145(0x0003) MISSED OFFSET
};

// ScriptStruct AI.DiffAIWeaponStateInfoGeneral
// 0x0018 (0x0024 - 0x000C)
struct FDiffAIWeaponStateInfoGeneral : public FDiffStateInfoBase
{
	TArray<struct FAIWeaponStateInfo>                  Values;                                                   // 0x000C(0x000C) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0018(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIPlayerWeaponGeneral
// 0x0024 (0x0030 - 0x000C)
struct FDiffAIPlayerWeaponGeneral : public FDiffStateInfoBase
{
	struct FDiffAIWeaponStateInfoGeneral               player_weapon;                                            // 0x000C(0x0024)
};

// ScriptStruct AI.DiffAIBackpackItemGeneral
// 0x0018 (0x0024 - 0x000C)
struct FDiffAIBackpackItemGeneral : public FDiffStateInfoBase
{
	TArray<struct FAIBackpackItem>                     Values;                                                   // 0x000C(0x000C) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0018(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIPlayerBackpackGeneral
// 0x0024 (0x0030 - 0x000C)
struct FDiffAIPlayerBackpackGeneral : public FDiffStateInfoBase
{
	struct FDiffAIBackpackItemGeneral                  backpack_item;                                            // 0x000C(0x0024)
};

// ScriptStruct AI.DiffAIEquipmentInfoGeneral
// 0x0018 (0x0024 - 0x000C)
struct FDiffAIEquipmentInfoGeneral : public FDiffStateInfoBase
{
	TArray<struct FAIEquipmentInfo>                    Values;                                                   // 0x000C(0x000C) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0018(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIPlayerEquipmentGeneral
// 0x0024 (0x0030 - 0x000C)
struct FDiffAIPlayerEquipmentGeneral : public FDiffStateInfoBase
{
	struct FDiffAIEquipmentInfoGeneral                 equipment_item;                                           // 0x000C(0x0024)
};

// ScriptStruct AI.DiffAINearbyPlayerGeneral
// 0x0190 (0x01A8 - 0x0018)
struct FDiffAINearbyPlayerGeneral : public FDiffUniqueStateInfo
{
	struct FAIPlayerState                              State;                                                    // 0x0018(0x0130)
	struct FDiffAIPlayerWeaponGeneral                  Weapon;                                                   // 0x0148(0x0030)
	struct FDiffAIPlayerEquipmentGeneral               equipment;                                                // 0x0178(0x0030)
};

// ScriptStruct AI.DiffAINearbyPlayersGeneral
// 0x0018 (0x0024 - 0x000C)
struct FDiffAINearbyPlayersGeneral : public FDiffStateInfoBase
{
	TArray<struct FDiffAINearbyPlayerGeneral>          Values;                                                   // 0x000C(0x000C) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0018(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.DiffItemStateDatasGeneral
// 0x0018 (0x0024 - 0x000C)
struct FDiffItemStateDatasGeneral : public FDiffStateInfoBase
{
	TArray<struct FItemStateData>                      Values;                                                   // 0x000C(0x000C) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0018(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.DiffDoorStateGeneral
// 0x0018 (0x0024 - 0x000C)
struct FDiffDoorStateGeneral : public FDiffStateInfoBase
{
	TArray<struct FDoorState>                          Values;                                                   // 0x000C(0x000C) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0018(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.DiffVehicleStatesGeneral
// 0x0018 (0x0024 - 0x000C)
struct FDiffVehicleStatesGeneral : public FDiffStateInfoBase
{
	TArray<struct FVehicleState>                       Values;                                                   // 0x000C(0x000C) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0018(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.DiffDynamicItemStatesGeneral
// 0x0018 (0x0024 - 0x000C)
struct FDiffDynamicItemStatesGeneral : public FDiffStateInfoBase
{
	TArray<struct FDynamicItem>                        Values;                                                   // 0x000C(0x000C) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0018(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.DiffMonsterStatesGeneral
// 0x0018 (0x0024 - 0x000C)
struct FDiffMonsterStatesGeneral : public FDiffStateInfoBase
{
	TArray<struct FMonsterState>                       Values;                                                   // 0x000C(0x000C) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0018(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIStateInfoGeneral
// 0x06B0 (0x06C8 - 0x0018)
struct FDiffAIStateInfoGeneral : public FDiffUniqueStateInfo
{
	struct FDiffAIPlayerStateGeneral                   State;                                                    // 0x0018(0x0148)
	struct FAIHeardSound                               Sound;                                                    // 0x0160(0x000C)
	struct FAIDamageSources                            damage_sources;                                           // 0x016C(0x0030)
	struct FAIPlayerInteractInfo                       player_interact_info;                                     // 0x019C(0x003C)
	struct FCameraState                                Camera;                                                   // 0x01D8(0x0054)
	struct FDiffAIPlayerWeaponGeneral                  Weapon;                                                   // 0x022C(0x0030)
	struct FDiffAIPlayerBackpackGeneral                BackPack;                                                 // 0x025C(0x0030)
	struct FDeathMatchAIPlayerEquipment                deathmatch_backpack;                                      // 0x028C(0x001C)
	struct FDiffAIPlayerEquipmentGeneral               equipment;                                                // 0x02A8(0x0030)
	struct FProgressBarState                           progress_bar;                                             // 0x02D8(0x0018)
	struct FDiffAINearbyPlayersGeneral                 nearby_player;                                            // 0x02F0(0x0024)
	struct FDiffItemStateDatasGeneral                  nearby_item;                                              // 0x0314(0x0024)
	TArray<struct FObstacleState>                      nearby_obstacle;                                          // 0x0338(0x000C) (ZeroConstructor)
	TArray<struct FAINearbyThrown>                     nearby_thrown;                                            // 0x0344(0x000C) (ZeroConstructor)
	struct FDiffDoorStateGeneral                       nearby_door;                                              // 0x0350(0x0024)
	struct FAIPlayerHitInfo                            player_hit_info;                                          // 0x0374(0x0020)
	struct FSafetyAreaState                            safety_area;                                              // 0x0394(0x0054)
	struct FRedZoneState                               red_zone;                                                 // 0x03E8(0x0030)
	struct FAIGameState                                Game;                                                     // 0x0418(0x0050)
	uint32_t                                           Key;                                                      // 0x0468(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           deliver_target_id;                                        // 0x046C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVehicleState                               vehicle_state;                                            // 0x0470(0x00F0)
	struct FDiffVehicleStatesGeneral                   nearby_vehicles;                                          // 0x0560(0x0024)
	struct FAIBulletHoles                              bullet_holes;                                             // 0x0584(0x0024)
	TArray<struct FAIRecipients>                       recipients;                                               // 0x05A8(0x000C) (ZeroConstructor)
	struct FDiffSpecialZoneGeneral                     special_zones;                                            // 0x05B4(0x0024)
	struct FDiffDynamicItemStatesGeneral               dynamic_items;                                            // 0x05D8(0x0024)
	uint32_t                                           ai_style;                                                 // 0x05FC(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateConfig                              Config;                                                   // 0x0600(0x0014)
	struct FDiffMonsterStatesGeneral                   monster_states;                                           // 0x0614(0x0024)
	struct FChatMsgInfo                                chatmsg_info;                                             // 0x0638(0x0034)
	struct FSignMsgInfo                                signmsg_info;                                             // 0x066C(0x002C)
	struct FMapMarkInfo                                mapmark_info;                                             // 0x0698(0x0030)
};

// ScriptStruct AI.DiffAllPlayerInfoGeneral
// 0x0034 (0x0040 - 0x000C)
struct FDiffAllPlayerInfoGeneral : public FAIStateInfoBase
{
	uint32_t                                           Key;                                                      // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FAIStateInfo>                        AllAIStateInfo;                                           // 0x0010(0x000C) (ZeroConstructor)
	TArray<struct FDiffAIStateInfoGeneral>             AllDiffAIStateInfo;                                       // 0x001C(0x000C) (ZeroConstructor)
	TArray<struct FAIStateInfo>                        DebugAllAIStateInfo;                                      // 0x0028(0x000C) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0034(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.DiffAllPlayerInfo
// 0x02EC (0x02F8 - 0x000C)
struct FDiffAllPlayerInfo : public FAIStateInfoBase
{
	TArray<struct FDiffAIStateInfo>                    diff_states;                                              // 0x000C(0x000C) (ZeroConstructor)
	TArray<struct FAIStateInfo>                        State;                                                    // 0x0018(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FGlobalGameState                            global_state;                                             // 0x0028(0x0170)
	struct FDiffGlobalGameState                        diff_global_state;                                        // 0x0198(0x0130)
	TArray<struct FAIStateInfo>                        global_player_states;                                     // 0x02C8(0x000C) (ZeroConstructor)
	TArray<struct FDiffAIStateInfo>                    global_player_diff_states;                                // 0x02D4(0x000C) (ZeroConstructor)
	TArray<struct FAIStateInfo>                        in_pool_states;                                           // 0x02E0(0x000C) (ZeroConstructor)
	TArray<struct FDiffAIStateInfo>                    in_pool_diff_states;                                      // 0x02EC(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.AIPlayerStateBaseMod
// 0x00F4 (0x0100 - 0x000C)
struct FAIPlayerStateBaseMod : public FAIStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           unique_id;                                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           actor_id;                                                 // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                team_id;                                                  // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x0020(0x0018)
	struct FAIStateXYZ                                 Rotation;                                                 // 0x0038(0x0018)
	struct FAIStateXYZ                                 Speed;                                                    // 0x0050(0x0018)
	float                                              HP;                                                       // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Energy;                                                   // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              dying_hp;                                                 // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              oxygen;                                                   // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                active_weapon_slot;                                       // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                weapon_status;                                            // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_switching;                                             // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	int                                                alive_state;                                              // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                kill_count;                                               // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                assist_count;                                             // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Damages;                                                  // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	uint64_t                                           pawn_states;                                              // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               is_running;                                               // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_aiming;                                                // 0x00A1(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_left_probe;                                            // 0x00A2(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_right_probe;                                           // 0x00A3(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_floating;                                              // 0x00A4(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_firing;                                                // 0x00A5(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_using_skill;                                           // 0x00A6(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x00A7(0x0001) MISSED OFFSET
	int                                                using_skill_id;                                           // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                skill_phase_index;                                        // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_holding;                                               // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_stun;                                                  // 0x00B1(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_pose_acting;                                           // 0x00B2(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_picking;                                               // 0x00B3(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_weapon_near_wall;                                      // 0x00B4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00B5(0x0003) MISSED OFFSET
	int                                                body_state;                                               // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                location_state;                                           // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               has_smoke;                                                // 0x00C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00C1(0x0003) MISSED OFFSET
	int                                                player_type;                                              // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ai_level;                                                 // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_move_has_collision;                                    // 0x00CC(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_lost_connection;                                       // 0x00CD(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x00CE(0x0002) MISSED OFFSET
	float                                              rating_score;                                             // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              real_hidden_score;                                        // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                zone_id;                                                  // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               in_delivery_pool;                                         // 0x00DC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x00DD(0x0003) MISSED OFFSET
	TArray<struct FAIAttribute>                        Attributes;                                               // 0x00E0(0x000C) (ZeroConstructor)
	int                                                ai_kill_count;                                            // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                gender;                                                   // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               has_gone;                                                 // 0x00F4(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               in_afk;                                                   // 0x00F5(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x00F6(0x0002) MISSED OFFSET
	int                                                emote_id;                                                 // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
};

// ScriptStruct AI.AINearbyPlayerBaseMod
// 0x0118 (0x0130 - 0x0018)
struct FAINearbyPlayerBaseMod : public FUniqueStateInfo
{
	struct FAIPlayerStateBaseMod                       State;                                                    // 0x0018(0x0100)
	struct FAIPlayerWeapon                             Weapon;                                                   // 0x0118(0x000C)
	struct FAIPlayerEquipment                          equipment;                                                // 0x0124(0x000C)
};

// ScriptStruct AI.AIGameStateBaseMod
// 0x0034 (0x0040 - 0x000C)
struct FAIGameStateBaseMod : public FAIStateInfoBase
{
	bool                                               is_over;                                                  // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	int                                                alive_player_count;                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Stage;                                                    // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           mode_map;                                                 // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           mode_type;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     game_ds_version;                                          // 0x0020(0x000C) (ZeroConstructor)
	int                                                zone_id;                                                  // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           left_time;                                                // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           stage_time;                                               // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.DamageRate
// 0x0008 (0x0014 - 0x000C)
struct FDamageRate : public FAIStateInfoBase
{
	float                                              HP;                                                       // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              rate;                                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.DamageRateInfo
// 0x001C (0x0028 - 0x000C)
struct FDamageRateInfo : public FAIStateInfoBase
{
	TArray<struct FDamageRate>                         damage_rate_map;                                          // 0x000C(0x000C) (ZeroConstructor)
	TArray<struct FDamageRate>                         revive_damage_rate_map;                                   // 0x0018(0x000C) (ZeroConstructor)
	float                                              near_death_damage_rate;                                   // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.AIStateInfoBaseMod
// 0x03B8 (0x03D0 - 0x0018)
struct FAIStateInfoBaseMod : public FUniqueStateInfo
{
	struct FAIPlayerStateBaseMod                       State;                                                    // 0x0018(0x0100)
	struct FAIHeardSound                               Sound;                                                    // 0x0118(0x000C)
	struct FAIDamageSources                            damage_sources;                                           // 0x0124(0x0030)
	struct FAIPlayerInteractInfo                       player_interact_info;                                     // 0x0154(0x003C)
	struct FCameraState                                Camera;                                                   // 0x0190(0x0054)
	struct FAIPlayerWeapon                             Weapon;                                                   // 0x01E4(0x000C)
	struct FAIPlayerBackpack                           BackPack;                                                 // 0x01F0(0x000C)
	struct FAIPlayerEquipment                          equipment;                                                // 0x01FC(0x000C)
	struct FProgressBarState                           progress_bar;                                             // 0x0208(0x0018)
	TArray<struct FAINearbyPlayerBaseMod>              nearby_player;                                            // 0x0220(0x000C) (ZeroConstructor)
	TArray<struct FItemStateData>                      nearby_item;                                              // 0x022C(0x000C) (ZeroConstructor)
	TArray<uint64_t>                                   nearby_item_index;                                        // 0x0238(0x000C) (ZeroConstructor)
	TArray<struct FObstacleState>                      nearby_obstacle;                                          // 0x0244(0x000C) (ZeroConstructor)
	TArray<uint64_t>                                   nearby_obstacle_index;                                    // 0x0250(0x000C) (ZeroConstructor)
	TArray<struct FAINearbyThrown>                     nearby_thrown;                                            // 0x025C(0x000C) (ZeroConstructor)
	TArray<uint64_t>                                   nearby_thrown_index;                                      // 0x0268(0x000C) (ZeroConstructor)
	struct FAIPlayerHitInfo                            player_hit_info;                                          // 0x0274(0x0020)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0294(0x0004) MISSED OFFSET
	struct FAIGameStateBaseMod                         Game;                                                     // 0x0298(0x0040)
	uint32_t                                           Key;                                                      // 0x02D8(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIBulletHoles                              bullet_holes;                                             // 0x02DC(0x0024)
	uint32_t                                           ai_style;                                                 // 0x0300(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateConfig                              Config;                                                   // 0x0304(0x0014)
	struct FDamageRateInfo                             damage_rate_info;                                         // 0x0318(0x0028)
	struct FChatMsgInfo                                chatmsg_info;                                             // 0x0340(0x0034)
	struct FSignMsgInfo                                signmsg_info;                                             // 0x0374(0x002C)
	struct FMapMarkInfo                                mapmark_info;                                             // 0x03A0(0x0030)
};

// ScriptStruct AI.DiffAIPlayerStateBaseModGeneral
// 0x010C (0x0118 - 0x000C)
struct FDiffAIPlayerStateBaseModGeneral : public FAIStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           unique_id;                                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           actor_id;                                                 // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                team_id;                                                  // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x0020(0x0018)
	struct FAIStateXYZ                                 Rotation;                                                 // 0x0038(0x0018)
	struct FAIStateXYZ                                 Speed;                                                    // 0x0050(0x0018)
	float                                              HP;                                                       // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Energy;                                                   // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              dying_hp;                                                 // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              oxygen;                                                   // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                active_weapon_slot;                                       // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                weapon_status;                                            // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_switching;                                             // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	int                                                alive_state;                                              // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                kill_count;                                               // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                assist_count;                                             // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Damages;                                                  // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	uint64_t                                           pawn_states;                                              // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               is_running;                                               // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_aiming;                                                // 0x00A1(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_left_probe;                                            // 0x00A2(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_right_probe;                                           // 0x00A3(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_floating;                                              // 0x00A4(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_firing;                                                // 0x00A5(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_using_skill;                                           // 0x00A6(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x00A7(0x0001) MISSED OFFSET
	int                                                using_skill_id;                                           // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                skill_phase_index;                                        // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_holding;                                               // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_stun;                                                  // 0x00B1(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_pose_acting;                                           // 0x00B2(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_picking;                                               // 0x00B3(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_weapon_near_wall;                                      // 0x00B4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00B5(0x0003) MISSED OFFSET
	int                                                body_state;                                               // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                location_state;                                           // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               has_smoke;                                                // 0x00C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00C1(0x0003) MISSED OFFSET
	int                                                player_type;                                              // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ai_level;                                                 // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_move_has_collision;                                    // 0x00CC(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_lost_connection;                                       // 0x00CD(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x00CE(0x0002) MISSED OFFSET
	float                                              rating_score;                                             // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              real_hidden_score;                                        // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                zone_id;                                                  // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               in_delivery_pool;                                         // 0x00DC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x00DD(0x0003) MISSED OFFSET
	struct FDiffAIAttributesGeneral                    Attributes;                                               // 0x00E0(0x0024)
	int                                                ai_kill_count;                                            // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                gender;                                                   // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               has_gone;                                                 // 0x010C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               in_afk;                                                   // 0x010D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x010E(0x0002) MISSED OFFSET
	int                                                emote_id;                                                 // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
};

// ScriptStruct AI.DiffAINearbyPlayerBaseModGeneral
// 0x0178 (0x0190 - 0x0018)
struct FDiffAINearbyPlayerBaseModGeneral : public FDiffUniqueStateInfo
{
	struct FDiffAIPlayerStateBaseModGeneral            State;                                                    // 0x0018(0x0118)
	struct FDiffAIPlayerWeaponGeneral                  Weapon;                                                   // 0x0130(0x0030)
	struct FDiffAIPlayerEquipmentGeneral               equipment;                                                // 0x0160(0x0030)
};

// ScriptStruct AI.DiffAINearbyPlayersBaseModGeneral
// 0x0048 (0x0054 - 0x000C)
struct FDiffAINearbyPlayersBaseModGeneral : public FDiffStateInfoBase
{
	TMap<uint32_t, struct FDiffAINearbyPlayerBaseModGeneral> Values;                                                   // 0x000C(0x0050) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0048(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.DiffObstacleStateGeneral
// 0x0018 (0x0024 - 0x000C)
struct FDiffObstacleStateGeneral : public FDiffStateInfoBase
{
	TArray<struct FObstacleState>                      Values;                                                   // 0x000C(0x000C) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0018(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.DiffAINearbyThrownGeneral
// 0x0018 (0x0024 - 0x000C)
struct FDiffAINearbyThrownGeneral : public FDiffStateInfoBase
{
	TArray<struct FAINearbyThrown>                     Values;                                                   // 0x000C(0x000C) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0018(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIStateInfoBaseModGeneral
// 0x04C8 (0x04E0 - 0x0018)
struct FDiffAIStateInfoBaseModGeneral : public FDiffUniqueStateInfo
{
	struct FDiffAIPlayerStateBaseModGeneral            State;                                                    // 0x0018(0x0118)
	struct FAIHeardSound                               Sound;                                                    // 0x0130(0x000C)
	struct FAIDamageSources                            damage_sources;                                           // 0x013C(0x0030)
	struct FAIPlayerInteractInfo                       player_interact_info;                                     // 0x016C(0x003C)
	struct FCameraState                                Camera;                                                   // 0x01A8(0x0054)
	struct FDiffAIPlayerWeaponGeneral                  Weapon;                                                   // 0x01FC(0x0030)
	struct FDiffAIPlayerBackpackGeneral                BackPack;                                                 // 0x022C(0x0030)
	struct FDiffAIPlayerEquipmentGeneral               equipment;                                                // 0x025C(0x0030)
	struct FProgressBarState                           progress_bar;                                             // 0x028C(0x0018)
	struct FDiffAINearbyPlayersBaseModGeneral          nearby_player;                                            // 0x02A4(0x0054)
	struct FDiffItemStateDatasGeneral                  nearby_item;                                              // 0x02F8(0x0024)
	TArray<uint64_t>                                   nearby_item_index;                                        // 0x031C(0x000C) (ZeroConstructor)
	struct FDiffObstacleStateGeneral                   nearby_obstacle;                                          // 0x0328(0x0024)
	TArray<uint64_t>                                   nearby_obstacle_index;                                    // 0x034C(0x000C) (ZeroConstructor)
	struct FDiffAINearbyThrownGeneral                  nearby_thrown;                                            // 0x0358(0x0024)
	TArray<uint64_t>                                   nearby_thrown_index;                                      // 0x037C(0x000C) (ZeroConstructor)
	struct FAIPlayerHitInfo                            player_hit_info;                                          // 0x0388(0x0020)
	struct FAIGameStateBaseMod                         Game;                                                     // 0x03A8(0x0040)
	uint32_t                                           Key;                                                      // 0x03E8(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIBulletHoles                              bullet_holes;                                             // 0x03EC(0x0024)
	uint32_t                                           ai_style;                                                 // 0x0410(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateConfig                              Config;                                                   // 0x0414(0x0014)
	struct FDamageRateInfo                             damage_rate_info;                                         // 0x0428(0x0028)
	struct FChatMsgInfo                                chatmsg_info;                                             // 0x0450(0x0034)
	struct FSignMsgInfo                                signmsg_info;                                             // 0x0484(0x002C)
	struct FMapMarkInfo                                mapmark_info;                                             // 0x04B0(0x0030)
};

// ScriptStruct AI.DiffAIPlayerStateBaseMod
// 0x00B4 (0x00C0 - 0x000C)
struct FDiffAIPlayerStateBaseMod : public FDiffStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffStateInfoInt32                         actor_id;                                                 // 0x0010(0x0004)
	struct FDiffStateInfoInt32                         team_id;                                                  // 0x0014(0x0004)
	struct FDiffStateInfoVector                        Position;                                                 // 0x0018(0x000C)
	struct FDiffStateInfoVector                        Rotation;                                                 // 0x0024(0x000C)
	struct FDiffStateInfoVector                        Speed;                                                    // 0x0030(0x000C)
	struct FDiffStateInfoFloat                         HP;                                                       // 0x003C(0x0004)
	struct FDiffStateInfoFloat                         Energy;                                                   // 0x0040(0x0004)
	struct FDiffStateInfoFloat                         dying_hp;                                                 // 0x0044(0x0004)
	struct FDiffStateInfoFloat                         oxygen;                                                   // 0x0048(0x0004)
	struct FDiffStateInfoInt32                         active_weapon_slot;                                       // 0x004C(0x0004)
	struct FDiffStateInfoInt32                         weapon_status;                                            // 0x0050(0x0004)
	struct FDiffStateInfoBool                          is_switching;                                             // 0x0054(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	struct FDiffStateInfoInt32                         alive_state;                                              // 0x0058(0x0004)
	struct FDiffStateInfoInt32                         kill_count;                                               // 0x005C(0x0004)
	struct FDiffStateInfoInt32                         Damages;                                                  // 0x0060(0x0004)
	struct FDiffStateInfoBool                          is_running;                                               // 0x0064(0x0001)
	struct FDiffStateInfoBool                          is_aiming;                                                // 0x0065(0x0001)
	struct FDiffStateInfoBool                          is_left_probe;                                            // 0x0066(0x0001)
	struct FDiffStateInfoBool                          is_right_probe;                                           // 0x0067(0x0001)
	struct FDiffStateInfoBool                          is_floating;                                              // 0x0068(0x0001)
	struct FDiffStateInfoBool                          is_firing;                                                // 0x0069(0x0001)
	struct FDiffStateInfoBool                          is_using_skill;                                           // 0x006A(0x0001)
	struct FDiffStateInfoBool                          is_holding;                                               // 0x006B(0x0001)
	struct FDiffStateInfoBool                          is_stun;                                                  // 0x006C(0x0001)
	struct FDiffStateInfoBool                          is_pose_acting;                                           // 0x006D(0x0001)
	struct FDiffStateInfoBool                          is_picking;                                               // 0x006E(0x0001)
	unsigned char                                      UnknownData01[0x1];                                       // 0x006F(0x0001) MISSED OFFSET
	struct FDiffStateInfoInt32                         body_state;                                               // 0x0070(0x0004)
	struct FDiffStateInfoInt32                         location_state;                                           // 0x0074(0x0004)
	struct FDiffStateInfoBool                          has_smoke;                                                // 0x0078(0x0001)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	struct FDiffStateInfoInt32                         player_type;                                              // 0x007C(0x0004)
	struct FDiffAIAttributes                           Attributes;                                               // 0x0080(0x0024)
	struct FDiffStateInfoInt32                         using_skill_id;                                           // 0x00A4(0x0004)
	struct FDiffStateInfoBool                          is_lost_connection;                                       // 0x00A8(0x0001)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00A9(0x0003) MISSED OFFSET
	struct FDiffStateInfoInt32                         ai_kill_count;                                            // 0x00AC(0x0004)
	struct FDiffStateInfoUInt64                        pawn_states;                                              // 0x00B0(0x0008)
	struct FDiffStateInfoInt32                         assist_count;                                             // 0x00B8(0x0004)
	struct FDiffStateInfoBool                          in_delivery_pool;                                         // 0x00BC(0x0001)
	struct FDiffStateInfoBool                          has_gone;                                                 // 0x00BD(0x0001)
	struct FDiffStateInfoBool                          in_afk;                                                   // 0x00BE(0x0001)
	unsigned char                                      UnknownData04[0x1];                                       // 0x00BF(0x0001) MISSED OFFSET
};

// ScriptStruct AI.DiffAINearbyPlayerBaseMod
// 0x0108 (0x0120 - 0x0018)
struct FDiffAINearbyPlayerBaseMod : public FDiffUniqueStateInfo
{
	struct FDiffAIPlayerStateBaseMod                   State;                                                    // 0x0018(0x00C0)
	struct FDiffAIPlayerWeapon                         Weapon;                                                   // 0x00D8(0x0024)
	struct FDiffAIPlayerEquipment                      equipment;                                                // 0x00FC(0x0024)
};

// ScriptStruct AI.DiffAINearbyPlayersBaseMod
// 0x0048 (0x0054 - 0x000C)
struct FDiffAINearbyPlayersBaseMod : public FDiffStateInfoBase
{
	TMap<uint32_t, struct FDiffAINearbyPlayerBaseMod>  Players;                                                  // 0x000C(0x0050) (ZeroConstructor)
	TArray<uint32_t>                                   item_state;                                               // 0x0048(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIStateInfoBaseMod
// 0x0344 (0x0350 - 0x000C)
struct FDiffAIStateInfoBaseMod : public FDiffStateInfoBase
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FDiffAIPlayerStateBaseMod                   State;                                                    // 0x0010(0x00C0)
	struct FAIHeardSound                               Sound;                                                    // 0x00D0(0x000C)
	struct FDiffCameraState                            Camera;                                                   // 0x00DC(0x0030)
	struct FDiffAIPlayerWeapon                         Weapon;                                                   // 0x010C(0x0024)
	struct FDiffPlayerBackpack                         BackPack;                                                 // 0x0130(0x0024)
	struct FDiffAIPlayerEquipment                      equipment;                                                // 0x0154(0x0024)
	struct FDiffProgressBarState                       progress_bar;                                             // 0x0178(0x0014)
	struct FDiffAINearbyPlayersBaseMod                 nearby_player;                                            // 0x018C(0x0054)
	struct FDiffItemStateDatas                         nearby_item;                                              // 0x01E0(0x0024)
	TArray<uint64_t>                                   nearby_item_index;                                        // 0x0204(0x000C) (ZeroConstructor)
	TArray<struct FObstacleState>                      nearby_obstacle;                                          // 0x0210(0x000C) (ZeroConstructor)
	TArray<uint64_t>                                   nearby_obstacle_index;                                    // 0x021C(0x000C) (ZeroConstructor)
	TArray<struct FAINearbyThrown>                     nearby_thrown;                                            // 0x0228(0x000C) (ZeroConstructor)
	TArray<uint64_t>                                   nearby_thrown_index;                                      // 0x0234(0x000C) (ZeroConstructor)
	struct FDiffAIGameState                            Game;                                                     // 0x0240(0x0040)
	struct FAIDamageSources                            damage_sources;                                           // 0x0280(0x0030)
	uint32_t                                           Key;                                                      // 0x02B0(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FItemStateData>                      nearby_box_item;                                          // 0x02B4(0x000C) (ZeroConstructor)
	struct FAIPlayerHitInfo                            player_hit_info;                                          // 0x02C0(0x0020)
	struct FAIBulletHoles                              bullet_holes;                                             // 0x02E0(0x0024)
	uint32_t                                           ai_style;                                                 // 0x0304(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffAIConfig                               Config;                                                   // 0x0308(0x0008)
	struct FAIPlayerInteractInfo                       player_interact_info;                                     // 0x0310(0x003C)
	unsigned char                                      UnknownData01[0x4];                                       // 0x034C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.AIPlayerStateBRBase
// 0x0030 (0x003C - 0x000C)
struct FAIPlayerStateBRBase : public FAIStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                expect_delivery_num;                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                remain_delivery_num;                                      // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_diving;                                                // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_vehicle_probe;                                         // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_in_vehicle;                                            // 0x001A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
	int                                                vehicle_role;                                             // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                revival_count;                                            // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           parachute_state;                                          // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           plane_id;                                                 // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                parallel_world_id;                                        // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_be_spectated;                                          // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	uint32_t                                           related_id;                                               // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               can_parachute_jump;                                       // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
};

// ScriptStruct AI.AINearbyPlayerBRBase
// 0x0040 (0x0058 - 0x0018)
struct FAINearbyPlayerBRBase : public FUniqueStateInfo
{
	struct FAIPlayerStateBRBase                        State;                                                    // 0x0018(0x003C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct AI.AIStateInfoBRBase
// 0x0238 (0x0250 - 0x0018)
struct FAIStateInfoBRBase : public FUniqueStateInfo
{
	struct FAIPlayerStateBRBase                        State;                                                    // 0x0018(0x003C)
	TArray<struct FAINearbyPlayerBRBase>               nearby_player;                                            // 0x0054(0x000C) (ZeroConstructor)
	TArray<struct FDoorState>                          nearby_door;                                              // 0x0060(0x000C) (ZeroConstructor)
	TArray<uint64_t>                                   nearby_door_index;                                        // 0x006C(0x000C) (ZeroConstructor)
	struct FSafetyAreaState                            safety_area;                                              // 0x0078(0x0054)
	struct FRedZoneState                               red_zone;                                                 // 0x00CC(0x0030)
	uint32_t                                           deliver_target_id;                                        // 0x00FC(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVehicleState                               vehicle_state;                                            // 0x0100(0x00F0)
	TArray<struct FVehicleState>                       nearby_vehicles;                                          // 0x01F0(0x000C) (ZeroConstructor)
	TArray<uint64_t>                                   nearby_vehicles_index;                                    // 0x01FC(0x000C) (ZeroConstructor)
	TArray<struct FAIRecipients>                       recipients;                                               // 0x0208(0x000C) (ZeroConstructor)
	TArray<struct FSpecialZoneState>                   special_zones;                                            // 0x0214(0x000C) (ZeroConstructor)
	TArray<struct FDynamicItem>                        dynamic_items;                                            // 0x0220(0x000C) (ZeroConstructor)
	TArray<uint64_t>                                   dynamic_items_index;                                      // 0x022C(0x000C) (ZeroConstructor)
	TArray<struct FMonsterState>                       monster_states;                                           // 0x0238(0x000C) (ZeroConstructor)
	TArray<uint64_t>                                   monster_states_index;                                     // 0x0244(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.DiffAINearbyPlayerBRBaseGeneral
// 0x0040 (0x0058 - 0x0018)
struct FDiffAINearbyPlayerBRBaseGeneral : public FDiffUniqueStateInfo
{
	struct FAIPlayerStateBRBase                        State;                                                    // 0x0018(0x003C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct AI.DiffAINearbyPlayersBRBaseGeneral
// 0x0048 (0x0054 - 0x000C)
struct FDiffAINearbyPlayersBRBaseGeneral : public FDiffStateInfoBase
{
	TMap<uint32_t, struct FDiffAINearbyPlayerBRBaseGeneral> Values;                                                   // 0x000C(0x0050) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0048(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIStateInfoBRBaseGeneral
// 0x0300 (0x0318 - 0x0018)
struct FDiffAIStateInfoBRBaseGeneral : public FDiffUniqueStateInfo
{
	struct FAIPlayerStateBRBase                        State;                                                    // 0x0018(0x003C)
	struct FDiffAINearbyPlayersBRBaseGeneral           nearby_player;                                            // 0x0054(0x0054)
	struct FDiffDoorStateGeneral                       nearby_door;                                              // 0x00A8(0x0024)
	TArray<uint64_t>                                   nearby_door_index;                                        // 0x00CC(0x000C) (ZeroConstructor)
	struct FSafetyAreaState                            safety_area;                                              // 0x00D8(0x0054)
	struct FRedZoneState                               red_zone;                                                 // 0x012C(0x0030)
	unsigned char                                      UnknownData00[0x4];                                       // 0x015C(0x0004) MISSED OFFSET
	struct FVehicleState                               vehicle_state;                                            // 0x0160(0x00F0)
	struct FDiffVehicleStatesGeneral                   nearby_vehicles;                                          // 0x0250(0x0024)
	TArray<uint64_t>                                   nearby_vehicles_index;                                    // 0x0274(0x000C) (ZeroConstructor)
	uint32_t                                           deliver_target_id;                                        // 0x0280(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FAIRecipients>                       recipients;                                               // 0x0284(0x000C) (ZeroConstructor)
	struct FDiffSpecialZoneGeneral                     special_zones;                                            // 0x0290(0x0024)
	struct FDiffDynamicItemStatesGeneral               dynamic_items;                                            // 0x02B4(0x0024)
	TArray<uint64_t>                                   dynamic_items_index;                                      // 0x02D8(0x000C) (ZeroConstructor)
	struct FDiffMonsterStatesGeneral                   monster_states;                                           // 0x02E4(0x0024)
	TArray<uint64_t>                                   monster_states_index;                                     // 0x0308(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0314(0x0004) MISSED OFFSET
};

// ScriptStruct AI.DiffAIPlayerStateBRBase
// 0x001C (0x0028 - 0x000C)
struct FDiffAIPlayerStateBRBase : public FAIStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffStateInfoBool                          is_diving;                                                // 0x0010(0x0001)
	struct FDiffStateInfoBool                          is_vehicle_probe;                                         // 0x0011(0x0001)
	struct FDiffStateInfoBool                          is_in_vehicle;                                            // 0x0012(0x0001)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0013(0x0001) MISSED OFFSET
	struct FDiffStateInfoInt32                         vehicle_role;                                             // 0x0014(0x0004)
	struct FDiffStateInfoInt32                         revival_count;                                            // 0x0018(0x0004)
	struct FDiffStateInfoBool                          is_be_spectated;                                          // 0x001C(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	struct FDiffStateInfoInt32                         parallel_world_id;                                        // 0x0020(0x0004)
	struct FDiffStateInfoUInt32                        related_id;                                               // 0x0024(0x0004)
};

// ScriptStruct AI.DiffAINearbyPlayerBRBase
// 0x0028 (0x0040 - 0x0018)
struct FDiffAINearbyPlayerBRBase : public FDiffUniqueStateInfo
{
	struct FDiffAIPlayerStateBRBase                    State;                                                    // 0x0018(0x0028)
};

// ScriptStruct AI.DiffAINearbyPlayersBRBase
// 0x0048 (0x0054 - 0x000C)
struct FDiffAINearbyPlayersBRBase : public FDiffStateInfoBase
{
	TMap<uint32_t, struct FDiffAINearbyPlayerBRBase>   Players;                                                  // 0x000C(0x0050) (ZeroConstructor)
	TArray<uint32_t>                                   item_state;                                               // 0x0048(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIStateInfoBRBase
// 0x0204 (0x0210 - 0x000C)
struct FDiffAIStateInfoBRBase : public FDiffStateInfoBase
{
	struct FDiffAIPlayerStateBRBase                    State;                                                    // 0x000C(0x0028)
	struct FDiffAINearbyPlayersBRBase                  nearby_player;                                            // 0x0034(0x0054)
	struct FDiffSafetyAreaState                        safety_area;                                              // 0x0088(0x003C)
	TArray<struct FDoorState>                          nearby_door;                                              // 0x00C4(0x000C) (ZeroConstructor)
	struct FDiffRedZoneState                           red_zone;                                                 // 0x00D0(0x0024)
	struct FDiffVehicleState                           vehicle_state;                                            // 0x00F4(0x0080)
	struct FDiffVehicleStates                          nearby_vehicles;                                          // 0x0174(0x0024)
	TArray<struct FAIRecipients>                       recipients;                                               // 0x0198(0x000C) (ZeroConstructor)
	struct FDiffSpecialZone                            special_zone;                                             // 0x01A4(0x0024)
	struct FDiffDynamicItemStates                      dynamic_item_states;                                      // 0x01C8(0x0024)
	struct FDiffMonsterStates                          monster_states;                                           // 0x01EC(0x0024)
};

// ScriptStruct AI.AIPlayerStateMPBase
// 0x0020 (0x002C - 0x000C)
struct FAIPlayerStateMPBase : public FAIStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_invincible;                                            // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               in_shoveling;                                             // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	int                                                death_count;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              survive_time;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              kd_ratio;                                                 // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                continue_kill;                                            // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                revenge;                                                  // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                top_spot_end;                                             // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.AIGameStateMPBase
// 0x000C (0x0018 - 0x000C)
struct FAIGameStateMPBase : public FAIStateInfoBase
{
	TArray<struct FTeamScoreData>                      team_score_datas;                                         // 0x000C(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.AIStateInfoMPBase
// 0x0048 (0x0060 - 0x0018)
struct FAIStateInfoMPBase : public FUniqueStateInfo
{
	struct FAIPlayerStateMPBase                        State;                                                    // 0x0018(0x002C)
	struct FAIGameStateMPBase                          Game;                                                     // 0x0044(0x0018)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.DiffAIGameStateMPBaseGeneral
// 0x0018 (0x0024 - 0x000C)
struct FDiffAIGameStateMPBaseGeneral : public FDiffStateInfoBase
{
	struct FDiffGameScoreDatas                         team_score_datas;                                         // 0x000C(0x0018)
};

// ScriptStruct AI.DiffAIStateInfoMPBaseGeneral
// 0x0050 (0x0068 - 0x0018)
struct FDiffAIStateInfoMPBaseGeneral : public FDiffUniqueStateInfo
{
	struct FAIPlayerStateMPBase                        State;                                                    // 0x0018(0x002C)
	struct FDiffAIGameStateMPBaseGeneral               Game;                                                     // 0x0044(0x0024)
};

// ScriptStruct AI.AIStateInfoTeamDeath
// 0x0020 (0x0038 - 0x0018)
struct FAIStateInfoTeamDeath : public FUniqueStateInfo
{
	struct FDeathMatchAIPlayerEquipment                deathmatch_backpack;                                      // 0x0018(0x001C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct AI.DiffAIStateInfoTeamDeathGeneral
// 0x0020 (0x0038 - 0x0018)
struct FDiffAIStateInfoTeamDeathGeneral : public FDiffUniqueStateInfo
{
	struct FDeathMatchAIPlayerEquipment                deathmatch_backpack;                                      // 0x0018(0x001C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct AI.WeaponType2Range
// 0x000C
struct FWeaponType2Range
{
	TEnumAsByte<EWeaponTypeNew>                        WeaponType;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Range;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NightRange;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.WeaponTypeToRange
// 0x0008
struct FWeaponTypeToRange
{
	TEnumAsByte<EWeaponTypeNew>                        WeaponType;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Range;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.WeatherToRange
// 0x000C
struct FWeatherToRange
{
	TArray<struct FWeaponTypeToRange>                  Ranges;                                                   // 0x0000(0x000C) (Edit, ZeroConstructor)
};

// ScriptStruct AI.ShapeRangeParam
// 0x000C
struct FShapeRangeParam
{
	float                                              CircleR;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SectorR;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SectorDegree;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.WeaponTypeToRangeWithPawnState
// 0x0040
struct FWeaponTypeToRangeWithPawnState
{
	TEnumAsByte<EWeaponTypeNew>                        WeaponType;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	TMap<EPawnState, struct FShapeRangeParam>          StateRange;                                               // 0x0004(0x0050) (Edit, ZeroConstructor)
};

// ScriptStruct AI.SightFanInfo
// 0x0008
struct FSightFanInfo
{
	float                                              Radius;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.InTroubleTeleportConfig
// 0x0010
struct FInTroubleTeleportConfig
{
	float                                              SrcCheckRadius;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DstCheckRadius;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           TryFindDstLocNum;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OnlyTeleportToLand;                                       // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct AI.AIDistantJudgeNoftify
// 0x0028
struct FAIDistantJudgeNoftify
{
	float                                              RightValue;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SetBBValue;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBlackboardKeySelector                      NotifyBlackBoardKey;                                      // 0x0008(0x0020) (Edit)
};

// ScriptStruct AI.BPAISenseGrenadeDistanceConfig
// 0x0008
struct FBPAISenseGrenadeDistanceConfig
{
	EAISenseGrenadeType                                GrenadeType;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              GrenadeSenseDistance;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.AISenseGrenadeClassConfig
// 0x000C
struct FAISenseGrenadeClassConfig
{
	TArray<class UClass*>                              IncludeClassArray;                                        // 0x0000(0x000C) (Edit, ZeroConstructor)
};

// ScriptStruct AI.AISenseGrenadeBBKeyInfo
// 0x0028
struct FAISenseGrenadeBBKeyInfo
{
	EAISenseGrenadeType                                GrenadeType;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FBlackboardKeySelector                      BBKeyGrenadeActor;                                        // 0x0008(0x0020) (Edit)
};

// ScriptStruct AI.TaskAddItem
// 0x0008
struct FTaskAddItem
{
	int                                                ItemId;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ItemCount;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.DifficultyTimeConfig
// 0x0008
struct FDifficultyTimeConfig
{
	float                                              WaitTime;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomDeviation;                                          // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.GeneralRandLocationRetryRule
// 0x000C
struct FGeneralRandLocationRetryRule
{
	float                                              AngleRangeMin;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AngleRangeMax;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScanStep;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.MobRandLocationRetryRule
// 0x000C
struct FMobRandLocationRetryRule
{
	float                                              AngleRangeMin;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AngleRangeMax;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                RetryTimes;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.LocationRetryRule
// 0x000C
struct FLocationRetryRule
{
	float                                              AngleRangeMin;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AngleRangeMax;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScanStep;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.AITaskNodeThrowGrenadeTargetLocRandomableConfig
// 0x0008
struct FAITaskNodeThrowGrenadeTargetLocRandomableConfig
{
	float                                              RandomRange;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                RandomTimes;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.FindBuildingRatingConfig
// 0x0008
struct FFindBuildingRatingConfig
{
	int                                                Rating;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SearchRadius;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.CustomDamageEventRow
// 0x00E4 (0x00E8 - 0x0004)
struct FCustomDamageEventRow : public FTableRowBase
{
	bool                                               bProcessedLocally;                                        // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FGuid                                       EventID;                                                  // 0x0008(0x0010) (Edit, EditConst, IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bClientOnly;                                              // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReplicate;                                               // 0x001A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyReplicateWhenRelevant;                               // 0x001B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      EventTriggerType;                                         // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	float                                              TriggerCooldown;                                          // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HealthPercentageThreshold;                                // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTriggerWhenDead;                                         // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      EventReactionType;                                        // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
	unsigned char                                      UnknownData03[0x28];                                      // 0x002A(0x0028) UNKNOWN PROPERTY: SoftClassProperty AI.CustomDamageEventRow.ActorClassToSpawn
	bool                                               bTriggersGlobalCooldown;                                  // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLockedByGlobalCooldown;                                  // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x005A(0x0006) MISSED OFFSET
	unsigned char                                      UnknownData05[0x28];                                      // 0x005A(0x0028) UNKNOWN PROPERTY: SoftClassProperty AI.CustomDamageEventRow.OnCooldownActorClassToSpawn
	bool                                               bDestroySpawnedParticlesWithOwner;                        // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
	struct FName                                       AttachComponentTag;                                       // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SpawnSocketName;                                          // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       CustomSpawnTransformTag;                                  // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnAtRandomPointInBoundingBox;                         // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCustomSpawnRotation;                                  // 0x00A9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MinToSpawn;                                               // 0x00AA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MaxToSpawn;                                               // 0x00AB(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	struct FName                                       ActorSpawnTag;                                            // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       MeshComponentTag;                                         // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MeshInstanceIndex;                                        // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET
	struct FName                                       BoneName;                                                 // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       PhysicsAssetProfileName;                                  // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       CollisionPrimitiveTag;                                    // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x8];                                       // 0x00E0(0x0008) MISSED OFFSET
};

// ScriptStruct AI.TriggeredCustomDamageEvent
// 0x00F0
struct FTriggeredCustomDamageEvent
{
	struct FCustomDamageEventRow                       Event;                                                    // 0x0000(0x00E8)
	float                                              TimeTriggered;                                            // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
};

// ScriptStruct AI.VehicleDamageInfoContainer
// 0x000C
struct FVehicleDamageInfoContainer
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct AI.BulletHole
// 0x0018
struct FBulletHole
{
	struct FVector                                     ImpactPoint;                                              // 0x0000(0x000C) (IsPlainOldData)
	struct FVector                                     SourcePoint;                                              // 0x000C(0x000C) (IsPlainOldData)
};

// ScriptStruct AI.BulletHoleRecordInfo
// 0x0004 (0x001C - 0x0018)
struct FBulletHoleRecordInfo : public FBulletHole
{
	class APawn*                                       ShootPawn;                                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.GlobalNearbyInfoBaseMod
// 0x0024 (0x0030 - 0x000C)
struct FGlobalNearbyInfoBaseMod : public FAIStateInfoBase
{
	TArray<struct FItemStateData>                      nearby_item;                                              // 0x000C(0x000C) (ZeroConstructor)
	TArray<struct FAINearbyThrown>                     nearby_thrown;                                            // 0x0018(0x000C) (ZeroConstructor)
	TArray<struct FObstacleState>                      nearby_obstacle;                                          // 0x0024(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.GlobalGameStateBaseMod
// 0x0074 (0x0080 - 0x000C)
struct FGlobalGameStateBaseMod : public FAIStateInfoBase
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FAIGameStateBaseMod                         Game;                                                     // 0x0010(0x0040)
	struct FGlobalNearbyInfoBaseMod                    global_nearby_info;                                       // 0x0050(0x0030)
};

// ScriptStruct AI.DiffGlobalNearbyInfoBaseMod
// 0x003C (0x0048 - 0x000C)
struct FDiffGlobalNearbyInfoBaseMod : public FAIStateInfoBase
{
	struct FDiffItemStateDatas                         nearby_item;                                              // 0x000C(0x0024)
	TArray<struct FAINearbyThrown>                     nearby_thrown;                                            // 0x0030(0x000C) (ZeroConstructor)
	TArray<struct FObstacleState>                      nearby_obstacle;                                          // 0x003C(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.DiffGlobalGameStateBaseMod
// 0x008C (0x0098 - 0x000C)
struct FDiffGlobalGameStateBaseMod : public FAIStateInfoBase
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FDiffAIGameState                            Game;                                                     // 0x0010(0x0040)
	struct FDiffGlobalNearbyInfoBaseMod                global_nearby_info;                                       // 0x0050(0x0048)
};

// ScriptStruct AI.DiffAIGameStateBaseModGeneral
// 0x0034 (0x0040 - 0x000C)
struct FDiffAIGameStateBaseModGeneral : public FDiffStateInfoBase
{
	bool                                               is_over;                                                  // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	int                                                alive_player_count;                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Stage;                                                    // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           mode_map;                                                 // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           mode_type;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     game_ds_version;                                          // 0x0020(0x000C) (ZeroConstructor)
	int                                                zone_id;                                                  // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           left_time;                                                // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           stage_time;                                               // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.DiffGlobalNearbyInfoBaseModGeneral
// 0x006C (0x0078 - 0x000C)
struct FDiffGlobalNearbyInfoBaseModGeneral : public FAIStateInfoBase
{
	struct FDiffItemStateDatasGeneral                  nearby_item;                                              // 0x000C(0x0024)
	struct FDiffAINearbyThrownGeneral                  nearby_thrown;                                            // 0x0030(0x0024)
	struct FDiffObstacleStateGeneral                   nearby_obstacle;                                          // 0x0054(0x0024)
};

// ScriptStruct AI.DiffGlobalGameStateBaseModGeneral
// 0x00BC (0x00C8 - 0x000C)
struct FDiffGlobalGameStateBaseModGeneral : public FAIStateInfoBase
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FDiffAIGameStateBaseModGeneral              Game;                                                     // 0x0010(0x0040)
	struct FDiffGlobalNearbyInfoBaseModGeneral         global_nearby_info;                                       // 0x0050(0x0078)
};

// ScriptStruct AI.DiffListIDMap
// 0x003C
struct FDiffListIDMap
{
	TMap<uint64_t, uint32_t>                           ListIDMap;                                                // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct AI.PropertyNameListIDMap
// 0x003C
struct FPropertyNameListIDMap
{
	TMap<struct FString, struct FDiffListIDMap>        PropertyNameListIDMap;                                    // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct AI.DiffAllPlayerInfoBaseModGeneral
// 0x0064 (0x0070 - 0x000C)
struct FDiffAllPlayerInfoBaseModGeneral : public FAIStateInfoBase
{
	uint32_t                                           Key;                                                      // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FAIStateInfoBaseMod>                 AllAIStateInfo;                                           // 0x0010(0x000C) (ZeroConstructor)
	TMap<uint32_t, struct FDiffAIStateInfoBaseModGeneral> AllDiffAIStateInfo;                                       // 0x001C(0x0050) (ZeroConstructor)
	TArray<struct FAIStateInfoBaseMod>                 DebugAllAIStateInfo;                                      // 0x0058(0x000C) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0064(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.DiffAllPlayerInfoBaseMod
// 0x0164 (0x0170 - 0x000C)
struct FDiffAllPlayerInfoBaseMod : public FAIStateInfoBase
{
	TArray<struct FDiffAIStateInfoBaseMod>             diff_states;                                              // 0x000C(0x000C) (ZeroConstructor)
	TArray<struct FAIStateInfoBaseMod>                 State;                                                    // 0x0018(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FGlobalGameStateBaseMod                     global_state;                                             // 0x0028(0x0080)
	struct FDiffGlobalGameStateBaseMod                 diff_global_state;                                        // 0x00A8(0x0098)
	TArray<struct FAIStateInfoBaseMod>                 global_player_states;                                     // 0x0140(0x000C) (ZeroConstructor)
	TArray<struct FDiffAIStateInfoBaseMod>             global_player_diff_states;                                // 0x014C(0x000C) (ZeroConstructor)
	TArray<struct FAIStateInfoBaseMod>                 in_pool_states;                                           // 0x0158(0x000C) (ZeroConstructor)
	TArray<struct FDiffAIStateInfoBaseMod>             in_pool_diff_states;                                      // 0x0164(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.GlobalNearbyInfoBRBase
// 0x0030 (0x003C - 0x000C)
struct FGlobalNearbyInfoBRBase : public FAIStateInfoBase
{
	TArray<struct FDoorState>                          nearby_door;                                              // 0x000C(0x000C) (ZeroConstructor)
	TArray<struct FVehicleState>                       nearby_vehicles;                                          // 0x0018(0x000C) (ZeroConstructor)
	TArray<struct FDynamicItem>                        dynamic_items;                                            // 0x0024(0x000C) (ZeroConstructor)
	TArray<struct FMonsterState>                       monster_states;                                           // 0x0030(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.GlobalGameStateBRBase
// 0x0150 (0x015C - 0x000C)
struct FGlobalGameStateBRBase : public FAIStateInfoBase
{
	struct FFlightInfo                                 flight_info;                                              // 0x000C(0x006C)
	TArray<struct FAirDropBoxState>                    air_drop_box_states;                                      // 0x0078(0x000C) (ZeroConstructor)
	TArray<struct FSpecialZoneState>                   special_zones;                                            // 0x0084(0x000C) (ZeroConstructor)
	struct FRedZoneState                               red_zone;                                                 // 0x0090(0x0030)
	struct FSafetyAreaState                            safety_area;                                              // 0x00C0(0x0054)
	TArray<struct FPlaneInfo>                          airplane_list;                                            // 0x0114(0x000C) (ZeroConstructor)
	struct FGlobalNearbyInfoBRBase                     global_nearby_info;                                       // 0x0120(0x003C)
};

// ScriptStruct AI.DiffGlobalGameStateBRBase
// 0x00E4 (0x00F0 - 0x000C)
struct FDiffGlobalGameStateBRBase : public FAIStateInfoBase
{
	struct FDiffFlightInfo                             flight_info;                                              // 0x000C(0x003C)
	struct FDiffAirDropBoxStates                       air_drop_box_states;                                      // 0x0048(0x0024)
	struct FDiffSpecialZone                            special_zones;                                            // 0x006C(0x0024)
	struct FDiffRedZoneState                           red_zone;                                                 // 0x0090(0x0024)
	struct FDiffSafetyAreaState                        safety_area;                                              // 0x00B4(0x003C)
};

// ScriptStruct AI.DiffGlobalNearbyInfoBRBaseGeneral
// 0x0090 (0x009C - 0x000C)
struct FDiffGlobalNearbyInfoBRBaseGeneral : public FAIStateInfoBase
{
	struct FDiffDoorStateGeneral                       nearby_door;                                              // 0x000C(0x0024)
	struct FDiffVehicleStatesGeneral                   nearby_vehicles;                                          // 0x0030(0x0024)
	struct FDiffDynamicItemStatesGeneral               dynamic_items;                                            // 0x0054(0x0024)
	struct FDiffMonsterStatesGeneral                   monster_states;                                           // 0x0078(0x0024)
};

// ScriptStruct AI.DiffGlobalGameStateBRBaseGeneral
// 0x01F8 (0x0204 - 0x000C)
struct FDiffGlobalGameStateBRBaseGeneral : public FAIStateInfoBase
{
	struct FFlightInfo                                 flight_info;                                              // 0x000C(0x006C)
	struct FDiffAirDropBoxStatesGeneral                air_drop_box_states;                                      // 0x0078(0x0024)
	struct FDiffSpecialZoneGeneral                     special_zones;                                            // 0x009C(0x0024)
	struct FRedZoneState                               red_zone;                                                 // 0x00C0(0x0030)
	struct FSafetyAreaState                            safety_area;                                              // 0x00F0(0x0054)
	struct FDiffPlaneInfoGeneral                       airplane_list;                                            // 0x0144(0x0024)
	struct FDiffGlobalNearbyInfoBRBaseGeneral          global_nearby_info;                                       // 0x0168(0x009C)
};

// ScriptStruct AI.DiffAllPlayerInfoBRBaseGeneral
// 0x0060 (0x006C - 0x000C)
struct FDiffAllPlayerInfoBRBaseGeneral : public FAIStateInfoBase
{
	TArray<struct FAIStateInfoBRBase>                  AllAIStateInfo;                                           // 0x000C(0x000C) (ZeroConstructor)
	TMap<uint32_t, struct FDiffAIStateInfoBRBaseGeneral> AllDiffAIStateInfo;                                       // 0x0018(0x0050) (ZeroConstructor)
	TArray<struct FAIStateInfoBRBase>                  DebugAllAIStateInfo;                                      // 0x0054(0x000C) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0060(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.DiffAllPlayerInfoBRBase
// 0x0294 (0x02A0 - 0x000C)
struct FDiffAllPlayerInfoBRBase : public FAIStateInfoBase
{
	TArray<struct FDiffAIStateInfoBRBase>              diff_states;                                              // 0x000C(0x000C) (ZeroConstructor)
	TArray<struct FAIStateInfoBRBase>                  State;                                                    // 0x0018(0x000C) (ZeroConstructor)
	struct FGlobalGameStateBRBase                      global_state;                                             // 0x0024(0x015C)
	struct FDiffGlobalGameStateBRBase                  diff_global_state;                                        // 0x0180(0x00F0)
	TArray<struct FAIStateInfoBRBase>                  global_player_states;                                     // 0x0270(0x000C) (ZeroConstructor)
	TArray<struct FDiffAIStateInfoBRBase>              global_player_diff_states;                                // 0x027C(0x000C) (ZeroConstructor)
	TArray<struct FAIStateInfoBRBase>                  in_pool_states;                                           // 0x0288(0x000C) (ZeroConstructor)
	TArray<struct FDiffAIStateInfoBRBase>              in_pool_diff_states;                                      // 0x0294(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.GlobalGameStateMPBase
// 0x0018 (0x0024 - 0x000C)
struct FGlobalGameStateMPBase : public FDiffStateInfoBase
{
	struct FAIGameStateMPBase                          Game;                                                     // 0x000C(0x0018)
};

// ScriptStruct AI.DiffGlobalGameStateMPBaseGeneral
// 0x0024 (0x0030 - 0x000C)
struct FDiffGlobalGameStateMPBaseGeneral : public FAIStateInfoBase
{
	struct FDiffAIGameStateMPBaseGeneral               Game;                                                     // 0x000C(0x0024)
};

// ScriptStruct AI.DiffAllPlayerInfoMPBaseGeneral
// 0x0060 (0x006C - 0x000C)
struct FDiffAllPlayerInfoMPBaseGeneral : public FAIStateInfoBase
{
	TArray<struct FAIStateInfoMPBase>                  AllAIStateInfo;                                           // 0x000C(0x000C) (ZeroConstructor)
	TMap<uint32_t, struct FDiffAIStateInfoMPBaseGeneral> AllDiffAIStateInfo;                                       // 0x0018(0x0050) (ZeroConstructor)
	TArray<struct FAIStateInfoMPBase>                  DebugAllAIStateInfo;                                      // 0x0054(0x000C) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0060(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.AIVehicleStateData
// 0x0078
struct FAIVehicleStateData
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct AI.AIVehicleHatredInfo
// 0x000C
struct FAIVehicleHatredInfo
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct AI.BTTaskMobOnceMemory
// 0x0004
struct FBTTaskMobOnceMemory
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct AI.ShootingAimConfig
// 0x0014
struct FShootingAimConfig
{
	EAIWeaponShootType                                 WeaponShotType;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              AimDeviationScale;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinAimDeviationScale;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RandomShootFreqRange;                                     // 0x000C(0x0008) (Edit, IsPlainOldData)
};

// ScriptStruct AI.ShootingAimConfigContainer
// 0x003C
struct FShootingAimConfigContainer
{
	TMap<float, struct FShootingAimConfig>             AimConfig;                                                // 0x0000(0x0050) (Edit, ZeroConstructor)
};

// ScriptStruct AI.DifficultyShootingConfig
// 0x0010
struct FDifficultyShootingConfig
{
	EAIWeaponShootType                                 WeaponShotType;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              DeviationScale;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RandomShootFreqRange;                                     // 0x0008(0x0008) (Edit, IsPlainOldData)
};

// ScriptStruct AI.BTAICheckMaxDistanceFromSpawnPointMemory
// 0x002C
struct FBTAICheckMaxDistanceFromSpawnPointMemory
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	struct FVector                                     SpawnLocation;                                            // 0x0004(0x000C) (IsPlainOldData)
	struct FBox                                        MaxMoveDistanceVolumeBox;                                 // 0x0010(0x001C) (IsPlainOldData)
};

// ScriptStruct AI.BTFlyingChooseEnemyMemory
// 0x000C
struct FBTFlyingChooseEnemyMemory
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct AI.BTMobAddHpMemory
// 0x0001
struct FBTMobAddHpMemory
{
	bool                                               HPBuffAdded;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.BTMobCheckLoseTargetMemory
// 0x0008
struct FBTMobCheckLoseTargetMemory
{
	bool                                               LastLoseTarget;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              LoseTargetElapsedTime;                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.BTMobHearingMemory
// 0x0028
struct FBTMobHearingMemory
{
	struct FNoiseInfo                                  LastChosenNoiseInfo;                                      // 0x0000(0x0024)
	float                                              LockNoiseElapsedTime;                                     // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.BTMobMoveBlockTimerMemory
// 0x0004
struct FBTMobMoveBlockTimerMemory
{
	float                                              BlockElapsedTime;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.BTAISenseGrenadeMemory
// 0x01E8
struct FBTAISenseGrenadeMemory
{
	TMap<EAISenseGrenadeType, float>                   GrenadeSensedDistance;                                    // 0x0000(0x0050) (ZeroConstructor)
	TMap<EAISenseGrenadeType, float>                   GrenadeSensedDistanceSquared;                             // 0x003C(0x0050) (ZeroConstructor)
	float                                              fMaxSenseDistance;                                        // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF4];                                      // 0x007C(0x00F4) MISSED OFFSET
	TMap<EAISenseGrenadeType, struct FAISenseGrenadeBBKeyInfo> GrenadeBBKeyInfo;                                         // 0x0170(0x0050) (ZeroConstructor)
	TMap<class UClass*, EAISenseGrenadeType>           GrenadeClassesMap;                                        // 0x01AC(0x0050) (ZeroConstructor)
};

// ScriptStruct AI.BTTaskCrowdMoveMemory
// 0x0070
struct FBTTaskCrowdMoveMemory
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct AI.BTTaskForceIdleMemory
// 0x000C
struct FBTTaskForceIdleMemory
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct AI.BTLaunchMoveSpeedCurve
// 0x0004
struct FBTLaunchMoveSpeedCurve
{
	float                                              DistanceThreshold;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.BTTaskMobExplodeMemory
// 0x0001
struct FBTTaskMobExplodeMemory
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AI.BTTaskGetNearDeathCharNearbyMemory
// 0x000C
struct FBTTaskGetNearDeathCharNearbyMemory
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct AI.BTTaskMobGetRandomAttackTargetInRadius
// 0x0008
struct FBTTaskMobGetRandomAttackTargetInRadius
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AI.BTTaskGetVehicleNearbyMemory
// 0x000C
struct FBTTaskGetVehicleNearbyMemory
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct AI.BTTaskMoveAroundMemory
// 0x0090
struct FBTTaskMoveAroundMemory
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
	class AActor*                                      FocusActor;                                               // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2C];                                      // 0x0064(0x002C) MISSED OFFSET
};

// ScriptStruct AI.BTTaskRotateToTargetMemory
// 0x0008
struct FBTTaskRotateToTargetMemory
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AI.BTAICharacterCastSkillMemory
// 0x0034
struct FBTAICharacterCastSkillMemory
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	struct FVector                                     FocusLocation;                                            // 0x0004(0x000C) (IsPlainOldData)
	TWeakObjectPtr<class AActor>                       FocusActor;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     TossTargetLoc;                                            // 0x0018(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FVector                                     GrenadeThrowStartLoc;                                     // 0x0028(0x000C) (IsPlainOldData)
};

// ScriptStruct AI.BTTaskParachuteJumpBaseMemory
// 0x001C
struct FBTTaskParachuteJumpBaseMemory
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct AI.DebugAIParamConfig
// 0x0014
struct FDebugAIParamConfig
{
	int                                                DistMin;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DistMax;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     NameAndDegree;                                            // 0x0008(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.AIWinnerState
// 0x0008 (0x0014 - 0x000C)
struct FAIWinnerState : public FDiffStateInfoBase
{
	int                                                team_id;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                player_id;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.DiffAINearbyPlayersMPBaseGeneral
// 0x0018 (0x0024 - 0x000C)
struct FDiffAINearbyPlayersMPBaseGeneral : public FDiffStateInfoBase
{
	TArray<struct FAIStateInfoBRBase>                  Values;                                                   // 0x000C(0x000C) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0018(0x000C) (ZeroConstructor)
};

// ScriptStruct AI.DiffGlobalNearbyInfoBRBase
// 0x0078 (0x0084 - 0x000C)
struct FDiffGlobalNearbyInfoBRBase : public FAIStateInfoBase
{
	TArray<struct FDoorState>                          nearby_door;                                              // 0x000C(0x000C) (ZeroConstructor)
	struct FDiffVehicleStates                          nearby_vehicles;                                          // 0x0018(0x0024)
	struct FDiffDynamicItemStates                      dynamic_item_states;                                      // 0x003C(0x0024)
	struct FDiffMonsterStates                          monster_states;                                           // 0x0060(0x0024)
};

}

