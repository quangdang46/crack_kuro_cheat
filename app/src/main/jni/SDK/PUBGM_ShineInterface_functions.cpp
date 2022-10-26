// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_ShineInterface_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ShineInterface.ShineInterface_C.ShowNormal
// (Public, BlueprintCallable, BlueprintEvent)

void UShineInterface_C::ShowNormal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function ShineInterface.ShineInterface_C.ShowNormal");

	UShineInterface_C_ShowNormal_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function ShineInterface.ShineInterface_C.ShowShine
// (Public, BlueprintCallable, BlueprintEvent)

void UShineInterface_C::ShowShine()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function ShineInterface.ShineInterface_C.ShowShine");

	UShineInterface_C_ShowShine_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

