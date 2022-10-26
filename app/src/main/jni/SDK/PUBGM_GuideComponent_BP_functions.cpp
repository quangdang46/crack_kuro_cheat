// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_GuideComponent_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GuideComponent_BP.GuideComponent_BP_C.ShowGuideByStep
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGuideComponent_BP_C::ShowGuideByStep()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GuideComponent_BP.GuideComponent_BP_C.ShowGuideByStep");

	UGuideComponent_BP_C_ShowGuideByStep_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function GuideComponent_BP.GuideComponent_BP_C.AddUIGuide
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 widget1                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            guildUI1                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               offset1                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               size1                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// int                            childData1                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGuideComponent_BP_C::AddUIGuide(class UWidget* widget1, int guildUI1, const struct FVector2D& offset1, const struct FVector2D& size1, int childData1)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GuideComponent_BP.GuideComponent_BP_C.AddUIGuide");

	UGuideComponent_BP_C_AddUIGuide_Params params;
	params.widget1 = widget1;
	params.guildUI1 = guildUI1;
	params.offset1 = offset1;
	params.size1 = size1;
	params.childData1 = childData1;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function GuideComponent_BP.GuideComponent_BP_C.InitUIGuide
// (Public, BlueprintCallable, BlueprintEvent)

void UGuideComponent_BP_C::InitUIGuide()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GuideComponent_BP.GuideComponent_BP_C.InitUIGuide");

	UGuideComponent_BP_C_InitUIGuide_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function GuideComponent_BP.GuideComponent_BP_C.CreateGuideUI
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGuideComponent_BP_C::CreateGuideUI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GuideComponent_BP.GuideComponent_BP_C.CreateGuideUI");

	UGuideComponent_BP_C_CreateGuideUI_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function GuideComponent_BP.GuideComponent_BP_C.ExecuteUbergraph_GuideComponent_BP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGuideComponent_BP_C::ExecuteUbergraph_GuideComponent_BP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GuideComponent_BP.GuideComponent_BP_C.ExecuteUbergraph_GuideComponent_BP");

	UGuideComponent_BP_C_ExecuteUbergraph_GuideComponent_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

