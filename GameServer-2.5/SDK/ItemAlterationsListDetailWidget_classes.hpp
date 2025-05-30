#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemAlterationsListDetailWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemAlterationsListDetailWidget.ItemAlterationsListDetailWidget_C
// 0x0010 (0x0268 - 0x0258)
class UItemAlterationsListDetailWidget_C final  : public UFortItemDetailElementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0258(0x0008)(Transient, DuplicateTransient)
	class UAlterationsWidget_C*                   AlterationsWidget;                                 // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ItemAlterationsListDetailWidget(int32 EntryPoint);
	void HandlePostDifferentItemToCompareWithSet();
	void HandlePostDifferentItemToDetailSet();
	void SetState(EFortAlterationWidgetState State);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemAlterationsListDetailWidget_C">();
	}
	static class UItemAlterationsListDetailWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemAlterationsListDetailWidget_C>();
	}
};

}

