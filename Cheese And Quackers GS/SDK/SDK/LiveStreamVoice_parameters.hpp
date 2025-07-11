﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: LiveStreamVoice

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function LiveStreamVoice.LiveStreamVoiceSubsystem.EnableLocalVoiceProcessing
// 0x0002 (0x0002 - 0x0000)
struct LiveStreamVoiceSubsystem_EnableLocalVoiceProcessing final
{
public:
	uint8                                         LocalUserNum;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnable;                                           // 0x0001(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LiveStreamVoice.LiveStreamVoiceSubsystem.SetVoiceSettings
// 0x0018 (0x0018 - 0x0000)
struct LiveStreamVoiceSubsystem_SetVoiceSettings final
{
public:
	struct FVoiceSettings                         InSettings;                                        // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

}

