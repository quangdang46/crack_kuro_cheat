// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_PlayerEventForPet_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerEventForPet.PlayerEventForPet_C.PlayerStateChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPawnState                     State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<enum EPawnStateChangeType> changeType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerEventForPet_C::PlayerStateChange(EPawnState State, TEnumAsByte<enum EPawnStateChangeType> changeType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function PlayerEventForPet.PlayerEventForPet_C.PlayerStateChange");

	UPlayerEventForPet_C_PlayerStateChange_Params params;
	params.State = State;
	params.changeType = changeType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

