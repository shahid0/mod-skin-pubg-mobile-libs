#pragma once

// Pubg Mobile Beta (3.0) SDK by Telegram @Sanjay_Src

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum QRCodeUtility.EZXingFormat
enum class EZXingFormat : uint8_t
{
	EZXingFormat__NONE             = 0,
	EZXingFormat__AZTEC            = 1,
	EZXingFormat__CODABAR          = 2,
	EZXingFormat__CODE             = 3,
	EZXingFormat__CODE01           = 4,
	EZXingFormat__CODE02           = 5,
	EZXingFormat__DATA_MATRIX      = 6,
	EZXingFormat__EAN              = 7,
	EZXingFormat__EAN01            = 8,
	EZXingFormat__ITF              = 9,
	EZXingFormat__MAXICODE         = 10,
	EZXingFormat__PDF              = 11,
	EZXingFormat__QR_CODE          = 12,
	EZXingFormat__RSS              = 13,
	EZXingFormat__RSS_EXPANDED     = 14,
	EZXingFormat__UPC_A            = 15,
	EZXingFormat__UPC_E            = 16,
	EZXingFormat__UPC_EAN_EXTENSION = 17,
	EZXingFormat__EZXingFormat_MAX = 18
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct QRCodeUtility.ZXingScanResult
// 0x001C
struct FZXingScanResult
{
	EZXingFormat                                       Format;                                                   // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FString                                     Text;                                                     // 0x0004(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FVector2D>                           Points;                                                   // 0x0010(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

}

