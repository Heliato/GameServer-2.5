#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StoreItemCardFront

#include "Basic.hpp"

#include "StoreItemCardFront_classes.hpp"
#include "StoreItemCardFront_parameters.hpp"


namespace SDK
{

// Function StoreItemCardFront.StoreItemCardFront_C.ExecuteUbergraph_StoreItemCardFront
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreContext*                CallFunc_GetContext_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreContext*                CallFunc_GetContext_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFortStoreState                         K2Node_CustomEvent_NewStoreState                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCard                            CallFunc_GetCard_ResultOut                             (NoDestructor)
// bool                                    CallFunc_GetCard_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    K2Node_SwitchEnum_CmpSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          K2Node_Event_InitObject                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreContext*                CallFunc_GetContext_ReturnValue12                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_CardFrontRevealComplete_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UStoreItemCardFront_C::ExecuteUbergraph_StoreItemCardFront(int32 EntryPoint, class UFortStoreContext* CallFunc_GetContext_ReturnValue, class UFortStoreContext* CallFunc_GetContext_ReturnValue1, EFortStoreState K2Node_CustomEvent_NewStoreState, const struct FCard& CallFunc_GetCard_ResultOut, bool CallFunc_GetCard_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UObject* K2Node_Event_InitObject, class UFortStoreContext* CallFunc_GetContext_ReturnValue12, bool CallFunc_CardFrontRevealComplete_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreItemCardFront_C", "ExecuteUbergraph_StoreItemCardFront");

