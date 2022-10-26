// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_Phone_Anim_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Phone_Anim.BP_Phone_Anim_C.AnimNotify_HidePhone
// (BlueprintCallable, BlueprintEvent)

void UBP_Phone_Anim_C::AnimNotify_HidePhone()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_Phone_Anim.BP_Phone_Anim_C.AnimNotify_HidePhone");

	UBP_Phone_Anim_C_AnimNotify_HidePhone_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_Phone_Anim.BP_Phone_Anim_C.ExecuteUbergraph_BP_Phone_Anim
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Phone_Anim_C::ExecuteUbergraph_BP_Phone_Anim(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_Phone_Anim.BP_Phone_Anim_C.ExecuteUbergraph_BP_Phone_Anim");

	UBP_Phone_Anim_C_ExecuteUbergraph_BP_Phone_Anim_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

