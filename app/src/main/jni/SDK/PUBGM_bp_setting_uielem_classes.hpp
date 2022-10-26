#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_bp_setting_uielem_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_setting_uielem.bp_setting_uielem_C
// 0x003C (0x034C - 0x0310)
class Abp_setting_uielem_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0310(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_Setting_SelectGameModeIndex;                           // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Setting_SelectLayoutFileName;                          // 0x0318(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Setting_SelectLayoutIndex;                             // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SettingSerachResult_IsPreviewTPP;                      // 0x0328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Setting_IsSelectFPP;                                   // 0x0329(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x032A(0x0002) MISSED OFFSET
	int                                                BP_Setting_SelectFireMode;                                // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Setting_SelectLayoutName;                              // 0x0330(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_SettingSerachResult_PreviewOwnerName;                  // 0x033C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0348(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_setting_uielem.bp_setting_uielem_C");
		return pStaticClass;
	}


	void EventExitPreview_NoFetch();
	void EventExitPreview();
	void EventTryDownloadSaveData_NoFetch();
	void EventTryDownloadSaveData();
	void EventBigHandOperateRedPointChanged_NoFetch();
	void EventBigHandOperateRedPointChanged();
	void EventRefreshLoadUIElemFileName_NoFetch();
	void EventRefreshLoadUIElemFileName();
	void EventShowModeCopyMsgBox_NoFetch();
	void EventShowModeCopyMsgBox();
	void EventUploadSaveData_NoFetch();
	void EventUploadSaveData();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventShowSightCopyMsgBox_NoFetch();
	void EventShowSightCopyMsgBox();
	void EventLRSwitcherChanged_NoFetch();
	void EventLRSwitcherChanged();
	void EventShowLayoutChangeExistMsgBox_NoFetch();
	void EventShowLayoutChangeExistMsgBox();
	void EventShowPreviewConfirmUI_NoFetch();
	void EventShowPreviewConfirmUI();
	void EventShowExitMsgBox_NoFetch();
	void EventShowExitMsgBox();
	void EventShowSelectPanel_NoFetch();
	void EventShowSelectPanel();
	void EventOnClickQuitButton_NoFetch();
	void EventOnClickQuitButton();
	void EventShowResetMsgBox_NoFetch();
	void EventShowResetMsgBox();
	void EventAntiCopyRedPointChanged_NoFetch();
	void EventAntiCopyRedPointChanged();
	void EventTPPFPPPreviewPopupTips_NoFetch();
	void EventTPPFPPPreviewPopupTips();
	void UserConstructionScript();
};


}

