// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_Rifle_M16A4_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Rifle_M16A4.BP_Rifle_M16A4_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Rifle_M16A4_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_Rifle_M16A4.BP_Rifle_M16A4_C.UserConstructionScript");

	ABP_Rifle_M16A4_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

