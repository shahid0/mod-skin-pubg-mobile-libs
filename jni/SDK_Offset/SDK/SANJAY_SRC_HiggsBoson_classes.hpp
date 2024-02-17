#pragma once

// Pubg Mobile Beta (3.0) SDK by Telegram @Sanjay_Src

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class HiggsBoson.BaziState
// 0x00D4 (0x00F0 - 0x001C)
class UBaziState : public UObject
{
public:
	unsigned char                                      UnknownData00[0xD4];                                      // 0x001C(0x00D4) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class HiggsBoson.BaziState");
		return pStaticClass;
	}


	void OnControllerReconnected();
	void AddChori(const struct FChori& Element);
	void AddBazi(const struct FBazi& Element);
};


// Class HiggsBoson.ClientGlueHiaSystem
// 0x0940 (0x0960 - 0x0020)
class UClientGlueHiaSystem : public UWorldSubsystem
{
public:
	unsigned char                                      UnknownData00[0x44];                                      // 0x0020(0x0044) MISSED OFFSET
	bool                                               bEnglish;                                                 // 0x0064(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
	class UBaziState*                                  BaziState;                                                // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	class UMakeWoe*                                    MakeWoe;                                                  // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8F0];                                     // 0x0070(0x08F0) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class HiggsBoson.ClientGlueHiaSystem");
		return pStaticClass;
	}


	float Vulou();
	void LuaFunc9(int Param1);
	bool LuaFunc8(int Param1);
	bool LuaFunc7(int Param1);
	bool LuaFunc6(int Param1);
	bool LuaFunc5(int Param1);
	bool LuaFunc4(int Param1);
	void LuaFunc3(int Param1);
	void LuaFunc2();
	bool LuaFunc1(class AActor* PtrActor);
	void Func9(class AActor* PtrWeapon);
	int Func8(class AActor* PtrWeapon, const struct FBulletHitInfoUploadData& UploadData, const struct FLocalShootHitData& LocalHitData);
	bool Func7();
	float Func6(class AActor* Param1);
	float Func3();
	void Func21(class AActor* Param1);
	void Func20(class AActor* Param1, struct FVector* Param2);
	bool Func2(class AActor* CharacterPtr, bool bParam1);
	void Func19(uint32_t Param1, float Param2, float param3);
	void Func18(TArray<struct FBazi> Bazi, TArray<struct FChori> Chori);
	void Func17(const struct FFatalDamageParameter& Param1);
	void Func16();
	void Func15(class AActor* Param1);
	void Func14(const struct FShootTimeData& InData, class AActor* PtrWeapon);
	float Func11(class AActor* Param1);
	void Func10(class AActor* Param1);
	bool Func1(class AActor* CharacterPtr, float TimeInSeconds, float MarginInSeconds);
};


// Class HiggsBoson.FuzzyObject
// 0x0264 (0x0280 - 0x001C)
class UFuzzyObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x258];                                     // 0x001C(0x0258) MISSED OFFSET
	int                                                Param1;                                                   // 0x0274(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0278(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class HiggsBoson.FuzzyObject");
		return pStaticClass;
	}


	bool SetUInt8ValueByName(int Name, unsigned char Value);
	bool SetUInt64ValueByName(int Name, uint64_t Value);
	bool SetUInt32ValueByName(int Name, uint32_t Value);
	bool SetUInt16ValueByName(int Name, uint16_t Value);
	bool SetInt8ValueByName(int Name, int8_t Value);
	bool SetInt64ValueByName(int Name, int64_t Value);
	bool SetInt32ValueByName(int Name, int Value);
	bool SetInt16ValueByName(int Name, int16_t Value);
	bool SetFloatValueByName(int Name, float Value);
	bool SetBoolValueByName(int Name, bool Value);
	bool GetUInt8ValueByName(int Name, unsigned char* OutValue);
	bool GetUInt64ValueByName(int Name, uint64_t* OutValue);
	bool GetUInt32ValueByName(int Name, uint32_t* OutValue);
	bool GetUInt16ValueByName(int Name, uint16_t* OutValue);
	bool GetInt8ValueByName(int Name, int8_t* OutValue);
	bool GetInt64ValueByName(int Name, int64_t* OutValue);
	bool GetInt32ValueByName(int Name, int* OutValue);
	bool GetInt16ValueByName(int Name, int16_t* OutValue);
	bool GetFloatValueByName(int Name, float* OutValue);
	bool GetBoolValueByName(int Name, bool* OutValue);
};


