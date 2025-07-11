﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: LiveLink

#include "Basic.hpp"

#include "LiveLink_structs.hpp"
#include "Engine_structs.hpp"
#include "LiveLinkInterface_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function LiveLink.LiveLinkBlueprintLibrary.ChildCount
// 0x0028 (0x0028 - 0x0000)
struct LiveLinkBlueprintLibrary_ChildCount final
{
public:
	struct FLiveLinkTransform                     LiveLinkTransform;                                 // 0x0000(0x0020)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0020(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Struct Size After Last Property [ Dumper-8 ])
};

// Function LiveLink.LiveLinkBlueprintLibrary.ComponentSpaceTransform
// 0x0050 (0x0050 - 0x0000)
struct LiveLinkBlueprintLibrary_ComponentSpaceTransform final
{
public:
	struct FLiveLinkTransform                     LiveLinkTransform;                                 // 0x0000(0x0020)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FTransform                             Transform;                                         // 0x0020(0x0030)(Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetChildren
// 0x0030 (0x0030 - 0x0000)
struct LiveLinkBlueprintLibrary_GetChildren final
{
public:
	struct FLiveLinkTransform                     LiveLinkTransform;                                 // 0x0000(0x0020)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FLiveLinkTransform>             Children;                                          // 0x0020(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetCurves
// 0x0068 (0x0068 - 0x0000)
struct LiveLinkBlueprintLibrary_GetCurves final
{
public:
	struct FSubjectFrameHandle                    SubjectFrameHandle;                                // 0x0000(0x0018)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TMap<class FName, float>                      Curves;                                            // 0x0018(0x0050)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetMetadata
// 0x0088 (0x0088 - 0x0000)
struct LiveLinkBlueprintLibrary_GetMetadata final
{
public:
	struct FSubjectFrameHandle                    SubjectFrameHandle;                                // 0x0000(0x0018)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FSubjectMetadata                       MetaData;                                          // 0x0018(0x0070)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetParent
// 0x0040 (0x0040 - 0x0000)
struct LiveLinkBlueprintLibrary_GetParent final
{
public:
	struct FLiveLinkTransform                     LiveLinkTransform;                                 // 0x0000(0x0020)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLiveLinkTransform                     Parent;                                            // 0x0020(0x0020)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetRootTransform
// 0x0038 (0x0038 - 0x0000)
struct LiveLinkBlueprintLibrary_GetRootTransform final
{
public:
	struct FSubjectFrameHandle                    SubjectFrameHandle;                                // 0x0000(0x0018)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLiveLinkTransform                     LiveLinkTransform;                                 // 0x0018(0x0020)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceMachineName
// 0x0030 (0x0030 - 0x0000)
struct LiveLinkBlueprintLibrary_GetSourceMachineName final
{
public:
	struct FLiveLinkSourceHandle                  SourceHandle;                                      // 0x0000(0x0018)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                   ReturnValue;                                       // 0x0018(0x0018)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceStatus
// 0x0030 (0x0030 - 0x0000)
struct LiveLinkBlueprintLibrary_GetSourceStatus final
{
public:
	struct FLiveLinkSourceHandle                  SourceHandle;                                      // 0x0000(0x0018)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                   ReturnValue;                                       // 0x0018(0x0018)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceType
// 0x0030 (0x0030 - 0x0000)
struct LiveLinkBlueprintLibrary_GetSourceType final
{
public:
	struct FLiveLinkSourceHandle                  SourceHandle;                                      // 0x0000(0x0018)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                   ReturnValue;                                       // 0x0018(0x0018)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByIndex
// 0x0040 (0x0040 - 0x0000)
struct LiveLinkBlueprintLibrary_GetTransformByIndex final
{
public:
	struct FSubjectFrameHandle                    SubjectFrameHandle;                                // 0x0000(0x0018)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                         TransformIndex;                                    // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-8 ])
	struct FLiveLinkTransform                     LiveLinkTransform;                                 // 0x0020(0x0020)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByName
// 0x0040 (0x0040 - 0x0000)
struct LiveLinkBlueprintLibrary_GetTransformByName final
{
public:
	struct FSubjectFrameHandle                    SubjectFrameHandle;                                // 0x0000(0x0018)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FName                                   TransformName_0;                                   // 0x0018(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLiveLinkTransform                     LiveLinkTransform;                                 // 0x0020(0x0020)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkBlueprintLibrary.HasParent
// 0x0028 (0x0028 - 0x0000)
struct LiveLinkBlueprintLibrary_HasParent final
{
public:
	struct FLiveLinkTransform                     LiveLinkTransform;                                 // 0x0000(0x0020)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-8 ])
};

// Function LiveLink.LiveLinkBlueprintLibrary.IsSourceStillValid
// 0x0020 (0x0020 - 0x0000)
struct LiveLinkBlueprintLibrary_IsSourceStillValid final
{
public:
	struct FLiveLinkSourceHandle                  SourceHandle;                                      // 0x0000(0x0018)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-8 ])
};

// Function LiveLink.LiveLinkBlueprintLibrary.NumberOfTransforms
// 0x0020 (0x0020 - 0x0000)
struct LiveLinkBlueprintLibrary_NumberOfTransforms final
{
public:
	struct FSubjectFrameHandle                    SubjectFrameHandle;                                // 0x0000(0x0018)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0018(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-8 ])
};

// Function LiveLink.LiveLinkBlueprintLibrary.ParentBoneSpaceTransform
// 0x0050 (0x0050 - 0x0000)
struct LiveLinkBlueprintLibrary_ParentBoneSpaceTransform final
{
public:
	struct FLiveLinkTransform                     LiveLinkTransform;                                 // 0x0000(0x0020)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FTransform                             Transform;                                         // 0x0020(0x0030)(Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkBlueprintLibrary.RequestShutdown
// 0x0020 (0x0020 - 0x0000)
struct LiveLinkBlueprintLibrary_RequestShutdown final
{
public:
	struct FLiveLinkSourceHandle                  SourceHandle;                                      // 0x0000(0x0018)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-8 ])
};

// Function LiveLink.LiveLinkBlueprintLibrary.TransformName
// 0x0028 (0x0028 - 0x0000)
struct LiveLinkBlueprintLibrary_TransformName final
{
public:
	struct FLiveLinkTransform                     LiveLinkTransform;                                 // 0x0000(0x0020)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FName                                   Name_0;                                            // 0x0020(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkBlueprintLibrary.TransformNames
// 0x0028 (0x0028 - 0x0000)
struct LiveLinkBlueprintLibrary_TransformNames final
{
public:
	struct FSubjectFrameHandle                    SubjectFrameHandle;                                // 0x0000(0x0018)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class FName>                           TransformNames_0;                                  // 0x0018(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkComponent.GetAvailableSubjectNames
// 0x0010 (0x0010 - 0x0000)
struct LiveLinkComponent_GetAvailableSubjectNames final
{
public:
	TArray<class FName>                           SubjectNames;                                      // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkComponent.GetSubjectData
// 0x0028 (0x0028 - 0x0000)
struct LiveLinkComponent_GetSubjectData final
{
public:
	class FName                                   SubjectName;                                       // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSuccess;                                          // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	struct FSubjectFrameHandle                    SubjectFrameHandle;                                // 0x0010(0x0018)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkComponent.GetSubjectDataAtSceneTime
// 0x0038 (0x0038 - 0x0000)
struct LiveLinkComponent_GetSubjectDataAtSceneTime final
{
public:
	class FName                                   SubjectName;                                       // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimecode                              SceneTime;                                         // 0x0008(0x0014)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSuccess;                                          // 0x001C(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-8 ])
	struct FSubjectFrameHandle                    SubjectFrameHandle;                                // 0x0020(0x0018)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkComponent.GetSubjectDataAtWorldTime
// 0x0028 (0x0028 - 0x0000)
struct LiveLinkComponent_GetSubjectDataAtWorldTime final
{
public:
	class FName                                   SubjectName;                                       // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WorldTime;                                         // 0x0008(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSuccess;                                          // 0x000C(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-8 ])
	struct FSubjectFrameHandle                    SubjectFrameHandle;                                // 0x0010(0x0018)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkMessageBusFinder.ConnectToProvider
// 0x0048 (0x0048 - 0x0000)
struct LiveLinkMessageBusFinder_ConnectToProvider final
{
public:
	struct FProviderPollResult                    Provider;                                          // 0x0000(0x0030)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLiveLinkSourceHandle                  SourceHandle;                                      // 0x0030(0x0018)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkMessageBusFinder.ConstructMessageBusFinder
// 0x0008 (0x0008 - 0x0000)
struct LiveLinkMessageBusFinder_ConstructMessageBusFinder final
{
public:
	class ULiveLinkMessageBusFinder*              ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkMessageBusFinder.GetAvailableProviders
// 0x0038 (0x0038 - 0x0000)
struct LiveLinkMessageBusFinder_GetAvailableProviders final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                      LatentInfo;                                        // 0x0008(0x0018)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                         Duration;                                          // 0x0020(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-8 ])
	TArray<struct FProviderPollResult>            AvailableProviders;                                // 0x0028(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkRemapAsset.GetRemappedBoneName
// 0x0010 (0x0010 - 0x0000)
struct LiveLinkRemapAsset_GetRemappedBoneName final
{
public:
	class FName                                   BoneName;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkRemapAsset.GetRemappedCurveName
// 0x0010 (0x0010 - 0x0000)
struct LiveLinkRemapAsset_GetRemappedCurveName final
{
public:
	class FName                                   CurveName;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkRemapAsset.RemapCurveElements
// 0x0050 (0x0050 - 0x0000)
struct LiveLinkRemapAsset_RemapCurveElements final
{
public:
	TMap<class FName, float>                      CurveItems;                                        // 0x0000(0x0050)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

}

