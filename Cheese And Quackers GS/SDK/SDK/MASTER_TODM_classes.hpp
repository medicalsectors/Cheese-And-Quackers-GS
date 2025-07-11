﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: MASTER_TODM

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass MASTER_TODM.MASTER_TODM_C
// 0x01D0 (0x0D50 - 0x0B80)
class AMASTER_TODM_C : public AFortTimeOfDayManager
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B80(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                  HeavySSAO_Postprocess;                             // 0x0B88(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                  EditorPostProcessMaterial_HackToWorkAroundTheOutlineShaderBeingInjectedByCodeAtRuntime_; // 0x0B90(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         New_Storm_Timeline_Wind_Strength_5E5E494B489306ED044096A143F228CF; // 0x0B98(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         New_Storm_Timeline_RainInt_5E5E494B489306ED044096A143F228CF; // 0x0B9C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         New_Storm_Timeline_Lightning_Modulator_5E5E494B489306ED044096A143F228CF; // 0x0BA0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         New_Storm_Timeline_Storm_Ramp_In_Value_5E5E494B489306ED044096A143F228CF; // 0x0BA4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            New_Storm_Timeline__Direction_5E5E494B489306ED044096A143F228CF; // 0x0BA8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BA9[0x7];                                      // 0x0BA9(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	class UTimelineComponent*                     New_Storm_Timeline;                                // 0x0BB0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FlashLightning_LightningColorLERP_FA5447C54EBAE729F521C3B243BEC285; // 0x0BB8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FlashLightning_lightning_alpha_FA5447C54EBAE729F521C3B243BEC285; // 0x0BBC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FlashLightning_Lightning_Intensity_FA5447C54EBAE729F521C3B243BEC285; // 0x0BC0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            FlashLightning__Direction_FA5447C54EBAE729F521C3B243BEC285; // 0x0BC4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC5[0x3];                                      // 0x0BC5(0x0003)(Fixing Size After Last Property [ Dumper-8 ])
	class UTimelineComponent*                     FlashLightning;                                    // 0x0BC8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WindSpeed;                                         // 0x0BD0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RandomWeatherWaitTime;                             // 0x0BD4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentAmountOfRandomWeatherTimeLeft;              // 0x0BD8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NewWeatherLerpAmount;                              // 0x0BDC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WindStrength;                                      // 0x0BE0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FutureWindStrength;                                // 0x0BE4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FutureWindSpeed;                                   // 0x0BE8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bPickNewWindConditions;                            // 0x0BEC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_BED[0x3];                                      // 0x0BED(0x0003)(Fixing Size After Last Property [ Dumper-8 ])
	float                                         LightningStrength;                                 // 0x0BF0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ThreatCloudStormAmount;                            // 0x0BF4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseRainWithStorms;                                 // 0x0BF8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Play_a_Particle_Effect_Near_the_players_Feet;      // 0x0BF9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          WindEffects_Should_be_Active;                      // 0x0BFA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_BFB[0x5];                                      // 0x0BFB(0x0005)(Fixing Size After Last Property [ Dumper-8 ])
	class UParticleSystemComponent*               Storm_Foot_Particle_Outdoor;                       // 0x0C00(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        Storm_Foot_Particle_While_on_Terrain;              // 0x0C08(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Storm_Foot_Particle_Indoor;                        // 0x0C10(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        Storm_Foot_Particle_While_NOT_on_Terrain;          // 0x0C18(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Storm_Wind_Strength;                               // 0x0C20(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Generate_Foliage_Wind_Gusts;                       // 0x0C24(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C25[0x3];                                      // 0x0C25(0x0003)(Fixing Size After Last Property [ Dumper-8 ])
	struct FTimerHandle                           LightningStrikeTimerHandle;                        // 0x0C28(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           PreviousDirectionalLightColor;                     // 0x0C30(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Lightning_Flash_Color;                             // 0x0C40(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Lightning_Flash_Timeline_Min;                      // 0x0C50(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Lightning_Flash_Timeline_Max;                      // 0x0C54(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SkyboxFogMorningColor;                             // 0x0C58(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SkyboxFogMorningLitColor;                          // 0x0C68(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogMorningDistance;                          // 0x0C78(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogMorningDiffuseAmount;                     // 0x0C7C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogMorningEmissiveAmount;                    // 0x0C80(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogMorningLitLength;                         // 0x0C84(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogMorningLitRotation;                       // 0x0C88(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogMorningLitOffset;                         // 0x0C8C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SkyboxFogDayColor;                                 // 0x0C90(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SkyboxFogDayLitColor;                              // 0x0CA0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogDayDistance;                              // 0x0CB0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogDayDiffuseAmount;                         // 0x0CB4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogDayEmissiveAmount;                        // 0x0CB8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogDayLitLength;                             // 0x0CBC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogDayLitRotation;                           // 0x0CC0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogDayLitOffset;                             // 0x0CC4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SkyboxFogEveningColor;                             // 0x0CC8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SkyboxFogEveningLitColor;                          // 0x0CD8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogEveningDistance;                          // 0x0CE8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogEveningDiffuseAmount;                     // 0x0CEC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogEveningEmissiveAmount;                    // 0x0CF0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogEveningLitLength;                         // 0x0CF4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogEveningLitRotation;                       // 0x0CF8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogEveningLitOffset;                         // 0x0CFC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SkyboxFogNightColor;                               // 0x0D00(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SkyboxFogNightLitColor;                            // 0x0D10(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogNightDistance;                            // 0x0D20(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogNightDiffuseAmount;                       // 0x0D24(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogNightEmissiveAmount;                      // 0x0D28(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogNightLitLength;                           // 0x0D2C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogNightLitRotation;                         // 0x0D30(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogNightLitOffset;                           // 0x0D34(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         World_Border_Cloud_Base_Color_Brightness;          // 0x0D38(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           World_Border_Cloud_Sub_Surface_Color_and_Opacity;  // 0x0D3C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EnableCometDynamicPlacement;                       // 0x0D4C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void EmptyTransform(struct FTransform* Transform);
	void SetHeavySSAO();
	void UserConstructionScript();
	void FlashLightning__FinishedFunc();
	void FlashLightning__UpdateFunc();
	void New_Storm_Timeline__FinishedFunc();
	void New_Storm_Timeline__UpdateFunc();
	void New_Storm_Timeline__FireOffRain__EventFunc();
	void StartStorm();
	void OnStormStart();
	void OnStormEnd();
	void LightningStrike();
	void ReceiveBeginPlay();
	void DisableLightAndFog(bool Enable);
	void EnableHDRRendering();
	void UpdateSSAO();
	void ExecuteUbergraph_MASTER_TODM(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MASTER_TODM_C">();
	}
	static class AMASTER_TODM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMASTER_TODM_C>();
	}
};

}

