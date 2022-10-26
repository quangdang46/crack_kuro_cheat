#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_bp_warzone_rank_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_warzone_rank.bp_warzone_rank_C
// 0x045C (0x076C - 0x0310)
class Abp_warzone_rank_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0310(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_WarZoneRankInfoMe                BP_STRUCT_WarZoneRankInfoMe;                              // 0x0314(0x006C) (Edit, BlueprintVisible)
	struct FBP_STRUCT_FriendAvatarInfo                 BP_STRUCT_FriendAvatarInfo;                               // 0x0380(0x0070) (Edit, BlueprintVisible)
	int                                                BP_CurSelectAreaId;                                       // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_WarZoneRankListCount;                                  // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_MySelectAreaId;                                        // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Warzone_Newbie_Status1;                                // 0x03FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03FD(0x0003) MISSED OFFSET
	struct FBP_STRUCT_MainAvatarInfo                   BP_STRUCT_MainAvatarInfo;                                 // 0x0400(0x0070) (Edit, BlueprintVisible)
	struct FBP_STRUCT_GlobalContinentInfo              BP_STRUCT_GlobalContinentInfo;                            // 0x0470(0x0010) (Edit, BlueprintVisible)
	bool                                               BP_Warzone_Newbie_Status2;                                // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0481(0x0003) MISSED OFFSET
	int                                                BP_WarZoneRankSelectID;                                   // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Warzone_RankListEmptyTips;                             // 0x0488(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Warzone_MyTopRankArea;                                 // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_Warzone_Rank_Alias_Info          BP_STRUCT_Warzone_Rank_Alias_Info;                        // 0x0498(0x003C) (Edit, BlueprintVisible)
	struct FBP_STRUCT_AvatarInfo                       BP_STRUCT_AvatarInfo;                                     // 0x04D4(0x000C) (Edit, BlueprintVisible)
	int                                                BP_WarZoneRankScrollPos;                                  // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_GlobalAreaInfo>           BP_ARRAY_GlobalAreaList;                                  // 0x04E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_WarZoneRankSelectItemUid;                              // 0x04F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_WarZoneMedalInfo                 BP_STRUCT_WarZoneMedalInfo;                               // 0x04FC(0x0048) (Edit, BlueprintVisible)
	int                                                BP_Warzone_MyRankTipIndex;                                // 0x0544(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_ShowRegionStrongerBtn;                                 // 0x0548(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0549(0x0003) MISSED OFFSET
	int                                                BP_MySelectContinentId;                                   // 0x054C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Warzone_Newbie_Status3;                                // 0x0550(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0551(0x0003) MISSED OFFSET
	int                                                BP_WarZoneRankSelectID_Me;                                // 0x0554(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_WarZoneRankUpdateItemInfo        BP_STRUCT_WarZoneRankUpdateItemInfo;                      // 0x0558(0x006C) (Edit, BlueprintVisible)
	int                                                BP_WarZoneRankUpdateIdx;                                  // 0x05C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_WarZoneRankSelectType;                                 // 0x05C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Warzone_DuanWeiTips;                                   // 0x05CC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_WarZoneRank_Tab;                                       // 0x05D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_WarZoneStreetPkIndex;                                  // 0x05DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_WarZoneStreetLastLocationTime;                         // 0x05E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             BP_ARRAY_WarZoneStreetNameList;                           // 0x05E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_GlobalAreaInfo                   BP_STRUCT_GlobalAreaInfo;                                 // 0x05F0(0x003C) (Edit, BlueprintVisible)
	struct FBP_STRUCT_GlobalCountryInfo                BP_STRUCT_GlobalCountryInfo;                              // 0x062C(0x003C) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_AvatarInfo>               BP_ARRAY_AvatarList;                                      // 0x0668(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_GlobalCountryInfo>        BP_ARRAY_GlobalCountryList;                               // 0x0674(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_WarZoneRank_PlayerNumShowStatus;                       // 0x0680(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0681(0x0003) MISSED OFFSET
	int                                                BP_MySelectCountryId;                                     // 0x0684(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Warzone_MyTopTips;                                     // 0x0688(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CurSelectContinentId;                                  // 0x0694(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_WarZoneRank_PlayerData           BP_STRUCT_WarZoneRank_PlayerData;                         // 0x0698(0x0030) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_GlobalContinentInfo>      BP_ARRAY_GlobalContinentList;                             // 0x06C8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CurSelectCountryId;                                    // 0x06D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_WarZoneStreetCdTime;                                   // 0x06D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_WarZoneRankShowRoleUid;                                // 0x06E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_WarZoneRankInfo>          BP_ARRAY_WarZoneRankList;                                 // 0x06F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_WarZoneRankInfo                  BP_STRUCT_WarZoneRankInfo;                                // 0x06FC(0x006C) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0768(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_warzone_rank.bp_warzone_rank_C");
		return pStaticClass;
	}


	void EventShowMedalChoose_NoFetch();
	void EventShowMedalChoose();
	void EventWarZoneRankSelectID_NoFetch();
	void EventWarZoneRankSelectID();
	void EventWarZoneSelectItem_NoFetch();
	void EventWarZoneSelectItem();
	void EventWarZoneClickTooFastClick_NoFetch();
	void EventWarZoneClickTooFastClick();
	void EventWarZoneRankClose_NoFetch();
	void EventWarZoneRankClose();
	void EventWarZoneRankScrollPos_NoFetch();
	void EventWarZoneRankScrollPos();
	void EventWarZoneRequestRankList_NoFetch();
	void EventWarZoneRequestRankList();
	void EventWarZoneChangeType_NoFetch();
	void EventWarZoneChangeType();
	void EventGetCurCountryList_NoFetch();
	void EventGetCurCountryList();
	void EventOpenRegionStrongerUI_NoFetch();
	void EventOpenRegionStrongerUI();
	void EventOpenCountryStrongerUI_NoFetch();
	void EventOpenCountryStrongerUI();
	void EventShareWarZoneTitle_NoFetch();
	void EventShareWarZoneTitle();
	void EventWarZoneRuleButtonClick_NoFetch();
	void EventWarZoneRuleButtonClick();
	void EventWarZoneLBSShowStreetList_NoFetch();
	void EventWarZoneLBSShowStreetList();
	void EventWarZoneNeedRefreshStreetList_NoFetch();
	void EventWarZoneNeedRefreshStreetList();
	void EventWarZoneSelectOneStreet_NoFetch();
	void EventWarZoneSelectOneStreet();
	void EventWarZoneRankShowRole_NoFetch();
	void EventWarZoneRankShowRole();
	void EventWarZoneLBSCantShareButtonClick_NoFetch();
	void EventWarZoneLBSCantShareButtonClick();
	void EventWarZoneChangeRankTab_NoFetch();
	void EventWarZoneChangeRankTab();
	void UserConstructionScript();
};


}

