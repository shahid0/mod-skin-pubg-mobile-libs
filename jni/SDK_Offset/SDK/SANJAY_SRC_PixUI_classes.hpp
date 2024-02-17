#pragma once

// Pubg Mobile Beta (3.0) SDK by Telegram @Sanjay_Src

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PixUI.PixUIBPLibrary
// 0x0000 (0x0020 - 0x0020)
class UPixUIBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PixUIBPLibrary");
		return pStaticClass;
	}


	static struct FString PixUI_Version();
	static bool PixUI_Startup(const struct FString& fstr_CachePathForWrite);
	static bool PixUI_Shutdown();
	static void PixUI_ShowTick(bool b_show);
	static void PixUI_ShowResInfor();
	static void PixUI_ShowMousePos(bool b_show);
	static void PixUI_SetSupportTextShape(bool beSupportTextShape);
	static void PixUI_SetPaintDura(int n_duar_count);
	static void PixUI_SetMobileUseTouchEvent(bool b_used);
	static void PixUI_SetMatRootPath(const struct FString& fstr_root_path);
	static void PixUI_SetMatBasePath(const struct FString& fstr_base_path);
	static void PixUI_SetDynamicFixFontSize(bool b_OpenDynamicFix);
	static void PixUI_SetDrawEffectNoPixelSnapping(bool b_NoPixelSnapping);
	static void PixUI_SetDefaultFontSize(int n_FontSize);
	static void PixUI_SetDefaultFont(const struct FString& fstr_FontName);
	static void PixUI_SetDebugTickDelay(float f_delay);
	static void PixUI_SetDebugRetainDraw(bool b_retain);
	static void PixUI_SetDebugNoCoreTick(bool b_no_tick);
	static void PixUI_SetDebugCPURunTime(int n_time);
	static void PixUI_SetCoreTickDura(int n_duar_count);
	static int PixUI_RHIShaderPlatform();
	static int PixUI_RHIShaderLevel();
	static void PixUI_RemoveSystemFont(const struct FString& fstr_FontName);
	static float PixUI_PlatformOSVersionCode();
	static struct FString PixUI_PlatformOSVersion();
	static int PixUI_PlatformCode();
	static struct FString PixUI_Platform();
	static void PixUI_LogEnable(bool b_Enagble);
	static bool PixUI_IsSupportTextShape();
	static bool PixUI_IsStartUp();
	static bool PixUI_IsShowTick();
	static bool PixUI_IsShowMousePos();
	static bool PixUI_IsRHIShaderVulkan();
	static bool PixUI_IsRHIShaderOpenGLES2();
	static bool PixUI_IsRHIShaderOpenGL();
	static bool PixUI_IsRHIShaderMetal();
	static bool PixUI_IsRHIShaderDX();
	static bool PixUI_IsOsBit64();
	static bool PixUI_IsOsBit32();
	static bool PixUI_IsMobileUseTouchEvent();
	static bool PixUI_IsDynamicFixFontSize();
	static class UObject* PixUI_GetWindowSlotObject(int windowID, const struct FString& strTagId);
	static int PixUI_GetPaintDura();
	static struct FString PixUI_GetMatRootPath();
	static struct FString PixUI_GetMatBasePath();
	static bool PixUI_GetFontPath(const struct FString& fstr_FontName, struct FString* fstr_FontPath);
	static bool PixUI_GetDrawEffectNoPixelSnapping();
	static void PixUI_GetDefaultFontSize(int* n_FontSize);
	static void PixUI_GetDefaultFont(struct FString* fstr_FontName);
	static float PixUI_GetDebugTickDelay();
	static bool PixUI_GetDebugRetainDraw();
	static bool PixUI_GetDebugNoCoreTick();
	static int PixUI_GetDebugCPURunTime();
	static int PixUI_GetCoreTickDura();
	static struct FString PixUI_GetCachePath();
	static class UPixUIWidget* PixUI_FindByWindowID(int windowID);
	static float PixUI_CurrentGameFPS();
	static class UPixUIWidget* PixUI_CreateWidget();
	static class UPixUIViewPortWidget* PixUI_CreateViewPortWidget();
	static class UPixUIViewPortWidget* PixUI_CreateViewPortAddToCanvasEx(class UCanvasPanel* p_ParentCanvas);
	static class UPixUIViewPortWidget* PixUI_CreateViewPortAddToCanvas(class UCanvasPanel* p_ParentCanvas, const struct FAnchors& Anchors, const struct FMargin& Margin);
	static class UPixUIWidget* PixUI_CreateAddToCanvasEx(class UCanvasPanel* p_ParentCanvas);
	static class UPixUIWidget* PixUI_CreateAddToCanvas(class UCanvasPanel* p_ParentCanvas, const struct FAnchors& Anchors, const struct FMargin& Margin);
	static void PixUI_ClearCacheFile();
	static void PixUI_AddSystemFont(const struct FString& fstr_FontName, const struct FString& fstr_FontPath);
};


