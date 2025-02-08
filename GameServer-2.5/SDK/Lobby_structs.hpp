#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lobby

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// Enum Lobby.ELobbyBeaconJoinState
// NumValues: 0x0004
enum class ELobbyBeaconJoinState : uint8
{
	None                                     = 0,
	SentJoinRequest                          = 1,
	JoinRequestAcknowledged                  = 2,
	ELobbyBeaconJoinState_MAX                = 3,
};

// ScriptStruct Lobby.LobbyPlayerStateActorInfo
// 0x000C (0x0018 - 0x000C)
struct FLobbyPlayerStateActorInfo final  : public FFastArraySerializerItem
{
public:
	uint8                                         Pad_E92[0x4];                                      // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ALobbyBeaconPlayerState*                LobbyPlayerState;                                  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Lobby.LobbyPlayerStateInfoArray
// 0x0018 (0x00C8 - 0x00B0)
struct FLobbyPlayerStateInfoArray final  : public FFastArraySerializer
{
public:
	TArray<struct FLobbyPlayerStateActorInfo>     Players;                                           // 0x00B0(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class ALobbyBeaconState*                      ParentState;                                       // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

}

