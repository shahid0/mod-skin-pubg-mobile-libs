#pragma once

// Pubg Mobile Beta (3.0) SDK by Telegram @Sanjay_Src

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Landscape.ControlPointMeshComponent
// 0x0000 (0x07B0 - 0x07B0)
class UControlPointMeshComponent : public UStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.ControlPointMeshComponent");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeProxy
// 0x03E8 (0x06F8 - 0x0310)
class ALandscapeProxy : public AActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0310(0x0020) MISSED OFFSET
	class ULandscapeSplinesComponent*                  SplineComponent;                                          // 0x0330(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGuid                                       LandscapeGuid;                                            // 0x0334(0x0010) (Edit, EditConst, IsPlainOldData)
	struct FGuid                                       BoundingGuid;                                             // 0x0344(0x0010) (Edit, IsPlainOldData)
	struct FIntPoint                                   LandscapeSectionOffset;                                   // 0x0354(0x0008) (IsPlainOldData)
	int                                                MaxLODLevel;                                              // 0x035C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LODDistanceFactor;                                        // 0x0360(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELandscapeLODFalloff>                  LODFalloff;                                               // 0x0364(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseScreenSizeLOD;                                        // 0x0365(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0366(0x0002) MISSED OFFSET
	float                                              LOD0DistributionSetting;                                  // 0x0368(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LODDistributionSetting;                                   // 0x036C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NearMaxLOD_Baked;                                         // 0x0370(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0371(0x0003) MISSED OFFSET
	float                                              NearFactor_Baked;                                         // 0x0374(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              NearExtent_Baked;                                         // 0x0378(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FarFactor_Baked;                                          // 0x037C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LandscapeRoughness;                                       // 0x0380(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               EnableImproveLOD;                                         // 0x0384(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0385(0x0003) MISSED OFFSET
	TArray<float>                                      ImproveLODValues;                                         // 0x0388(0x000C) (ZeroConstructor)
	unsigned char                                      NearMaxLOD;                                               // 0x0394(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0395(0x0003) MISSED OFFSET
	float                                              NearFactor;                                               // 0x0398(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NearExtent;                                               // 0x039C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FarFactor;                                                // 0x03A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                StaticLightingLOD;                                        // 0x03A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UPhysicalMaterial*                           DefaultPhysMaterial;                                      // 0x03A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StreamingDistanceMultiplier;                              // 0x03AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCacheHeightData : 1;                                     // 0x03B0(0x0001) (Edit)
	unsigned char                                      UnknownData05[0x3];                                       // 0x03B1(0x0003) MISSED OFFSET
	class UMaterialInterface*                          LandscapeMaterial;                                        // 0x03B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          LandscapeHoleMaterial;                                    // 0x03B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, class UMaterialInterface*>      OtherMaterials;                                           // 0x03BC(0x0050) (Edit, ZeroConstructor)
	unsigned char                                      bOverrideGrassTypes : 1;                                  // 0x03F8(0x0001) (Edit)
	unsigned char                                      UnknownData06[0x3];                                       // 0x03F9(0x0003) MISSED OFFSET
	TArray<class ULandscapeGrassType*>                 GrassTypes;                                               // 0x03FC(0x000C) (Edit, ZeroConstructor)
	float                                              MinGrassWeightThreshold;                                  // 0x0408(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NegativeZBoundsExtension;                                 // 0x040C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PositiveZBoundsExtension;                                 // 0x0410(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  GrassColor_WorldMaskNoiseTexture;                         // 0x0414(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   GrassColor_UVScale_WorldMaskNoise;                        // 0x0418(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   GrassColor_Center_WorldMaskNoise;                         // 0x0420(0x0008) (Edit, IsPlainOldData)
	TArray<class ULandscapeComponent*>                 LandscapeComponents;                                      // 0x0428(0x000C) (ExportObject, ZeroConstructor)
	class ULandscapeAOTextureDataAsset*                LandscapeAOTextureDataAsset;                              // 0x0434(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<class ULandscapeHeightfieldCollisionComponent*> CollisionComponents;                                      // 0x0438(0x000C) (ExportObject, ZeroConstructor)
	TArray<class UHierarchicalInstancedStaticMeshComponent*> FoliageComponents;                                        // 0x0444(0x000C) (ExportObject, ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData07[0x48];                                      // 0x0450(0x0048) MISSED OFFSET
	bool                                               bHasLandscapeGrass;                                       // 0x0498(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0499(0x0003) MISSED OFFSET
	float                                              StaticLightingResolution;                                 // 0x049C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCastStaticShadow : 1;                                    // 0x04A0(0x0001) (Edit)
	unsigned char                                      bCastShadowAsTwoSided : 1;                                // 0x04A0(0x0001) (Edit)
	unsigned char                                      bCastFarShadow : 1;                                       // 0x04A0(0x0001) (Edit)
	struct FLightingChannels                           LightingChannels;                                         // 0x04A1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bUseMaterialPositionOffsetInStaticLighting : 1;           // 0x04A2(0x0001) (Edit)
	unsigned char                                      bRenderCustomDepth : 1;                                   // 0x04A2(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData09[0x1];                                       // 0x04A3(0x0001) MISSED OFFSET
	int                                                CustomDepthStencilValue;                                  // 0x04A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLightmassPrimitiveSettings                 LightmassSettings;                                        // 0x04A8(0x0018) (Edit)
	int                                                CollisionMipLevel;                                        // 0x04C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SimpleCollisionMipLevel;                                  // 0x04C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CollisionThickness;                                       // 0x04C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x04CC(0x0004) MISSED OFFSET
	struct FBodyInstance                               BodyInstance;                                             // 0x04D0(0x0140) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGenerateOverlapEvents : 1;                               // 0x0610(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bBakeMaterialPositionOffsetIntoCollision : 1;             // 0x0610(0x0001) (Edit)
	unsigned char                                      bUseHoleConsistent : 1;                                   // 0x0610(0x0001) (Edit)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0611(0x0003) MISSED OFFSET
	int                                                ComponentSizeQuads;                                       // 0x0614(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubsectionSizeQuads;                                      // 0x0618(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumSubsections;                                           // 0x061C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUsedForNavigation : 1;                                   // 0x0620(0x0001) (Edit)
	unsigned char                                      bMobileMultiLayers : 1;                                   // 0x0620(0x0001) (Edit)
	ENavDataGatheringMode                              NavigationGeometryGatheringMode;                          // 0x0621(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseLandscapeForCullingInvisibleHLODVertices;             // 0x0622(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseLandscapeVT;                                          // 0x0623(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  MaskTextureUsedByGrassClear;                              // 0x0624(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData12[0xD0];                                      // 0x0628(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeProxy");
		return pStaticClass;
	}


	void EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer);
	void ChangeLODDistributionSettingConsoleVariable();
	void ChangeLODDistanceFactor(float InLODDistanceFactor);
	void ChangeLOD0DistributionSettingConsoleVariable();
	void ChangebUseScreenSizeLOD(bool InbUseScreenSizeLOD);
};


