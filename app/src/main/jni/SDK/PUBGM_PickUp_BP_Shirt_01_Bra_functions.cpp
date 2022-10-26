// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_PickUp_BP_Shirt_01_Bra_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PickUp_BP_Shirt_01_Bra.PickUp_BP_Shirt_01_Bra_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APickUp_BP_Shirt_01_Bra_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PickUp_BP_Shirt_01_Bra.PickUp_BP_Shirt_01_Bra_C.UserConstructionScript");

	APickUp_BP_Shirt_01_Bra_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

