#pragma once

// Pubg Mobile Beta (3.0) SDK by Telegram @Sanjay_Src

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Addons.AmphibiousSlidingVehicle
// 0x0010 (0x1500 - 0x14F0)
class AAmphibiousSlidingVehicle : public ASTExtraSimulatedSlidingVehicle
{
public:
	float                                              EnterWaterZScale;                                         // 0x14F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x14F4(0x0004) MISSED OFFSET
	bool                                               RepWaterState;                                            // 0x14F8(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x14F9(0x0003) MISSED OFFSET
	class UFloatingVehicleVehicleMovementComponent2*   VehicleFloatingMovement;                                  // 0x14FC(0x0004) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.AmphibiousSlidingVehicle");
		return pStaticClass;
	}


	void OnRep_WaterState();
	void OnRep_UseSyncatClient();
	void HandleContactWater(bool bInContactingWater);
	class UFloatingVehicleVehicleMovementComponent2* GetFloatingVehicleMovement();
};


// Class Addons.AnimInstanceSlidingTrack
// 0x0090 (0x0870 - 0x07E0)
class UAnimInstanceSlidingTrack : public UCharacterAnimStateBase
{
public:
	class UAnimSequence*                               C_TurningLeft;                                            // 0x07E0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_TurningRight;                                           // 0x07E4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_DecelerationBreak;                                      // 0x07E8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_Idle;                                                   // 0x07EC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         C_MovementMode;                                           // 0x07F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECustomMovmentMode>                    C_CustomMovementMode;                                     // 0x07F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasWeapon;                                               // 0x07F2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTurning;                                               // 0x07F3(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTurnLeft;                                              // 0x07F4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTurningLeft;                                           // 0x07F5(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTurningRight;                                          // 0x07F6(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x07F7(0x0001) MISSED OFFSET
	struct FVector2D                                   SplineVelocity;                                           // 0x07F8(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               bEnableDecelerating;                                      // 0x0800(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0801(0x0003) MISSED OFFSET
	float                                              MaxAngleOfDeltaDeceleration;                              // 0x0804(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 IdleBlendCurve;                                           // 0x0808(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IdleAlpha;                                                // 0x080C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LocomotionPlayRate;                                       // 0x0810(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultSpeed;                                             // 0x0814(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinDecelerateThreshold;                                   // 0x0818(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnPlayStartPos;                                         // 0x081C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnPlayRate;                                             // 0x0820(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableTurnLoop;                                          // 0x0824(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableTurningDetect;                                     // 0x0825(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0826(0x0002) MISSED OFFSET
	float                                              TurnAngleThresholdEnableTriggerLoop;                      // 0x0828(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnAngleThresholdDisableTriggerLoop;                     // 0x082C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               C_JumpStart;                                              // 0x0830(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_JumpFalling;                                            // 0x0834(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_JumpLanding;                                            // 0x0838(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_JumpLandingHard;                                        // 0x083C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_JumpLandingLight;                                       // 0x0840(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableJumpStart;                                         // 0x0844(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableJumpStartEx;                                       // 0x0845(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFallingToLanding;                                        // 0x0846(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFallingToSpline;                                         // 0x0847(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFallingToLandingHard;                                    // 0x0848(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0849(0x0003) MISSED OFFSET
	float                                              MaxFallingSpeedThresholdToLandingHard;                    // 0x084C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLandingToIdle;                                           // 0x0850(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0851(0x0003) MISSED OFFSET
	float                                              FootIKAlpha;                                              // 0x0854(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                FootIKLODDefaultLevel;                                    // 0x0858(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x14];                                      // 0x085C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.AnimInstanceSlidingTrack");
		return pStaticClass;
	}

};


// Class Addons.AnimInstanceVerticalZipline
// 0x0000 (0x07E0 - 0x07E0)
class UAnimInstanceVerticalZipline : public UCharacterAnimStateBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.AnimInstanceVerticalZipline");
		return pStaticClass;
	}

};


// Class Addons.AnimNodeHelper
// 0x0004 (0x0020 - 0x001C)
class UAnimNodeHelper : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.AnimNodeHelper");
		return pStaticClass;
	}

};


// Class Addons.AnimPoseRecorder
// 0x008C (0x00A8 - 0x001C)
class UAnimPoseRecorder : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8C];                                      // 0x001C(0x008C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.AnimPoseRecorder");
		return pStaticClass;
	}

};


// Class Addons.BioVehicleMovementComponent
// 0x0880 (0x09B0 - 0x0130)
class UBioVehicleMovementComponent : public UPawnMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0130(0x0004) MISSED OFFSET
	unsigned char                                      bHasRequestedVelocity : 1;                                // 0x0134(0x0001) (Transient)
	unsigned char                                      bNeedSLerpRequestedVelocity : 1;                          // 0x0134(0x0001) (Transient)
	unsigned char                                      bRequestedMoveWithMaxSpeed : 1;                           // 0x0134(0x0001) (Transient)
	unsigned char                                      bWasAvoidanceUpdated : 1;                                 // 0x0134(0x0001) (Transient)
	unsigned char                                      UnknownData01 : 2;                                        // 0x0134(0x0001)
	unsigned char                                      bProjectNavMeshWalking : 1;                               // 0x0134(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bProjectNavMeshOnBothWorldChannels : 1;                   // 0x0134(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bNeedSlowDownRequestedVelocity : 1;                       // 0x0135(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0136(0x0002) MISSED OFFSET
	float                                              SlowDownRequestedVelocityFactor;                          // 0x0138(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x013C(0x0010) MISSED OFFSET
	float                                              GravityScale;                                             // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         MovementMode;                                             // 0x0150(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CustomMovementMode;                                       // 0x0151(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1E];                                      // 0x0152(0x001E) MISSED OFFSET
	float                                              MaxStepHeight;                                            // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WalkableFloorAngle;                                       // 0x0174(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WalkableFloorZ;                                           // 0x0178(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              WalkableHeadHitZ;                                         // 0x017C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              StepForwardMinDelta;                                      // 0x0180(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GroundFriction;                                           // 0x0184(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxWalkSpeed;                                             // 0x0188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxWalkSpeedCrouched;                                     // 0x018C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanStandOnOthervehicle;                                  // 0x0190(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0191(0x0003) MISSED OFFSET
	float                                              MaxSwimSpeed;                                             // 0x0194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxFlySpeed;                                              // 0x0198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxFlyBackSpeed;                                          // 0x019C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxCustomMovementSpeed;                                   // 0x01A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAcceleration;                                          // 0x01A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinAnalogWalkSpeed;                                       // 0x01A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrakingFrictionFactor;                                    // 0x01AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrakingFriction;                                          // 0x01B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrakingDecelerationWalking;                               // 0x01B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrakingDecelerationFalling;                               // 0x01B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrakingDecelerationSwimming;                              // 0x01BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SwimFriction;                                             // 0x01C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrakingDecelerationFlying;                                // 0x01C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableAirControl;                                        // 0x01C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x01C9(0x0003) MISSED OFFSET
	class UCurveFloat*                                 CurveAirControl;                                          // 0x01CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AirControl;                                               // 0x01D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AirControlBoostMultiplier;                                // 0x01D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AirControlBoostVelocityThreshold;                         // 0x01D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FallingLateralFriction;                                   // 0x01DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CrouchedHalfHeight;                                       // 0x01E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Buoyancy;                                                 // 0x01E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SwimVelocityZLimitScale;                                  // 0x01E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FloatingUpZ;                                              // 0x01EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PerchRadiusThreshold;                                     // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PerchAdditionalHeight;                                    // 0x01F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RotationRate;                                             // 0x01F8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              SmoothRotationLerpFactor;                                 // 0x0204(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotateToCameraLerpSpeed;                                  // 0x0208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    DeltaRotated;                                             // 0x020C(0x000C) (BlueprintVisible, IsPlainOldData)
	unsigned char                                      bUseControllerDesiredRotation : 1;                        // 0x0218(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOrientRotationToMovement : 1;                            // 0x0218(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bNeedBackward : 1;                                        // 0x0218(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bSweepWhileNavWalking : 1;                                // 0x0218(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAutoFloatingUp : 1;                                      // 0x0218(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bSeriousInjuried : 1;                                     // 0x0218(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bJumpAllowedWhenSeriousInjuried : 1;                      // 0x0218(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData07 : 1;                                        // 0x0218(0x0001)
	unsigned char                                      bMovementInProgress : 1;                                  // 0x0219(0x0001)
	unsigned char                                      bEnableScopedMovementUpdates : 1;                         // 0x0219(0x0001) (Edit)
	unsigned char                                      bForceMaxAccel : 1;                                       // 0x0219(0x0001)
	unsigned char                                      bRunPhysicsWithNoController : 1;                          // 0x0219(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bForceNextFloorCheck : 1;                                 // 0x0219(0x0001) (Edit, BlueprintVisible, DisableEditOnTemplate, EditConst)
	unsigned char                                      bShrinkProxyCapsule : 1;                                  // 0x0219(0x0001)
	unsigned char                                      bCanWalkOffLedges : 1;                                    // 0x0219(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCanWalkOffLedgesWhenCrouching : 1;                       // 0x0219(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData08[0x2];                                       // 0x021A(0x0002) MISSED OFFSET
	float                                              HeadCollisionScaleOnDS;                                   // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWalkingBlockHeadSlide;                                   // 0x0220(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWalkingDoubleCheckWhenPenetrate;                         // 0x0221(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x0222(0x0002) MISSED OFFSET
	float                                              WalkingHeadPenetrateCheckRadius;                          // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WalkingHeadPenetrateCheckHeight;                          // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFallingBlockHeadSlide;                                   // 0x022C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDoubleCheckSlide;                                        // 0x022D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x022E(0x0002) MISSED OFFSET
	float                                              HeadSlideCollisionScaleHeight;                            // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeadSlideCollisionScaleRadius;                            // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeadSlideFallingCollisionScale;                           // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHeadCheckSlope;                                          // 0x023C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowBodySlideSurface;                                    // 0x023D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEableHeadBlockVelocityLimit;                             // 0x023E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x1];                                       // 0x023F(0x0001) MISSED OFFSET
	float                                              HeadBlockLimitVelocity;                                   // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEableHeadBlockLimitThrottle;                             // 0x0244(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLastHeadWalkingCheck;                                    // 0x0245(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bClientResolveServerPenetration;                          // 0x0246(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12 : 1;                                        // 0x0247(0x0001)
	unsigned char                                      bNetworkSkipProxyPredictionOnNetUpdate : 1;               // 0x0247(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bForceNoSimulatePrediction : 1;                           // 0x0247(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bDeferUpdateMoveComponent : 1;                            // 0x0247(0x0001)
	class USceneComponent*                             DeferredUpdatedMoveComponent;                             // 0x0248(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              MaxOutOfWaterStepHeight;                                  // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OutofWaterZ;                                              // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Mass;                                                     // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnablePhysicsInteraction;                                // 0x0258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTouchForceScaledToMass;                                  // 0x0259(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPushForceScaledToMass;                                   // 0x025A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPushForceUsingZOffset;                                   // 0x025B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bScalePushForceToVelocity;                                // 0x025C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x025D(0x0003) MISSED OFFSET
	float                                              StandingDownwardForceScale;                               // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InitialPushForceFactor;                                   // 0x0264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PushForceFactor;                                          // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PushForcePointZOffsetFactor;                              // 0x026C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TouchForceFactor;                                         // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinTouchForce;                                            // 0x0274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxTouchForce;                                            // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RepulsionForce;                                           // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x0280(0x0004) MISSED OFFSET
	struct FVector                                     Acceleration;                                             // 0x0284(0x000C) (Net, IsPlainOldData)
	struct FVector                                     PendingDirectionalBrakingAccelerationToApply;             // 0x0290(0x000C) (Net, IsPlainOldData)
	struct FVector                                     LastUpdateLocation;                                       // 0x029C(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData15[0x8];                                       // 0x02A8(0x0008) MISSED OFFSET
	struct FQuat                                       LastUpdateRotation;                                       // 0x02B0(0x0010) (IsPlainOldData)
	struct FVector                                     LastUpdateVelocity;                                       // 0x02C0(0x000C) (IsPlainOldData)
	float                                              ServerLastTransformUpdateTimeStamp;                       // 0x02CC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     PendingImpulseToApply;                                    // 0x02D0(0x000C) (IsPlainOldData)
	struct FVector                                     PendingForceToApply;                                      // 0x02DC(0x000C) (IsPlainOldData)
	float                                              AnalogInputModifier;                                      // 0x02E8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x8];                                       // 0x02EC(0x0008) MISSED OFFSET
	float                                              MaxSimulationTimeStep;                                    // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxSimulationIterations;                                  // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDepenetrationWithGeometry;                             // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDepenetrationWithGeometryAsProxy;                      // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDepenetrationWithPawn;                                 // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDepenetrationWithPawnAsProxy;                          // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NetworkSimulatedSmoothLocationTime;                       // 0x030C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NetworkSimulatedSmoothRotationTime;                       // 0x0310(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ListenServerNetworkSimulatedSmoothLocationTime;           // 0x0314(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ListenServerNetworkSimulatedSmoothRotationTime;           // 0x0318(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NetProxyShrinkRadius;                                     // 0x031C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NetProxyShrinkHalfHeight;                                 // 0x0320(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NetworkMaxSmoothUpdateDistance;                           // 0x0324(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NetworkMaxSmoothScale;                                    // 0x0328(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NetworkNoSmoothUpdateDistance;                            // 0x032C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bReplaySmoothUseInterp;                                   // 0x0330(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ENetworkSmoothingMode                              NetworkSmoothingMode;                                     // 0x0331(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x2];                                       // 0x0332(0x0002) MISSED OFFSET
	float                                              LedgeCheckThreshold;                                      // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JumpOutOfWaterPitch;                                      // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x033C(0x0004) MISSED OFFSET
	struct FFindFloorResult                            CurrentFloor;                                             // 0x0340(0x00A0) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst)
	TEnumAsByte<EMovementMode>                         DefaultLandMovementMode;                                  // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         DefaultWaterMovementMode;                                 // 0x03E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         GroundMovementMode;                                       // 0x03E2(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bMaintainHorizontalGroundVelocity : 1;                    // 0x03E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bImpartBaseVelocityX : 1;                                 // 0x03E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bImpartBaseVelocityY : 1;                                 // 0x03E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bImpartBaseVelocityZ : 1;                                 // 0x03E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bImpartBaseAngularVelocity : 1;                           // 0x03E3(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bJustTeleported : 1;                                      // 0x03E3(0x0001) (Edit, BlueprintVisible, DisableEditOnTemplate, Transient, EditConst)
	unsigned char                                      bNetworkUpdateReceived : 1;                               // 0x03E3(0x0001) (Transient)
	unsigned char                                      bNetworkMovementModeChanged : 1;                          // 0x03E3(0x0001) (Transient)
	unsigned char                                      bIgnoreClientMovementErrorChecksAndCorrection : 1;        // 0x03E4(0x0001) (Edit, BlueprintVisible, Transient)
	unsigned char                                      bNotifyApex : 1;                                          // 0x03E4(0x0001) (Edit, BlueprintVisible, EditConst)
	unsigned char                                      bCheatFlying : 1;                                         // 0x03E4(0x0001)
	unsigned char                                      bWantsToCrouch : 1;                                       // 0x03E4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst)
	unsigned char                                      bCustomAction0 : 1;                                       // 0x03E4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst)
	unsigned char                                      bCrouchMaintainsBaseLocation : 1;                         // 0x03E4(0x0001) (Edit, BlueprintVisible, DisableEditOnTemplate, EditConst)
	unsigned char                                      bIgnoreBaseRotation : 1;                                  // 0x03E4(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bFastAttachedMove : 1;                                    // 0x03E4(0x0001)
	unsigned char                                      bAlwaysCheckFloor : 1;                                    // 0x03E5(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUseFlatBaseForFloorChecks : 1;                           // 0x03E5(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bPerformingJumpOff : 1;                                   // 0x03E5(0x0001)
	unsigned char                                      bWantsToLeaveNavWalking : 1;                              // 0x03E5(0x0001)
	unsigned char                                      bUseRVOAvoidance : 1;                                     // 0x03E5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bRequestedMoveUseAcceleration : 1;                        // 0x03E5(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData19[0x2];                                       // 0x03E6(0x0002) MISSED OFFSET
	float                                              AvoidanceConsiderationRadius;                             // 0x03E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RequestedVelocity;                                        // 0x03EC(0x000C) (Transient, IsPlainOldData)
	int                                                AvoidanceUID;                                             // 0x03F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FNavAvoidanceMask                           AvoidanceGroup;                                           // 0x03FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FNavAvoidanceMask                           GroupsToAvoid;                                            // 0x0400(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FNavAvoidanceMask                           GroupsToIgnore;                                           // 0x0404(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              AvoidanceWeight;                                          // 0x0408(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PendingLaunchVelocity;                                    // 0x040C(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData20[0xA8];                                      // 0x0418(0x00A8) MISSED OFFSET
	float                                              NavMeshProjectionInterval;                                // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NavMeshProjectionTimer;                                   // 0x04C4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              NavMeshProjectionInterpSpeed;                             // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NavMeshProjectionHeightScaleUp;                           // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NavMeshProjectionHeightScaleDown;                         // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NavWalkingFloorDistTolerance;                             // 0x04D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NavRotationFactor;                                        // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NavWantedSpeed;                                           // 0x04DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bForceBraking : 1;                                        // 0x04E0(0x0001) (Deprecated)
	unsigned char                                      UnknownData21[0x3];                                       // 0x04E1(0x0003) MISSED OFFSET
	float                                              CrouchedSpeedMultiplier;                                  // 0x04E4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              UpperImpactNormalScale;                                   // 0x04E8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FBioVehicleMovementPostPhysicsTickFunction  PostPhysicsTickFunction;                                  // 0x04EC(0x003C)
	bool                                               bEnableSimulatedVelocity;                                 // 0x0528(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSpectatorSmoothVelocity;                                 // 0x0529(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData22[0x2];                                       // 0x052A(0x0002) MISSED OFFSET
	float                                              ClientServerVelocitySizeSquareThreshold;                  // 0x052C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDSSmoothVelocity;                                        // 0x0530(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAdjustClientWithRotation;                                // 0x0531(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData23[0x12];                                      // 0x0532(0x0012) MISSED OFFSET
	bool                                               EnabledResetPredictionData;                               // 0x0544(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData24[0xB];                                       // 0x0545(0x000B) MISSED OFFSET
	float                                              MinTimeBetweenTimeStampResets;                            // 0x0550(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FRootMotionSourceGroup                      CurrentRootMotion;                                        // 0x0554(0x0090) (Transient)
	unsigned char                                      UnknownData25[0x8C];                                      // 0x05E4(0x008C) MISSED OFFSET
	struct FRootMotionMovementParams                   RootMotionParams;                                         // 0x0670(0x0040) (Transient)
	struct FVector                                     AnimRootMotionVelocity;                                   // 0x06B0(0x000C) (Transient, IsPlainOldData)
	bool                                               bWasSimulatingRootMotion;                                 // 0x06BC(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bAllowPhysicsRotationDuringAnimRootMotion : 1;            // 0x06BD(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData26[0x2];                                       // 0x06BE(0x0002) MISSED OFFSET
	class ABioVehicleBase*                             VehicleOwner;                                             // 0x06C0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData27[0x10];                                      // 0x06C4(0x0010) MISSED OFFSET
	bool                                               bIsAcceptInput;                                           // 0x06D4(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData28[0x3];                                       // 0x06D5(0x0003) MISSED OFFSET
	float                                              NetThrottleInput;                                         // 0x06D8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              NetSteeringInput;                                         // 0x06DC(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              NetRisingInput;                                           // 0x06E0(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData29[0xC];                                       // 0x06E4(0x000C) MISSED OFFSET
	float                                              ForwardSpeed;                                             // 0x06F0(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              AngularSpeed;                                             // 0x06F4(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              HandBrakeRate;                                            // 0x06F8(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bOpenCustomBodyBox;                                       // 0x06FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOpenCustomHeadCapsule;                                   // 0x06FD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRotationCheckHeadCapsule;                                // 0x06FE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBlockRevertTransfrom;                                    // 0x06FF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FloorCheckXReduce;                                        // 0x0700(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFollowBasedVehicle;                                      // 0x0704(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanWalkOnBioVehicle;                                     // 0x0705(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData30[0x2];                                       // 0x0706(0x0002) MISSED OFFSET
	class UCurveFloat*                                 AngularVelocityCurve;                                     // 0x0708(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 AccResistanceCurve;                                       // 0x070C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 DecResistanceCurve;                                       // 0x0710(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 BreakAccelerationCurve;                                   // 0x0714(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 SlopeSpeedFactorCurve;                                    // 0x0718(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultAcceleration;                                      // 0x071C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxBackAcceleration;                                      // 0x0720(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngularAcceleration;                                      // 0x0724(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultAngularVelocity;                                   // 0x0728(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultResistanceCoefficient;                             // 0x072C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultStaticResistance;                                  // 0x0730(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultBrakeAcceleration;                                 // 0x0734(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultSpeed;                                             // 0x0738(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxBackSpeed;                                             // 0x073C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DeltaDotFactor;                                           // 0x0740(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SlopeBlockDotFactorMax;                                   // 0x0744(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SlopeBlockDotFactorMin;                                   // 0x0748(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FallingHeadResolveSpeed;                                  // 0x074C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData31[0x4];                                       // 0x0750(0x0004) MISSED OFFSET
	float                                              SeriousInjuredSpeedFactor;                                // 0x0754(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData32[0x4];                                       // 0x0758(0x0004) MISSED OFFSET
	float                                              fKeepMinSpeed;                                            // 0x075C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDisableOBSmooth : 1;                                     // 0x0760(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData33[0x3];                                       // 0x0761(0x0003) MISSED OFFSET
	float                                              MinJumpSpeed;                                             // 0x0764(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceClientNoCombineWhenRot;                             // 0x0768(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceClientNoCombineWhenJump;                            // 0x0769(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceClientNoCombineWhenHeadBlock;                       // 0x076A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceClientNoCombineWhenStepup;                          // 0x076B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeadBlockNoCombineInterval;                               // 0x076C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StepUpNoCombineInterval;                                  // 0x0770(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData34[0x8];                                       // 0x0774(0x0008) MISSED OFFSET
	unsigned char                                      NoCombineDeviceLevel;                                     // 0x077C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData35[0x3];                                       // 0x077D(0x0003) MISSED OFFSET
	float                                              NoCombineSecondsPerFrame;                                 // 0x0780(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutonomousMoveWeakNetScaleMSecsMin;                       // 0x0784(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutonomousMoveWeakNetScaleMSecsMax;                       // 0x0788(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutonomousMoveWeakNetScaleRate;                           // 0x078C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bServerMoveCheckPassWall;                                 // 0x0790(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTeleportIgnoreCheckPassWall;                             // 0x0791(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData36[0x2];                                       // 0x0792(0x0002) MISSED OFFSET
	float                                              RadiusScaleWhenCheckPassWall;                             // 0x0794(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeightScaleWhenCheckPassWall;                             // 0x0798(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnablePenetrationResolve;                                // 0x079C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData37[0x3];                                       // 0x079D(0x0003) MISSED OFFSET
	int                                                PenetrationUnResolveCount;                                // 0x07A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PenetrationUnResolveDistanceSq;                           // 0x07A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PenetrationResolveValidDistanceSq;                        // 0x07A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PenetrationResolveValidDistanceMax;                       // 0x07AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData38[0x10];                                      // 0x07B0(0x0010) MISSED OFFSET
	struct FResolvePenetrationMoveData                 ResolvePenetrationMove;                                   // 0x07C0(0x0088) (Transient)
	struct FResolvePenetrationParams                   ResolvePenetrationParams;                                 // 0x0848(0x0050) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData39[0x68];                                      // 0x0898(0x0068) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBioVehicleResolvePenetrationDelegate;                   // 0x0900(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData40[0xC];                                       // 0x090C(0x000C) MISSED OFFSET
	float                                              DefaultJumpHeight;                                        // 0x0918(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 JumpingHeightCurve;                                       // 0x091C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 JumpingHeightByObsHeightCurve;                            // 0x0920(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bIsControlJumpHeight : 1;                                 // 0x0924(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bApplyGravityWhileJumping : 1;                            // 0x0924(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData41[0x3];                                       // 0x0925(0x0003) MISSED OFFSET
	float                                              JumpHorizontalVelocityScale;                              // 0x0928(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StandByJumpSpeed;                                         // 0x092C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StandByJumpSpeedZ;                                        // 0x0930(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JumpZVelocity;                                            // 0x0934(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JumpOffJumpZFactor;                                       // 0x0938(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JumpOffVelocityScale;                                     // 0x093C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSimulateZeroVelocityDeferFindFloor;                      // 0x0940(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData42[0x3];                                       // 0x0941(0x0003) MISSED OFFSET
	float                                              SimulateFindFloorInternal;                                // 0x0944(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SimulateOptimizeCountsNum;                                // 0x0948(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData43[0x4];                                       // 0x094C(0x0004) MISSED OFFSET
	bool                                               bUseSelfLocDiffThreshold;                                 // 0x0950(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData44[0x3];                                       // 0x0951(0x0003) MISSED OFFSET
	float                                              MaxAllowedLocDiffSquare;                                  // 0x0954(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceApplyServerMovementMode;                            // 0x0958(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bServerCheckJumpZLocDiff;                                 // 0x0959(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData45[0x2];                                       // 0x095A(0x0002) MISSED OFFSET
	float                                              JumpProtectionZThreshold;                                 // 0x095C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSimulateProtection;                                      // 0x0960(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData46[0x3];                                       // 0x0961(0x0003) MISSED OFFSET
	float                                              SimulateProtectionInterval;                               // 0x0964(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData47[0x14];                                      // 0x0968(0x0014) MISSED OFFSET
	bool                                               bSimulateMovement;                                        // 0x097C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableServerAntiCheat;                                   // 0x097D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData48[0x2];                                       // 0x097E(0x0002) MISSED OFFSET
	float                                              SecurityAllowedMoveSpeedRatio;                            // 0x0980(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSecuritySpeedPingAdaption;                               // 0x0984(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData49[0x3];                                       // 0x0985(0x0003) MISSED OFFSET
	float                                              SecuritySpeedPingAdaptionRate;                            // 0x0988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SecurityCheckThres;                                       // 0x098C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData50[0x20];                                      // 0x0990(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.BioVehicleMovementComponent");
		return pStaticClass;
	}


	void UnpackAccelerationToInput(const struct FVector& InAccel);
	bool ShouldRecordPosition();
	void SetWalkableFloorZ(float InWalkableFloorZ);
	void SetWalkableFloorAngle(float InWalkableFloorAngle);
	void SetThrottleInput(float rate);
	void SetSteeringInput(float rate);
	void SetRisingInput(float rate);
	void SetMovementMode(TEnumAsByte<EMovementMode> NewMovementMode, unsigned char NewCustomMode);
	void SetGroupsToIgnoreMask(const struct FNavAvoidanceMask& GroupMask);
	void SetGroupsToIgnore(int GroupFlags);
	void SetGroupsToAvoidMask(const struct FNavAvoidanceMask& GroupMask);
	void SetGroupsToAvoid(int GroupFlags);
	void SetAvoidanceGroupMask(const struct FNavAvoidanceMask& GroupMask);
	void SetAvoidanceGroup(int GroupFlags);
	void SetAvoidanceEnabled(bool bEnable);
	void SetAcceptInput(bool bIsAccept);
	void ServerSetThrottleInput(float rate);
	void ServerSetSteeringInput(float rate);
	void ServerSetRisingInput(float rate);
	void ServerMoveOld(float OldTimeStamp, const struct FVector_NetQuantize10& OldAccel, unsigned char OldMoveFlags);
	void ServerMoveDualHybridRootMotion(float TimeStamp0, const struct FVector_NetQuantize10& InAccel0, unsigned char PendingFlags, uint32_t View0, float TimeStamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char NewFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const struct FName& ClientBaseBoneName, unsigned char ClientMovementMode);
	void ServerMoveDual(float TimeStamp0, const struct FVector_NetQuantize10& InAccel0, unsigned char PendingFlags, uint32_t View0, float TimeStamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char NewFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const struct FName& ClientBaseBoneName, unsigned char ClientMovementMode);
	void ServerMove(float TimeStamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char CompressedMoveFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const struct FName& ClientBaseBoneName, unsigned char ClientMovementMode);
	struct FVector PackInputToAcceleration();
	float K2_GetWalkableFloorZ();
	float K2_GetWalkableFloorAngle();
	float K2_GetModifiedMaxAcceleration();
	void K2_FindFloor(const struct FVector& CapsuleLocation, struct FFindFloorResult* FloorResult);
	void K2_ComputeFloorDist(const struct FVector& CapsuleLocation, float LineDistance, float SweepDistance, float SweepRadius, struct FFindFloorResult* FloorResult);
	bool IsWalking();
	bool IsWalkable(const struct FHitResult& Hit);
	bool IsSwimming();
	bool IsSeriousInjuriedAllowJumping();
	void HandleOnSeatDetached(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType, int SeatIdx);
	void HandleOnSeatChanged(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType LastSeatType, int LastSeatIdx, ESTExtraVehicleSeatType NewSeatType, int NewSeatIdx);
	void HandleOnSeatAttached(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType, int SeatIdx);
	void HandleOnExitVehicleAnim(class ASTExtraPlayerCharacter* Character, int SeatInx);
	float GetWalkingDecResistance(float Speed);
	float GetWalkingAccResistance(float Speed);
	float GetValidPerchRadius();
	float GetThrottleInput();
	float GetSteeringInput();
	float GetSlopeSpeedFactor(float Slope);
	float GetRisingInput();
	struct FVector GetPredictVelocity(float PredictTime);
	float GetPerchRadiusThreshold();
	class UPrimitiveComponent* GetMovementBase();
	float GetMinAnalogSpeed();
	float GetMaxJumpHeightWithJumpTime();
	float GetMaxJumpHeight();
	float GetMaxBrakingDeceleration();
	float GetMaxAcceleration();
	float GetJumpVelocityZ();
	float GetJumpingHeightBySpeed(float Speed);
	float GetJumpingHeightByObsHeight(float ObsHeight);
	struct FVector GetImpartedMovementBaseVelocity();
	float GetDesireAcceleration();
	float GetCurrentSecuritySpeedRatio();
	float GetCurrentMaxAllowedSpeed();
	struct FVector GetCurrentAcceleration();
	float GetBreakAcceleration(float Speed);
	float GetAngularVelocityByCurve(float Speed, bool AsForce);
	float GetAnalogInputModifier();
	void DisableMovement();
	void DealWithCustomAction(float DeltaTime);
	void ClientVeryShortAdjustPosition(float TimeStamp, const struct FVector& NewLoc, class UPrimitiveComponent* NewBase, const struct FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode);
	void ClientAdjustRootMotionSourcePosition(float TimeStamp, const struct FRootMotionSourceGroup& ServerRootMotion, bool bHasAnimRootMotion, float ServerMontageTrackPosition, const struct FVector& ServerLoc, const struct FVector_NetQuantizeNormal& ServerRotation, float ServerVelZ, class UPrimitiveComponent* ServerBase, const struct FName& ServerBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode);
	void ClientAdjustRootMotionPosition(float TimeStamp, float ServerMontageTrackPosition, const struct FVector& ServerLoc, const struct FVector_NetQuantizeNormal& ServerRotation, float ServerVelZ, class UPrimitiveComponent* ServerBase, const struct FName& ServerBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode);
	void ClientAdjustPositionAndRotation(float TimeStamp, const struct FVector& NewLoc, const struct FRotator& NewRot, const struct FVector& NewVel, class UPrimitiveComponent* NewBase, const struct FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode);
	void ClientAdjustPosition(float TimeStamp, const struct FVector& NewLoc, const struct FVector& NewVel, class UPrimitiveComponent* NewBase, const struct FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode);
	void ClientAckGoodMove(float TimeStamp);
	void ClearAccumulatedForces();
	void CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void CalcVelocity(float DeltaTime, float Friction, bool bFluid, float BrakingDeceleration);
	void CalculateVelocityWithResistance(float DeltaTime, bool bFluid);
	float CalculateCurrentForwardSpeed();
	void AddImpulse(const struct FVector& Impulse, bool bVelocityChange);
	void AddForce(const struct FVector& force);
	void AddDirectionalBrakingAcceleration(const struct FVector& BrakingAcceleration);
};


