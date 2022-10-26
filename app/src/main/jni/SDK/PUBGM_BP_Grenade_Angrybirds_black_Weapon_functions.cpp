// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_Grenade_Angrybirds_black_Weapon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Grenade_Angrybirds_black_Weapon.BP_Grenade_Angrybirds_Black_Weapon_C.GetSkillEntryForMeleeWeapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPressed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EUTSkillEntry                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EUTSkillEntry ABP_Grenade_Angrybirds_Black_Weapon_C::GetSkillEntryForMeleeWeapon(bool IsPressed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_Grenade_Angrybirds_black_Weapon.BP_Grenade_Angrybirds_Black_Weapon_C.GetSkillEntryForMeleeWeapon");

	ABP_Grenade_Angrybirds_Black_Weapon_C_GetSkillEntryForMeleeWeapon_Params params;
	params.IsPressed = IsPressed;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP_Grenade_Angrybirds_black_Weapon.BP_Grenade_Angrybirds_Black_Weapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Grenade_Angrybirds_Black_Weapon_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_Grenade_Angrybirds_black_Weapon.BP_Grenade_Angrybirds_Black_Weapon_C.UserConstructionScript");

	ABP_Grenade_Angrybirds_Black_Weapon_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_Grenade_Angrybirds_black_Weapon.BP_Grenade_Angrybirds_Black_Weapon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Grenade_Angrybirds_Black_Weapon_C::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_Grenade_Angrybirds_black_Weapon.BP_Grenade_Angrybirds_Black_Weapon_C.ReceiveBeginPlay");

	ABP_Grenade_Angrybirds_Black_Weapon_C_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_Grenade_Angrybirds_black_Weapon.BP_Grenade_Angrybirds_Black_Weapon_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void ABP_Grenade_Angrybirds_Black_Weapon_C::CustomEvent_1()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_Grenade_Angrybirds_black_Weapon.BP_Grenade_Angrybirds_Black_Weapon_C.CustomEvent_1");

	ABP_Grenade_Angrybirds_Black_Weapon_C_CustomEvent_1_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_Grenade_Angrybirds_black_Weapon.BP_Grenade_Angrybirds_Black_Weapon_C.ExecuteUbergraph_BP_Grenade_Angrybirds_Black_Weapon
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Grenade_Angrybirds_Black_Weapon_C::ExecuteUbergraph_BP_Grenade_Angrybirds_Black_Weapon(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_Grenade_Angrybirds_black_Weapon.BP_Grenade_Angrybirds_Black_Weapon_C.ExecuteUbergraph_BP_Grenade_Angrybirds_Black_Weapon");

	ABP_Grenade_Angrybirds_Black_Weapon_C_ExecuteUbergraph_BP_Grenade_Angrybirds_Black_Weapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

