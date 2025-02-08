#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Announcement_Basic

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Announcement_Basic.Announcement_Basic_C
// 0x0028 (0x0240 - 0x0218)
class UAnnouncement_Basic_C final  : public UFortAnnouncementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0218(0x0008)(Transient, DuplicateTransient)
	class UHorizontalBox*                         HorizontalBoxRoot;                                 // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortRichTextBlock*                     TextDetailText;                                    // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextTitleText;                                     // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Announcement_Basic(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, class AFortClientAnnouncement* K2Node_Event_Announcement1, class AFortClientAnnouncement_Basic* K2Node_DynamicCast_AsFort_Client_Announcement_Basic, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue12, bool CallFunc_BooleanAND_ReturnValue1, class FText K2Node_Select_Default, bool CallFunc_TextIsEmpty_ReturnValue123, class UObject* CallFunc_GetBrushResource_ReturnValue, ESlateVisibility Temp_byte_Variable1, bool CallFunc_IsValid_ReturnValue, class AFortClientAnnouncement* K2Node_Event_Announcement, bool Temp_bool_Variable12, ESlateVisibility Temp_byte_Variable12, ESlateVisibility K2Node_Select1_Default, ESlateVisibility Temp_byte_Variable123, ESlateVisibility K2Node_Select12_Default);
	void AnnouncementStopped(class AFortClientAnnouncement* Announcement);
	void Construct();
	void UpdateWidgetData(class AFortClientAnnouncement* Announcement);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Announcement_Basic_C">();
	}
	static class UAnnouncement_Basic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnnouncement_Basic_C>();
	}
};

}

