#pragma once

// Pubg Mobile Beta (3.0) SDK by Telegram @Sanjay_Src

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AkAudio.AkAcousticPortal
// 0x0010 (0x0348 - 0x0338)
class AAkAcousticPortal : public AVolume
{
public:
	float                                              Gain;                                                     // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAkAcousticPortalState                             InitialState;                                             // 0x033C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x033D(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkAcousticPortal");
		return pStaticClass;
	}


	void OpenPortal();
	EAkAcousticPortalState GetCurrentState();
	void ClosePortal();
};


// Class AkAudio.AkAcousticTexture
// 0x0004 (0x0020 - 0x001C)
class UAkAcousticTexture : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkAcousticTexture");
		return pStaticClass;
	}

};


// Class AkAudio.AkAmbientSound
// 0x0010 (0x0320 - 0x0310)
class AAkAmbientSound : public AActor
{
public:
	class UAkAudioEvent*                               AkAudioEvent;                                             // 0x0310(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UAkComponent*                                AkComponent;                                              // 0x0314(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               StopWhenOwnerIsDestroyed;                                 // 0x0318(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutoPost;                                                 // 0x0319(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x031A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkAmbientSound");
		return pStaticClass;
	}


	void StopAmbientSound();
	void StartAmbientSound();
};


// Class AkAudio.AkAreaCheckComponent
// 0x0038 (0x0100 - 0x00C8)
class UAkAreaCheckComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x00C8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkAreaCheckComponent");
		return pStaticClass;
	}


	void UnRegistAKAreaVolume(class AActor* AreaVolume, ECustomAKAreaType AreaType);
	void RegistAKAreaVolume(class AActor* AreaVolume, ECustomAKAreaType AreaType);
	bool CheckVoiceAvailable(const struct FVector& VoicePostion);
};


// Class AkAudio.AkAreaCheckVolume
// 0x0008 (0x0318 - 0x0310)
class AAkAreaCheckVolume : public AActor
{
public:
	ECustomAKAreaType                                  AKAreaType;                                               // 0x0310(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0311(0x0003) MISSED OFFSET
	class UBoxComponent*                               CollisionComponent;                                       // 0x0314(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkAreaCheckVolume");
		return pStaticClass;
	}


	bool IsInsideVolume(const struct FVector& OrignPosition);
	ECustomAKAreaType GetAKAreaType();
};


// Class AkAudio.AkAudioBank
// 0x0014 (0x0030 - 0x001C)
class UAkAudioBank : public UObject
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x001C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkAudioBank");
		return pStaticClass;
	}

};


// Class AkAudio.AkAudioDeviceSettings
// 0x0034 (0x0050 - 0x001C)
class UAkAudioDeviceSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	int                                                SuperHighEngineDefaultPoolSize;                           // 0x0020(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                HighDefaultPoolSize;                                      // 0x0024(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                HighEngineDefaultPoolSize;                                // 0x0028(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                LowDefaultPoolSize;                                       // 0x002C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                LowEngineDefaultPoolSize;                                 // 0x0030(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                DefaultCommandQueueSize;                                  // 0x0034(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                DefaultBluetoothDelay;                                    // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultBluetoothErrThres;                                 // 0x003C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultBluetoothErrRatio;                                 // 0x0040(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultBluetoothMaxTime;                                  // 0x0044(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableSilence;                                           // 0x0048(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkAudioDeviceSettings");
		return pStaticClass;
	}


	void InitConfig();
};


// Class AkAudio.AkAudioEvent
// 0x0014 (0x0030 - 0x001C)
class UAkAudioEvent : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	float                                              MaxAttenuationRadius;                                     // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsInfinite;                                               // 0x0024(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	float                                              MinimumDuration;                                          // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaximumDuration;                                          // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkAudioEvent");
		return pStaticClass;
	}

};