	Params::StoreItemCardFront_C_ExecuteUbergraph_StoreItemCardFront Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.K2Node_CustomEvent_NewStoreState = K2Node_CustomEvent_NewStoreState;
	Parms.CallFunc_GetCard_ResultOut = std::move(CallFunc_GetCard_ResultOut);
	Parms.CallFunc_GetCard_ReturnValue = CallFunc_GetCard_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Event_InitObject = K2Node_Event_InitObject;
	Parms.CallFunc_GetContext_ReturnValue12 = CallFunc_GetContext_ReturnValue12;
	Parms.CallFunc_CardFrontRevealComplete_ReturnValue = CallFunc_CardFrontRevealComplete_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StoreItemCardFront.StoreItemCardFront_C.InitFromObject
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          InitObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStoreItemCardFront_C::InitFromObject(class UObject* InitObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreItemCardFront_C", "InitFromObject");

	Params::StoreItemCardFront_C_InitFromObject Parms{};

	Parms.InitObject = InitObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StoreItemCardFront.StoreItemCardFront_C.OnFortStoreStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortStoreState                         NewStoreState                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStoreItemCardFront_C::OnFortStoreStateChanged(EFortStoreState NewStoreState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreItemCardFront_C", "OnFortStoreStateChanged");

	Params::StoreItemCardFront_C_OnFortStoreStateChanged Parms{};

	Parms.NewStoreState = NewStoreState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StoreItemCardFront.StoreItemCardFront_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStoreItemCardFront_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreItemCardFront_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StoreItemCardFront.StoreItemCardFront_C.Initialize_Card
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCard                            InCard                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// EFortRarity                             CallFunc_GetRarity_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStoreItemCardFront_C::Initialize_Card(const struct FCard& InCard, EFortRarity CallFunc_GetRarity_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreItemCardFront_C", "Initialize_Card");

	Params::StoreItemCardFront_C_Initialize_Card Parms{};

	Parms.InCard = std::move(InCard);
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StoreItemCardFront.StoreItemCardFront_C.Draw_Card
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortRarityItemData              RarityData                                             (Edit, BlueprintVisible)
// struct FFortRarityItemData              CallFunc_BPGetRarityData_ReturnValue                   ()

void UStoreItemCardFront_C::Draw_Card(const struct FFortRarityItemData& RarityData, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreItemCardFront_C", "Draw_Card");

	Params::StoreItemCardFront_C_Draw_Card Parms{};

	Parms.RarityData = std::move(RarityData);
	Parms.CallFunc_BPGetRarityData_ReturnValue = std::move(CallFunc_BPGetRarityData_ReturnValue);

	UObject::ProcessEvent(Func, &Parms);
}


// Function StoreItemCardFront.StoreItemCardFront_C.Get Card Name Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)
// class FText                             Temp_text_Variable                                     ()
// class FText                             Temp_text_Variable1                                    ()
// class FText                             Temp_text_Variable12                                   ()
// class FText                             Temp_text_Variable123                                  ()
// class FText                             Temp_text_Variable1234                                 ()
// class FText                             Temp_text_Variable12345                                ()
// class FText                             Temp_text_Variable123456                               ()
// class FText                             Temp_text_Variable1234567                              ()
// class FText                             Temp_text_Variable12345678                             ()
// class FText                             Temp_text_Variable123456789                            ()
// class FText                             Temp_text_Variable12345678910                          ()
// class FText                             Temp_text_Variable1234567891011                        ()
// class FText                             Temp_text_Variable123456789101112                      ()
// class FText                             Temp_text_Variable12345678910111213                    ()
// class FText                             Temp_text_Variable1234567891011121314                  ()
// class FText                             Temp_text_Variable123456789101112131415                ()
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// EFortInventoryFilter                    Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             CallFunc_GetEmptyText_ReturnValue                      ()
// class FText                             CallFunc_GetTertiaryCategory_ItemCategoryText          ()
// struct FSlateBrush                      CallFunc_GetTertiaryCategory_ItemCategoryBrush         ()
// bool                                    CallFunc_GetTertiaryCategory_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             CallFunc_Conv_StringToText_ReturnValue                 ()
// struct FFormatArgumentData              K2Node_MakeStruct_FormatArgumentData                   (HasGetValueTypeHash)
// EFortInventoryFilter                    CallFunc_GetFilterCategory_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             CallFunc_GetDisplayName_ReturnValue                    ()
// bool                                    CallFunc_EqualEqual_TextText_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             K2Node_Select_Default                                  ()
// class FText                             CallFunc_TextTrimPrecedingAndTrailing_ReturnValue      ()
// struct FFormatArgumentData              K2Node_MakeStruct_FormatArgumentData1                  (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData>      K2Node_MakeArray_Array                                 (ZeroConstructor, ReferenceParm)
// class FText                             CallFunc_Format_ReturnValue                            ()
// class FText                             K2Node_Select1_Default                                 ()

class FText UStoreItemCardFront_C::Get_Card_Name_Text(class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable12, class FText Temp_text_Variable123, class FText Temp_text_Variable1234, class FText Temp_text_Variable12345, class FText Temp_text_Variable123456, class FText Temp_text_Variable1234567, class FText Temp_text_Variable12345678, class FText Temp_text_Variable123456789, class FText Temp_text_Variable12345678910, class FText Temp_text_Variable1234567891011, class FText Temp_text_Variable123456789101112, class FText Temp_text_Variable12345678910111213, class FText Temp_text_Variable1234567891011121314, class FText Temp_text_Variable123456789101112131415, bool Temp_bool_Variable, EFortInventoryFilter Temp_byte_Variable, class FText CallFunc_GetEmptyText_ReturnValue, class FText CallFunc_GetTertiaryCategory_ItemCategoryText, const struct FSlateBrush& CallFunc_GetTertiaryCategory_ItemCategoryBrush, bool CallFunc_GetTertiaryCategory_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, EFortInventoryFilter CallFunc_GetFilterCategory_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, class FText K2Node_Select_Default, class FText CallFunc_TextTrimPrecedingAndTrailing_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select1_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreItemCardFront_C", "Get Card Name Text");

	Params::StoreItemCardFront_C_Get_Card_Name_Text Parms{};

	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.Temp_text_Variable12 = Temp_text_Variable12;
	Parms.Temp_text_Variable123 = Temp_text_Variable123;
	Parms.Temp_text_Variable1234 = Temp_text_Variable1234;
	Parms.Temp_text_Variable12345 = Temp_text_Variable12345;
	Parms.Temp_text_Variable123456 = Temp_text_Variable123456;
	Parms.Temp_text_Variable1234567 = Temp_text_Variable1234567;
	Parms.Temp_text_Variable12345678 = Temp_text_Variable12345678;
	Parms.Temp_text_Variable123456789 = Temp_text_Variable123456789;
	Parms.Temp_text_Variable12345678910 = Temp_text_Variable12345678910;
	Parms.Temp_text_Variable1234567891011 = Temp_text_Variable1234567891011;
	Parms.Temp_text_Variable123456789101112 = Temp_text_Variable123456789101112;
	Parms.Temp_text_Variable12345678910111213 = Temp_text_Variable12345678910111213;
	Parms.Temp_text_Variable1234567891011121314 = Temp_text_Variable1234567891011121314;
	Parms.Temp_text_Variable123456789101112131415 = Temp_text_Variable123456789101112131415;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetEmptyText_ReturnValue = CallFunc_GetEmptyText_ReturnValue;
	Parms.CallFunc_GetTertiaryCategory_ItemCategoryText = CallFunc_GetTertiaryCategory_ItemCategoryText;
	Parms.CallFunc_GetTertiaryCategory_ItemCategoryBrush = std::move(CallFunc_GetTertiaryCategory_ItemCategoryBrush);
	Parms.CallFunc_GetTertiaryCategory_ReturnValue = CallFunc_GetTertiaryCategory_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = std::move(K2Node_MakeStruct_FormatArgumentData);
	Parms.CallFunc_GetFilterCategory_ReturnValue = CallFunc_GetFilterCategory_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_TextTrimPrecedingAndTrailing_ReturnValue = CallFunc_TextTrimPrecedingAndTrailing_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData1 = std::move(K2Node_MakeStruct_FormatArgumentData1);
	Parms.K2Node_MakeArray_Array = std::move(K2Node_MakeArray_Array);
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);

	K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	return Parms.ReturnValue;
}


// Function StoreItemCardFront.StoreItemCardFront_C.Get Type Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             OutText                                                (Parm, OutParm)
// EFortInventoryFilter                    Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Temp_text_Variable                                     ()
// class FText                             Temp_text_Variable1                                    ()
// class FText                             Temp_text_Variable12                                   ()
// class FText                             Temp_text_Variable123                                  ()
// class FText                             Temp_text_Variable1234                                 ()
// class FText                             Temp_text_Variable12345                                ()
// class FText                             Temp_text_Variable123456                               ()
// class FText                             Temp_text_Variable1234567                              ()
// class FText                             Temp_text_Variable12345678                             ()
// class FText                             Temp_text_Variable123456789                            ()
// class FText                             Temp_text_Variable12345678910                          ()
// class FText                             Temp_text_Variable1234567891011                        ()
// class FText                             Temp_text_Variable123456789101112                      ()
// class FText                             Temp_text_Variable12345678910111213                    ()
// class FText                             Temp_text_Variable1234567891011121314                  ()
// class FText                             Temp_text_Variable123456789101112131415                ()
// class FText                             Temp_text_Variable12345678910111213141516              ()
// class FText                             Temp_text_Variable1234567891011121314151617            ()
// EFortInventoryFilter                    CallFunc_GetFilterCategory_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             K2Node_Select_Default                                  ()

void UStoreItemCardFront_C::Get_Type_Text(class FText* OutText, EFortInventoryFilter Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable12, class FText Temp_text_Variable123, class FText Temp_text_Variable1234, class FText Temp_text_Variable12345, class FText Temp_text_Variable123456, class FText Temp_text_Variable1234567, class FText Temp_text_Variable12345678, class FText Temp_text_Variable123456789, class FText Temp_text_Variable12345678910, class FText Temp_text_Variable1234567891011, class FText Temp_text_Variable123456789101112, class FText Temp_text_Variable12345678910111213, class FText Temp_text_Variable1234567891011121314, class FText Temp_text_Variable123456789101112131415, class FText Temp_text_Variable12345678910111213141516, class FText Temp_text_Variable1234567891011121314151617, EFortInventoryFilter CallFunc_GetFilterCategory_ReturnValue, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreItemCardFront_C", "Get Type Text");

	Params::StoreItemCardFront_C_Get_Type_Text Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.Temp_text_Variable12 = Temp_text_Variable12;
	Parms.Temp_text_Variable123 = Temp_text_Variable123;
	Parms.Temp_text_Variable1234 = Temp_text_Variable1234;
	Parms.Temp_text_Variable12345 = Temp_text_Variable12345;
	Parms.Temp_text_Variable123456 = Temp_text_Variable123456;
	Parms.Temp_text_Variable1234567 = Temp_text_Variable1234567;
	Parms.Temp_text_Variable12345678 = Temp_text_Variable12345678;
	Parms.Temp_text_Variable123456789 = Temp_text_Variable123456789;
	Parms.Temp_text_Variable12345678910 = Temp_text_Variable12345678910;
	Parms.Temp_text_Variable1234567891011 = Temp_text_Variable1234567891011;
	Parms.Temp_text_Variable123456789101112 = Temp_text_Variable123456789101112;
	Parms.Temp_text_Variable12345678910111213 = Temp_text_Variable12345678910111213;
	Parms.Temp_text_Variable1234567891011121314 = Temp_text_Variable1234567891011121314;
	Parms.Temp_text_Variable123456789101112131415 = Temp_text_Variable123456789101112131415;
	Parms.Temp_text_Variable12345678910111213141516 = Temp_text_Variable12345678910111213141516;
	Parms.Temp_text_Variable1234567891011121314151617 = Temp_text_Variable1234567891011121314151617;
	Parms.CallFunc_GetFilterCategory_ReturnValue = CallFunc_GetFilterCategory_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (OutText != nullptr)
		*OutText = Parms.OutText;
}

}

