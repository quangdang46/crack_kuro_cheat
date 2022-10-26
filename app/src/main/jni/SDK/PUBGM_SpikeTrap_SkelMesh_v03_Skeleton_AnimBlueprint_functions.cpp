// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_SpikeTrap_SkelMesh_v03_Skeleton_AnimBlueprint_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpikeTrap_SkelMesh_v03_Skeleton_AnimBlueprint.SpikeTrap_SkelMesh_v03_Skeleton_AnimBlueprint_C.ExecuteUbergraph_SpikeTrap_SkelMesh_v03_Skeleton_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USpikeTrap_SkelMesh_v03_Skeleton_AnimBlueprint_C::ExecuteUbergraph_SpikeTrap_SkelMesh_v03_Skeleton_AnimBlueprint(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function SpikeTrap_SkelMesh_v03_Skeleton_AnimBlueprint.SpikeTrap_SkelMesh_v03_Skeleton_AnimBlueprint_C.ExecuteUbergraph_SpikeTrap_SkelMesh_v03_Skeleton_AnimBlueprint");

	USpikeTrap_SkelMesh_v03_Skeleton_AnimBlueprint_C_ExecuteUbergraph_SpikeTrap_SkelMesh_v03_Skeleton_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

