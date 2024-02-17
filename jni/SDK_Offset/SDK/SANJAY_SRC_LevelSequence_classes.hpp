#pragma once

// Pubg Mobile Beta (3.0) SDK by Telegram @Sanjay_Src

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class LevelSequence.LevelSequenceActor
// 0x0078 (0x0388 - 0x0310)
class ALevelSequenceActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0310(0x0004) MISSED OFFSET
	bool                                               bAutoPlay;                                                // 0x0314(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0315(0x0003) MISSED OFFSET
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                         // 0x0318(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	class ULevelSequencePlayer*                        SequencePlayer;                                           // 0x0338(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x033C(0x0004) MISSED OFFSET
	struct FSoftObjectPath                             LevelSequence;                                            // 0x0340(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<class AActor*>                              AdditionalEventReceivers;                                 // 0x0358(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class ULevelSequenceBurnInOptions*                 BurnInOptions;                                            // 0x0364(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMovieSceneBindingOverrides*                 BindingOverrides;                                         // 0x0368(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               bReduceFrequency;                                         // 0x036C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x036D(0x0003) MISSED OFFSET
	int                                                ReduceFrameCount;                                         // 0x0370(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              IgnoreFrameTolerance;                                     // 0x0374(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bOverrideInstanceData : 1;                                // 0x0378(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0379(0x0003) MISSED OFFSET
	class UObject*                                     DefaultInstanceData;                                      // 0x037C(0x0004) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bForceAsync;                                              // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0381(0x0003) MISSED OFFSET
	class ULevelSequenceBurnIn*                        BurnInInstance;                                           // 0x0384(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class LevelSequence.LevelSequenceActor");
		return pStaticClass;
	}


	void SetSequence(class ULevelSequence* InSequence);
	void SetEventReceivers(TArray<class AActor*> AdditionalReceivers);
	void SetBinding(const struct FMovieSceneObjectBindingID& Binding, TArray<class AActor*> Actors, bool bAllowBindingsFromAsset);
	void SetAllMovieSceneSectionsToKeepState();
	void ResetBindings();
	void ResetBinding(const struct FMovieSceneObjectBindingID& Binding);
	void RemoveBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor);
	void ReceiveInitailizePlayer();
	class ULevelSequence* GetSequence(bool bLoad, bool bInitializePlayer);
	struct FMovieSceneObjectBindingID GetPossessableByName(const struct FString& NameKeyString);
	void AddBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor, bool bAllowBindingsFromAsset);
};


// Class LevelSequence.DefaultLevelSequenceInstanceData
// 0x0044 (0x0060 - 0x001C)
class UDefaultLevelSequenceInstanceData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class AActor*                                      TransformOriginActor;                                     // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0024(0x000C) MISSED OFFSET
	struct FTransform                                  TransformOrigin;                                          // 0x0030(0x0030) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class LevelSequence.DefaultLevelSequenceInstanceData");
		return pStaticClass;
	}

};


// Class LevelSequence.LevelSequence
// 0x00B8 (0x02D8 - 0x0220)
class ULevelSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                                 MovieScene;                                               // 0x0220(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FLevelSequenceObjectReferenceMap            ObjectReferences;                                         // 0x0224(0x003C)
	struct FLevelSequenceBindingReferences             BindingReferences;                                        // 0x0260(0x003C)
	TMap<struct FString, struct FLevelSequenceObject>  PossessedObjects;                                         // 0x029C(0x0050) (ZeroConstructor, Deprecated)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class LevelSequence.LevelSequence");
		return pStaticClass;
	}

};


// Class LevelSequence.LevelSequenceBurnInInitSettings
// 0x0004 (0x0020 - 0x001C)
class ULevelSequenceBurnInInitSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class LevelSequence.LevelSequenceBurnInInitSettings");
		return pStaticClass;
	}

};


// Class LevelSequence.LevelSequenceBurnInOptions
// 0x0024 (0x0040 - 0x001C)
class ULevelSequenceBurnInOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FSoftClassPath                              BurnInClass;                                              // 0x0020(0x0018) (Edit)
	class ULevelSequenceBurnInInitSettings*            Settings;                                                 // 0x0038(0x0004) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class LevelSequence.LevelSequenceBurnInOptions");
		return pStaticClass;
	}

};


// Class LevelSequence.LevelSequenceBurnIn
// 0x0030 (0x0238 - 0x0208)
class ULevelSequenceBurnIn : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0208(0x002C) MISSED OFFSET
	class ALevelSequenceActor*                         LevelSequenceActor;                                       // 0x0234(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class LevelSequence.LevelSequenceBurnIn");
		return pStaticClass;
	}


	void SetSettings(class UObject* InSettings);
	class UClass* GetSettingsClass();
};


// Class LevelSequence.LevelSequencePlayer
// 0x0088 (0x06D0 - 0x0648)
class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0648(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTrackEvent;                                             // 0x0650(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x2C];                                      // 0x065C(0x002C) MISSED OFFSET
	TArray<class UObject*>                             AdditionalEventReceivers;                                 // 0x0688(0x000C) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x3C];                                      // 0x0694(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class LevelSequence.LevelSequencePlayer");
		return pStaticClass;
	}


	static class ULevelSequencePlayer* CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ALevelSequenceActor** OutActor);
};


}

