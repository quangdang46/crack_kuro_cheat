// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_PetEntityComponent_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PetEntityComponent_BP.PetEntityComponent_BP_C.GetAttachInfoFromTable
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFixPetAttachInfo*      Info                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPetAttachInfo          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPetAttachInfo UPetEntityComponent_BP_C::GetAttachInfoFromTable(struct FFixPetAttachInfo* Info)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PetEntityComponent_BP.PetEntityComponent_BP_C.GetAttachInfoFromTable");

	UPetEntityComponent_BP_C_GetAttachInfoFromTable_Params params;
	params.Info = Info;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

}

