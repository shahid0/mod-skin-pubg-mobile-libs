#pragma once

// Pubg Mobile Beta (3.0) SDK by Telegram @Sanjay_Src

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ninja.BattleFieldCircle.StartMove
struct ABattleFieldCircle_StartMove_Params
{
	struct FVector                                     StartCircle;                                              // (Parm, IsPlainOldData)
	struct FVector                                     EndCircle;                                                // (Parm, IsPlainOldData)
	float                                              MoveTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ninja.BattleFieldCircle.SetCircle
struct ABattleFieldCircle_SetCircle_Params
{
	struct FVector                                     circle;                                                   // (Parm, IsPlainOldData)
};

// Function Ninja.BattleFieldCircle.OnRep_CircleMoveInfo
struct ABattleFieldCircle_OnRep_CircleMoveInfo_Params
{
};

// Function Ninja.BattleFieldCircle.IsInBlueCircle
struct ABattleFieldCircle_IsInBlueCircle_Params
{
	class AActor*                                      uActor;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Ninja.BattleFieldCircle.InitCircle
struct ABattleFieldCircle_InitCircle_Params
{
	struct FVector                                     InitCircle;                                               // (Parm, IsPlainOldData)
};

// Function Ninja.BattleFieldCircle.GetAllPlayerInCircle
struct ABattleFieldCircle_GetAllPlayerInCircle_Params
{
	TArray<uint32_t>                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Ninja.BattleFieldCircle.CircleMove
struct ABattleFieldCircle_CircleMove_Params
{
};

// Function Ninja.BattleFieldCircle.CheckInCircle
struct ABattleFieldCircle_CheckInCircle_Params
{
};

}

