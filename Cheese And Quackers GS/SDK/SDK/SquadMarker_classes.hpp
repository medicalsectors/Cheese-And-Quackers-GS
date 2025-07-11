﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: SquadMarker

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SquadMarker.SquadMarker_C
// 0x0010 (0x0528 - 0x0518)
class USquadMarker_C final : public UAthenaSquadIndicator
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0518(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 burst;                                             // 0x0520(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SquadMarker(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SquadMarker_C">();
	}
	static class USquadMarker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USquadMarker_C>();
	}
};

}

