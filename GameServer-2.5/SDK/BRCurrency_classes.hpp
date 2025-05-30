#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BRCurrency

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BRCurrency.BRCurrency_C
// 0x0010 (0x0220 - 0x0210)
class UBRCurrency_C final  : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UItemCount_C*                           ItemCount;                                         // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void Destruct();
	void ExecuteUbergraph_BRCurrency(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BRCurrency_C">();
	}
	static class UBRCurrency_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBRCurrency_C>();
	}
};

}

