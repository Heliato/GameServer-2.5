#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ProgressModalWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ProgressModalWidget.ProgressModalWidget_C
// 0x00D0 (0x04B8 - 0x03E8)
class UProgressModalWidget_C final  : public UFortActivatablePanel
{
public:
	uint8                                         Pad_270F[0x8];                                     // 0x03E8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03F0(0x0008)(Transient, DuplicateTransient)
	class ULightbox_C*                            Lightbox;                                          // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressWidget_C*                      ProgressWidget;                                    // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Title;                                             // 0x0408(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                   Description;                                       // 0x0420(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateBrush                            Icon;                                              // 0x0438(0x0078)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          bIntroOutrEnabled;                                 // 0x04B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          bAutoInitialize;                                   // 0x04B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          bFocusSelf;                                        // 0x04B2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          bConsumeAnalogInput;                               // 0x04B3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_ProgressModalWidget(int32 EntryPoint, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate1, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate12, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate123);
	void Construct();
	void Destruct();
	void HandleIntroEnded();
	void HandleOutroEnded();
	void Initialize(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void OnBeginIntro();
	void OnBeginOutro();
	void SetDescription(class FText Param_Description);
	void SetIcon(const struct FSlateBrush& Param_Icon);
	void SetTitle(class FText Param_Title);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ProgressModalWidget_C">();
	}
	static class UProgressModalWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProgressModalWidget_C>();
	}
};

}