// Class Addons.BioFlyMovementComponentBase
// 0x0110 (0x0AC0 - 0x09B0)
class UBioFlyMovementComponentBase : public UBioVehicleMovementComponent
{
public:
	float                                              MaxDownSpeed;                                             // 0x09B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxFlyingZ;                                               // 0x09B4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              MaxTraceDownHeight;                                       // 0x09B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxFlyingHeight;                                          // 0x09BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinFlyingHeight;                                          // 0x09C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlyingHeightThres;                                        // 0x09C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxTakeOffTime;                                           // 0x09C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                TakeOffCurve;                                             // 0x09CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      CacheSplineActor;                                         // 0x09D0(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bNoDriverForceNoSimulate;                                 // 0x09D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNoDriverForceLanding;                                    // 0x09D5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckClientFlyingHeight;                                 // 0x09D6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckClientFlyingZDiff;                                  // 0x09D7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxFlyingLocZDiff;                                        // 0x09D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttachCollisionHeightScaleWhenCheckPassWall;              // 0x09DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttachCollisionRadiusScaleWhenCheckPassWall;              // 0x09E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngularSpeedInterpSpeed;                                  // 0x09E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpotRotator;                                              // 0x09E8(0x000C) (IsPlainOldData)
	float                                              SpotTurnStartTime;                                        // 0x09F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpotTurnEndTime;                                          // 0x09F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              targetAngularSpeed;                                       // 0x09FC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpotTurnAngularSpeed;                                     // 0x0A00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              fBeginTurnInterpSpeed;                                    // 0x0A04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              fEndTurnInterpSpeed;                                      // 0x0A08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngularSpeedLerpFactor;                                   // 0x0A0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RightToLeftSpeedLerpFactor;                               // 0x0A10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LowSpeedRotationThreshold;                                // 0x0A14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PhysicsRotateTolerance;                                   // 0x0A18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0A1C(0x000C) MISSED OFFSET
	float                                              MaxFlyAcceleration;                                       // 0x0A28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlySteeringRotationSpeed;                                 // 0x0A2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0A30(0x0010) MISSED OFFSET
	class AReindeerBioVehicle*                         ReindeerOwner;                                            // 0x0A40(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FFlyBioVehicleUpdateDistanceToLandConfig> UpdateGroundDistanceConfigs;                              // 0x0A44(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIgnoreHeightLimit;                                       // 0x0A50(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckLandingGround;                                      // 0x0A51(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0A52(0x0002) MISSED OFFSET
	float                                              DistanceToLand;                                           // 0x0A54(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              LastCheckGroundInterval;                                  // 0x0A58(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2C];                                      // 0x0A5C(0x002C) MISSED OFFSET
	class UCurveVector*                                SpeedCurve;                                               // 0x0A88(0x0004) (ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                PositionCurve;                                            // 0x0A8C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x0A90(0x0001) MISSED OFFSET
	bool                                               bCheckAttachCollision;                                    // 0x0A91(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableAttachBlockVelocityLimit;                          // 0x0A92(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x0A93(0x0001) MISSED OFFSET
	float                                              AttachBlockLimitVelocity;                                 // 0x0A94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFlyingBlockAttachSlide;                                  // 0x0A98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0A99(0x0003) MISSED OFFSET
	float                                              AttachCapsuleTraceGroundScale;                            // 0x0A9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SimulateLandingInput;                                     // 0x0AA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlyingCheckPenetrateRadiusScale;                          // 0x0AA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlyingCheckPenetrateHeightScale;                          // 0x0AA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRotationCheckAttachCapsule;                              // 0x0AAC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0AAD(0x0003) MISSED OFFSET
	class UCapsuleComponent*                           AttachedCollision;                                        // 0x0AB0(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData08[0xC];                                       // 0x0AB4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.BioFlyMovementComponentBase");
		return pStaticClass;
	}


	void UpdateVerticalHeight(float DeltaTime);
	void StartTakingOff();
	void SetMovementMode(TEnumAsByte<EMovementMode> NewMovementMode, unsigned char NewCustomMode);
	bool IsTakingOff();
	bool IsCurveMoving();
	EFlyBioVehicleMoveMode GetMoveState();
	float GetDistanceToLand();
	void EndTakingOff();
	void CalculateFlyingVelocity(float DeltaTime);
	void CalculateFlyingAcceleration(float DeltaTime);
};


