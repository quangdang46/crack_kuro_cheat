// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_Grenade_StickyBomb_Weapon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Grenade_StickyBomb_Weapon.BP_Grenade_StickyBomb_Weapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Grenade_StickyBomb_Weapon_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_Grenade_StickyBomb_Weapon.BP_Grenade_StickyBomb_Weapon_C.UserConstructionScript");

	ABP_Grenade_StickyBomb_Weapon_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

