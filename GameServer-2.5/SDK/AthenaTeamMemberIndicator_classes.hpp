#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaTeamMemberIndicator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C
// 0x0020 (0x0298 - 0x0278)
class UAthenaTeamMemberIndicator_C final  : public UAthenaPlayerIndicatorBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(Transient, DuplicateTransient)
	class UAthenaTeamMemberDBNOState_C*           DBNOIndicator;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PlayerName;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         Team_Member_Index;                                 // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaTeamMemberIndicator(int32 EntryPoint, const class FString& K2Node_Event_PlayerName, class FText CallFunc_Conv_StringToText_ReturnValue, bool K2Node_Event_bDBNO, bool K2Node_Event_bTalking, float CallFunc_SelectFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue, bool K2Node_Event_bReviving);
	void PlayerNameChanged(const class FString& Param_PlayerName);
	void BeingRevivedStateChanged(bool bReviving);
	void TalkingStateChanged(bool bTalking);
	void DBNOStateChanged(bool bDBNO);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaTeamMemberIndicator_C">();
	}
	static class UAthenaTeamMemberIndicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaTeamMemberIndicator_C>();
	}
};

}