// Class Landscape.Landscape
// 0x0078 (0x0770 - 0x06F8)
class ALandscape : public ALandscapeProxy
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x06F8(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.Landscape");
		return pStaticClass;
	}

};


// Class Landscape.SimpleMeshComponent
// 0x0020 (0x06C0 - 0x06A0)
class USimpleMeshComponent : public UMeshComponent
{
public:
	struct FBoxSphereBounds                            LocalBounds;                                              // 0x06A0(0x001C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x06BC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.SimpleMeshComponent");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeComponent
// 0x0300 (0x0980 - 0x0680)
class ULandscapeComponent : public UPrimitiveComponent
{
public:
	int                                                SubsectionSizeQuads;                                      // 0x0680(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumSubsections;                                           // 0x0684(0x0004) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          OverrideMaterial;                                         // 0x0688(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          OverrideHoleMaterial;                                     // 0x068C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, class UMaterialInterface*>      OverrideOtherMaterials;                                   // 0x0690(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	struct FOverridePhyxMaterial                       OverridePhyxMaterial;                                     // 0x06CC(0x0018) (Edit)
	unsigned char                                      bOverrideGrassTypes : 1;                                  // 0x06E4(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x06E5(0x0003) MISSED OFFSET
	TArray<class ULandscapeGrassType*>                 GrassTypes;                                               // 0x06E8(0x000C) (Edit, ZeroConstructor)
	TArray<class UMaterialInstanceConstant*>           MaterialInstances;                                        // 0x06F4(0x000C) (ZeroConstructor)
	TMap<struct FName, class UMaterialInstanceConstant*> OtherMaterialInstances;                                   // 0x0700(0x0050) (ZeroConstructor)
	TArray<struct FWeightmapLayerAllocationInfo>       WeightmapLayerAllocations;                                // 0x073C(0x000C) (ZeroConstructor)
	TArray<class UTexture2D*>                          WeightmapTextures;                                        // 0x0748(0x000C) (ZeroConstructor)
	int                                                VisibilityLayerChannel;                                   // 0x0754(0x0004) (ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  XYOffsetmapTexture;                                       // 0x0758(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x075C(0x0004) MISSED OFFSET
	struct FVector4                                    WeightmapScaleBias;                                       // 0x0760(0x0010) (IsPlainOldData)
	float                                              WeightmapSubsectionOffset;                                // 0x0770(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0774(0x000C) MISSED OFFSET
	struct FVector4                                    HeightmapScaleBias;                                       // 0x0780(0x0010) (IsPlainOldData)
	class UTexture2D*                                  HeightmapTexture;                                         // 0x0790(0x0004) (ZeroConstructor, IsPlainOldData)
	TMap<struct FString, struct FVisibilityData>       MultiVisibilityTextureData;                               // 0x0794(0x0050) (ZeroConstructor)
	struct FString                                     VisibleVisibilityLayer;                                   // 0x07D0(0x000C) (ZeroConstructor)
	struct FBox                                        CachedLocalBox;                                           // 0x07DC(0x001C) (IsPlainOldData)
	TLazyObjectPtr<class ULandscapeHeightfieldCollisionComponent> CollisionComponent;                                       // 0x07F8(0x001C) (ExportObject, InstancedReference, IsPlainOldData)
	struct FGuid                                       MapBuildDataId;                                           // 0x0814(0x0010) (IsPlainOldData)
	TArray<struct FGuid>                               IrrelevantLights;                                         // 0x0824(0x000C) (ZeroConstructor, Deprecated)
	int                                                CollisionMipLevel;                                        // 0x0830(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SimpleCollisionMipLevel;                                  // 0x0834(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NegativeZBoundsExtension;                                 // 0x0838(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PositiveZBoundsExtension;                                 // 0x083C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StaticLightingResolution;                                 // 0x0840(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ForcedLOD;                                                // 0x0844(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LODBias;                                                  // 0x0848(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MobileVertexHoleMaxLOD;                                   // 0x084C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x0850(0x000C) MISSED OFFSET
	TArray<float>                                      LODDeltaVertex;                                           // 0x085C(0x000C) (ZeroConstructor)
	float                                              MaxDeltaVertex;                                           // 0x0868(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       stateID;                                                  // 0x086C(0x0010) (IsPlainOldData)
	struct FGuid                                       BakedTextureMaterialGuid;                                 // 0x087C(0x0010) (IsPlainOldData)
	class UTexture2D*                                  GIBakedBaseColorTexture;                                  // 0x088C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FString                                     OccluderMeshDataPath;                                     // 0x0890(0x000C) (Edit, ZeroConstructor)
	unsigned char                                      MobileBlendableLayerMask;                                 // 0x089C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x089D(0x0003) MISSED OFFSET
	class UMaterialInterface*                          MobileMaterialInterface;                                  // 0x08A0(0x0004) (ZeroConstructor, IsPlainOldData)
	TMap<struct FName, class UMaterialInterface*>      OtherMobileMaterialInterfaces;                            // 0x08A4(0x0050) (ZeroConstructor)
	TArray<class UTexture2D*>                          MobileWeightmapTextures;                                  // 0x08E0(0x000C) (ZeroConstructor)
	class UTexture2D*                                  MobileWeightNormalmapTexture;                             // 0x08EC(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bMobileMultiLayers : 1;                                   // 0x08F0(0x0001)
	unsigned char                                      UnknownData05[0x3];                                       // 0x08F1(0x0003) MISSED OFFSET
	TArray<uint16_t>                                   CachedHeightData;                                         // 0x08F4(0x000C) (ZeroConstructor)
	bool                                               bUseLandscapeVT;                                          // 0x0900(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bLandscapeVTNeedHeightmap;                                // 0x0901(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x46];                                      // 0x0902(0x0046) MISSED OFFSET
	bool                                               bHasROCData;                                              // 0x0948(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x17];                                      // 0x0949(0x0017) MISSED OFFSET
	struct FName                                       UsedOtherMaterialName;                                    // 0x0960(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x18];                                      // 0x0968(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeComponent");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeGeometryAsset
// 0x0118 (0x0138 - 0x0020)
class ULandscapeGeometryAsset : public UDataAsset
{
public:
	TArray<struct FVector>                             Vertex;                                                   // 0x0020(0x000C) (Edit, ZeroConstructor)
	TArray<struct FVector>                             Normals;                                                  // 0x002C(0x000C) (Edit, ZeroConstructor)
	TArray<struct FVector2D>                           UV;                                                       // 0x0038(0x000C) (Edit, ZeroConstructor)
	TArray<int>                                        Indices;                                                  // 0x0044(0x000C) (Edit, ZeroConstructor)
	TMap<struct FIntPoint, int>                        ComponentIndexOffset;                                     // 0x0050(0x0050) (Edit, ZeroConstructor)
	int                                                ComponentIndexCount;                                      // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ComponentVertexCount;                                     // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<struct FString, struct FLevelComponentMapValue> SubLevelComponentMap;                                     // 0x0094(0x0050) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x28];                                      // 0x00D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Landscape.LandscapeGeometryAsset.HighQualityMesh
	float                                              HighQualityMeshDestroyHight;                              // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<struct FIntPoint, int>                        ComponentVertexIndexOffset;                               // 0x00FC(0x0050) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeGeometryAsset");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeGizmoActor
// 0x0000 (0x0310 - 0x0310)
class ALandscapeGizmoActor : public AActor
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeGizmoActor");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeGizmoActiveActor
// 0x0040 (0x0350 - 0x0310)
class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0310(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeGizmoActiveActor");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeGizmoRenderComponent
// 0x0000 (0x0680 - 0x0680)
class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeGizmoRenderComponent");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeGrassType
// 0x0024 (0x0040 - 0x001C)
class ULandscapeGrassType : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	class UStaticMesh*                                 GrassMesh;                                                // 0x0028(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              GrassDensity;                                             // 0x002C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PlacementJitter;                                          // 0x0030(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                StartCullDistance;                                        // 0x0034(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                EndCullDistance;                                          // 0x0038(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               RandomRotation;                                           // 0x003C(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               AlignToSurface;                                           // 0x003D(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x003E(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeGrassType");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeHeightfieldCollisionComponent
// 0x00C0 (0x0740 - 0x0680)
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{
public:
	int                                                SectionBaseX;                                             // 0x0680(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SectionBaseY;                                             // 0x0684(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CollisionSizeQuads;                                       // 0x0688(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CollisionScale;                                           // 0x068C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SimpleCollisionSizeQuads;                                 // 0x0690(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              CollisionQuadFlags;                                       // 0x0694(0x000C) (ZeroConstructor)
	struct FGuid                                       HeightfieldGuid;                                          // 0x06A0(0x0010) (IsPlainOldData)
	struct FBox                                        CachedLocalBox;                                           // 0x06B0(0x001C) (IsPlainOldData)
	TLazyObjectPtr<class ULandscapeComponent>          RenderComponent;                                          // 0x06CC(0x001C) (ExportObject, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x06E8(0x000C) MISSED OFFSET
	TArray<class UPhysicalMaterial*>                   CookedPhysicalMaterials;                                  // 0x06F4(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0700(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeHeightfieldCollisionComponent");
		return pStaticClass;
	}

};


// Class Landscape.IdeaGrassFieldFunctionLibrary
// 0x0000 (0x0020 - 0x0020)
class UIdeaGrassFieldFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.IdeaGrassFieldFunctionLibrary");
		return pStaticClass;
	}


