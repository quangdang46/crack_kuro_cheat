// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BP_Rifle_SCAR_Wrapper_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Rifle_SCAR_Wrapper.BP_Rifle_SCAR_Wrapper_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Rifle_SCAR_Wrapper_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_Rifle_SCAR_Wrapper.BP_Rifle_SCAR_Wrapper_C.UserConstructionScript");

	ABP_Rifle_SCAR_Wrapper_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

