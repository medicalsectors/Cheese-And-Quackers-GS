﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: BP_ProjectileTrajectory_ExplosiveBow

#include "Basic.hpp"

#include "BP_ProjectileTrajectory_ExplosiveBow_classes.hpp"
#include "BP_ProjectileTrajectory_ExplosiveBow_parameters.hpp"


namespace SDK
{

// Function BP_ProjectileTrajectory_ExplosiveBow.BP_ProjectileTrajectory_ExplosiveBow_C.ExecuteUbergraph_BP_ProjectileTrajectory_ExplosiveBow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileTrajectory_ExplosiveBow_C::ExecuteUbergraph_BP_ProjectileTrajectory_ExplosiveBow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ProjectileTrajectory_ExplosiveBow_C", "ExecuteUbergraph_BP_ProjectileTrajectory_ExplosiveBow");

	Params::BP_ProjectileTrajectory_ExplosiveBow_C_ExecuteUbergraph_BP_ProjectileTrajectory_ExplosiveBow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ProjectileTrajectory_ExplosiveBow.BP_ProjectileTrajectory_ExplosiveBow_C.Pulse
// (BlueprintCallable, BlueprintEvent)

void ABP_ProjectileTrajectory_ExplosiveBow_C::Pulse()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ProjectileTrajectory_ExplosiveBow_C", "Pulse");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ProjectileTrajectory_ExplosiveBow.BP_ProjectileTrajectory_ExplosiveBow_C.SetTrajectoryFromNative
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const TArray<struct FVector>&           SplinePoints                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// const TArray<struct FVector>&           SplineTangents                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_ProjectileTrajectory_ExplosiveBow_C::SetTrajectoryFromNative(const TArray<struct FVector>& SplinePoints, const TArray<struct FVector>& SplineTangents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ProjectileTrajectory_ExplosiveBow_C", "SetTrajectoryFromNative");

	Params::BP_ProjectileTrajectory_ExplosiveBow_C_SetTrajectoryFromNative Parms{};

	Parms.SplinePoints = std::move(SplinePoints);
	Parms.SplineTangents = std::move(SplineTangents);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ProjectileTrajectory_ExplosiveBow.BP_ProjectileTrajectory_ExplosiveBow_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ProjectileTrajectory_ExplosiveBow_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ProjectileTrajectory_ExplosiveBow_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ProjectileTrajectory_ExplosiveBow.BP_ProjectileTrajectory_ExplosiveBow_C.SetTrajectorySpline
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>&                 SplinePoints                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>&                 SplineTangents                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_ProjectileTrajectory_ExplosiveBow_C::SetTrajectorySpline(TArray<struct FVector>& SplinePoints, TArray<struct FVector>& SplineTangents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ProjectileTrajectory_ExplosiveBow_C", "SetTrajectorySpline");

	Params::BP_ProjectileTrajectory_ExplosiveBow_C_SetTrajectorySpline Parms{};

	Parms.SplinePoints = std::move(SplinePoints);
	Parms.SplineTangents = std::move(SplineTangents);

	UObject::ProcessEvent(Func, &Parms);

	SplinePoints = std::move(Parms.SplinePoints);
	SplineTangents = std::move(Parms.SplineTangents);
}


// Function BP_ProjectileTrajectory_ExplosiveBow.BP_ProjectileTrajectory_ExplosiveBow_C.UpdateFromTrajectoryOwner
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ProjectileTrajectory_ExplosiveBow_C::UpdateFromTrajectoryOwner()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ProjectileTrajectory_ExplosiveBow_C", "UpdateFromTrajectoryOwner");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ProjectileTrajectory_ExplosiveBow.BP_ProjectileTrajectory_ExplosiveBow_C.SetShouldUpdateFromOwner
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ShouldUpdate                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          Owner_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Interval                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileTrajectory_ExplosiveBow_C::SetShouldUpdateFromOwner(bool ShouldUpdate, class UObject* Owner_0, float Interval)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ProjectileTrajectory_ExplosiveBow_C", "SetShouldUpdateFromOwner");

	Params::BP_ProjectileTrajectory_ExplosiveBow_C_SetShouldUpdateFromOwner Parms{};

	Parms.ShouldUpdate = ShouldUpdate;
	Parms.Owner_0 = Owner_0;
	Parms.Interval = Interval;

	UObject::ProcessEvent(Func, &Parms);
}

}