// Class PixUI.PixUIInput
// 0x0034 (0x0050 - 0x001C)
class UPixUIInput : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FScriptDelegate                             ActivateDelegate;                                         // 0x0020(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             DeativateInput;                                           // 0x0030(0x0010) (Edit, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PixUIInput");
		return pStaticClass;
	}


	static void OnInputText(const struct FString& fstrInsert, bool b_end_input, bool b_lost_focus, bool b_replace);
	static class UPixUIInput* Get();
};


// Class PixUI.PixUILog
// 0x000C (0x0028 - 0x001C)
class UPixUILog : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PixUILog");
		return pStaticClass;
	}


	static class UPixUILog* Get();
	static void DispatchLog(EPXLogTypes e_LogType, EPXLogLevels e_LogLevel, const struct FString& fstr_LogContent);
};


// Class PixUI.PixUIScriptVM
// 0x00E4 (0x0100 - 0x001C)
class UPixUIScriptVM : public UObject
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x001C(0x0024) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCloseDelegate;                                          // 0x0040(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDestroyDelegate;                                        // 0x004C(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiVmOnLoadedDelegate;                                  // 0x0058(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiVmOnScriptStateInitDelegate;                         // 0x0064(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiVmOnInternalErrorDelegate;                           // 0x0070(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	struct FScriptDelegate                             pixuiVmOpenDelegate;                                      // 0x0080(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    pixuiVmCloseDelegate;                                     // 0x0090(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiVmAlertDelegate;                                     // 0x009C(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptDelegate                             pixuiVmConfirmDelegate;                                   // 0x00A8(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             pixuiVmPrompDelegate;                                     // 0x00B8(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    pixuiVmTransformDelegate;                                 // 0x00C8(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiVmMessageDelegate;                                   // 0x00D4(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiVmAppForegroundDelegate;                             // 0x00E0(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiVmAppBackgroundDelegate;                             // 0x00EC(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PixUIScriptVM");
		return pStaticClass;
	}

};


// Class PixUI.PixUIViewPortWidget
// 0x0038 (0x0240 - 0x0208)
class UPixUIViewPortWidget : public UUserWidget
{
public:
	struct FScriptDelegate                             pixuiWinOpenDelegate;                                     // 0x0208(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             pixuiWinConfirmDelegate;                                  // 0x0218(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             pixuiWinPrompDelegate;                                    // 0x0228(0x0010) (Edit, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0238(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PixUIViewPortWidget");
		return pStaticClass;
	}


	void PostPxMessage(const struct FString& fstr_Message);
	void OnPixuiTransformDelegate(EPXViewEvent PXEventType, int Param1, int Param2);
	struct FString OnPixuiPromptDelegate(const struct FString& fstr_Tip, const struct FString& fstr_Default);
	int OnPixuiOpenDelegate(const struct FString& fstr_Url, const struct FString& fstr_Name, const struct FString& fstr_Features, bool b_replace);
	bool OnPixuiConfirmDelegate(const struct FString& fstr_ConfirmMsg);
	int LoadPXViewFromUrl(const struct FString& fstr_Url);
	int LoadPXViewFromGameAssetPath(const struct FString& fstr_FilePath);
	int LoadPXViewFromData(const struct FString& fstr_RootPath, TArray<unsigned char>* arry_Data);
	class UPixUIWidget* GetPixuiWidget();
	void Close();
};