// Class AkAudio.AkAudioMonitor
// 0x0000 (0x0020 - 0x0020)
class UAkAudioMonitor : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkAudioMonitor");
		return pStaticClass;
	}


	static void UpdateAkComponentInfo(TMap<struct FString, struct FAkCombinedInfo>* OutList);
	static void Update(float DeltaTime);
	static void SetUpdateInterval(float NewUpdateInterval);
	static void SetMonitorFlag(unsigned char TotalPlayCount, unsigned char ObjectPlayCount, TArray<unsigned char>* InFlags);
	static void OnReportError(const struct FString& FunctionName, unsigned char ErrorAkCode, uint64_t NumericParam, const struct FString& StrParam);
	static void OnAkAudioEventTrigger(const struct FString& Name, int code);
	static void OnAkAudioBankTrigger(bool bUnload, const struct FString& BankName, int8_t RefCount);
	static bool IsMonitorInit();
	static bool IsAkOutOfAttenuation(class UAkComponent* AkComp, float Attenuation);
	static TArray<uint16_t> GetTotalPlayRecord();
	static struct FString GetSwitchValue(class UAkComponent* Component, const struct FString& SwitchName);
	static TArray<struct FString> GetSwitchNames(class UAkComponent* Component);
	static float GetRTPCValueByID(class UAkComponent* Component, uint32_t RTPCID);
	static float GetRTPCValue(class UAkComponent* Component, const struct FString& RTPCName);
	static TArray<struct FString> GetRTPCNames(class UAkComponent* Component);
	static TArray<uint32_t> GetRTPCIDs(class UAkComponent* Component);
	static TMap<unsigned char, struct FAKErrorInfo> GetReportErrorRecord();
	static struct FVector GetPostion(class UAkComponent* Component);
	static TArray<int> GetPlayingID(class UAkComponent* Component);
	static struct FString GetPlayEventName(class UAkComponent* Component, int PlayID);
	static TMap<struct FString, unsigned char> GetObjectPlayRecord();
	static struct FString GetObjectNameByObjectID(uint64_t ObjectID);
	static class UAkAudioMonitorData* GetMonitorDataPtr();
	static struct FString GetGlobalSwitchValue(const struct FString& SwitchName);
	static TArray<struct FString> GetGlobalSwitchNames();
	static float GetGlobalRTPCValue(const struct FString& RTPCName);
	static TArray<struct FString> GetGlobalRTPCNames();
	static void GetEventList(TArray<struct FString>* OutRes);
	static class UAkAudioEvent* GetEventInMemoryByName(TArray<class UAkAudioEvent*> AllAk, const struct FString& AkName);
	static void GetBankRefList(TMap<struct FString, int8_t>* OutRes);
	static TArray<struct FName> GetAllEventNameInMemory(class UObject* WorldContent);
	static void GetAllEventInMemory(class UObject* WorldContent, TArray<class UAkAudioEvent*>* AllAk);
	static void GetAllAkComponentFormDevice(TArray<class UAkComponent*>* AkList, TArray<class UAkComponent*>* recycledAkList);
};


// Class AkAudio.AkAudioMonitorData
// 0x00EC (0x0108 - 0x001C)
class UAkAudioMonitorData : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	TMap<struct FString, unsigned char>                ObjectPlayCountRecord;                                    // 0x0028(0x0050) (ZeroConstructor)
	TMap<unsigned char, struct FAKErrorInfo>           AkErrorRecord;                                            // 0x0064(0x0050) (ZeroConstructor)
	struct FScriptDelegate                             AkAudioEventTrigger;                                      // 0x00A0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference)
	float                                              nPassedTime;                                              // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              nUpdateInterval;                                          // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	TMap<struct FString, int8_t>                       BankRefList;                                              // 0x00B8(0x0050) (ZeroConstructor)
	TArray<struct FString>                             EventList;                                                // 0x00F4(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0100(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkAudioMonitorData");
		return pStaticClass;
	}


	void UpdateEventList(bool bStop, const struct FString& InEventName);
	void UpdateBankRefList(bool bUnload, const struct FString& BankName, int8_t RefCount);
	void UpdateAkComponentInfo(TMap<struct FString, struct FAkCombinedInfo>* OutList);
	void SetMonitorFlagInternal(unsigned char TotalPlayCount, unsigned char ObjectPlayCount, TArray<unsigned char>* InFlags);
	void OnReportErrorInternal(const struct FString& FunctionName, unsigned char ErrorAkCode, uint64_t NumericParam, const struct FString& StrParam);
	void Initialize();
};


