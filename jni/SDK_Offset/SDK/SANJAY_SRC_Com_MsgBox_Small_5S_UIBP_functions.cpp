// Pubg Mobile Beta (3.0) SDK by Telegram @Sanjay_Src

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Com_MsgBox_Small_5S_UIBP.Com_MsgBox_Small_5S_UIBP_C.SetButtonOkState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bInIsEnabled                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCom_MsgBox_Small_5S_UIBP_C::SetButtonOkState(bool bInIsEnabled)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Com_MsgBox_Small_5S_UIBP.Com_MsgBox_Small_5S_UIBP_C.SetButtonOkState");

	UCom_MsgBox_Small_5S_UIBP_C_SetButtonOkState_Params params;
	params.bInIsEnabled = bInIsEnabled;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

