// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_OnHitByGrenade_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OnHitByGrenade.OnHitByGrenade_C.OnHitByCake
// (Public, BlueprintCallable, BlueprintEvent)

void UOnHitByGrenade_C::OnHitByCake()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function OnHitByGrenade.OnHitByGrenade_C.OnHitByCake");

	UOnHitByGrenade_C_OnHitByCake_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

