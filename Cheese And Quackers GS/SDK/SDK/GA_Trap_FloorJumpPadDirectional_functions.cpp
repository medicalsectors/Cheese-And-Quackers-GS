﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: GA_Trap_FloorJumpPadDirectional

#include "Basic.hpp"

#include "GA_Trap_FloorJumpPadDirectional_classes.hpp"
#include "GA_Trap_FloorJumpPadDirectional_parameters.hpp"


namespace SDK
{

// Function GA_Trap_FloorJumpPadDirectional.GA_Trap_FloorJumpPadDirectional_C.ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Trap_FloorJumpPadDirectional_C::ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Trap_FloorJumpPadDirectional_C", "ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional");

	Params::GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Trap_FloorJumpPadDirectional.GA_Trap_FloorJumpPadDirectional_C.Cancelled_9399FB2A485BD9AC6632A4B347C4BBE0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayAbilityTargetDataHandle&TargetData_0                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// const struct FGameplayTag&              ApplicationTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Trap_FloorJumpPadDirectional_C::Cancelled_9399FB2A485BD9AC6632A4B347C4BBE0(const struct FGameplayAbilityTargetDataHandle& TargetData_0, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Trap_FloorJumpPadDirectional_C", "Cancelled_9399FB2A485BD9AC6632A4B347C4BBE0");

	Params::GA_Trap_FloorJumpPadDirectional_C_Cancelled_9399FB2A485BD9AC6632A4B347C4BBE0 Parms{};

	Parms.TargetData_0 = std::move(TargetData_0);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Trap_FloorJumpPadDirectional.GA_Trap_FloorJumpPadDirectional_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Trap_FloorJumpPadDirectional_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Trap_FloorJumpPadDirectional_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Trap_FloorJumpPadDirectional.GA_Trap_FloorJumpPadDirectional_C.PlayPlayerFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*                  Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FTransform&                TrapTransform                                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

void UGA_Trap_FloorJumpPadDirectional_C::PlayPlayerFX(class AFortPlayerPawn* Player, const struct FTransform& TrapTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Trap_FloorJumpPadDirectional_C", "PlayPlayerFX");

	Params::GA_Trap_FloorJumpPadDirectional_C_PlayPlayerFX Parms{};

	Parms.Player = Player;
	Parms.TrapTransform = std::move(TrapTransform);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Trap_FloorJumpPadDirectional.GA_Trap_FloorJumpPadDirectional_C.Targeted_9399FB2A485BD9AC6632A4B347C4BBE0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayAbilityTargetDataHandle&TargetData_0                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// const struct FGameplayTag&              ApplicationTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Trap_FloorJumpPadDirectional_C::Targeted_9399FB2A485BD9AC6632A4B347C4BBE0(const struct FGameplayAbilityTargetDataHandle& TargetData_0, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Trap_FloorJumpPadDirectional_C", "Targeted_9399FB2A485BD9AC6632A4B347C4BBE0");

	Params::GA_Trap_FloorJumpPadDirectional_C_Targeted_9399FB2A485BD9AC6632A4B347C4BBE0 Parms{};

	Parms.TargetData_0 = std::move(TargetData_0);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}

}