// Class AkAudio.AkAudioVisualComponent
// 0x1060 (0x1320 - 0x02C0)
class UAkAudioVisualComponent : public USceneComponent
{
public:
	struct FString                                     BankName;                                                 // 0x02C0(0x000C) (Edit, ZeroConstructor)
	struct FString                                     EventName;                                                // 0x02CC(0x000C) (Edit, ZeroConstructor)
	EFrequencyRange                                    RangeType;                                                // 0x02D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02D9(0x0003) MISSED OFFSET
	int                                                BinNumber;                                                // 0x02DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x100C];                                    // 0x02E0(0x100C) MISSED OFFSET
	bool                                               UseOfflineData;                                           // 0x12EC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x12ED(0x0003) MISSED OFFSET
	TArray<struct FAudioOfflineVisualBeatData>         OfflineData;                                              // 0x12F0(0x000C) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData03[0x24];                                      // 0x12FC(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkAudioVisualComponent");
		return pStaticClass;
	}


	void StartOfflineTime();
	void ResetOfflineTime();
	void OnTickVisualInfo(TArray<float> VisualInfo);
	void OnTickOfflineVisualInfo(const struct FAudioOfflineVisualBeatData& VisualInfo);
	void InitOfflineDataWithBeatTime(TArray<float> Datas);
	void InitOfflineData(TArray<struct FAudioOfflineVisualBeatData> Datas);
	bool GetCurrentBeat(struct FAudioOfflineVisualBeatData* Result);
};


// Class AkAudio.AkAuxBus
// 0x000C (0x0028 - 0x001C)
class UAkAuxBus : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkAuxBus");
		return pStaticClass;
	}

};


// Class AkAudio.AkComponent
// 0x0200 (0x04C0 - 0x02C0)
class UAkComponent : public USceneComponent
{
public:
	class UAkAuxBus*                                   EarlyReflectionAuxBus;                                    // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     EarlyReflectionAuxBusName;                                // 0x02C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                EarlyReflectionOrder;                                     // 0x02D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EarlyReflectionBusSendGain;                               // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EarlyReflectionMaxPathLength;                             // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02DC(0x0004) MISSED OFFSET
	unsigned char                                      EnableSpotReflectors : 1;                                 // 0x02E0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      DrawFirstOrderReflections : 1;                            // 0x02E0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      DrawSecondOrderReflections : 1;                           // 0x02E0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      DrawHigherOrderReflections : 1;                           // 0x02E0(0x0001) (Edit, BlueprintVisible)
	bool                                               StopWhenOwnerDestroyed;                                   // 0x02E1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsUpdateEmmiterTransform : 1;                            // 0x02E2(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAllIsInstanceSound : 1;                                  // 0x02E2(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x1];                                       // 0x02E3(0x0001) MISSED OFFSET
	float                                              AttenuationScalingFactor;                                 // 0x02E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              OcclusionRefreshInterval;                                 // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               AkAudioEvent;                                             // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventName;                                                // 0x02F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData02[0x1C4];                                     // 0x02FC(0x01C4) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkComponent");
		return pStaticClass;
	}


	void UseReverbVolumes(bool inUseReverbVolumes);
	void UseEarlyReflections(class UAkAuxBus* AuxBus, bool Left, bool Right, bool floor, bool Ceiling, bool Back, bool Front, bool SpotReflectors, const struct FString& AuxBusName);
	void StopPlayingID(int StopEventID);
	void Stop();
	int SetSwitch(const struct FString& SwitchGroup, const struct FString& SwitchState);
	void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed);
	void SetRTPCValueGlobally(const struct FString& RTPC, float Value);
	void SetRTPCValue(const struct FString& RTPC, float Value, int InterpolationTimeMs);
	void SetOutputBusVolume(float BusVolume);
	void SetListeners(TArray<class UAkComponent*> Listeners);
	void SetEarlyReflectionOrder(int NewEarlyReflectionOrder);
	void SetAutoDestroy(bool in_AutoDestroy);
	void SetAttenuationScalingFactor(float Value);
	int SeekOnEvent(const struct FString& in_EventName, int in_iPosition);
	void PostTrigger(const struct FString& Trigger);
	int PostAssociatedAkEvent();
	int PostAkEventByName(const struct FString& in_EventName);
	int PostAkEvent(class UAkAudioEvent* AkEvent, const struct FString& in_EventName);
	float GetAttenuationRadius();
	void GetAkGameObjectName(struct FString* Name);
};


