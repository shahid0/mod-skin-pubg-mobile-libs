#pragma once

// Pubg Mobile Beta (3.0) SDK by Telegram @Sanjay_Src

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class LightningComponent.LightningActor
// 0x0008 (0x0318 - 0x0310)
class ALightningActor : public AActor
{
public:
	class ULightningComponent*                         LightningComponent;                                       // 0x0310(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0314(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class LightningComponent.LightningActor");
		return pStaticClass;
	}

};


// Class LightningComponent.LightningComponent
// 0x00B0 (0x0750 - 0x06A0)
class ULightningComponent : public UMeshComponent
{
public:
	float                                              WidthDecay;                                               // 0x06A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BrightnessDecay;                                          // 0x06A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShrinkWidth;                                             // 0x06A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x06A9(0x0003) MISSED OFFSET
	int                                                AtlasNum;                                                 // 0x06AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SeedStart;                                                // 0x06B0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     SeedEnd;                                                  // 0x06BC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ZigZagFraction;                                           // 0x06C8(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ZigZagDeviationRight;                                     // 0x06D0(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ZigZagDeviationUp;                                        // 0x06D8(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ZigZagDeviationDecay;                                     // 0x06E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ForkFraction;                                             // 0x06E4(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ForkZigZagDeviationRight;                                 // 0x06EC(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ForkZigZagDeviationUp;                                    // 0x06F4(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ForkZigZagDeviationDecay;                                 // 0x06FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ForkDeviationRight;                                       // 0x0700(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ForkDeviationUp;                                          // 0x0708(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ForkDeviationForward;                                     // 0x0710(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ForkDeviationDecay;                                       // 0x0718(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ForkLength;                                               // 0x071C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ForkLengthDecay;                                          // 0x0724(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0728(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class LightningComponent.LightningComponent");
		return pStaticClass;
	}


	void SetWidthDecay(float InDecay);
	void SetShrinkWidth(bool InBool);
	void SetPatternMask(int InPatternMask);
	void SetMaxFractalTime(int InMaxFractalTime);
	void SetLightningWidth(float InWidth);
	void SetBrightnessDecay(float InDecay);
	void SetAtlasNum(int InVal);
	void RefreshLightningMesh();
	bool IsShrinkWidth();
	float GetWidthDecay();
	int GetPatternMask();
	int GetMaxFractalTime();
	float GetLightningWidth();
	float GetBrightnessDecay();
	float GetAtlasNum();
};


}

