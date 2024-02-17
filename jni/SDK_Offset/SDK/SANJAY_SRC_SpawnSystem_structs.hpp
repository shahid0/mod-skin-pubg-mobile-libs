#pragma once

// Pubg Mobile Beta (3.0) SDK by Telegram @Sanjay_Src

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum SpawnSystem.ESpeciesOrganization
enum class ESpeciesOrganization : uint8_t
{
	ESpeciesOrganization__Org_Group = 0,
	ESpeciesOrganization__Org_Squad = 1,
	ESpeciesOrganization__Org_Unit = 2,
	ESpeciesOrganization__Org_MAX  = 3
};


// Enum SpawnSystem.ESTSpawnerVolume
enum class ESTSpawnerVolume : uint8_t
{
	ESTSpawnerVolume__ESTSpawnerVolume_None = 0,
	ESTSpawnerVolume__ESTSpawnerVolume_Box = 1,
	ESTSpawnerVolume__ESTSpawnerVolume_Sphere = 2,
	ESTSpawnerVolume__ESTSpawnerVolume_MAX = 3
};


// Enum SpawnSystem.ESpawnSpotType
enum class ESpawnSpotType : uint8_t
{
	ESpawnSpotType__Ground         = 0,
	ESpawnSpotType__Wall           = 1,
	ESpawnSpotType__Air            = 2,
	ESpawnSpotType__ESpawnSpotType_MAX = 3
};


// Enum SpawnSystem.EReadSpeciesData
enum class EReadSpeciesData : uint8_t
{
	EReadSpeciesData__WeightedRandom = 0,
	EReadSpeciesData__Ordered      = 1,
	EReadSpeciesData__ManuallyIndex = 2,
	EReadSpeciesData__EReadSpeciesData_MAX = 3
};


// Enum SpawnSystem.EWaveState
enum class EWaveState : uint8_t
{
	EWaveState__None               = 0,
	EWaveState__WaveSpawning       = 1,
	EWaveState__WaveSpawned        = 2,
	EWaveState__WaveCD             = 3,
	EWaveState__WaveReadyForNext   = 4,
	EWaveState__EWaveState_MAX     = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SpawnSystem.UnitInitConfig
// 0x0018
struct FUnitInitConfig
{
	struct FName                                       BlackboardKey;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Value;                                                    // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct SpawnSystem.UnitConfig
// 0x0044
struct FUnitConfig
{
	struct FString                                     Desc;                                                     // 0x0000(0x000C) (Edit, ZeroConstructor)
	int                                                ConfigId;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FUnitInitConfig>                     UnitInitConfig;                                           // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                AttrId;                                                   // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DropID;                                                   // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BPPath;                                                   // 0x0024(0x000C) (BlueprintVisible, ZeroConstructor)
	bool                                               bTraceGround;                                             // 0x0030(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	struct FString                                     PreferSpotID;                                             // 0x0034(0x000C) (BlueprintVisible, ZeroConstructor)
	int                                                UnitIndex;                                                // 0x0040(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SpawnSystem.STSpawnParam
// 0x00A0
struct FSTSpawnParam
{
	struct FUnitConfig                                 UnitConfig;                                               // 0x0000(0x0044) (BlueprintVisible)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0044(0x000C) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0050(0x0030) (BlueprintVisible, IsPlainOldData)
	int                                                AttributeID;                                              // 0x0080(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	uint32_t                                           SpawnerID;                                                // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     SpotID;                                                   // 0x0088(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0094(0x000C) MISSED OFFSET
};

// ScriptStruct SpawnSystem.SpawnSpotInfo
// 0x0050
struct FSpawnSpotInfo
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (BlueprintVisible, IsPlainOldData)
	int                                                SpecieSquadIndex;                                         // 0x0030(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SpecieUnitIndex;                                          // 0x0034(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     SpotID;                                                   // 0x0038(0x000C) (BlueprintVisible, ZeroConstructor)
	TArray<struct FUnitInitConfig>                     SpotInitConfig;                                           // 0x0044(0x000C) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct SpawnSystem.WeightedUnit
// 0x0008
struct FWeightedUnit
{
	int                                                Index;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Weight;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SpawnSystem.SquadConfig
// 0x0030
struct FSquadConfig
{
	struct FString                                     Desc;                                                     // 0x0000(0x000C) (Edit, ZeroConstructor)
	TArray<struct FWeightedUnit>                       Units;                                                    // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FUnitInitConfig>                     SquadInitConfig;                                          // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     SuggestNumber;                                            // 0x0024(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct SpawnSystem.WeightedSquad
// 0x0008
struct FWeightedSquad
{
	int                                                Index;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Weight;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SpawnSystem.GroupConfig
// 0x001C
struct FGroupConfig
{
	struct FString                                     Desc;                                                     // 0x0000(0x000C) (Edit, ZeroConstructor)
	TArray<struct FWeightedSquad>                      Squads;                                                   // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Weight;                                                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SpawnSystem.UnitRatio
// 0x0048
struct FUnitRatio
{
	struct FUnitConfig                                 Unit;                                                     // 0x0000(0x0044) (Edit)
	float                                              Ratio;                                                    // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SpawnSystem.SpeciesRatioStruct
// 0x000C
struct FSpeciesRatioStruct
{
	TArray<struct FUnitRatio>                          UnitRatios;                                               // 0x0000(0x000C) (Edit, ZeroConstructor)
};

// ScriptStruct SpawnSystem.SpawnArea
// 0x0020
struct FSpawnArea
{
	struct FVector                                     CenterLocation;                                           // 0x0000(0x000C) (IsPlainOldData)
	ESTSpawnerVolume                                   Shape;                                                    // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FVector                                     ShapeSize;                                                // 0x0010(0x000C) (Edit, IsPlainOldData)
	bool                                               bInsideArea;                                              // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct SpawnSystem.STSpawnerDebugData
// 0x0001
struct FSTSpawnerDebugData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

}

