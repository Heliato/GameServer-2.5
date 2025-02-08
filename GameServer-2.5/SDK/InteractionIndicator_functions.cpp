#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InteractionIndicator

#include "Basic.hpp"

#include "InteractionIndicator_classes.hpp"
#include "InteractionIndicator_parameters.hpp"


namespace SDK
{

// Function InteractionIndicator.InteractionIndicator_C.ExecuteUbergraph_InteractionIndicator
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// ESlateVisibility                        Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*             CallFunc_GetContext_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class UFortInteractContextInfo* ContextInfo)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// class UFortHUDContext*                  CallFunc_GetContext_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class UFortInteractContextInfo* ContextInfo)>K2Node_CreateDelegate_OutputDelegate1                  (ZeroConstructor, NoDestructor)
// class UFortHUDContext*                  CallFunc_GetContext_ReturnValue12                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate12                 (ZeroConstructor, NoDestructor)
// bool                                    CallFunc_IsBROnly_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// ESlateVisibility                        K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInteractionIndicator_C::ExecuteUbergraph_InteractionIndicator(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, TDelegate<void(class UFortInteractContextInfo* ContextInfo)> K2Node_CreateDelegate_OutputDelegate, class UFortHUDContext* CallFunc_GetContext_ReturnValue1, TDelegate<void(class UFortInteractContextInfo* ContextInfo)> K2Node_CreateDelegate_OutputDelegate1, class UFortHUDContext* CallFunc_GetContext_ReturnValue12, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate12, bool CallFunc_IsBROnly_ReturnValue, ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractionIndicator_C", "ExecuteUbergraph_InteractionIndicator");

	Params::InteractionIndicator_C_ExecuteUbergraph_InteractionIndicator Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_GetContext_ReturnValue12 = CallFunc_GetContext_ReturnValue12;
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;
	Parms.CallFunc_IsBROnly_ReturnValue = CallFunc_IsBROnly_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InteractionIndicator.InteractionIndicator_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInteractionIndicator_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractionIndicator_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InteractionIndicator.InteractionIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInteractionIndicator_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractionIndicator_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InteractionIndicator.InteractionIndicator_C.HandleInteractionChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortInteractContextInfo*         Interaction                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ValidInteraction                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// ESlateVisibility                        Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABuildingTrapDefender*            K2Node_DynamicCast_AsBuilding_Trap_Defender            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPickup*                      K2Node_DynamicCast_AsFort_Pickup                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_PickedUp_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// ESlateVisibility                        K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInteractionIndicator_C::HandleInteractionChanged(class UFortInteractContextInfo* Interaction, bool ValidInteraction, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, class ABuildingTrapDefender* K2Node_DynamicCast_AsBuilding_Trap_Defender, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class AFortPickup* K2Node_DynamicCast_AsFort_Pickup, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_PickedUp_ReturnValue, ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractionIndicator_C", "HandleInteractionChanged");

	Params::InteractionIndicator_C_HandleInteractionChanged Parms{};

	Parms.Interaction = Interaction;
	Parms.ValidInteraction = ValidInteraction;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_DynamicCast_AsBuilding_Trap_Defender = K2Node_DynamicCast_AsBuilding_Trap_Defender;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Pickup = K2Node_DynamicCast_AsFort_Pickup;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_PickedUp_ReturnValue = CallFunc_PickedUp_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InteractionIndicator.InteractionIndicator_C.ShowPickupWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPickup*                      Pickup                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             CallFunc_GetInteractText_InteractText                  ()
// bool                                    CallFunc_GetInteractText_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             CallFunc_GetInteractErrorText_InteractErrorText        ()
// bool                                    CallFunc_GetInteractErrorText_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// ESlateVisibility                        Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable12                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable123                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// ESlateVisibility                        K2Node_Select1_Default                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInteractionIndicator_C::ShowPickupWidget(class AFortPickup* Pickup, bool Temp_bool_Variable, class FText CallFunc_GetInteractText_InteractText, bool CallFunc_GetInteractText_ReturnValue, class FText CallFunc_GetInteractErrorText_InteractErrorText, bool CallFunc_GetInteractErrorText_ReturnValue, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable1, ESlateVisibility Temp_byte_Variable12, ESlateVisibility K2Node_Select_Default, ESlateVisibility Temp_byte_Variable123, bool Temp_bool_Variable1, ESlateVisibility K2Node_Select1_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractionIndicator_C", "ShowPickupWidget");

	Params::InteractionIndicator_C_ShowPickupWidget Parms{};

	Parms.Pickup = Pickup;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetInteractText_InteractText = CallFunc_GetInteractText_InteractText;
	Parms.CallFunc_GetInteractText_ReturnValue = CallFunc_GetInteractText_ReturnValue;
	Parms.CallFunc_GetInteractErrorText_InteractErrorText = CallFunc_GetInteractErrorText_InteractErrorText;
	Parms.CallFunc_GetInteractErrorText_ReturnValue = CallFunc_GetInteractErrorText_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_byte_Variable12 = Temp_byte_Variable12;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable123 = Temp_byte_Variable123;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InteractionIndicator.InteractionIndicator_C.ShowBasicInteractionWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// EFortKeybindForcedHoldStatus            Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFortKeybindForcedHoldStatus            Temp_byte_Variable1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Greater_FloatFloat_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_Greater_FloatFloat_ReturnValue1               (ZeroConstructor, IsPlainOldData, NoDestructor)
// EFortKeybindForcedHoldStatus            K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInteractionIndicator_C::ShowBasicInteractionWidget(bool Temp_bool_Variable, EFortKeybindForcedHoldStatus Temp_byte_Variable, EFortKeybindForcedHoldStatus Temp_byte_Variable1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue1, EFortKeybindForcedHoldStatus K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractionIndicator_C", "ShowBasicInteractionWidget");

	Params::InteractionIndicator_C_ShowBasicInteractionWidget Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue1 = CallFunc_Greater_FloatFloat_ReturnValue1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InteractionIndicator.InteractionIndicator_C.HandleInteractionUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortInteractContextInfo*         Interaction                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInteractionIndicator_C::HandleInteractionUpdated(class UFortInteractContextInfo* Interaction, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractionIndicator_C", "HandleInteractionUpdated");

	Params::InteractionIndicator_C_HandleInteractionUpdated Parms{};

	Parms.Interaction = Interaction;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InteractionIndicator.InteractionIndicator_C.ShowDefenderBeaconWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingTrapDefender*            BuildingTrap                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInteractionIndicator_C::ShowDefenderBeaconWidget(class ABuildingTrapDefender* BuildingTrap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractionIndicator_C", "ShowDefenderBeaconWidget");

	Params::InteractionIndicator_C_ShowDefenderBeaconWidget Parms{};

	Parms.BuildingTrap = BuildingTrap;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InteractionIndicator.InteractionIndicator_C.UpdateKeybinds
// (Public, BlueprintCallable, BlueprintEvent)

void UInteractionIndicator_C::UpdateKeybinds()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractionIndicator_C", "UpdateKeybinds");

	UObject::ProcessEvent(Func, nullptr);
}

}

