﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: BP_AnimNotify_CameraShake

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AnimNotify_CameraShake.BP_AnimNotify_CameraShake_C
// 0x0010 (0x0048 - 0x0038)
class UBP_AnimNotify_CameraShake_C final : public UAnimNotify
{
public:
	class UClass*                                 Shake_BP;                                          // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Shake_Scale;                                       // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECameraAnimPlaySpace                          Shake_Space;                                       // 0x0044(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AnimNotify_CameraShake_C">();
	}
	static class UBP_AnimNotify_CameraShake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AnimNotify_CameraShake_C>();
	}
};

}