// Class Addons.BioVehicleAnimInstanceBase
// 0x00A0 (0x03A0 - 0x0300)
class UBioVehicleAnimInstanceBase : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0300(0x0048) MISSED OFFSET
	TArray<float>                                      LOD_Level_DistanceFactor;                                 // 0x0348(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UAssetPlayerSyncNode*                        AssetPlayerSyncNode;                                      // 0x0354(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class ABioVehicleBase*                             OwnerVehicle;                                             // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsServer;                                                // 0x035C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsDead;                                                  // 0x035D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bHasBeenTamed;                                            // 0x035E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bAnimVarHasCached;                                        // 0x035F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bHasDrivers;                                              // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasAnyPassengers;                                        // 0x0361(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableTerrainAdaption;                                   // 0x0362(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bEnableSlopeAdaption;                                     // 0x0363(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bEnableLegAdaption;                                       // 0x0364(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0365(0x0003) MISSED OFFSET
	float                                              CurrentDistanceFactor;                                    // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                AnimLOD;                                                  // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnAnimLODChanged;                                         // 0x0370(0x000C) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UAnimSequence*                               DeathAnim;                                                // 0x037C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UBioVehicleRiderAnimInstanceBase> DriverAnimInstance;                                       // 0x0380(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0388(0x0004) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x038C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0398(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.BioVehicleAnimInstanceBase");
		return pStaticClass;
	}


	void LuaOnAnimLodChanged(int NewAnimLod);
	void LuaInitializeWithDeviceLevel(int DeviceLevel);
	void LuaInitializeAnimation();
};


// Class Addons.BioVehicleAnimListComponent
// 0x0048 (0x0198 - 0x0150)
class UBioVehicleAnimListComponent : public UCachedAnimListComponentBase
{
public:
	class UAnimationData*                              AnimationData;                                            // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsAssetsLoading;                                         // 0x0154(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0155(0x0003) MISSED OFFSET
	TMap<struct FName, class UAnimationAsset*>         CachedAssets;                                             // 0x0158(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0194(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.BioVehicleAnimListComponent");
		return pStaticClass;
	}

};


// Class Addons.BioVehicleBase
// 0x02D0 (0x1390 - 0x10C0)
class ABioVehicleBase : public ASTExtraVehicleBase
{
public:
	struct FScriptMulticastDelegate                    OnBioVehicleFrozen;                                       // 0x10C0(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBioVehicleRunOutFuel;                                   // 0x10CC(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bFuelExhausted;                                           // 0x10D8(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x10D9(0x0003) MISSED OFFSET
	class UBioVehicleMovementComponent*                VehicleMovement;                                          // 0x10DC(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           CapsuleComponent;                                         // 0x10E0(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               BodyBoxComponent;                                         // 0x10E4(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           HeadCapsuleComponent;                                     // 0x10E8(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UVehicleSpringArmComponent*                  BioVehicleSpringArm;                                      // 0x10EC(0x0004) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnBeginAccelerate;                                        // 0x10F0(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEndAccelerate;                                          // 0x10FC(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bHasAcceleration;                                         // 0x1108(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bHasAccelerationLastFrame;                                // 0x1109(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1E];                                      // 0x110A(0x001E) MISSED OFFSET
	struct FBasedMovementInfo                          BasedMovement;                                            // 0x1128(0x0030)
	struct FBasedMovementInfo                          ReplicatedBasedMovement;                                  // 0x1158(0x0030) (Net)
	struct FVector                                     BaseTranslationOffset;                                    // 0x1188(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x1194(0x000C) MISSED OFFSET
	struct FQuat                                       BaseRotationOffset;                                       // 0x11A0(0x0010) (IsPlainOldData)
	bool                                               bInBaseReplication;                                       // 0x11B0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xF];                                       // 0x11B1(0x000F) MISSED OFFSET
	struct FRootMotionMovementParams                   ClientRootMotionParams;                                   // 0x11C0(0x0040) (Transient)
	bool                                               bCanVehicleJump;                                          // 0x1200(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSimGravityDisabled : 1;                                  // 0x1201(0x0001)
	unsigned char                                      bPressedJump : 1;                                         // 0x1201(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bWasJumping : 1;                                          // 0x1201(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst)
	unsigned char                                      UnknownData04[0x2];                                       // 0x1202(0x0002) MISSED OFFSET
	float                                              JumpKeyHoldTime;                                          // 0x1204(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	float                                              JumpForceTimeRemaining;                                   // 0x1208(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	float                                              ProxyJumpForceStartedTime;                                // 0x120C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	float                                              JumpMaxHoldTime;                                          // 0x1210(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                JumpMaxCount;                                             // 0x1214(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                JumpCurrentCount;                                         // 0x1218(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	float                                              BioVehicleLaunchCollDownTime;                             // 0x121C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnReachedJumpApex;                                        // 0x1220(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData05[0xC];                                       // 0x122C(0x000C) MISSED OFFSET
	struct FScriptMulticastDelegate                    MovementModeChangedDelegate;                              // 0x1238(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBioVehicleJumped;                                       // 0x1244(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCharacterMovementUpdated;                               // 0x1250(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      ReplicatedMovementMode;                                   // 0x125C(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bClientCheckEncroachmentOnNetUpdate : 1;                  // 0x125D(0x0001) (Transient)
	unsigned char                                      bClientUpdating : 1;                                      // 0x125D(0x0001) (Transient)
	unsigned char                                      bClientWasFalling : 1;                                    // 0x125D(0x0001) (Transient)
	unsigned char                                      UnknownData06[0xA];                                       // 0x125E(0x000A) MISSED OFFSET
	bool                                               HasBeenTamed;                                             // 0x1268(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x13];                                      // 0x1269(0x0013) MISSED OFFSET
	bool                                               bCanbeDamagedByTrex;                                      // 0x127C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldGenerateStaticDeadBodyWhileDeath;                  // 0x127D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x127E(0x0002) MISSED OFFSET
	float                                              OverlapTestScale;                                         // 0x1280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnBioVehicleBeenTamed;                                    // 0x1284(0x000C) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	class USkeletalMesh*                               UntamedMesh;                                              // 0x1290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               TamedMesh;                                                // 0x1294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, struct FFootStepEffect>         FootStepEffects;                                          // 0x1298(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FName, class UParticleSystemComponent*> FootStepEffectRuntimeData;                                // 0x12D4(0x0050) (ExportObject, ZeroConstructor, Transient)
	struct FScriptMulticastDelegate                    OnAnimInstanceActive;                                     // 0x1310(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bShouldPlayRandomIdleWhilePassengersOn;                   // 0x131C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x131D(0x0003) MISSED OFFSET
	float                                              RandomIdleResetTimeMin;                                   // 0x1320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RandomIdleResetTimeMax;                                   // 0x1324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RandomIdleIndexMin;                                       // 0x1328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RandomIdleIndexMax;                                       // 0x132C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnBioVehicleDoRandomIdle;                                 // 0x1330(0x000C) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData10[0x8];                                       // 0x133C(0x0008) MISSED OFFSET
	bool                                               bEnableSimulatedOptimize;                                 // 0x1344(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x1345(0x0003) MISSED OFFSET
	TArray<struct FSimulateThresholds>                 BioVehicleSimulateThresholds;                             // 0x1348(0x000C) (ZeroConstructor, Config)
	bool                                               bEnableCollisionOptimization;                             // 0x1354(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x1355(0x0003) MISSED OFFSET
	float                                              OpenCollisionMinDistSq;                                   // 0x1358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShooterOpenCollisionMaxCosTheta;                          // 0x135C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FOpenCollisionLODAngle>              BioVehicleCollisionDistSqAngles;                          // 0x1360(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              CheckCollisionOpenInternal;                               // 0x136C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       CreatureVehicleMesh_ProfileName;                          // 0x1370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugCollisionLine;                                      // 0x1378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0xB];                                       // 0x1379(0x000B) MISSED OFFSET
	class ASTExtraBaseCharacter*                       CacheNearlyCharacer;                                      // 0x1384(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x8];                                       // 0x1388(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.BioVehicleBase");
		return pStaticClass;
	}


	void StopJumping();
	void SetSimulatePhysics(bool bSimulate);
	void SetReplicateMovement(bool bInReplicateMovement);
	void SetHandBrake(float rate);
	void ServerResetToPosition(const struct FVector& NewLocation, const struct FRotator& NewRotation);
	void OnWalkingOffLedge(const struct FVector& PreviousFloorImpactNormal, const struct FVector& PreviousFloorContactNormal, const struct FVector& PreviousLocation, float TimeDelta);
	void OnTakingDamage(class AActor* HitActor, class AActor* HitInstigator, const struct FHitResult& HitInfo, const struct FVector& ImpulseDir, float Damage);
	void OnRep_ReplicatedBasedMovement();
	void OnRep_HasBeenTamed();
	void OnRep_FuelExhausted(bool bPrevFuelExhausted);
	void OnLaunched(const struct FVector& LaunchVelocity, bool bXYOverride, bool bZOverride);
	void OnLanded(const struct FHitResult& Hit);
	void OnJumped();
	void OnExitingVehicleOnServer();
	void OnEnteringVehicleOnServer(bool IsSucc);
	void MoveUp(float rate);
	void LaunchCharacter(const struct FVector& LaunchVelocity, bool bXYOverride, bool bZOverride);
	void K2_UpdateCustomMovement(float DeltaTime);
	void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode> PrevMovementMode, TEnumAsByte<EMovementMode> NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode);
	void Jump();
	bool IsPlayingRootMotion();
	bool IsJumpProvidingForce();
	void HandleOnRiderAnimInstanceActive(class UAnimInstance* ActivedAnimInstance);
	void HandleOnClientBeenTamed();
	float GetVehicleOriginToLand();
	bool GetVehicleBreakOutState();
	struct FVector GetRotationInputDir();
	struct FRotator GetPlayerLookAtRotation();
	float GetConsumeFuelRate();
	class UBoxComponent* GetBodyShapeComponent();
	class UBioVehicleMovementComponent* GetBioVehicleMovement();
	struct FVector GetBaseTranslationOffset();
	class UBioVehicleAnimListComponent* GetAnimListComponent();
	void ExitVehicle();
	void EnterVehicle(bool IsSucc);
	void ClientEnterVehicle(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType);
	bool CanJumpInternal();
	bool CanJump();
	bool CanConsumeFuel();
	void CacheInitialMeshOffset(const struct FVector& MeshRelativeLocation, const struct FRotator& MeshRelativeRotation);
	void BroadCastPlayingRandomIdleAnim(int RandomIdleAnim);
	void ActiveFootParticleEffect(const struct FName& EffectName, const struct FVector& ActivedLocation);
};


// Class Addons.BioVehicleDamageComponent
// 0x0020 (0x0440 - 0x0420)
class UBioVehicleDamageComponent : public UVehicleDamageComponent
{
public:
	float                                              MaxHitByVehicleImpulseVelocity;                           // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinHitByVehicleImpulseVelocity;                           // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ImpulseSelfCD;                                            // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x042C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.BioVehicleDamageComponent");
		return pStaticClass;
	}

};


// Class Addons.BioVehicleRiderAnimInstanceBase
// 0x0020 (0x0810 - 0x07F0)
class UBioVehicleRiderAnimInstanceBase : public UVehicleCharacterAnimInstanceBase
{
public:
	class UAnimMontage*                                MountAnimMontage;                                         // 0x07F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAssetPlayerSyncNode*                        AssetPlayerSyncNode;                                      // 0x07F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsDead;                                                  // 0x07F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableTerrainAdaption;                                   // 0x07F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x07FA(0x0002) MISSED OFFSET
	int                                                AnimLOD;                                                  // 0x07FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	class UBioVehicleAnimInstanceBase*                 CachedOwnerBioVehicleAnimInstance;                        // 0x0800(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0804(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.BioVehicleRiderAnimInstanceBase");
		return pStaticClass;
	}

};


// Class Addons.BioVehicleSkeletalMeshComponent
// 0x0000 (0x0C50 - 0x0C50)
class UBioVehicleSkeletalMeshComponent : public UUAESkeletalMeshComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.BioVehicleSkeletalMeshComponent");
		return pStaticClass;
	}

};


// Class Addons.DancerZombieAnimInstance
// 0x0020 (0x04F0 - 0x04D0)
class UDancerZombieAnimInstance : public UMonsterAnimInstanceBase
{
public:
	TEnumAsByte<EDancingState>                         DancingState;                                             // 0x04D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04D1(0x0003) MISSED OFFSET
	class UAnimSequence*                               DanceMoveStartAnim;                                       // 0x04D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UAnimSequence*                               DanceMoveLoopAnim;                                        // 0x04D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UAnimSequence*                               DanceMoveEndAnim;                                         // 0x04DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UAnimSequence*                               DancingAnim;                                              // 0x04E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x04E4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.DancerZombieAnimInstance");
		return pStaticClass;
	}

};


// Class Addons.DinosaurMonsterAnimInstanceBase
// 0x0000 (0x04D0 - 0x04D0)
class UDinosaurMonsterAnimInstanceBase : public USTExtraMonsterAnimInstance
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.DinosaurMonsterAnimInstanceBase");
		return pStaticClass;
	}

};


// Class Addons.DistanceMatchingComponent
// 0x0030 (0x00F8 - 0x00C8)
class UDistanceMatchingComponent : public UActorComponent
{
public:
	float                                              SpeedThreshold;                                           // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SweepUpOffset;                                            // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SweepDownOffset;                                          // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PredictedLocation;                                        // 0x00D4(0x000C) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnDistanceMatchSuccess;                                   // 0x00E0(0x000C) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bShouldOnlyDistanceMatchingOnAutonomousProxy;             // 0x00EC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00ED(0x0003) MISSED OFFSET
	class UBioVehicleMovementComponent*                BioVehicleMovement;                                       // 0x00F0(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           CapsuleComponent;                                         // 0x00F4(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.DistanceMatchingComponent");
		return pStaticClass;
	}


	void ServerOnDistanceMatchSuccess(const struct FVector& PredictedStopLocation);
	bool PredictStopLocation(struct FVector* OutLocation);
	void OnEndAccelerating();
	class UAnimInstance* GetBioVehicleAnimInstance();
	void BroadCastOnDistanceMatchSuccess(const struct FVector& PredictedStopLocation);
};


// Class Addons.DistanceMatchingInterface
// 0x0000 (0x0020 - 0x0020)
class UDistanceMatchingInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.DistanceMatchingInterface");
		return pStaticClass;
	}


	void OnDistanceMatchingSuccess(const struct FVector& PredictedStopLocation);
};


// Class Addons.EventDataCollectionKeys
// 0x0004 (0x0020 - 0x001C)
class UEventDataCollectionKeys : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys");
		return pStaticClass;
	}


	static struct FString GetTimestamp();
	static struct FString GetTeammatePositions();
	static struct FString GetSelfPosition();
};


// Class Addons.EventDataCollectionValues
// 0x0004 (0x0020 - 0x001C)
class UEventDataCollectionValues : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues");
		return pStaticClass;
	}


	static struct FString GetTeammatePositionsFromContext(class AActor* ActorContext);
	static struct FString GetTeammatePositions(class ASTExtraPlayerState* STExtraPlayerState);
	static struct FString GetTeammateOpenIds(class ASTExtraPlayerState* STExtraPlayerState);
};


// Class Addons.EventDataCollectionKeys_RankingScore
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_RankingScore : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_RankingScore");
		return pStaticClass;
	}


	static struct FString GetViewType();
	static struct FString GetTreatment();
	static struct FString GetTime();
	static struct FString GetTeammates();
	static struct FString GetSurvivalTime();
	static struct FString GetRescureCount();
	static struct FString GetRescueTimes();
	static struct FString GetRank();
	static struct FString GetPlayerName();
	static struct FString GetMaxKillDistance();
	static struct FString GetMarchDistance();
	static struct FString GetMapId();
	static struct FString GetKnockouts();
	static struct FString GetKillNumInVehicle();
	static struct FString GetKillNumByGrenade();
	static struct FString GetKillNum();
	static struct FString GetKill();
	static struct FString GetInDamage();
	static struct FString GetHurt();
	static struct FString GetHeal();
	static struct FString GetHeadShotNum();
	static struct FString GetGotAirDropNum();
	static struct FString GetGameID();
	static struct FString GetDriveDistance();
	static struct FString GetDamage();
	static struct FString GetAssists();
	static struct FString GetAliveTeamNum();
	static struct FString GetAlivePlayerNum();
};


// Class Addons.EventDataCollectionKeys_GameStatus
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_GameStatus : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_GameStatus");
		return pStaticClass;
	}


	static struct FString GetWorldLocation();
	static struct FString GetWeather();
	static struct FString GetTotalPlayerCount();
	static struct FString GetToPlaneCarryLeftTime();
	static struct FString GetTeamId();
	static struct FString GetPlaneRouteStop();
	static struct FString GetPlaneRouteStart();
	static struct FString GetOpenId();
	static struct FString GetGameStatus();
	static struct FString GetAlivePlayerCount();
};


// Class Addons.EventDataCollectionValues_GameStatus_GameStatus
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_GameStatus_GameStatus : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_GameStatus_GameStatus");
		return pStaticClass;
	}


	static struct FString GetWin();
	static struct FString GetWaitingOnLobby();
	static struct FString GetQualityPlaza();
	static struct FString GetPlaneCarrying();
	static struct FString GetParachuteOpen();
	static struct FString GetParachuteJumping();
	static struct FString GetMatching();
	static struct FString GetLanding();
	static struct FString GetFireWorking();
	static struct FString GetFighting();
	static struct FString GetCake();
};


// Class Addons.EventDataCollectionKeys_StartMatching
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_StartMatching : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_StartMatching");
		return pStaticClass;
	}


	static struct FString GetViewType();
	static struct FString GetTeamCount();
	static struct FString GetPlayerCountInGameMode();
	static struct FString GetMapId();
	static struct FString GetGameMode();
	static struct FString GetFullTeamCount();
};


// Class Addons.EventDataCollectionKeys_PlaneCarrying
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_PlaneCarrying : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_PlaneCarrying");
		return pStaticClass;
	}


	static struct FString GetStartPosition();
	static struct FString GetEndPosition();
};


// Class Addons.EventDataCollectionKeys_PuttingDownCakeFireWorks
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_PuttingDownCakeFireWorks : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_PuttingDownCakeFireWorks");
		return pStaticClass;
	}


	static struct FString GetFireWorksOpenId();
	static struct FString GetCakeOpenId();
};


// Class Addons.EventDataCollectionKeys_TakeDropItem
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_TakeDropItem : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_TakeDropItem");
		return pStaticClass;
	}


	static struct FString GetType();
	static struct FString GetReason();
	static struct FString GetPlayerName();
	static struct FString GetOpenId();
	static struct FString GetItemInstanceId();
	static struct FString GetItemId();
	static struct FString GetItemCount();
	static struct FString GetHoldingCount();
	static struct FString GetBulletCount();
	static struct FString GetBackpackAvatarItemDurability();
};


// Class Addons.EventDataCollectionValues_TakeDropItem_Type
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_TakeDropItem_Type : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_TakeDropItem_Type");
		return pStaticClass;
	}


	static struct FString GetTaking();
	static struct FString GetDropping();
};


