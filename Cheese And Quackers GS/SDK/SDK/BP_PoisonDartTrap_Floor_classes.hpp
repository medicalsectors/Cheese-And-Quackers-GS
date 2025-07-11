﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: BP_PoisonDartTrap_Floor

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PoisonDartTrap_Floor.BP_PoisonDartTrap_Floor_C
// 0x0070 (0x0CD8 - 0x0C68)
class ABP_PoisonDartTrap_Floor_C : public ABuildingTrapFloor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0C68(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Trigger;                                           // 0x0C70(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0C78(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Place_Trap_Sound;                                  // 0x0C80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Trap_Active_Sound;                                 // 0x0C88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Trap_Explode_Sound;                                // 0x0C90(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Trap_Fire_Sound;                                   // 0x0C98(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     FriendlyTrapMaterial;                              // 0x0CA0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     NormalTrapMaterial;                                // 0x0CA8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bPlayFewerSounds;                                  // 0x0CB0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_CB1[0x7];                                      // 0x0CB1(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	TArray<class FName>                           MuzzleSockets;                                     // 0x0CB8(0x0010)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	float                                         Timespan_of_Jiggle;                                // 0x0CC8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Vector_of_Jiggle;                                  // 0x0CCC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_PoisonDartTrap_Floor(int32 EntryPoint);
	void Jiggle(const struct FVector& Vector);
	void MuzzleFire(class FName Socket_Name);
	void OnInitTeam();
	void OnWorldReady();
	void OnOutOfDurability();
	void GameplayCue_Abilities_Activation_Traps_ActivateTrap(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void OnFinishedBuilding();
	void OnPlaced();
	void OnReloadEnd();
	void _ChangeToFriendlyMaterial();
	void ChangeToNormalMaterial();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PoisonDartTrap_Floor_C">();
	}
	static class ABP_PoisonDartTrap_Floor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PoisonDartTrap_Floor_C>();
	}
};

}

