﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: B_Perk_C_Constructor_BASE

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "StructRecyclingResource_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Perk_C_Constructor_BASE.B_Perk_C_Constructor_BASE_C
// 0x0648 (0x14C8 - 0x0E80)
class AB_Perk_C_Constructor_BASE_C final : public AFortConstructorBASE
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0E80(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        Workbench_Ticking;                                 // 0x0E88(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        BoomBoxLocation;                                   // 0x0E90(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        BaseEnergyComponentC;                              // 0x0E98(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        BaseEnergyComponentB;                              // 0x0EA0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        BaseEnergyComponentA;                              // 0x0EA8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_FeeltheBase_Chargup;                             // 0x0EB0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        FeelTheBaseTraceLocation;                          // 0x0EB8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x0EC0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Capsule;                                           // 0x0EC8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere_Collision_For_Anim;                         // 0x0ED0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SK_Base_Device;                                    // 0x0ED8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortMiniMapComponent*                  FortMiniMap1;                                      // 0x0EE0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0EE8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             MiniMapIcon;                                       // 0x0EF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Minimap_View_Distance;                             // 0x0EF8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EFC[0x4];                                      // 0x0EFC(0x0004)(Fixing Size After Last Property [ Dumper-8 ])
	struct FGameplayTagContainer                  TC_Recycling;                                      // 0x0F00(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         ConnectedWood;                                     // 0x0F20(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ConnectedStone;                                    // 0x0F24(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ConnectedMetal;                                    // 0x0F28(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F2C[0x4];                                      // 0x0F2C(0x0004)(Fixing Size After Last Property [ Dumper-8 ])
	class UFortWorldItemDefinition*               Wood;                                              // 0x0F30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWorldItemDefinition*               Stone;                                             // 0x0F38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWorldItemDefinition*               Metal;                                             // 0x0F40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SpawnWood;                                         // 0x0F48(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          SpawnStone;                                        // 0x0F49(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          SpawnMetal;                                        // 0x0F4A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F4B[0x1];                                      // 0x0F4B(0x0001)(Fixing Size After Last Property [ Dumper-8 ])
	int32                                         SpawnMax;                                          // 0x0F4C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HyperThreadingMultiplier;                          // 0x0F50(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F54[0x4];                                      // 0x0F54(0x0004)(Fixing Size After Last Property [ Dumper-8 ])
	struct FGameplayTagContainer                  TC_PowerModulation_T01;                            // 0x0F58(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_PowerModulation_T01;                            // 0x0F78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DefensiveIntegrationLevel;                         // 0x0F80(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F84[0x4];                                      // 0x0F84(0x0004)(Fixing Size After Last Property [ Dumper-8 ])
	class UClass*                                 GE_LoftyArchitecture;                              // 0x0F88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_LoftyArchitecture_T01;                          // 0x0F90(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          BaseIsPlaced;                                      // 0x0FB0(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                         Pad_FB1[0x3];                                      // 0x0FB1(0x0003)(Fixing Size After Last Property [ Dumper-8 ])
	int32                                         NumPlayersNearBase;                                // 0x0FB4(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BasePowerLevel;                                    // 0x0FB8(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TotalResourcesSpawned;                             // 0x0FBC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ResourceLimit;                                     // 0x0FC0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FC4[0x4];                                      // 0x0FC4(0x0004)(Fixing Size After Last Property [ Dumper-8 ])
	struct FGameplayTagContainer                  TC_FrozenCastle_T01;                               // 0x0FC8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_FrozenCastle;                                   // 0x0FE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_ContainmentUnit;                                // 0x0FF0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_Grant_TriggerReflectDamage_FromBASEWall;        // 0x1010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_BASEMD_T01;                                     // 0x1018(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FStructRecyclingResource               StoredWood;                                        // 0x1038(0x0010)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStructRecyclingResource               StoredStone;                                       // 0x1048(0x0010)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStructRecyclingResource               StoredMetal;                                       // 0x1058(0x0010)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HyperthreadingResourceLimit;                       // 0x1068(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_106C[0x4];                                     // 0x106C(0x0004)(Fixing Size After Last Property [ Dumper-8 ])
	class UAbilitySystemComponent*                ConstructorAbilitySystemComponent;                 // 0x1070(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_OutgoingHealAmp;                                // 0x1078(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Effect_Mesh_Comp;                                  // 0x1080(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>             Inner_MIDs_Friendly;                               // 0x1088(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                         Transition_Start_Delay;                            // 0x1098(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_109C[0x4];                                     // 0x109C(0x0004)(Fixing Size After Last Property [ Dumper-8 ])
	TArray<class UMaterialInterface*>             Outer_MIDs_Friendly;                               // 0x10A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_MegaBASE;                                       // 0x10B0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_BASEMD_T01;                                     // 0x10D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_FullyContained;                                 // 0x10D8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          InitialStaticMeshAnimationIsComplete;              // 0x10F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_10F9[0x7];                                     // 0x10F9(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	class USoundBase*                             SoundResourcesCreated;                             // 0x1100(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SoundResourcesCollected;                           // 0x1108(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMeshComponent*>           EffectMeshArray;                                   // 0x1110(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class ABuildingSMActor*>               BuildingActorArray;                                // 0x1120(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                         DelayBeforeShowingMeshes;                          // 0x1130(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DelayDisabled;                                     // 0x1134(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1135[0x3];                                     // 0x1135(0x0003)(Fixing Size After Last Property [ Dumper-8 ])
	struct FTimerHandle                           DelayedMeshedTimer;                                // 0x1138(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_TrapDamage;                                     // 0x1140(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_SuperchargedTraps;                              // 0x1148(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_TrapReloadRate;                                 // 0x1168(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_TrapReloadRate;                                 // 0x1188(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_Constructor_BASEOutgoingDamageMod;              // 0x1190(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RecyclingTimer;                                    // 0x1198(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_119C[0x4];                                     // 0x119C(0x0004)(Fixing Size After Last Property [ Dumper-8 ])
	class UClass*                                 GE_FeelTheBase;                                    // 0x11A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerPawn_Constructor_C*              ConstructorPawn;                                   // 0x11A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               FeelTheBasePowerLevel1;                            // 0x11B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               FeelTheBasePowerLevel2;                            // 0x11B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               FeelTheBasePowerLevel3;                            // 0x11C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             EnergyBuildASound;                                 // 0x11C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             EnergyBuildBSound;                                 // 0x11D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             EnergyBuildCSound;                                 // 0x11D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             EnergyStageTransitionSound;                        // 0x11E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsPlayingLoopA;                                   // 0x11E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11E9[0x7];                                     // 0x11E9(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	struct FGameplayTagContainer                  TC_MegaBASE_T01;                                   // 0x11F0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_MegaBASE_T02;                                   // 0x1210(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         MegaBASE_AdditionalNodes_T01;                      // 0x1230(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         MegaBASE_AdditionalNodes_T02;                      // 0x1250(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_Recycling_T01;                                  // 0x1270(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_ElectrifiedFloors_T01;                          // 0x1290(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_ElectrifiedFloors_T01;                          // 0x12B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           TC_FullyContained_T01;                             // 0x12B8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          NewHeroSystem;                                     // 0x12C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12C1[0x7];                                     // 0x12C1(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	class UClass*                                 GE_FullyContained_T01;                             // 0x12C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NoAddedNodes;                                      // 0x12D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12D4[0x4];                                     // 0x12D4(0x0004)(Fixing Size After Last Property [ Dumper-8 ])
	struct FGameplayTagContainer                  TC_FeelTheBASE_T01;                                // 0x12D8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_PowerModulation_T02;                            // 0x12F8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_Power_Modulation_T02;                           // 0x1318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         RecyclingMultiplier;                               // 0x1320(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         T1Amount;                                          // 0x1340(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         T2Amount;                                          // 0x1360(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         T3Amount;                                          // 0x1380(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         MaximumResourceSpawned;                            // 0x13A0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         MaximumResourceLimit;                              // 0x13C0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_Grant_Trigger_FreezeOnHit;                      // 0x13E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_FrozenCastle_T02;                               // 0x13E8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_BOOMBASE_T01;                                   // 0x1408(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          BOOMBase;                                          // 0x1428(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          BaseIsPlaceWBOOMBASE;                              // 0x1429(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                         Pad_142A[0x6];                                     // 0x142A(0x0006)(Fixing Size After Last Property [ Dumper-8 ])
	struct FScalableFloat                         BASEDefaultNodes;                                  // 0x1430(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_BASEMD_T02;                                     // 0x1450(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_BASEMD_T02;                                     // 0x1470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_LoftyArchitecture_T02;                          // 0x1478(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_LoftyArchitecture_T02;                          // 0x1498(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_ElectrifiedFloors_T02;                          // 0x14A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_ElectrifiedFloors_T02;                          // 0x14A8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_B_Perk_C_Constructor_BASE(int32 EntryPoint);
	void BndEvt__P_FeeltheBase_Chargup_K2Node_ComponentBoundEvent_0_ParticleBurstSignature__DelegateSignature(class FName EventName, float EmitterTime, int32 ParticleCount);
	void ResetFeelTheBaseGlow();
	void FeelTheBaseGlow(bool Stack1, bool Stack2, bool Stack3);
	void SaveOwner(class APlayerPawn_Constructor_C* ConstructorPawn_0);
	void ApplyTrapEffects();
	void ShowHiddenMeshes();
	void BaseIsReadyToAnimate();
	void ResourcesCollected();
	void ResourcesCreated();
	void BlueprintOnInteract(const class AFortPawn* InteractingPawn);
	void StopBuildingActorVisuals(class ABuildingSMActor* BuildingActor, class UStaticMeshComponent* EffectMeshComp);
	void StartBuildingActorVisuals(class ABuildingSMActor* BuildingActor, class UStaticMeshComponent* EffectMeshComp);
	void AnimateLegs(bool LegsUp);
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_267_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Recycling();
	void OnPlaced(class UAbilitySystemComponent* InstigatorAbilitySystemComponent);
	void SetupBaseDefaultValues(class UAbilitySystemComponent* Ability_System_Component, int32* NodesToAffect_0);
	void Setup_Base_Effect_Array(class UAbilitySystemComponent* Instigator_Ability_System, TArray<struct FBASEGameplayEffect>* BASEBuildingEffects, TArray<struct FBASEGameplayEffect>* BASEFriendlyEffects, TArray<struct FBASEGameplayEffect>* BASEHostileEffects);
	void SetupBuildingEffects(class UAbilitySystemComponent* AbilitySystemComponent_0, TArray<struct FBASEGameplayEffect>* BuildingEffects);
	void SetupFriendlyEffects(class UAbilitySystemComponent* AbilitySystemComponent_0, TArray<struct FBASEGameplayEffect>* FriendlyEffects);
	void SetupHostileEffects(class UAbilitySystemComponent* AbilitySystemComponent_0, TArray<struct FBASEGameplayEffect>* HostileEffects);
	void RecycleResources();
	void OnRep_BaseIsPlaced();
	void SpawnResourceForRecycling(class UFortWorldItemDefinition* ItemDefinition, int32 AmountToSpawn, EFortResourceType ResourceType_0);
	void AddResourceToStack(const struct FStructRecyclingResource& RecyclingResource, class UFortWorldItemDefinition* Stored_Resource, int32 AmountToSpawn, struct FStructRecyclingResource* SetValue);
	void OnRep_CollectResources();
	void SetDamageMultiplier();
	void SetBaseVisualGlow(class UAbilitySystemComponent* AbilitySystemComponent_0);
	void BaseSelfApplyGameplaySpec(const struct FGameplayEffectSpecHandle& GE_Spec);
	void OnRep_InitialStaticMeshAnimationIsComplete();
	void GetTrapGEFromTag(const struct FGameplayTagContainer& InTag, class UClass** OutGE);
	void SetupTrapEffects(class UAbilitySystemComponent* AbilityComponent);
	void SetHealingMultiplier();
	void SpawnResourceWithAmount(class UFortWorldItemDefinition* ItemDefinition, int32 AmountToSpawn, EFortResourceType ResourceType_0);
	void GetFeelTheBaseTraceLocation(struct FTransform* TraceLocation);
	void UpdateAudioCrossfade(class USoundBase* Sound);
	void OnRep_BaseIsPlaceWBOOMBASE();

	bool BlueprintCanInteract(const class AFortPawn* InteractingPawn) const;
	class FText BlueprintGetInteractionString(const class AFortPawn* InteractingPawn) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Perk_C_Constructor_BASE_C">();
	}
	static class AB_Perk_C_Constructor_BASE_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Perk_C_Constructor_BASE_C>();
	}
};

}

