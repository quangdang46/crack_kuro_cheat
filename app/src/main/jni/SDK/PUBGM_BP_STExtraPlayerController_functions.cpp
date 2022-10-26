// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_STExtraPlayerController_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.RPC_Client_WonderfulPeriod
// (Net, NetReliable, Public, NetClient)
// Parameters:
// int                            IntProperty_1                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          FloatProperty_1                (Parm, ZeroConstructor, IsPlainOldData)
// float                          FloatProperty_2                (Parm, ZeroConstructor, IsPlainOldData)
// TArray<float>                  ArrayProperty_1                (Parm, ZeroConstructor)
// int                            IntProperty_2                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::RPC_Client_WonderfulPeriod(int IntProperty_1, float FloatProperty_1, float FloatProperty_2, TArray<float> ArrayProperty_1, int IntProperty_2)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.RPC_Client_WonderfulPeriod");

	ABP_STExtraPlayerController_C_RPC_Client_WonderfulPeriod_Params params;
	params.IntProperty_1 = IntProperty_1;
	params.FloatProperty_1 = FloatProperty_1;
	params.FloatProperty_2 = FloatProperty_2;
	params.ArrayProperty_1 = ArrayProperty_1;
	params.IntProperty_2 = IntProperty_2;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadClientReplayConfig
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::ReadClientReplayConfig()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadClientReplayConfig");

	ABP_STExtraPlayerController_C_ReadClientReplayConfig_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InitLocalHelmetDisplay
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::InitLocalHelmetDisplay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InitLocalHelmetDisplay");

	ABP_STExtraPlayerController_C_InitLocalHelmetDisplay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.MapFromCBToESBH
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USettingConfig_C*        SettingConfig                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::MapFromCBToESBH(class USettingConfig_C* SettingConfig)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.MapFromCBToESBH");

	ABP_STExtraPlayerController_C_MapFromCBToESBH_Params params;
	params.SettingConfig = SettingConfig;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReceiveLuaTick
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::ReceiveLuaTick()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReceiveLuaTick");

	ABP_STExtraPlayerController_C_ReceiveLuaTick_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReceiveLuaBeginPlay
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::ReceiveLuaBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReceiveLuaBeginPlay");

	ABP_STExtraPlayerController_C_ReceiveLuaBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.StopAvatarDownload
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::StopAvatarDownload()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.StopAvatarDownload");

	ABP_STExtraPlayerController_C_StopAvatarDownload_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.SetMultiVersionRedSwitchConfig
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::SetMultiVersionRedSwitchConfig()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.SetMultiVersionRedSwitchConfig");

	ABP_STExtraPlayerController_C_SetMultiVersionRedSwitchConfig_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.MapFromCBToESGlobal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USettingConfig_C*        SettingConfig                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::MapFromCBToESGlobal(class USettingConfig_C* SettingConfig)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.MapFromCBToESGlobal");

	ABP_STExtraPlayerController_C_MapFromCBToESGlobal_Params params;
	params.SettingConfig = SettingConfig;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.MapFromCBToESVN
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USettingConfig_C*        SettingConfig                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::MapFromCBToESVN(class USettingConfig_C* SettingConfig)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.MapFromCBToESVN");

	ABP_STExtraPlayerController_C_MapFromCBToESVN_Params params;
	params.SettingConfig = SettingConfig;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.MapFromCBToESJK
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USettingConfig_C*        SettingConfig                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::MapFromCBToESJK(class USettingConfig_C* SettingConfig)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.MapFromCBToESJK");

	ABP_STExtraPlayerController_C_MapFromCBToESJK_Params params;
	params.SettingConfig = SettingConfig;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.MapFromCBToES
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::MapFromCBToES()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.MapFromCBToES");

	ABP_STExtraPlayerController_C_MapFromCBToES_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadConfigEffectSettingColorSingleLayer
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::ReadConfigEffectSettingColorSingleLayer(int NewParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadConfigEffectSettingColorSingleLayer");

	ABP_STExtraPlayerController_C_ReadConfigEffectSettingColorSingleLayer_Params params;
	params.NewParam = NewParam;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadConfigEffectSettingColorMultiLayer
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::ReadConfigEffectSettingColorMultiLayer(int NewParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadConfigEffectSettingColorMultiLayer");

	ABP_STExtraPlayerController_C_ReadConfigEffectSettingColorMultiLayer_Params params;
	params.NewParam = NewParam;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InitNewbieCounts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::InitNewbieCounts()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InitNewbieCounts");

	ABP_STExtraPlayerController_C_InitNewbieCounts_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.AddIgnoreCameraMoveIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<enum ETouchIndex>  _Index                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::AddIgnoreCameraMoveIndex(TEnumAsByte<enum ETouchIndex> _Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.AddIgnoreCameraMoveIndex");

	ABP_STExtraPlayerController_C_AddIgnoreCameraMoveIndex_Params params;
	params._Index = _Index;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadConfigColorBlindnessTypeBoolDelegate
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::ReadConfigColorBlindnessTypeBoolDelegate(bool NewParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadConfigColorBlindnessTypeBoolDelegate");

	ABP_STExtraPlayerController_C_ReadConfigColorBlindnessTypeBoolDelegate_Params params;
	params.NewParam = NewParam;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadConfigColorBlindnessTypeIntDelegate
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::ReadConfigColorBlindnessTypeIntDelegate(int NewParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadConfigColorBlindnessTypeIntDelegate");

	ABP_STExtraPlayerController_C_ReadConfigColorBlindnessTypeIntDelegate_Params params;
	params.NewParam = NewParam;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.CheckGlobalReadRed
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 StrID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bIsRed                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::CheckGlobalReadRed(const struct FString& StrID, bool* bIsRed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.CheckGlobalReadRed");

	ABP_STExtraPlayerController_C_CheckGlobalReadRed_Params params;
	params.StrID = StrID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bIsRed != nullptr)
		*bIsRed = params.bIsRed;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.CheckIsBood
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 StrID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bIsBlood                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::CheckIsBood(const struct FString& StrID, bool* bIsBlood)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.CheckIsBood");

	ABP_STExtraPlayerController_C_CheckIsBood_Params params;
	params.StrID = StrID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bIsBlood != nullptr)
		*bIsBlood = params.bIsBlood;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.CheckJapnReadRed
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 StrID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bIsRed                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::CheckJapnReadRed(const struct FString& StrID, bool* bIsRed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.CheckJapnReadRed");

	ABP_STExtraPlayerController_C_CheckJapnReadRed_Params params;
	params.StrID = StrID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bIsRed != nullptr)
		*bIsRed = params.bIsRed;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.GetJKCBColor
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bFind                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, OutParm, IsPlainOldData)

void ABP_STExtraPlayerController_C::GetJKCBColor(const struct FString& ID, bool* bFind, struct FLinearColor* Color)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.GetJKCBColor");

	ABP_STExtraPlayerController_C_GetJKCBColor_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bFind != nullptr)
		*bFind = params.bFind;
	if (Color != nullptr)
		*Color = params.Color;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.GetVNCBColor
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bFind                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, OutParm, IsPlainOldData)

void ABP_STExtraPlayerController_C::GetVNCBColor(const struct FString& ID, bool* bFind, struct FLinearColor* Color)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.GetVNCBColor");

	ABP_STExtraPlayerController_C_GetVNCBColor_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bFind != nullptr)
		*bFind = params.bFind;
	if (Color != nullptr)
		*Color = params.Color;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.GetCBColor
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBP_STRUCT_ColorBlindnessConfig_type tempCBData                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor            Color                          (Parm, OutParm, IsPlainOldData)

