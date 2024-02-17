#pragma once

// Pubg Mobile Beta (3.0) SDK by Telegram @Sanjay_Src

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AutoRobot.AutoRobotModule
// 0x002C (0x0048 - 0x001C)
class UAutoRobotModule : public UObject
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x001C(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AutoRobot.AutoRobotModule");
		return pStaticClass;
	}

};


// Class AutoRobot.AutoRobotSceneTool
// 0x0004 (0x0020 - 0x001C)
class UAutoRobotSceneTool : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AutoRobot.AutoRobotSceneTool");
		return pStaticClass;
	}

};


// Class AutoRobot.AutoRunPlayerTestActor
// 0x0020 (0x0330 - 0x0310)
class AAutoRunPlayerTestActor : public AActor
{
public:
	float                                              Interval;                                                 // 0x0310(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             PortalLoctions;                                           // 0x0314(0x000C) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0320(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AutoRobot.AutoRunPlayerTestActor");
		return pStaticClass;
	}

};


// Class AutoRobot.AutoTestInterface
// 0x0048 (0x0110 - 0x00C8)
class UAutoTestInterface : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x00C8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AutoRobot.AutoTestInterface");
		return pStaticClass;
	}


	void StarJumpPlane();
};


// Class AutoRobot.AutoTestSubsystem
// 0x0028 (0x0048 - 0x0020)
class UAutoTestSubsystem : public UGameInstanceSubsystem
{
public:
	class URemoteControlManager*                       RemoteControlManager;                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	class UAutoRobotModule*                            AutoModule;                                               // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     AutoTestMissionType;                                      // 0x0028(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     CustomLineStr;                                            // 0x0034(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	EGamePlayMode                                      GamePlayMode;                                             // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0040(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AutoRobot.AutoTestSubsystem");
		return pStaticClass;
	}


	void Swipe(const struct FString& InPath, float Duringtime, int StartX, int StartY, int EndX, int EndY, int TouchIndex, int ControllerId, int ScreensizeX, int ScreensizeY);
	void StopRecordInput();
	void StopPlayInput();
	void StartRemoteControl(const struct FString& Name, const struct FString& Host, int Port);
	void StartRecordInput(const struct FString& Command);
	void StartPlayInput();
	void SetCustomRouteLine();
	void RegisterInputProcessor();
	struct FVector PVEAutoTestGetEnemyLocation();
	void PubgmSimulateActionClientEx(int SimulateType);
	struct FVector ParsePoint(const struct FString& SrcStr);
	void OpenDebugg();
	void OnStopAutoTest();
	void OnStartAutoTest();
	void OnGameStart();
	void OnGameEnd();
	bool IsUIAutoTest();
	bool IsSecAutoRunTest();
	bool IsGAutomatorTest();
	bool IsAutoRunTestGamePVEProfile();
	bool IsAutoRunTestGamePVE();
	bool IsAutoRunTestGameBindComponent();
	bool IsAutoRunTestGame();
	void GetWidgetPathByPos(int StartX, int StartY, int ScreensizeX, int ScreensizeY);
	struct FString GetRuntimeProfileData();
	class UAutoTestInterface* GetAutoTestInterface();
	int GetAutoRunTestServerIdx();
	struct FString GetAutoRunPassWD();
	struct FString GetAutoRunLuaTest();
	struct FString GetAutoRunAccount();
	void CloseDebugg();
	void ClickButton(const struct FString& InPath, float Duringtime, int StartX, int StartY, int EndX, int EndY, int TouchIndex, int ControllerId, int ScreensizeX, int ScreensizeY, const struct FString& UsePos);
	void CheckStaticMesh(float Radius, float DeformationDistance, bool CheckComplexCollisionQuery);
	void AutoTestWaitForUIWithName(const struct FString& UIName);
	void AutoTestWaitForSecond(int sec);
	bool AutoTestWaitForJumpPlane();
	void AutoTestVehicleDriverShoot();
	void AutoTestVaultWall();
	void AutoTestUsePropSkillClientEx();
	void AutoTestUseItemClientEx(int ItemId);
	void AutoTestUseItem(int ItemId);
	void AutoTestUpgradePropSkillClientEx(int ItemId);
	void AutoTestToggleVehicleSync(bool Val);
	void AutoTestThrowBoomOnlyClientEx(int SkillID);
	void AutoTestThrowBoom(int SkillID);
	void AutoTestSwitchWeapon(int WeaponType);
	void AutoTestSwitchMode(const struct FString& FunName);
	void AutoTestStopRecordStats();
	void AutoTestStatsCommand(const struct FString& Command);
	void AutoTestStartRecordStats(const struct FString& FileStr);
	void AutoTestStartFireOnlyClientEx(int InX, int InY, int InZ, int sec);
	void AutoTestStartFire(int InX, int InY, int InZ, int sec);
	void AutoTestSpecating(int LeftTeamCnt);
	void AutoTestSpawnVehicle(const struct FString& ResPath);
	void AutoTestSpawnAI(int ID, float PosiX, float PosiY, float PosiZ);
	void AutoTestSetVehicleRotation(int InX, int InY, int InZ);
	void AutoTestSetRecordFrequency(int Frequency);
	void AutoTestSetActorRotation(float InRate, float InSpeed);
	void AutoTestSetActorPitch(float InRate);
	void AutoTestSetActorFacePoint(int InX, int InY, int InZ);
	void AutoTestSendBuffertoSvr(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void AutoTestReloadOnlyClientEx();
	struct FVector2D AutoTestPickupItemOnlyClientEx();
	struct FVector2D AutoTestPickupItem(int ItemId);
	void AutoTestOpenTraceRPC();
	void AutoTestOpenScope(bool bOpenScope);
	void AutoTestOpenDoorOnlyClientEx(int bOpen);
	void AutoTestMustDie(int LeftTeamCnt);
	void AutoTestMoveVehicleForward(float Speed, float rate, float sec);
	void AutoTestMoveToPoint(int InX, int InY, int InZ);
	void AutoTestJumpPlane(int sec);
	void AutoTestJump();
	bool AutoTestIsOnVehicle();
	bool AutoTestIsDriver();
	bool AutoTestIsCurrentCommandFinished();
	void AutoTestInputMovement(float InRate);
	void AutoTestInputKey(const struct FString& Key, TEnumAsByte<EInputEvent> EventType, float AmountDepressed, bool bGamepad);
	void AutoTestGMVehicleMoveAndTowardClientEx(float InX, float InY, float InZ, float InX1, float InY1, float InZ1);
	void AutoTestGMGotoClientEx(int InX, int InY, int InZ);
	void AutoTestGMGoto(int InX, int InY, int InZ);
	void AutoTestGMCommand(const struct FString& Command);
	struct FVector AutoTestGetVehicleLocationClientEx();
	struct FVector AutoTestGetVehicleLocation();
	void AutoTestGetRuntimeStats();
	void AutoTestGetRenderTimeDetail();
	void AutoTestGetPrimitivesDetail();
	void AutoTestGetOnVehicle(int SeatType);
	void AutoTestGetOffVehicle();
	struct FVector AutoTestGetNearVehiclePos();
	void AutoTestGetMemoryDetail();
	struct FString AutoTestGetMapName();
	void AutoTestGetLuaReturnValue(const struct FString& retval);
	struct FString AutoTestGetGameModeState();
	struct FVector AutoTestGetFrameInfo();
	void AutoTestGetDrawCallDetail();
	int AutoTestGetDis2D(int InX1, int InY1, int InZ1, int InX2, int InY2, int InZ2);
	struct FVector AutoTestGetCircleLocationClientEx();
	TArray<int> AutoTestGetAvailableDeadBoxItem();
	TArray<struct FString> AutoTestGetAllActorNames();
	struct FString AutoTestGetActorName();
	TArray<struct FVector> AutoTestGetActorLocationListClientEx(int ActorType, float RangeRadius);
	struct FVector AutoTestGetActorLocation(const struct FString& PlayerName);
	float AutoTestForceVehiclePosPullClientEx(bool bNext);
	void AutoTestForceDeleteCmdAnim();
	void AutoTestEnableUITest();
	void AutoTestEnableTickOrVisibilityByActorName(const struct FString& actorName, bool bEnableTick, bool bShow);
	void AutoTestDropItemClientEx(int ItemId, int nCount);
	void AutoTestContinuousMoveTo(float InX, float InY, float InZ);
	void AutoTestConsoleCommand(const struct FString& Command);
	void AutoTestCloseTraceRPC();
	void AutoTestAddItem(int ItemId, int nCount);
	void AutoMoveToTargetPosClientEx(const struct FVector& targetPos);
	void AutoMovePawnToTargetPosClientEx(const struct FVector& targetPos);
};


