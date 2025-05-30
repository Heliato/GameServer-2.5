#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TalkingHeadWidget

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TalkingHeadWidget.TalkingHeadWidget_C
// 0x0028 (0x0260 - 0x0238)
class UTalkingHeadWidget_C final  : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 TalkingHeadIcon;                                   // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextName;                                          // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextSubtitles;                                     // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBoxRoot;                                   // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_TalkingHeadWidget(int32 EntryPoint, TDelegate<void(class UTexture2D* Image, class FText Title, class FText Subtitle, EFortAnnouncementDisplayPreference DisplayPreference)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate1, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void Construct();
	void SetTalkingHeadImage(class UTexture2D* Icon);
	void SetTalkingHeadName(class FText Title);
	void SetTalkingHeadSubtitle(class FText Subtitle);
	void HandleTalkingHeadBegin(class UTexture2D* Image, class FText Title, class FText Subtitle, EFortAnnouncementDisplayPreference DisplayPreference, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable1, ESlateVisibility Temp_byte_Variable12, EFortAnnouncementDisplayPreference Temp_byte_Variable123, ESlateVisibility K2Node_Select_Default);
	void HandleTalkingHeadEnd();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TalkingHeadWidget_C">();
	}
	static class UTalkingHeadWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTalkingHeadWidget_C>();
	}
};

}