// Class AkAudio.AkGameplayStatics
// 0x0000 (0x0020 - 0x0020)
class UAkGameplayStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkGameplayStatics");
		return pStaticClass;
	}


	static void WakeupFromSuspend();
	static void UseReverbVolumes(bool inUseReverbVolumes, class AActor* Actor);
	static void UseEarlyReflections(class AActor* Actor, class UAkAuxBus* AuxBus, bool Left, bool Right, bool floor, bool Ceiling, bool Back, bool Front, bool SpotReflectors, const struct FString& AuxBusName);
	static void UnloadBankByName(const struct FString& BankName);
	static void UnloadBank(class UAkAudioBank* Bank, const struct FString& BankName);
	static void Suspend();
	static void StopProfilerCapture();
	static void StopPlayingID(int PlayingID);
	static void StopOutputCapture();
	static void StopAllAmbientSounds(class UObject* WorldContextObject);
	static void StopAll();
	static void StopAkEventByID(int ID);
	static void StopActor(class AActor* Actor);
	static void StartProfilerCapture(const struct FString& Filename);
	static void StartOutputCapture(const struct FString& Filename);
	static void StartAllAmbientSounds(class UObject* WorldContextObject);
	static class UAkComponent* SpawnAkComponentAtLocation(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, class UAkAuxBus* EarlyReflectionsBus, const struct FVector& Location, const struct FRotator& Orientation, bool AutoPost, const struct FString& EventName, const struct FString& EarlyReflectionsBusName, bool AutoDestroy);
	static void ShowAKComponentPosition(bool _IsShow);
	static bool ShouldPostEvent(class UObject* WorldContext, const struct FVector& VoicePosition);
	static void SetSwitchWithDummyActor(const struct FName& SwitchGroup, const struct FName& SwitchState);
	static void SetSwitch(const struct FName& SwitchGroup, const struct FName& SwitchState, class AActor* Actor);
	static int SetState(const struct FName& StateGroup, const struct FName& State);
	static void SetRTPCValue(const struct FName& RTPC, float Value, int InterpolationTimeMs, class AActor* Actor);
	static void SetPanningRule(EPanningRule PanRule);
	static void SetOutputBusVolume(float BusVolume, class AActor* Actor);
	static void SetOcclusionScalingFactor(float ScalingFactor);
	static void SetOcclusionRefreshInterval(float RefreshInterval, class AActor* Actor);
	static void SetMultiplePositions(TArray<struct FTransform> InTransforms, class UAkComponent* AkComponent);
	static void SetBusConfig(const struct FString& BusName, EAkChannelConfiguration ChannelConfiguration);
	static int SeekOnEvent(class UAkAudioEvent* in_pAkEvent, class AActor* in_pActor, int in_iPosition, const struct FString& EventName, bool in_bSeekToNearestMarker);
	static void RefreshModDirectories();
	static void PostTrigger(const struct FName& Trigger, class AActor* Actor);
	static int PostEventWithVolume(class UAkAudioEvent* AkEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, const struct FString& EventName, float Volume);
	static int PostEventWithDummyActor(class UAkAudioEvent* AkEvent, const struct FString& EventName, class UObject* WorldContextObject);
	static void PostEventByName(const struct FString& EventName, class AActor* Actor, bool bStopWhenAttachedToDestroyed);
	static int PostEventAttached(class UAkAudioEvent* AkEvent, class AActor* Actor, const struct FName& AttachPointName, bool bStopWhenAttachedToDestroyed, const struct FString& EventName);
	static int PostEventAtLocationWithVolume(class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, const struct FString& EventName, class UObject* WorldContextObject, float Volume);
	static void PostEventAtLocationByName(const struct FString& EventName, const struct FVector& Location, const struct FRotator& Orientation, class UObject* WorldContextObject);
	static int PostEventAtLocation(class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, const struct FString& EventName, class UObject* WorldContextObject);
	static int PostEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, const struct FString& EventName);
	static void LoadInitBank();
	static void LoadBanks(TArray<class UAkAudioBank*> SoundBanks, bool SynchronizeSoundBanks);
	static void LoadBankByName(const struct FString& BankName);
	static void LoadBank(class UAkAudioBank* Bank, const struct FString& BankName);
	static bool IsGame(class UObject* WorldContextObject);
	static bool IsEditor();
	static int GetSourcePlayPosition(int AkEvent);
	static float GetOcclusionScalingFactor();
	static class UAkComponent* GetAkComponent(class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, TEnumAsByte<EAttachLocation> LocationType);
	static void ClearBanks();
	static void AKSetRTPCValue(const struct FString& RTPC, float Value, bool in_bBypassInternalValueInterpolation);
	static void AddOutputCaptureMarker(const struct FString& MarkerText);
	static void AddModDirectory(const struct FString& Path);
};


