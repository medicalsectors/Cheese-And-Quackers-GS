﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: JackalVehicle_Athena

#include "Basic.hpp"

#include "JackalVehicle_Athena_classes.hpp"
#include "JackalVehicle_Athena_parameters.hpp"


namespace SDK
{

// Function JackalVehicle_Athena.JackalVehicle_Athena_C.ExecuteUbergraph_JackalVehicle_Athena
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AJackalVehicle_Athena_C::ExecuteUbergraph_JackalVehicle_Athena(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JackalVehicle_Athena_C", "ExecuteUbergraph_JackalVehicle_Athena");

	Params::JackalVehicle_Athena_C_ExecuteUbergraph_JackalVehicle_Athena Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AJackalVehicle_Athena_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JackalVehicle_Athena_C", "ReceiveEndPlay");

	Params::JackalVehicle_Athena_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.HideQuickBarForSecondaryAbility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Hide                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AJackalVehicle_Athena_C::HideQuickBarForSecondaryAbility(bool Hide)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JackalVehicle_Athena_C", "HideQuickBarForSecondaryAbility");

	Params::JackalVehicle_Athena_C_HideQuickBarForSecondaryAbility Parms{};

	Parms.Hide = Hide;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnHoldExitStopped
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*                        ExitingPawn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AJackalVehicle_Athena_C::OnHoldExitStopped(class AFortPawn* ExitingPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JackalVehicle_Athena_C", "OnHoldExitStopped");

	Params::JackalVehicle_Athena_C_OnHoldExitStopped Parms{};

	Parms.ExitingPawn = ExitingPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnHoldExitStarted
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*                        ExitingPawn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const float                             ExitDuration                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AJackalVehicle_Athena_C::OnHoldExitStarted(class AFortPawn* ExitingPawn, const float ExitDuration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JackalVehicle_Athena_C", "OnHoldExitStarted");

	Params::JackalVehicle_Athena_C_OnHoldExitStarted Parms{};

	Parms.ExitingPawn = ExitingPawn;
	Parms.ExitDuration = ExitDuration;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayTagContainer&     DamageTags                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// const struct FVector&                   Momentum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FHitResult&                HitInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPawn*                        InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayEffectContextHandle&EffectContext                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void AJackalVehicle_Athena_C::OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JackalVehicle_Athena_C", "OnDeathPlayEffects");

	Params::JackalVehicle_Athena_C_OnDeathPlayEffects Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = std::move(DamageTags);
	Parms.Momentum = std::move(Momentum);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = std::move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              HitComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FHitResult&                Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AJackalVehicle_Athena_C::BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JackalVehicle_Athena_C", "BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	Params::JackalVehicle_Athena_C_BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnStopTick
// (Event, Public, BlueprintEvent)

void AJackalVehicle_Athena_C::OnStopTick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JackalVehicle_Athena_C", "OnStopTick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.ChangeOutMaterials
// (BlueprintCallable, BlueprintEvent)

void AJackalVehicle_Athena_C::ChangeOutMaterials()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JackalVehicle_Athena_C", "ChangeOutMaterials");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.K2_ApplyCosmeticWrap
// (Event, Protected, BlueprintEvent)
// Parameters:
// const class UAthenaItemWrapDefinition*  LoadedWrap                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AJackalVehicle_Athena_C::K2_ApplyCosmeticWrap(const class UAthenaItemWrapDefinition* LoadedWrap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JackalVehicle_Athena_C", "K2_ApplyCosmeticWrap");

	Params::JackalVehicle_Athena_C_K2_ApplyCosmeticWrap Parms{};

	Parms.LoadedWrap = LoadedWrap;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnIsSprintingChanged
// (Event, Protected, BlueprintEvent)

void AJackalVehicle_Athena_C::OnIsSprintingChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JackalVehicle_Athena_C", "OnIsSprintingChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.StartDriverCameraShake
// (BlueprintCallable, BlueprintEvent)

void AJackalVehicle_Athena_C::StartDriverCameraShake()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JackalVehicle_Athena_C", "StartDriverCameraShake");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.StopDriverCameraShake
// (BlueprintCallable, BlueprintEvent)

void AJackalVehicle_Athena_C::StopDriverCameraShake()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JackalVehicle_Athena_C", "StopDriverCameraShake");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.CheckWaterEvent
// (BlueprintCallable, BlueprintEvent)

void AJackalVehicle_Athena_C::CheckWaterEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JackalVehicle_Athena_C", "CheckWaterEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnExitedWaterVolume
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FVector&                   WaterSurfacePoint                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AJackalVehicle_Athena_C::OnExitedWaterVolume(const struct FVector& WaterSurfacePoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JackalVehicle_Athena_C", "OnExitedWaterVolume");

	Params::JackalVehicle_Athena_C_OnExitedWaterVolume Parms{};

	Parms.WaterSurfacePoint = std::move(WaterSurfacePoint);

	UObject::ProcessEvent(Func, &Parms);
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnEnteredWaterVolume
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FVector&                   WaterSurfacePoint                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AJackalVehicle_Athena_C::OnEnteredWaterVolume(const struct FVector& WaterSurfacePoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JackalVehicle_Athena_C", "OnEnteredWaterVolume");

	Params::JackalVehicle_Athena_C_OnEnteredWaterVolume Parms{};

	Parms.WaterSurfacePoint = std::move(WaterSurfacePoint);

	UObject::ProcessEvent(Func, &Parms);
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnCollisionHitEffects
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FVector&                   HitLocation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   HitNormalImpulse                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   HitFrictionImpulse                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   HitNormal                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           HitActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EPhysicalSurface                        HitSurfaceType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AJackalVehicle_Athena_C::OnCollisionHitEffects(const struct FVector& HitLocation, const struct FVector& HitNormalImpulse, const struct FVector& HitFrictionImpulse, const struct FVector& HitNormal, class AActor* HitActor, EPhysicalSurface HitSurfaceType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JackalVehicle_Athena_C", "OnCollisionHitEffects");

	Params::JackalVehicle_Athena_C_OnCollisionHitEffects Parms{};

	Parms.HitLocation = std::move(HitLocation);
	Parms.HitNormalImpulse = std::move(HitNormalImpulse);
	Parms.HitFrictionImpulse = std::move(HitFrictionImpulse);
	Parms.HitNormal = std::move(HitNormal);
	Parms.HitActor = HitActor;
	Parms.HitSurfaceType = HitSurfaceType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnJumped
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   Charge                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AJackalVehicle_Athena_C::OnJumped(float Charge)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JackalVehicle_Athena_C", "OnJumped");

	Params::JackalVehicle_Athena_C_OnJumped Parms{};

	Parms.Charge = Charge;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnJumpChargeEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   Charge                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AJackalVehicle_Athena_C::OnJumpChargeEnd(float Charge)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JackalVehicle_Athena_C", "OnJumpChargeEnd");

	Params::JackalVehicle_Athena_C_OnJumpChargeEnd Parms{};

	Parms.Charge = Charge;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnJumpChargeBegin
// (Event, Public, BlueprintEvent)

void AJackalVehicle_Athena_C::OnJumpChargeBegin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JackalVehicle_Athena_C", "OnJumpChargeBegin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnBoostEnd
// (Event, Public, BlueprintEvent)

void AJackalVehicle_Athena_C::OnBoostEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JackalVehicle_Athena_C", "OnBoostEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnBoostBegin
// (Event, Public, BlueprintEvent)

void AJackalVehicle_Athena_C::OnBoostBegin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JackalVehicle_Athena_C", "OnBoostBegin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AJackalVehicle_Athena_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JackalVehicle_Athena_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.SetupCosmetics
// (BlueprintCallable, BlueprintEvent)

void AJackalVehicle_Athena_C::SetupCosmetics()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JackalVehicle_Athena_C", "SetupCosmetics");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnPawnExitVehicle
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*                  PlayerPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ExitSocketName                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AJackalVehicle_Athena_C::OnPawnExitVehicle(class AFortPlayerPawn* PlayerPawn, class FName ExitSocketName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JackalVehicle_Athena_C", "OnPawnExitVehicle");

	Params::JackalVehicle_Athena_C_OnPawnExitVehicle Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.ExitSocketName = ExitSocketName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnPawnEnterVehicle
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*                  PlayerPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SeatIdx                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AJackalVehicle_Athena_C::OnPawnEnterVehicle(class AFortPlayerPawn* PlayerPawn, int32 SeatIdx)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JackalVehicle_Athena_C", "OnPawnEnterVehicle");

	Params::JackalVehicle_Athena_C_OnPawnEnterVehicle Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.SeatIdx = SeatIdx;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AJackalVehicle_Athena_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JackalVehicle_Athena_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.GetVehicleSeatActionNames
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*                  PlayerPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const ECommonInputType                  OverrideInputType                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class FName> AJackalVehicle_Athena_C::GetVehicleSeatActionNames(class AFortPlayerPawn* PlayerPawn, const ECommonInputType OverrideInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JackalVehicle_Athena_C", "GetVehicleSeatActionNames");

	Params::JackalVehicle_Athena_C_GetVehicleSeatActionNames Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.OverrideInputType = OverrideInputType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.GetVehicleSeatLabels
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*                  PlayerPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const ECommonInputType                  OverrideInputType                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class FText> AJackalVehicle_Athena_C::GetVehicleSeatLabels(class AFortPlayerPawn* PlayerPawn, const ECommonInputType OverrideInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JackalVehicle_Athena_C", "GetVehicleSeatLabels");

	Params::JackalVehicle_Athena_C_GetVehicleSeatLabels Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.OverrideInputType = OverrideInputType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.GetVehicleSeatActionLabels
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*                  PlayerPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const ECommonInputType                  OverrideInputType                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class FText> AJackalVehicle_Athena_C::GetVehicleSeatActionLabels(class AFortPlayerPawn* PlayerPawn, const ECommonInputType OverrideInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JackalVehicle_Athena_C", "GetVehicleSeatActionLabels");

	Params::JackalVehicle_Athena_C_GetVehicleSeatActionLabels Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.OverrideInputType = OverrideInputType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.DeactivateComponents
// (Public, BlueprintCallable, BlueprintEvent)

void AJackalVehicle_Athena_C::DeactivateComponents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JackalVehicle_Athena_C", "DeactivateComponents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.CurrentBoostCharge
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                                  Charge_Value                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AJackalVehicle_Athena_C::CurrentBoostCharge(float* Charge_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JackalVehicle_Athena_C", "CurrentBoostCharge");

	Params::JackalVehicle_Athena_C_CurrentBoostCharge Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Charge_Value != nullptr)
		*Charge_Value = Parms.Charge_Value;
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.IsBoostCharging
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                                   Is_Charging                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AJackalVehicle_Athena_C::IsBoostCharging(bool* Is_Charging)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JackalVehicle_Athena_C", "IsBoostCharging");

	Params::JackalVehicle_Athena_C_IsBoostCharging Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Is_Charging != nullptr)
		*Is_Charging = Parms.Is_Charging;
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.HapticsOnHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   HitMagnitude                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AJackalVehicle_Athena_C::HapticsOnHit(float HitMagnitude)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JackalVehicle_Athena_C", "HapticsOnHit");

	Params::JackalVehicle_Athena_C_HapticsOnHit Parms{};

	Parms.HitMagnitude = HitMagnitude;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.SendDamageValueToMaterials
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   ParameterValue                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AJackalVehicle_Athena_C::SendDamageValueToMaterials(float ParameterValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JackalVehicle_Athena_C", "SendDamageValueToMaterials");

	Params::JackalVehicle_Athena_C_SendDamageValueToMaterials Parms{};

	Parms.ParameterValue = ParameterValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.SendHeadlightValueToMaterials
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   ParameterValue                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AJackalVehicle_Athena_C::SendHeadlightValueToMaterials(float ParameterValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JackalVehicle_Athena_C", "SendHeadlightValueToMaterials");

	Params::JackalVehicle_Athena_C_SendHeadlightValueToMaterials Parms{};

	Parms.ParameterValue = ParameterValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.SendBoostTimeToMaterials
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   ParameterValue                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AJackalVehicle_Athena_C::SendBoostTimeToMaterials(float ParameterValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JackalVehicle_Athena_C", "SendBoostTimeToMaterials");

	Params::JackalVehicle_Athena_C_SendBoostTimeToMaterials Parms{};

	Parms.ParameterValue = ParameterValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.UpdateSurfaceType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPhysicalSurface                        Surface                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32*                                  Output                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AJackalVehicle_Athena_C::UpdateSurfaceType(EPhysicalSurface Surface, int32* Output)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JackalVehicle_Athena_C", "UpdateSurfaceType");

	Params::JackalVehicle_Athena_C_UpdateSurfaceType Parms{};

	Parms.Surface = Surface;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = Parms.Output;
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.DestroyBuildingPiece
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingActor*                   BuildingActor                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DestroyThreshold                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AJackalVehicle_Athena_C::DestroyBuildingPiece(class ABuildingActor* BuildingActor, float DestroyThreshold)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JackalVehicle_Athena_C", "DestroyBuildingPiece");

	Params::JackalVehicle_Athena_C_DestroyBuildingPiece Parms{};

	Parms.BuildingActor = BuildingActor;
	Parms.DestroyThreshold = DestroyThreshold;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.ShouldDestroyProp?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// const struct FVector&                   HitNormal                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AJackalVehicle_Athena_C::ShouldDestroyProp_(const struct FVector& HitNormal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JackalVehicle_Athena_C", "ShouldDestroyProp?");

	Params::JackalVehicle_Athena_C_ShouldDestroyProp_ Parms{};

	Parms.HitNormal = std::move(HitNormal);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.ShouldBump
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// const struct FVector&                   Hit_Normal                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*                  PlayerPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                                   Bump                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AJackalVehicle_Athena_C::ShouldBump(const struct FVector& Hit_Normal, class AFortPlayerPawn* PlayerPawn, bool* Bump)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JackalVehicle_Athena_C", "ShouldBump");

	Params::JackalVehicle_Athena_C_ShouldBump Parms{};

	Parms.Hit_Normal = std::move(Hit_Normal);
	Parms.PlayerPawn = PlayerPawn;

	UObject::ProcessEvent(Func, &Parms);

	if (Bump != nullptr)
		*Bump = Parms.Bump;
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.GetMaxAudibleDistance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                                  Max_Distance                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AJackalVehicle_Athena_C::GetMaxAudibleDistance(float* Max_Distance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JackalVehicle_Athena_C", "GetMaxAudibleDistance");

	Params::JackalVehicle_Athena_C_GetMaxAudibleDistance Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Max_Distance != nullptr)
		*Max_Distance = Parms.Max_Distance;
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.GetIconPlacement
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                           SelfActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           ViewingActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector*                         OutLocation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector*                         OutExtents                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AJackalVehicle_Athena_C::GetIconPlacement(class AActor* SelfActor, class AActor* ViewingActor, struct FVector* OutLocation, struct FVector* OutExtents) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JackalVehicle_Athena_C", "GetIconPlacement");

	Params::JackalVehicle_Athena_C_GetIconPlacement Parms{};

	Parms.SelfActor = SelfActor;
	Parms.ViewingActor = ViewingActor;

	UObject::ProcessEvent(Func, &Parms);

	if (OutLocation != nullptr)
		*OutLocation = std::move(Parms.OutLocation);

	if (OutExtents != nullptr)
		*OutExtents = std::move(Parms.OutExtents);
}

}

