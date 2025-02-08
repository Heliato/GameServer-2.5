#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CollectionBookSlotView

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CollectionBookSlotView.CollectionBookSlotView_C
// 0x0008 (0x0358 - 0x0350)
class UCollectionBookSlotView_C final  : public UFortCollectionBookSlotView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(Transient, DuplicateTransient)

public:
	void Construct();
	void ExecuteUbergraph_CollectionBookSlotView(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CollectionBookSlotView_C">();
	}
	static class UCollectionBookSlotView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCollectionBookSlotView_C>();
	}
};

}

