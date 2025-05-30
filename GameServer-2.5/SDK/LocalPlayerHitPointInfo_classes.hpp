#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LocalPlayerHitPointInfo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LocalPlayerHitPointInfo.LocalPlayerHitPointInfo_C
// 0x0028 (0x0260 - 0x0238)
class ULocalPlayerHitPointInfo_C final  : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(Transient, DuplicateTransient)
	class UFortBangWrapper*                       _Bang_Wrapper___PlayerInfo_;                       // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHitPointBar_C*                         _Hit_Point_Bar__Health;                            // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHitPointBar_C*                         _Hit_Point_Bar__Shield;                            // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHitPointBar_C*                         _Hit_Point_Bar__Stamina;                           // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_LocalPlayerHitPointInfo(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LocalPlayerHitPointInfo_C">();
	}
	static class ULocalPlayerHitPointInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULocalPlayerHitPointInfo_C>();
	}
};

}

