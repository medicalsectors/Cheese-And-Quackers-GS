﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: B_MountedCannonAthena

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "B_Ranged_GenericMountedCannon_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_MountedCannonAthena.B_MountedCannonAthena_C
// 0x0010 (0x0DD0 - 0x0DC0)
class AB_MountedCannonAthena_C : public AB_Ranged_GenericMountedCannon_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_MountedCannonAthena_C;            // 0x0DC0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               P_FiringDelay;                                     // 0x0DC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_MountedCannonAthena(int32 EntryPoint);
	void OnFinishedCooling();
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_MountedCannonAthena_C">();
	}
	static class AB_MountedCannonAthena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_MountedCannonAthena_C>();
	}
};

}

