﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: CurrentReportStackingEntry

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"


namespace SDK::Params
{

// Function CurrentReportStackingEntry.CurrentReportStackingEntry_C.SetDisplayTextFields
// 0x0068 (0x0068 - 0x0000)
struct CurrentReportStackingEntry_C_SetDisplayTextFields final
{
public:
	EPlayerReportingStep                          Temp_byte_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	class FText                                   Temp_text_Variable;                                // 0x0008(0x0018)()
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0020(0x0018)()
	class FText                                   CallFunc_TextToUpper_ReturnValue_1;                // 0x0038(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0050(0x0018)()
};

// Function CurrentReportStackingEntry.CurrentReportStackingEntry_C.InitStackingEntryFields
// 0x0020 (0x0020 - 0x0000)
struct CurrentReportStackingEntry_C_InitStackingEntryFields final
{
public:
	EPlayerReportingStep                          DisplayedReportingStep;                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	class FText                                   DisplayText;                                       // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CurrentReportStackingEntry.CurrentReportStackingEntry_C.ExecuteUbergraph_CurrentReportStackingEntry
// 0x0028 (0x0028 - 0x0000)
struct CurrentReportStackingEntry_C_ExecuteUbergraph_CurrentReportStackingEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPlayerReportingStep                          K2Node_CustomEvent_DisplayedReportingStep;         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-8 ])
	class FText                                   K2Node_CustomEvent_DisplayText;                    // 0x0008(0x0018)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

