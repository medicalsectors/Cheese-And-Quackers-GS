﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: PlayerPawn_Athena_Generic

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "PlayerPawn_Athena_Generic_Parent_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C
// 0x02E0 (0x2D40 - 0x2A60)
#pragma pack(push, 0x1)
class alignas(0x10) APlayerPawn_Athena_Generic_C : public APlayerPawn_Athena_Generic_Parent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_PlayerPawn_Athena_Generic_C;        // 0x2A60(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               Effect_WaterInteraction_FX;                        // 0x2A68(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               AnimTrailPS;                                       // 0x2A70(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               HitDamageParticles;                                // 0x2A78(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 ScreenEffect_PlayerHealthDamageDirection;          // 0x2A80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 ScreenEffect_PlayerHealthDamage;                   // 0x2A88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 ScreenEffect_PlayerShieldDamageDirection;          // 0x2A90(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 ScreenEffect_PlayerShieldDamage;                   // 0x2A98(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanSpawnDustLandFX_;                               // 0x2AA0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsInWater;                                         // 0x2AA1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2AA2[0x2];                                     // 0x2AA2(0x0002)(Fixing Size After Last Property [ Dumper-8 ])
	struct FRotator                               RunWalkParticleRotation;                           // 0x2AA4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                  GameplayTagsForHitByHuskMeleeSound;                // 0x2AB0(0x0020)(Edit, BlueprintVisible)
	int32                                         WaterCounter;                                      // 0x2AD0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Tick_Delta_Seconds;                                // 0x2AD4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Sound_Shield_Impact;                               // 0x2AD8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Sound_Shield_Destroyed;                            // 0x2AE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Sound_Shield_FullyCharged;                         // 0x2AE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Sound_Shield_StartRecharge;                        // 0x2AF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_GameplayCueDamageShielded;                      // 0x2AF8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          LatestDamageIsShieldDamage;                        // 0x2B18(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B19[0x3];                                     // 0x2B19(0x0003)(Fixing Size After Last Property [ Dumper-8 ])
	float                                         Damage_Taken;                                      // 0x2B1C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Last_Shield_Damage_Time;                           // 0x2B20(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BodyValid;                                         // 0x2B24(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          BackpackValid;                                     // 0x2B25(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          HatValid;                                          // 0x2B26(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          FaceValid;                                         // 0x2B27(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CharmValid;                                        // 0x2B28(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          HeadValid;                                         // 0x2B29(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B2A[0x6];                                     // 0x2B2A(0x0006)(Fixing Size After Last Property [ Dumper-8 ])
	class UParticleSystem*                        Effect_Player_LandedDust;                          // 0x2B30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>       TempArray;                                         // 0x2B38(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USceneComponent*                        Sound_Player_Hit;                                  // 0x2B48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                   DamageForceFeedback;                               // 0x2B50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        Effect_Player_Landed_WindVector_P;                 // 0x2B58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 SpeechBubbleWidgetClass;                           // 0x2B60(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   LastSpeechText;                                    // 0x2B68(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 DamageCameraShake;                                 // 0x2B80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseAnimTrailsNotifies;                             // 0x2B88(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B89[0x3];                                     // 0x2B89(0x0003)(Fixing Size After Last Property [ Dumper-8 ])
	float                                         Time_when_you_ll_be_able_to_splash_again;          // 0x2B8C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CurrentWaterMeshActor;                             // 0x2B90(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             WaterTraceHitLocation;                             // 0x2B98(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                StableVelocityVector;                              // 0x2C20(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C2C[0x4];                                     // 0x2C2C(0x0004)(Fixing Size After Last Property [ Dumper-8 ])
	class UParticleSystem*                        PlayerRunTemplate_Ground;                          // 0x2C30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        PlayerWalkTemplate_Ground;                         // 0x2C38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        PlayerRunTemplate_Water;                           // 0x2C40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        PlayerWalkTemplate_Water;                          // 0x2C48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                          Pawn_Charm_Skeletal_Mesh;                          // 0x2C50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               AnimTrailsPS_Ref;                                  // 0x2C58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     WeaponMaterialOverride;                            // 0x2C60(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TickWaterLevel;                                    // 0x2C68(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C69[0x7];                                     // 0x2C69(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	class UTextureRenderTarget2D*                 WetnessDepthTexture;                               // 0x2C70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               WaterLevelMID;                                     // 0x2C78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               WaterDecayMID;                                     // 0x2C80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Was_RTT_Enabled_Var_Set;                           // 0x2C88(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Is_RTT_Enabled;                                    // 0x2C89(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C8A[0x2];                                     // 0x2C8A(0x0002)(Fixing Size After Last Property [ Dumper-8 ])
	float                                         StartingMinCapsuleShadowVis;                       // 0x2C8C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsShielded;                                        // 0x2C90(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C91[0x3];                                     // 0x2C91(0x0003)(Fixing Size After Last Property [ Dumper-8 ])
	float                                         InstigatorCheckDistanceSqrd;                       // 0x2C94(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SlideDustActivateSpeed;                            // 0x2C98(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanSpawnSlideKickupFX_;                            // 0x2C9C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C9D[0x3];                                     // 0x2C9D(0x0003)(Fixing Size After Last Property [ Dumper-8 ])
	class UParticleSystem*                        Effect_Player_ShieldActivate;                      // 0x2CA0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        Effect_PLayer_ShieldBreak;                         // 0x2CA8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          GhostMode;                                         // 0x2CB0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2CB1[0x7];                                     // 0x2CB1(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	class UParticleSystemComponent*               OverrideAnimTrail;                                 // 0x2CB8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(bool bActive)>  AnimNotify_Begin;                                  // 0x2CC0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              AnimNotify_End;                                    // 0x2CD0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsInFrontendHologram;                             // 0x2CE0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2CE1[0x7];                                     // 0x2CE1(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	class USoundBase*                             Sound_Shield_Destroyed_2D;                         // 0x2CE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  PoisonDartGETag;                                   // 0x2CF0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                             Sound_Shield_Destroyed_Crit_2D;                    // 0x2D10(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  DogSweaterDamageGETag;                             // 0x2D18(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_PlayerPawn_Athena_Generic(int32 EntryPoint);
	void GameplayCue_Loop_Shadow_Bomb(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Shield_Reapplied(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Shield_Destroyed(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Damage_Shielded(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Shield_PotionConsumed(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_SpookyMist_Loop(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void AnimTrailsDisable();
	void AnimTrailsSetup(class UParticleSystem* ParticleSystemReference, class FName FirstSocketName, class FName SecondSocketName, float Width, class UParticleSystemComponent* OverrideParticleComp, class FName OverideFirstSocketName, class FName OverideSecondSocketName);
	void AnimTrailsNotify(bool bActive);
	void BindOnDestroyed();
	void CharacterDestroyed(class AActor* DestroyedActor);
	void Entered_WaterVolume();
	void OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void ReceiveDestroyed();
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void OnCharacterPartsReinitialized();
	void FootStepRight();
	void FootStepLeft();
	void OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void OnLanded(const struct FHitResult& Hit);
	void OnDamagePlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void MeleeSwingLeft_End();
	void MeleeSwingRight_End();
	void MeleeSwingLeft();
	void MeleeSwingRight();
	void UserConstructionScript();
	void Create_and_Duplicate_Effect_Skeletal_Meshes_Parent(EFortCustomPartType BodyType, class USkeletalMeshComponent*& DuplicatedSkeletalMeshComponent, class UMaterialInterface* Material_to_Apply, TArray<class UMaterialInstanceDynamic*>& Empty_MID_Array, int32 TranslucentSortPriority);
	void SlaveAMeshToTheBody(class USkeletalMeshComponent* Mesh_0, class USkeletalMeshComponent* Master);
	void Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh(EFortCustomPartType BodyType, class UMaterialInterface* Material_to_Apply, TArray<class UMaterialInstanceDynamic*>& Empty_MID_Array, int32 TranslucentSortPriority, class UPoseableMeshComponent*& PoseableMesh);
	void DisableWaterLevelTick();
	void Are_the_wind_and_water_RTT_passes_enabled(bool* NewParam);
	void GetHitPoint_FXLocation(class AActor* Object, struct FVector* OutputLocation);
	void ReInitFrontendPetDisplay();
	void PlayShieldDestroyedSound(const struct FGameplayCueParameters& GameplayCueParameters);
	void Melee_Effect_Color(struct FVector* Melee_Color_Set);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerPawn_Athena_Generic_C">();
	}
	static class APlayerPawn_Athena_Generic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APlayerPawn_Athena_Generic_C>();
	}
};
#pragma pack(pop)

}

