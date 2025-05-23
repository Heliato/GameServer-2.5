#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAT_TriggeredAbility

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAT_TriggeredAbility.GAT_TriggeredAbility_C
// 0x0010 (0x0AC0 - 0x0AB0)
class UGAT_TriggeredAbility_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AB0(0x0008)(Transient, DuplicateTransient)
	struct FGameplayTag                           TC_AbilitiesGenericTriggeredAbilityActivate;       // 0x0AB8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GAT_TriggeredAbility(int32 EntryPoint, struct FGameplayEventData& K2Node_Event_EventData);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAT_TriggeredAbility_C">();
	}
	static class UGAT_TriggeredAbility_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAT_TriggeredAbility_C>();
	}
};

}

