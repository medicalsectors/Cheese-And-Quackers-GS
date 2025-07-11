﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: ControlRig

#include "Basic.hpp"

#include "AnimGraphRuntime_classes.hpp"
#include "ControlRig_structs.hpp"
#include "MovieScene_structs.hpp"
#include "MovieScene_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "MovieSceneTracks_classes.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "LevelSequence_classes.hpp"


namespace SDK
{

// Class ControlRig.ControlRigObjectHolder
// 0x0010 (0x0038 - 0x0028)
class UControlRigObjectHolder final : public UObject
{
public:
	TArray<class UObject*>                        Objects;                                           // 0x0028(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ControlRigObjectHolder">();
	}
	static class UControlRigObjectHolder* GetDefaultObj()
	{
		return GetDefaultObjImpl<UControlRigObjectHolder>();
	}
};

// Class ControlRig.ControlRig
// 0x0150 (0x0178 - 0x0028)
class UControlRig final : public UObject
{
public:
	uint8                                         Pad_28[0x14];                                      // 0x0028(0x0014)(Fixing Size After Last Property [ Dumper-8 ])
	ERigExecutionType                             ExecutionType;                                     // 0x003C(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-8 ])
	struct FRigHierarchyContainer                 Hierarchy;                                         // 0x0040(0x00C0)(Edit, DisableEditOnInstance, EditConst, NativeAccessSpecifierPrivate)
	TArray<struct FControlRigOperator>            Operators;                                         // 0x0100(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                         Pad_110[0x68];                                     // 0x0110(0x0068)(Fixing Struct Size After Last Property [ Dumper-8 ])

public:
	void SetGlobalTransform(const class FName BoneName, const struct FTransform& InTransform);

	float GetDeltaTime() const;
	struct FTransform GetGlobalTransform(const class FName BoneName) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ControlRig">();
	}
	static class UControlRig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UControlRig>();
	}
};

// Class ControlRig.ControlRigSequence
// 0x0058 (0x04F0 - 0x0498)
class UControlRigSequence final : public ULevelSequence
{
public:
	TSoftObjectPtr<class UAnimSequence>           LastExportedToAnimationSequence;                   // 0x0498(0x0028)(AssetRegistrySearchable, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>           LastExportedUsingSkeletalMesh;                     // 0x04C0(0x0028)(AssetRegistrySearchable, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LastExportedFrameRate;                             // 0x04E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4EC[0x4];                                      // 0x04EC(0x0004)(Fixing Struct Size After Last Property [ Dumper-8 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ControlRigSequence">();
	}
	static class UControlRigSequence* GetDefaultObj()
	{
		return GetDefaultObjImpl<UControlRigSequence>();
	}
};

// Class ControlRig.ControlRigControl
// 0x0050 (0x0290 - 0x0240)
#pragma pack(push, 0x1)
class alignas(0x10) AControlRigControl : public AActor
{
public:
	class FString                                 PropertyPath;                                      // 0x0240(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                             Transform;                                         // 0x0250(0x0030)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         bEnabled : 1;                                      // 0x0280(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bSelected : 1;                                     // 0x0280(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bHovered : 1;                                      // 0x0280(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bManipulating : 1;                                 // 0x0280(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_281[0x7];                                      // 0x0281(0x0007)(Fixing Struct Size After Last Property [ Dumper-8 ])

public:
	void OnEnabledChanged(bool bIsEnabled);
	void OnHoveredChanged(bool bIsSelected);
	void OnManipulatingChanged(bool bIsManipulating);
	void OnSelectionChanged(bool bIsSelected);
	void OnTransformChanged(const struct FTransform& NewTransform);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ControlRigControl">();
	}
	static class AControlRigControl* GetDefaultObj()
	{
		return GetDefaultObjImpl<AControlRigControl>();
	}
};
#pragma pack(pop)

