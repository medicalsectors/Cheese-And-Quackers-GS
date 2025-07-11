﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: ScoreStatRowWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ScoreStatRowWidget.ScoreStatRowWidget_C
// 0x0018 (0x0260 - 0x0248)
class UScoreStatRowWidget_C final : public UAthenaProfileStatWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0248(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                       StatName;                                          // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                StatValue;                                         // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void OnStatChanged();
	void ExecuteUbergraph_ScoreStatRowWidget(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ScoreStatRowWidget_C">();
	}
	static class UScoreStatRowWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UScoreStatRowWidget_C>();
	}
};

}

