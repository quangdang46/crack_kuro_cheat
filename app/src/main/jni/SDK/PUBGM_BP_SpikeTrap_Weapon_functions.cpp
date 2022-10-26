// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_SpikeTrap_Weapon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SpikeTrap_Weapon.BP_SpikeTrap_Weapon_C.HideAvatar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewHidden                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpikeTrap_Weapon_C::HideAvatar(bool NewHidden)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_SpikeTrap_Weapon.BP_SpikeTrap_Weapon_C.HideAvatar");

	ABP_SpikeTrap_Weapon_C_HideAvatar_Params params;
	params.NewHidden = NewHidden;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_SpikeTrap_Weapon.BP_SpikeTrap_Weapon_C.Vehicle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EThrowState                    CurrentState                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpikeTrap_Weapon_C::Vehicle(EThrowState CurrentState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_SpikeTrap_Weapon.BP_SpikeTrap_Weapon_C.Vehicle");

	ABP_SpikeTrap_Weapon_C_Vehicle_Params params;
	params.CurrentState = CurrentState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_SpikeTrap_Weapon.BP_SpikeTrap_Weapon_C.GetSkillEntryForMeleeWeapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPressed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EUTSkillEntry                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EUTSkillEntry ABP_SpikeTrap_Weapon_C::GetSkillEntryForMeleeWeapon(bool IsPressed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_SpikeTrap_Weapon.BP_SpikeTrap_Weapon_C.GetSkillEntryForMeleeWeapon");

	ABP_SpikeTrap_Weapon_C_GetSkillEntryForMeleeWeapon_Params params;
	params.IsPressed = IsPressed;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP_SpikeTrap_Weapon.BP_SpikeTrap_Weapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SpikeTrap_Weapon_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_SpikeTrap_Weapon.BP_SpikeTrap_Weapon_C.UserConstructionScript");

	ABP_SpikeTrap_Weapon_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_SpikeTrap_Weapon.BP_SpikeTrap_Weapon_C.HandleThrowStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// EThrowState*                   NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EThrowState*                   PrevState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpikeTrap_Weapon_C::HandleThrowStateChanged(EThrowState* NewState, EThrowState* PrevState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_SpikeTrap_Weapon.BP_SpikeTrap_Weapon_C.HandleThrowStateChanged");

	ABP_SpikeTrap_Weapon_C_HandleThrowStateChanged_Params params;
	params.NewState = NewState;
	params.PrevState = PrevState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_SpikeTrap_Weapon.BP_SpikeTrap_Weapon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SpikeTrap_Weapon_C::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_SpikeTrap_Weapon.BP_SpikeTrap_Weapon_C.ReceiveBeginPlay");

	ABP_SpikeTrap_Weapon_C_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_SpikeTrap_Weapon.BP_SpikeTrap_Weapon_C.OnDetachedFromVehicle_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraVehicleBase*     LastVehicle                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpikeTrap_Weapon_C::OnDetachedFromVehicle_Event_1(class ASTExtraVehicleBase* LastVehicle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_SpikeTrap_Weapon.BP_SpikeTrap_Weapon_C.OnDetachedFromVehicle_Event_1");

	ABP_SpikeTrap_Weapon_C_OnDetachedFromVehicle_Event_1_Params params;
	params.LastVehicle = LastVehicle;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_SpikeTrap_Weapon.BP_SpikeTrap_Weapon_C.OnWeaponChangeStateCommon_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<enum EFreshWeaponStateType> LastState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<enum EFreshWeaponStateType> NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpikeTrap_Weapon_C::OnWeaponChangeStateCommon_Event_1(TEnumAsByte<enum EFreshWeaponStateType> LastState, TEnumAsByte<enum EFreshWeaponStateType> NewState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_SpikeTrap_Weapon.BP_SpikeTrap_Weapon_C.OnWeaponChangeStateCommon_Event_1");

	ABP_SpikeTrap_Weapon_C_OnWeaponChangeStateCommon_Event_1_Params params;
	params.LastState = LastState;
	params.NewState = NewState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_SpikeTrap_Weapon.BP_SpikeTrap_Weapon_C.OnAttachedToVehicle_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraVehicleBase*     InVehicle                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpikeTrap_Weapon_C::OnAttachedToVehicle_Event_1(class ASTExtraVehicleBase* InVehicle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_SpikeTrap_Weapon.BP_SpikeTrap_Weapon_C.OnAttachedToVehicle_Event_1");

	ABP_SpikeTrap_Weapon_C_OnAttachedToVehicle_Event_1_Params params;
	params.InVehicle = InVehicle;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_SpikeTrap_Weapon.BP_SpikeTrap_Weapon_C.ExecuteUbergraph_BP_SpikeTrap_Weapon
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpikeTrap_Weapon_C::ExecuteUbergraph_BP_SpikeTrap_Weapon(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_SpikeTrap_Weapon.BP_SpikeTrap_Weapon_C.ExecuteUbergraph_BP_SpikeTrap_Weapon");

	ABP_SpikeTrap_Weapon_C_ExecuteUbergraph_BP_SpikeTrap_Weapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