// Class Addons.EventDataCollectionKeys_UsingItem
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_UsingItem : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_UsingItem");
		return pStaticClass;
	}


	static struct FString GetStatus();
	static struct FString GetPredictLine();
	static struct FString GetPlayerName();
	static struct FString GetOpenId();
	static struct FString GetItemLeftCount();
	static struct FString GetItemId();
};


// Class Addons.EventDataCollectionValues_UsingItem_Status
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_UsingItem_Status : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_UsingItem_Status");
		return pStaticClass;
	}


	static struct FString GetLeading();
	static struct FString GetInteruption();
	static struct FString GetCompletion();
};


// Class Addons.EventDataCollectionKeys_Climbing
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_Climbing : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_Climbing");
		return pStaticClass;
	}

};


// Class Addons.EventDataCollectionKeys_Falling
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_Falling : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_Falling");
		return pStaticClass;
	}


	static struct FString GetType();
	static struct FString GetStatus();
};


// Class Addons.EventDataCollectionValues_Falling_Type
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_Falling_Type : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_Falling_Type");
		return pStaticClass;
	}


	static struct FString GetStart();
	static struct FString GetEnd();
};


// Class Addons.EventDataCollectionValues_Falling_Status
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_Falling_Status : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_Falling_Status");
		return pStaticClass;
	}


	static struct FString GetNonDriving();
	static struct FString GetDriving();
};


// Class Addons.EventDataCollectionKeys_InFieldOfView
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_InFieldOfView : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_InFieldOfView");
		return pStaticClass;
	}


	static struct FString GetUniqueIdentifier();
	static struct FString GetTargetWorldLocation();
	static struct FString GetOldFieldOfViewNotificationStatus();
	static struct FString GetMyWorldLocation();
	static struct FString GetMinimalScreenLocation();
	static struct FString GetMaximumScreenLocation();
	static struct FString GetFieldOfViewTargetCategory();
	static struct FString GetCurrentFieldOfViewNotificationStatus();
};


// Class Addons.EventDataCollectionValues_InFieldOfView_FieldOfView
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_InFieldOfView_FieldOfView : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_InFieldOfView_FieldOfView");
		return pStaticClass;
	}


	static struct FString GetTombBox();
	static struct FString GetTeammateVehicle();
	static struct FString GetTeammate();
	static struct FString GetSmog();
	static struct FString GetFireWorks();
	static struct FString GetEnemyVehicle();
	static struct FString GetEnemy();
	static struct FString GetCake();
	static struct FString GetBombing();
	static struct FString GetAirDroping();
};


// Class Addons.EventDataCollectionKeys_UnderEnermyAttack
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_UnderEnermyAttack : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_UnderEnermyAttack");
		return pStaticClass;
	}


	static struct FString GetValue();
	static struct FString GetTargetPart();
	static struct FString GetResult2();
	static struct FString GetResult();
	static struct FString GetReason();
	static struct FString GetHurtUniqueIdentifier();
	static struct FString GetHurtUid();
	static struct FString GetHurtPosture();
	static struct FString GetHurtPosition();
	static struct FString GetHurtPlayerTeamId();
	static struct FString GetHurtPlayerName();
	static struct FString GetHurtOpenId();
	static struct FString GetHurtMaxBulletCountInClip();
	static struct FString GetHurtIsInHouse();
	static struct FString GetHurtHealth();
	static struct FString GetHurtEquipId();
	static struct FString GetHurtDirection();
	static struct FString GetHurtCarForwardSpeed();
	static struct FString GetHurtBulletCountInClip();
	static struct FString GetHurtBulletCountInBarrel();
	static struct FString GetHurtAim();
	static struct FString GetDph();
	static struct FString GetDistance();
	static struct FString GetCarValue();
	static struct FString GetCarHealth();
	static struct FString GetBeHurtUniqueIdentifier();
	static struct FString GetBeHurtUid();
	static struct FString GetBeHurtPosture();
	static struct FString GetBeHurtPosition();
	static struct FString GetBeHurtPlayerTeamId();
	static struct FString GetBeHurtPlayerName();
	static struct FString GetBeHurtOpenId();
	static struct FString GetBeHurtLastHealth();
	static struct FString GetBeHurtJacketDurabilityReduction();
	static struct FString GetBeHurtJacketDurability();
	static struct FString GetBeHurtJacket();
	static struct FString GetBeHurtIsInHouse();
	static struct FString GetBeHurtHelmetDurabilityReduction();
	static struct FString GetBeHurtHelmetDurability();
	static struct FString GetBeHurtHelmet();
	static struct FString GetBeHurtHealth();
	static struct FString GetBeHurtEquipId();
	static struct FString GetBeHurtDirection();
	static struct FString GetBeHurtCarForwardSpeed();
	static struct FString GetAce();
};


// Class Addons.EventDataCollectionValues_UnderEnermyAttack_Result
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_UnderEnermyAttack_Result : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_UnderEnermyAttack_Result");
		return pStaticClass;
	}


	static struct FString GetWeedingOut();
	static struct FString GetReducingHealth();
	static struct FString GetKnockingOutReducingHealth();
	static struct FString GetKnockingOut();
};


// Class Addons.EventDataCollectionValues_UnderEnermyAttack_Result2
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_UnderEnermyAttack_Result2 : public UEventDataCollectionValues_UnderEnermyAttack_Result
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_UnderEnermyAttack_Result2");
		return pStaticClass;
	}


	static struct FString GetWeedingOut2();
};


// Class Addons.EventDataCollectionValues_UnderEnermyAttack_Reason
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_UnderEnermyAttack_Reason : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_UnderEnermyAttack_Reason");
		return pStaticClass;
	}


	static struct FString GetVehicleColliding();
	static struct FString GetVehicleBombing();
	static struct FString GetPoison();
	static struct FString GetLastBreathWithoutRescue();
	static struct FString GetFalling();
	static struct FString GetDrowning();
	static struct FString GetBombing();
	static struct FString GetAirAttacking();
	static struct FString FromDamageEvent(const struct FDamageEvent& DamageEvent);
};


// Class Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_UnderEnermyAttack_BeHurtPosture");
		return pStaticClass;
	}


	static struct FString GetWalking();
	static struct FString GetTurningHead();
	static struct FString GetStanding();
	static struct FString GetRunning();
	static struct FString GetProning();
	static struct FString GetJumping();
	static struct FString GetDying();
	static struct FString GetDriving();
	static struct FString GetCrouching();
	static struct FString GetCarriging();
	static struct FString FromPawnStates(int64_t PawnStates);
	static struct FString FromPawnState(EPawnState PawnState);
};


// Class Addons.EventDataCollectionValues_UnderEnermyAttack_HurtPosture
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_UnderEnermyAttack_HurtPosture : public UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_UnderEnermyAttack_HurtPosture");
		return pStaticClass;
	}

};


// Class Addons.EventDataCollectionValues_UnderEnermyAttack_HurtAim
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_UnderEnermyAttack_HurtAim : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_UnderEnermyAttack_HurtAim");
		return pStaticClass;
	}


	static struct FString Get(class ASTExtraBaseCharacter* AttackerSTExtraBaseCharacter, class AActor* DamageCauser);
};


// Class Addons.EventDataCollectionKeys_TakingDamage
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_TakingDamage : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_TakingDamage");
		return pStaticClass;
	}


	static struct FString GetResult();
	static struct FString GetReason();
	static struct FString GetPlayerName();
	static struct FString GetOpenId();
	static struct FString GetLeftHealth();
};


// Class Addons.EventDataCollectionValues_TakingDamage_Reason
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_TakingDamage_Reason : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_TakingDamage_Reason");
		return pStaticClass;
	}


	static struct FString GetVehicleColliding();
	static struct FString GetVehicleBombing();
	static struct FString GetPoison();
	static struct FString GetLastBreathWithoutRescue();
	static struct FString GetFalling();
	static struct FString GetDrowning();
	static struct FString GetBombing();
	static struct FString GetAirAttacking();
	static struct FString FromDamageEvent(const struct FDamageEvent& DamageEvent);
};


// Class Addons.EventDataCollectionValues_TakingDamage_Result
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_TakingDamage_Result : public UEventDataCollectionValues_UnderEnermyAttack_Result
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_TakingDamage_Result");
		return pStaticClass;
	}

};


// Class Addons.EventDataCollectionKeys_CircleReducing
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_CircleReducing : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_CircleReducing");
		return pStaticClass;
	}


	static struct FString GetOpenId();
};


// Class Addons.EventDataCollectionKeys_CircleChange
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_CircleChange : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_CircleChange");
		return pStaticClass;
	}


	static struct FString GetWorldLocation();
	static struct FString GetOldCircleRadius();
	static struct FString GetOldCircleCenter();
	static struct FString GetNewCircleRadius();
	static struct FString GetNewCircleCenter();
};


// Class Addons.EventDataCollectionKeys_Rescue
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_Rescue : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_Rescue");
		return pStaticClass;
	}


	static struct FString GetStatus();
	static struct FString GetRescuePlayerName();
	static struct FString GetRescueOpenId();
	static struct FString GetBeRescuePlayerName();
	static struct FString GetBeRescueOpenId();
};


// Class Addons.EventDataCollectionValues_Rescue_Status
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_Rescue_Status : public UEventDataCollectionValues_UsingItem_Status
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_Rescue_Status");
		return pStaticClass;
	}

};


// Class Addons.EventDataCollectionKeys_DrivingVehicle
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_DrivingVehicle : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_DrivingVehicle");
		return pStaticClass;
	}


	static struct FString GetVehicleId();
	static struct FString GetTire();
	static struct FString GetStatus();
	static struct FString GetSpeed();
	static struct FString GetPassengerOpenId();
	static struct FString GetOil();
	static struct FString GetDrivingType();
	static struct FString GetDriverUId();
	static struct FString GetDriverPlayerName();
	static struct FString GetDriverOpenId();
};


// Class Addons.EventDataCollectionValues_DrivingVehicle_DrivingType
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_DrivingVehicle_DrivingType : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_DrivingVehicle_DrivingType");
		return pStaticClass;
	}


	static struct FString GetPassanger();
	static struct FString GetDriver();
};


// Class Addons.EventDataCollectionValues_DrivingVehicle_Status
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_DrivingVehicle_Status : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_DrivingVehicle_Status");
		return pStaticClass;
	}


	static struct FString GetOn();
	static struct FString GetOff();
};


// Class Addons.EventDataCollectionKeys_ReloadingBullet
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_ReloadingBullet : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_ReloadingBullet");
		return pStaticClass;
	}


	static struct FString GetMaxBulletCountInClip();
	static struct FString GetBulletCountInClip();
	static struct FString GetBulletCountInBarrel();
};


// Class Addons.EventDataCollectionKeys_AirDrop
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_AirDrop : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_AirDrop");
		return pStaticClass;
	}


	static struct FString GetType();
	static struct FString GetPosition();
	static struct FString GetLandedPosition();
};


// Class Addons.EventDataCollectionValues_AirDrop_Type
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_AirDrop_Type : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_AirDrop_Type");
		return pStaticClass;
	}


	static struct FString GetSuper();
	static struct FString GetNormal();
};


// Class Addons.EventDataCollectionKeys_ItemAttach
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_ItemAttach : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_ItemAttach");
		return pStaticClass;
	}


	static struct FString GetState();
	static struct FString GetOpenId();
	static struct FString GetItemId();
	static struct FString GetAttachmentId();
};


// Class Addons.EventDataCollectionValues_ItemAttach_State
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_ItemAttach_State : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_ItemAttach_State");
		return pStaticClass;
	}


	static struct FString GetDetaching();
	static struct FString GetAttaching();
};


// Class Addons.EventDataCollectionKeys_PlayerInfo
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_PlayerInfo : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_PlayerInfo");
		return pStaticClass;
	}


	static struct FString GetSex();
	static struct FString GetPlayerName();
	static struct FString GetAvatars();
};


// Class Addons.EventDataCollectionValues_PlayerInfo_Sex
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_PlayerInfo_Sex : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_PlayerInfo_Sex");
		return pStaticClass;
	}


	static struct FString GetMale();
	static struct FString GetFemale();
};


// Class Addons.EventDataCollectionKeys_MiniMapShowInfo
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_MiniMapShowInfo : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_MiniMapShowInfo");
		return pStaticClass;
	}


	static struct FString GetVoiceCheck();
	static struct FString GetPosition();
};


// Class Addons.EventDataCollectionValues_MiniMapShowInfo_VoiceCheck
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_MiniMapShowInfo_VoiceCheck : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_MiniMapShowInfo_VoiceCheck");
		return pStaticClass;
	}


	static struct FString GetWeapon();
	static struct FString GetTyre();
	static struct FString GetSilentWeapon();
	static struct FString GetGlass();
	static struct FString GetFootPrint();
};


// Class Addons.EventDataCollectionKeys_Following
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_Following : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_Following");
		return pStaticClass;
	}


	static struct FString GetFollowType();
	static struct FString GetFollowerOpenId();
	static struct FString GetFolloweeOpenId();
};


// Class Addons.EventDataCollectionValues_Following_FollowType
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_Following_FollowType : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_Following_FollowType");
		return pStaticClass;
	}


	static struct FString GetRefuse();
	static struct FString GetInvitation();
	static struct FString GetFollowing();
	static struct FString GetCancellation();
	static struct FString GetAcception();
};


// Class Addons.EventDataCollectionKeys_MiniMapPinning
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_MiniMapPinning : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_MiniMapPinning");
		return pStaticClass;
	}


	static struct FString GetType();
	static struct FString GetPinPosition();
	static struct FString GetOpenId();
};


// Class Addons.EventDataCollectionValues_MiniMapPinning_Type
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_MiniMapPinning_Type : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_MiniMapPinning_Type");
		return pStaticClass;
	}


	static struct FString GetPinning();
	static struct FString GetNonPinning();
};


// Class Addons.EventDataCollectionKeys_Blocking
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_Blocking : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_Blocking");
		return pStaticClass;
	}


	static struct FString GetType();
	static struct FString GetBlockerOpenId();
	static struct FString GetBlockerIndex();
	static struct FString GetBlockeeOpenId();
	static struct FString GetBlockeeIndex();
};


// Class Addons.EventDataCollectionValues_Blocking_Type
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_Blocking_Type : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_Blocking_Type");
		return pStaticClass;
	}


	static struct FString GetNonBlocking();
	static struct FString GetBlocking();
};


// Class Addons.EventDataCollectionKeys_Dancing
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_Dancing : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_Dancing");
		return pStaticClass;
	}


	static struct FString GetDancerOpenId();
	static struct FString GetDanceId();
};


// Class Addons.EventDataCollectionKeys_PickingupTombBox
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_PickingupTombBox : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_PickingupTombBox");
		return pStaticClass;
	}


	static struct FString GetOpenId();
	static struct FString GetItemIDs();
	static struct FString GetItemId();
	static struct FString GetItemCounts();
	static struct FString GetItemCount();
	static struct FString GetBoxName();
};


// Class Addons.EventDataCollectionKeys_AirAttacking
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_AirAttacking : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_AirAttacking");
		return pStaticClass;
	}


	static struct FString GetWorldLocation();
	static struct FString GetCenter();
};


// Class Addons.EventDataCollectionKeys_CurrentWeapon
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_CurrentWeapon : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_CurrentWeapon");
		return pStaticClass;
	}


	static struct FString GetMaxBulletCountInClip();
	static struct FString GetItemId();
	static struct FString GetBulletCountInClip();
	static struct FString GetBulletCountInBarrel();
};


// Class Addons.EventDataCollectionKeys_SceneInfo
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_SceneInfo : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_SceneInfo");
		return pStaticClass;
	}


	static struct FString GetIsInHouse();
};


// Class Addons.EventDataCollectionValues_SceneInfo_IsInHouse
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_SceneInfo_IsInHouse : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_SceneInfo_IsInHouse");
		return pStaticClass;
	}


	static struct FString GetYes();
	static struct FString GetNo();
};


// Class Addons.EventDataCollectionKeys_TeamInfo
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_TeamInfo : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_TeamInfo");
		return pStaticClass;
	}


	static struct FString GetTeammateUIds();
	static struct FString GetTeammateOpenIds();
	static struct FString GetTeamId();
};


// Class Addons.EventDataCollectionKeys_EnteringLeavingTeam
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_EnteringLeavingTeam : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_EnteringLeavingTeam");
		return pStaticClass;
	}


	static struct FString GetTeamId();
	static struct FString GetOpenId();
	static struct FString GetAction();
};


// Class Addons.EventDataCollectionValues_EnteringLeavingTeam_Action
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_EnteringLeavingTeam_Action : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_EnteringLeavingTeam_Action");
		return pStaticClass;
	}


	static struct FString GetLeaving();
	static struct FString GetEntering();
};


// Class Addons.EventDataCollectionKeys_OnOffline
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_OnOffline : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_OnOffline");
		return pStaticClass;
	}


	static struct FString GetType();
	static struct FString GetOpenId();
};


// Class Addons.EventDataCollectionValues_OnOffline_Type
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_OnOffline_Type : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_OnOffline_Type");
		return pStaticClass;
	}


	static struct FString GetOnline();
	static struct FString GetOffline();
};


// Class Addons.EventDataCollectionKeys_RankList
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_RankList : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_RankList");
		return pStaticClass;
	}


	static struct FString GetType();
	static struct FString GetState();
	static struct FString GetOpenId();
};


// Class Addons.EventDataCollectionValues_RankList_State
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_RankList_State : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_RankList_State");
		return pStaticClass;
	}


	static struct FString GetOn();
	static struct FString GetOff();
};


// Class Addons.EventDataCollectionKeys_TextMessage
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_TextMessage : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_TextMessage");
		return pStaticClass;
	}


	static struct FString GetText();
	static struct FString GetOpenId();
	static struct FString GetItemPosition();
	static struct FString GetItemId();
};


// Class Addons.EventDataCollectionKeys_PawnState
// 0x0008 (0x0028 - 0x0020)
class UEventDataCollectionKeys_PawnState : public UEventDataCollectionKeys
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_PawnState");
		return pStaticClass;
	}


	static bool IsInterestedPawnStates(EPawnState PawnState);
	static struct FString GetType();
	static struct FString GetStates();
	static struct FString GetOpenId();
	static struct FString GetChangedState();
};


// Class Addons.EventDataCollectionValues_PawnState_State
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_PawnState_State : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_PawnState_State");
		return pStaticClass;
	}


	static struct FString GetLeaving();
	static struct FString GetEntering();
};


// Class Addons.EventDataCollectionKeys_OpenCloseDoor
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_OpenCloseDoor : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_OpenCloseDoor");
		return pStaticClass;
	}


	static struct FString GetRightState();
	static struct FString GetOpenId();
	static struct FString GetLeftState();
};


// Class Addons.EventDataCollectionValues_OpenCloseDoor_RightState
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_OpenCloseDoor_RightState : public UEventDataCollectionValues
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_OpenCloseDoor_RightState");
		return pStaticClass;
	}


	static struct FString GetOpen();
	static struct FString GetClose();
	static struct FString GetBroken();
};


