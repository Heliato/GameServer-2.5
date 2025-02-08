#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_DefaultPlayer_BuildingCreated

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_DefaultPlayer_BuildingCreated.GA_DefaultPlayer_BuildingCreated_C
// 0x0008 (0x0AB8 - 0x0AB0)
class UGA_DefaultPlayer_BuildingCreated_C final  : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AB0(0x0008)(Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_DefaultPlayer_BuildingCreated(int32 EntryPoint, struct FGameplayEventData& K2Node_Event_EventData, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_ApplyGameplayEffectContainer_ReturnValue);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_DefaultPlayer_BuildingCreated_C">();
	}
	static class UGA_DefaultPlayer_BuildingCreated_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_DefaultPlayer_BuildingCreated_C>();
	}
};

}

