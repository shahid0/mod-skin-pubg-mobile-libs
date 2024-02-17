#pragma once

// Pubg Mobile Beta (3.0) SDK by Telegram @Sanjay_Src

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SpinePlugin.SpineAtlasAsset
// 0x0024 (0x0040 - 0x001C)
class USpineAtlasAsset : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x001C(0x0010) MISSED OFFSET
	struct FString                                     rawData;                                                  // 0x002C(0x000C) (ZeroConstructor)
	struct FName                                       atlasFileName;                                            // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpinePlugin.SpineAtlasAsset");
		return pStaticClass;
	}

};


// Class SpinePlugin.SpineBoneDriverComponent
// 0x0020 (0x02E0 - 0x02C0)
class USpineBoneDriverComponent : public USceneComponent
{
public:
	class AActor*                                      Target;                                                   // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BoneName;                                                 // 0x02C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               UseComponentTransform;                                    // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UsePosition;                                              // 0x02D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseRotation;                                              // 0x02D2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseScale;                                                 // 0x02D3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x02D4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpinePlugin.SpineBoneDriverComponent");
		return pStaticClass;
	}


	void BeforeUpdateWorldTransform(class USpineSkeletonComponent* Skeleton);
};


// Class SpinePlugin.SpineBoneFollowerComponent
// 0x0020 (0x02E0 - 0x02C0)
class USpineBoneFollowerComponent : public USceneComponent
{
public:
	class AActor*                                      Target;                                                   // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BoneName;                                                 // 0x02C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               UseComponentTransform;                                    // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UsePosition;                                              // 0x02D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseRotation;                                              // 0x02D2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseScale;                                                 // 0x02D3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x02D4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpinePlugin.SpineBoneFollowerComponent");
		return pStaticClass;
	}

};


// Class SpinePlugin.TrackEntry
// 0x004C (0x0068 - 0x001C)
class UTrackEntry : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	struct FScriptMulticastDelegate                    AnimationInterrupt;                                       // 0x0028(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AnimationEvent;                                           // 0x0034(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AnimationComplete;                                        // 0x0040(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    animationEnd;                                             // 0x004C(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AnimationDispose;                                         // 0x0058(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpinePlugin.TrackEntry");
		return pStaticClass;
	}


	void SetTrackTime(float trackTime);
	void SetTrackEnd(float trackEnd);
	void SetTimeScale(float TimeScale);
	void SetMixTime(float mixTime);
	void SetMixDuration(float mixDuration);
	void SetLoop(bool Loop);
	void SetEventThreshold(float eventThreshold);
	void SetDrawOrderThreshold(float drawOrderThreshold);
	void SetDelay(float Delay);
	void SetAttachmentThreshold(float attachmentThreshold);
	void SetAnimationStart(float animationStart);
	void SetAnimationLast(float animationLast);
	void SetAnimationEnd(float animationEnd);
	void SetAlpha(float Alpha);
	bool isValidAnimation();
	float GetTrackTime();
	int GetTrackIndex();
	float GetTrackEnd();
	float GetTimeScale();
	float GetMixTime();
	float GetMixDuration();
	bool GetLoop();
	float GetEventThreshold();
	float GetDrawOrderThreshold();
	float GetDelay();
	float GetAttachmentThreshold();
	float GetAnimationStart();
	struct FString getAnimationName();
	float GetAnimationLast();
	float GetAnimationEnd();
	float getAnimationDuration();
	float GetAlpha();
};


// Class SpinePlugin.SpineSkeletonComponent
// 0x0030 (0x00F8 - 0x00C8)
class USpineSkeletonComponent : public UActorComponent
{
public:
	class USpineSkeletonDataAsset*                     SkeletonData;                                             // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    BeforeUpdateWorldTransform;                               // 0x00CC(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AfterUpdateWorldTransform;                                // 0x00D8(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x14];                                      // 0x00E4(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpinePlugin.SpineSkeletonComponent");
		return pStaticClass;
	}


	void UpdateWorldTransform();
	void SetToSetupPose();
	void SetSlotsToSetupPose();
	void SetSlotColor(const struct FString& SlotName, const struct FColor& Color);
	bool SetSkins(TArray<struct FString>* SkinNames);
	bool SetSkin(const struct FString& SkinName);
	void SetScaleY(float ScaleY);
	void SetScaleX(float ScaleX);
	void SetBoneWorldPosition(const struct FString& BoneName, const struct FVector& Position);
	void SetBonesToSetupPose();
	bool SetAttachment(const struct FString& SlotName, const struct FString& AttachmentName);
	bool HasSlot(const struct FString& SlotName);
	bool HasSkin(const struct FString& SkinName);
	bool HasBone(const struct FString& BoneName);
	bool HasAnimation(const struct FString& AnimationName);
	void GetSlots(TArray<struct FString>* Slots);
	void GetSkins(TArray<struct FString>* Skins);
	float GetScaleY();
	float GetScaleX();
	struct FTransform GetBoneWorldTransform(const struct FString& BoneName);
	void GetBones(TArray<struct FString>* Bones);
	void GetAnimations(TArray<struct FString>* Animations);
	float getAnimationDuration(const struct FString& AnimationName);
};


