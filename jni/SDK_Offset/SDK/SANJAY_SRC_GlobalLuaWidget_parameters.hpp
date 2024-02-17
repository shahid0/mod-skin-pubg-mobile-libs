#pragma once

// Pubg Mobile Beta (3.0) SDK by Telegram @Sanjay_Src

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GlobalLuaWidget.GlobalLuaWidget_C.GetNewLevelTaskData
struct UGlobalLuaWidget_C_GetNewLevelTaskData_Params
{
	struct FString                                     TaskId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               hAS;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_NewLevelTask_type                BP_STRUCT_NewLevelTask_type;                              // (Parm, OutParm)
};

}

