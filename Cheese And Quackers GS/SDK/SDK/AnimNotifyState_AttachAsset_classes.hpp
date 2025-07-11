﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: AnimNotifyState_AttachAsset

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass AnimNotifyState_AttachAsset.AnimNotifyState_AttachAsset_C
// 0x0040 (0x0070 - 0x0030)
class UAnimNotifyState_AttachAsset_C final : public UAnimNotifyState
{
public:
	struct FAssetAttachment                       Attachment;                                        // 0x0030(0x0030)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference)
	class UAnimSequence*                          Animation;                                         // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Looping;                                           // 0x0068(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x3];                                       // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-8 ])
	float                                         PlayRate;                                          // 0x006C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation_0, float TotalDuration) const;
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation_0) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimNotifyState_AttachAsset_C">();
	}
	static class UAnimNotifyState_AttachAsset_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotifyState_AttachAsset_C>();
	}
};

}

