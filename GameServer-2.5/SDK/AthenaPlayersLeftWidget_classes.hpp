#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaPlayersLeftWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaPlayersLeftWidget.AthenaPlayersLeftWidget_C
// 0x0018 (0x0260 - 0x0248)
class UAthenaPlayersLeftWidget_C final  : public UAthenaPlayersLeftBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0248(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 PlayersImage;                                      // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         PlayersLeftText;                                   // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaPlayersLeftWidget(int32 EntryPoint, class FText K2Node_Event_PlayersText);
	void SetPlayersLeftText(class FText& PlayersText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaPlayersLeftWidget_C">();
	}
	static class UAthenaPlayersLeftWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaPlayersLeftWidget_C>();
	}
};

}