// Class AkAudio.AkLateReverbComponent
// 0x0030 (0x02F0 - 0x02C0)
class UAkLateReverbComponent : public USceneComponent
{
public:
	class UAkAuxBus*                                   AuxBus;                                                   // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     AuxBusName;                                               // 0x02C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              SendLevel;                                                // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeRate;                                                 // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Priority;                                                 // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x02DC(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkLateReverbComponent");
		return pStaticClass;
	}

};


// Class AkAudio.AkReverbVolume
// 0x0028 (0x0360 - 0x0338)
class AAkReverbVolume : public AVolume
{
public:
	unsigned char                                      bEnabled : 1;                                             // 0x0338(0x0001) (Deprecated)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0339(0x0003) MISSED OFFSET
	class UAkAuxBus*                                   AuxBus;                                                   // 0x033C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FString                                     AuxBusName;                                               // 0x0340(0x000C) (ZeroConstructor, Deprecated)
	float                                              SendLevel;                                                // 0x034C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              FadeRate;                                                 // 0x0350(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              Priority;                                                 // 0x0354(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UAkLateReverbComponent*                      LateReverbComponent;                                      // 0x0358(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x035C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkReverbVolume");
		return pStaticClass;
	}

};


// Class AkAudio.AkRoomComponent
// 0x0010 (0x02D0 - 0x02C0)
class UAkRoomComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x02C0(0x0004) MISSED OFFSET
	float                                              Priority;                                                 // 0x02C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x02C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkRoomComponent");
		return pStaticClass;
	}


	void RemoveSpatialAudioRoom();
	void AddSpatialAudioRoom();
};


// Class AkAudio.AkSettings
// 0x0054 (0x0070 - 0x001C)
class UAkSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FFilePath                                   WwiseProjectPath;                                         // 0x0020(0x000C) (Edit, Config)
	struct FDirectoryPath                              WwiseWindowsInstallationPath;                             // 0x002C(0x000C) (Edit, Config)
	struct FFilePath                                   WwiseMacInstallationPath;                                 // 0x0038(0x000C) (Edit, Config)
	bool                                               SuppressWwiseProjectPathWarnings;                         // 0x0044(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               UseAlternateObstructionOcclusionFeature;                  // 0x0045(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2A];                                      // 0x0046(0x002A) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkSettings");
		return pStaticClass;
	}

};


