﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: WebLogin

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WebLogin.WebLogin_C
// 0x0028 (0x0350 - 0x0328)
class UWebLogin_C final : public UFortWebLoginWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0328(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCircularThrobber*                      Throbber;                                          // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                WebContent;                                        // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    BackAction;                                        // 0x0340(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void DisplayWidget(class UWidget* WebWidget);
	void DismissWidget();
	void ExecuteUbergraph_WebLogin(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WebLogin_C">();
	}
	static class UWebLogin_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWebLogin_C>();
	}
};

}