// Class SpinePlugin.SpineSkeletonAnimationComponent
// 0x00C0 (0x01B8 - 0x00F8)
class USpineSkeletonAnimationComponent : public USpineSkeletonComponent
{
public:
	struct FScriptMulticastDelegate                    animationStart;                                           // 0x00F8(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AnimationInterrupt;                                       // 0x0104(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AnimationEvent;                                           // 0x0110(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AnimationComplete;                                        // 0x011C(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    animationEnd;                                             // 0x0128(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AnimationDispose;                                         // 0x0134(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FString                                     PreviewAnimation;                                         // 0x0140(0x000C) (Edit, ZeroConstructor)
	struct FString                                     PreviewSkin;                                              // 0x014C(0x000C) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0158(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData01[0x3C];                                      // 0x0158(0x003C) UNKNOWN PROPERTY: SetProperty SpinePlugin.SpineSkeletonAnimationComponent.trackEntries
	bool                                               bAutoPlaying;                                             // 0x0198(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1F];                                      // 0x0199(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpinePlugin.SpineSkeletonAnimationComponent");
		return pStaticClass;
	}


	void SetTimeScale(float TimeScale);
	void SetPlaybackTime(float InPlaybackTime, bool bCallDelegates);
	class UTrackEntry* SetEmptyAnimation(int TrackIndex, float mixDuration);
	void SetAutoPlay(bool bInAutoPlays);
	class UTrackEntry* SetAnimation(int TrackIndex, const struct FString& AnimationName, bool Loop);
	float GetTimeScale();
	class UTrackEntry* GetCurrent(int TrackIndex);
	void ClearTracks();
	void ClearTrack(int TrackIndex);
	class UTrackEntry* AddEmptyAnimation(int TrackIndex, float mixDuration, float Delay);
	class UTrackEntry* AddAnimation(int TrackIndex, const struct FString& AnimationName, bool Loop, float Delay);
};


// Class SpinePlugin.SpineSkeletonDataAsset
// 0x00A4 (0x00C0 - 0x001C)
class USpineSkeletonDataAsset : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<struct FSpineAnimationStateMixData>         MixData;                                                  // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             Bones;                                                    // 0x002C(0x000C) (Edit, ZeroConstructor, Transient, EditConst)
	TArray<struct FString>                             Slots;                                                    // 0x0038(0x000C) (Edit, ZeroConstructor, Transient, EditConst)
	TArray<struct FString>                             Skins;                                                    // 0x0044(0x000C) (Edit, ZeroConstructor, Transient, EditConst)
	TArray<struct FString>                             Animations;                                               // 0x0050(0x000C) (Edit, ZeroConstructor, Transient, EditConst)
	TArray<struct FString>                             Events;                                                   // 0x005C(0x000C) (Edit, ZeroConstructor, Transient, EditConst)
	TArray<unsigned char>                              rawData;                                                  // 0x0068(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	struct FName                                       skeletonDataFileName;                                     // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x40];                                      // 0x0080(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpinePlugin.SpineSkeletonDataAsset");
		return pStaticClass;
	}

};


// Class SpinePlugin.SpineSkeletonRendererComponent
// 0x0250 (0x0930 - 0x06E0)
class USpineSkeletonRendererComponent : public UProceduralMeshComponent
{
public:
	class UMaterialInterface*                          NormalBlendMaterial;                                      // 0x06E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          AdditiveBlendMaterial;                                    // 0x06E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          MultiplyBlendMaterial;                                    // 0x06E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ScreenBlendMaterial;                                      // 0x06EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            atlasNormalBlendMaterials;                                // 0x06F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x06FC(0x003C) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            atlasAdditiveBlendMaterials;                              // 0x0738(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x3C];                                      // 0x0744(0x003C) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            atlasMultiplyBlendMaterials;                              // 0x0780(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData02[0x3C];                                      // 0x078C(0x003C) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            atlasScreenBlendMaterials;                                // 0x07C8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData03[0x3C];                                      // 0x07D4(0x003C) MISSED OFFSET
	float                                              DepthOffset;                                              // 0x0810(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0814(0x0004) MISSED OFFSET
	struct FName                                       TextureParameterName;                                     // 0x0818(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0820(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bCreateCollision;                                         // 0x0830(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0xFF];                                      // 0x0831(0x00FF) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpinePlugin.SpineSkeletonRendererComponent");
		return pStaticClass;
	}

};


