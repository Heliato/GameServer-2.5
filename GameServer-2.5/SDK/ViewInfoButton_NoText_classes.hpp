#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ViewInfoButton_NoText

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ViewInfoButton_NoText.ViewInfoButton_NoText_C
// 0x0008 (0x0788 - 0x0780)
class UViewInfoButton_NoText_C final  : public UCommonButton
{
public:
	class UNamedSlot*                             Content;                                           // 0x0780(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ViewInfoButton_NoText_C">();
	}
	static class UViewInfoButton_NoText_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UViewInfoButton_NoText_C>();
	}
};

}