// Class Addons.EventDataCollectionValues_OpenCloseDoor_LeftState
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionValues_OpenCloseDoor_LeftState : public UEventDataCollectionValues_OpenCloseDoor_RightState
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionValues_OpenCloseDoor_LeftState");
		return pStaticClass;
	}

};


// Class Addons.EventDataCollectionKeys_MicSpeakerState
// 0x0000 (0x0020 - 0x0020)
class UEventDataCollectionKeys_MicSpeakerState : public UEventDataCollectionKeys
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_MicSpeakerState");
		return pStaticClass;
	}


	static struct FString GetSpeaker();
	static struct FString GetOpenId();
	static struct FString GetMic();
};


// Class Addons.EventDataCollectionKeys_VehicleState
// 0x0008 (0x0028 - 0x0020)
class UEventDataCollectionKeys_VehicleState : public UEventDataCollectionKeys
{
public:
	float                                              UpperboundTickReportIntervalSeconds;                      // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventDataCollectionKeys_VehicleState");
		return pStaticClass;
	}


	static struct FString GetWheelStates();
	static struct FString GetHp();
	static struct FString GetFuel();
	static struct FString GetForwardSpeed();
};


// Class Addons.EventReportComponent
// 0x0000 (0x00C8 - 0x00C8)
class UEventReportComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.EventReportComponent");
		return pStaticClass;
	}

};


// Class Addons.FloatingCapsuleVehicle
// 0x0080 (0x1470 - 0x13F0)
class AFloatingCapsuleVehicle : public ASTExtraAmphibiousVehicle
{
public:
	float                                              MaxLiftHeight;                                            // 0x13F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinLiftHeight;                                            // 0x13F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LiftSpeedFactor;                                          // 0x13F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoWakeUpDistance;                                       // 0x13FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableMoveWheelVelocticyCheck;                            // 0x1400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1401(0x0003) MISSED OFFSET
	float                                              MoveWheelVelocticyCheckThreshold;                         // 0x1404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BreakOutMode;                                             // 0x1408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1409(0x0003) MISSED OFFSET
	float                                              BreakOutCD;                                               // 0x140C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BreakOutInterval;                                         // 0x1410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 BreakOutImpulseCurve;                                     // 0x1414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultBreakOutVelocity;                                  // 0x1418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultBreakOutImpulse;                                   // 0x141C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyCameraEffect;                                       // 0x1420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               KeepThrottleInput;                                        // 0x1421(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x1422(0x0002) MISSED OFFSET
	float                                              BreakOutCameraFOVEffect;                                  // 0x1424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               Sfx_BreakOutStart;                                        // 0x1428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               Sfx_BreakOutEnd;                                          // 0x142C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnVehicleBreakOutStateChanged;                            // 0x1430(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnVehicleWaterStateChanged;                               // 0x143C(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UFloatingVehicleVehicleMovementComponent2*   VehicleFloatingMovement;                                  // 0x1448(0x0004) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               bInBreakOutState;                                         // 0x144C(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x13];                                      // 0x144D(0x0013) MISSED OFFSET
	bool                                               TargetFloatState;                                         // 0x1460(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xF];                                       // 0x1461(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.FloatingCapsuleVehicle");
		return pStaticClass;
	}


	void VehicleBreakOutVelocity(const struct FVector& ApplyVelocity, bool bAddVelocity);
	void SetTargetFloatState(bool bUpState);
	void SetServerPrecentPenetratingEnabled(bool Enabled);
	void SetEnterDistanceSq(float InEnterDistance, bool IsSq);
	void ServerBreakOut(bool bEnable);
	void OnRep_BreakOutState(bool bPrevState);
	void MoveWheelHeight(float DeltaSeconds);
	class USTExtraFloatingVehicleMovementComponentBase* GetFloatingVehicleMovement();
	float GetEnterDistanceSq();
	void DoBreakOut(bool bEnable);
	void BreakOut(bool bEnable);
	void BPTryCheckSimulatePhysics();
};


// Class Addons.FloatingVehicleVehicleMovementComponent2
// 0x0030 (0x01A8 - 0x0178)
class UFloatingVehicleVehicleMovementComponent2 : public USTExtraFloatingVehicleMovementComponentBase
{
public:
	class UCurveFloat*                                 Curve_Acceleration;                                       // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_BackwardAcceleration;                               // 0x017C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_Radius;                                             // 0x0180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_HandBrakeAcceleration;                              // 0x0184(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SteeringTorqueScale;                                      // 0x0188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StaticStatusSpeedThreshold;                               // 0x018C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bClientSideCameraUpdates;                                 // 0x0190(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSteeringTorqueMode;                                      // 0x0191(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x0192(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.FloatingVehicleVehicleMovementComponent2");
		return pStaticClass;
	}


	bool UpdateEnabled();
	void EnableUpdate(bool InEnable);
};


// Class Addons.FreeViewPawn
// 0x0010 (0x0368 - 0x0358)
class AFreeViewPawn : public APawn
{
public:
	class USphereComponent*                            CollisionComponent;                                       // 0x0358(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              MaxDistanceFromCharacter;                                 // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ASTExtraPlayerController*                    ViewController;                                           // 0x0360(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MoveUpRate;                                               // 0x0364(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.FreeViewPawn");
		return pStaticClass;
	}


	void UnbindPlayerInputDelegate();
	void SetController(class ASTExtraPlayerController* InController);
	void MoveUp(float Val);
	void MoveRight(float Val);
	void MoveForward(float Val);
	struct FVector GetFreeViewOrigin();
	void BindPlayerInputDelegate();
};


// Class Addons.FreeViewPawnMovement
// 0x0010 (0x0140 - 0x0130)
class UFreeViewPawnMovement : public UPawnMovementComponent
{
public:
	float                                              MaxSpeed;                                                 // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Acceleration;                                             // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Deceleration;                                             // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x013C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.FreeViewPawnMovement");
		return pStaticClass;
	}

};


// Class Addons.HawkEyeSubsystem
// 0x0010 (0x0030 - 0x0020)
class UHawkEyeSubsystem : public UWorldSubsystem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0020(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.HawkEyeSubsystem");
		return pStaticClass;
	}

};


// Class Addons.HoveringVehicle
// 0x0020 (0x10E0 - 0x10C0)
class AHoveringVehicle : public ASTExtraVehicleBase
{
public:
	float                                              BoostModifier;                                            // 0x10C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ModifyMassInKG;                                           // 0x10C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bAutoAdaptHoverSpot : 1;                                  // 0x10C8(0x0001) (Edit, BlueprintVisible, Config, DisableEditOnInstance)
	bool                                               bHoveringActive;                                          // 0x10C9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x10CA(0x0002) MISSED OFFSET
	TArray<class USceneComponent*>                     HoveringSpots;                                            // 0x10CC(0x000C) (ExportObject, ZeroConstructor)
	unsigned char                                      bHoveringInitialized : 1;                                 // 0x10D8(0x0001)
	EHoverSimulateState                                HoverSimulateState;                                       // 0x10D9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x10DA(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.HoveringVehicle");
		return pStaticClass;
	}


	void OnClientExit(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType);
	void InitHoveringSpots();
	void HandleOnSeatDetached(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType, int SeatIdx);
	void HandleOnSeatAttached(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType, int SeatIdx);
	void DeactivateHoveringSimulate();
	void ActivateHoveringSimulate();
};


// Class Addons.HoveringVehicleMovementComponent
// 0x0090 (0x01C0 - 0x0130)
class UHoveringVehicleMovementComponent : public UPawnMovementComponent
{
public:
	float                                              HoverDistanceWhenNoDriver;                                // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeedKMH;                                              // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAngularForce;                                          // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TraceGroundLength;                                        // 0x013C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpringCoefficient;                                        // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 SpringCurveFloat;                                         // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DampingCoefficient;                                       // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRollAngle;                                             // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SimpleHoverForceRate;                                     // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StaticHoveringSectionFactor;                              // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAutoCorrectWhenTurnOver : 1;                             // 0x0158(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0159(0x0003) MISSED OFFSET
	float                                              AutoCorrectForce;                                         // 0x015C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnOverAngleOfZAxis;                                     // 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnOverLastDurationBeforeFix;                            // 0x0164(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAutoAdaptLinearVelocityDirToForward : 1;                 // 0x0168(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0169(0x0003) MISSED OFFSET
	float                                              AutoAdaptLinearVelFactor;                                 // 0x016C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DragDownForceFactorWhenInAir;                             // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              BringUpForceFactorWhenHoverSpotUnderGround;               // 0x0174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bMovementDrivenByCurve : 1;                               // 0x0178(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0179(0x0003) MISSED OFFSET
	class UCurveFloat*                                 Curve_Acceleration;                                       // 0x017C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_BackwardAcceleration;                               // 0x0180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_Radius;                                             // 0x0184(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FHoveringSimulateData>               HoveringSimulateData;                                     // 0x0188(0x000C) (ZeroConstructor)
	float                                              STThrottleInput;                                          // 0x0194(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              STSteeringInput;                                          // 0x0198(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bInAir;                                                   // 0x019C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHorizontalAngleLimit;                                    // 0x019D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x019E(0x0002) MISSED OFFSET
	float                                              Acceleration;                                             // 0x01A0(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bTurnOver;                                                // 0x01A4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1B];                                      // 0x01A5(0x001B) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.HoveringVehicleMovementComponent");
		return pStaticClass;
	}


	void UpdateMovement(float DeltaTime);
	void UpdateHoverSimulation(float DeltaTime);
	void SetThrottleInput(float rate);
	void SetSteeringInput(float rate);
	void ServerUpdateInput(float InSteeringInput, float InThrottleInput);
	void Reset();
};


// Class Addons.LadderActor
// 0x0060 (0x0400 - 0x03A0)
class ALadderActor : public ALuaActor
{
public:
	class USceneComponent*                             TopScene;                                                 // 0x03A0(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             BottomScene;                                              // 0x03A4(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              LadderWidth;                                              // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LadderStepNum;                                            // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LadderStepHeight;                                         // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CharacterOffset;                                          // 0x03B4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TopRelaPos;                                               // 0x03C0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BottomRelaPos;                                            // 0x03CC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              UpDownTime;                                               // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EnterTopTime;                                             // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EnterBottomTime;                                          // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExitTopTime;                                              // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExitBottomTime;                                           // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveVector*                                upCurve;                                                  // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveVector*                                DownCurve;                                                // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveVector*                                ToTopCurve;                                               // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveVector*                                FromTopCurve;                                             // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03FC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.LadderActor");
		return pStaticClass;
	}

};


// Class Addons.LadderAnimInstance
// 0x0020 (0x0800 - 0x07E0)
class ULadderAnimInstance : public UCharacterAnimStateBase
{
public:
	class UAnimSequenceBase*                           BottomExitAnim;                                           // 0x07E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           TopEnterAnim;                                             // 0x07E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           TopExitAnim;                                              // 0x07E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           UpLeftToRightAnim;                                        // 0x07EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           UpRightToLeftAnim;                                        // 0x07F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           DownLeftToRightAnim;                                      // 0x07F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           DownRightToLeftAnim;                                      // 0x07F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x07FC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.LadderAnimInstance");
		return pStaticClass;
	}

};


// Class Addons.LadderMovementComponent
// 0x0100 (0x0250 - 0x0150)
class ULadderMovementComponent : public ULuaActorComponent
{
public:
	class ASTExtraBaseCharacter*                       CharacterOwner;                                           // 0x0150(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x24];                                      // 0x0154(0x0024) MISSED OFFSET
	float                                              LadderWidth;                                              // 0x0178(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LadderStepNum;                                            // 0x017C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LadderStepHeight;                                         // 0x0180(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CharacterOffset;                                          // 0x0184(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              UpDownTime;                                               // 0x0190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EnterTopTime;                                             // 0x0194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EnterBottomTime;                                          // 0x0198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExitTopTime;                                              // 0x019C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExitBottomTime;                                           // 0x01A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TopRelaPos;                                               // 0x01A4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BottomRelaPos;                                            // 0x01B0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UCurveVector*                                upCurve;                                                  // 0x01BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveVector*                                DownCurve;                                                // 0x01C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveVector*                                ToTopCurve;                                               // 0x01C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveVector*                                FromTopCurve;                                             // 0x01C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LadderTopExitPosition;                                    // 0x01CC(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     LadderBottomExitPosition;                                 // 0x01D8(0x000C) (BlueprintVisible, IsPlainOldData)
	bool                                               bLocalOnLadder;                                           // 0x01E4(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x01E5(0x0003) MISSED OFFSET
	struct FLadderMoveData                             OldLadderMoveState;                                       // 0x01E8(0x000C) (BlueprintVisible)
	struct FLadderMoveData                             LadderMoveState;                                          // 0x01F4(0x000C) (BlueprintVisible)
	struct FLadderMoveData                             NetLadderMoveState;                                       // 0x0200(0x000C) (BlueprintVisible, Net)
	unsigned char                                      UnknownData02[0xC];                                       // 0x020C(0x000C) MISSED OFFSET
	int                                                SimActionNum;                                             // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIgnoreClientError;                                       // 0x021C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x021D(0x0003) MISSED OFFSET
	float                                              ServerLocDiff;                                            // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBeginPlayRequest;                                        // 0x0224(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTickHasSendRequest;                                      // 0x0225(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0226(0x0002) MISSED OFFSET
	class ALadderActor*                                OverlappedLadder;                                         // 0x0228(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               BottomEnterAnim;                                          // 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               BottomExitAnim;                                           // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               TopEnterAnim;                                             // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               TopExitAnim;                                              // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               UpLeftToRightAnim;                                        // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               UpRightToLeftAnim;                                        // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               DownLeftToRightAnim;                                      // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               DownRightToLeftAnim;                                      // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x024C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.LadderMovementComponent");
		return pStaticClass;
	}


	void StartPhaseMoving();
	void ShowDebugInformation(float DeltaTime);
	void ServerMove(const struct FLadderMoveData& LadderMoveData, int MoveDirection, int EnterOrLeave);
	bool ServerCheckClientError(const struct FLadderMoveData& LadderMoveData);
	void RequestCurrentLadderState();
	void ReceiveExitLadder();
	void ReceiveEnterLadder();
	void PushBackSimAction(const struct FLadderMoveData& InData);
	void PopFirstSimAction();
	void OnRep_NetLadderMoveState();
	void OnCharacterExitLadder();
	void OnCharacterEnterLadder(class ALadderActor* Ladder);
	void LadderMoveInput(float rate);
	bool IsLeaving();
	bool IsEntering();
	void InitLadderParams(class ALadderActor* Ladder);
	void HandleJump();
	void HandleInput();
	struct FString GetStateName();
	struct FLadderMoveData GetNextMoveData(const struct FLadderMoveData& Cur, int8_t movedir);
	class UAnimSequence* GetLadderAnimSequence();
	void GatherCurrentLadderState();
	bool ExitLadder();
	bool EnterLadder(class ALadderActor* Ladder, bool bTop);
	void EndPhaseMoving();
	void EnableCharacterMovement(bool bEnable);
	void ClimbUpOneStepInternal();
	void ClimbDownOneStepInternal();
	bool CheckValidPositionOnLadder(class AActor* Ladder, int StepNum);
	bool CheckValidPosition(const struct FVector& Pos);
	void CheckEnterOrExitLadder();
	void CheckAutoEnterLadder();
	void CatchUp(const struct FLadderMoveData& LadderMoveData);
	struct FVector CalcLocationOnLadder(class AActor* Ladder, int StepNum);
	void BuildActionQueue(const struct FLadderMoveData& Target);
	void BindPlayerMoveInput(bool bEnable);
	void AdjustClient(const struct FLadderMoveData& LadderMoveData);
};


// Class Addons.LandingCreatureAnimInstance
// 0x00C0 (0x0460 - 0x03A0)
class ULandingCreatureAnimInstance : public UBioVehicleAnimInstanceBase
{
public:
	float                                              DirectionLerpSpeed;                                       // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedLerpSpeed;                                           // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlockedSpeed;                                             // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RunStopSpeedThreshold;                                    // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LegIKAlphaLerpSpeed;                                      // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ABioVehicleBase*                             OwnerCreature;                                            // 0x03B4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnLandingCreatureJump;                                    // 0x03B8(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              ThrottleInput;                                            // 0x03C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SteeringInput;                                            // 0x03C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasAcceleration;                                         // 0x03CC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsJumping;                                               // 0x03CD(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsRunStopping;                                           // 0x03CE(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsStopping;                                              // 0x03CF(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsInAir;                                                 // 0x03D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldUseExtraDeadAnim;                                  // 0x03D1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x03D2(0x0002) MISSED OFFSET
	int                                                RandomIdleIndex;                                          // 0x03D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDoRandomIdle;                                            // 0x03D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03D9(0x0003) MISSED OFFSET
	float                                              Speed;                                                    // 0x03DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Direction;                                                // 0x03E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HorizontalSpeed;                                          // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              VerticalSpeed;                                            // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              LegIKAlpha;                                               // 0x03EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimPoseRecorder*                           AnimPoseRecorder;                                         // 0x03F0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableDistanceMatching;                                  // 0x03F4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03F5(0x0003) MISSED OFFSET
	struct FVector                                     PredictedStopPoint;                                       // 0x03F8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	float                                              DistanceFromStopPoint;                                    // 0x0404(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UAnimSequence*                               ExtraDeathAnim;                                           // 0x0408(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               UntamedIdleAnim;                                          // 0x040C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               IdleAnim;                                                 // 0x0410(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RandomIdleAnim1;                                          // 0x0414(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RandomIdleAnim2;                                          // 0x0418(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 MovementAnim;                                             // 0x041C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               JumpStartAnim;                                            // 0x0420(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               FallingAnim;                                              // 0x0424(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               IdleLandingAnim;                                          // 0x0428(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RunLandingAnim;                                           // 0x042C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               TurnStartAnim;                                            // 0x0430(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               TurningAnim;                                              // 0x0434(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               TurnEndAnim;                                              // 0x0438(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x24];                                      // 0x043C(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.LandingCreatureAnimInstance");
		return pStaticClass;
	}


	void SetJump();
	void ResetStop();
	void ResetJump();
	void ResetDoRandomIdle();
	void DoRandomIdle(int Index);
};


