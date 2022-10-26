// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BP_OBEffectBullet_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_OBEffectBullet.BP_OBEffectBullet_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_OBEffectBullet_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_OBEffectBullet.BP_OBEffectBullet_C.UserConstructionScript");

	ABP_OBEffectBullet_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

