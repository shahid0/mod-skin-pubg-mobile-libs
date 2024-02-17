#pragma once

// Pubg Mobile Beta (3.0) SDK by Telegram @Sanjay_Src

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ScriptPlugin.SonInfo
// 0x0010
struct FSonInfo
{
	int                                                xlevel;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     xname;                                                    // 0x0004(0x000C) (ZeroConstructor)
};

// ScriptStruct ScriptPlugin.PlayerInfo
// 0x0024
struct FPlayerInfo
{
	int                                                Level;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // 0x0004(0x000C) (ZeroConstructor)
	int                                                LocalPosition;                                            // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FSonInfo                                    mySon;                                                    // 0x0014(0x0010)
};

// ScriptStruct ScriptPlugin.LuaStateGuard
// 0x0004
struct FLuaStateGuard
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct ScriptPlugin.LuaStateWrapperInitParams
// 0x007C
struct FLuaStateWrapperInitParams
{
	unsigned char                                      UnknownData00[0x7C];                                      // 0x0000(0x007C) MISSED OFFSET
};

}

