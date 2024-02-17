#pragma once

// Pubg Mobile Beta (3.0) SDK by Telegram @Sanjay_Src

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ZLevel.ZLevelData.ReBindLevelDataComponent
struct AZLevelData_ReBindLevelDataComponent_Params
{
};

// Function ZLevel.ZLevelData.CheckMonsterSpotIsOnLand
struct AZLevelData_CheckMonsterSpotIsOnLand_Params
{
	class UZMonsterSpot*                               MonsterSpot;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UZMonsterSpotGroup*                          SpotGroup;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

