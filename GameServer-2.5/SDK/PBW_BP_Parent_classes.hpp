#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PBW_BP_Parent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PBW_BP_Parent.PBW_BP_Parent_C
// 0x0018 (0x0EB8 - 0x0EA0)
class APBW_BP_Parent_C final  : public ABuildingWall
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0EA0(0x0008)(Transient, DuplicateTransient)
	TArray<class UStaticMesh*>                    StaticMeshAlternateArray;                          // 0x0EA8(0x0010)(Edit, BlueprintVisible, ZeroConstructor)

public:
	void ExecuteUbergraph_PBW_BP_Parent(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, int32 CallFunc_RandomIntegerInRange_ReturnValue, class UStaticMesh* CallFunc_Array_Get_Item);
	void OnRep_Random_Chance();
	void ReceiveBeginPlay();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PBW_BP_Parent_C">();
	}
	static class APBW_BP_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APBW_BP_Parent_C>();
	}
};

}

