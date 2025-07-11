﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: ClientPilot

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class ClientPilot.ClientPilotComponent
// 0x0000 (0x0028 - 0x0028)
class UClientPilotComponent : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClientPilotComponent">();
	}
	static class UClientPilotComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClientPilotComponent>();
	}
};

// Class ClientPilot.ClientPilotBlackboardManager
// 0x0008 (0x0030 - 0x0028)
class UClientPilotBlackboardManager final : public UObject
{
public:
	class UClientPilotBlackboard*                 PilotBlackboard;                                   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClientPilotBlackboardManager">();
	}
	static class UClientPilotBlackboardManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClientPilotBlackboardManager>();
	}
};

// Class ClientPilot.ClientPilotBlackboard
// 0x0050 (0x0078 - 0x0028)
class UClientPilotBlackboard : public UObject
{
public:
	uint8                                         Pad_28[0x50];                                      // 0x0028(0x0050)(Fixing Struct Size After Last Property [ Dumper-8 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClientPilotBlackboard">();
	}
	static class UClientPilotBlackboard* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClientPilotBlackboard>();
	}
};

}

