﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: B_Prj_Athena_Grenade_Base

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C
// 0x0088 (0x0758 - 0x06D0)
class AB_Prj_Athena_Grenade_Base_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortCollisionAudioComponent*           FortCollisionAudio;                                // 0x06D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URotatingMovementComponent*             RotatingMovement;                                  // 0x06E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Fuse_Particle;                                     // 0x06E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Mesh;                                              // 0x06F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        GrenadeFuse_AudioComponent;                        // 0x06F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Effect_Distance;                                   // 0x0700(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        P_Explosion;                                       // 0x0708(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Cue_ExplosionSound;                                // 0x0710(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumberOfBouncesTillExplode;                        // 0x0718(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentNumberOfBounces;                            // 0x071C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Cue_GrenadeFuseSound;                              // 0x0720(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BouncePawnAgainstPawnGravityScale;                 // 0x0728(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72C[0x4];                                      // 0x072C(0x0004)(Fixing Size After Last Property [ Dumper-8 ])
	class UForceFeedbackEffect*                   ExplosionForceFeedbackNear;                        // 0x0730(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                   ExplosionForceFeedbackFar;                         // 0x0738(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Cue_Bounce;                                        // 0x0740(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 ExplosionCameraShake;                              // 0x0748(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FuseTime;                                          // 0x0750(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ExplosionRadius;                                   // 0x0754(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_Prj_Athena_Grenade_Base(int32 EntryPoint);
	void OnResumeSimulation();
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ReceiveAnyDamage(float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void ReceiveBeginPlay();
	void OnStop(const struct FHitResult& Hit);
	void Stop_Rotation();
	void OnBounce(const struct FHitResult& Hit);
	void OnExploded(const TArray<class AActor*>& HitActors, const TArray<struct FHitResult>& HitResults);
	void UserConstructionScript();
	void FuseEnded();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Prj_Athena_Grenade_Base_C">();
	}
	static class AB_Prj_Athena_Grenade_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Prj_Athena_Grenade_Base_C>();
	}
};

}

