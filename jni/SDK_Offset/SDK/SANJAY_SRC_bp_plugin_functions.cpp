// Pubg Mobile Beta (3.0) SDK by Telegram @Sanjay_Src

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bp_plugin.bp_pluginBPLibrary.bp_pluginSendEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 jsonEventCmd                   (Parm, ZeroConstructor)

void Ubp_pluginBPLibrary::bp_pluginSendEvent(const struct FString& jsonEventCmd)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_plugin.bp_pluginBPLibrary.bp_pluginSendEvent");

	Ubp_pluginBPLibrary_bp_pluginSendEvent_Params params;
	params.jsonEventCmd = jsonEventCmd;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_plugin.bp_pluginBPLibrary.bp_pluginLaunchMeemoFunction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Param                          (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float Ubp_pluginBPLibrary::bp_pluginLaunchMeemoFunction(const struct FString& Param)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_plugin.bp_pluginBPLibrary.bp_pluginLaunchMeemoFunction");

	Ubp_pluginBPLibrary_bp_pluginLaunchMeemoFunction_Params params;
	params.Param = Param;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bp_plugin.bp_pluginBPLibrary.bp_pluginIsInForeground
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Ubp_pluginBPLibrary::bp_pluginIsInForeground()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_plugin.bp_pluginBPLibrary.bp_pluginIsInForeground");

	Ubp_pluginBPLibrary_bp_pluginIsInForeground_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

