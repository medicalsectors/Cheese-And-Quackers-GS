﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: PlayerSpawnPlacementActor

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PlayerSpawnPlacementActor.PlayerSpawnPlacementActor_C
// 0x0008 (0x05C8 - 0x05C0)
class APlayerSpawnPlacementActor_C final : public AFortPlacementActor
{
public:
	class UArrowComponent*                        Arrow;                                             // 0x05C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerSpawnPlacementActor_C">();
	}
	static class APlayerSpawnPlacementActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APlayerSpawnPlacementActor_C>();
	}
};

}

