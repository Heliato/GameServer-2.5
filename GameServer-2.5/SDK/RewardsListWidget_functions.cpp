#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RewardsListWidget

#include "Basic.hpp"

#include "RewardsListWidget_classes.hpp"
#include "RewardsListWidget_parameters.hpp"


namespace SDK
{

// Function RewardsListWidget.RewardsListWidget_C.PopulateRewards
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFortItemInstanceQuantityPair>Rewards                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FFortItemInstanceQuantityPair>SelectableRewards                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int32                                   Temp_int_Loop_Counter_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Array_Length_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Array_Length_ReturnValue1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Array_Length_ReturnValue12                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Array_Length_ReturnValue123                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   CallFunc_Subtract_IntInt_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Array_Index_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortItemInstanceQuantityPair    CallFunc_Array_Get_Item                                (NoDestructor)
// int32                                   Temp_int_Loop_Counter_Variable1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   CallFunc_Add_IntInt_ReturnValue12                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Array_Index_Variable1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortItemInstanceQuantityPair    CallFunc_Array_Get_Item1                               (NoDestructor)

void URewardsListWidget_C::PopulateRewards(TArray<struct FFortItemInstanceQuantityPair>& Rewards, TArray<struct FFortItemInstanceQuantityPair>& SelectableRewards, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue12, int32 CallFunc_Array_Length_ReturnValue123, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FFortItemInstanceQuantityPair& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable1, int32 CallFunc_Add_IntInt_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue12, int32 Temp_int_Array_Index_Variable1, const struct FFortItemInstanceQuantityPair& CallFunc_Array_Get_Item1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardsListWidget_C", "PopulateRewards");

	Params::RewardsListWidget_C_PopulateRewards Parms{};

	Parms.Rewards = std::move(Rewards);
	Parms.SelectableRewards = std::move(SelectableRewards);
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_Array_Length_ReturnValue12 = CallFunc_Array_Length_ReturnValue12;
	Parms.CallFunc_Array_Length_ReturnValue123 = CallFunc_Array_Length_ReturnValue123;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = std::move(CallFunc_Array_Get_Item);
	Parms.Temp_int_Loop_Counter_Variable1 = Temp_int_Loop_Counter_Variable1;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_Less_IntInt_ReturnValue1 = CallFunc_Less_IntInt_ReturnValue1;
	Parms.CallFunc_Add_IntInt_ReturnValue12 = CallFunc_Add_IntInt_ReturnValue12;
	Parms.Temp_int_Array_Index_Variable1 = Temp_int_Array_Index_Variable1;
	Parms.CallFunc_Array_Get_Item1 = std::move(CallFunc_Array_Get_Item1);

	UObject::ProcessEvent(Func, &Parms);

	Rewards = std::move(Parms.Rewards);
	SelectableRewards = std::move(Parms.SelectableRewards);
}


// Function RewardsListWidget.RewardsListWidget_C.PresentNextReward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CallFunc_Array_Length_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Subtract_IntInt_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Subtract_IntInt_ReturnValue1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_LessEqual_IntInt_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   CallFunc_Subtract_IntInt_ReturnValue12                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFrontEndRewardWrapperWidget_C*   CallFunc_Array_Get_Item                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*                 CallFunc_AddChildToVerticalBox_ReturnValue             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewardsListWidget_C::PresentNextReward(int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue12, class UFrontEndRewardWrapperWidget_C* CallFunc_Array_Get_Item, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardsListWidget_C", "PresentNextReward");

	Params::RewardsListWidget_C_PresentNextReward Parms{};

	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue1 = CallFunc_Subtract_IntInt_ReturnValue1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue12 = CallFunc_Subtract_IntInt_ReturnValue12;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RewardsListWidget.RewardsListWidget_C.CreateReward
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortItemInstanceQuantityPair    FortItemInstanceQuantityPair                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                                    Selectable                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Quantity                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                        Item                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData              K2Node_MakeStruct_FormatArgumentData                   (HasGetValueTypeHash)
// class FText                             CallFunc_GetDisplayName_ReturnValue                    ()
// struct FFormatArgumentData              K2Node_MakeStruct_FormatArgumentData1                  (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData>      K2Node_MakeArray_Array                                 (ZeroConstructor, ReferenceParm)
// class FText                             CallFunc_Format_ReturnValue                            ()
// EFortItemType                           CallFunc_GetType_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_NotEqual_ByteByte_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*                CallFunc_GetOwningPlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHomeScreenQuestRewardItem_C*     CallFunc_Create_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFrontEndRewardWrapperWidget_C*   CallFunc_CreateRewardWrapper_OutputPin                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Array_Add_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Array_Add_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewardsListWidget_C::CreateReward(struct FFortItemInstanceQuantityPair& FortItemInstanceQuantityPair, bool Selectable, int32 Quantity, class UFortItem* Item, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_GetDisplayName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, EFortItemType CallFunc_GetType_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UHomeScreenQuestRewardItem_C* CallFunc_Create_ReturnValue, class UFrontEndRewardWrapperWidget_C* CallFunc_CreateRewardWrapper_OutputPin, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardsListWidget_C", "CreateReward");