// Class AutoRobot.PubgmAutoRun
// 0x0018 (0x00E0 - 0x00C8)
class UPubgmAutoRun : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	bool                                               bRoutePointInited;                                        // 0x00D0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00D1(0x0003) MISSED OFFSET
	TArray<class AXTPoint*>                            RoutePoints;                                              // 0x00D4(0x000C) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AutoRobot.PubgmAutoRun");
		return pStaticClass;
	}


	void VehicleTowardTo(float X, float Y, float Z);
	void VehicleMoveTo(float X, float Y, float Z);
	void VehicleMoveAndTowardTo(float X, float Y, float Z, float X1, float Y1, float Z1);
	void OnPubgmAutoRunSimulateAction__DelegateSignature(int SimActionType);
	static bool NeedCmdAutoRun();
	void NativeSimulateAction(int SimActionType);
	void InitRoutePoint();
	void GMGotoPosition(int X, int Y, int Z);
	TArray<struct FVector> GetRangeActorsPostions(int ActorType, const struct FVector& OriginPos, float RangeRadius);
	struct FVector GetPoisonCircleLocation();
	static float GetPlayerSpeed(int SpeedIdx);
	bool GetNearestXTPointToVehicle(bool bNext, struct FTransform* FirstPoint, struct FTransform* SecendPoint);
	float ForceVehiclePosPull(bool bNext);
};