// Class HiggsBoson.SCoronaClientData
// 0x0000 (0x0280 - 0x0280)
class USCoronaClientData : public UFuzzyObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class HiggsBoson.SCoronaClientData");
		return pStaticClass;
	}

};


// Class HiggsBoson.MakeWoe
// 0x0004 (0x0020 - 0x001C)
class UMakeWoe : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class HiggsBoson.MakeWoe");
		return pStaticClass;
	}

};


// Class HiggsBoson.CamoyoHelper
// 0x0004 (0x0020 - 0x001C)
class UCamoyoHelper : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class HiggsBoson.CamoyoHelper");
		return pStaticClass;
	}


	static void MakeRectTu(const struct FScriptDelegate& CamoyoRetDelegate, const struct FString& Filename, int Quality, bool bShowUI);
	static void MakeMemPerform(int InbOpen);
	static void MakeFitRectTu(const struct FScriptDelegate& CamoyoRetDelegate, const struct FVector4& InCutParam, int InTuType, bool isShowUI);
};


// Class HiggsBoson.HiggsBosonComponent
// 0x0A68 (0x0BB8 - 0x0150)
class UHiggsBosonComponent : public ULuaActorComponent
{
public:
	unsigned char                                      UnknownData00[0x23];                                      // 0x0150(0x0023) MISSED OFFSET
	bool                                               bOpenActorChannelErrorReport;                             // 0x0173(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF8];                                      // 0x0174(0x00F8) MISSED OFFSET
	struct FString                                     TraceData;                                                // 0x026C(0x000C) (ZeroConstructor)
	struct FString                                     GameTraceData;                                            // 0x0278(0x000C) (ZeroConstructor)
	uint32_t                                           HeartBreaks;                                              // 0x0284(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     HeartInfo;                                                // 0x0288(0x000C) (ZeroConstructor)
	struct FScriptMulticastDelegate                    OnSwiftHawkDelegate;                                      // 0x0294(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGlueHiaRayResult;                                       // 0x02A0(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class ASTExtraBaseCharacter*                       CharacterOwner;                                           // 0x02AC(0x0004) (ZeroConstructor, IsPlainOldData)
	class ASTExtraPlayerController*                    PlayerController;                                         // 0x02B0(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bClientInfoReceived;                                      // 0x02B4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02B5(0x0003) MISSED OFFSET
	TArray<uint32_t>                                   ClientInfoAsUInt32Array;                                  // 0x02B8(0x000C) (ZeroConstructor)
	TArray<unsigned char>                              IntegrityItemCheckResultAsBytes;                          // 0x02C4(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x38];                                      // 0x02D0(0x0038) MISSED OFFSET
	bool                                               bRoofTouchActive;                                         // 0x0308(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xB];                                       // 0x0309(0x000B) MISSED OFFSET
	int                                                RoofTouchStatus;                                          // 0x0314(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x700];                                     // 0x0318(0x0700) MISSED OFFSET
	class USCoronaClientData*                          SecurityCoronaLabClientDataPointer;                       // 0x0A18(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x5C];                                      // 0x0A1C(0x005C) MISSED OFFSET
	TArray<struct FString>                             MatchedApps;                                              // 0x0A78(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData07[0x14];                                      // 0x0A84(0x0014) MISSED OFFSET
	TArray<struct FString>                             ReceivedInstalledApp;                                     // 0x0A98(0x000C) (ZeroConstructor)
	struct FScriptMulticastDelegate                    OnServerReceiveInstalledAppDelegate;                      // 0x0AA4(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData08[0x1C];                                      // 0x0AB0(0x001C) MISSED OFFSET
	int                                                ReceivedRotationModifiedCount;                            // 0x0ACC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ReceivedTranslationModifiedCount;                         // 0x0AD0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ReceivedScale3DModifiedCount;                             // 0x0AD4(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0xB8];                                      // 0x0AD8(0x00B8) MISSED OFFSET
	float                                              TouchScreenActiveTimeRatioThreshold;                      // 0x0B90(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0B94(0x0004) MISSED OFFSET
	float                                              MouTa;                                                    // 0x0B98(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BandaCountThreshold;                                      // 0x0B9C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnableBandCount;                                         // 0x0BA0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x17];                                      // 0x0BA1(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class HiggsBoson.HiggsBosonComponent");
		return pStaticClass;
	}


	void Zanwu(const struct FString& Param1);
	void SyncServerParam(bool Param1);
	void SwiftHawk(TArray<unsigned char> Hawks, uint32_t Magic);
	void ShowABCD(const struct FString& Message, bool bIsClientShowWindow);
	void SetSchemeForInitialize(int Index, uint32_t VerifyLen, TArray<unsigned char> VerifyHashArray, TArray<struct FPatchPoint> PatchPointArray);
	void SetSchemeForGet(int Index, uint32_t VerifyLen, TArray<unsigned char> VerifyHashArray, TArray<struct FPatchPoint> PatchPointArray);
	void ServerReceiveInstalledApp(TArray<struct FString> PackageNames);
	void ServerPoPo(TArray<unsigned char>* Array);
	void RPC_ServerGlueHiaPark(int8_t HeShui, TArray<unsigned char> GlueHiaParkArr, uint32_t HiaStatus, TArray<unsigned char> GlueArg, TArray<unsigned char> GlueHiaParkArr2, uint32_t HiaStatus2);
	void RPC_ServerCapbo(int8_t BoCapC, int8_t InBoType, TArray<unsigned char> BoDataArr);
	void RPC_ClientCoronaLab(unsigned char bAllSwitch, TArray<unsigned char> CoronaLab, uint32_t CoronaState);
	void OnWeaponAimInput(float InDistToEnemy, float InYaw, float InPitch, float InRoll);
	void OnTouchInput(float InYaw, float InPitch, float InRoll);
	void OnStopFireEvent();
	void OnStartFireEvent();
	void OnSkillInteruptVisual(class AActor* InTarget, class AActor* InCauser);
	void OnSkillEndVisual(class AActor* InTarget, class AActor* InCauser);
	void OnSkillEndTrans(class AActor* InTarget, class AActor* InCauser);
	void OnSkillBeginVisual(class AActor* InTarget, class AActor* InCauser);
	void OnSkillBeginTrans(class AActor* InTarget, class AActor* InCauser);
	void OnPlayerScopeOut(bool bBegan);
	void OnPlayerScopeIn(bool bBegan);
	void OnMyPawnRespawn(class AUAEPlayerController* InPlayerController);
	void OnKillSomeOneEvent(class AActor* InSomeOne);
	void OnGyroInput(float InYaw, float InPitch, float InRoll);
	void OnClientAdjustPosition(const struct FVector& NewLoc, ECharacterMoveDragReason Reason);
	void OnCapboReturn(int BoCapC, int InBoType, TArray<unsigned char> RetData);
	void OnBulletImpactEvent(class AActor* InCauser, const struct FHitResult& InImpactResult);
	void HandleClientReconnect();
	void FlushGameEnd();
	void Ezio(int Param1, int Param2, int param3, int Param4);
	int EnableTickEncrypt();
	int EnablePeekShootVerify();
	void EnableEnhancedDynamicActors(int Index);
	void DispatchIntegrityCheckItem(uint32_t PlatID, uint32_t AreaID, uint32_t GameBits, uint32_t Index, int Offset, uint32_t Len, uint32_t Type);
	void DevPVSCheckClientLocationC2S(class ASTExtraBaseCharacter* PtrOtherCharacter, const struct FVector& D, const struct FVector& A, const struct FVector& V, const struct FVector& C, bool b1);
	void DevPVSCheckClientLocation(class AActor* PtrSimulatedProxy, const struct FVector& D);
	void DevPrintMouke(const struct FString& Param0, float Param1, const struct FString& param3);
	void ControlRoofTouch(int Switch);
	void ControlMoveInputRecord(int Switch, float RecordCooldown, int BitmapSize, int MinValidSampleCount);
	void ClientSwiftHawkWithParams(TArray<unsigned char> Hawks);
	void ClientSwiftHawk(unsigned char Type, int SequenceID);
	void ClientReceiveEx(TArray<unsigned char> RPCConstArray);
	void ClientInstalledApp(int Type, TArray<struct FString> PackageNames);
	void ClientDoJT(bool bDelayUntilShot);
	void ClientCloseBaziUI(TArray<struct FBazi> Bazi, TArray<struct FChori> Chori);
	void C2SSendAlert(const struct FString& Param1);
};


