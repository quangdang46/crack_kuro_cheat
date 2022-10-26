// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_bp_setting_picture_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bp_setting_picture.bp_setting_picture_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_setting_picture_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function bp_setting_picture.bp_setting_picture_C.UserConstructionScript");

	Abp_setting_picture_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

