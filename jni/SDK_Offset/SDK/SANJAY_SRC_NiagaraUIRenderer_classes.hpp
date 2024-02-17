#pragma once

// Pubg Mobile Beta (3.0) SDK by Telegram @Sanjay_Src

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class NiagaraUIRenderer.NiagaraSystemWidget
// 0x0070 (0x0140 - 0x00D0)
class UNiagaraSystemWidget : public UWidget
{
public:
	class UNiagaraSystem*                              NiagaraSystemReference;                                   // 0x00D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TMap<class UMaterialInterface*, class UMaterialInterface*> MaterialRemapList;                                        // 0x00D4(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FVector2D                                   Offset2D;                                                 // 0x0110(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    Rotation3D;                                               // 0x0118(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               AutoActivate;                                             // 0x0124(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               TickWhenPaused;                                           // 0x0125(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               FakeDepthScale;                                           // 0x0126(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0127(0x0001) MISSED OFFSET
	float                                              FakeDepthScaleDistance;                                   // 0x0128(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsActivated : 1;                                         // 0x012C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0xB];                                       // 0x012D(0x000B) MISSED OFFSET
	class ANiagaraUIActor*                             NiagaraActor;                                             // 0x0138(0x0004) (ZeroConstructor, IsPlainOldData)
	class UNiagaraUIComponent*                         NiagaraComponent;                                         // 0x013C(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class NiagaraUIRenderer.NiagaraSystemWidget");
		return pStaticClass;
	}


	void SetIsActivated(bool bInIsActive);
	class UNiagaraUIComponent* GetNiagaraComponent();
	bool GetIsActivated();
	void DeactivateSystem();
	void ActivateSystem(bool Reset);
};


// Class NiagaraUIRenderer.NiagaraUIActor
// 0x0000 (0x0310 - 0x0310)
class ANiagaraUIActor : public AActor
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class NiagaraUIRenderer.NiagaraUIActor");
		return pStaticClass;
	}

};


// Class NiagaraUIRenderer.NiagaraUIComponent
// 0x0020 (0x0800 - 0x07E0)
class UNiagaraUIComponent : public UNiagaraComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x07E0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class NiagaraUIRenderer.NiagaraUIComponent");
		return pStaticClass;
	}

};


}
