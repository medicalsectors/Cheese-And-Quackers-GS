﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: PBWA_S1_Solid

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass PBWA_S1_Solid.PBWA_S1_Solid_C
// 0x0028 (0x0C70 - 0x0C48)
class APBWA_S1_Solid_C final : public ABuildingWall
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0C48(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         GnomeWallChance;                                   // 0x0C50(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         GnomeWallMax;                                      // 0x0C54(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Gnomed;                                            // 0x0C58(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C59[0x7];                                      // 0x0C59(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	class UMaterialInstanceConstant*              GnomeMaterial;                                     // 0x0C60(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            GnomeWall;                                         // 0x0C68(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PBWA_S1_Solid(int32 EntryPoint);
	void ReceiveBeginPlay();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PBWA_S1_Solid_C">();
	}
	static class APBWA_S1_Solid_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APBWA_S1_Solid_C>();
	}
};

}

