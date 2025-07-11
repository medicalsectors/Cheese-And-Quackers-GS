﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: Niagara

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Niagara_structs.hpp"


namespace SDK::Params
{

// Function Niagara.NiagaraComponent.AdvanceSimulation
// 0x0008 (0x0008 - 0x0000)
struct NiagaraComponent_AdvanceSimulation final
{
public:
	int32                                         TickCount;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TickDeltaSeconds;                                  // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.AdvanceSimulationByTime
// 0x0008 (0x0008 - 0x0000)
struct NiagaraComponent_AdvanceSimulationByTime final
{
public:
	float                                         SimulateTime;                                      // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TickDeltaSeconds;                                  // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly
// 0x0020 (0x0020 - 0x0000)
struct NiagaraComponent_GetNiagaraParticlePositions_DebugOnly final
{
public:
	class FString                                 InEmitterName;                                     // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                        ReturnValue;                                       // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly
// 0x0030 (0x0030 - 0x0000)
struct NiagaraComponent_GetNiagaraParticleValues_DebugOnly final
{
public:
	class FString                                 InEmitterName;                                     // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 InValueName;                                       // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                 ReturnValue;                                       // 0x0020(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly
// 0x0030 (0x0030 - 0x0000)
struct NiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly final
{
public:
	class FString                                 InEmitterName;                                     // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 InValueName;                                       // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                        ReturnValue;                                       // 0x0020(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SeekToDesiredAge
// 0x0004 (0x0004 - 0x0000)
struct NiagaraComponent_SeekToDesiredAge final
{
public:
	float                                         InDesiredAge;                                      // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SetAgeUpdateMode
// 0x0001 (0x0001 - 0x0000)
struct NiagaraComponent_SetAgeUpdateMode final
{
public:
	ENiagaraAgeUpdateMode                         InAgeUpdateMode;                                   // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SetAsset
// 0x0008 (0x0008 - 0x0000)
struct NiagaraComponent_SetAsset final
{
public:
	class UNiagaraSystem*                         InAsset;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SetAutoAttachmentParameters
// 0x0018 (0x0018 - 0x0000)
struct NiagaraComponent_SetAutoAttachmentParameters final
{
public:
	class USceneComponent*                        Parent;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   SocketName;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAttachmentRule                               LocationRule;                                      // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAttachmentRule                               RotationRule;                                      // 0x0011(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAttachmentRule                               ScaleRule;                                         // 0x0012(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_13[0x5];                                       // 0x0013(0x0005)(Fixing Struct Size After Last Property [ Dumper-8 ])
};

// Function Niagara.NiagaraComponent.SetAutoDestroy
// 0x0001 (0x0001 - 0x0000)
struct NiagaraComponent_SetAutoDestroy final
{
public:
	bool                                          bInAutoDestroy;                                    // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking
// 0x0001 (0x0001 - 0x0000)
struct NiagaraComponent_SetCanRenderWhileSeeking final
{
public:
	bool                                          bInCanRenderWhileSeeking;                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SetDesiredAge
// 0x0004 (0x0004 - 0x0000)
struct NiagaraComponent_SetDesiredAge final
{
public:
	float                                         InDesiredAge;                                      // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SetForceSolo
// 0x0001 (0x0001 - 0x0000)
struct NiagaraComponent_SetForceSolo final
{
public:
	bool                                          bInForceSolo;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SetMaxSimTime
// 0x0004 (0x0004 - 0x0000)
struct NiagaraComponent_SetMaxSimTime final
{
public:
	float                                         InMaxTime;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SetNiagaraVariableActor
// 0x0018 (0x0018 - 0x0000)
struct NiagaraComponent_SetNiagaraVariableActor final
{
public:
	class FString                                 InVariableName;                                    // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 Actor;                                             // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SetNiagaraVariableBool
// 0x0018 (0x0018 - 0x0000)
struct NiagaraComponent_SetNiagaraVariableBool final
{
public:
	class FString                                 InVariableName;                                    // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          InValue;                                           // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-8 ])
};

// Function Niagara.NiagaraComponent.SetNiagaraVariableFloat
// 0x0018 (0x0018 - 0x0000)
struct NiagaraComponent_SetNiagaraVariableFloat final
{
public:
	class FString                                 InVariableName;                                    // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InValue;                                           // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-8 ])
};

// Function Niagara.NiagaraComponent.SetNiagaraVariableInt
// 0x0018 (0x0018 - 0x0000)
struct NiagaraComponent_SetNiagaraVariableInt final
{
public:
	class FString                                 InVariableName;                                    // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         InValue;                                           // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-8 ])
};

// Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor
// 0x0020 (0x0020 - 0x0000)
struct NiagaraComponent_SetNiagaraVariableLinearColor final
{
public:
	class FString                                 InVariableName;                                    // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           InValue;                                           // 0x0010(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SetNiagaraVariableQuat
// 0x0020 (0x0020 - 0x0000)
struct NiagaraComponent_SetNiagaraVariableQuat final
{
public:
	class FString                                 InVariableName;                                    // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                  InValue;                                           // 0x0010(0x0010)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SetNiagaraVariableVec2
// 0x0018 (0x0018 - 0x0000)
struct NiagaraComponent_SetNiagaraVariableVec2 final
{
public:
	class FString                                 InVariableName;                                    // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              InValue;                                           // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SetNiagaraVariableVec3
// 0x0020 (0x0020 - 0x0000)
struct NiagaraComponent_SetNiagaraVariableVec3 final
{
public:
	class FString                                 InVariableName;                                    // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                InValue;                                           // 0x0010(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-8 ])
};

// Function Niagara.NiagaraComponent.SetNiagaraVariableVec4
// 0x0020 (0x0020 - 0x0000)
struct NiagaraComponent_SetNiagaraVariableVec4 final
{
public:
	class FString                                 InVariableName;                                    // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                               InValue;                                           // 0x0010(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SetPaused
// 0x0001 (0x0001 - 0x0000)
struct NiagaraComponent_SetPaused final
{
public:
	bool                                          bInPaused;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SetPreviewDetailLevel
// 0x0008 (0x0008 - 0x0000)
struct NiagaraComponent_SetPreviewDetailLevel final
{
public:
	bool                                          bEnablePreviewDetailLevel_0;                       // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-8 ])
	int32                                         PreviewDetailLevel_0;                              // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SetPreviewLODDistance
// 0x0008 (0x0008 - 0x0000)
struct NiagaraComponent_SetPreviewLODDistance final
{
public:
	bool                                          bEnablePreviewLODDistance_0;                       // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-8 ])
	float                                         PreviewLODDistance_0;                              // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SetRenderingEnabled
// 0x0001 (0x0001 - 0x0000)
struct NiagaraComponent_SetRenderingEnabled final
{
public:
	bool                                          bInRenderingEnabled;                               // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SetSeekDelta
// 0x0004 (0x0004 - 0x0000)
struct NiagaraComponent_SetSeekDelta final
{
public:
	float                                         InSeekDelta;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.GetAgeUpdateMode
// 0x0001 (0x0001 - 0x0000)
struct NiagaraComponent_GetAgeUpdateMode final
{
public:
	ENiagaraAgeUpdateMode                         ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.GetAsset
// 0x0008 (0x0008 - 0x0000)
struct NiagaraComponent_GetAsset final
{
public:
	class UNiagaraSystem*                         ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.GetDesiredAge
// 0x0004 (0x0004 - 0x0000)
struct NiagaraComponent_GetDesiredAge final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.GetForceSolo
// 0x0001 (0x0001 - 0x0000)
struct NiagaraComponent_GetForceSolo final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.GetMaxSimTime
// 0x0004 (0x0004 - 0x0000)
struct NiagaraComponent_GetMaxSimTime final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.GetSeekDelta
// 0x0004 (0x0004 - 0x0000)
struct NiagaraComponent_GetSeekDelta final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.IsPaused
// 0x0001 (0x0001 - 0x0000)
struct NiagaraComponent_IsPaused final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection
// 0x0018 (0x0018 - 0x0000)
struct NiagaraFunctionLibrary_GetNiagaraParameterCollection final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraParameterCollection*            Collection;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraParameterCollectionInstance*    ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation
// 0x0038 (0x0038 - 0x0000)
struct NiagaraFunctionLibrary_SpawnSystemAtLocation final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                         SystemTemplate;                                    // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Location;                                          // 0x0010(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               Rotation;                                          // 0x001C(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          bAutoDestroy;                                      // 0x0028(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	class UNiagaraComponent*                      ReturnValue;                                       // 0x0030(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttached
// 0x0040 (0x0040 - 0x0000)
struct NiagaraFunctionLibrary_SpawnSystemAttached final
{
public:
	class UNiagaraSystem*                         SystemTemplate;                                    // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                        AttachToComponent;                                 // 0x0008(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   AttachPointName;                                   // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Location;                                          // 0x0018(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               Rotation;                                          // 0x0024(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	EAttachLocation                               LocationType;                                      // 0x0030(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAutoDestroy;                                      // 0x0031(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-8 ])
	class UNiagaraComponent*                      ReturnValue;                                       // 0x0038(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter
// 0x0018 (0x0018 - 0x0000)
struct NiagaraParameterCollectionInstance_GetBoolParameter final
{
public:
	class FString                                 InVariableName;                                    // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-8 ])
};

// Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter
// 0x0020 (0x0020 - 0x0000)
struct NiagaraParameterCollectionInstance_GetColorParameter final
{
public:
	class FString                                 InVariableName;                                    // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           ReturnValue;                                       // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter
// 0x0018 (0x0018 - 0x0000)
struct NiagaraParameterCollectionInstance_GetFloatParameter final
{
public:
	class FString                                 InVariableName;                                    // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReturnValue;                                       // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-8 ])
};

// Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter
// 0x0018 (0x0018 - 0x0000)
struct NiagaraParameterCollectionInstance_GetIntParameter final
{
public:
	class FString                                 InVariableName;                                    // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-8 ])
};

// Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter
// 0x0020 (0x0020 - 0x0000)
struct NiagaraParameterCollectionInstance_GetQuatParameter final
{
public:
	class FString                                 InVariableName;                                    // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                  ReturnValue;                                       // 0x0010(0x0010)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter
// 0x0018 (0x0018 - 0x0000)
struct NiagaraParameterCollectionInstance_GetVector2DParameter final
{
public:
	class FString                                 InVariableName;                                    // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter
// 0x0020 (0x0020 - 0x0000)
struct NiagaraParameterCollectionInstance_GetVector4Parameter final
{
public:
	class FString                                 InVariableName;                                    // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                               ReturnValue;                                       // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter
// 0x0020 (0x0020 - 0x0000)
struct NiagaraParameterCollectionInstance_GetVectorParameter final
{
public:
	class FString                                 InVariableName;                                    // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                ReturnValue;                                       // 0x0010(0x000C)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-8 ])
};

// Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter
// 0x0018 (0x0018 - 0x0000)
struct NiagaraParameterCollectionInstance_SetBoolParameter final
{
public:
	class FString                                 InVariableName;                                    // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          InValue;                                           // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-8 ])
};

// Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter
// 0x0020 (0x0020 - 0x0000)
struct NiagaraParameterCollectionInstance_SetColorParameter final
{
public:
	class FString                                 InVariableName;                                    // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           InValue;                                           // 0x0010(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter
// 0x0018 (0x0018 - 0x0000)
struct NiagaraParameterCollectionInstance_SetFloatParameter final
{
public:
	class FString                                 InVariableName;                                    // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InValue;                                           // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-8 ])
};

// Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter
// 0x0018 (0x0018 - 0x0000)
struct NiagaraParameterCollectionInstance_SetIntParameter final
{
public:
	class FString                                 InVariableName;                                    // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         InValue;                                           // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-8 ])
};

// Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter
// 0x0020 (0x0020 - 0x0000)
struct NiagaraParameterCollectionInstance_SetQuatParameter final
{
public:
	class FString                                 InVariableName;                                    // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                  InValue;                                           // 0x0010(0x0010)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter
// 0x0018 (0x0018 - 0x0000)
struct NiagaraParameterCollectionInstance_SetVector2DParameter final
{
public:
	class FString                                 InVariableName;                                    // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              InValue;                                           // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter
// 0x0020 (0x0020 - 0x0000)
struct NiagaraParameterCollectionInstance_SetVector4Parameter final
{
public:
	class FString                                 InVariableName;                                    // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                               InValue;                                           // 0x0010(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter
// 0x0020 (0x0020 - 0x0000)
struct NiagaraParameterCollectionInstance_SetVectorParameter final
{
public:
	class FString                                 InVariableName;                                    // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                InValue;                                           // 0x0010(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-8 ])
};

// Function Niagara.NiagaraPreviewBase.SetLabelText
// 0x0030 (0x0030 - 0x0000)
struct NiagaraPreviewBase_SetLabelText final
{
public:
	class FText                                   InXAxisText;                                       // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                   InYAxisText;                                       // 0x0018(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraPreviewBase.SetSystem
// 0x0008 (0x0008 - 0x0000)
struct NiagaraPreviewBase_SetSystem final
{
public:
	class UNiagaraSystem*                         InSystem;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraPreviewAxis.ApplyToPreview
// 0x0020 (0x0020 - 0x0000)
struct NiagaraPreviewAxis_ApplyToPreview final
{
public:
	class UNiagaraComponent*                      PreviewComponent;                                  // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PreviewIndex;                                      // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsXAxis;                                          // 0x000C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-8 ])
	class FString                                 OutLabelText;                                      // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraPreviewAxis.Num
// 0x0004 (0x0004 - 0x0000)
struct NiagaraPreviewAxis_Num final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraPreviewGrid.ActivatePreviews
// 0x0001 (0x0001 - 0x0000)
struct NiagaraPreviewGrid_ActivatePreviews final
{
public:
	bool                                          bReset;                                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

