﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: ReplicationGraph

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// ScriptStruct ReplicationGraph.AlwaysRelevantActorInfo
// 0x0018 (0x0018 - 0x0000)
struct FAlwaysRelevantActorInfo final
{
public:
	class UNetConnection*                         Connection;                                        // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 LastViewer;                                        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 LastViewTarget;                                    // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct ReplicationGraph.ConnectionAlwaysRelevantNodePair
// 0x0010 (0x0010 - 0x0000)
struct FConnectionAlwaysRelevantNodePair final
{
public:
	class UNetConnection*                         NetConnection;                                     // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UReplicationGraphNode_AlwaysRelevant_ForConnection* Node;                                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct ReplicationGraph.LastLocationGatherInfo
// 0x0018 (0x0018 - 0x0000)
struct FLastLocationGatherInfo final
{
public:
	class UNetConnection*                         Connection;                                        // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                LastLocation;                                      // 0x0008(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-8 ])
};

// ScriptStruct ReplicationGraph.TearOffActorInfo
// 0x0018 (0x0018 - 0x0000)
struct FTearOffActorInfo final
{
public:
	uint8                                         Pad_0[0x8];                                        // 0x0000(0x0008)(Fixing Size After Last Property [ Dumper-8 ])
	class AActor*                                 Actor;                                             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_10[0x8];                                       // 0x0010(0x0008)(Fixing Struct Size After Last Property [ Dumper-8 ])
};

}

