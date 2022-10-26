// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_CH_MainChar_Anim_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CH_MainChar_Anim_BP.CH_MainChar_Anim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_MainChar_Anim_BP_AnimGraphNode_BlendListByBool_2E47FBFF49F72ABC9D5C60B35FCBF042
// (BlueprintEvent)

void UCH_MainChar_Anim_BP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CH_MainChar_Anim_BP_AnimGraphNode_BlendListByBool_2E47FBFF49F72ABC9D5C60B35FCBF042()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function CH_MainChar_Anim_BP.CH_MainChar_Anim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_MainChar_Anim_BP_AnimGraphNode_BlendListByBool_2E47FBFF49F72ABC9D5C60B35FCBF042");

	UCH_MainChar_Anim_BP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_MainChar_Anim_BP_AnimGraphNode_BlendListByBool_2E47FBFF49F72ABC9D5C60B35FCBF042_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function CH_MainChar_Anim_BP.CH_MainChar_Anim_BP_C.ExecuteUbergraph_CH_MainChar_Anim_BP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCH_MainChar_Anim_BP_C::ExecuteUbergraph_CH_MainChar_Anim_BP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function CH_MainChar_Anim_BP.CH_MainChar_Anim_BP_C.ExecuteUbergraph_CH_MainChar_Anim_BP");

	UCH_MainChar_Anim_BP_C_ExecuteUbergraph_CH_MainChar_Anim_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