// Class SpinePlugin.SpineWidget
// 0x0470 (0x0540 - 0x00D0)
class USpineWidget : public UWidget
{
public:
	float                                              Scale;                                                    // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     InitialSkin;                                              // 0x00D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USpineAtlasAsset*                            Atlas;                                                    // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpineSkeletonDataAsset*                     SkeletonData;                                             // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          NormalBlendMaterial;                                      // 0x00E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          AdditiveBlendMaterial;                                    // 0x00EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          MultiplyBlendMaterial;                                    // 0x00F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ScreenBlendMaterial;                                      // 0x00F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, class UMaterialInterface*>      CustomMaterials;                                          // 0x00F8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<struct FName, struct FName>                   Sockets;                                                  // 0x0134(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0170(0x0040) MISSED OFFSET
	struct FName                                       TextureParameterName;                                     // 0x01B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOffset;                                              // 0x01B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x01BC(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01CC(0x0004) MISSED OFFSET
	struct FSlateBrush                                 Brush;                                                    // 0x01D0(0x0098) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptMulticastDelegate                    BeforeUpdateWorldTransform;                               // 0x0268(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AfterUpdateWorldTransform;                                // 0x0274(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    animationStart;                                           // 0x0280(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AnimationInterrupt;                                       // 0x028C(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AnimationEvent;                                           // 0x0298(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AnimationComplete;                                        // 0x02A4(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    animationEnd;                                             // 0x02B0(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AnimationDispose;                                         // 0x02BC(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x20];                                      // 0x02C8(0x0020) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            atlasNormalBlendMaterials;                                // 0x02E8(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x3C];                                      // 0x02F4(0x003C) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            atlasAdditiveBlendMaterials;                              // 0x0330(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData04[0x3C];                                      // 0x033C(0x003C) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            atlasMultiplyBlendMaterials;                              // 0x0378(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData05[0x3C];                                      // 0x0384(0x003C) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            atlasScreenBlendMaterials;                                // 0x03C0(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData06[0x134];                                     // 0x03CC(0x0134) MISSED OFFSET
	unsigned char                                      UnknownData07[0x3C];                                      // 0x03CC(0x003C) UNKNOWN PROPERTY: SetProperty SpinePlugin.SpineWidget.trackEntries
	bool                                               bAutoPlaying;                                             // 0x053C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x053D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpinePlugin.SpineWidget");
		return pStaticClass;
	}


	void UpdateWorldTransform();
	void Tick(float DeltaTime, bool CallDelegates);
	void SetToSetupPose();
	void SetTimeScale(float TimeScale);
	void SetSlotsToSetupPose();
	bool SetSkins(TArray<struct FString>* SkinNames);
	bool SetSkin(const struct FString& SkinName);
	void SetScaleY(float ScaleY);
	void SetScaleX(float ScaleX);
	void SetScale(float inScale);
	void SetPlaybackTime(float InPlaybackTime, bool bCallDelegates);
	class UTrackEntry* SetEmptyAnimation(int TrackIndex, float mixDuration);
	void SetColor(const struct FLinearColor& InColor);
	void SetBonesToSetupPose();
	void SetAutoPlay(bool bInAutoPlays);
	bool SetAttachment(const struct FString& SlotName, const struct FString& AttachmentName);
	class UTrackEntry* SetAnimation(int TrackIndex, const struct FString& AnimationName, bool Loop);
	bool HasSlot(const struct FString& SlotName);
	bool HasSkin(const struct FString& SkinName);
	bool HasBone(const struct FString& BoneName);
	bool HasAnimation(const struct FString& AnimationName);
	float GetTimeScale();
	void GetSlots(TArray<struct FString>* Slots);
	void GetSkins(TArray<struct FString>* Skins);
	float GetScaleY();
	float GetScaleX();
	float GetScale();
	class UTrackEntry* GetCurrent(int TrackIndex);
	struct FLinearColor GetColor();
	void GetBones(TArray<struct FString>* Bones);
	void GetAnimations(TArray<struct FString>* Animations);
	float getAnimationDuration(const struct FString& AnimationName);
	void ClearTracks();
	void ClearTrack(int TrackIndex);
	class UTrackEntry* AddEmptyAnimation(int TrackIndex, float mixDuration, float Delay);
	class UTrackEntry* AddAnimation(int TrackIndex, const struct FString& AnimationName, bool Loop, float Delay);
};


}

