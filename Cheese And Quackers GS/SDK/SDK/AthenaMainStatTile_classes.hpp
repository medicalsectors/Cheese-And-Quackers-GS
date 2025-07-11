﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: AthenaMainStatTile

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaMainStatTile.AthenaMainStatTile_C
// 0x0008 (0x0258 - 0x0250)
class UAthenaMainStatTile_C final : public UFortProfileStatsMainTile
{
public:
	class UImage*                                 Glow;                                              // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetStatValue(const class FText& StatValueAsText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaMainStatTile_C">();
	}
	static class UAthenaMainStatTile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaMainStatTile_C>();
	}
};

}