// Class Addons.LandingCreatureDriverAnimInstance
// 0x00A0 (0x08B0 - 0x0810)
class ULandingCreatureDriverAnimInstance : public UBioVehicleRiderAnimInstanceBase
{
public:
	struct FName                                       RightHandSaddleSocketName;                                // 0x0810(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ThrottleInput;                                            // 0x0818(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              SteeringInput;                                            // 0x081C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bEnableNewStateMachine;                                   // 0x0820(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasAcceleration;                                         // 0x0821(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsJumping;                                               // 0x0822(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsStopping;                                              // 0x0823(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsRunStopping;                                           // 0x0824(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bDoRandomIdle;                                            // 0x0825(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0826(0x0002) MISSED OFFSET
	int                                                RandomIdleIndex;                                          // 0x0828(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsInAir;                                                 // 0x082C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x082D(0x0003) MISSED OFFSET
	float                                              Speed;                                                    // 0x0830(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Direction;                                                // 0x0834(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              BodyLeanAngle;                                            // 0x0838(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              HorizontalSpeed;                                          // 0x083C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              VerticalSpeed;                                            // 0x0840(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              HeadPitchDelta;                                           // 0x0844(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              HeadYawDelta;                                             // 0x0848(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector                                     LeftHandEffectorLocation;                                 // 0x084C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	struct FVector                                     RightHandEffectorLocation;                                // 0x0858(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	float                                              HandIkAlpha;                                              // 0x0864(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bEnableHandIK;                                            // 0x0868(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bEnableDistanceMatching;                                  // 0x0869(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x086A(0x0002) MISSED OFFSET
	class UAnimSequence*                               IdleAnim;                                                 // 0x086C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RunStopLAnim;                                             // 0x0870(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RunStopRAnim;                                             // 0x0874(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               WalkStopLAnim;                                            // 0x0878(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               WalkStopRAnim;                                            // 0x087C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RandomIdleAnim1;                                          // 0x0880(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RandomIdleAnim2;                                          // 0x0884(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 MovementAnim;                                             // 0x0888(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               JumpStartAnim;                                            // 0x088C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               FallingAnim;                                              // 0x0890(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               IdleLandingAnim;                                          // 0x0894(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RunLandingAnim;                                           // 0x0898(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               TurnStartAnim;                                            // 0x089C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               TurningAnim;                                              // 0x08A0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               TurnEndAnim;                                              // 0x08A4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x08A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.LandingCreatureDriverAnimInstance");
		return pStaticClass;
	}


	void OnCreatureJumped();
};


// Class Addons.MonsterRaptorAnimInstance
// 0x0030 (0x0500 - 0x04D0)
class UMonsterRaptorAnimInstance : public UDinosaurMonsterAnimInstanceBase
{
public:
	TArray<int>                                        NotBattleIdleIndex;                                       // 0x04D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        BattleIdleIndex;                                          // 0x04DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                DefaultBattleIdleIndex;                                   // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DefaultNotBattleIdleIndex;                                // 0x04EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasLockedTarget;                                         // 0x04F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bInBattle;                                                // 0x04F1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x04F2(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.MonsterRaptorAnimInstance");
		return pStaticClass;
	}


	void OnResetPlayedIdleIndex(int NewIndex);
};


// Class Addons.OBHttpComponent
// 0x0050 (0x01A0 - 0x0150)
class UOBHttpComponent : public ULuaActorComponent
{
public:
	TArray<struct FPlayerRealTimeAPI>                  RealTimeAPIList;                                          // 0x0150(0x000C) (Net, ZeroConstructor)
	TArray<struct FPlayerAfterMatchAPI>                AfterMatchAPIList;                                        // 0x015C(0x000C) (Net, ZeroConstructor)
	bool                                               bSwitchOBHttpComponent;                                   // 0x0168(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0169(0x0003) MISSED OFFSET
	struct FString                                     IPAddr;                                                   // 0x016C(0x000C) (ZeroConstructor, Config)
	int                                                Port;                                                     // 0x0178(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	struct FString                                     URLSetting;                                               // 0x017C(0x000C) (ZeroConstructor)
	int                                                MaxFailedTimes;                                           // 0x0188(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	TArray<int>                                        NeedItems;                                                // 0x018C(0x000C) (ZeroConstructor, Config)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0198(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.OBHttpComponent");
		return pStaticClass;
	}


	void ServerGetBackPackInfo(int TeamID);
	void ServerGetAllPlayerThrowInfo();
	void ServerCollectTeammateItemList(int TeamID);
	void PostTeamWeaponInfo(const struct FString& TeamWeaponInfoJsonStr);
	void PostTeamBackPackInfoByTeamID(int TeamID);
	void PostTDMResultInfo(const struct FString& TDMResultInfoJsonStr);
	void PostPlayersAMInfo(const struct FString& PlayerAMInfoJsonStr);
	void OnRep_RealTimeAPIList();
	void OnRep_AfterMatchAPIList();
	void ClientUpdateTeammateItemList();
	void ClientGetPlayerUseSightInfo(TArray<struct FPlayerSightUsageInfoCompress> PlayerSightUsageInfoCompress);
	void ClientGetBackPackInfo(TArray<struct FPlayerBackPackInfo> TeamBackPackInfo);
	void ClientGetAllPlayerThrowInfo(TArray<struct FPlayerThrowInfo> AllPlayerThrowInfo);
	void ClientGetAirDropBoxInfo(unsigned char AirDropId, TArray<struct FAirDropBoxDataItem> AirDropBoxDataList);
};


// Class Addons.ObserverProbeComponent
// 0x0148 (0x0210 - 0x00C8)
class UObserverProbeComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x00C8(0x0060) MISSED OFFSET
	TArray<class ABaseAIController*>                   MLAIControllerList;                                       // 0x0128(0x000C) (ZeroConstructor)
	TArray<class ASTExtraPlayerController*>            APIControllerList;                                        // 0x0134(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x54];                                      // 0x0140(0x0054) MISSED OFFSET
	TArray<int>                                        PlayerCollectItemNeed;                                    // 0x0194(0x000C) (ZeroConstructor, Config)
	TArray<int>                                        PlayerUseItemNeed;                                        // 0x01A0(0x000C) (ZeroConstructor, Config)
	TArray<int>                                        PlayerUseSight;                                           // 0x01AC(0x000C) (ZeroConstructor, Config)
	unsigned char                                      UnknownData02[0x48];                                      // 0x01B8(0x0048) MISSED OFFSET
	class AUAEGameMode*                                OwnerGameMode;                                            // 0x0200(0x0004) (ZeroConstructor, IsPlainOldData)
	class ASTExtraGameStateBase*                       CachedGameState;                                          // 0x0204(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0208(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.ObserverProbeComponent");
		return pStaticClass;
	}


	void PostInfoAfterMatch();
	void OnTerminatorEndGame(class AController* Killer, class AController* Victim, int DamageType, int ExtraParam);
	void CollectSightUseTime(uint32_t PlayerKey, int SightId, bool bUse);
};


// Class Addons.OBSubSystem
// 0x0000 (0x0020 - 0x0020)
class UOBSubSystem : public UWorldSubsystem
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.OBSubSystem");
		return pStaticClass;
	}

};


// Class Addons.PCOBCommonComponent
// 0x0090 (0x0158 - 0x00C8)
class UPCOBCommonComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x00C8(0x0088) MISSED OFFSET
	float                                              ObservingTime;                                            // 0x0150(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              TrackingDelayTime;                                        // 0x0154(0x0004) (ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.PCOBCommonComponent");
		return pStaticClass;
	}


	void TrackingEnd();
	void PCOBTerminator(class ASTExtraBaseCharacter* Causer, class ASTExtraBaseCharacter* Victim);
};


// Class Addons.PterosaurAnimInstance
// 0x00D0 (0x0470 - 0x03A0)
class UPterosaurAnimInstance : public UBioVehicleAnimInstanceBase
{
public:
	float                                              VerticalSpeedLerpSpeed;                                   // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinStartLeanRollSpeed;                                    // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinStartLeanPitchSpeed;                                   // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartFlyingSpeedThreshold;                                // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDirection;                                             // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SwoopDirectionThreshold;                                  // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DirectionLerpSpeed;                                       // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxLeanAnglePitch;                                        // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxLeanAngleRoll;                                         // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LeanAngleRollLerpSpeed;                                   // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LeanAnglePitchLerpSpeed;                                  // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EPterosaurMoveMode                                 MoveState;                                                // 0x03CC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EPterosaurSwoopStage                               SwoopStage;                                               // 0x03CD(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x03CE(0x0002) MISSED OFFSET
	int                                                LandingIndex;                                             // 0x03D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasCatchedPassenger;                                     // 0x03D4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsLanding;                                               // 0x03D5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsGroundDead;                                            // 0x03D6(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSwoopingDown;                                          // 0x03D7(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsInAir;                                                 // 0x03D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFalling;                                               // 0x03D9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsTryingToLand;                                          // 0x03DA(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStartFlying;                                             // 0x03DB(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TotalSpeed;                                               // 0x03DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HorizontalSpeed;                                          // 0x03E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerticalSpeed;                                            // 0x03E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ThrottleInput;                                            // 0x03E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SteeringInput;                                            // 0x03EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RisingInput;                                              // 0x03F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Direction;                                                // 0x03F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeadYawDelta;                                             // 0x03F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeadPitchDelta;                                           // 0x03FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeadYawInterpolateSpeed;                                  // 0x0400(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeadPitchInterpolateSpeed;                                // 0x0404(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BodyLeanAngleRoll;                                        // 0x0408(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BodyLeanAnglePitch;                                       // 0x040C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpace*                                 ArrestMovementAnim;                                       // 0x0410(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               UntamedIdleAnim;                                          // 0x0414(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               GroundIdleAnim;                                           // 0x0418(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RandomIdleAnim1;                                          // 0x041C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RandomIdleAnim2;                                          // 0x0420(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 MovementAnim;                                             // 0x0424(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 FlyingAO_Anim;                                            // 0x0428(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               StartFlyingAnim;                                          // 0x042C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               StartLandingAnim1;                                        // 0x0430(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               StartLandingAnim2;                                        // 0x0434(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               LandingAnim1;                                             // 0x0438(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               LandingAnim2;                                             // 0x043C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               LandingAnim3;                                             // 0x0440(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               TakingOffAnim;                                            // 0x0444(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RiseUpAnim;                                               // 0x0448(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RiseDownAnim;                                             // 0x044C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               DivingStartAnim;                                          // 0x0450(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               DivingAnim;                                               // 0x0454(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               DivingEndAnim;                                            // 0x0458(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               GroundDeathAnim;                                          // 0x045C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               DeathFallingAnim;                                         // 0x0460(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               DeathFallingGround;                                       // 0x0464(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0468(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.PterosaurAnimInstance");
		return pStaticClass;
	}


	void ResetStartFlying();
	void OnStartFlying();
};


// Class Addons.PterosaurCatchedPassengerAnimInstance
// 0x0010 (0x0820 - 0x0810)
class UPterosaurCatchedPassengerAnimInstance : public UBioVehicleRiderAnimInstanceBase
{
public:
	float                                              VerticalSpeed;                                            // 0x0810(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Direction;                                                // 0x0814(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpace*                                 MovementAnim;                                             // 0x0818(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x081C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.PterosaurCatchedPassengerAnimInstance");
		return pStaticClass;
	}

};


// Class Addons.PterosaurDriverAnimInstance
// 0x0070 (0x0880 - 0x0810)
class UPterosaurDriverAnimInstance : public UBioVehicleRiderAnimInstanceBase
{
public:
	float                                              TotalSpeed;                                               // 0x0810(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HorizontalSpeed;                                          // 0x0814(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerticalSpeed;                                            // 0x0818(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ThrottleInput;                                            // 0x081C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SteeringInput;                                            // 0x0820(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RisingInput;                                              // 0x0824(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Direction;                                                // 0x0828(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BodyLeanAngleRoll;                                        // 0x082C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BodyLeanAnglePitch;                                       // 0x0830(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EPterosaurMoveMode                                 MoveState;                                                // 0x0834(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0835(0x0003) MISSED OFFSET
	class UAnimSequence*                               GroundIdleAnim;                                           // 0x0838(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 MovementAnim;                                             // 0x083C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 CatchPassengerMovementAnim;                               // 0x0840(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               StartFlyingAnim;                                          // 0x0844(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               StartLandingAnim1;                                        // 0x0848(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               StartLandingAnim2;                                        // 0x084C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               LandingAnim1;                                             // 0x0850(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               LandingAnim2;                                             // 0x0854(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               LandingAnim3;                                             // 0x0858(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               TakingOffAnim;                                            // 0x085C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RiseUpAnim;                                               // 0x0860(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RiseDownAnim;                                             // 0x0864(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               DivingStartAnim;                                          // 0x0868(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               DivingAnim;                                               // 0x086C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               DivingEndAnim;                                            // 0x0870(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UPterosaurAnimInstance>       OwnedPterosuarAnimInstance;                               // 0x0874(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x087C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.PterosaurDriverAnimInstance");
		return pStaticClass;
	}

};


// Class Addons.PterosaurMovementComponent
// 0x0200 (0x0BB0 - 0x09B0)
class UPterosaurMovementComponent : public UBioVehicleMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x09B0(0x0008) MISSED OFFSET
	float                                              MaxFlyAcceleration;                                       // 0x09B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlySteeringRotationSpeed;                                 // 0x09BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x09C0(0x0010) MISSED OFFSET
	float                                              MaxUpSpeed;                                               // 0x09D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDownSpeed;                                             // 0x09D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnPterosaurSwoopDownStageChanged;                         // 0x09D8(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FPterosaurUpdateDistanceToLandConfig> UpdateGroundDistanceConfigs;                              // 0x09E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIgnoreHeightLimit;                                       // 0x09F0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x09F1(0x0003) MISSED OFFSET
	float                                              MaxFlyingZ;                                               // 0x09F4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckLandingGround;                                      // 0x09F8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x09F9(0x0003) MISSED OFFSET
	float                                              DistanceToLand;                                           // 0x09FC(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              LastCheckGroundInterval;                                  // 0x0A00(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                                       // 0x0A04(0x000C) MISSED OFFSET
	bool                                               bTopBlocked;                                              // 0x0A10(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0A11(0x0003) MISSED OFFSET
	float                                              MaxTraceDownHeight;                                       // 0x0A14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxFlyingHeight;                                          // 0x0A18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinFlyingHeight;                                          // 0x0A1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlyingHeightThres;                                        // 0x0A20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SwoopClimbOffset;                                         // 0x0A24(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      bSwoopUsePathRotation : 1;                                // 0x0A30(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0A31(0x0003) MISSED OFFSET
	float                                              SyncRotationSpeed;                                        // 0x0A34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SyncRotationMoveSpeed;                                    // 0x0A38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SyncRotationAcceptableAngle;                              // 0x0A3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      SplineActorClass;                                         // 0x0A40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSwoopDownSpeed;                                        // 0x0A44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SplineCurveTangentLength;                                 // 0x0A48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PreCatchEnterDistance;                                    // 0x0A4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      ModifyEnterSplinePointDistanceArr;                        // 0x0A50(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class UCurveFloat*                                 SwoopSpeedCurve;                                          // 0x0A5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SwoopSpeedSafeRange;                                      // 0x0A60(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	TMap<struct FVector2D, struct FVector2D>           DirectionCorrectMoveSpeedMap;                             // 0x0A68(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              DistThresholdWhenInputAllowed;                            // 0x0AA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSwoopMoveDuration;                                     // 0x0AA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SwoopMoveBlockedDurationThreshold;                        // 0x0AAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSwitchUsePassedSplineDistance;                           // 0x0AB0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x17];                                      // 0x0AB1(0x0017) MISSED OFFSET
	struct FVector                                     DiveStartDirection;                                       // 0x0AC8(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     DiveDirection;                                            // 0x0AD4(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              MaxDiveSpeed;                                             // 0x0AE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDiveTime;                                              // 0x0AE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DiveTurnTime;                                             // 0x0AE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DivingCoolDown;                                           // 0x0AEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDivingResetCamera;                                       // 0x0AF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x33];                                      // 0x0AF1(0x0033) MISSED OFFSET
	class UCurveVector*                                SpeedCurve;                                               // 0x0B24(0x0004) (ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                PositionCurve;                                            // 0x0B28(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x34];                                      // 0x0B2C(0x0034) MISSED OFFSET
	class UCurveVector*                                LandingCurve;                                             // 0x0B60(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxTakeOffTime;                                           // 0x0B64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                TakeOffCurve;                                             // 0x0B68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DivingCurve;                                              // 0x0B6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SwoopingDownVelocity;                                     // 0x0B70(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bSwoopTurnLeft;                                           // 0x0B7C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0B7D(0x0003) MISSED OFFSET
	int                                                LandingConfigIndex;                                       // 0x0B80(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FPterosaurLandingConfig>             LandingConfigs;                                           // 0x0B84(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class AActor*                                      CacheSplineActor;                                         // 0x0B90(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x8];                                       // 0x0B94(0x0008) MISSED OFFSET
	float                                              MaxAutoLandingTime;                                       // 0x0B9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              bNoDriverForceNoSimulate;                                 // 0x0BA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              bNoDriverForceLanding;                                    // 0x0BA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              bCheckClientFlyingHeight;                                 // 0x0BA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x0BAC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.PterosaurMovementComponent");
		return pStaticClass;
	}


	void UpdateVerticalHeight(float DeltaTime);
	void StartTakingOff();
	void StartSwoopDown(const struct FVector& TargetLocation);
	void StartLanding();
	void StartFlyingDive();
	void SetServerDiveDirection(const struct FVector& Direction);
	void SetMovementMode(TEnumAsByte<EMovementMode> NewMovementMode, unsigned char NewCustomMode);
	void SetAutoLanding(float Value);
	bool IsTakingOff();
	bool IsSwoopDown();
	bool IsSwoopCatching();
	bool IsStrugglingToLand();
	bool IsLocalSwoopingDown();
	bool IsLandingWalking();
	bool IsLanding();
	bool IsDiving();
	bool IsCurveMoving();
	EPterosaurMoveMode GetMoveState();
	float GetDistanceToLand();
	void ExitSwoopDown();
	void ExitLanding();
	void EndTakingOff();
	void EndSwoopDown(bool bRestVelocity);
	void EndLanding();
	void EndFlyingDive();
	void DealWithCustomAction(float DeltaTime);
	bool CheckCanStartFlyingDive();
	void CalculateFlyingVelocity(float DeltaTime);
	void CalculateFlyingAcceleration(float DeltaTime);
	void CalculateDivingVelocity(float DeltaTime);
};


