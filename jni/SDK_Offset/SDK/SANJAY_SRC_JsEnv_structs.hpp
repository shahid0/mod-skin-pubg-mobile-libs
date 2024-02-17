#pragma once

// Pubg Mobile Beta (3.0) SDK by Telegram @Sanjay_Src

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct JsEnv.PropertyMetaRoot
// 0x0001
struct FPropertyMetaRoot
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct JsEnv.ArrayBuffer
// 0x000C
struct FArrayBuffer
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct JsEnv.JsObject
// 0x0038
struct FJsObject
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

}

