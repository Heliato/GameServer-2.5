#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ThirdPartyTab

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ThirdPartyTab.ThirdPartyTab_C
// 0x0010 (0x0220 - 0x0210)
class UThirdPartyTab_C final  : public UCommonUserWidget
{
public:
	class UFortRichTextBlock*                     FortRichTextBlock_0;                               // 0x0210(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_2;                                       // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Activate_Scroll_Box(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsMobileApp_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ThirdPartyTab_C">();
	}
	static class UThirdPartyTab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UThirdPartyTab_C>();
	}
};

}