// Class AkAudio.AkSpatialAudioVolume
// 0x0010 (0x0348 - 0x0338)
class AAkSpatialAudioVolume : public AVolume
{
public:
	class UAkSurfaceReflectorSetComponent*             SurfaceReflectorSet;                                      // 0x0338(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAkLateReverbComponent*                      LateReverb;                                               // 0x033C(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAkRoomComponent*                            room;                                                     // 0x0340(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0344(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkSpatialAudioVolume");
		return pStaticClass;
	}

};


// Class AkAudio.AkSpotReflector
// 0x0020 (0x0330 - 0x0310)
class AAkSpotReflector : public AActor
{
public:
	class UAkAuxBus*                                   AuxBus;                                                   // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     AuxBusName;                                               // 0x0314(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class UAkAcousticTexture*                          AcousticTexture;                                          // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceScalingFactor;                                    // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Level;                                                    // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x032C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkSpotReflector");
		return pStaticClass;
	}

};


// Class AkAudio.AkSurfaceReflectorSetComponent
// 0x0020 (0x02E0 - 0x02C0)
class UAkSurfaceReflectorSetComponent : public USceneComponent
{
public:
	TArray<struct FAkPoly>                             AcousticPolys;                                            // 0x02C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x14];                                      // 0x02CC(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkSurfaceReflectorSetComponent");
		return pStaticClass;
	}


	void UpdateSurfaceReflectorSet();
	void SendSurfaceReflectorSet();
	void RemoveSurfaceReflectorSet();
};


// Class AkAudio.AudioOfflineDataRecorder
// 0x1060 (0x1320 - 0x02C0)
class UAudioOfflineDataRecorder : public USceneComponent
{
public:
	struct FString                                     BankName;                                                 // 0x02C0(0x000C) (Edit, ZeroConstructor)
	struct FString                                     EventName;                                                // 0x02CC(0x000C) (Edit, ZeroConstructor)
	EFrequencyRange                                    RangeType;                                                // 0x02D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02D9(0x0003) MISSED OFFSET
	int                                                BinNumber;                                                // 0x02DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      BeatTimeArray;                                            // 0x02E0(0x000C) (Edit, ZeroConstructor)
	TArray<struct FAudioOfflineVisualBeatData>         Result;                                                   // 0x02EC(0x000C) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x1028];                                    // 0x02F8(0x1028) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AudioOfflineDataRecorder");
		return pStaticClass;
	}

};


// Class AkAudio.AudioOfflineVisual
// 0x001C (0x0038 - 0x001C)
class UAudioOfflineVisual : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x001C(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AudioOfflineVisual");
		return pStaticClass;
	}


	void StartBeatOffset(float Offset);
	void StartBeat();
	void ResetBeatTime();
	void InitWithBeatTime(TArray<float> Datas);
	void Init(TArray<struct FAudioOfflineVisualBeatData> Datas);
	bool GetCurrentBeatByCustomTime(float InBeatSecondTime, struct FAudioOfflineVisualBeatData* Result);
	bool GetCurrentBeat(struct FAudioOfflineVisualBeatData* Result);
};


// Class AkAudio.AudioVisual
// 0x1004 (0x1020 - 0x001C)
class UAudioVisual : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1004];                                    // 0x001C(0x1004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AudioVisual");
		return pStaticClass;
	}


	bool TryInit();
	void Reset();
	bool IsInited();
	float GetRMS();
	float GetInstantEnergy();
	float GetFrequencyVol(EFrequencyRange freqRange);
	int GetFrequencyDataWithBin(EFrequencyRange freqRange, int nBin, bool bAbsolute, TArray<float>* pFreqData);
	int GetFrequencyData(EFrequencyRange freqRange, TArray<float>* pFreqData);
	int GetAudioSamplesWithBin(int nBin, bool bAbsolute, TArray<float>* pAudioData);
	int GetAudioSamples(TArray<float>* pAudioData);
};


