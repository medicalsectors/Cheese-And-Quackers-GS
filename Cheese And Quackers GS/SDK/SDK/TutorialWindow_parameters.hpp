﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: TutorialWindow

#include "Basic.hpp"


namespace SDK::Params
{

// Function TutorialWindow.TutorialWindow_C.SetDescription
// 0x0018 (0x0018 - 0x0000)
struct TutorialWindow_C_SetDescription final
{
public:
	class FText                                   Description_0;                                     // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TutorialWindow.TutorialWindow_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct TutorialWindow_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TutorialWindow.TutorialWindow_C.ExecuteUbergraph_TutorialWindow
// 0x0010 (0x0010 - 0x0000)
struct TutorialWindow_C_ExecuteUbergraph_TutorialWindow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-8 ])
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

