// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_SwimController_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SwimController.BP_SwimController_C.EnterWater_BluePrint
// (Event, Public, BlueprintEvent)

void UBP_SwimController_C::EnterWater_BluePrint()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_SwimController.BP_SwimController_C.EnterWater_BluePrint");

	UBP_SwimController_C_EnterWater_BluePrint_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_SwimController.BP_SwimController_C.BP_UnderWaterStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bEnterWater                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SwimController_C::BP_UnderWaterStateChanged(bool* bEnterWater)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_SwimController.BP_SwimController_C.BP_UnderWaterStateChanged");

	UBP_SwimController_C_BP_UnderWaterStateChanged_Params params;
	params.bEnterWater = bEnterWater;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_SwimController.BP_SwimController_C.ExecuteUbergraph_BP_SwimController
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SwimController_C::ExecuteUbergraph_BP_SwimController(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_SwimController.BP_SwimController_C.ExecuteUbergraph_BP_SwimController");

	UBP_SwimController_C_ExecuteUbergraph_BP_SwimController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