// Class AkAudio.AudioVisualBlueprintLibrary
// 0x0000 (0x0020 - 0x0020)
class UAudioVisualBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AudioVisualBlueprintLibrary");
		return pStaticClass;
	}


	static class UAudioVisual* GetAudioVisual(class UObject* Outer);
	static class UAudioOfflineVisual* GetAudioOfflineVisual(class UObject* Outer);
};


// Class AkAudio.InterpTrackAkAudioEvent
// 0x0010 (0x0070 - 0x0060)
class UInterpTrackAkAudioEvent : public UInterpTrackVectorBase
{
public:
	TArray<struct FAkAudioEventTrackKey>               Events;                                                   // 0x0060(0x000C) (ZeroConstructor)
	unsigned char                                      bContinueEventOnMatineeEnd : 1;                           // 0x006C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x006D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.InterpTrackAkAudioEvent");
		return pStaticClass;
	}

};


// Class AkAudio.InterpTrackAkAudioRTPC
// 0x0010 (0x0070 - 0x0060)
class UInterpTrackAkAudioRTPC : public UInterpTrackFloatBase
{
public:
	struct FString                                     Param;                                                    // 0x0060(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      bPlayOnReverse : 1;                                       // 0x006C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bContinueRTPCOnMatineeEnd : 1;                            // 0x006C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x006D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.InterpTrackAkAudioRTPC");
		return pStaticClass;
	}

};


// Class AkAudio.InterpTrackInstAkAudioEvent
// 0x0000 (0x0020 - 0x0020)
class UInterpTrackInstAkAudioEvent : public UInterpTrackInst
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.InterpTrackInstAkAudioEvent");
		return pStaticClass;
	}

};


// Class AkAudio.InterpTrackInstAkAudioRTPC
// 0x0000 (0x0020 - 0x0020)
class UInterpTrackInstAkAudioRTPC : public UInterpTrackInst
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.InterpTrackInstAkAudioRTPC");
		return pStaticClass;
	}

};


// Class AkAudio.MovieSceneAkAudioEventSection
// 0x0010 (0x00A0 - 0x0090)
class UMovieSceneAkAudioEventSection : public UMovieSceneSection
{
public:
	bool                                               StopAtSectionEnd;                                         // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	struct FString                                     EventName;                                                // 0x0094(0x000C) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.MovieSceneAkAudioEventSection");
		return pStaticClass;
	}

};


// Class AkAudio.MovieSceneAkTrack
// 0x0010 (0x0058 - 0x0048)
class UMovieSceneAkTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0048(0x000C) (ExportObject, ZeroConstructor)
	unsigned char                                      bIsAMasterTrack : 1;                                      // 0x0054(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0055(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.MovieSceneAkTrack");
		return pStaticClass;
	}

};


// Class AkAudio.MovieSceneAkAudioEventTrack
// 0x0000 (0x0058 - 0x0058)
class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.MovieSceneAkAudioEventTrack");
		return pStaticClass;
	}

};


// Class AkAudio.MovieSceneAkAudioRTPCSection
// 0x0060 (0x00F0 - 0x0090)
class UMovieSceneAkAudioRTPCSection : public UMovieSceneSection
{
public:
	struct FString                                     Name;                                                     // 0x0090(0x000C) (Edit, ZeroConstructor)
	struct FRichCurve                                  FloatCurve;                                               // 0x009C(0x0054)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.MovieSceneAkAudioRTPCSection");
		return pStaticClass;
	}

};


// Class AkAudio.MovieSceneAkAudioRTPCTrack
// 0x0000 (0x0058 - 0x0058)
class UMovieSceneAkAudioRTPCTrack : public UMovieSceneAkTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.MovieSceneAkAudioRTPCTrack");
		return pStaticClass;
	}

};


}

