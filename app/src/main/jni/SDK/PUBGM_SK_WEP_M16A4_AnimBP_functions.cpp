// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_SK_WEP_M16A4_AnimBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SK_WEP_M16A4_AnimBP.SK_WEP_M16A4_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_M16A4_AnimBP_AnimGraphNode_BlendListByBool_6D4F4512407A8C6FFCEAC4BB78DA7372
// (BlueprintEvent)

void USK_WEP_M16A4_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_M16A4_AnimBP_AnimGraphNode_BlendListByBool_6D4F4512407A8C6FFCEAC4BB78DA7372()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function SK_WEP_M16A4_AnimBP.SK_WEP_M16A4_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_M16A4_AnimBP_AnimGraphNode_BlendListByBool_6D4F4512407A8C6FFCEAC4BB78DA7372");

	USK_WEP_M16A4_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_M16A4_AnimBP_AnimGraphNode_BlendListByBool_6D4F4512407A8C6FFCEAC4BB78DA7372_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function SK_WEP_M16A4_AnimBP.SK_WEP_M16A4_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USK_WEP_M16A4_AnimBP_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function SK_WEP_M16A4_AnimBP.SK_WEP_M16A4_AnimBP_C.BlueprintUpdateAnimation");

	USK_WEP_M16A4_AnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function SK_WEP_M16A4_AnimBP.SK_WEP_M16A4_AnimBP_C.ExecuteUbergraph_SK_WEP_M16A4_AnimBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USK_WEP_M16A4_AnimBP_C::ExecuteUbergraph_SK_WEP_M16A4_AnimBP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function SK_WEP_M16A4_AnimBP.SK_WEP_M16A4_AnimBP_C.ExecuteUbergraph_SK_WEP_M16A4_AnimBP");

	USK_WEP_M16A4_AnimBP_C_ExecuteUbergraph_SK_WEP_M16A4_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

