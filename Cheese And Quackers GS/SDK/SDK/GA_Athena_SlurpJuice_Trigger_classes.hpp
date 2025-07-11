﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: GA_Athena_SlurpJuice_Trigger

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_SlurpJuice_Trigger.GA_Athena_SlurpJuice_Trigger_C
// 0x0030 (0x0970 - 0x0940)
class UGA_Athena_SlurpJuice_Trigger_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0940(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         TriggerDuration;                                   // 0x0948(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94C[0x4];                                      // 0x094C(0x0004)(Fixing Size After Last Property [ Dumper-8 ])
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0950(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           ShieldPotionGameplayCue;                           // 0x0958(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                   SlurpJuiceHolster;                                 // 0x0960(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           EquippingCue;                                      // 0x0968(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void Cancelled_3F4229A2402812AB9F486AB1B9767783(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_3F4229A2402812AB9F486AB1B9767783(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void Triggered_3F4229A2402812AB9F486AB1B9767783(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_SlurpJuice_Trigger_C">();
	}
	static class UGA_Athena_SlurpJuice_Trigger_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_SlurpJuice_Trigger_C>();
	}
};

}

