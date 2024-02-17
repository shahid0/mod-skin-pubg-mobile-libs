// Pubg Mobile Beta (3.0) SDK by Telegram @Sanjay_Src

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Gamelet.Gamelet.SetScriptExternalLoadDir
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// struct FString                 ExternalLoadDir                (Parm, ZeroConstructor)

void UGamelet::SetScriptExternalLoadDir(const struct FString& ExternalLoadDir)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.SetScriptExternalLoadDir");

	UGamelet_SetScriptExternalLoadDir_Params params;
	params.ExternalLoadDir = ExternalLoadDir;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gamelet.Gamelet.SetFont
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// struct FString                 FontName                       (Parm, ZeroConstructor)
// struct FString                 FontPath                       (Parm, ZeroConstructor)

void UGamelet::SetFont(const struct FString& FontName, const struct FString& FontPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.SetFont");

	UGamelet_SetFont_Params params;
	params.FontName = FontName;
	params.FontPath = FontPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gamelet.Gamelet.SendMessageToApp
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// struct FString                 AppID                          (Parm, ZeroConstructor)
// struct FString                 Msg                            (Parm, ZeroConstructor)

void UGamelet::SendMessageToApp(const struct FString& AppID, const struct FString& Msg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.SendMessageToApp");

	UGamelet_SendMessageToApp_Params params;
	params.AppID = AppID;
	params.Msg = Msg;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gamelet.Gamelet.RefreshUserdata
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<struct FString, struct FString> UserData                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UGamelet::RefreshUserdata(TMap<struct FString, struct FString> UserData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.RefreshUserdata");

	UGamelet_RefreshUserdata_Params params;
	params.UserData = UserData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gamelet.Gamelet.OpenApp
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// struct FString                 AppID                          (Parm, ZeroConstructor)
// struct FString                 OpenArgs                       (Parm, ZeroConstructor)

void UGamelet::OpenApp(const struct FString& AppID, const struct FString& OpenArgs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.OpenApp");

	UGamelet_OpenApp_Params params;
	params.AppID = AppID;
	params.OpenArgs = OpenArgs;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gamelet.Gamelet.Open
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TEnumAsByte<EGameletEnvironment> Environment                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TMap<struct FString, struct FString> UserData                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UGamelet::Open(TEnumAsByte<EGameletEnvironment> Environment, TMap<struct FString, struct FString> UserData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.Open");

	UGamelet_Open_Params params;
	params.Environment = Environment;
	params.UserData = UserData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gamelet.Gamelet.Initialize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGameletSettings*        Settings                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGamelet::Initialize(class UGameletSettings* Settings)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.Initialize");

	UGamelet_Initialize_Params params;
	params.Settings = Settings;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.Gamelet.GetGlobalSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGameletSettings*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameletSettings* UGamelet::GetGlobalSettings()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.GetGlobalSettings");

	UGamelet_GetGlobalSettings_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.Gamelet.Get
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGamelet*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGamelet* UGamelet::Get()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.Get");

	UGamelet_Get_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.Gamelet.ExecOnSDKMessage
// (Final, Native, Private)
// Parameters:
// struct FString                 Msg                            (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGamelet::ExecOnSDKMessage(const struct FString& Msg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.ExecOnSDKMessage");

	UGamelet_ExecOnSDKMessage_Params params;
	params.Msg = Msg;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.Gamelet.ExecOnReportData
// (Final, Native, Private)
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor)
// struct FString                 Data                           (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGamelet::ExecOnReportData(const struct FString& EventName, const struct FString& Data)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.ExecOnReportData");

	UGamelet_ExecOnReportData_Params params;
	params.EventName = EventName;
	params.Data = Data;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.Gamelet.ExecOnRefreshUserdata
// (Final, Native, Private)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGamelet::ExecOnRefreshUserdata()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.ExecOnRefreshUserdata");

	UGamelet_ExecOnRefreshUserdata_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.Gamelet.Deinitialize
// (Final, Native, Public, BlueprintCallable)

void UGamelet::Deinitialize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.Deinitialize");

	UGamelet_Deinitialize_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gamelet.Gamelet.CollectPixUILogOutput
// (Final, Native, Private)
// Parameters:
// EPXLogTypes                    PixUILogType                   (Parm, ZeroConstructor, IsPlainOldData)
// EPXLogLevels                   PixUILogLevel                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 logContent                     (Parm, ZeroConstructor)

void UGamelet::CollectPixUILogOutput(EPXLogTypes PixUILogType, EPXLogLevels PixUILogLevel, const struct FString& logContent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.CollectPixUILogOutput");

	UGamelet_CollectPixUILogOutput_Params params;
	params.PixUILogType = PixUILogType;
	params.PixUILogLevel = PixUILogLevel;
	params.logContent = logContent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gamelet.Gamelet.CloseApp
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// struct FString                 AppID                          (Parm, ZeroConstructor)

void UGamelet::CloseApp(const struct FString& AppID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.CloseApp");

	UGamelet_CloseApp_Params params;
	params.AppID = AppID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gamelet.Gamelet.Close
// (Final, Native, Public, BlueprintCallable)

void UGamelet::Close()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.Close");

	UGamelet_Close_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gamelet.GameletEnvMgr.OnEnvToGameMessage
// (Final, Native, Public)
// Parameters:
// struct FString                 Msg                            (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGameletEnvMgr::OnEnvToGameMessage(const struct FString& Msg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletEnvMgr.OnEnvToGameMessage");

	UGameletEnvMgr_OnEnvToGameMessage_Params params;
	params.Msg = Msg;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletEnvMgr.OnEnvToEntryMessage
// (Final, Native, Public)
// Parameters:
// struct FString                 Msg                            (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGameletEnvMgr::OnEnvToEntryMessage(const struct FString& Msg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletEnvMgr.OnEnvToEntryMessage");

	UGameletEnvMgr_OnEnvToEntryMessage_Params params;
	params.Msg = Msg;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletEnvMgr.OnEnvReportData
// (Final, Native, Public, Const)
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor)
// struct FString                 Data                           (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGameletEnvMgr::OnEnvReportData(const struct FString& EventName, const struct FString& Data)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletEnvMgr.OnEnvReportData");

	UGameletEnvMgr_OnEnvReportData_Params params;
	params.EventName = EventName;
	params.Data = Data;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletEnvMgr.OnEnvRefreshUserdata
// (Final, Native, Public, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGameletEnvMgr::OnEnvRefreshUserdata()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletEnvMgr.OnEnvRefreshUserdata");

	UGameletEnvMgr_OnEnvRefreshUserdata_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletEnvMgr.OnEnvLoaded
// (Final, Native, Public)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor)
// bool                           IsSuccess                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UGameletEnvMgr::OnEnvLoaded(const struct FString& URL, bool IsSuccess)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletEnvMgr.OnEnvLoaded");

	UGameletEnvMgr_OnEnvLoaded_Params params;
	params.URL = URL;
	params.IsSuccess = IsSuccess;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gamelet.GameletSettings.IsValidSetting
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameletSettings::IsValidSetting()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletSettings.IsValidSetting");

	UGameletSettings_IsValidSetting_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletSettings.Get
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameletSettings*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameletSettings* UGameletSettings::Get()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletSettings.Get");

	UGameletSettings_Get_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletWindow.OnPxWidgetScriptStateInit
// (Final, Native, Private)

void UGameletWindow::OnPxWidgetScriptStateInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletWindow.OnPxWidgetScriptStateInit");

	UGameletWindow_OnPxWidgetScriptStateInit_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gamelet.GameletWindow.OnPxWidgetRequestOpen
// (Final, Native, Private, Const)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor)
// struct FString                 Name                           (Parm, ZeroConstructor)
// struct FString                 Features                       (Parm, ZeroConstructor)
// bool                           bReplace                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameletWindow::OnPxWidgetRequestOpen(const struct FString& URL, const struct FString& Name, const struct FString& Features, bool bReplace)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletWindow.OnPxWidgetRequestOpen");

	UGameletWindow_OnPxWidgetRequestOpen_Params params;
	params.URL = URL;
	params.Name = Name;
	params.Features = Features;
	params.bReplace = bReplace;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletWindow.OnPxWidgetMessage
// (Final, Native, Private, Const)
// Parameters:
// struct FString                 Msg                            (Parm, ZeroConstructor)

void UGameletWindow::OnPxWidgetMessage(const struct FString& Msg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletWindow.OnPxWidgetMessage");

	UGameletWindow_OnPxWidgetMessage_Params params;
	params.Msg = Msg;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gamelet.GameletWindow.OnPxWidgetLoaded
// (Final, Native, Private, Const)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor)
// bool                           bSuccess                       (Parm, ZeroConstructor, IsPlainOldData)

void UGameletWindow::OnPxWidgetLoaded(const struct FString& URL, bool bSuccess)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletWindow.OnPxWidgetLoaded");

	UGameletWindow_OnPxWidgetLoaded_Params params;
	params.URL = URL;
	params.bSuccess = bSuccess;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gamelet.GameletWindow.OnPxWidgetClose
// (Final, Native, Private, Const)

void UGameletWindow::OnPxWidgetClose()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletWindow.OnPxWidgetClose");

	UGameletWindow_OnPxWidgetClose_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

