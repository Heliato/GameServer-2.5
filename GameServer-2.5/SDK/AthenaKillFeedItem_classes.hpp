#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaKillFeedItem

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaKillFeedItem.AthenaKillFeedItem_C
// 0x0008 (0x0240 - 0x0238)
class UAthenaKillFeedItem_C final  : public UFortHUDElementWidget
{
public:
	class URichTextBlock*                         KillText;                                          // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetText(class FText Text);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaKillFeedItem_C">();
	}
	static class UAthenaKillFeedItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaKillFeedItem_C>();
	}
};

}