// Class HiggsBoson.MarginIntervalCharacterTickerPlayerInfo
// 0x000C (0x0028 - 0x001C)
class UMarginIntervalCharacterTickerPlayerInfo : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class HiggsBoson.MarginIntervalCharacterTickerPlayerInfo");
		return pStaticClass;
	}

};


// Class HiggsBoson.MarginIntervalCharacterTicker
// 0x0044 (0x0060 - 0x001C)
class UMarginIntervalCharacterTicker : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	float                                              MarginTime;                                               // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	TMap<uint32_t, class UMarginIntervalCharacterTickerPlayerInfo*> PlayerKey2Info;                                           // 0x0024(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class HiggsBoson.MarginIntervalCharacterTicker");
		return pStaticClass;
	}


	void Reset();
};


// Class HiggsBoson.SecurityImprisonComp
// 0x0020 (0x00E8 - 0x00C8)
class USecurityImprisonComp : public UActorComponent
{
public:
	class ASTExtraBaseCharacter*                       CharacterWaitForOp;                                       // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<uint64_t>                                   TeammateKillerUID;                                        // 0x00CC(0x000C) (Net, ZeroConstructor)
	TArray<ETeammateHurtType>                          TeammateKillType;                                         // 0x00D8(0x000C) (Net, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class HiggsBoson.SecurityImprisonComp");
		return pStaticClass;
	}


	void ReleaseTeammate(uint64_t PlayerUID);
	void ImprisonmentUIUpdate(uint64_t PlayerUID, bool bIsImprison);
	void ImprisonmentTeammate(uint64_t PlayerUID, bool bIscomplaint);
	void ImprisonmentReport(uint64_t PlayerUID);
};


// Class HiggsBoson.TickAsTimer
// 0x0004 (0x0020 - 0x001C)
class UTickAsTimer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class HiggsBoson.TickAsTimer");
		return pStaticClass;
	}

};


// Class HiggsBoson.TimeConsuming
// 0x0004 (0x0020 - 0x001C)
class UTimeConsuming : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class HiggsBoson.TimeConsuming");
		return pStaticClass;
	}

};


// Class HiggsBoson.TimeIntervalPawnStateHistorySystem
// 0x009C (0x00B8 - 0x001C)
class UTimeIntervalPawnStateHistorySystem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x001C(0x003C) MISSED OFFSET
	int                                                HistoryArraySize;                                         // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5C];                                      // 0x005C(0x005C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class HiggsBoson.TimeIntervalPawnStateHistorySystem");
		return pStaticClass;
	}


	void UpdateParams();
	bool QueryHistoryMaxVelocity(uint64_t UID, float CenterTime, float MarginTime, float* OutMaxZVelocity, float* OutMaxXYVelocity);
};


}