void ABP_STExtraPlayerController_C::GetCBColor(const struct FBP_STRUCT_ColorBlindnessConfig_type& tempCBData, struct FLinearColor* Color)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.GetCBColor");

	ABP_STExtraPlayerController_C_GetCBColor_Params params;
	params.tempCBData = tempCBData;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadConfigColorBlindnessType
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::ReadConfigColorBlindnessType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadConfigColorBlindnessType");

	ABP_STExtraPlayerController_C_ReadConfigColorBlindnessType_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.CurGameMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            GameMode                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::CurGameMode(int* GameMode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.CurGameMode");

	ABP_STExtraPlayerController_C_CurGameMode_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (GameMode != nullptr)
		*GameMode = params.GameMode;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.IsFPP
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsFPP                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::IsFPP(bool* IsFPP)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.IsFPP");

	ABP_STExtraPlayerController_C_IsFPP_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (IsFPP != nullptr)
		*IsFPP = params.IsFPP;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnRep_InWateringRange
// (BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::OnRep_InWateringRange()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnRep_InWateringRange");

	ABP_STExtraPlayerController_C_OnRep_InWateringRange_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.LoadAllBattleSound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::LoadAllBattleSound()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.LoadAllBattleSound");

	ABP_STExtraPlayerController_C_LoadAllBattleSound_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.AsyncLoadBattleSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SoundID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::AsyncLoadBattleSound(class UObject* Object, int SoundID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.AsyncLoadBattleSound");

	ABP_STExtraPlayerController_C_AsyncLoadBattleSound_Params params;
	params.Object = Object;
	params.SoundID = SoundID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.LoadBattleSound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 BankName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            SoundID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::LoadBattleSound(const struct FString& BankName, const struct FString& EventName, int SoundID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.LoadBattleSound");

	ABP_STExtraPlayerController_C_LoadBattleSound_Params params;
	params.BankName = BankName;
	params.EventName = EventName;
	params.SoundID = SoundID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.SetAlwaysHideTouchInterface
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hide                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::SetAlwaysHideTouchInterface(bool Hide)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.SetAlwaysHideTouchInterface");

	ABP_STExtraPlayerController_C_SetAlwaysHideTouchInterface_Params params;
	params.Hide = Hide;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.PlayBattleSoundInBP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SoundID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::PlayBattleSoundInBP(int SoundID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.PlayBattleSoundInBP");

	ABP_STExtraPlayerController_C_PlayBattleSoundInBP_Params params;
	params.SoundID = SoundID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.IsReleasePosInAimBtnRange
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_STExtraPlayerController_C::IsReleasePosInAimBtnRange(struct FVector* Loc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.IsReleasePosInAimBtnRange");

	ABP_STExtraPlayerController_C_IsReleasePosInAimBtnRange_Params params;
	params.Loc = Loc;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadEmoteDataRowPC
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::ReadEmoteDataRowPC()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadEmoteDataRowPC");

	ABP_STExtraPlayerController_C_ReadEmoteDataRowPC_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.IsAtaptation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           adaptation                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::IsAtaptation(bool* adaptation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.IsAtaptation");

	ABP_STExtraPlayerController_C_IsAtaptation_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (adaptation != nullptr)
		*adaptation = params.adaptation;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadAdaptationTable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::ReadAdaptationTable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadAdaptationTable");

	ABP_STExtraPlayerController_C_ReadAdaptationTable_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InitWeather
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::InitWeather()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InitWeather");

	ABP_STExtraPlayerController_C_InitWeather_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.SetMotionParam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::SetMotionParam()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.SetMotionParam");

	ABP_STExtraPlayerController_C_SetMotionParam_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.GetStickLeftSize
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Size                           (Parm, OutParm, IsPlainOldData)

void ABP_STExtraPlayerController_C::GetStickLeftSize(struct FVector2D* Size)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.GetStickLeftSize");

	ABP_STExtraPlayerController_C_GetStickLeftSize_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Size != nullptr)
		*Size = params.Size;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ShowFightingUI
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::ShowFightingUI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ShowFightingUI");

	ABP_STExtraPlayerController_C_ShowFightingUI_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ShowAutoSprintBtn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               showPos_                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           inside                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::ShowAutoSprintBtn(bool Visible, const struct FVector2D& showPos_, bool inside)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ShowAutoSprintBtn");

	ABP_STExtraPlayerController_C_ShowAutoSprintBtn_Params params;
	params.Visible = Visible;
	params.showPos_ = showPos_;
	params.inside = inside;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadConfigCrossHairColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::ReadConfigCrossHairColor(int NewParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadConfigCrossHairColor");

	ABP_STExtraPlayerController_C_ReadConfigCrossHairColor_Params params;
	params.NewParam = NewParam;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadConfigMotionControl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::ReadConfigMotionControl(int NewParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadConfigMotionControl");

	ABP_STExtraPlayerController_C_ReadConfigMotionControl_Params params;
	params.NewParam = NewParam;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadConfigAutoAim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::ReadConfigAutoAim(bool NewParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadConfigAutoAim");

	ABP_STExtraPlayerController_C_ReadConfigAutoAim_Params params;
	params.NewParam = NewParam;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadConfigFromHUD
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::ReadConfigFromHUD()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadConfigFromHUD");

	ABP_STExtraPlayerController_C_ReadConfigFromHUD_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.MakeFireModeEffect
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::MakeFireModeEffect()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.MakeFireModeEffect");

	ABP_STExtraPlayerController_C_MakeFireModeEffect_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.DebugNotDrawGuideLine
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::DebugNotDrawGuideLine()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.DebugNotDrawGuideLine");

	ABP_STExtraPlayerController_C_DebugNotDrawGuideLine_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ShowBackpackTombBox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::ShowBackpackTombBox(bool Show)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ShowBackpackTombBox");

	ABP_STExtraPlayerController_C_ShowBackpackTombBox_Params params;
	params.Show = Show;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.BindOrUnBindJoyStickSprint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsBind                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::BindOrUnBindJoyStickSprint(bool IsBind)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.BindOrUnBindJoyStickSprint");

	ABP_STExtraPlayerController_C_BindOrUnBindJoyStickSprint_Params params;
	params.IsBind = IsBind;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.CreateRank
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Kills                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Rank                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::CreateRank(int Kills, int Rank)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.CreateRank");

	ABP_STExtraPlayerController_C_CreateRank_Params params;
	params.Kills = Kills;
	params.Rank = Rank;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.DisableAimIfUnEquipWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<enum ESurviveWeaponPropSlot> WeaponType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::DisableAimIfUnEquipWeapon(TEnumAsByte<enum ESurviveWeaponPropSlot> WeaponType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.DisableAimIfUnEquipWeapon");

	ABP_STExtraPlayerController_C_DisableAimIfUnEquipWeapon_Params params;
	params.WeaponType = WeaponType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.SwitchAimMode
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::SwitchAimMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.SwitchAimMode");

	ABP_STExtraPlayerController_C_SwitchAimMode_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.DoInitUI
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::DoInitUI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.DoInitUI");

	ABP_STExtraPlayerController_C_DoInitUI_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.HandleJumpBtnPressEvent
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::HandleJumpBtnPressEvent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.HandleJumpBtnPressEvent");

	ABP_STExtraPlayerController_C_HandleJumpBtnPressEvent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnRep_bInCar
// (BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::OnRep_bInCar()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnRep_bInCar");

	ABP_STExtraPlayerController_C_OnRep_bInCar_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.RefreshUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::RefreshUI(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.RefreshUI");

	ABP_STExtraPlayerController_C_RefreshUI_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.UpdateInputPanel
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::UpdateInputPanel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.UpdateInputPanel");

	ABP_STExtraPlayerController_C_UpdateInputPanel_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ShowBackpackIconSplash
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::ShowBackpackIconSplash(bool bShow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ShowBackpackIconSplash");

	ABP_STExtraPlayerController_C_ShowBackpackIconSplash_Params params;
	params.bShow = bShow;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.RefreshWeaponPanel
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::RefreshWeaponPanel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.RefreshWeaponPanel");

	ABP_STExtraPlayerController_C_RefreshWeaponPanel_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.SetTouchInputEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::SetTouchInputEnabled(bool bEnabled)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.SetTouchInputEnabled");

	ABP_STExtraPlayerController_C_SetTouchInputEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ShowMainInputControl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::ShowMainInputControl(bool bShow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ShowMainInputControl");

	ABP_STExtraPlayerController_C_ShowMainInputControl_Params params;
	params.bShow = bShow;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ShowTouchInterface
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::ShowTouchInterface(bool bShow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ShowTouchInterface");

	ABP_STExtraPlayerController_C_ShowTouchInterface_Params params;
	params.bShow = bShow;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.EnableDeathGray
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BlendWeight                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::EnableDeathGray(float BlendWeight)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.EnableDeathGray");

	ABP_STExtraPlayerController_C_EnableDeathGray_Params params;
	params.BlendWeight = BlendWeight;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.SetDeathGrayLerpValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Lerp                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::SetDeathGrayLerpValue(float Lerp)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.SetDeathGrayLerpValue");

	ABP_STExtraPlayerController_C_SetDeathGrayLerpValue_Params params;
	params.Lerp = Lerp;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.SetPostProcessVolume
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::SetPostProcessVolume()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.SetPostProcessVolume");

	ABP_STExtraPlayerController_C_SetPostProcessVolume_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.UserConstructionScript");

	ABP_STExtraPlayerController_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.GrayToOne__FinishedFunc
// (BlueprintEvent)

void ABP_STExtraPlayerController_C::GrayToOne__FinishedFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.GrayToOne__FinishedFunc");

	ABP_STExtraPlayerController_C_GrayToOne__FinishedFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.GrayToOne__UpdateFunc
// (BlueprintEvent)

void ABP_STExtraPlayerController_C::GrayToOne__UpdateFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.GrayToOne__UpdateFunc");

	ABP_STExtraPlayerController_C_GrayToOne__UpdateFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.GrayToZero__FinishedFunc
// (BlueprintEvent)

void ABP_STExtraPlayerController_C::GrayToZero__FinishedFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.GrayToZero__FinishedFunc");

	ABP_STExtraPlayerController_C_GrayToZero__FinishedFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.GrayToZero__UpdateFunc
// (BlueprintEvent)

void ABP_STExtraPlayerController_C::GrayToZero__UpdateFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.GrayToZero__UpdateFunc");

	ABP_STExtraPlayerController_C_GrayToZero__UpdateFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_NumPadEight_K2Node_InputKeyEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_STExtraPlayerController_C::InpActEvt_NumPadEight_K2Node_InputKeyEvent_8(const struct FKey& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_NumPadEight_K2Node_InputKeyEvent_8");

	ABP_STExtraPlayerController_C_InpActEvt_NumPadEight_K2Node_InputKeyEvent_8_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_NumPadNine_K2Node_InputKeyEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_STExtraPlayerController_C::InpActEvt_NumPadNine_K2Node_InputKeyEvent_7(const struct FKey& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_NumPadNine_K2Node_InputKeyEvent_7");

	ABP_STExtraPlayerController_C_InpActEvt_NumPadNine_K2Node_InputKeyEvent_7_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_ToggleTeamListPanel_K2Node_InputActionEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_STExtraPlayerController_C::InpActEvt_ToggleTeamListPanel_K2Node_InputActionEvent_10(const struct FKey& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_ToggleTeamListPanel_K2Node_InputActionEvent_10");

	ABP_STExtraPlayerController_C_InpActEvt_ToggleTeamListPanel_K2Node_InputActionEvent_10_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_ToggleTeamListPanel_K2Node_InputActionEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_STExtraPlayerController_C::InpActEvt_ToggleTeamListPanel_K2Node_InputActionEvent_9(const struct FKey& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_ToggleTeamListPanel_K2Node_InputActionEvent_9");

	ABP_STExtraPlayerController_C_InpActEvt_ToggleTeamListPanel_K2Node_InputActionEvent_9_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_SwitchToTeam_DelOneNum_K2Node_InputActionEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_STExtraPlayerController_C::InpActEvt_SwitchToTeam_DelOneNum_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_SwitchToTeam_DelOneNum_K2Node_InputActionEvent_8");

	ABP_STExtraPlayerController_C_InpActEvt_SwitchToTeam_DelOneNum_K2Node_InputActionEvent_8_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_SwitchToTeam_ClearTeamID_K2Node_InputActionEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_STExtraPlayerController_C::InpActEvt_SwitchToTeam_ClearTeamID_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_SwitchToTeam_ClearTeamID_K2Node_InputActionEvent_7");

	ABP_STExtraPlayerController_C_InpActEvt_SwitchToTeam_ClearTeamID_K2Node_InputActionEvent_7_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_SwitchToTeam_PostTeamID_K2Node_InputActionEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_STExtraPlayerController_C::InpActEvt_SwitchToTeam_PostTeamID_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_SwitchToTeam_PostTeamID_K2Node_InputActionEvent_6");

	ABP_STExtraPlayerController_C_InpActEvt_SwitchToTeam_PostTeamID_K2Node_InputActionEvent_6_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_Android_Back_K2Node_InputKeyEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_STExtraPlayerController_C::InpActEvt_Android_Back_K2Node_InputKeyEvent_6(const struct FKey& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_Android_Back_K2Node_InputKeyEvent_6");

	ABP_STExtraPlayerController_C_InpActEvt_Android_Back_K2Node_InputKeyEvent_6_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_E_K2Node_InputKeyEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_STExtraPlayerController_C::InpActEvt_E_K2Node_InputKeyEvent_5(const struct FKey& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpActEvt_E_K2Node_InputKeyEvent_5");

	ABP_STExtraPlayerController_C_InpActEvt_E_K2Node_InputKeyEvent_5_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnCharacterCurrentActivityIDRep
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           CurrentActivityID              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::OnCharacterCurrentActivityIDRep(int* CurrentActivityID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnCharacterCurrentActivityIDRep");

	ABP_STExtraPlayerController_C_OnCharacterCurrentActivityIDRep_Params params;
	params.CurrentActivityID = CurrentActivityID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_STExtraPlayerController_C::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReceiveBeginPlay");

	ABP_STExtraPlayerController_C_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnSpectatorCameraChange
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bDie                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::OnSpectatorCameraChange(bool* bDie)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnSpectatorCameraChange");

	ABP_STExtraPlayerController_C_OnSpectatorCameraChange_Params params;
	params.bDie = bDie;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnStopFireEventHandle
// (BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::OnStopFireEventHandle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnStopFireEventHandle");

	ABP_STExtraPlayerController_C_OnStopFireEventHandle_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnSwitchCameraSatrtHandle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<enum EPlayerCameraMode> CameraMode                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::OnSwitchCameraSatrtHandle(TEnumAsByte<enum EPlayerCameraMode> CameraMode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnSwitchCameraSatrtHandle");

	ABP_STExtraPlayerController_C_OnSwitchCameraSatrtHandle_Params params;
	params.CameraMode = CameraMode;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnPlayerPutDownActorHandle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraBaseCharacter*   TargetPlayer                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::OnPlayerPutDownActorHandle(class ASTExtraBaseCharacter* TargetPlayer, class AActor* TargetActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnPlayerPutDownActorHandle");

	ABP_STExtraPlayerController_C_OnPlayerPutDownActorHandle_Params params;
	params.TargetPlayer = TargetPlayer;
	params.TargetActor = TargetActor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnSwitchWeaponHandle
// (BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::OnSwitchWeaponHandle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnSwitchWeaponHandle");

	ABP_STExtraPlayerController_C_OnSwitchWeaponHandle_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::ReceiveTick(float* DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReceiveTick");

	ABP_STExtraPlayerController_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnUseInventoryitemHandle
// (BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::OnUseInventoryitemHandle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnUseInventoryitemHandle");

	ABP_STExtraPlayerController_C_OnUseInventoryitemHandle_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ServerStartBattle
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::ServerStartBattle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ServerStartBattle");

	ABP_STExtraPlayerController_C_ServerStartBattle_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ServerAfterLand
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::ServerAfterLand()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ServerAfterLand");

	ABP_STExtraPlayerController_C_ServerAfterLand_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ClientAfterLand
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::ClientAfterLand()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ClientAfterLand");

	ABP_STExtraPlayerController_C_ClientAfterLand_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.RefreshTopMostUIPanel
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<enum ETopMostUIPanelType>* Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::RefreshTopMostUIPanel(TEnumAsByte<enum ETopMostUIPanelType>* Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.RefreshTopMostUIPanel");

	ABP_STExtraPlayerController_C_RefreshTopMostUIPanel_Params params;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.GameStart
// (BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::GameStart()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.GameStart");

	ABP_STExtraPlayerController_C_GameStart_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.RemoveWeaponAim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<enum ESurviveWeaponPropSlot> Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::RemoveWeaponAim(TEnumAsByte<enum ESurviveWeaponPropSlot> Slot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.RemoveWeaponAim");

	ABP_STExtraPlayerController_C_RemoveWeaponAim_Params params;
	params.Slot = Slot;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.SetMoveableAirborne
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::SetMoveableAirborne(bool NewParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.SetMoveableAirborne");

	ABP_STExtraPlayerController_C_SetMoveableAirborne_Params params;
	params.NewParam = NewParam;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnLandOnGroundAfterJumpPlaneEnd
// (Event, Public, BlueprintEvent)

void ABP_STExtraPlayerController_C::OnLandOnGroundAfterJumpPlaneEnd()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnLandOnGroundAfterJumpPlaneEnd");

	ABP_STExtraPlayerController_C_OnLandOnGroundAfterJumpPlaneEnd_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.JoystickTriggerSprint
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bIsSprint                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::JoystickTriggerSprint(bool* bIsSprint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.JoystickTriggerSprint");

	ABP_STExtraPlayerController_C_JoystickTriggerSprint_Params params;
	params.bIsSprint = bIsSprint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnPlane
// (BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::OnPlane()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnPlane");

	ABP_STExtraPlayerController_C_OnPlane_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.SetPanels
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UUAEUserWidget*>* panels                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_STExtraPlayerController_C::SetPanels(TArray<class UUAEUserWidget*>* panels)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.SetPanels");

	ABP_STExtraPlayerController_C_SetPanels_Params params;
	params.panels = panels;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InitOprate
// (BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::InitOprate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InitOprate");

	ABP_STExtraPlayerController_C_InitOprate_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnFiremodeChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            IntValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::OnFiremodeChange(int IntValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnFiremodeChange");

	ABP_STExtraPlayerController_C_OnFiremodeChange_Params params;
	params.IntValue = IntValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ChangeToMale
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::ChangeToMale()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ChangeToMale");

	ABP_STExtraPlayerController_C_ChangeToMale_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ChangeToFemale
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::ChangeToFemale()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ChangeToFemale");

	ABP_STExtraPlayerController_C_ChangeToFemale_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.DoUITouchMove
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_STExtraPlayerController_C::DoUITouchMove(struct FVector* Loc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.DoUITouchMove");

	ABP_STExtraPlayerController_C_DoUITouchMove_Params params;
	params.Loc = Loc;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.PressFire
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           FingerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::PressFire(int* FingerIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.PressFire");

	ABP_STExtraPlayerController_C_PressFire_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ShowFireBtn
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::ShowFireBtn(bool* bShow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ShowFireBtn");

	ABP_STExtraPlayerController_C_ShowFireBtn_Params params;
	params.bShow = bShow;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.PressGrenade
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          isThrow                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::PressGrenade(bool* isThrow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.PressGrenade");

	ABP_STExtraPlayerController_C_PressGrenade_Params params;
	params.isThrow = isThrow;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InitJoyStickAfterActivation
// (Event, Public, BlueprintEvent)

void ABP_STExtraPlayerController_C::InitJoyStickAfterActivation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InitJoyStickAfterActivation");

	ABP_STExtraPlayerController_C_InitJoyStickAfterActivation_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.MemberVoice
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           member                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Status                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::MemberVoice(int* member, int* Status)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.MemberVoice");

	ABP_STExtraPlayerController_C_MemberVoice_Params params;
	params.member = member;
	params.Status = Status;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReceiveClientRestart
// (Event, Public, BlueprintEvent)

void ABP_STExtraPlayerController_C::ReceiveClientRestart()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReceiveClientRestart");

	ABP_STExtraPlayerController_C_ReceiveClientRestart_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnShowAnimationButton
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           NewUIType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::OnShowAnimationButton(bool* IsShow, int* NewUIType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnShowAnimationButton");

	ABP_STExtraPlayerController_C_OnShowAnimationButton_Params params;
	params.IsShow = IsShow;
	params.NewUIType = NewUIType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnWeaponEquipAttachment
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TEnumAsByte<enum ESurviveWeaponPropSlot>* WeaponPropSlot                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FItemDefineID*          DefineID                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool*                          bEquip                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::OnWeaponEquipAttachment(TEnumAsByte<enum ESurviveWeaponPropSlot>* WeaponPropSlot, struct FItemDefineID* DefineID, bool* bEquip)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnWeaponEquipAttachment");

	ABP_STExtraPlayerController_C_OnWeaponEquipAttachment_Params params;
	params.WeaponPropSlot = WeaponPropSlot;
	params.DefineID = DefineID;
	params.bEquip = bEquip;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ResetMissingUIUpdate
// (Event, Public, BlueprintEvent)

void ABP_STExtraPlayerController_C::ResetMissingUIUpdate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ResetMissingUIUpdate");

	ABP_STExtraPlayerController_C_ResetMissingUIUpdate_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.MotionControliOS
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_STExtraPlayerController_C::MotionControliOS(const struct FVector& AxisValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.MotionControliOS");

	ABP_STExtraPlayerController_C_MotionControliOS_Params params;
	params.AxisValue = AxisValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpAxisKeyEvt_RotationRate_K2Node_InputVectorAxisEvent_1
// (BlueprintEvent)
// Parameters:
// struct FVector                 AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_STExtraPlayerController_C::InpAxisKeyEvt_RotationRate_K2Node_InputVectorAxisEvent_1(const struct FVector& AxisValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpAxisKeyEvt_RotationRate_K2Node_InputVectorAxisEvent_1");

	ABP_STExtraPlayerController_C_InpAxisKeyEvt_RotationRate_K2Node_InputVectorAxisEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.MotionControlAndroidTick
// (BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::MotionControlAndroidTick()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.MotionControlAndroidTick");

	ABP_STExtraPlayerController_C_MotionControlAndroidTick_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.MotionControlAndroid
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_STExtraPlayerController_C::MotionControlAndroid(const struct FVector& AxisValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.MotionControlAndroid");

	ABP_STExtraPlayerController_C_MotionControlAndroid_Params params;
	params.AxisValue = AxisValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReceiveBackpackComponent
// (Event, Protected, BlueprintEvent)

void ABP_STExtraPlayerController_C::ReceiveBackpackComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReceiveBackpackComponent");

	ABP_STExtraPlayerController_C_ReceiveBackpackComponent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InitWallFeedBack
// (BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::InitWallFeedBack()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InitWallFeedBack");

	ABP_STExtraPlayerController_C_InitWallFeedBack_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InitNewbieComponent
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<int>*                   FinishedGuide                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>*                   FinishedCounts                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int*                           PlayerLevel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           PlayerExperienceType           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::InitNewbieComponent(TArray<int>* FinishedGuide, TArray<int>* FinishedCounts, int* PlayerLevel, int* PlayerExperienceType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InitNewbieComponent");

	ABP_STExtraPlayerController_C_InitNewbieComponent_Params params;
	params.FinishedGuide = FinishedGuide;
	params.FinishedCounts = FinishedCounts;
	params.PlayerLevel = PlayerLevel;
	params.PlayerExperienceType = PlayerExperienceType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.DebugOpenGuide
// (BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::DebugOpenGuide()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.DebugOpenGuide");

	ABP_STExtraPlayerController_C_DebugOpenGuide_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.BP_OceanSideDetected
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                OceansideLocation              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool*                          bDetectedRiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::BP_OceanSideDetected(struct FVector* OceansideLocation, bool* bDetectedRiver)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.BP_OceanSideDetected");

	ABP_STExtraPlayerController_C_BP_OceanSideDetected_Params params;
	params.OceansideLocation = OceansideLocation;
	params.bDetectedRiver = bDetectedRiver;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.CallShowTouchInterface
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          InShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::CallShowTouchInterface(bool* InShow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.CallShowTouchInterface");

	ABP_STExtraPlayerController_C_CallShowTouchInterface_Params params;
	params.InShow = InShow;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnGameModeStateChanged
// (Event, Public, BlueprintEvent)

void ABP_STExtraPlayerController_C::OnGameModeStateChanged()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnGameModeStateChanged");

	ABP_STExtraPlayerController_C_OnGameModeStateChanged_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReleaseFire
// (Event, Public, BlueprintEvent)

void ABP_STExtraPlayerController_C::ReleaseFire()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReleaseFire");

	ABP_STExtraPlayerController_C_ReleaseFire_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnFireModeChangeTD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            IntValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::OnFireModeChangeTD(int IntValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnFireModeChangeTD");

	ABP_STExtraPlayerController_C_OnFireModeChangeTD_Params params;
	params.IntValue = IntValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnRep_InWateringRangeBP
// (Event, Public, BlueprintEvent)

void ABP_STExtraPlayerController_C::OnRep_InWateringRangeBP()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnRep_InWateringRangeBP");

	ABP_STExtraPlayerController_C_OnRep_InWateringRangeBP_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.PlayerExitJumpEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::PlayerExitJumpEvent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.PlayerExitJumpEvent");

	ABP_STExtraPlayerController_C_PlayerExitJumpEvent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.EnterFightingStateDelegate
// (BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::EnterFightingStateDelegate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.EnterFightingStateDelegate");

	ABP_STExtraPlayerController_C_EnterFightingStateDelegate_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.GameStartCountDownDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CountdownTime                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::GameStartCountDownDelegate(float CountdownTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.GameStartCountDownDelegate");

	ABP_STExtraPlayerController_C_GameStartCountDownDelegate_Params params;
	params.CountdownTime = CountdownTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.LuaReceiveBeginPlay
// (BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::LuaReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.LuaReceiveBeginPlay");

	ABP_STExtraPlayerController_C_LuaReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.AddPubgmAutoComp
// (BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::AddPubgmAutoComp()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.AddPubgmAutoComp");

	ABP_STExtraPlayerController_C_AddPubgmAutoComp_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ExecuteUbergraph_BP_STExtraPlayerController
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::ExecuteUbergraph_BP_STExtraPlayerController(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ExecuteUbergraph_BP_STExtraPlayerController");

	ABP_STExtraPlayerController_C_ExecuteUbergraph_BP_STExtraPlayerController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.VaultFailDS__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::VaultFailDS__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.VaultFailDS__DelegateSignature");

	ABP_STExtraPlayerController_C_VaultFailDS__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.BindEventToBackpackComponent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::BindEventToBackpackComponent__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.BindEventToBackpackComponent__DelegateSignature");

	ABP_STExtraPlayerController_C_BindEventToBackpackComponent__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.PlayerLeaveWater__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HideLung                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::PlayerLeaveWater__DelegateSignature(bool HideLung)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.PlayerLeaveWater__DelegateSignature");

	ABP_STExtraPlayerController_C_PlayerLeaveWater__DelegateSignature_Params params;
	params.HideLung = HideLung;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.PlayerEnterWater__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::PlayerEnterWater__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.PlayerEnterWater__DelegateSignature");

	ABP_STExtraPlayerController_C_PlayerEnterWater__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.AirborneLanded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::AirborneLanded__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.AirborneLanded__DelegateSignature");

	ABP_STExtraPlayerController_C_AirborneLanded__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReloadingCDEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_STExtraPlayerController_C::ReloadingCDEnd__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReloadingCDEnd__DelegateSignature");

	ABP_STExtraPlayerController_C_ReloadingCDEnd__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReloadingCDStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CD                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_STExtraPlayerController_C::ReloadingCDStart__DelegateSignature(float CD)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReloadingCDStart__DelegateSignature");

	ABP_STExtraPlayerController_C_ReloadingCDStart__DelegateSignature_Params params;
	params.CD = CD;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

