#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemEntry.ItemEntry_C
// 0x0020 (0x07A0 - 0x0780)
class UItemEntry_C final  : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0780(0x0008)(Transient, DuplicateTransient)
	class UCommonTextBlock*                       Name_ItemEntry_C;                                  // 0x0788(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   Entry_Selected;                                    // 0x0790(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void Entry_Selected__DelegateSignature(class UFortItemDefinition* Items_Definition);
	void ExecuteUbergraph_ItemEntry(int32 EntryPoint, TDelegate<void(class UUserWidget* Widget)> K2Node_Event_Callback, bool K2Node_Event_bExpanded, int32 K2Node_Event_InIndexInList, bool K2Node_Event_bSelected, class UObject* K2Node_Event_InData, class UCommonListView* K2Node_Event_OwningList);
	void Construct();
	void SetData(class UObject* InData, class UCommonListView* OwningList);
	void Reset();
	void ToggleExpansion();
	void SetSelected(bool bSelected);
	void SetIndexInList(int32 InIndexInList);
	void SetExpanded(bool bExpanded);
	void RegisterOnClicked(TDelegate<void(class UUserWidget* Widget)>& Callback);
	void Private_OnExpanderArrowShiftClicked();
	void OnReleaseToPool();
	void OnAcquireFromPool();

	class UObject* GetData() const;
	bool IsItemExpanded() const;
	int32 DoesItemHaveChildren() const;
	int32 GetIndentLevel() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemEntry_C">();
	}
	static class UItemEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemEntry_C>();
	}
};

}

