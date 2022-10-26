// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_IngamePlayerDataSys_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IngamePlayerDataSys.IngamePlayerDataSys_C.GetPlayerLevel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Level                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UIngamePlayerDataSys_C::GetPlayerLevel(int* Level)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function IngamePlayerDataSys.IngamePlayerDataSys_C.GetPlayerLevel");

	UIngamePlayerDataSys_C_GetPlayerLevel_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Level != nullptr)
		*Level = params.Level;
}

}

