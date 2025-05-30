#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HordeTierResultsWidget

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HordeTierResultsWidget.HordeTierResultsWidget_C
// 0x0060 (0x02A0 - 0x0240)
class UHordeTierResultsWidget_C final  : public UFortActionHandlerPanel
{
public:
	class UMovieWidget_C*                         Movie;                                             // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_NameplateWidget_C*             ResultsNameplate;                                  // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   OnTierResultsWidgetComplete;                       // 0x0250(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	EFortCompletionResult                         CompletionResult;                                  // 0x0260(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35FD[0x7];                                     // 0x0261(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMediaSource*                           DefaultDefeatMedia;                                // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMediaSource*                           DefaultVictoryMedia;                               // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             VictorySound;                                      // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             DefeatSound;                                       // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MovieTextDelay;                                    // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35FE[0x4];                                     // 0x028C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 NameplateIntroFunctionName;                        // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void OnTierResultsWidgetComplete__DelegateSignature();
	void InitializeMovie(class UMediaSource* MediaToUse, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, class UMediaSource* CallFunc_ChooseMediaToUse_MediaToUse, class UMediaPlayer* CallFunc_GetMediaPlayer_ReturnValue);
	void Initialize(EFortCompletionResult Result, EFortCompletionResult Temp_byte_Variable, class USoundBase* K2Node_Select_Default, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue);
	void ChooseMediaToUse(class UMediaSource** MediaToUse, const class FString& StringTest, bool Temp_bool_Variable, EFortCompletionResult Temp_byte_Variable, EFortCompletionResult Temp_byte_Variable1, class UFortHUDContext* CallFunc_GetContext_ReturnValue, const struct FFortBasicMissionInfo& CallFunc_GetCurrentBasicMissionInfo_BasicMissionInfo, bool CallFunc_GetCurrentBasicMissionInfo_ReturnValue, class UMediaSource* K2Node_Select_Default, class UMediaSource* K2Node_Select1_Default, class UMediaSource* K2Node_Select12_Default);
	void OnEndOfMovieReached(TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, class UMediaPlayer* CallFunc_GetMediaPlayer_ReturnValue);
	void OnHandleAction(struct FEventReply* Result, bool* bPassThrough, const struct FEventReply& CallFunc_Handled_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HordeTierResultsWidget_C">();
	}
	static class UHordeTierResultsWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHordeTierResultsWidget_C>();
	}
};

}

