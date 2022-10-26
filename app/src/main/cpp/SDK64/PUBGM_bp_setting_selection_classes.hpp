#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_bp_setting_selection_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_setting_selection.bp_setting_selection_C
// 0x0088 (0x0488 - 0x0400)
class Abp_setting_selection_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_Setting_SelectCheckName;                               // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Setting_SelectCheckIndex;                              // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Setting_MaxSelectTabCount;                             // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Setting_SelectInputName2;                              // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_SettingSelectionItemData         BP_STRUCT_SettingSelectionItemData;                       // 0x0430(0x0018) (Edit, BlueprintVisible)
	struct FString                                     BP_Setting_SelectInputName1;                              // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_SettingSelectionItemData> BP_ARRAY_SettingSelectionItemList;                        // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Setting_SelectTabIndex;                                // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x046C(0x0004) MISSED OFFSET
	struct FString                                     BP_SettingSelection_SpellInput;                           // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_setting_selection.bp_setting_selection_C");
		return pStaticClass;
	}


	void EventSettingSelectionCheckInput_NoFetch();
	void EventSettingSelectionCheckInput();
	void EventSettingSelectionCheckInputChange_NoFetch();
	void EventSettingSelectionCheckInputChange();
	void EventSettingSelectionCheckName_NoFetch();
	void EventSettingSelectionCheckName();
	void EventOnSelectCheckIndex_NoFetch();
	void EventOnSelectCheckIndex();
	void EventSettingSelectionUpload_NoFetch();
	void EventSettingSelectionUpload();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void UserConstructionScript();
};


}

