#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WebLogin

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WebLogin.WebLogin_C
// 0x0038 (0x03F8 - 0x03C0)
class UWebLogin_C final  : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03C0(0x0008)(Transient, DuplicateTransient)
	class UCircularThrobber*                      Throbber;                                          // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                WebContent;                                        // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    BackAction;                                        // 0x03D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	UMulticastDelegateProperty_                   OnLoginDialogDismissed;                            // 0x03E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BindDelegates();
	void Dismiss();
	void Display(class UWidget* WebWidget, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void ExecuteUbergraph_WebLogin(int32 EntryPoint);
	void HandleBack();
	void OnActivated();
	void OnLoginDialogDismissed__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WebLogin_C">();
	}
	static class UWebLogin_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWebLogin_C>();
	}
};

}

