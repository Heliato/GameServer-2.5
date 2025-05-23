#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Announce_HeadshotStreak_5x

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Announce_HeadshotStreak_5x.Announce_HeadshotStreak_5x_C
// 0x0010 (0x0470 - 0x0460)
class AAnnounce_HeadshotStreak_5x_C final  : public AFortClientAnnouncement_Basic
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0460(0x0008)(Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0468(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Announce_HeadshotStreak_5x(int32 EntryPoint);
	void OnClientAnnouncementStart();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Announce_HeadshotStreak_5x_C">();
	}
	static class AAnnounce_HeadshotStreak_5x_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAnnounce_HeadshotStreak_5x_C>();
	}
};

}