// Class Addons.PterosaurVehicle
// 0x00A0 (0x1430 - 0x1390)
class APterosaurVehicle : public ABioVehicleBase
{
public:
	float                                              ForceOpenParachuteHeightInPterosaur;                      // 0x1390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CloseParachuteHeightInPterosaur;                          // 0x1394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SkipOpenParachuteHeightInPterosuar;                       // 0x1398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxExecSwoopCatchDistance;                                // 0x139C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinExecSwoopCatchDistance2D;                              // 0x13A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxCatchableDistance;                                     // 0x13A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SwoopCatchCoolDown;                                       // 0x13A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldIgnoreHitPlayerWhenSwoopDown;                      // 0x13AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SyncSwoopCatchState;                                      // 0x13AD(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x13AE(0x0002) MISSED OFFSET
	class ASTExtraBaseCharacter*                       ArrestCharacter;                                          // 0x13B0(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetCatchLocation;                                      // 0x13B4(0x000C) (IsPlainOldData)
	class UPterosaurMovementComponent*                 PterosaurMoveComponent;                                   // 0x13C0(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              DiveReadyTime;                                            // 0x13C4(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnPterosaurVehicleDive;                                   // 0x13C8(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPterosaurVehicleDiveEnd;                                // 0x13D4(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPterosaurVehicleGroundDead;                             // 0x13E0(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPterosaurVehicleTopBlocked;                             // 0x13EC(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0x13F8(0x0008) MISSED OFFSET
	bool                                               bIsGroundDead;                                            // 0x1400(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x1401(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPterosaurVehicleDead;                                   // 0x1404(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UAnimMontage*                                CatchPassengerAnim;                                       // 0x1410(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                PrepareCatchPassengerAnim;                                // 0x1414(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDynamicOptimizeActorComponents*             DynamicOptimizeComponent;                                 // 0x1418(0x0004) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x141C(0x0004) MISSED OFFSET
	float                                              FlyingHoverConsumeFuelRate;                               // 0x1420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                                       // 0x1424(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.PterosaurVehicle");
		return pStaticClass;
	}


	void TryFlyingDive(bool bTry);
	void TryCancelSwoopDown();
	void ServerSwoopDown(const struct FVector& TargetLocation, bool IsForceEnd);
	void ServerReleaseCharacter(class ASTExtraBaseCharacter* Requester);
	void OnRep_SyncSwoopCatchState();
	void OnPterosaurSwoopStateChanged(EPterosaurSwoopStage NewStage, const struct FVector& TargetLocation);
	void OnPterosaurPrepareCatch();
	void OnClientExitFromPterosaur(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType);
	void MultiCast_SwoopDown(const struct FVector& TargetLocation);
	void MultiCast_SplineCorrect(const struct FVector& SyncLocation, const struct FVector& TargetLocation, TArray<struct FVector> SplinePoints);
	bool IsSwoopDown();
	bool IsSwoopCoolDown();
	bool IsSwoopCatching();
	void HandleOnSeatDetached(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType, int SeatIdx);
	void HandleOnSeatAttached(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType, int SeatIdx);
	class UPterosaurMovementComponent* GetPterosaurMovementComponent();
	float GetConsumeFuelRate();
	bool ForceCatchCharacter(class ASTExtraBaseCharacter* Character);
	bool DoSwoopDown(const struct FVector& TargetLocation);
	bool CanConsumeFuel();
	void BroadCastOnPterosaurPrepareCatch();
	void BPOnPterosaurSwoopStateChanged(unsigned char NewStage);
};


// Class Addons.RaptorMovementComponent
// 0x0050 (0x0A00 - 0x09B0)
class URaptorMovementComponent : public UBioVehicleMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x09B0(0x0008) MISSED OFFSET
	float                                              SpotTurnStartTime;                                        // 0x09B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpotTurnEndTime;                                          // 0x09BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              targetAngularSpeed;                                       // 0x09C0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpotTurnAngularSpeed;                                     // 0x09C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              fBeginTurnInterpSpeed;                                    // 0x09C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              fEndTurnInterpSpeed;                                      // 0x09CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngularSpeedLerpFactor;                                   // 0x09D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RightToLeftSpeedLerpFactor;                               // 0x09D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LowSpeedRotationThreshold;                                // 0x09D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PhysicsRotateTolerance;                                   // 0x09DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanAdjustMovementFloor;                                  // 0x09E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x09E1(0x0003) MISSED OFFSET
	float                                              BreakOutAcclerationRate;                                  // 0x09E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BreakOutVelocityRate;                                     // 0x09E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 BreakOutAccResistanceCurve;                               // 0x09EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x09F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.RaptorMovementComponent");
		return pStaticClass;
	}


	float GetWalkingAccResistance(float Speed);
	float GetMaxAcceleration();
};


// Class Addons.RaptorVehicle
// 0x0020 (0x13B0 - 0x1390)
class ARaptorVehicle : public ABioVehicleBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x1390(0x0008) MISSED OFFSET
	struct FName                                       LeftFootBoneName;                                         // 0x1398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RightFootBoneName;                                        // 0x13A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanRideWhenSwimming;                                     // 0x13A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x13A9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.RaptorVehicle");
		return pStaticClass;
	}


	void SetHandBrake(float rate);
	void ServerSetHandBrake(float rate);
	void MulticastDoJump();
	class URaptorMovementComponent* GetRaptorMovementComponent();
	void DoJump();
};


// Class Addons.ReindeerAnimInstance
// 0x0090 (0x04F0 - 0x0460)
class UReindeerAnimInstance : public ULandingCreatureAnimInstance
{
public:
	float                                              GroundMovementPlayRate;                                   // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 LeanAnglePelvisOffsetCurve;                               // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   FlyBodyLeanSpeedRange;                                    // 0x0468(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   GroundBodyLeanSpeedRange;                                 // 0x0470(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              FlyMaxTurnLeanAngle;                                      // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GroundMaxTurnLeanAngle;                                   // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnLeanLerpSpeed;                                        // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxRiseLeanAngle;                                         // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RiseLeanLerpSpeed;                                        // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         MovementMode;                                             // 0x048C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x048D(0x0003) MISSED OFFSET
	float                                              MovementAnimPlayRate;                                     // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              LeanPelvisOffset;                                         // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsFlying;                                                // 0x0498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0499(0x0003) MISSED OFFSET
	float                                              RisingInput;                                              // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	struct FRotator                                    BodyLeanAngle;                                            // 0x04A0(0x000C) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
	float                                              TerrainAdaptingAlpha;                                     // 0x04AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	class UBlendSpace*                                 AirMovementAnim;                                          // 0x04B0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               LandingAnim;                                              // 0x04B4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               FlyingIdleAnim;                                           // 0x04B8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               FlyingUpDownAnim;                                         // 0x04BC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AReindeerBioVehicle*                         OwnerReindeer;                                            // 0x04C0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentTurnLeanAngle;                                     // 0x04C4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TargetTurnLeanAngle;                                      // 0x04C8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentRiseLeanAngle;                                     // 0x04CC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TargetRiseLeanAngle;                                      // 0x04D0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bUseComponentCalcTerrainAdaptingParam;                    // 0x04D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04D5(0x0003) MISSED OFFSET
	float                                              PelvisHeightOffset;                                       // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PelvisPitchOffset;                                        // 0x04DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinusPelvisPitchOffset;                                   // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x04E4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.ReindeerAnimInstance");
		return pStaticClass;
	}

};


// Class Addons.ReindeerBioVehicle
// 0x01C0 (0x1550 - 0x1390)
class AReindeerBioVehicle : public ABioVehicleBase
{
public:
	class UChildActorComponent*                        AttachBone_Helper;                                        // 0x1390(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        VehicleAttachBone_Helper;                                 // 0x1394(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           AttachCapsuleComponent;                                   // 0x1398(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x139C(0x0004) MISSED OFFSET
	struct FName                                       LeftFootBoneName;                                         // 0x13A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RightFootBoneName;                                        // 0x13A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanRideWhenSwimming;                                     // 0x13B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x13B1(0x0007) MISSED OFFSET
	struct FName                                       AttachBoneName;                                           // 0x13B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachLocationBoneName;                                   // 0x13C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DoLagRotationRate;                                        // 0x13C8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bDoRotationPitchLag;                                      // 0x13D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x13D5(0x0003) MISSED OFFSET
	float                                              RotateFollowRate;                                         // 0x13D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttachedVehicleMaxHP;                                     // 0x13DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttachedVehicleMaxFuel;                                   // 0x13E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableSyncMovementTick;                                  // 0x13E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x13E5(0x0003) MISSED OFFSET
	float                                              AttachEnterDistanceScale;                                 // 0x13E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OpenParachuteHeightInAttachedVehicle;                     // 0x13EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CanOpenParachuteHeightInAttachedVehicle;                  // 0x13F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ForceOpenParachuteHeightInAttachedVehicle;                // 0x13F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CloseParachuteHeightInAttachedVehicle;                    // 0x13F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SkipOpenParachuteHeightInAttachedVehicle;                 // 0x13FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bObserverNotRepMovement;                                  // 0x1400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDelayDestroyInWater;                                     // 0x1401(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x1402(0x0002) MISSED OFFSET
	float                                              DelayDestroyInWaterInterval;                              // 0x1404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableDeathRagDoll;                                      // 0x1408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x1409(0x0003) MISSED OFFSET
	TArray<TEnumAsByte<ECollisionChannel>>             ComponentRagdollIgnoreCollisionChannel;                   // 0x140C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TEnumAsByte<ECollisionChannel>>             MeshRagDollIgnoreCollisionChannel;                        // 0x1418(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnVehicleAttachOther;                                     // 0x1424(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UAnimMontage*                                MountMontage;                                             // 0x1430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCacheNeedPlayMountMontage;                               // 0x1434(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x1435(0x0003) MISSED OFFSET
	struct FRotator                                    AttachOffsetRotation;                                     // 0x1438(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     AttachOffsetLocation;                                     // 0x1444(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	class UAkAudioEvent*                               WindAudio2D;                                              // 0x1450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               WindAudioStop2D;                                          // 0x1454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               AirMovingAudio;                                           // 0x1458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RTPCSpeedLerpSpeed;                                       // 0x145C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     ReindeerRPTCName;                                         // 0x1460(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector2D                                   ReindeerRTPCRange;                                        // 0x146C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     LinkedReindeerRPTCName;                                   // 0x1474(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector2D                                   LinkedReindeerRTPCRange;                                  // 0x1480(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FSTExtraVehicleSfxLoop                      AirMovingSfxLoop;                                         // 0x1488(0x005C)
	struct FSTExtraVehicleSfxLoop                      Wind2DSfxLoop;                                            // 0x14E4(0x005C)
	unsigned char                                      UnknownData07[0x4];                                       // 0x1540(0x0004) MISSED OFFSET
	int                                                AudioID_LinkedReindeer;                                   // 0x1544(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentRTPCSpeed;                                         // 0x1548(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x154C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.ReindeerBioVehicle");
		return pStaticClass;
	}


	void TryAttachToOtherVehicle();
	void OnClientExitFromAttachedVehicle(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType);
	void MulticastDoJump();
	void K2_OnClientAttachWithReindeerCart(class ASTExtraVehicleBase* OtherVehicle);
	void HandleVehicleHealthDestroy();
	bool GetVehicleAttachState();
	class UVehicleAttachmentComponent* GetVehicleAttachComp();
	class UBioFlyMovementComponentBase* GetBioFlyMovementComponent();
	class ASTExtraVehicleBase* GetAttachedVehicle();
	void DoJump();
	void DoAttachLogic(class ASTExtraVehicleBase* OtherVehicle);
	bool ConsumeNeedPlayMountMontage();
	void BroadCastPlayMountMontage(class ASTExtraPlayerCharacter* Character);
	void ActiveRagDoll();
};


// Class Addons.ReindeerCartVehicle
// 0x0080 (0x13A0 - 0x1320)
class AReindeerCartVehicle : public ASTExtraWheeledVehicle
{
public:
	struct FScriptMulticastDelegate                    OnVehicleAttachOther;                                     // 0x1320(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x4];                                       // 0x132C(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x132C(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Addons.ReindeerCartVehicle.FloatingParticle
	unsigned char                                      UnknownData02[0x28];                                      // 0x1358(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Addons.ReindeerCartVehicle.MovingParticle
	struct FName                                       MovingParticleAttachName;                                 // 0x1380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ActiveMovingParticleSpeedThreshold;                       // 0x1388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeedLastFrame;                                           // 0x138C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UParticleSystemComponent*                    CachedFloatingParticleComponent;                          // 0x1390(0x0004) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    CachedMovingParticleComponent;                            // 0x1394(0x0004) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x1398(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.ReindeerCartVehicle");
		return pStaticClass;
	}


	void UpdateParticleState();
	void TryAttachToOtherVehicle();
	void SetMovingParticleActived(bool Inactive);
	void SetFloatingParticleActived(bool Inactive);
	void OnParticleEffectLoadingFinished();
	void OnClientExitFromAttachedVehicle(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType);
	void LoadParticleEffect();
	void K2_OnClientAttachToReindeer(class ASTExtraVehicleBase* OtherVehicle);
	void HandleVehicleHealthDestroy();
	void HandleOnSeatAttached(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType, int SeatIdx);
	bool GetVehicleAttachState();
	class UVehicleAttachmentComponent* GetVehicleAttachComp();
	float GetForwardSpeed();
	class ASTExtraVehicleBase* GetAttachedVehicle();
	void DoAttachLogic(class ASTExtraVehicleBase* OtherVehicle);
	void DestroyAllCachedParticleEffect();
	void CloseWheelsCollision();
};


// Class Addons.ReindeerRiderAnimInstance
// 0x0030 (0x08E0 - 0x08B0)
class UReindeerRiderAnimInstance : public ULandingCreatureDriverAnimInstance
{
public:
	float                                              DefaultSpinePitchOffset;                                  // 0x08B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultSpinePitchOffsetNearDeath;                         // 0x08B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpinePitchOffsetLerpSpeed;                                // 0x08B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSpinePitchOffset;                                      // 0x08BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAssetsCached;                                            // 0x08C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsFlying;                                                // 0x08C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x08C2(0x0002) MISSED OFFSET
	float                                              RisingInput;                                              // 0x08C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              MovementAnimPlayRate;                                     // 0x08C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              SpinePitchOffset;                                         // 0x08CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	class UBlendSpace*                                 AirMovementAnim;                                          // 0x08D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               LandingAnim;                                              // 0x08D4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               FlyingIdleAnim;                                           // 0x08D8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               FlyingUpDownAnim;                                         // 0x08DC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.ReindeerRiderAnimInstance");
		return pStaticClass;
	}

};


// Class Addons.ReindeerPassengerAnimInstance
// 0x0090 (0x0970 - 0x08E0)
class UReindeerPassengerAnimInstance : public UReindeerRiderAnimInstance
{
public:
	struct FName                                       DriverSpineBoneName;                                      // 0x08E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DriverSpineLocationOffsetToPassengerHand;                 // 0x08E8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasDriverSeatOccupier;                                   // 0x08F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bShouldUseHandIK;                                         // 0x08F5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x08F6(0x0002) MISSED OFFSET
	float                                              RightHandIkAlpha;                                         // 0x08F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector                                     DriverSpineLeftHandLocation;                              // 0x08FC(0x000C) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
	struct FVector                                     DriverSpineRightHandLocation;                             // 0x0908(0x000C) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
	bool                                               bShouldTransIdleToAim;                                    // 0x0914(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bShouldTransAimToIdle;                                    // 0x0915(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	TEnumAsByte<EPassengerWeaponType>                  PassengerWeaponType;                                      // 0x0916(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bScoping;                                                 // 0x0917(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	struct FRotator                                    OwnerAimRotation;                                         // 0x0918(0x000C) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
	struct FRotator                                    AimAnimBSParam;                                           // 0x0924(0x000C) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
	bool                                               bIsHoldingGrenade;                                        // 0x0930(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0931(0x0003) MISSED OFFSET
	float                                              HoldGrenadeAimPerSpineAlpha;                              // 0x0934(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	class UBlendSpace*                                 HoldGrenadeAnim;                                          // 0x0938(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	class UAimOffsetBlendSpace*                        HoldGrenadeAimOffsetBS;                                   // 0x093C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	class UAnimSequence*                               PassengerMotorBikeIdleBaseDriverOffAnim;                  // 0x0940(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               PassengerMotorBikeIdleBaseWithGunDriverOffAnim;           // 0x0944(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               PassengerMotorBikeIdleBaseWithMeleeDriverOffAnim;         // 0x0948(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               PassengerMotorBikeIdleBaseWithThrowObjDriverOffAnim;      // 0x094C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 PassengerDriverOffAimAnim;                                // 0x0950(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               PassengerMotorBikeIdleBaseDriverOnAnim;                   // 0x0954(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               PassengerMotorBikeIdleBaseWithGunDriverOnAnim;            // 0x0958(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               PassengerMotorBikeIdleBaseWithMeleeDriverOnAnim;          // 0x095C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               PassengerMotorBikeIdleBaseWithThrowObjDriverOnAnim;       // 0x0960(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 PassengerDriverOnAimAnim;                                 // 0x0964(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               DyingIdle;                                                // 0x0968(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x096C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.ReindeerPassengerAnimInstance");
		return pStaticClass;
	}

};


// Class Addons.ReindeerSeatComponent
// 0x0048 (0x0328 - 0x02E0)
class UReindeerSeatComponent : public UVehicleSeatComponent
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x02E0(0x0038) MISSED OFFSET
	int                                                RealSeatsNum;                                             // 0x0318(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x031C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.ReindeerSeatComponent");
		return pStaticClass;
	}


	int GetTotalSeatsNum();
};


// Class Addons.ReindeerTerrainAdaptingComponent
// 0x00C0 (0x0210 - 0x0150)
class UReindeerTerrainAdaptingComponent : public ULuaActorComponent
{
public:
	struct FName                                       AdaptedBoneName;                                          // 0x0150(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LHandBoneName;                                            // 0x0158(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RHandBoneName;                                            // 0x0160(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LFootBoneName;                                            // 0x0168(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RFootBoneName;                                            // 0x0170(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<TEnumAsByte<ECollisionChannel>>             TerrainAdaption_ObjectTypesToQuery;                       // 0x0178(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	float                                              TraceUpOffset;                                            // 0x0184(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TraceDownOffset;                                          // 0x0188(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TraceSphereRadius;                                        // 0x018C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SlopeAdaptionMaxPitch;                                    // 0x0190(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SlopeAdaptionMaxZ;                                        // 0x0194(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SlopeAdaptLerpSpeed;                                      // 0x0198(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UReindeerAnimInstance*                       ReindeerAnimInstance;                                     // 0x019C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x70];                                      // 0x01A0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.ReindeerTerrainAdaptingComponent");
		return pStaticClass;
	}

};


