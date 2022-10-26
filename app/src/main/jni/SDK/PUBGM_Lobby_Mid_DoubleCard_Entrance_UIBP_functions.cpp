// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_Lobby_Mid_DoubleCard_Entrance_UIBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Lobby_Mid_DoubleCard_Entrance_UIBP.Lobby_Mid_DoubleCard_Entrance_UIBP_C.ExecuteUbergraph_Lobby_Mid_DoubleCard_Entrance_UIBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobby_Mid_DoubleCard_Entrance_UIBP_C::ExecuteUbergraph_Lobby_Mid_DoubleCard_Entrance_UIBP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Lobby_Mid_DoubleCard_Entrance_UIBP.Lobby_Mid_DoubleCard_Entrance_UIBP_C.ExecuteUbergraph_Lobby_Mid_DoubleCard_Entrance_UIBP");

	ULobby_Mid_DoubleCard_Entrance_UIBP_C_ExecuteUbergraph_Lobby_Mid_DoubleCard_Entrance_UIBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

