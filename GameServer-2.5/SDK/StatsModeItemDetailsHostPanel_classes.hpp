#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StatsModeItemDetailsHostPanel

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StatsModeItemDetailsHostPanel.StatsModeItemDetailsHostPanel_C
// 0x0028 (0x02B8 - 0x0290)
class UStatsModeItemDetailsHostPanel_C final  : public UFortItemManagementItemDetailsPanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(Transient, DuplicateTransient)
	class UItemDetailsHeader_C*                   HeaderWidget;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemAttributesDetailWidget_C*          ItemAttributesDetailWidget;                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MarkedForMulchingBackgroundImage;                  // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeImage*                    MarkedForMulchingIndicatorImage;                   // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_StatsModeItemDetailsHostPanel(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable1, ESlateVisibility K2Node_Select_Default);
	void HandleHasItemMarkedForMulchingChanged();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StatsModeItemDetailsHostPanel_C">();
	}
	static class UStatsModeItemDetailsHostPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStatsModeItemDetailsHostPanel_C>();
	}
};

}

