﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: FrontendItemViewSettingsManager

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FrontendItemViewSettingsManager.FrontendItemViewSettingsManager_C
// 0x0000 (0x0028 - 0x0028)
class UFrontendItemViewSettingsManager_C final : public UFortFrontendItemViewSettingsManager
{
public:
	struct FFortItemViewSettings GetItemViewSettings(const EFrontEndCamera Camera, const ESubGame GameMode, const class UFortItemDefinition* ItemDefinition) const;
	bool Is_Hero_or_Previews_on_Hero(class UFortItemDefinition* Item_Definition) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FrontendItemViewSettingsManager_C">();
	}
	static class UFrontendItemViewSettingsManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFrontendItemViewSettingsManager_C>();
	}
};

}