	static void IdeaGrassRenderForceTextureTrample(const struct FIdeaGrassFieldData& GrassFieldData);
	static void IdeaGrassRenderForceTextureSkill(const struct FIdeaGrassFieldData& GrassFieldData);
	static void IdeaGrassRenderForceTextureFade(const struct FIdeaGrassFieldData& GrassFieldData);
	static void IdeaGrassRenderForceTexture(const struct FIdeaGrassFieldData& GrassFieldData);
};


// Class Landscape.LandscapeInfo
// 0x02EC (0x0308 - 0x001C)
class ULandscapeInfo : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x001C(0x001C) MISSED OFFSET
	struct FGuid                                       LandscapeGuid;                                            // 0x0038(0x0010) (IsPlainOldData)
	int                                                ComponentSizeQuads;                                       // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubsectionSizeQuads;                                      // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ComponentNumSubsections;                                  // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     DrawScale;                                                // 0x0054(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x1B4];                                     // 0x0060(0x01B4) MISSED OFFSET
	unsigned char                                      UnknownData02[0x3C];                                      // 0x0060(0x003C) UNKNOWN PROPERTY: SetProperty Landscape.LandscapeInfo.Proxies
	unsigned char                                      UnknownData03[0xB8];                                      // 0x0250(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeInfo");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeInfoMap
// 0x0044 (0x0060 - 0x001C)
class ULandscapeInfoMap : public UObject
{
public:
	unsigned char                                      UnknownData00[0x44];                                      // 0x001C(0x0044) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeInfoMap");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeLayerInfoObject
// 0x0024 (0x0040 - 0x001C)
class ULandscapeLayerInfoObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FName                                       LayerName;                                                // 0x0020(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class UPhysicalMaterial*                           PhysMaterial;                                             // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Hardness;                                                 // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LayerUsageDebugColor;                                     // 0x0030(0x0010) (Edit, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeLayerInfoObject");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeMaterialInstanceConstant
// 0x0000 (0x0168 - 0x0168)
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeMaterialInstanceConstant");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeMeshCollisionComponent
// 0x0010 (0x0750 - 0x0740)
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0740(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeMeshCollisionComponent");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeMeshProxyActor
// 0x0008 (0x0318 - 0x0310)
class ALandscapeMeshProxyActor : public AActor
{
public:
	class ULandscapeMeshProxyComponent*                LandscapeMeshProxyComponent;                              // 0x0310(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0314(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeMeshProxyActor");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeMeshProxyComponent
// 0x0020 (0x07D0 - 0x07B0)
class ULandscapeMeshProxyComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x07B0(0x0004) MISSED OFFSET
	TArray<struct FIntPoint>                           ProxyComponentBases;                                      // 0x07B4(0x000C) (ZeroConstructor)
	int8_t                                             ProxyLOD;                                                 // 0x07C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x07C1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeMeshProxyComponent");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeSplinesComponent
// 0x0020 (0x06A0 - 0x0680)
class ULandscapeSplinesComponent : public UPrimitiveComponent
{
public:
	TArray<class ULandscapeSplineSegment*>             Segments;                                                 // 0x0680(0x000C) (ZeroConstructor)
	TArray<class UMeshComponent*>                      CookedForeignMeshComponents;                              // 0x068C(0x000C) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0698(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeSplinesComponent");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeSplineControlPoint
// 0x005C (0x0078 - 0x001C)
class ULandscapeSplineControlPoint : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	struct FRotator                                    Rotation;                                                 // 0x0028(0x000C) (Edit, IsPlainOldData)
	float                                              Width;                                                    // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SideFalloff;                                              // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EndFalloff;                                               // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FLandscapeSplineConnection>          ConnectedSegments;                                        // 0x0040(0x000C) (ZeroConstructor)
	TArray<struct FLandscapeSplineInterpPoint>         Points;                                                   // 0x004C(0x000C) (ZeroConstructor)
	struct FBox                                        Bounds;                                                   // 0x0058(0x001C) (IsPlainOldData)
	class UControlPointMeshComponent*                  LocalMeshComponent;                                       // 0x0074(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeSplineControlPoint");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeSplineSegment
// 0x006C (0x0088 - 0x001C)
class ULandscapeSplineSegment : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FLandscapeSplineSegmentConnection           Connections[0x2];                                         // 0x0020(0x0010) (Edit, EditFixedSize)
	struct FInterpCurveVector                          SplineInfo;                                               // 0x0040(0x0014)
	TArray<struct FLandscapeSplineInterpPoint>         Points;                                                   // 0x0054(0x000C) (ZeroConstructor)
	struct FBox                                        Bounds;                                                   // 0x0060(0x001C) (IsPlainOldData)
	TArray<class USplineMeshComponent*>                LocalMeshComponents;                                      // 0x007C(0x000C) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeSplineSegment");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeStreamingProxy
// 0x0020 (0x0718 - 0x06F8)
class ALandscapeStreamingProxy : public ALandscapeProxy
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x06F8(0x0018) MISSED OFFSET
	bool                                               bLandscapeProxyUseSceenSizeLOD;                           // 0x0710(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0711(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeStreamingProxy");
		return pStaticClass;
	}

};


// Class Landscape.MaterialExpressionLandscapeFlattenCoords
// 0x0030 (0x0078 - 0x0048)
class UMaterialExpressionLandscapeFlattenCoords : public UMaterialExpression
{
public:
	struct FExpressionInput                            UVScaleBias;                                              // 0x0048(0x0030)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeFlattenCoords");
		return pStaticClass;
	}

};


// Class Landscape.MaterialExpressionLandscapeFlattenTexture
// 0x0030 (0x0078 - 0x0048)
class UMaterialExpressionLandscapeFlattenTexture : public UMaterialExpression
{
public:
	struct FExpressionInput                            Coordinates;                                              // 0x0048(0x0030)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeFlattenTexture");
		return pStaticClass;
	}

};


// Class Landscape.MaterialExpressionLandscapeFlattenBaseColor
// 0x0000 (0x0078 - 0x0078)
class UMaterialExpressionLandscapeFlattenBaseColor : public UMaterialExpressionLandscapeFlattenTexture
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeFlattenBaseColor");
		return pStaticClass;
	}

};


