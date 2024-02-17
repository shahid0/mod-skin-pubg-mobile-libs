#pragma once

// Pubg Mobile Beta (3.0) SDK by Telegram @Sanjay_Src

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ModularGameplay.GameFrameworkComponent
// 0x0000 (0x00C8 - 0x00C8)
class UGameFrameworkComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ModularGameplay.GameFrameworkComponent");
		return pStaticClass;
	}

};


// Class ModularGameplay.ControllerComponent
// 0x0000 (0x00C8 - 0x00C8)
class UControllerComponent : public UGameFrameworkComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ModularGameplay.ControllerComponent");
		return pStaticClass;
	}

};


// Class ModularGameplay.GameFrameworkComponentManager
// 0x00B8 (0x00D8 - 0x0020)
class UGameFrameworkComponentManager : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0020(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ModularGameplay.GameFrameworkComponentManager");
		return pStaticClass;
	}


	void RemoveReceiver(class AActor* Receiver);
	void AddReceiver(class AActor* Receiver, bool bAddOnlyInGameWorlds);
};


// Class ModularGameplay.GameStateComponent
// 0x0000 (0x00C8 - 0x00C8)
class UGameStateComponent : public UGameFrameworkComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ModularGameplay.GameStateComponent");
		return pStaticClass;
	}

};


// Class ModularGameplay.PawnComponent
// 0x0000 (0x00C8 - 0x00C8)
class UPawnComponent : public UGameFrameworkComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ModularGameplay.PawnComponent");
		return pStaticClass;
	}

};


// Class ModularGameplay.PlayerStateComponent
// 0x0000 (0x00C8 - 0x00C8)
class UPlayerStateComponent : public UGameFrameworkComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ModularGameplay.PlayerStateComponent");
		return pStaticClass;
	}

};


}

