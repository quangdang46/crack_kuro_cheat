// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BattleItemHandle_GlideBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BattleItemHandle_GlideBP.BattleItemHandle_GlideBP_C.NewFunction_1
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleItemHandle_GlideBP_C::NewFunction_1()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BattleItemHandle_GlideBP.BattleItemHandle_GlideBP_C.NewFunction_1");

	UBattleItemHandle_GlideBP_C_NewFunction_1_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