// Class Landscape.MaterialExpressionLandscapeFlattenNormal
// 0x0000 (0x0078 - 0x0078)
class UMaterialExpressionLandscapeFlattenNormal : public UMaterialExpressionLandscapeFlattenTexture
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeFlattenNormal");
		return pStaticClass;
	}

};


// Class Landscape.MaterialExpressionLandscapeFlattenRSM
// 0x0000 (0x0078 - 0x0078)
class UMaterialExpressionLandscapeFlattenRSM : public UMaterialExpressionLandscapeFlattenTexture
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeFlattenRSM");
		return pStaticClass;
	}

};


// Class Landscape.MaterialExpressionLandscapeGrassOutput
// 0x0008 (0x0050 - 0x0048)
class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeGrassOutput");
		return pStaticClass;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerBlend
// 0x0018 (0x0060 - 0x0048)
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	struct FGuid                                       ExpressionGUID;                                           // 0x0050(0x0010) (IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerBlend");
		return pStaticClass;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerCoords
// 0x0040 (0x0088 - 0x0048)
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{
public:
	struct FExpressionInput                            MappingScaleOverride;                                     // 0x0048(0x0030)
	float                                              MappingScale;                                             // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MappingRotation;                                          // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MappingPanU;                                              // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MappingPanV;                                              // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerCoords");
		return pStaticClass;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerSample
// 0x0020 (0x0068 - 0x0048)
class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
{
public:
	struct FName                                       ParameterName;                                            // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PreviewWeight;                                            // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x0054(0x0010) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerSample");
		return pStaticClass;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// 0x0080 (0x00C8 - 0x0048)
class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
{
public:
	struct FExpressionInput                            LayerUsed;                                                // 0x0048(0x0030)
	struct FExpressionInput                            LayerNotUsed;                                             // 0x0078(0x0030)
	struct FName                                       ParameterName;                                            // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PreviewUsed : 1;                                          // 0x00B0(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	struct FGuid                                       ExpressionGUID;                                           // 0x00B4(0x0010) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerSwitch");
		return pStaticClass;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerWeight
// 0x0088 (0x00D0 - 0x0048)
class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
{
public:
	struct FExpressionInput                            Base;                                                     // 0x0048(0x0030)
	struct FExpressionInput                            Layer;                                                    // 0x0078(0x0030)
	struct FName                                       ParameterName;                                            // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PreviewWeight;                                            // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ConstBase;                                                // 0x00B4(0x000C) (Edit, IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x00C0(0x0010) (IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerWeight");
		return pStaticClass;
	}

};


// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// 0x0010 (0x0058 - 0x0048)
class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeVisibilityMask");
		return pStaticClass;
	}

};


}

