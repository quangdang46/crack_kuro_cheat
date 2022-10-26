// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BackpackSys_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BackpackSys.BackpackSys_C.IsLocalpositionInBorder
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               LocalCoordinate                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UWidget*                 Border                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackSys_C::IsLocalpositionInBorder(const struct FVector2D& LocalCoordinate, class UWidget* Border)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BackpackSys.BackpackSys_C.IsLocalpositionInBorder");

	UBackpackSys_C_IsLocalpositionInBorder_Params params;
	params.LocalCoordinate = LocalCoordinate;
	params.Border = Border;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BackpackSys.BackpackSys_C.GetAddExtraWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<struct FString, struct FString> WidgetMap                      (Parm, OutParm, ZeroConstructor)

void UBackpackSys_C::GetAddExtraWidget(TMap<struct FString, struct FString>* WidgetMap)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BackpackSys.BackpackSys_C.GetAddExtraWidget");

	UBackpackSys_C_GetAddExtraWidget_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (WidgetMap != nullptr)
		*WidgetMap = params.WidgetMap;
}

// Function BackpackSys.BackpackSys_C.CheckNeedVehicleBackPack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           need                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBackpackSys_C::CheckNeedVehicleBackPack(bool* need)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BackpackSys.BackpackSys_C.CheckNeedVehicleBackPack");

	UBackpackSys_C_CheckNeedVehicleBackPack_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (need != nullptr)
		*need = params.need;
}

// Function BackpackSys.BackpackSys_C.IsGunSupportAttachByDefine
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           gunDefine                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FItemDefineID           attachDefine                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           support                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBackpackSys_C::IsGunSupportAttachByDefine(const struct FItemDefineID& gunDefine, const struct FItemDefineID& attachDefine, bool* support)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BackpackSys.BackpackSys_C.IsGunSupportAttachByDefine");

	UBackpackSys_C_IsGunSupportAttachByDefine_Params params;
	params.gunDefine = gunDefine;
	params.attachDefine = attachDefine;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (support != nullptr)
		*support = params.support;
}

// Function BackpackSys.BackpackSys_C.IsGunSupportAttachByRes
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            gunResID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AttachResID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           support                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBackpackSys_C::IsGunSupportAttachByRes(int gunResID, int AttachResID, bool* support)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BackpackSys.BackpackSys_C.IsGunSupportAttachByRes");

	UBackpackSys_C_IsGunSupportAttachByRes_Params params;
	params.gunResID = gunResID;
	params.AttachResID = AttachResID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (support != nullptr)
		*support = params.support;
}

// Function BackpackSys.BackpackSys_C.GetWeaponSupportSocket
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WeaponId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<EWeaponAttachmentSocketType> socketList                     (Parm, OutParm, ZeroConstructor)

void UBackpackSys_C::GetWeaponSupportSocket(int WeaponId, TArray<EWeaponAttachmentSocketType>* socketList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BackpackSys.BackpackSys_C.GetWeaponSupportSocket");

	UBackpackSys_C_GetWeaponSupportSocket_Params params;
	params.WeaponId = WeaponId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (socketList != nullptr)
		*socketList = params.socketList;
}

// Function BackpackSys.BackpackSys_C.GetWeaponSupportAttachResID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WeaponId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    attachID                       (Parm, OutParm, ZeroConstructor)

void UBackpackSys_C::GetWeaponSupportAttachResID(int WeaponId, TArray<int>* attachID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BackpackSys.BackpackSys_C.GetWeaponSupportAttachResID");

	UBackpackSys_C_GetWeaponSupportAttachResID_Params params;
	params.WeaponId = WeaponId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (attachID != nullptr)
		*attachID = params.attachID;
}

// Function BackpackSys.BackpackSys_C.GetWeaponAttachPosByResID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EWeaponAttachmentSocketType    socket                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBackpackSys_C::GetWeaponAttachPosByResID(int resID, EWeaponAttachmentSocketType* socket)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BackpackSys.BackpackSys_C.GetWeaponAttachPosByResID");

	UBackpackSys_C_GetWeaponAttachPosByResID_Params params;
	params.resID = resID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (socket != nullptr)
		*socket = params.socket;
}

// Function BackpackSys.BackpackSys_C.AddToWeaponAttachPos
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            attachID                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// EWeaponAttachmentSocketType    socket                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackpackSys_C::AddToWeaponAttachPos(EWeaponAttachmentSocketType socket, int* attachID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BackpackSys.BackpackSys_C.AddToWeaponAttachPos");

	UBackpackSys_C_AddToWeaponAttachPos_Params params;
	params.socket = socket;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (attachID != nullptr)
		*attachID = params.attachID;
}

}

