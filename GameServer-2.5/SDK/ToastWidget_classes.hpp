#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ToastWidget

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ToastWidget.ToastWidget_C
// 0x0070 (0x0280 - 0x0210)
class UToastWidget_C final  : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       Outro;                                             // 0x0218(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Intro;                                             // 0x0220(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          CommonBorder_MainWidget;                           // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Description;                                       // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          ImageBorder;                                       // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NotificationImage;                                 // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      OpenButton;                                        // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Title;                                             // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortUINotification*                    ToastNotification;                                 // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AnimationFinishedDelay;                            // 0x0260(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_26FD[0x4];                                     // 0x0264(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastDelegateProperty_                   OnFinishedToast;                                   // 0x0268(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                           AnimationDelayTimer;                               // 0x0278(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void OnFinishedToast__DelegateSignature();
	void ExecuteUbergraph_ToastWidget(int32 EntryPoint, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate1, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate12, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, struct FPointerEvent& K2Node_Event_MouseEvent1, struct FPointerEvent& K2Node_Event_MouseEvent, class UCommonButton* K2Node_ComponentBoundEvent_Button);
	void BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void HandleAnimationDelay();
	void HandleOutroFinished();
	void HandleIntroFinished();
	void Construct();
	void SetToast(class UFortUINotification* Toast, ESlateVisibility CallFunc_GetOpenButtonVisibility_ReturnValue);
	void ShowText(class FText Text, class UCommonTextBlock* TextBlock, class UCommonTextBlock* LocalTextBlock, class FText LocalText, bool CallFunc_TextIsEmpty_ReturnValue);
	void StartIntro();
	ESlateVisibility GetOpenButtonVisibility(bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable1, ESlateVisibility K2Node_Select_Default);
	void SetImage(class UTwitchNotification_C* K2Node_DynamicCast_AsTwitch_Notification, bool K2Node_DynamicCast_bSuccess, class UTexture2D* CallFunc_GetImageOverride_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void ApplyAdditionalStyling(class UClass* Temp_class_Variable, bool Temp_bool_Variable, class UClass* Temp_class_Variable1, class UClass* Temp_class_Variable12, bool Temp_bool_Variable1, class UClass* Temp_class_Variable123, class UClass* Temp_class_Variable1234, class UClass* Temp_class_Variable12345, bool Temp_bool_Variable12, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UClass* K2Node_Select_Default, class UClass* K2Node_Select1_Default, class UClass* K2Node_Select12_Default);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ToastWidget_C">();
	}
	static class UToastWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UToastWidget_C>();
	}
};

}

