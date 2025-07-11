﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: GA_Athena_ShockGrenade_RemoveFX

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_ShockGrenade_RemoveFX.GA_Athena_ShockGrenade_RemoveFX_C
// 0x0028 (0x0968 - 0x0940)
class UGA_Athena_ShockGrenade_RemoveFX_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0940(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0948(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Looping_GC;                                        // 0x0950(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Player_Landing_GC;                                 // 0x0958(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           VehicleOnGroundTimer;                              // 0x0960(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Athena_ShockGrenade_RemoveFX(int32 EntryPoint);
	void VehicleLandedCheck();
	void K2_ActivateAbility();
	void OnChange_4AD3DFC14DFECA79ED54A7B53F3A9E7E(EMovementMode NewMovementMode);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_ShockGrenade_RemoveFX_C">();
	}
	static class UGA_Athena_ShockGrenade_RemoveFX_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_ShockGrenade_RemoveFX_C>();
	}
};

}