// Class AutoRobot.PVEAutoRunTest
// 0x0040 (0x0108 - 0x00C8)
class UPVEAutoRunTest : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	int                                                MaxMoveTime;                                              // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxDstStayTime;                                           // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                KillAllTime;                                              // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                StatRecordTime;                                           // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x00E0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AutoRobot.PVEAutoRunTest");
		return pStaticClass;
	}

};


// Class AutoRobot.RemoteControlHelper
// 0x0000 (0x0020 - 0x0020)
class URemoteControlHelper : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AutoRobot.RemoteControlHelper");
		return pStaticClass;
	}


	static struct FString GetRuntimeStats();
	static struct FString GetDeviceName();
	static void AutoPickup(class ASTExtraBaseCharacter* Player);
};


// Class AutoRobot.RemoteControlManager
// 0x0004 (0x0020 - 0x001C)
class URemoteControlManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AutoRobot.RemoteControlManager");
		return pStaticClass;
	}


	bool Tick(float DeltaTime);
	void Stop();
	bool BeginWithFile();
	bool Begin(const struct FString& Name, const struct FString& Host, int Port);
};


// Class AutoRobot.ShootWeaponAutoTestHandle
// 0x000C (0x0028 - 0x001C)
class UShootWeaponAutoTestHandle : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AutoRobot.ShootWeaponAutoTestHandle");
		return pStaticClass;
	}


	void OnWeaponShootBullet(class ASTExtraShootWeapon* ShootWeapon, class ASTExtraShootWeaponBulletBase* Bullet);
	void OnBulletImpact(class ASTExtraShootWeapon* ShootWeapon, class ASTExtraShootWeaponBulletBase* Bullet, const struct FHitResult& HitRet);
	void OnBulletDamage(int ShootID, float Damage);
	struct FString GenerateBulletsImpactJsonStringAndClearData();
};


// Class AutoRobot.TestAIController
// 0x0008 (0x0C30 - 0x0C28)
class ATestAIController : public ABaseAIController
{
public:
	class UClass*                                      CharacterClass;                                           // 0x0C28(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0C2C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AutoRobot.TestAIController");
		return pStaticClass;
	}

};


}

