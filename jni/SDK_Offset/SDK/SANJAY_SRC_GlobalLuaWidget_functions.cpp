// Pubg Mobile Beta (3.0) SDK by Telegram @Sanjay_Src

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GlobalLuaWidget.GlobalLuaWidget_C.GetNewLevelTaskData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 TaskId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           hAS                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FBP_STRUCT_NewLevelTask_type BP_STRUCT_NewLevelTask_type    (Parm, OutParm)

void UGlobalLuaWidget_C::GetNewLevelTaskData(const struct FString& TaskId, bool* hAS, struct FBP_STRUCT_NewLevelTask_type* BP_STRUCT_NewLevelTask_type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalLuaWidget.GlobalLuaWidget_C.GetNewLevelTaskData");

	UGlobalLuaWidget_C_GetNewLevelTaskData_Params params;
	params.TaskId = TaskId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (hAS != nullptr)
		*hAS = params.hAS;
	if (BP_STRUCT_NewLevelTask_type != nullptr)
		*BP_STRUCT_NewLevelTask_type = params.BP_STRUCT_NewLevelTask_type;
}


}

