﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: B_ExplosiveBow_Athena

#include "Basic.hpp"

#include "B_ExplosiveBow_Athena_classes.hpp"
#include "B_ExplosiveBow_Athena_parameters.hpp"


namespace SDK
{

// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.ExecuteUbergraph_B_ExplosiveBow_Athena
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ExplosiveBow_Athena_C::ExecuteUbergraph_B_ExplosiveBow_Athena(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ExplosiveBow_Athena_C", "ExecuteUbergraph_B_ExplosiveBow_Athena");

	Params::B_ExplosiveBow_Athena_C_ExecuteUbergraph_B_ExplosiveBow_Athena Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.OnReachedMaxCharge
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void AB_ExplosiveBow_Athena_C::OnReachedMaxCharge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ExplosiveBow_Athena_C", "OnReachedMaxCharge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ExplosiveBow_Athena_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ExplosiveBow_Athena_C", "ReceiveTick");

	Params::B_ExplosiveBow_Athena_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.IncreaseDrawStrength
// (BlueprintCallable, BlueprintEvent)

void AB_ExplosiveBow_Athena_C::IncreaseDrawStrength()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ExplosiveBow_Athena_C", "IncreaseDrawStrength");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.ResetCharge
// (BlueprintCallable, BlueprintEvent)

void AB_ExplosiveBow_Athena_C::ResetCharge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ExplosiveBow_Athena_C", "ResetCharge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.OnEndCharge
// (Event, Protected, BlueprintEvent)

void AB_ExplosiveBow_Athena_C::OnEndCharge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ExplosiveBow_Athena_C", "OnEndCharge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.OnChargeUp
// (Event, Protected, BlueprintEvent)

void AB_ExplosiveBow_Athena_C::OnChargeUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ExplosiveBow_Athena_C", "OnChargeUp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.OnChargeDown
// (Event, Protected, BlueprintEvent)

void AB_ExplosiveBow_Athena_C::OnChargeDown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ExplosiveBow_Athena_C", "OnChargeDown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.EndOfCharge
// (BlueprintCallable, BlueprintEvent)

void AB_ExplosiveBow_Athena_C::EndOfCharge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ExplosiveBow_Athena_C", "EndOfCharge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.OnStartCharge
// (Event, Protected, BlueprintEvent)

void AB_ExplosiveBow_Athena_C::OnStartCharge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ExplosiveBow_Athena_C", "OnStartCharge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.OnReachedMinCharge
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void AB_ExplosiveBow_Athena_C::OnReachedMinCharge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ExplosiveBow_Athena_C", "OnReachedMinCharge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.SetupTrajectoryProjectile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_ExplosiveBow_Athena_C::SetupTrajectoryProjectile()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ExplosiveBow_Athena_C", "SetupTrajectoryProjectile");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.SetDummyVariables
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_ExplosiveBow_Athena_C::SetDummyVariables()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ExplosiveBow_Athena_C", "SetDummyVariables");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.CalculateTrajectorySpline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_ExplosiveBow_Athena_C::CalculateTrajectorySpline()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ExplosiveBow_Athena_C", "CalculateTrajectorySpline");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.StartDrawAudio
// (Public, BlueprintCallable, BlueprintEvent)

void AB_ExplosiveBow_Athena_C::StartDrawAudio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ExplosiveBow_Athena_C", "StartDrawAudio");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.StopDrawAudio
// (Public, BlueprintCallable, BlueprintEvent)

void AB_ExplosiveBow_Athena_C::StopDrawAudio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ExplosiveBow_Athena_C", "StopDrawAudio");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.OnWeaponAttached
// (Event, Public, BlueprintEvent)

void AB_ExplosiveBow_Athena_C::OnWeaponAttached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ExplosiveBow_Athena_C", "OnWeaponAttached");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.K2_OnUnEquip
// (Event, Public, BlueprintEvent)

void AB_ExplosiveBow_Athena_C::K2_OnUnEquip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ExplosiveBow_Athena_C", "K2_OnUnEquip");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.OnPlayWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bPersistentFire                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bSecondaryFire                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_ExplosiveBow_Athena_C::OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ExplosiveBow_Athena_C", "OnPlayWeaponFireFX");

	Params::B_ExplosiveBow_Athena_C_OnPlayWeaponFireFX Parms{};

	Parms.bPersistentFire = bPersistentFire;
	Parms.bSecondaryFire = bSecondaryFire;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.CalculateVelocity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float*                                  Velocity                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ExplosiveBow_Athena_C::CalculateVelocity(float* Velocity) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ExplosiveBow_Athena_C", "CalculateVelocity");

	Params::B_ExplosiveBow_Athena_C_CalculateVelocity Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Velocity != nullptr)
		*Velocity = Parms.Velocity;
}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.SetupProjectileVariables
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector*                         StartLocation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector*                         InitialVelocity                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                                  ProjectileVelocity_0                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator*                        OutRotation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_ExplosiveBow_Athena_C::SetupProjectileVariables(struct FVector* StartLocation, struct FVector* InitialVelocity, float* ProjectileVelocity_0, struct FRotator* OutRotation) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ExplosiveBow_Athena_C", "SetupProjectileVariables");

	Params::B_ExplosiveBow_Athena_C_SetupProjectileVariables Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (StartLocation != nullptr)
		*StartLocation = std::move(Parms.StartLocation);

	if (InitialVelocity != nullptr)
		*InitialVelocity = std::move(Parms.InitialVelocity);

	if (ProjectileVelocity_0 != nullptr)
		*ProjectileVelocity_0 = Parms.ProjectileVelocity_0;

	if (OutRotation != nullptr)
		*OutRotation = std::move(Parms.OutRotation);
}

}

