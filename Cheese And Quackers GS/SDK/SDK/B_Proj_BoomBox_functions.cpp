﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: B_Proj_BoomBox

#include "Basic.hpp"

#include "B_Proj_BoomBox_classes.hpp"
#include "B_Proj_BoomBox_parameters.hpp"


namespace SDK
{

// Function B_Proj_BoomBox.B_Proj_BoomBox_C.ExecuteUbergraph_B_Proj_BoomBox
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Proj_BoomBox_C::ExecuteUbergraph_B_Proj_BoomBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Proj_BoomBox_C", "ExecuteUbergraph_B_Proj_BoomBox");

	Params::B_Proj_BoomBox_C_ExecuteUbergraph_B_Proj_BoomBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Proj_BoomBox.B_Proj_BoomBox_C.SpawnBGA
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void AB_Proj_BoomBox_C::SpawnBGA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Proj_BoomBox_C", "SpawnBGA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Proj_BoomBox.B_Proj_BoomBox_C.OnExploded
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const TArray<class AActor*>&            HitActors                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// const TArray<struct FHitResult>&        HitResults                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)

void AB_Proj_BoomBox_C::OnExploded(const TArray<class AActor*>& HitActors, const TArray<struct FHitResult>& HitResults)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Proj_BoomBox_C", "OnExploded");

	Params::B_Proj_BoomBox_C_OnExploded Parms{};

	Parms.HitActors = std::move(HitActors);
	Parms.HitResults = std::move(HitResults);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Proj_BoomBox.B_Proj_BoomBox_C.ReceiveHit
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              MyComp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Other                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bSelfMoved                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// const struct FVector&                   HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   HitNormal                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FHitResult&                Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_Proj_BoomBox_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Proj_BoomBox_C", "ReceiveHit");

	Params::B_Proj_BoomBox_C_ReceiveHit Parms{};

	Parms.MyComp = MyComp;
	Parms.Other = Other;
	Parms.OtherComp = OtherComp;
	Parms.bSelfMoved = bSelfMoved;
	Parms.HitLocation = std::move(HitLocation);
	Parms.HitNormal = std::move(HitNormal);
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Proj_BoomBox.B_Proj_BoomBox_C.ObjectDiedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DestroyedActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Proj_BoomBox_C::ObjectDiedEvent(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Proj_BoomBox_C", "ObjectDiedEvent");

	Params::B_Proj_BoomBox_C_ObjectDiedEvent Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Proj_BoomBox.B_Proj_BoomBox_C.BaseDiedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DamagedActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                      InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              FHitComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             BoneName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   Momentum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Proj_BoomBox_C::BaseDiedEvent(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Proj_BoomBox_C", "BaseDiedEvent");

	Params::B_Proj_BoomBox_C_BaseDiedEvent Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = std::move(HitLocation);
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = std::move(Momentum);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Proj_BoomBox.B_Proj_BoomBox_C.ExplodeOnTheBeat
// (BlueprintCallable, BlueprintEvent)

void AB_Proj_BoomBox_C::ExplodeOnTheBeat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Proj_BoomBox_C", "ExplodeOnTheBeat");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Proj_BoomBox.B_Proj_BoomBox_C.DropTheBeat
// (BlueprintCallable, BlueprintEvent)

void AB_Proj_BoomBox_C::DropTheBeat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Proj_BoomBox_C", "DropTheBeat");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Proj_BoomBox.B_Proj_BoomBox_C.OnStop
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FHitResult&                Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_Proj_BoomBox_C::OnStop(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Proj_BoomBox_C", "OnStop");

	Params::B_Proj_BoomBox_C_OnStop Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Proj_BoomBox.B_Proj_BoomBox_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Proj_BoomBox_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Proj_BoomBox_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Proj_BoomBox.B_Proj_BoomBox_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Proj_BoomBox_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Proj_BoomBox_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Proj_BoomBox.B_Proj_BoomBox_C.OnRep_bResumeSimulation
// (BlueprintCallable, BlueprintEvent)

void AB_Proj_BoomBox_C::OnRep_bResumeSimulation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Proj_BoomBox_C", "OnRep_bResumeSimulation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Proj_BoomBox.B_Proj_BoomBox_C.OnRep_b_DroppingTheBeat
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Proj_BoomBox_C::OnRep_b_DroppingTheBeat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Proj_BoomBox_C", "OnRep_b_DroppingTheBeat");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Proj_BoomBox.B_Proj_BoomBox_C.WillBounceOffTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FHitResult&                Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AB_Proj_BoomBox_C::WillBounceOffTarget(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Proj_BoomBox_C", "WillBounceOffTarget");

	Params::B_Proj_BoomBox_C_WillBounceOffTarget Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

