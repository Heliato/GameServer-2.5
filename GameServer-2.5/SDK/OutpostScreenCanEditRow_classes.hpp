#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OutpostScreenCanEditRow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass OutpostScreenCanEditRow.OutpostScreenCanEditRow_C
// 0x0020 (0x0238 - 0x0218)
class UOutpostScreenCanEditRow_C final  : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0218(0x0008)(Transient, DuplicateTransient)
	class UIconTextButton_C*                      CanEditButton;                                     // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AFortPlayerStateOutpost*                Player;                                            // 0x0228(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerStateOutpost*                OutpostOwner;                                      // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_OutpostScreenCanEditRow(int32 EntryPoint, bool CallFunc_GetSelected_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button);
	void BndEvt__CanEditButton_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Init(class AFortPlayerStateOutpost* InPlayer, class AFortPlayerStateOutpost* InOutpostOwner, bool CallFunc_CanEditOutpost_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void CenterWidget(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OutpostScreenCanEditRow_C">();
	}
	static class UOutpostScreenCanEditRow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOutpostScreenCanEditRow_C>();
	}
};

}

