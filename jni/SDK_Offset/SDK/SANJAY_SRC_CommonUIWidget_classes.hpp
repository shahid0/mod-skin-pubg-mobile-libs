#pragma once

// Pubg Mobile Beta (3.0) SDK by Telegram @Sanjay_Src

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CommonUIWidget.CommonInputBox
// 0x0000 (0x0250 - 0x0250)
class UCommonInputBox : public ULuaUserWidget
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CommonUIWidget.CommonInputBox");
		return pStaticClass;
	}

};


// Class CommonUIWidget.CommonPopupBox
// 0x0000 (0x0250 - 0x0250)
class UCommonPopupBox : public ULuaUserWidget
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CommonUIWidget.CommonPopupBox");
		return pStaticClass;
	}

};


// Class CommonUIWidget.CommonSearchBox
// 0x0000 (0x0250 - 0x0250)
class UCommonSearchBox : public ULuaUserWidget
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CommonUIWidget.CommonSearchBox");
		return pStaticClass;
	}

};


}