// Class Addons.SplineMoveObj
// 0x01E0 (0x0250 - 0x0070)
class USplineMoveObj : public USpecialMoveBaseObj
{
public:
	class USplineComponent*                            MoveAlongSpline;                                          // 0x0070(0x0004) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              CacheAllowEnterSplineTime;                                // 0x0074(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CacheInput;                                               // 0x0078(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     OriginalInput;                                            // 0x0084(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    CacheControlRot;                                          // 0x0090(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     CacheCurSplineDir;                                        // 0x009C(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    CacheTargetRot;                                           // 0x00A8(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    CacheBeginRot;                                            // 0x00B4(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    CacheOldRot;                                              // 0x00C0(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     CacheSplineBeginLoc;                                      // 0x00CC(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     CacheSplineEndLoc;                                        // 0x00D8(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              DownhillCosValue;                                         // 0x00E4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CacheTurningTime;                                         // 0x00E8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFocusPawnRotation;                                       // 0x00EC(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUsingCameraLag;                                          // 0x00ED(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00EE(0x0002) MISSED OFFSET
	float                                              OriginalCameraLagSpeed;                                   // 0x00F0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OriginalCameraLagMaxDistance;                             // 0x00F4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               SplineMoveAkEvent;                                        // 0x00F8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData02[0x28];                                      // 0x00FC(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Addons.SplineMoveObj.SplineMoveAkEvent_SoftPtr
	struct FVector2D                                   MoveSoundSpeedRange;                                      // 0x0128(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              MoveSoundSpeedInputScale;                                 // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0134(0x0004) MISSED OFFSET
	struct FName                                       Sound_SpeedName;                                          // 0x0138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Sound_OnAirName;                                          // 0x0140(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EnterSplineDistance;                                      // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ForceLeaveSplineDistance;                                 // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnterSplineIgnoreCollision;                               // 0x0150(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseClientEnterLocation;                                  // 0x0151(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0152(0x0002) MISSED OFFSET
	float                                              CameraLagEndThreshold;                                    // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraLagSpeed;                                           // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraLagMaxDistance;                                     // 0x015C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStopSprintOnTouch;                                       // 0x0160(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0161(0x0003) MISSED OFFSET
	float                                              ControlRotateSpeed;                                       // 0x0164(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SplineMoveHoldWeaponSpeed;                                // 0x0168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   HoldWeaponControlYawLimit;                                // 0x016C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              TurnLeftDeltaAngle;                                       // 0x0174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnRightDeltaAngle;                                      // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HoldWeaponYawThreshold;                                   // 0x017C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SplineMoveJumpGravityScale;                               // 0x0180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GravityExtraAccDown;                                      // 0x0184(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GravityExtraAccUp;                                        // 0x0188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DownhillExtraSpeed;                                       // 0x018C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DownhillCosThreshold;                                     // 0x0190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<ECollisionChannel>>             CollisionChannelsForCheck;                                // 0x0194(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              FindJumpEndOffset;                                        // 0x01A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurningSpeedThresholdSq;                                  // 0x01A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurningExponent;                                          // 0x01A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurningTime;                                              // 0x01AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurningEndTolerance;                                      // 0x01B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SplineMoveMaxSpeed;                                       // 0x01B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SplineSprintMoveMaxSpeed;                                 // 0x01B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SplineFriction;                                           // 0x01BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxBrakingDeceleration;                                   // 0x01C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAcceleration;                                          // 0x01C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EnterSplineSpeed;                                         // 0x01C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ExtraJumpVelocity;                                        // 0x01CC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              SplineMoveAirControl;                                     // 0x01D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TraceBeginOffset;                                         // 0x01DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TraceEndOffset;                                           // 0x01E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // 0x01E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x01E5(0x0003) MISSED OFFSET
	struct FName                                       SplineActorTag;                                           // 0x01E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SweepCapsuleHalfHeight;                                   // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SweepCapsuleRadiusHeight;                                 // 0x01F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FalloffSplineDistanceThreshold;                           // 0x01F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDoJumpOnSplineEnd;                                       // 0x01FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x01FD(0x0003) MISSED OFFSET
	float                                              InteractEnterSplineHeight;                                // 0x0200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AllowEnterSplineDeltaTime;                                // 0x0204(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DebugLifeTime;                                            // 0x0208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DebugSphereRadius;                                        // 0x020C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bClientSendEnterRPC;                                      // 0x0214(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0215(0x0003) MISSED OFFSET
	struct FVector                                     ProjectionLocationOnSpline;                               // 0x0218(0x000C) (BlueprintVisible, IsPlainOldData)
	TEnumAsByte<ECustomMovmentMode>                    SplineMoveState;                                          // 0x0224(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0225(0x0003) MISSED OFFSET
	float                                              AimRotationInterpSpeed;                                   // 0x0228(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AimRotationReverseInterpSpeed;                            // 0x022C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TurnMaxAngle;                                             // 0x0230(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x1C];                                      // 0x0234(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.SplineMoveObj");
		return pStaticClass;
	}


	void UpdateTuring(float DeltaTime);
	void UpdateSplineMoveTurning(float DeltaTime);
	void UpdateMoveSound();
	void UpdateFocusRotation(float DeltaTime);
	void UpdateCameraLag(float DeltaTime);
	bool TryEnterSpline();
	void StopMoveSound();
	void StartSplineMoveCameraLag();
	void SplineMoveTurningEnd();
	void SplineMoveTurningBegin(const struct FVector& InTargetDir, bool bIsLeft);
	void SetSplineMoveState(TEnumAsByte<ECustomMovmentMode> InMoveState);
	void SetSpline(class USplineComponent* InSpline);
	void ServerPlayerTryEnterSpline(class USplineComponent* InSpline, const struct FVector& EnterLocation, const struct FRotator& EnterRot);
	void PlayMoveSound();
	void PlayerLeaveSpline(class USplineComponent* InSpline, TEnumAsByte<EMovementMode> InMovementMode);
	void PlayerEnterSpline(class USplineComponent* InSpline, const struct FVector& EnterLoc, const struct FRotator& EnterRot);
	void OwnerJump();
	bool OwnerHasWeapon();
	void OnSplineMoveHit(const struct FHitResult& Hit);
	void OnSpecialMoveCharacterJump();
	void OnSimulateCharStateChanged(uint64_t InCurrentStates, uint64_t InPrevStates);
	void OnPlayerRespawn(class AUAEPlayerController* PC);
	void OnPawnStateInterrupted(EPawnState State, EPawnState InterruptedBy);
	void OnPawnLeaveState(EPawnState LeaveState);
	void OnPawnEnterState(EPawnState EnterState);
	void MoveAlongSplineError();
	void InteractEnterSpline(class USplineComponent* InSpline);
	bool InSplineMoveState();
	void HandleBeginTouchScreen(const struct FVector2D& Loc);
	TEnumAsByte<ECustomMovmentMode> GetSplineMoveState();
	struct FVector GetProjectionLocationOnSpline(class USplineComponent* InSpline, const struct FVector& InLocation);
	struct FRotator GetPlayerEnterSplineRotation(class USplineComponent* InSpline);
	struct FVector GetPlayerEnterSplineLocation(class USplineComponent* InSpline);
	float GetDistanceAlongSplineAtWorldLocation(class USplineComponent* InSpline, const struct FVector& InLoc);
	float GetCurrentTime();
	class ASTExtraBaseCharacter* GetCharacterOwner();
	void ForceLeaveSpline(class USplineComponent* InSpline);
	void EndSplineMoveCameraLag();
	void EnableFocusRotation(bool InEnable);
	bool CustomModeIsSplineMove(unsigned char InCustomMode);
	void ClientPlayerLeaveSpline(class USplineComponent* InSpline);
	void AsyncLoadSoundResourceFinish();
	void AsyncLoadSoundResource();
	bool AllowTryEnterSpline();
};


// Class Addons.STSnowManAnimInstance
// 0x0040 (0x0340 - 0x0300)
class USTSnowManAnimInstance : public UAnimInstance
{
public:
	struct FVector                                     C_MoveVelocity;                                           // 0x0300(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               C_bHitPose;                                               // 0x030C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         C_LastMovementMode;                                       // 0x030D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               C_bFallingToLanding;                                      // 0x030E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x030F(0x0001) MISSED OFFSET
	class ASTExtraBaseCharacter*                       C_OwnerCharacter;                                         // 0x0310(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               C_Idel_Pos;                                               // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               C_JumpStart_Pos;                                          // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               C_JumpLoop_Pos;                                           // 0x031C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               C_JumpLanding_Pos;                                        // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               C_Hit_Pos;                                                // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               C_Move_Pos;                                               // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnMoveStateChange;                                        // 0x032C(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0338(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.STSnowManAnimInstance");
		return pStaticClass;
	}

};


// Class Addons.TRexVehicleDamageComponent
// 0x0080 (0x04C0 - 0x0440)
class UTRexVehicleDamageComponent : public UBioVehicleDamageComponent
{
public:
	struct FName                                       BlockComponentTag;                                        // 0x0440(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ImpulseOnCharacter;                                       // 0x0448(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0449(0x0003) MISSED OFFSET
	class UCurveFloat*                                 VehicleHitCharcterImpulseCurve;                           // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultImpuleScale;                                       // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ImpulseCharacterZScale;                                   // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BioDamageVehicleCooldownTime;                             // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultHitVehicleDamage;                                  // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCollisionLocation;                                    // 0x0460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0461(0x0003) MISSED OFFSET
	class ATyrannosaurusRexVehicle*                    OwnerVehicle;                                             // 0x0464(0x0004) (ZeroConstructor, IsPlainOldData)
	TMap<class AActor*, float>                         BioDamageVehicleTimes;                                    // 0x0468(0x0050) (ZeroConstructor)
	TArray<class ASTExtraVehicleBase*>                 LastOverlapedVehicles;                                    // 0x04A4(0x000C) (ZeroConstructor)
	TArray<class UActorComponent*>                     DamageCollisions;                                         // 0x04B0(0x000C) (ExportObject, ZeroConstructor)
	class UPrimitiveComponent*                         BlockCollision;                                           // 0x04BC(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.TRexVehicleDamageComponent");
		return pStaticClass;
	}


	void HandleFootOverlapVehicle(class ASTExtraVehicleBase* OverlappedVehicle, class UShapeComponent* DamageCollision, struct FOverlapResult* OverlapResult);
	void HandleFootOverlapCharacter(class ASTExtraBaseCharacter* OverlappedCharacter, class UShapeComponent* DamageCollision, struct FOverlapResult* OverlapResult);
};


// Class Addons.TyrannosaurusRexAnimInstance
// 0x0030 (0x0490 - 0x0460)
class UTyrannosaurusRexAnimInstance : public ULandingCreatureAnimInstance
{
public:
	float                                              RunSpeed;                                                 // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SprintSpeed;                                              // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinPlayRate;                                              // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxPlayRate;                                              // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ATyrannosaurusRexVehicle*                    TRex;                                                     // 0x0470(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bStartMoving;                                             // 0x0474(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0475(0x0003) MISSED OFFSET
	float                                              WalkPlayRate;                                             // 0x0478(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RunPlayRate;                                              // 0x047C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SprintPlayRate;                                           // 0x0480(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0484(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.TyrannosaurusRexAnimInstance");
		return pStaticClass;
	}


	void ResetStartMoving();
};


// Class Addons.TyrannosaurusRexVehicle
// 0x0180 (0x1510 - 0x1390)
class ATyrannosaurusRexVehicle : public ABioVehicleBase
{
public:
	struct FName                                       RoarDetectSocket;                                         // 0x1390(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RoarSpeedThreshold;                                       // 0x1398(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RoarCD;                                                   // 0x139C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RoarStartAttackTime;                                      // 0x13A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RoarEndAttackTime;                                        // 0x13A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RoarAttackDeltaTime;                                      // 0x13A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RoarDamage;                                               // 0x13AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                RoarMontage;                                              // 0x13B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      RoarCameraShake;                                          // 0x13B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnTRexApplyRoarAttack;                                    // 0x13B8(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnServerTRexStartRoar;                                    // 0x13C4(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnServerTRexFinishRoar;                                   // 0x13D0(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UAkAudioEvent*                               TRexRoarAudioEvent;                                       // 0x13DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       TRexBodyMatSlotName;                                      // 0x13E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ShelfMatSlotName;                                         // 0x13E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           BodyNormalMaterial;                                       // 0x13F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           ShelfNormalMaterial;                                      // 0x13F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           BodyInjuredMaterial;                                      // 0x13F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           ShelfInjuredMaterial;                                     // 0x13FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           BodySeverelyInjuredMaterial;                              // 0x1400(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           ShelfSeverelyInjuredMaterial;                             // 0x1404(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnServerTRexBreakOut;                                     // 0x1408(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              TRexBreakOutCD;                                           // 0x1414(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TRexBreakOutInterval;                                     // 0x1418(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          LightInjuredMat;                                          // 0x141C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          HeavyInjuredMat;                                          // 0x1420(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ModifyPhysCD;                                             // 0x1424(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ETyranState                                        STCurWalkState;                                           // 0x1428(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x1429(0x0007) MISSED OFFSET
	struct FName                                       BrokenCapsuleSocket;                                      // 0x1430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrokenCapsuleRadius;                                      // 0x1438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrokenCapsuleHeight;                                      // 0x143C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrokenDelayTime;                                          // 0x1440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DragOffsetZ;                                              // 0x1444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             DragOffsets;                                              // 0x1448(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              DeadAfterTime;                                            // 0x1454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    BioVehicleDestroyDelegate;                                // 0x1458(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               DeadDirection;                                            // 0x1464(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x27];                                      // 0x1465(0x0027) MISSED OFFSET
	float                                              RoarCurrentCD;                                            // 0x148C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsRoaring;                                               // 0x1490(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xB];                                       // 0x1491(0x000B) MISSED OFFSET
	TMap<class AActor*, float>                         BioModifyVehicleTimes;                                    // 0x149C(0x0050) (ZeroConstructor)
	class URaptorMovementComponent*                    TRexMovementComponent;                                    // 0x14D8(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              HurtInterval;                                             // 0x14DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x14E0(0x0004) MISSED OFFSET
	float                                              HurtDamageAmount;                                         // 0x14E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x14E8(0x0008) MISSED OFFSET
	class UAnimMontage*                                HurtMontage;                                              // 0x14F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x14F4(0x0004) MISSED OFFSET
	struct FName                                       LeftFootBoneName;                                         // 0x14F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RightFootBoneName;                                        // 0x1500(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x8];                                       // 0x1508(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.TyrannosaurusRexVehicle");
		return pStaticClass;
	}


	void ShowRoarOverSpeedTips();
	void ShakeNearbyPlayerCamera(class UClass* CameraShakeClass, float Radius);
	void ServerStopRoar();
	void ServerRoar();
	void ServerBreakOut(bool bEnable);
	void PrepareApplyRoarAttack();
	void OnTRexHPCHanged(float NewHP, float HPMax);
	void OnRoarFinished(TEnumAsByte<EBioVehicleSkillStopReason> Reason);
	void OnRep_bIsRoaring();
	class URaptorMovementComponent* GetVehicleMovement();
	bool GetVehicleBreakOutState();
	bool GetNearlyPlayers(float Radius, TArray<class ASTExtraBaseCharacter*>* Results);
	void EndRoarAttack();
	void ClientHandleVehicleDead(bool VehicleDeadDirection);
	bool CheckCanApplyDamageTo(class ASTExtraBaseCharacter* Target);
	void CallClientDrawDebugSphere(const struct FVector& Location, float DeltaTime);
	void BroadCastStopMontage();
	void BroadCastPlayRoarMontage();
	void BroadCastClientDrawSphere(const struct FVector& Center, float Radius);
	void BreakOut(bool bEnable);
	void ApplyRoarAttackToSpecifiedCharacter(class ASTExtraBaseCharacter* TargetCharacter);
	void ApplyRoarAttack();
};


// Class Addons.VehicleAttachmentComponent
// 0x0098 (0x01E8 - 0x0150)
class UVehicleAttachmentComponent : public UVehicleComponent
{
public:
	struct FName                                       FindingSocketName;                                        // 0x0150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FindingSphereRadius;                                      // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OtherValidBoxExtent;                                      // 0x015C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     OwnerValidBoxExtent;                                      // 0x0168(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     OwnerValidBoxOffset;                                      // 0x0174(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               AttachFollowParent;                                       // 0x0180(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0181(0x0003) MISSED OFFSET
	float                                              AttachValidSpeed;                                         // 0x0184(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CheckCollisionOffset;                                     // 0x0188(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	int                                                AttachFailTips;                                           // 0x0194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnVehicleAttachWithOtherVehicle;                          // 0x0198(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnClientAttachAvaliableStateChanged;                      // 0x01A4(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnClientAttachCheckFailed;                                // 0x01B0(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0x01BC(0x0008) MISSED OFFSET
	class ASTExtraVehicleBase*                         AttachedVehicle;                                          // 0x01C4(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	TArray<class ASTExtraVehicleBase*>                 PendingAttachVehicles;                                    // 0x01C8(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x01D4(0x0008) MISSED OFFSET
	class UChildActorComponent*                        AttachComponent;                                          // 0x01DC(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x01E0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.VehicleAttachmentComponent");
		return pStaticClass;
	}


	void TryToAttachOtherVehicle();
	void SetAttachState(class ASTExtraVehicleBase* OtherVehicle);
	void ServerDoAttachVehicle(class ASTExtraVehicleBase* OtherVehicle);
	void OnRep_AttachedVehicle(class ASTExtraVehicleBase* PrevVehicle);
	bool GetAttachState();
	class ASTExtraVehicleBase* GetAttachedVehicle();
	bool DoAttachVehicle(class ASTExtraVehicleBase* OtherVehicle);
	bool CheckSurroundingVehicle();
	bool CanInteractedByOther();
	bool CanAttachVehicle();
	void CallServerToAttach();
	void BroadcastClientVehicleAttachment(class ASTExtraVehicleBase* OtherVehicle);
};


// Class Addons.VehicleRubberDuck
// 0x0040 (0x1100 - 0x10C0)
class AVehicleRubberDuck : public ASTExtraVehicleBase
{
public:
	float                                              Audio_RpmScale;                                           // 0x10C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Audio_VelocityScale;                                      // 0x10C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFloatingVehicleVehicleMovementComponent2*   VehicleMovement;                                          // 0x10C8(0x0004) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               bCacheSfxStatusWhenLinked;                                // 0x10CC(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bLocalPlayerOnCurLink;                                    // 0x10CD(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1A];                                      // 0x10CE(0x001A) MISSED OFFSET
	unsigned char                                      bUseMultiPositionWhenLinked : 1;                          // 0x10E8(0x0001) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x3];                                       // 0x10E9(0x0003) MISSED OFFSET
	float                                              MultiPosSoundTickInterval;                                // 0x10EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               Sfx_EngineLoop_UnLinked;                                  // 0x10F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               Sfx_EngineLoop_Linked_Autonomous;                         // 0x10F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               Sfx_EngineLoop_Linked_Simulated;                          // 0x10F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPhysicsBalanceComponent*                    PhysicsBalance;                                           // 0x10FC(0x0004) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Addons.VehicleRubberDuck");
		return pStaticClass;
	}


	class UFloatingVehicleVehicleMovementComponent2* GetVehicleMovement();
	float GetForwardSpeed();
};


}

