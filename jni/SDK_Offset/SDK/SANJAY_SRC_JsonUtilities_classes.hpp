#pragma once

// Pubg Mobile Beta (3.0) SDK by Telegram @Sanjay_Src

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class JsonUtilities.JsonUtilitiesDummyObject
// 0x0004 (0x0020 - 0x001C)
class UJsonUtilitiesDummyObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class JsonUtilities.JsonUtilitiesDummyObject");
		return pStaticClass;
	}

};


}

