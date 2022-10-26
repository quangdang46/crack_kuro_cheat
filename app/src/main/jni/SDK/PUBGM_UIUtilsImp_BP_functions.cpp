// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_UIUtilsImp_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UIUtilsImp_BP.UIUtilsImp_BP_C.GetSettingConfigSaveGameData
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USaveGame* UUIUtilsImp_BP_C::GetSettingConfigSaveGameData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UIUtilsImp_BP.UIUtilsImp_BP_C.GetSettingConfigSaveGameData");

	UUIUtilsImp_BP_C_GetSettingConfigSaveGameData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UIUtilsImp_BP.UIUtilsImp_BP_C.OnAsyncLoadOtherAsset
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject**                AsyAsset                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UImage**                 TarImage                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          KeepSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUIUtilsImp_BP_C::OnAsyncLoadOtherAsset(class UObject** AsyAsset, class UImage** TarImage, bool* KeepSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UIUtilsImp_BP.UIUtilsImp_BP_C.OnAsyncLoadOtherAsset");

	UUIUtilsImp_BP_C_OnAsyncLoadOtherAsset_Params params;
	params.AsyAsset = AsyAsset;
	params.TarImage = TarImage;
	params.KeepSize = KeepSize;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function UIUtilsImp_BP.UIUtilsImp_BP_C.ExecuteUbergraph_UIUtilsImp_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUIUtilsImp_BP_C::ExecuteUbergraph_UIUtilsImp_BP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UIUtilsImp_BP.UIUtilsImp_BP_C.ExecuteUbergraph_UIUtilsImp_BP");

	UUIUtilsImp_BP_C_ExecuteUbergraph_UIUtilsImp_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