	Params::RewardsListWidget_C_CreateReward Parms{};

	Parms.FortItemInstanceQuantityPair = std::move(FortItemInstanceQuantityPair);
	Parms.Selectable = Selectable;
	Parms.Quantity = Quantity;
	Parms.Item = Item;
	Parms.K2Node_MakeStruct_FormatArgumentData = std::move(K2Node_MakeStruct_FormatArgumentData);
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData1 = std::move(K2Node_MakeStruct_FormatArgumentData1);
	Parms.K2Node_MakeArray_Array = std::move(K2Node_MakeArray_Array);
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetType_ReturnValue = CallFunc_GetType_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_CreateRewardWrapper_OutputPin = CallFunc_CreateRewardWrapper_OutputPin;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue1 = CallFunc_Array_Add_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

	FortItemInstanceQuantityPair = std::move(Parms.FortItemInstanceQuantityPair);
	K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);
}


// Function RewardsListWidget.RewardsListWidget_C.CreateRewardWrapper
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHomeScreenQuestRewardItem_C*     Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             DisplayName                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class UFrontEndRewardWrapperWidget_C*   OutputPin                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// class APlayerController*                CallFunc_GetOwningPlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFrontEndRewardWrapperWidget_C*   CallFunc_Create_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewardsListWidget_C::CreateRewardWrapper(class UHomeScreenQuestRewardItem_C* Item, class FText DisplayName, class UFrontEndRewardWrapperWidget_C** OutputPin, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFrontEndRewardWrapperWidget_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardsListWidget_C", "CreateRewardWrapper");

	Params::RewardsListWidget_C_CreateRewardWrapper Parms{};

	Parms.Item = Item;
	Parms.DisplayName = DisplayName;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutputPin != nullptr)
		*OutputPin = Parms.OutputPin;
}


// Function RewardsListWidget.RewardsListWidget_C.PresentAllRewards
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Temp_int_Array_Index_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Greater_IntInt_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Temp_int_Loop_Counter_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Array_Index_Variable1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                          K2Node_MakeStruct_Margin                               (IsPlainOldData, NoDestructor)
// struct FMargin                          K2Node_MakeStruct_Margin1                              (IsPlainOldData, NoDestructor)
// int32                                   Temp_int_Loop_Counter_Variable1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFrontEndRewardWrapperWidget_C*   CallFunc_Array_Get_Item                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Array_Length_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*                 CallFunc_AddChildToVerticalBox_ReturnValue             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   CallFunc_Add_IntInt_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*                CallFunc_GetOwningPlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemOrWidget_C*                  CallFunc_Create_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFrontEndRewardWrapperWidget_C*   CallFunc_Array_Get_Item1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Array_Length_ReturnValue1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*                 CallFunc_AddChildToVerticalBox_ReturnValue1            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBoxSlot*                 CallFunc_AddChildToVerticalBox_ReturnValue12           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewardsListWidget_C::PresentAllRewards(int32 Temp_int_Array_Index_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable1, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_MakeStruct_Margin1, int32 Temp_int_Loop_Counter_Variable1, class UFrontEndRewardWrapperWidget_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UItemOrWidget_C* CallFunc_Create_ReturnValue, class UFrontEndRewardWrapperWidget_C* CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue12)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardsListWidget_C", "PresentAllRewards");

	Params::RewardsListWidget_C_PresentAllRewards Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable1 = Temp_int_Array_Index_Variable1;
	Parms.K2Node_MakeStruct_Margin = std::move(K2Node_MakeStruct_Margin);
	Parms.K2Node_MakeStruct_Margin1 = std::move(K2Node_MakeStruct_Margin1);
	Parms.Temp_int_Loop_Counter_Variable1 = Temp_int_Loop_Counter_Variable1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue1 = CallFunc_AddChildToVerticalBox_ReturnValue1;
	Parms.CallFunc_Less_IntInt_ReturnValue1 = CallFunc_Less_IntInt_ReturnValue1;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue12 = CallFunc_AddChildToVerticalBox_ReturnValue12;

	UObject::ProcessEvent(Func, &Parms);
}

}

