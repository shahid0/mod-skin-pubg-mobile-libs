// Pubg Mobile Beta (3.0) SDK by Telegram @Sanjay_Src

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function JsEnv.DynamicDelegateProxy.Fire
// (Final, Native, Public, BlueprintCallable)

void UDynamicDelegateProxy::Fire()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function JsEnv.DynamicDelegateProxy.Fire");

	UDynamicDelegateProxy_Fire_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

