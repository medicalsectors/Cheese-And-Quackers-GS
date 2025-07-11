﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: B_AthenaPlayerMarker_WithCustomization

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function B_AthenaPlayerMarker_WithCustomization.B_AthenaPlayerMarker_WithCustomization_C.OnLoaded_8A042AD24DC8A8C0E9D8E0B4BF3B6C37
// 0x0008 (0x0008 - 0x0000)
struct B_AthenaPlayerMarker_WithCustomization_C_OnLoaded_8A042AD24DC8A8C0E9D8E0B4BF3B6C37 final
{
public:
	class UClass*                                 Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function B_AthenaPlayerMarker_WithCustomization.B_AthenaPlayerMarker_WithCustomization_C.ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization
// 0x0190 (0x0190 - 0x0000)
struct B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-8 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortWorldMarkerData                   K2Node_Event_MarkerData;                           // 0x0018(0x0100)(ConstParm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_119[0x7];                                      // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	class UClass*                                 Temp_class_Variable;                               // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsFort_Map_Marker_Topper_Actor; // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_132[0x6];                                      // 0x0132(0x0006)(Fixing Size After Last Property [ Dumper-8 ])
	class UClass*                                 CallFunc_Conv_SoftClassReferenceToClass_ReturnValue; // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsFort_Map_Marker_Topper_Actor_1; // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess_1;                // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x014A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14B[0x5];                                      // 0x014B(0x0005)(Fixing Size After Last Property [ Dumper-8 ])
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue_1;      // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ClassClass_ReturnValue;          // 0x0159(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15A[0x6];                                      // 0x015A(0x0006)(Fixing Size After Last Property [ Dumper-8 ])
	class UClass*                                 K2Node_CustomEvent_Loaded;                         // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortMapMarkerTopperActor*              CallFunc_FinishSpawningActor_ReturnValue;          // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_179[0x3];                                      // 0x0179(0x0003)(Fixing Size After Last Property [ Dumper-8 ])
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate;         // 0x017C(0x0010)(ZeroConstructor, NoDestructor)
};

// Function B_AthenaPlayerMarker_WithCustomization.B_AthenaPlayerMarker_WithCustomization_C.OnSetupMarker
// 0x0100 (0x0100 - 0x0000)
struct B_AthenaPlayerMarker_WithCustomization_C_OnSetupMarker final
{
public:
	struct FFortWorldMarkerData                   MarkerData_0;                                      // 0x0000(0x0100)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

}

