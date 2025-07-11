﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: B_Prj_Athena_IceGrenade

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "B_Prj_ThrownConsumable_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Prj_Athena_IceGrenade.B_Prj_Athena_IceGrenade_C
// 0x0078 (0x07D8 - 0x0760)
class AB_Prj_Athena_IceGrenade_C final : public AB_Prj_ThrownConsumable_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_Prj_Athena_IceGrenade_C;          // 0x0760(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        Audio_InAirLoop;                                   // 0x0768(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        BeepTimer2;                                        // 0x0770(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Timer_Particle;                                    // 0x0778(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        BeepTimer;                                         // 0x0780(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitLocation;                                       // 0x0788(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_794[0x4];                                      // 0x0794(0x0004)(Fixing Size After Last Property [ Dumper-8 ])
	class AFortPawn*                              Target;                                            // 0x0798(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitNormal;                                         // 0x07A0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7AC[0x4];                                      // 0x07AC(0x0004)(Fixing Size After Last Property [ Dumper-8 ])
	class AEnemyPawn_Parent_C*                    DeimosPawn;                                        // 0x07B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   BackendName;                                       // 0x07B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    ObjStat;                                           // 0x07C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UFortQuestItemDefinition*               QuestDefinition;                                   // 0x07D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_Prj_Athena_IceGrenade(int32 EntryPoint);
	void BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
	void OnTouched(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FHitResult& HitResult, bool bIsOverlap);
	void LaunchDeimos();
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Handle_Pawn_Detach_RC();
	void QuestUpdate(class APawn* PlayerPawn);
	void OnExploded(const TArray<class AActor*>& HitActors, const TArray<struct FHitResult>& HitResults);
	void OnStop(const struct FHitResult& Hit);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Prj_Athena_IceGrenade_C">();
	}
	static class AB_Prj_Athena_IceGrenade_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Prj_Athena_IceGrenade_C>();
	}
};

}

