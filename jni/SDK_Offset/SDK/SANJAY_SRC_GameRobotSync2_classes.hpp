#pragma once

// Pubg Mobile Beta (3.0) SDK by Telegram @Sanjay_Src

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GameRobotSync2.MyAutoTest3
// 0x002C (0x0048 - 0x001C)
class UMyAutoTest3 : public UObject
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x001C(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameRobotSync2.MyAutoTest3");
		return pStaticClass;
	}

};


}

