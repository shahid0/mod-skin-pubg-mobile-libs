#pragma once

// Pubg Mobile Beta (3.0) SDK by Telegram @Sanjay_Src

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class JsEnv.DynamicDelegateProxy
// 0x0034 (0x0050 - 0x001C)
class UDynamicDelegateProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x001C(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class JsEnv.DynamicDelegateProxy");
		return pStaticClass;
	}


	void Fire();
};


// Class JsEnv.ExtensionMethods
// 0x0000 (0x0020 - 0x0020)
class UExtensionMethods : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class JsEnv.ExtensionMethods");
		return pStaticClass;
	}

};


// Class JsEnv.JSAnimGeneratedClass
// 0x0038 (0x0280 - 0x0248)
class UJSAnimGeneratedClass : public UAnimBlueprintGeneratedClass
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0248(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class JsEnv.JSAnimGeneratedClass");
		return pStaticClass;
	}

};


// Class JsEnv.JSGeneratedClass
// 0x0038 (0x0238 - 0x0200)
class UJSGeneratedClass : public UBlueprintGeneratedClass
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0200(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class JsEnv.JSGeneratedClass");
		return pStaticClass;
	}

};


// Class JsEnv.JSGeneratedFunction
// 0x0038 (0x00B8 - 0x0080)
class UJSGeneratedFunction : public UFunction
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0080(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class JsEnv.JSGeneratedFunction");
		return pStaticClass;
	}

};


// Class JsEnv.JSWidgetGeneratedClass
// 0x0038 (0x0290 - 0x0258)
class UJSWidgetGeneratedClass : public UWidgetBlueprintGeneratedClass
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0258(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class JsEnv.JSWidgetGeneratedClass");
		return pStaticClass;
	}

};


// Class JsEnv.TypeScriptBlueprint
// 0x0000 (0x00A0 - 0x00A0)
class UTypeScriptBlueprint : public UBlueprint
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class JsEnv.TypeScriptBlueprint");
		return pStaticClass;
	}

};


// Class JsEnv.TypeScriptGeneratedClass
// 0x0058 (0x0258 - 0x0200)
class UTypeScriptGeneratedClass : public UBlueprintGeneratedClass
{
public:
	unsigned char                                      UnknownData00[0x51];                                      // 0x0200(0x0051) MISSED OFFSET
	bool                                               HasConstructor;                                           // 0x0251(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0252(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class JsEnv.TypeScriptGeneratedClass");
		return pStaticClass;
	}

};


// Class JsEnv.TypeScriptObject
// 0x0000 (0x0020 - 0x0020)
class UTypeScriptObject : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class JsEnv.TypeScriptObject");
		return pStaticClass;
	}

};


}

