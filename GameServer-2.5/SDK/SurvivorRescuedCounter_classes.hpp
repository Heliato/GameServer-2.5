#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SurvivorRescuedCounter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SurvivorRescuedCounter.SurvivorRescuedCounter_C
// 0x0010 (0x0220 - 0x0210)
class USurvivorRescuedCounter_C final  : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UCommonNumericTextBlock*                NumberSurvivors;                                   // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SurvivorRescuedCounter(int32 EntryPoint, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateZone* K2Node_DynamicCast_AsFort_Game_State_Zone, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetNumSurvivorsRescued_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInOutpostZone_ReturnValue, TDelegate<void(int32 NumSurvivorsRescued)> K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue1);
	void Construct();
	void UpdateSurvivorsRescued(int32 SurvivorsRescued, class FText CallFunc_Conv_IntToText_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SurvivorRescuedCounter_C">();
	}
	static class USurvivorRescuedCounter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USurvivorRescuedCounter_C>();
	}
};

}