// Class ControlRig.ControlRigBindingTrack
// 0x0000 (0x0078 - 0x0078)
class UControlRigBindingTrack final : public UMovieSceneSpawnTrack
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ControlRigBindingTrack">();
	}
	static class UControlRigBindingTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UControlRigBindingTrack>();
	}
};

// Class ControlRig.ControlRigBlueprintGeneratedClass
// 0x0010 (0x02F0 - 0x02E0)
class UControlRigBlueprintGeneratedClass final : public UBlueprintGeneratedClass
{
public:
	TArray<struct FControlRigOperator>            Operators;                                         // 0x02E0(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ControlRigBlueprintGeneratedClass">();
	}
	static class UControlRigBlueprintGeneratedClass* GetDefaultObj()
	{
		return GetDefaultObjImpl<UControlRigBlueprintGeneratedClass>();
	}
};

// Class ControlRig.ControlRigComponent
// 0x0048 (0x0120 - 0x00D8)
class UControlRigComponent final : public UActorComponent
{
public:
	TMulticastInlineDelegate<void(class UControlRigComponent* Component)> OnPreInitializeDelegate;   // 0x00D8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(class UControlRigComponent* Component)> OnPostInitializeDelegate;  // 0x00E8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(class UControlRigComponent* Component)> OnPreEvaluateDelegate;     // 0x00F8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(class UControlRigComponent* Component)> OnPostEvaluateDelegate;    // 0x0108(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UControlRig*                            ControlRig;                                        // 0x0118(0x0008)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnPostEvaluate();
	void OnPostInitialize();
	void OnPreEvaluate();
	void OnPreInitialize();

	class UControlRig* BP_GetControlRig() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ControlRigComponent">();
	}
	static class UControlRigComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UControlRigComponent>();
	}
};

// Class ControlRig.ControlRigLibrary
// 0x0000 (0x0028 - 0x0028)
class UControlRigLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ControlRigLibrary">();
	}
	static class UControlRigLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UControlRigLibrary>();
	}
};

// Class ControlRig.ControlRigSequencerAnimInstance
// 0x0000 (0x0270 - 0x0270)
class UControlRigSequencerAnimInstance final : public UAnimSequencerInstance
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ControlRigSequencerAnimInstance">();
	}
	static class UControlRigSequencerAnimInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UControlRigSequencerAnimInstance>();
	}
};

// Class ControlRig.ControlRigStaticMeshControl
// 0x0010 (0x02A0 - 0x0290)
class AControlRigStaticMeshControl final : public AControlRigControl
{
public:
	class USceneComponent*                        Scene;                                             // 0x0288(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                   Mesh;                                              // 0x0290(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_298[0x8];                                      // 0x0298(0x0008)(Fixing Struct Size After Last Property [ Dumper-8 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ControlRigStaticMeshControl">();
	}
	static class AControlRigStaticMeshControl* GetDefaultObj()
	{
		return GetDefaultObjImpl<AControlRigStaticMeshControl>();
	}
};

// Class ControlRig.MovieSceneControlRigSection
// 0x00B8 (0x0208 - 0x0150)
class UMovieSceneControlRigSection final : public UMovieSceneSubSection
{
public:
	bool                                          bAdditive;                                         // 0x0150(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bApplyBoneFilter;                                  // 0x0151(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_152[0x6];                                      // 0x0152(0x0006)(Fixing Size After Last Property [ Dumper-8 ])
	struct FInputBlendPose                        BoneFilter;                                        // 0x0158(0x0010)(Edit, NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                Weight;                                            // 0x0168(0x00A0)(NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneControlRigSection">();
	}
	static class UMovieSceneControlRigSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneControlRigSection>();
	}
};

// Class ControlRig.MovieSceneControlRigTrack
// 0x0000 (0x0068 - 0x0068)
class UMovieSceneControlRigTrack final : public UMovieSceneSubTrack
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneControlRigTrack">();
	}
	static class UMovieSceneControlRigTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneControlRigTrack>();
	}
};

}

