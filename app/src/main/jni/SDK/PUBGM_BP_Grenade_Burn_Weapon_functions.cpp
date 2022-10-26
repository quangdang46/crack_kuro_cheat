// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_Grenade_Burn_Weapon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Grenade_Burn_Weapon.BP_Grenade_Burn_Weapon_C.GetSkillEntryForMeleeWeapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPressed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EUTSkillEntry                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EUTSkillEntry ABP_Grenade_Burn_Weapon_C::GetSkillEntryForMeleeWeapon(bool IsPressed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_Grenade_Burn_Weapon.BP_Grenade_Burn_Weapon_C.GetSkillEntryForMeleeWeapon");

	ABP_Grenade_Burn_Weapon_C_GetSkillEntryForMeleeWeapon_Params params;
	params.IsPressed = IsPressed;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP_Grenade_Burn_Weapon.BP_Grenade_Burn_Weapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Grenade_Burn_Weapon_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_Grenade_Burn_Weapon.BP_Grenade_Burn_Weapon_C.UserConstructionScript");

	ABP_Grenade_Burn_Weapon_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

