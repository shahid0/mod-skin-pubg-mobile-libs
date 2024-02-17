#pragma once

// Pubg Mobile Beta (3.0) SDK by Telegram @Sanjay_Src

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class IGH5CachePlugin.IGH5CachePluginSettings
// 0x000C (0x0028 - 0x001C)
class UIGH5CachePluginSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class IGH5CachePlugin.IGH5CachePluginSettings");
		return pStaticClass;
	}

};


}

