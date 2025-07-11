﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: Trap_Floor_BouncePad

#include "Basic.hpp"

#include "Trap_Floor_BouncePad_classes.hpp"
#include "Trap_Floor_BouncePad_parameters.hpp"


namespace SDK
{

// Function Trap_Floor_BouncePad.Trap_Floor_BouncePad_C.ExecuteUbergraph_Trap_Floor_BouncePad
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrap_Floor_BouncePad_C::ExecuteUbergraph_Trap_Floor_BouncePad(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_BouncePad_C", "ExecuteUbergraph_Trap_Floor_BouncePad");

	Params::Trap_Floor_BouncePad_C_ExecuteUbergraph_Trap_Floor_BouncePad Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Trap_Floor_BouncePad.Trap_Floor_BouncePad_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATrap_Floor_BouncePad_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_BouncePad_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Floor_BouncePad.Trap_Floor_BouncePad_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ATrap_Floor_BouncePad_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_BouncePad_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Floor_BouncePad.Trap_Floor_BouncePad_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGameplayCueEvent                       EventType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayCueParameters&    Parameters                                             (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void ATrap_Floor_BouncePad_C::GameplayCue_Abilities_Activation_Traps_ActivateTrap(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_BouncePad_C", "GameplayCue.Abilities.Activation.Traps.ActivateTrap");

	Params::Trap_Floor_BouncePad_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap Parms{};

	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Trap_Floor_BouncePad.Trap_Floor_BouncePad_C.OnFinishedBuilding
// (Event, Public, BlueprintEvent)

void ATrap_Floor_BouncePad_C::OnFinishedBuilding()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_BouncePad_C", "OnFinishedBuilding");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Floor_BouncePad.Trap_Floor_BouncePad_C.OnPlaced
// (Event, Public, BlueprintEvent)

void ATrap_Floor_BouncePad_C::OnPlaced()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_BouncePad_C", "OnPlaced");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Floor_BouncePad.Trap_Floor_BouncePad_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATrap_Floor_BouncePad_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_BouncePad_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Floor_BouncePad.Trap_Floor_BouncePad_C.PlayerLaunch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*                  Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrap_Floor_BouncePad_C::PlayerLaunch(class AFortPlayerPawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_BouncePad_C", "PlayerLaunch");

	Params::Trap_Floor_BouncePad_C_PlayerLaunch Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Trap_Floor_BouncePad.Trap_Floor_BouncePad_C.VehicleLaunch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortAthenaVehicle*               Vehicle                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrap_Floor_BouncePad_C::VehicleLaunch(class AFortAthenaVehicle* Vehicle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_BouncePad_C", "VehicleLaunch");

	Params::Trap_Floor_BouncePad_C_VehicleLaunch Parms{};

	Parms.Vehicle = Vehicle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Trap_Floor_BouncePad.Trap_Floor_BouncePad_C.OnRep_Overlappedactor
// (BlueprintCallable, BlueprintEvent)

void ATrap_Floor_BouncePad_C::OnRep_Overlappedactor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_BouncePad_C", "OnRep_Overlappedactor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Floor_BouncePad.Trap_Floor_BouncePad_C.PlayerApplyGameplayEffects
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATrap_Floor_BouncePad_C::PlayerApplyGameplayEffects()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_BouncePad_C", "PlayerApplyGameplayEffects");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Floor_BouncePad.Trap_Floor_BouncePad_C.DeimosLaunch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEnemyPawn_Parent_C*              DeimosPawn_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrap_Floor_BouncePad_C::DeimosLaunch(class AEnemyPawn_Parent_C* DeimosPawn_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_BouncePad_C", "DeimosLaunch");

	Params::Trap_Floor_BouncePad_C_DeimosLaunch Parms{};

	Parms.DeimosPawn_0 = DeimosPawn_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Trap_Floor_BouncePad.Trap_Floor_BouncePad_C.DeimosApplyGameplayEffects
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATrap_Floor_BouncePad_C::DeimosApplyGameplayEffects()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_BouncePad_C", "DeimosApplyGameplayEffects");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Floor_BouncePad.Trap_Floor_BouncePad_C.BP_OnTrigger
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const TArray<class AActor*>&            TouchingActors                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                                   bOutConsumeEvent                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATrap_Floor_BouncePad_C::BP_OnTrigger(const TArray<class AActor*>& TouchingActors, bool* bOutConsumeEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_BouncePad_C", "BP_OnTrigger");

	Params::Trap_Floor_BouncePad_C_BP_OnTrigger Parms{};

	Parms.TouchingActors = std::move(TouchingActors);

	UObject::ProcessEvent(Func, &Parms);

	if (bOutConsumeEvent != nullptr)
		*bOutConsumeEvent = Parms.bOutConsumeEvent;
}

}