// Class PixUI.PixUIWidget
// 0x0208 (0x02F8 - 0x00F0)
class UPixUIWidget : public UCanvasPanel
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00F0(0x0028) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCloseDelegate;                                          // 0x0118(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDestroyDelegate;                                        // 0x0124(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiOnLoadedDelegate;                                    // 0x0130(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiOnScriptStateInitDelegate;                           // 0x013C(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiOnInternalErrorDelegate;                             // 0x0148(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0154(0x0004) MISSED OFFSET
	struct FScriptDelegate                             pixuiWinOpenDelegate;                                     // 0x0158(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    pixuiWinCloseDelegate;                                    // 0x0168(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiWinAlertDelegate;                                    // 0x0174(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptDelegate                             pixuiWinConfirmDelegate;                                  // 0x0180(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             pixuiWinPrompDelegate;                                    // 0x0190(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    pixuiWinTransformDelegate;                                // 0x01A0(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiWinMessageDelegate;                                  // 0x01AC(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiWin_app_foreground_delegate;                         // 0x01B8(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiWin_app_background_delegate;                         // 0x01C4(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptDelegate                             pixuiWinHookKeyEvent;                                     // 0x01D0(0x0010) (Edit, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData02[0x118];                                     // 0x01E0(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PixUIWidget");
		return pStaticClass;
	}


	void SetScriptGlobalString(const struct FString& Name, const struct FString& Key, const struct FString& str);
	void SetScriptGlobalNumber(const struct FString& Name, const struct FString& Key, float Num);
	void SetScriptGlobalBoolean(const struct FString& Name, const struct FString& Key, bool V);
	void SetAutoTransform(bool b_auto);
	void PostPxMessage(const struct FString& fstr_Message);
	int OpenPageFromUrl(const struct FString& fstrUrl);
	int OpenPageFromGameAssetPath(const struct FString& fstr_File);
	int OpenPageFromData(const struct FString& fstr_BasePath, TArray<unsigned char>* arry_Data);
	void OnExternalTouchEvent(int touchPosX, int touchPosY, int Pointer, int touchType);
	void OnExternalTextInput(const struct FString& strInputText, bool beEndInput, bool beLostFocus, bool beReplace);
	void OnExternalMouseEvent(int mousePosX, int mousePosY, int wheelOffsetZ, int wheelOffsetW, int btnType, bool btnDown);
	void OnExternalKeyBoardEvent(int keyCode, int keyModifiers, bool keyDown);
	class UObject* GetSlotObjectByTagId(const struct FString& slotTagId);
	struct FString GetScriptGlobalString(const struct FString& Name, const struct FString& Key);
	float GetScriptGlobalNumber(const struct FString& Name, const struct FString& Key);
	bool GetScriptGlobalBoolean(const struct FString& Name, const struct FString& Key);
	int GetPxWinId();
	class UWidget* GetCtrlWidget();
	void DisablePaint(bool bDisablePaint);
	void DestroyPage();
	void CreateScriptGlobal(const struct FString& Name);
	void ClosePage();
};


// Class PixUI.PixUIWidgetOld
// 0x00E8 (0x01B8 - 0x00D0)
class UPixUIWidgetOld : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCloseDelegate;                                          // 0x00D8(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDestroyDelegate;                                        // 0x00E4(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiOnLoadedDelegate;                                    // 0x00F0(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiOnScriptStateInitDelegate;                           // 0x00FC(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiOnInternalErrorDelegate;                             // 0x0108(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
	struct FScriptDelegate                             pixuiWinOpenDelegate;                                     // 0x0118(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    pixuiWinCloseDelegate;                                    // 0x0128(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiWinAlertDelegate;                                    // 0x0134(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptDelegate                             pixuiWinConfirmDelegate;                                  // 0x0140(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             pixuiWinPrompDelegate;                                    // 0x0150(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    pixuiWinTransformDelegate;                                // 0x0160(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiWinMessageDelegate;                                  // 0x016C(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiWin_app_foreground_delegate;                         // 0x0178(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    pixuiWin_app_background_delegate;                         // 0x0184(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x28];                                      // 0x0190(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PixUIWidgetOld");
		return pStaticClass;
	}


	void SetScriptGlobalString(const struct FString& Name, const struct FString& Key, const struct FString& str);
	void SetScriptGlobalNumber(const struct FString& Name, const struct FString& Key, float Num);
	void SetScriptGlobalBoolean(const struct FString& Name, const struct FString& Key, bool V);
	void SetCustomLayer(int n_in_layer);
	void SetAutoTransform(bool b_auto);
	void PostPxMessage(const struct FString& fstr_Message);
	int OpenPageFromUrl(const struct FString& fstr_Url);
	int OpenPageFromGameAssetPath(const struct FString& fstr_File);
	int OpenPageFromData(const struct FString& fstr_BasePath, TArray<unsigned char>* arry_Data);
	struct FString GetScriptGlobalString(const struct FString& Name, const struct FString& Key);
	float GetScriptGlobalNumber(const struct FString& Name, const struct FString& Key);
	bool GetScriptGlobalBoolean(const struct FString& Name, const struct FString& Key);
	int GetPxWinId();
	int GetCustomLayer();
	void DestroyPage();
	void CreateScriptGlobal(const struct FString& Name);
	void ClosePage();
};


// Class PixUI.PxSubLayerWidget
// 0x0018 (0x00E8 - 0x00D0)
class UPxSubLayerWidget : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00D0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PxSubLayerWidget");
		return pStaticClass;
	}

};


// Class PixUI.PxSubCtrlWidget
// 0x0008 (0x00F0 - 0x00E8)
class UPxSubCtrlWidget : public UPxSubLayerWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PxSubCtrlWidget");
		return pStaticClass;
	}

};


}

