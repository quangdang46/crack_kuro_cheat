#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Gameplay_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Gameplay.UAERegionActor
// 0x0010 (0x03A8 - 0x0398)
class AUAERegionActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0398(0x0008) MISSED OFFSET
	bool                                               bStatic;                                                  // 0x03A0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ERegionSizeIndex                                   RegionSize;                                               // 0x03A1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bNeedUpdateNetworkInfo;                                   // 0x03A2(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x03A3(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.UAERegionActor");
		return pStaticClass;
	}

};


// Class Gameplay.UAECharacter
// 0x01D0 (0x09A0 - 0x07D0)
class AUAECharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x07D0(0x0068) MISSED OFFSET
	int                                                iRegionCharacter;                                         // 0x0838(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x083C(0x0004) MISSED OFFSET
	struct FName                                       PlayerType;                                               // 0x0840(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerName;                                               // 0x0848(0x0010) (Net, ZeroConstructor)
	struct FString                                     Nation;                                                   // 0x0858(0x0010) (Net, ZeroConstructor)
	uint32_t                                           PlayerKey;                                                // 0x0868(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x086C(0x0004) MISSED OFFSET
	struct FString                                     PlayerUID;                                                // 0x0870(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	int                                                TeamID;                                                   // 0x0880(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bTeamLeader;                                              // 0x0884(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0885(0x0003) MISSED OFFSET
	int                                                CampID;                                                   // 0x0888(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                resID;                                                    // 0x088C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	ECharacterGender                                   DefaultCharacterGender;                                   // 0x0890(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0891(0x0007) MISSED OFFSET
	TArray<struct FGameModePlayerItem>                 InitialItemList;                                          // 0x0898(0x0010) (ZeroConstructor)
	struct FGameModePlayerUpassInfo                    UpassInfo;                                                // 0x08A8(0x0030)
	struct FGameModePlayerPetInfo                      PetInfo;                                                  // 0x08D8(0x0020) (BlueprintVisible)
	int                                                planeAvatarId;                                            // 0x08F8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DyeDebugFlag;                                             // 0x08FC(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGameModePlayerTaskData>             InitialTaskDataList;                                      // 0x0900(0x0010) (ZeroConstructor)
	bool                                               bIsAI;                                                    // 0x0910(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAIWithPet;                                             // 0x0911(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x16];                                      // 0x0912(0x0016) MISSED OFFSET
	bool                                               UseWholeBodyModel;                                        // 0x0928(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               DefaultIsUseWholeBodyModel;                               // 0x0929(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0xE];                                       // 0x092A(0x000E) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0938(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x0948(0x0050) (Net)
	unsigned char                                      UnknownData07[0x8];                                       // 0x0998(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.UAECharacter");
		return pStaticClass;
	}


	void SetNetCullDistanceSquared(float fNetCullDistanceSquared);
	void SendLuaDSToClient(int ID, TArray<unsigned char> Content);
	void RPC_LuaDSToClient(int ID, TArray<unsigned char> Content);
	void OnRep_UseWholeModel();
	void OnRep_TeamID();
	void OnRep_PlayerUID();
	void OnRep_PlayerKey();
	void OnRep_CampID();
	bool IsDefaultCharType();
	int GetTeamId();
	struct FString GetPlayerKey();
	TArray<class UActorComponent*> GetNonSimulatedComponents_OnFighting();
	TArray<class UActorComponent*> GetNonSimulatedComponents_NonTeammates();
	TArray<class UActorComponent*> GetNonSimulatedComponents();
	TArray<class UActorComponent*> GetNonDedicatedComponents();
	int GetCampId();
	void ClientAcknowledgeReconnection_3(uint32_t Token);
};


// Class Gameplay.UAEGameMode
// 0x0EE8 (0x13C0 - 0x04D8)
class AUAEGameMode : public ALuaGameMode
{
public:
	TWeakObjectPtr<class UObject>                      UtilsPtr;                                                 // 0x04D8(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              GridCheckSize;                                            // 0x04E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeepCheckSize;                                            // 0x04E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeightCheckSize;                                          // 0x04E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxPlayerLimit;                                           // 0x04EC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x04F0(0x000C) MISSED OFFSET
	bool                                               bEnableClimbing;                                          // 0x04FC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsUseFpsVault;                                            // 0x04FD(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBornWithApple;                                           // 0x04FE(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x04FF(0x0001) MISSED OFFSET
	int                                                AntiDataCD;                                               // 0x0500(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                WeatherID;                                                // 0x0504(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     WeatherName;                                              // 0x0508(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                RoomMode;                                                 // 0x0518(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SeasonIdx;                                                // 0x051C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MeteorShowerRatio;                                        // 0x0520(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0524(0x0004) MISSED OFFSET
	struct FString                                     ItemTableName;                                            // 0x0528(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ItemClassPath;                                            // 0x0538(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ReplayPushURL;                                            // 0x0548(0x0010) (ZeroConstructor)
	int                                                ReplayType;                                               // 0x0558(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x055C(0x0004) MISSED OFFSET
	struct FString                                     ReplayTitle;                                              // 0x0560(0x0010) (ZeroConstructor)
	EObserverEnemyTraceType                            EnableObserverEnemyTrace;                                 // 0x0570(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0571(0x0007) MISSED OFFSET
	TArray<struct FString>                             ItemSpawnTableList;                                       // 0x0578(0x0010) (ZeroConstructor)
	TArray<struct FString>                             IgnoreItemClassPathList;                                  // 0x0588(0x0010) (ZeroConstructor)
	TArray<struct FDSSwitchInfo>                       DsSwitch;                                                 // 0x0598(0x0010) (ZeroConstructor)
	TMap<uint64_t, struct FCharacterMoveDragData>      CharacterMoveDragDataMap;                                 // 0x05A8(0x0050) (ZeroConstructor)
	uint32_t                                           ServerStartTime;                                          // 0x05F8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bOpenChangeWearing;                                       // 0x05FC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableVehicleInReady;                                    // 0x05FD(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x05FE(0x0002) MISSED OFFSET
	struct FString                                     PickupBoxConfigClassPath;                                 // 0x0600(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bUseAutoGroupParachuteTeam;                               // 0x0610(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0611(0x0007) MISSED OFFSET
	struct FString                                     PickupBoxConfigDataTableName;                             // 0x0618(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     VehicleTableName;                                         // 0x0628(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     VehicleClassPath;                                         // 0x0638(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               IsUsingSceneDropWeight;                                   // 0x0648(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsRegionItemGenerate;                                     // 0x0649(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x064A(0x0002) MISSED OFFSET
	struct FVector                                     RegionCenter;                                             // 0x064C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              RegionRadius;                                             // 0x0658(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x065C(0x0004) MISSED OFFSET
	TMap<struct FString, float>                        BattleCustomConfig;                                       // 0x0660(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                MaxAllowReplicatedCharacterCount;                         // 0x06B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AINoRepTimeInReady;                                       // 0x06B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ObserverPlayerStateClass;                                 // 0x06B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, IsPlainOldData)
	bool                                               bEnableDamage;                                            // 0x06C0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x06C1(0x0003) MISSED OFFSET
	float                                              NearDeathRestoredOriginHealth;                            // 0x06C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NearDeathDecreateBreathRate;                              // 0x06C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RescueOtherRestoreDuration;                               // 0x06CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeadTombBoxLifeSpan;                                      // 0x06D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DefaultPlayerBornPointID;                                 // 0x06D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayerExitClearPlayerData;                               // 0x06D8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableDSTickLua;                                         // 0x06D9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData10[0x6];                                       // 0x06DA(0x0006) MISSED OFFSET
	TArray<class UGroupSpotSceneComponent*>            ItemGroupComponents;                                      // 0x06E0(0x0010) (ExportObject, ZeroConstructor)
	class AActor*                                      ChosenPlayerStartBuildingGroup;                           // 0x06F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FDynamicTriggerConfig>               DynamicTriggerConfigs;                                    // 0x06F8(0x0010) (ZeroConstructor)
	TArray<class AActor*>                              DynamicTriggers;                                          // 0x0708(0x0010) (ZeroConstructor)
	int                                                IsGameModeFpp;                                            // 0x0718(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsGameModeBandSpot;                                       // 0x071C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x071D(0x0003) MISSED OFFSET
	TArray<struct FDynamicLoadItem>                    DynamicLoadItemArray;                                     // 0x0720(0x0010) (ZeroConstructor)
	TMap<struct FDynamicLoadItem, struct FDynamicLoadActors> DynamicLoadItemMap;                                       // 0x0730(0x0050) (ZeroConstructor)
	TArray<struct FBornItem>                           BornItems;                                                // 0x0780(0x0010) (ZeroConstructor)
	TArray<struct FVehicleAvatarReplaceCfg>            VehicleAvatarReplaceCfgList;                              // 0x0790(0x0010) (ZeroConstructor)
	TArray<struct FString>                             ChampionNameList;                                         // 0x07A0(0x0010) (ZeroConstructor)
	int                                                ChampionTeamId;                                           // 0x07B0(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsOpenItemGenerate;                                       // 0x07B4(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsOpenVehicleGenerate;                                    // 0x07B5(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x2];                                       // 0x07B6(0x0002) MISSED OFFSET
	TArray<int>                                        BuffEffectIDArray;                                        // 0x07B8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        BuffEffectDisplayIDArray;                                 // 0x07C8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        DynamicLevelArray;                                        // 0x07D8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     RoomType;                                                 // 0x07E8(0x0010) (ZeroConstructor)
	bool                                               bCanLedgeGrab;                                            // 0x07F8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOpenForbitTeammatePickUp;                                // 0x07F9(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bOpenTeammateImprisonment;                                // 0x07FA(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x1];                                       // 0x07FB(0x0001) MISSED OFFSET
	int                                                ZoneID;                                                   // 0x07FC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                nClientType;                                              // 0x0800(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                nBattleType;                                              // 0x0804(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x638];                                     // 0x0808(0x0638) MISSED OFFSET
	bool                                               bCollectedEventDataReportingEnabled;                      // 0x0E40(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x7];                                       // 0x0E41(0x0007) MISSED OFFSET
	TArray<bool>                                       EnabledCollectedEventDataEventIds;                        // 0x0E48(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)
	unsigned char                                      UnknownData16[0x50];                                      // 0x0E58(0x0050) MISSED OFFSET
	bool                                               bIsPreCreatingPlayerController;                           // 0x0EA8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x127];                                     // 0x0EA9(0x0127) MISSED OFFSET
	float                                              OBInfoTimeStep;                                           // 0x0FD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x2C];                                      // 0x0FD4(0x002C) MISSED OFFSET
	TArray<struct FAirDropBoxInOb>                     AirDropBoxInfoList;                                       // 0x1000(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   FiringPlayerList;                                         // 0x1010(0x0010) (ZeroConstructor)
	TArray<class AUAEPlayerController*>                KickFlagControllerList;                                   // 0x1020(0x0010) (ZeroConstructor)
	TArray<class AUAEPlayerController*>                ObserverControllerList;                                   // 0x1030(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData19[0xD8];                                      // 0x1040(0x00D8) MISSED OFFSET
	TArray<struct FAdvertisementActorConfig>           AdvConfigList;                                            // 0x1118(0x0010) (ZeroConstructor)
	TArray<class AUAEAdvertisementActor*>              AdvActorList;                                             // 0x1128(0x0010) (ZeroConstructor, Transient)
	TArray<struct FMissionBoardConfig>                 MissionBoardConfigList;                                   // 0x1138(0x0010) (ZeroConstructor)
	bool                                               bEnablePlaneBanner;                                       // 0x1148(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData20[0x7];                                       // 0x1149(0x0007) MISSED OFFSET
	struct FString                                     HttpPlaneBannerLeftImgPath;                               // 0x1150(0x0010) (ZeroConstructor)
	struct FString                                     HttpPlaneBannerRightImgPath;                              // 0x1160(0x0010) (ZeroConstructor)
	struct FString                                     GrenadeEffectPath;                                        // 0x1170(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bUseSpecialGrenadeEffect;                                 // 0x1180(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAnniversarySignalGunEffect;                              // 0x1181(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bGodzillaWarmUpSwitchOpened;                              // 0x1182(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOpenNewbieGuideInDeathMatch;                             // 0x1183(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAvatarDownloadInBattle;                                  // 0x1184(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOpenAnniversaryActivity;                                 // 0x1185(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData21[0x2];                                       // 0x1186(0x0002) MISSED OFFSET
	struct FString                                     FestivalAirDropBoxMesh;                                   // 0x1188(0x0010) (BlueprintVisible, ZeroConstructor)
	bool                                               bUseFestivalAirDropBox;                                   // 0x1198(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData22[0x3];                                       // 0x1199(0x0003) MISSED OFFSET
	float                                              FestivalAirDropProb;                                      // 0x119C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MonsterDropPar;                                           // 0x11A0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SceneDropParam;                                           // 0x11A4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	uint32_t                                           DSOpenSwtich;                                             // 0x11A8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData23[0x4];                                       // 0x11AC(0x0004) MISSED OFFSET
	class UItemGeneratorComponent*                     ItemGenerator;                                            // 0x11B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVehicleAndTreasureBoxGeneratorComponent*    VehicleGenerator;                                         // 0x11B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bGameNeedReplay;                                          // 0x11C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData24[0x7];                                       // 0x11C1(0x0007) MISSED OFFSET
	TArray<uint32_t>                                   NeedReplayPlayers;                                        // 0x11C8(0x0010) (ZeroConstructor)
	TArray<struct FSeasonStatueData>                   SeasonStatueList;                                         // 0x11D8(0x0010) (ZeroConstructor)
	struct FString                                     SeasonStatueClassPath;                                    // 0x11E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     StatueBaseClassPath;                                      // 0x11F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FStatueBaseData                             StatueBaseInfo;                                           // 0x1208(0x0068) (BlueprintVisible)
	int                                                BattleStopJoin;                                           // 0x1270(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                nSignalGunEffectId;                                       // 0x1274(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FCharacterOverrideAttrData>          CharacterOverrideAttrs;                                   // 0x1278(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData25[0xA0];                                      // 0x1288(0x00A0) MISSED OFFSET
	bool                                               UseGMSpawnItemSpotDefaultTag;                             // 0x1328(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData26[0x7];                                       // 0x1329(0x0007) MISSED OFFSET
	struct FString                                     GMSpawnItemSpotDefaultTag;                                // 0x1330(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData27[0x70];                                      // 0x1340(0x0070) MISSED OFFSET
	bool                                               bStandAloneGameMode;                                      // 0x13B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bStandAloneLuaGenAIData;                                  // 0x13B1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData28[0x2];                                       // 0x13B2(0x0002) MISSED OFFSET
	int                                                StandAloneTestPlayerKey;                                  // 0x13B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       StandAloneTestPlayerType;                                 // 0x13B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.UAEGameMode");
		return pStaticClass;
	}


	void WriteStatistics();
	void SyncPlayerNames();
	void SyncNewCorpsData(TArray<struct FDSCorpsInfo> OutCorpsData);
	class APawn* SpawnUAEPawnFor(class AController* NewPlayer, const struct FTransform& Trans);
	void SetVehicleReportEntry(uint32_t InUniqueID, const struct FVehicleReportEntry& InEntry);
	void SetPlayerOpenId(uint32_t InPlayerKey, const struct FString& InPlayerOpenID);
	void SetMaxWeaponReportNum(int Num);
	void SetGameEndReportData();
	struct FGameModeTeamBattleResultData RetrieveTeamBattleResultData(int TeamID);
	void RetrieveBattleData(struct FBattleData* OutBattleData);
	void RestartPlayerAtPlayerStart(class AController* NewPlayer, class AActor* StartSpot);
	void ResetGameParamsFromGameMode();
	void Rescue(class APawn* RescueWho, class APawn* Hero);
	bool ReportCollectedEventDataWithPlayerValidation(class AUAEPlayerController* UAEPlayerController, unsigned char EventId, const struct FScriptDelegate& CollectReportedEventDataCallback);
	bool ReportCollectedEventDataWithPlayersValidation(class UWorld* World, unsigned char EventId, const struct FScriptDelegate& CollectReportedEventDataCallback);
	bool ReportCollectedEventData(const struct FString& UId, unsigned char EventId, const struct FCollectedEventData& Data);
	void RegisterItemGroupSpotsByTag(const struct FName& Tag, class UGroupSpotSceneComponent* GroupSpotComponent);
	void RegisterItemGroupSpots(class UGroupSpotSceneComponent* GroupSpotComponent);
	void RefreshWorldActiveRange();
	void RefreshWatchTeammates(class AUAEPlayerController* InController, int InTeamID);
	void RefreshPlayerNames(uint32_t InPlayerKey, const struct FString& InPlayerName, int TeamID, bool IsLogin, uint64_t UId, int IdxInTeam);
	int RecoardAlivePlayerNum();
	class APlayerController* PreCreatePlayerController(uint32_t PlayerKey);
	void OnStandAloneGameEnd();
	void OnReportNetworkData();
	void OnPlayerFiring(uint32_t InPlayerKey);
	void OnPlayerControlDestroyEnd(uint32_t PlayerKey);
	void OnObserverLogout(class AUAEPlayerController* InController);
	void OnObserverLogin(class AUAEPlayerController* InController);
	void OnMsg(const struct FString& Msg);
	void OnAirDropBoxLanded(int boxId, const struct FVector& pos);
	void OnAirDropBoxEmpty(int boxId);
	void NotifyPlayerExitWhenNotStarted(uint32_t PlayerKey, const struct FName& PlayerType, const struct FString& Reason);
	void NotifyPlayerExit(uint32_t PlayerKey, const struct FName& PlayerType, bool bDestroyPlayerController, bool bDestroyCharacter, bool bSendFailure, const struct FString& FailureMessage);
	void NotifyPlayerAbleToExitSafely(uint32_t PlayerKey, const struct FName& PlayerType);
	void NotifyGameModeParamsChanged(const struct FGameModeParams& GameModeParams);
	void NotifyGameModeLuckmate(int64_t MyUID, int64_t LuckmateUID);
	void NotifyGameModeInit();
	void NotifyExistPlayerReEnter(uint32_t PlayerKey);
	void NotifyAIPlayerEnter(uint32_t PlayerKey);
	void NotifyAIDropInfo(int NewAI, const struct FDSAIDropInfo& Info);
	float ModifyVehicleDamage(float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* VictimVehicle, class AActor* DamageCauser);
	float ModifyDamage(float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AController* VictimController, class AActor* DamageCauser);
	void Killed(class AController* Killer, class AController* VictimPlayer, class APawn* VictimPawn, const struct FDamageEvent& DamageEvent);
	bool IsSatisfyGeneratorArea(const struct FVector& Location);
	bool IsPlayerCollectedEventDataReportingEnabled(class AUAEPlayerController* UAEPlayerController);
	bool IsCollectedEventEnabled(unsigned char EventId);
	void InitWorldActiveRange();
	void InitSeasonStatue();
	void InitMissionBoard();
	void InitGenerator();
	void InitGameParamsFromGameMode();
	void InitDynamicTriggers();
	void InitDynamicBuildingGroups();
	void InitBornWithApple();
	void InitAdvertisement();
	void Heartbeat();
	bool HasVehicleReportEntry(uint32_t InUniqueID);
	bool HasDynamicBuildingGroup();
	void HandlePlayerPaintDecalResponse(uint32_t PlayerKey, const struct FName& PlayerType, int Result, int DecalId, int Count);
	void GotoNearDeath(class AController* DamageInstigator, class APawn* VictimPawn);
	struct FVehicleReportEntry GetVehicleReportEntry(uint32_t InUniqueID);
	int GetSurvivingTeamCount();
	int GetSurvivingCharacterCount();
	TArray<class AUAEPlayerState*> GetPlayerStateListWithTeamID(int TeamID, const struct FName& PlayerType);
	class AUAEPlayerController* GetPlayerControllerWithUID(uint64_t UId);
	TArray<class AUAEPlayerController*> GetPlayerControllerListWithTeamID(int TeamID, const struct FName& PlayerType);
	void GetPlayerAndRealAiNum(struct FHeartBeatData* Data);
	TArray<class AUAEPlayerController*> GetObserverControllerList();
	void GetMonsterNum(struct FHeartBeatData* Data);
	int GetMaxWeaponReportNum();
	struct FVector GetClassicPlaneDirection();
	class AUAEPlayerState* FindPlayerStateWithPlayerKey(uint32_t PlayerKey, const struct FName& PlayerType);
	class AUAEPlayerController* FindPlayerControllerWithPlayerKey(uint32_t PlayerKey, const struct FName& PlayerType);
	class APlayerController* FindPlayerControllerByUId(uint64_t UId);
	void DestroyNoActiveWorldActor(struct FVector* Location, float* Radius);
	void DestroyCharacterForPlayerController(class APlayerController* PC);
	void DestroyAllPickUpObjs();
	void DeleteSeasonStatue();
	void DeleteDynamicLoadItem();
	void DebugEnterFriendObserver(class AUAEPlayerController* InController);
	void CreateDynamicBuildingGroups(const struct FVector& Offset);
	struct FCollectedEventData CollectReportedEventDataCallback__DelegateSignature(class AUAEGameMode* UAEGameMode, class AUAEPlayerController* UAEPlayerController, unsigned char EventId);
	void CollectAllPlayerInfo(float DeltaSeconds, bool bForce);
	void ChangeName(class AController* Controller, const struct FString& NewName, bool bNameChange);
	void AddAirDropBox(int boxId, const struct FVector& pos);
};


// Class Gameplay.UAEGameState
// 0x0098 (0x0550 - 0x04B8)
class AUAEGameState : public ALuaGameState
{
public:
	class UUAEGameSubsystem*                           GameBridge;                                               // 0x04B8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x04C0(0x0005) MISSED OFFSET
	bool                                               bTeamIDChgDeactivePawn;                                   // 0x04C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x52];                                      // 0x04C6(0x0052) MISSED OFFSET
	struct FString                                     WeaponAttrReloadTableName;                                // 0x0518(0x0010) (Edit, ZeroConstructor)
	struct FString                                     VehicleAttrReloadTableName;                               // 0x0528(0x0010) (Edit, ZeroConstructor)
	struct FString                                     DamageSearchTableName;                                    // 0x0538(0x0010) (Edit, ZeroConstructor)
	bool                                               IsInitTable;                                              // 0x0548(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0549(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.UAEGameState");
		return pStaticClass;
	}


	void SendLuaDSToClient(int ID, TArray<unsigned char> Content);
	void RPC_LuaDSToClient(int ID, TArray<unsigned char> Content);
	static struct FWeaponAttrReloadTableStruct GetWeaponAttrReloadTableRow(int ID);
	static struct FVehicleAttrReloadTableStruct GetVehicleAttrReloadTableRow(int ID);
	class UUAEGameSubsystem* GetGameBridge();
	bool CheckDSSwitchOpen(int SwitchId);
};


// Class Gameplay.UAEPlayerState
// 0x0AA8 (0x0F88 - 0x04E0)
class AUAEPlayerState : public ALuaPlayerState
{
public:
	float                                              surviveTime;                                              // 0x04E0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Pronetime;                                                // 0x04E4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x04E8(0x0008) MISSED OFFSET
	float                                              marchDistance;                                            // 0x04F0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              travelDistance;                                           // 0x04F4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DriveDistance;                                            // 0x04F8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MonsterCatchupDistance;                                   // 0x04FC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                destroyVehicleNum;                                        // 0x0500(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                rescueTimes;                                              // 0x0504(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NormalItemsNum;                                           // 0x0508(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SeniorItemsNum;                                           // 0x050C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                GVMemberID;                                               // 0x0510(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0514(0x0004) MISSED OFFSET
	struct FName                                       PlayerType;                                               // 0x0518(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           FinalTeamleaderUID;                                       // 0x0520(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // 0x0528(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x052C(0x0004) MISSED OFFSET
	struct FString                                     PlayerUID;                                                // 0x0530(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bAIPlayer;                                                // 0x0540(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0541(0x0007) MISSED OFFSET
	struct FString                                     iconUrl;                                                  // 0x0548(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	int                                                gender;                                                   // 0x0558(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                PlayerLevel;                                              // 0x055C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                SegmentLevel;                                             // 0x0560(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                AceImprintShowId;                                         // 0x0564(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                AceImprintBaseId;                                         // 0x0568(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                AvatarBoxId;                                              // 0x056C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                CampID;                                                   // 0x0570(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                resID;                                                    // 0x0574(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	uint64_t                                           UId;                                                      // 0x0578(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	struct FString                                     OpenID;                                                   // 0x0580(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	struct FString                                     Nation;                                                   // 0x0590(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	int                                                TeamID;                                                   // 0x05A0(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                IdxInTeam;                                                // 0x05A4(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                PlayerBornPointID;                                        // 0x05A8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Kills;                                                    // 0x05AC(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                KillsBeforeDie;                                           // 0x05B0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Knockouts;                                                // 0x05B4(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x05B8(0x0008) MISSED OFFSET
	int                                                Assists;                                                  // 0x05C0(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PlatformGender;                                           // 0x05C4(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x05C5(0x0003) MISSED OFFSET
	int                                                MatchStrategyLabel;                                       // 0x05C8(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                MatchLabel;                                               // 0x05CC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	uint32_t                                           Killer;                                                   // 0x05D0(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           KillerIGPlayerKey;                                        // 0x05D4(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     BeKilledOpenID;                                           // 0x05D8(0x0010) (ZeroConstructor)
	struct FString                                     KillerName;                                               // 0x05E8(0x0010) (ZeroConstructor)
	uint64_t                                           MisKillTeammatePlayerKey;                                 // 0x05F8(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                ShootWeaponShotNum;                                       // 0x0600(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ShootWeaponShotAndHitPlayerNum;                           // 0x0604(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ShootWeaponShotAndHitPlayerNumNoAI;                       // 0x0608(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ShootWeaponShotHeadNum;                                   // 0x060C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ShootWeaponShotHeadNumNoAI;                               // 0x0610(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                HeadShotNum;                                              // 0x0614(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                HeadShotNumNoAI;                                          // 0x0618(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                KillNumByGrende;                                          // 0x061C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                UseFragGrenadeNum;                                        // 0x0620(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                UseSmokeGrenadeNum;                                       // 0x0624(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxKillDistance;                                          // 0x0628(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                HealTimes;                                                // 0x062C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DamageAmount;                                             // 0x0630(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VehicleDamageAmount;                                      // 0x0634(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HealAmount;                                               // 0x0638(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x063C(0x0004) MISSED OFFSET
	TArray<struct FString>                             KillFlow;                                                 // 0x0640(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FString>                             KnockOutFlow;                                             // 0x0650(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FKnockOutData>                       KnockOutList;                                             // 0x0660(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              InDamageAmount;                                           // 0x0670(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x14];                                      // 0x0674(0x0014) MISSED OFFSET
	TArray<struct FTLog_PickUpItemFlow>                TLog_PickUpItemFlowData;                                  // 0x0688(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bIsForbidItemFlowMerge;                                   // 0x0698(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0699(0x0007) MISSED OFFSET
	TMap<int, struct FTLog_BornLandGrenadeData>        TLog_BornLandGrenadeData;                                 // 0x06A0(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FAIDeliveryTlogData                         TLog_AIDeliveryTlogData;                                  // 0x06F0(0x0058)
	bool                                               bHasSendAIDeliverData;                                    // 0x0748(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0749(0x0007) MISSED OFFSET
	TMap<int, bool>                                    TLog_PickUpItemIdMap;                                     // 0x0750(0x0050) (ZeroConstructor)
	TArray<struct FGameModeLikeResultData>             Like;                                                     // 0x07A0(0x0010) (ZeroConstructor)
	uint32_t                                           Switch;                                                   // 0x07B0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x07B4(0x0004) MISSED OFFSET
	TArray<uint32_t>                                   Self;                                                     // 0x07B8(0x0010) (ZeroConstructor)
	TArray<struct FGameModeTeammateLableCheckData>     LabelCheck;                                               // 0x07C8(0x0010) (ZeroConstructor)
	TArray<struct FUseItemFlow>                        UseItemFlow;                                              // 0x07D8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FUseBuffFlow>                        UseBuffFlow;                                              // 0x07E8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FBuildingEnterFlow>                  BuildingEnterFlow;                                        // 0x07F8(0x0010) (ZeroConstructor)
	TArray<struct FTLog_PropEquipUnequipFlow>          TLog_PropEquipUnequipFlowData;                            // 0x0808(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<int, int>                                     TLog_BulletCount;                                         // 0x0818(0x0050) (ZeroConstructor)
	struct FTLog_SpecialStats                          TLog_SpecialStats;                                        // 0x0868(0x0008)
	bool                                               bIsOutsideBlueCircle;                                     // 0x0870(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0871(0x0003) MISSED OFFSET
	float                                              OutsideBlueCircleTime;                                    // 0x0874(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FVehicleDriveDisData>                VehicleDriveDisDataArray;                                 // 0x0878(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                FirstOpenedAirDropBoxNum;                                 // 0x0888(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                FirstOpenedPlayerTombBoxNum;                              // 0x088C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                FirstOpenedTreasureBoxNum;                                // 0x0890(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HitEnemyHeadAmount;                                       // 0x0894(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        BuildFlow;                                                // 0x0898(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        DestroyShelterFlow;                                       // 0x08A8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              ShelterTakeDamage;                                        // 0x08B8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HitShelterDamage;                                         // 0x08BC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LandLocation;                                             // 0x08C0(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     ParachuteLocation;                                        // 0x08CC(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	int                                                LandTime;                                                 // 0x08D8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DeadLocation;                                             // 0x08DC(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FString                                     DeadDamangeType;                                          // 0x08E8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                PveDeadAttacker;                                          // 0x08F8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PveStageId;                                               // 0x08FC(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     DeadTimeStr;                                              // 0x0900(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                NearDeathDamageType;                                      // 0x0910(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           NearDeathCauserId;                                        // 0x0914(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               NearDeathIsHeadShot;                                      // 0x0918(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0919(0x0003) MISSED OFFSET
	int                                                BeDownTimes;                                              // 0x091C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BeSavedTimes;                                             // 0x0920(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x0924(0x0004) MISSED OFFSET
	struct FEquipmentData                              EquipmentData;                                            // 0x0928(0x0070)
	unsigned char                                      UnknownData14[0x8];                                       // 0x0998(0x0008) MISSED OFFSET
	bool                                               bIsGameTerminator;                                        // 0x09A0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x09A1(0x0003) MISSED OFFSET
	int                                                GamePlayingTime;                                          // 0x09A4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ObserverTime;                                             // 0x09A8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TouchDownAreaID;                                          // 0x09AC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TouchDownLocTypeID;                                       // 0x09B0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x09B4(0x0004) MISSED OFFSET
	TArray<int>                                        TouchDownAreaList;                                        // 0x09B8(0x0010) (ZeroConstructor)
	bool                                               bHasTouchDownAreaList;                                    // 0x09C8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x09C9(0x0007) MISSED OFFSET
	TArray<struct FGameModePlayerTaskData>             CompletedTaskList;                                        // 0x09D0(0x0010) (ZeroConstructor)
	TArray<struct FReportCollection>                   SpecialCollectionList;                                    // 0x09E0(0x0010) (ZeroConstructor)
	TArray<struct FWeaponDamageRecord>                 WeaponDamageRecordList;                                   // 0x09F0(0x0010) (ZeroConstructor)
	TArray<int>                                        SecretAreaIDList;                                         // 0x0A00(0x0010) (ZeroConstructor)
	TArray<struct FSpecialPickItemState>               CollectItemRecord;                                        // 0x0A10(0x0010) (Net, ZeroConstructor)
	float                                              DrivingHelicopterTime;                                    // 0x0A20(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              InHelicopterTime;                                         // 0x0A24(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RevivalNum;                                               // 0x0A28(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BeRevivedNum;                                             // 0x0A2C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KillNumInVehicle;                                         // 0x0A30(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KillPlayerNum;                                            // 0x0A34(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                KillAINum;                                                // 0x0A38(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TotalSprintDistance;                                      // 0x0A3C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TotalBeenDamageAmount;                                    // 0x0A40(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DestroyVehicleWheelNum;                                   // 0x0A44(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FDestroyVehicleWheelFlow>            DestroyVehicleWheelFlow;                                  // 0x0A48(0x0010) (ZeroConstructor)
	int                                                ProneTimes;                                               // 0x0A58(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CrouchTimes;                                              // 0x0A5C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                JumpTimes;                                                // 0x0A60(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KillMonsterNum;                                           // 0x0A64(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	TMap<int, int>                                     MonsterID2KillNum;                                        // 0x0A68(0x0050) (ZeroConstructor)
	float                                              TotalDamageAmountToMonsters;                              // 0x0AB8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TotalDamageAmountFromMonsters;                            // 0x0ABC(0x0004) (ZeroConstructor, IsPlainOldData)
	TMap<int, float>                                   DamageAmountToMonsters;                                   // 0x0AC0(0x0050) (ZeroConstructor)
	TMap<int, float>                                   DamageAmountFromMonsters;                                 // 0x0B10(0x0050) (ZeroConstructor)
	int                                                MonsterHeadShotKilledTimes;                               // 0x0B60(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BeMonsterDownTimes;                                       // 0x0B64(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LightCandleNum;                                           // 0x0B68(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x0B6C(0x0004) MISSED OFFSET
	TMap<int, int>                                     ActivityButtonCount;                                      // 0x0B70(0x0050) (BlueprintVisible, ZeroConstructor)
	TArray<struct FActivityEventReportData>            ActivityEventRecordList;                                  // 0x0BC0(0x0010) (ZeroConstructor)
	float                                              BattleStateTime;                                          // 0x0BD0(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsKickedFromGame;                                        // 0x0BD4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x0BD5(0x0003) MISSED OFFSET
	float                                              DriveWithTeammateDistance;                                // 0x0BD8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FistKillingCount;                                         // 0x0BDC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                OpenedAirDropBoxNum;                                      // 0x0BE0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData20[0x4];                                       // 0x0BE4(0x0004) MISSED OFFSET
	TMap<uint32_t, uint32_t>                           VehicleUsedMap;                                           // 0x0BE8(0x0050) (ZeroConstructor)
	TArray<struct FString>                             DestroyVehicleFlow;                                       // 0x0C38(0x0010) (ZeroConstructor)
	int                                                UseHelicoperNum;                                          // 0x0C48(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData21[0x4];                                       // 0x0C4C(0x0004) MISSED OFFSET
	TArray<struct FTLog_KillInfo>                      PlayerKillAIInfo;                                         // 0x0C50(0x0010) (ZeroConstructor)
	TArray<struct FTLog_KillInfo>                      PlayerNearDeathDuoToAI;                                   // 0x0C60(0x0010) (ZeroConstructor)
	struct FTLog_KillInfo                              AIKillPlayerInfo;                                         // 0x0C70(0x0028)
	float                                              UseHelicoperDistance;                                     // 0x0C98(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      CharmRankIndex;                                           // 0x0C9C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData22[0x3];                                       // 0x0C9D(0x0003) MISSED OFFSET
	unsigned char                                      UnknownData23[0x50];                                      // 0x0C9D(0x0050) UNKNOWN PROPERTY: SetProperty Gameplay.UAEPlayerState.UseHelicoperRecord
	unsigned char                                      UnknownData24[0x4];                                       // 0x0CF0(0x0004) MISSED OFFSET
	int                                                SnowBoardJumpActionCount;                                 // 0x0CF4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EmoteOnTelpherCount;                                      // 0x0CF8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KillMagicWalkAI;                                          // 0x0CFC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SendMagicWalkAI;                                          // 0x0D00(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData25[0x4];                                       // 0x0D04(0x0004) MISSED OFFSET
	TArray<int>                                        FindBlackMonsterIDs;                                      // 0x0D08(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                KillSnowManCount;                                         // 0x0D18(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData26[0x4];                                       // 0x0D1C(0x0004) MISSED OFFSET
	uint64_t                                           LuckmateUID;                                              // 0x0D20(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<EEventCounterDefine, int>                     EventCounterMap;                                          // 0x0D28(0x0050) (BlueprintVisible, ZeroConstructor)
	TMap<int, int>                                     GeneralCounterMap;                                        // 0x0D78(0x0050) (BlueprintVisible, ZeroConstructor)
	int                                                VeteranRecruitIndex;                                      // 0x0DC8(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData27[0x4];                                       // 0x0DCC(0x0004) MISSED OFFSET
	TArray<struct FPlayEmoteData>                      FPlayEmoteDataArray;                                      // 0x0DD0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FGameModePlayerAliasInfo                    AliasInfo;                                                // 0x0DE0(0x0048) (BlueprintVisible, BlueprintReadOnly, Net)
	int                                                MemberIdInVoiceRoom;                                      // 0x0E28(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               PlayerVoiceEnable;                                        // 0x0E2C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData28[0x3];                                       // 0x0E2D(0x0003) MISSED OFFSET
	struct FGameModePlayerUpassInfo                    UpassInfo;                                                // 0x0E30(0x0030) (BlueprintVisible, BlueprintReadOnly, Net)
	int                                                UpassShow;                                                // 0x0E60(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                upassKeepBuy;                                             // 0x0E64(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                upassCurValue;                                            // 0x0E68(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               UpassIsBuy;                                               // 0x0E6C(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData29[0x3];                                       // 0x0E6D(0x0003) MISSED OFFSET
	struct FTLog_Micphone                              MicphoneTlog;                                             // 0x0E70(0x0018)
	float                                              TeammateMicrophoneTime;                                   // 0x0E88(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TeammateSpeakerTime;                                      // 0x0E8C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EnemyMicrophoneTime;                                      // 0x0E90(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EnemySpeakerTime;                                         // 0x0E94(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TeammateInterphoneTime;                                   // 0x0E98(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EnemyInterphoneTime;                                      // 0x0E9C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MicrophoneUseTimeStamp;                                   // 0x0EA0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeakerUseTimeStamp;                                      // 0x0EA4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData30[0x38];                                      // 0x0EA8(0x0038) MISSED OFFSET
	bool                                               IsOnline;                                                 // 0x0EE0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData31[0x1F];                                      // 0x0EE1(0x001F) MISSED OFFSET
	struct FGameBaseInfo                               GameBaseInfo;                                             // 0x0F00(0x0080) (Net)
	int                                                CollectedEventType;                                       // 0x0F80(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData32[0x4];                                       // 0x0F84(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.UAEPlayerState");
		return pStaticClass;
	}


	void SetGVMemberIDServerCall(int memberID);
	void SetGVMemberID(int memberID);
	void SetDeliveryResult(uint32_t InDeliverPlayerKey, bool bInSuccess, int EventTypeId);
	void SendLuaDSToClient(int ID, TArray<unsigned char> Content);
	void RPC_LuaDSToClient(int ID, TArray<unsigned char> Content);
	void ReportTaskExtInfo(int TaskId, const struct FString& ExtInfo);
	void ReportTaskData(int TaskId, int process);
	void ReportSpecialCollection(int ItemId, int Count);
	void ReportSecretAreaID(int SecretAreaID);
	void ReportLikeTeammate(int64_t BeLikeUID, int LikeType);
	void ReportLikeSwitch(int SwitchSetting);
	void ReportLikeSelf(int LikeType);
	void ReportLandLocType(int TouchDownLocType);
	void ReportLandAreaList(TArray<int>* TouchDownAreaIDs);
	void ReportLandArea(int TouchDownArea);
	void ReportLabelCheck(int TeammateUID, int Result);
	void RecordUseHelicoper(uint32_t UseHelicoperId);
	void OnRepCampIDBP();
	void OnRep_VeteranRecruitIndex();
	void OnRep_UpdateKillMonsterNum();
	void OnRep_UID();
	void OnRep_PlayerKillsChange();
	void OnRep_MatchLabel();
	void OnRep_CollectItemRecord();
	void OnRep_CampID();
	void OnRep_AliasInfo();
	void OnClientVeteranRecruitIndexUpdated();
	bool IsSpecialPickItemCollectionCompleted(int ItemId);
	bool IsSpecialPickItem(int ItemId);
	bool IsItemForbidMerge(int ItemResId);
	bool IsDeathDamageInfoValid();
	void GetWeaponRecordData(struct FOnePlayerWeapon* OutWeaponInfo);
	int GetVeteranPlayerLevel();
	uint32_t GetUserIDByMemberID(int memberID);
	struct FString GetUIDString();
	struct FGameModeTeammateBattleResultData GetTeammateBattleResultData();
	uint32_t GetPlayerKey();
	struct FGameModePlayerBattleResultData_SuperCold GetPlayerBattleResultData_SuperCold();
	struct FGameModePlayerBattleResultData GetPlayerBattleResultData();
	EMentorPlayerType GetMentorPlayerType();
	struct FDamageInfo GetDeathDamageInfo();
	void ForceUpdateCampCharacterList();
	void ClearTlogData();
	void ChangeCollectItemRecord(int InItemID, bool InNewState);
	void AddGeneralCount(int ID, int InCount, bool bReset);
	void AddEventCount(unsigned char EventId, int InCount, bool bReset);
};


// Class Gameplay.UAEBuffApplierActor
// 0x0008 (0x03A0 - 0x0398)
class AUAEBuffApplierActor : public AActor
{
public:
	class AController*                                 InstigatorController;                                     // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.UAEBuffApplierActor");
		return pStaticClass;
	}


	class AController* GetTheInstigatorController();
};


// Class Gameplay.UAEHouseActor
// 0x00F8 (0x0568 - 0x0470)
class AUAEHouseActor : public AUAENetActor
{
public:
	int                                                iRegionHouse;                                             // 0x0470(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              WindowHideDistanceSquared;                                // 0x0474(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WindowLoadDistanceSquared;                                // 0x0478(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WindowLoadDistanceSquaredOnVeryLowDevice;                 // 0x047C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WindowLoadDistanceSquaredOnServer;                        // 0x0480(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0484(0x0004) MISSED OFFSET
	TArray<struct FUAEWindowRepData>                   WindowList;                                               // 0x0488(0x0010) (Net, ZeroConstructor)
	TMap<int, class UUAEWindowComponent*>              WindowComponents;                                         // 0x0498(0x0050) (ExportObject, ZeroConstructor, Transient)
	bool                                               bEnableWindow;                                            // 0x04E8(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bShouldConsiderDistance;                                  // 0x04E9(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x66];                                      // 0x04EA(0x0066) MISSED OFFSET
	bool                                               SerializeDataUse;                                         // 0x0550(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsStickToTheGround;                                       // 0x0551(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0552(0x0006) MISSED OFFSET
	TArray<unsigned char>                              SerializeData;                                            // 0x0558(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.UAEHouseActor");
		return pStaticClass;
	}


	static void ProcessWindowCreateList();
	void OnRep_WindowList();
	void BroadcastWindowRepDataUpdated(const struct FUAEWindowRepData& InRepData);
};


// Class Gameplay.UAEGameSubsystem
// 0x0310 (0x0338 - 0x0028)
class UUAEGameSubsystem : public UObject
{
public:
	struct FScriptMulticastDelegate                    GameModeStateChangeEvent;                                 // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ActorOverlapEvent;                                        // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ActorDieEvent;                                            // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PawnDieEvent;                                             // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    CharacterDieEvent;                                        // 0x0068(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    EnterAreaTriggerEvent;                                    // 0x0078(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ExitAreaTriggerEvent;                                     // 0x0088(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PawnPickupItemEvent;                                      // 0x0098(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    VehicleOverlapEvent;                                      // 0x00A8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    InteractiveActorBeginEvent;                               // 0x00B8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    InteractiveActorDoneEvent;                                // 0x00C8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    CharacterStartSkill;                                      // 0x00D8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    CharacterStopSkill;                                       // 0x00E8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    CharacterStartSkillPhase;                                 // 0x00F8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    CharacterStopSkillPhase;                                  // 0x0108(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    CharacterStartSkillCooldown;                              // 0x0118(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    CharacterStopSkillCooldown;                               // 0x0128(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    CharacterAddSkill;                                        // 0x0138(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    CharacterRemoveSkill;                                     // 0x0148(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PawnUseAbilityEvent;                                      // 0x0158(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerJoinEvent;                                          // 0x0168(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerRealExitEvent;                                      // 0x0178(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerExitEvent;                                          // 0x0188(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ProjectileStopEvent;                                      // 0x0198(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ProjectileBounceEvent;                                    // 0x01A8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DecoraterActorSpawnEvent;                                 // 0x01B8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    RemoteEvent;                                              // 0x01C8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerDamageQueryEvent;                                   // 0x01D8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PawnNearDeathEvent;                                       // 0x01E8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PawnNearDeathOrRescuedEvent;                              // 0x01F8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAIPawnSpawnEvent;                                       // 0x0208(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCharacterRespawnEvent;                                  // 0x0218(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ChooseEnemyLoseTargetEvent;                               // 0x0228(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    FindEnemyWarningEvent;                                    // 0x0238(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ModFindEnemyWarningEvent;                                 // 0x0248(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    TaskInterActiveActorBeginEvent;                           // 0x0258(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    TaskInterActiveActorDoneEvent;                            // 0x0268(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    LevelAddedEvent;                                          // 0x0278(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DSLuaGMEvent;                                             // 0x0288(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnWeaponFireEvent;                                        // 0x0298(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerPickUpItemEvent;                                    // 0x02A8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerDropItemEvent;                                      // 0x02B8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerUseItemEvent;                                       // 0x02C8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerDisUseItemEvent;                                    // 0x02D8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerSwapItemEvent;                                      // 0x02E8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerEquipItemEvent;                                     // 0x02F8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerUnEquipItemEvent;                                   // 0x0308(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerConsumeEvent;                                       // 0x0318(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PawnChangeTeamEvent;                                      // 0x0328(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.UAEGameSubsystem");
		return pStaticClass;
	}

};


// Class Gameplay.UAEPlayerController
// 0x07F0 (0x0FB0 - 0x07C0)
class AUAEPlayerController : public ALuaPlayerController
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x07C0(0x0010) MISSED OFFSET
	struct FName                                       PlayerType;                                               // 0x07D0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerName;                                               // 0x07D8(0x0010) (Net, ZeroConstructor)
	uint32_t                                           PlayerKey;                                                // 0x07E8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x07EC(0x0004) MISSED OFFSET
	uint64_t                                           UId;                                                      // 0x07F0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerOpenID;                                             // 0x07F8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                TeamID;                                                   // 0x0808(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                IdxInTeam;                                                // 0x080C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                CampID;                                                   // 0x0810(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CharacterLocation;                                        // 0x0814(0x000C) (Net, IsPlainOldData)
	int                                                RoomMode;                                                 // 0x0820(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0824(0x0004) MISSED OFFSET
	struct FWeatherInfo                                WeatherInfo;                                              // 0x0828(0x0018) (Net)
	int                                                planeAvatarId;                                            // 0x0840(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	int                                                DyeDebugFlag;                                             // 0x0844(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	int                                                PlayerStartID;                                            // 0x0848(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bUsedSimulation;                                          // 0x084C(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x084D(0x0003) MISSED OFFSET
	struct FPlayerNetStats                             NetStats;                                                 // 0x0850(0x0040)
	bool                                               bEnablePlaneBanner;                                       // 0x0890(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0891(0x0007) MISSED OFFSET
	struct FString                                     PlanetailResLink;                                         // 0x0898(0x0010) (Net, ZeroConstructor)
	int                                                InPacketLossRate;                                         // 0x08A8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                OutPacketLossRate;                                        // 0x08AC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ClientNetworkType;                                        // 0x08B0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x24];                                      // 0x08B4(0x0024) MISSED OFFSET
	bool                                               bIsForReplay;                                             // 0x08D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsGlobalObserverForReplay;                               // 0x08D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x08DA(0x0002) MISSED OFFSET
	int                                                GameReplayType;                                           // 0x08DC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGameModePlayerUpassInfo                    InitialUpassInfo;                                         // 0x08E0(0x0030)
	TArray<struct FGameModePlayerUpassInfo>            InitialUpassInfoList;                                     // 0x0910(0x0010) (ZeroConstructor)
	TArray<struct FPlayerOBInfo>                       PlayerOBInfoList;                                         // 0x0920(0x0010) (BlueprintVisible, Net, ZeroConstructor)
	int                                                LobbyShowWeaponID;                                        // 0x0930(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsGM;                                                    // 0x0934(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0935(0x0003) MISSED OFFSET
	struct FString                                     Nation;                                                   // 0x0938(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	bool                                               bIsTeammateEscaped;                                       // 0x0948(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0949(0x0007) MISSED OFFSET
	ECharacterGender                                   DefaultCharacterGender;                                   // 0x0950(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0951(0x0003) MISSED OFFSET
	int                                                DefaultCharacterHeadID;                                   // 0x0954(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FGameModePlayerItem>                 InitialItemList;                                          // 0x0958(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<struct FGameModePlayerRolewearInfo>         InitialAllWear;                                           // 0x0968(0x0010) (BlueprintVisible, Net, ZeroConstructor)
	int                                                RolewearIndex;                                            // 0x0978(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x097C(0x0004) MISSED OFFSET
	TArray<int>                                        equip_plating_list;                                       // 0x0980(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	int                                                VehicleSkinInReady;                                       // 0x0990(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bSpwanInVehiclePlayerStart;                               // 0x0994(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0995(0x0003) MISSED OFFSET
	TArray<struct FGameModePlayerItem>                 InitialWeaponAvatarList;                                  // 0x0998(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FGameModePlayerPetInfo                      InitialPetInfo;                                           // 0x09A8(0x0020) (BlueprintVisible, BlueprintReadOnly)
	TArray<struct FGameModePlayerKnapsackExtInfo>      InitialKnapsackExtInfo;                                   // 0x09C8(0x0010) (BlueprintVisible, Net, ZeroConstructor)
	TArray<struct FGameModePlayeWeaponSchemeInfo>      InitialWeaponSchemeInfo;                                  // 0x09D8(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnInitialWeaponScheme;                                    // 0x09E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	int                                                CurWeaponSchemeIndex;                                     // 0x09F8(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                PveLevel;                                                 // 0x09FC(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        InitialCharSkillList;                                     // 0x0A00(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	TArray<struct FGameModePlayerItem>                 InitialVehicleAvatarList;                                 // 0x0A10(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                ShowVehicleSkin;                                          // 0x0A20(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x0A24(0x0004) MISSED OFFSET
	TArray<struct FGameModePlayerItem>                 InitialBackPackPendantList;                               // 0x0A28(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<struct FVehicleAvatarData>                  InitialVehicleAdvanceAvatarList;                          // 0x0A38(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<struct FGameModePlayerItem>                 InitialVehicleMusicList;                                  // 0x0A48(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FGameModePlayerConsumableAvatar             InitialConsumableAvatar;                                  // 0x0A58(0x0010) (BlueprintVisible, Net)
	struct FGameModePlayerEquipmentAvatar              InitialEquipmentAvatar;                                   // 0x0A68(0x000C) (BlueprintVisible, Net)
	unsigned char                                      UnknownData13[0x4];                                       // 0x0A74(0x0004) MISSED OFFSET
	TMap<int, int>                                     WeaponAvatarItemList;                                     // 0x0A78(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData14[0x50];                                      // 0x0AC8(0x0050) MISSED OFFSET
	TMap<int, int>                                     GrenadeAvatarItemList;                                    // 0x0B18(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FGameModeWeaponAvatarData>           WeaponAvatarDataList;                                     // 0x0B68(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	TMap<int, int>                                     VehicleAvatarList;                                        // 0x0B78(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<int, struct FVehicleAvatarData>               VehicleAdvanceAvatarList;                                 // 0x0BC8(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        VehicleMusicList;                                         // 0x0C18(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        DefaultVehicleMusic;                                      // 0x0C28(0x0010) (BlueprintVisible, Net, ZeroConstructor)
	TArray<struct FGameModePlayerExpressionItem>       InitialExpressionItemList;                                // 0x0C38(0x0010) (ZeroConstructor)
	TArray<struct FGameModeWeaponDIYPlanData>          InitialWeaponDIYPlanData;                                 // 0x0C48(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<int, int>                                     WeaponDIYPlanDataMap;                                     // 0x0C58(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<int, int>                                     InitialWeaponPendantList;                                 // 0x0CA8(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FGameModePlayerTaskData>             InitialTaskDataList;                                      // 0x0CF8(0x0010) (ZeroConstructor)
	TArray<struct FSpecialPickItem>                    InitialSpecialPickItemList;                               // 0x0D08(0x0010) (ZeroConstructor)
	TArray<struct FDailyTaskStoreInfo>                 DailyTaskStoreList;                                       // 0x0D18(0x0010) (ZeroConstructor)
	uint32_t                                           TaskSyncToDsTs;                                           // 0x0D28(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x0D2C(0x0004) MISSED OFFSET
	TArray<struct FBornItem>                           BornItems;                                                // 0x0D30(0x0010) (ZeroConstructor)
	int                                                AnchorPlatResID;                                          // 0x0D40(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	int                                                AnchorPlatColorID;                                        // 0x0D44(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x20];                                      // 0x0D48(0x0020) MISSED OFFSET
	int64_t                                            LastGameResultTime;                                       // 0x0D68(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bRoomCanKickPlayer;                                       // 0x0D70(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bCanDownloadInBattle;                                     // 0x0D71(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x6];                                       // 0x0D72(0x0006) MISSED OFFSET
	struct FString                                     IpCountryStr;                                             // 0x0D78(0x0010) (ZeroConstructor)
	bool                                               bRoomOwner;                                               // 0x0D88(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bOpenChangeWearing;                                       // 0x0D89(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bIsObserver;                                              // 0x0D8A(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSpectating;                                            // 0x0D8B(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	uint32_t                                           WatchPlayerKey;                                           // 0x0D8C(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bIsWatchEnd;                                              // 0x0D90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x0D91(0x0003) MISSED OFFSET
	float                                              UpdateOBCircleCounter;                                    // 0x0D94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpdateOBCircleInterval;                                   // 0x0D98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowAutoSelectTeamMate;                                 // 0x0D9C(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x0D9D(0x0003) MISSED OFFSET
	TArray<struct FString>                             FriendObservers;                                          // 0x0DA0(0x0010) (Net, ZeroConstructor)
	bool                                               bCanLedgeGrab;                                            // 0x0DB0(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData20[0xB];                                       // 0x0DB1(0x000B) MISSED OFFSET
	bool                                               bIsSpectatingEnemy;                                       // 0x0DBC(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData21[0x5B];                                      // 0x0DBD(0x005B) MISSED OFFSET
	TWeakObjectPtr<class UUAEUserWidget>               InGameUIRoot;                                             // 0x0E18(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData22[0x4];                                       // 0x0E20(0x0004) MISSED OFFSET
	bool                                               bReconnected;                                             // 0x0E24(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bReconnecting;                                            // 0x0E25(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData23[0x12];                                      // 0x0E26(0x0012) MISSED OFFSET
	struct FScriptMulticastDelegate                    PlayerControllerLostDelegate;                             // 0x0E38(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SyncDailyTaskInfoDelegate;                                // 0x0E48(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerControllerRecoveredDelegate;                        // 0x0E58(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerControllerAboutToReconnectDelegate;                 // 0x0E68(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerControllerReconnectedDelegate;                      // 0x0E78(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerControllerAboutToRespawnDelegate;                   // 0x0E88(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerControllerRespawnedDelegate;                        // 0x0E98(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerControllerAboutToExitDelegate;                      // 0x0EA8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlayerQuitSpectatingForClient;                          // 0x0EB8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlayerControllerBattleBeginPlay;                        // 0x0EC8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData24[0x20];                                      // 0x0ED8(0x0020) MISSED OFFSET
	bool                                               bCanWatchEnemyInRoomMode;                                 // 0x0EF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData25[0x7];                                       // 0x0EF9(0x0007) MISSED OFFSET
	TArray<int>                                        BuffEffectDisplayIDArray;                                 // 0x0F00(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	bool                                               IsDelayNotifyEnterBattleUntilLevelLoad;                   // 0x0F10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData26[0x3];                                       // 0x0F11(0x0003) MISSED OFFSET
	float                                              NotifyTimeOut;                                            // 0x0F14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DelayCloseLoadingTime;                                    // 0x0F18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData27[0x4];                                       // 0x0F1C(0x0004) MISSED OFFSET
	struct FString                                     NeedLoadLevelName;                                        // 0x0F20(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     NeedLoadedLevelFullName;                                  // 0x0F30(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               IsTickHouse;                                              // 0x0F40(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData28[0xF];                                       // 0x0F41(0x000F) MISSED OFFSET
	int                                                AntiDataCD;                                               // 0x0F50(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ModeID;                                                   // 0x0F54(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOpenReconnectUseCharViewPoint;                           // 0x0F58(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData29[0x2F];                                      // 0x0F59(0x002F) MISSED OFFSET
	float                                              ClientToDSFlowLimitTime;                                  // 0x0F88(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ClientToDSFlowLimit;                                      // 0x0F8C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData30[0x20];                                      // 0x0F90(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.UAEPlayerController");
		return pStaticClass;
	}


	bool UseingWeaponScheme();
	void TestShowLongTimeNoOperation();
	void TestShowConfirmDialogOfMisKill();
	void TestRespawn();
	void TestLogout();
	void TestCastUIMsgWithPara(const struct FString& strMsg, const struct FString& module, int TestID);
	void SyncDailyTaskStoreInfo(TArray<struct FDailyTaskStoreInfo> NewDailyTaskStoreList);
	void SetUsedSimulationCVar(bool Value);
	static void SetTargetMsgReceiveDelegate(class UGameInstance* InGameInstance, const struct FScriptDelegate& InDelegate);
	void SetPanels(TArray<class UUAEUserWidget*> panels);
	static void SetDSMsgReceiveDelegate(const struct FScriptDelegate& InDelegate);
	static void SetClientMsgReceiveDelegate(class UGameInstance* InGameInstance, const struct FScriptDelegate& InDelegate);
	void ServerTestLogout();
	void ServerSetVoiceId(int VoiceID);
	void ServerKickSelf();
	void ServerGotoSpectating(class APawn* ViewTarget);
	void ServerExitGame();
	void ServerAcknowledgeReconnection_2(uint32_t Token);
	void SendLuaDSToClient(int ID, TArray<unsigned char> Content);
	void SendLuaClientToDS(int ID, TArray<unsigned char> Content);
	void RPC_Server_SyncClientNetInfo(int InLoss, int OutLoss, int InNetworkType);
	void RPC_Server_ReportClientNetInfo(int AvgPing, int MaxPing, int MinPing, int LostPackRate, int AvgNoOutlier, int StdNoOutlier, int NumNoOutlier, int InLoss, int OutLoss);
	void RPC_LuaDSToClient(int ID, TArray<unsigned char> Content);
	void RPC_LuaClientToDS(int ID, TArray<unsigned char> Content);
	void Respawn();
	void ResetUsedSimulationCVar();
	void ReleaseInGameUI();
	void ReceivePostLoginInit();
	void PrintStatistics();
	void PlayerStartIDReceived();
	void OnRep_WeaponAvatarDataList();
	void OnRep_WatchPlayerKey();
	void OnRep_UsedSimulation();
	void OnRep_PveLevel();
	void OnRep_PlayerOBInfoList();
	void OnRep_LastGameResultTime();
	void OnRep_IsSpectatingEnemy();
	void OnRep_IsSpectating();
	void OnRep_IsObserver();
	void OnRep_InitialWeaponSchemeInfo();
	void OnRep_InitialEquipmentAvatar();
	void OnRep_InitialConsumableAvatar();
	void OnRep_FriendObservers();
	void OnRep_CurWeaponSchemeIndex();
	void OnRep_bRoomOwner();
	void NotifyEnterBattle();
	void LuaDoString(const struct FString& LuaString);
	void KickSelf();
	bool IsSpectator();
	bool IsRoomMode();
	bool IsPureSpectator();
	bool IsObserver();
	bool IsInSpectatingEnemy();
	bool IsInSpectating();
	bool IsFriendOrEnemySpectator();
	bool IsFriendObserver();
	bool IsExited();
	bool IsDemoRecSpectator();
	bool IsDemoPlaySpectator();
	bool IsDemoPlayGlobalObserver();
	void InitWithPlayerParams(const struct FGameModePlayerParams& Params);
	void InitWeaponAvatarItems();
	void InitVehicleMusicList();
	void InitVehicleAvatarList();
	void InitVehicleAdvanceAvatarList();
	void InitIngameUI();
	void InitGrenadeAvatarList(bool ReInitial);
	int GotoSpectating(int PlayerID);
	bool GetWeaponPandentReflect(int wraponID, int* pendantID);
	int GetWeaponAvatarItemId(int ID);
	void GetVisibleLevelsLoadedName(TArray<struct FString>* VisibleLevels);
	struct FDailyTaskStoreInfo GetDailyTaskStoreInfoByTaskId(int TaskId);
	int GetCurrentWeaponSchemeMainSlotItemId();
	uint32_t GetCurrentOBPlayerKey();
	int GetCurrentOBPlayerInfoIndex();
	void ForceNetReady();
	void ExitGame();
	void ExhaustCPU();
	void ExecDSCommand(const struct FString& DSCommand);
	void ExcuteIntRecord(const struct FString& Key, int Count);
	void ExcuteIntCounterRecord(const struct FString& Key, int Count);
	void EnableInGameUI();
	void DumpUAENetActors();
	void DumpRegions();
	void DumpNetActors();
	void DumpCharacters();
	void DumpAllUI();
	void DumpAllObjects();
	void DumpAllActors();
	void DoLuaFile(const struct FString& Filename);
	void DoCrash();
	void DisableInGameUI();
	void DealWithPickUpFailed(const struct FItemDefineID& DefineID);
	void ClientShowTeammateEscapeNotice();
	void ClientRPC_CastUIMsgWithStrings(const struct FString& strMsg, const struct FString& module, int TipsID, const struct FString& param1, const struct FString& param2);
	void ClientRPC_CastUIMsgParams(const struct FString& strMsg, const struct FString& module, int Type);
	void ClientRPC_CastUIMsg(const struct FString& strMsg, const struct FString& module);
	void ClientInitPlayerOBInfoButton();
	void ClientBroadcastRespawnComplete();
	void ClientBroadcastReconnectionSuccessful();
	void ClientAcknowledgeReconnection_4(uint32_t Token);
	void CheckPlayerOBInfoButtonInit();
	bool CheckAcknowledgedPawn(class APawn* InPawn);
	void CastUIMsg(const struct FString& strMsg, const struct FString& module);
	EPickUpCheckResult CanPickUpItem(const struct FItemDefineID& DefineID);
	void CallLuaTableFunction(const struct FString& tableName, const struct FString& FunctionName);
	void CallLuaGlobalFunction(const struct FString& FunctionName);
	void BroadcastRespawnComplete();
};


// Class Gameplay.UAEProjectile
// 0x0040 (0x04A0 - 0x0460)
class AUAEProjectile : public ALuaActor
{
public:
	bool                                               IsServerAlreadyExplodedCpp;                               // 0x0460(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0461(0x0003) MISSED OFFSET
	struct FVector                                     ProjInitialRelativeOffset;                                // 0x0464(0x000C) (BlueprintVisible, Net, IsPlainOldData)
	struct FVector                                     ProjStandOffset;                                          // 0x0470(0x000C) (BlueprintVisible, BlueprintReadOnly, Net, IsPlainOldData)
	struct FVector                                     ProjCrouchOffset;                                         // 0x047C(0x000C) (BlueprintVisible, BlueprintReadOnly, Net, IsPlainOldData)
	struct FVector                                     ProjProneOffset;                                          // 0x0488(0x000C) (BlueprintVisible, BlueprintReadOnly, Net, IsPlainOldData)
	TEnumAsByte<enum ECharacterPoseType>               ProjPrevoisOwnerPose;                                     // 0x0494(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0495(0x0003) MISSED OFFSET
	float                                              SpawnSeconds;                                             // 0x0498(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowGrenadeWarningFlag;                                  // 0x049C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsGroundedOnServerCpp;                                   // 0x049D(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x049E(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.UAEProjectile");
		return pStaticClass;
	}


	void WorkAsBuffApplierEvent(const struct FString& BuffName, class APawn* BuffTarget);
	void TimeoutExplodeMulticast_CPP();
	void TimeoutExplodeMulticast_BPEvent();
	void StartFlyMulticast_CPP(const struct FVector& Vel, bool isHighMode);
	void StartFlyMulticast_BPEvent(const struct FVector& Vel, bool isHighMode);
	void SetActorInitialRelativeOffset(const struct FVector& Offset, const struct FVector& StandOffset, const struct FVector& CrouchOffset, const struct FVector& ProneOffset, TEnumAsByte<enum ECharacterPoseType> PrevoisOwnerPose);
	void ServerNotifyGroundEventOnClient();
	void OnRep_IsServerAlreadyExplodedCpp();
	void OnRep_IsGroundedOnServerCpp();
	void OnProjectileStopOnServer();
	void OnProjectileStopOnClient();
	void IsServerAlreadyExplodedCppNotify();
	bool IsOwnerAutomous();
	void GlassDetect(const struct FVector& Start, const struct FVector& End);
	float GetRemainingEffectTime();
	void CallExplode();
	void BroadcastClientExplode();
};


// Class Gameplay.UAEOBState
// 0x0000 (0x0420 - 0x0420)
class AUAEOBState : public APlayerState
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.UAEOBState");
		return pStaticClass;
	}

};


// Class Gameplay.BackpackComponent
// 0x0328 (0x0438 - 0x0110)
class UBackpackComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0110(0x0070) MISSED OFFSET
	struct FScriptMulticastDelegate                    ItemListUpdatedDelegate;                                  // 0x0180(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SingleItemUpdatedDelegate;                                // 0x0190(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SingleItemDeleteDelegate;                                 // 0x01A0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    CapacityUpdatedDelegate;                                  // 0x01B0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ItemOperationDelegate;                                    // 0x01C0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ItemOperationInfoDelegate;                                // 0x01D0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AssociationOperationDelegate;                             // 0x01E0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ItemOperCountDelegate;                                    // 0x01F0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ItemOperationFailedDelegate;                              // 0x0200(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    BackPackTipsToPlayerDelegate;                             // 0x0210(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ItemHandleAddDelegate;                                    // 0x0220(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	TMap<int, int>                                     PickupLimitSetting;                                       // 0x0230(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	struct FScriptMulticastDelegate                    ItemUpdatedDelegate;                                      // 0x0280(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    ItemRemovedDelegate;                                      // 0x0290(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference)
	TArray<struct FCustomAccessoriesData>              CustomAccessoriesData;                                    // 0x02A0(0x0010) (ZeroConstructor)
	TArray<struct FBattleItemPickupAfterLand>          BattleItemPickupAfterLandList;                            // 0x02B0(0x0010) (ZeroConstructor)
	TArray<struct FSpecialPickInfo>                    specialCountLimit;                                        // 0x02C0(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x02D0(0x0010) MISSED OFFSET
	struct FIncNetArray                                ItemListNet;                                              // 0x02E0(0x0020) (Net)
	TArray<struct FBattleItemData>                     CachItemList;                                             // 0x0300(0x0010) (ZeroConstructor)
	struct FIncNetArray                                ItemListNetCache;                                         // 0x0310(0x0020)
	bool                                               AutoEquipAim;                                             // 0x0330(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0331(0x0007) MISSED OFFSET
	TArray<class UItemHandleBase*>                     ItemHandleList;                                           // 0x0338(0x0010) (ZeroConstructor)
	TMap<struct FItemDefineID, class UItemHandleBase*> ItemHandleMap;                                            // 0x0348(0x0050) (ZeroConstructor)
	int                                                CapacityThreshold;                                        // 0x0398(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Capacity;                                                 // 0x039C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OccupiedCapacity;                                         // 0x03A0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SafetyBoxCapacity;                                        // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SafetyBoxOccupiedCapacity;                                // 0x03A8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x18];                                      // 0x03AC(0x0018) MISSED OFFSET
	int                                                virtualitemid;                                            // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    ZombieModeSkillPropLevelChangedDelegate;                  // 0x03D0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ZombieModeSkillPropCDDelegate;                            // 0x03E0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData05[0x8];                                       // 0x03F0(0x0008) MISSED OFFSET
	bool                                               IsForbidAutoEquipAttachments;                             // 0x03F8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x03F9(0x0007) MISSED OFFSET
	TArray<int>                                        NeedToShowTypeList;                                       // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bShowBounty;                                              // 0x0410(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0411(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    BackpackShowBountyDelegate;                               // 0x0418(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FString                                     LuaFilePath;                                              // 0x0428(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.BackpackComponent");
		return pStaticClass;
	}


	bool UseItem(const struct FItemDefineID& DefineID, const struct FBattleItemUseTarget& Target, EBattleItemUseReason Reason);
	float UpdateCapacity();
	void UnlockUpdateItemListReceive();
	void UnequipItem(const struct FItemDefineID& DefineID);
	void TryMergeItemHandles(const struct FItemDefineID& DefineID, EItemStoreArea InItemStoreArea);
	int TakeItem(const struct FItemDefineID& DefineID, int Count, bool bCallHandleDrop);
	bool SwapItem(const struct FItemDefineID& DefineID1, const struct FItemDefineID& DefineID2);
	void ServerSetShowBounty(bool bInShowBounty);
	void ServerSetCustomAccessories(int WeaponItemID, int Index, int ItemId);
	void ServerEnableItem(const struct FItemDefineID& DefineID, bool bUse);
	int ReturnItem(const struct FItemDefineID& DefineID, int Count, bool bCallHandlePickup);
	bool RemoveItemHandle(const struct FItemDefineID& DefineID);
	void ReceiveItemList();
	void ReceiveCapacity();
	bool PickupItemFromWrapperDetail(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& pickupInfo, EBattleItemPickupReason Reason, EBattleItemClientPickupType BattleItemClientPickupType);
	bool PickUpItem_Default(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& pickupInfo, EBattleItemPickupReason Reason);
	bool PickupItem(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& pickupInfo, EBattleItemPickupReason Reason, EBattleItemClientPickupType BattleItemClientPickupType);
	void PickupBattleItemOnPlane();
	bool PickItem_IntoSafetyBox(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& pickupInfo, EBattleItemPickupReason Reason);
	bool PickItem_IntoBackpack(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& pickupInfo, EBattleItemPickupReason Reason);
	void OnRep_specialCountLimit();
	void OnRep_ItemListNet();
	void OnRep_ItemList();
	void OnRep_Capacity();
	void NotifyItemUpdated(const struct FItemDefineID& DefineID);
	void NotifyItemRemoved(const struct FItemDefineID& DefineID);
	void NotifyItemListUpdated();
	void NotifyCapacityUpdated();
	class UBattleItemHandleBase* NewItemHandle(const struct FItemDefineID& DefineID);
	void ModifyItemHandleEquippingState(class UItemHandleBase* ItemHandle, bool bEquipping);
	void ModifyItemHandleCount(class UItemHandleBase* ItemHandle, int Count);
	void ModifyAutoPickClipType(int InAutoPickClipType);
	void ModifyAimNotAutoUse(bool bAdd);
	void LockUpdateItemListReceive();
	struct FBattleItemData ItemNet2Data(const struct FNetArrayUnit& netItem);
	bool IsNeedToShowInBackpack(int TypeDefineID);
	bool IsItemExist(const struct FItemDefineID& DefineID);
	bool IsEnableWeaponAttachmentBindToWeapon();
	bool IsCustomIgnoreAccessories(int WeaponId, int Index);
	bool IsCustomAccessories(int WeaponId, int ItemId);
	bool IsAutoUse(int ItemId);
	bool HasUnEquipItemByDefindIdRange(int LowValue, int HighValue);
	bool HasTagSub(int ItemId, const struct FName& TagName);
	bool HasItemBySubType(int SubType);
	bool HasItemByDefineID(const struct FItemDefineID& DefineID);
	bool HasItemByDefindIdRange(int LowValue, int HighValue);
	void HandleDropInDisuse(const struct FItemDefineID& DefineID, class UBattleItemHandleBase* ItemHandle, EBattleItemDisuseReason Reason, float OccupiedCapacityBeforeDisuse);
	class UWorld* GetWorld_BP();
	int GetUnEquipItemNumByItemId(int ItemId);
	struct FSpecialPickInfo GetSpecialItemNow(const struct FItemDefineID& DefineID);
	struct FSpecialPickInfo GetSpecialItemBefore(int ItemResId);
	struct FBattleItemData GetLeastElectrictyBattleItemData(const struct FItemDefineID& DefineID, const struct FString& AdditionalDataName);
	int GetItemSubType(int ItemId);
	TArray<struct FBattleItemData> GetItemListByDefineID(const struct FItemDefineID& DefineID);
	TMap<struct FItemDefineID, class UItemHandleBase*> GetItemHandleMap();
	TArray<class UItemHandleBase*> GetItemHandleList();
	int GetItemCountByType(int InItemType);
	int GetItemCountByItemSpecialID(int InItemSpecialID);
	struct FBattleItemData GetItemByDefineID(const struct FItemDefineID& DefineID);
	float GetItemAssociateWeights(const struct FBattleItemData& InItemData);
	struct FBattleItemData GetFirstItemBySubType(int SubType);
	struct FBattleItemData GetFirstItemByDefineIDIgnoreInstance(const struct FItemDefineID& DefineID);
	struct FBattleItemFeatureData GetBattleItemFeatureDataByDefineID(const struct FItemDefineID& DefineID);
	TArray<struct FBattleItemData> GetAllItemList(EItemStoreArea InItemStoreArea);
	EBattleItemClientPickupType GetAIPickupType(int ItemId);
	void ForceNetUpdate();
	void EquipItem(const struct FItemDefineID& DefineID);
	bool DropItem(const struct FItemDefineID& DefineID, int Count, EBattleItemDropReason Reason);
	bool DisuseItem(const struct FItemDefineID& DefineID, EBattleItemDisuseReason Reason);
	class UBattleItemHandleBase* CreateItemHandleInternal(const struct FItemDefineID& DefineID);
	class UItemHandleBase* CreateItemHandle(const struct FItemDefineID& DefineID);
	int ConsumeItem(const struct FItemDefineID& DefineID, int Count);
	void ClientUpdateSingleItem(const struct FItemDefineID& DefineID);
	void ClientUpdateItemData(const struct FBattleItemData& InItemData);
	void ClientRemoveItemData(const struct FBattleItemData& InItemData);
	void ClientBroadcastItemOperationFailedDelegate(const struct FItemDefineID& DefineID, EBattleItemOperationType OperationType, EBattleItemOperationFailedReason FailedReason);
	void ClientBroadcastItemOperationDelegate(const struct FItemDefineID& DefineID, EBattleItemOperationType OperationType, unsigned char Reason);
	int CheckSpecialMaxCountForItem(const struct FItemDefineID& DefineID, int Count);
	bool CheckSkillPropItemCanBePickup(class UBackpackComponent* BackpackComp, const struct FItemDefineID& DefineID);
	int CheckLeftLimitCountForItem(int InItemID, int InCount);
	int CheckCapacityForItem(const struct FItemDefineID& DefineID, int Count, EItemStoreArea InItemStoreArea);
	bool ChangeItemStoreArea(const struct FItemDefineID& DefineID, int InItemNum, EItemStoreArea InItemStoreArea);
	bool CanDisuseToBackpack(const struct FItemDefineID& DefineID);
	bool CacheItemAssociationBeforeDisuse(const struct FItemDefineID& DefineID, EBattleItemDisuseReason Reason);
	void BroadcastItemOperCountDelegate(const struct FItemDefineID& DefineID, EBattleItemOperationType OperationType, int Count);
	void BroadcastItemOperationInfoDelegate(const struct FItemOperationInfo& ItemOperationInfo);
	void BroadcastItemOperationFailedDelegate(const struct FItemDefineID& DefineID, EBattleItemOperationType OperationType, EBattleItemOperationFailedReason FailedReason);
	void BroadcastItemOperationDelegate(const struct FItemDefineID& DefineID, EBattleItemOperationType OperationType, unsigned char Reason);
	bool AddItemHandle(const struct FItemDefineID& DefineID, class UItemHandleBase* ItemHandle);
	void AddBattleItemPickupOnPlane(EBattleItemPickupReason Reason, EBattleItemClientPickupType BattleItemClientPickupType, struct FItemDefineID* DefineID, struct FBattleItemPickupInfo* pickupInfo);
};


// Class Gameplay.ItemActorComponent
// 0x0000 (0x0110 - 0x0110)
class UItemActorComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.ItemActorComponent");
		return pStaticClass;
	}

};


// Class Gameplay.BaseGeneratorComponent
// 0x0108 (0x0218 - 0x0110)
class UBaseGeneratorComponent : public UItemActorComponent
{
public:
	bool                                               bWorldTileGenerator;                                      // 0x0110(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bModeStateControl;                                        // 0x0111(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0112(0x0002) MISSED OFFSET
	int                                                GenerateSpotCountPerTick;                                 // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     ItemTableName;                                            // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             ItemSpawnTableList;                                       // 0x0128(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UUAEDataTable*                               ItemTable;                                                // 0x0138(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsWriteStatisticsToLog;                                   // 0x0140(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0141(0x0007) MISSED OFFSET
	TMap<TEnumAsByte<enum ESpotGroupType>, struct FGroupSpotComponentArray> AllGroupSpots;                                            // 0x0148(0x0050) (ZeroConstructor)
	TArray<class USpotSceneComponent*>                 AllSpotsToTick;                                           // 0x0198(0x0010) (ExportObject, ZeroConstructor)
	TMap<int, struct FWorldTileSpotArray>              WorldTileSpots;                                           // 0x01A8(0x0050) (ZeroConstructor)
	struct FString                                     CookedFilePath;                                           // 0x01F8(0x0010) (Edit, ZeroConstructor)
	TArray<struct FString>                             CookedFileAddPathArray;                                   // 0x0208(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.BaseGeneratorComponent");
		return pStaticClass;
	}


	void RegisterWorldTileSpot(class USpotSceneComponent* Spot);
	void RegisterSpotComponentToTick(class USpotSceneComponent* SpotComponent);
	void RegisterGroupSpotComponent(class UGroupSpotSceneComponent* GroupSpotComponent);
	struct FString GetRandomCategory(TArray<struct FSpotWeight> SpotWeights);
	void GeneratorWorldTileSpots(struct FWorldTileSpotArray* SpotArray);
	void GenerateSpots();
	void GenerateSpotOnTick(float DeltaTime);
	class AActor* GeneratePickupActor(class UClass* ActorClass, ESpawnActorCollisionHandlingMethod SpawnActorCollisionHandlingMethod, const struct FItemGenerateSpawnClass& ItemData, struct FVector* ActorLocation, struct FRotator* ActorRotator);
	void CheckTileLevelsVisible();
};


// Class Gameplay.ConfigInterface
// 0x0000 (0x0028 - 0x0028)
class UConfigInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.ConfigInterface");
		return pStaticClass;
	}

};


// Class Gameplay.FoliageFakeCollision
// 0x0008 (0x03A0 - 0x0398)
class AFoliageFakeCollision : public AActor
{
public:
	class UCapsuleComponent*                           CollisionComponent;                                       // 0x0398(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.FoliageFakeCollision");
		return pStaticClass;
	}

};


// Class Gameplay.GameModeConfigComponent
// 0x0018 (0x0128 - 0x0110)
class UGameModeConfigComponent : public UActorComponent
{
public:
	int                                                appleGrenadeID;                                           // 0x0110(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                appleGrenadeCount;                                        // 0x0114(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        forbitPickItemTypeList;                                   // 0x0118(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.GameModeConfigComponent");
		return pStaticClass;
	}

};


// Class Gameplay.PatchTableUtils
// 0x0000 (0x0028 - 0x0028)
class UPatchTableUtils : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.PatchTableUtils");
		return pStaticClass;
	}

};


// Class Gameplay.GameModeStatisticsComponent
// 0x0000 (0x0110 - 0x0110)
class UGameModeStatisticsComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.GameModeStatisticsComponent");
		return pStaticClass;
	}

};


// Class Gameplay.GeneratorActorAIInterface
// 0x0000 (0x0028 - 0x0028)
class UGeneratorActorAIInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.GeneratorActorAIInterface");
		return pStaticClass;
	}


	void RegisterAIPickupPoint(const struct FVector& BuildingLoc, const struct FVector& SpotLoc, class AActor* PickUpActor);
};


// Class Gameplay.GeneratorActorInterface
// 0x0000 (0x0028 - 0x0028)
class UGeneratorActorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.GeneratorActorInterface");
		return pStaticClass;
	}


	void SetExtendData(const struct FString& Key, int Value);
	void SetAttachedActor(class AActor* AttachedActor);
	void InitDataNew(int ItemCount, const struct FString& Value, const struct FString& Category, bool RepeatGenerateItem, int SpotDataIndex);
	void InitData(class UItemSpotSceneComponent* ItemSpotSceneComponent, int ItemCount, const struct FString& Value, const struct FString& Category, bool RepeatGenerateItem);
	int GetItemId();
};


// Class Gameplay.GeneratorVehicleInterface
// 0x0000 (0x0028 - 0x0028)
class UGeneratorVehicleInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.GeneratorVehicleInterface");
		return pStaticClass;
	}


	void SetSafeSpawn(bool ab_IsSafeSpawn);
	void InitVehicle(int FuelPercent, bool bEngineOn, bool bInHouse);
	void CheckSpawnLocation(const struct FVector& SpawnLocation, float MaxSpawnDistance);
};


// Class Gameplay.GlobalConfigActor
// 0x0010 (0x03A8 - 0x0398)
class AGlobalConfigActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0398(0x0008) MISSED OFFSET
	bool                                               bInitComponents;                                          // 0x03A0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03A1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.GlobalConfigActor");
		return pStaticClass;
	}


	void Init();
};


// Class Gameplay.ItemSceneComponent
// 0x0000 (0x02D0 - 0x02D0)
class UItemSceneComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.ItemSceneComponent");
		return pStaticClass;
	}

};


// Class Gameplay.GroupSpotSceneComponent
// 0x0010 (0x02E0 - 0x02D0)
class UGroupSpotSceneComponent : public UItemSceneComponent
{
public:
	float                                              LastGenerateItemTime;                                     // 0x02D0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GenerateItemTimeCD;                                       // 0x02D4(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bPickup;                                                  // 0x02D8(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bRepeatGenerateItem;                                      // 0x02D9(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsValidGroup;                                            // 0x02DA(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x02DB(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.GroupSpotSceneComponent");
		return pStaticClass;
	}


	void SetGroupValid(bool Valid);
	bool IsValidGroup();
	int FindWorldCompositionID();
	void DoPickUp();
};


// Class Gameplay.ImplItemRegionInterface
// 0x0000 (0x0028 - 0x0028)
class UImplItemRegionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.ImplItemRegionInterface");
		return pStaticClass;
	}


	struct FItemRegionCircle GetRegion(const struct FString& Tag);
};


// Class Gameplay.SpotSceneComponent
// 0x0020 (0x02F0 - 0x02D0)
class USpotSceneComponent : public UItemSceneComponent
{
public:
	int                                                WorldCompositionID;                                       // 0x02D0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HalfHeight;                                               // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SpotProbability;                                          // 0x02D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LineOffsetZ;                                              // 0x02DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRepeatGenerateItem;                                      // 0x02E0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsSpotValid;                                             // 0x02E1(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x02E2(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.SpotSceneComponent");
		return pStaticClass;
	}


	void SetSpotValid(bool Valid);
	bool LineTraceSingle(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, bool bIgnoreSelf, struct FHitResult* OutHit);
	bool IsSpotValid();
	struct FString GetRandomCategory(TArray<struct FSpotWeight> SpotWeights);
	bool GenerateSpot();
	class AActor* GenerateActor(class UClass* ActorClass, ESpawnActorCollisionHandlingMethod SpawnActorCollisionHandlingMethod, struct FVector* ActorLocation, struct FRotator* ActorRotator);
};


// Class Gameplay.ItemBandSpotSceneComponent
// 0x0040 (0x0330 - 0x02F0)
class UItemBandSpotSceneComponent : public USpotSceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02F0(0x0008) MISSED OFFSET
	struct FString                                     SpotItemCategory;                                         // 0x02F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ConditionItemValue;                                       // 0x0308(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ConditionItemCategory;                                    // 0x0318(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0328(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.ItemBandSpotSceneComponent");
		return pStaticClass;
	}

};


// Class Gameplay.ItemConfigActorComponent
// 0x0060 (0x0170 - 0x0110)
class UItemConfigActorComponent : public UActorComponent
{
public:
	TArray<struct FItemSpawnData>                      ItemSpawnDatas;                                           // 0x0110(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int, struct FGroupTypeSceneComponents>        AllSpotGroups;                                            // 0x0120(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.ItemConfigActorComponent");
		return pStaticClass;
	}


	void RegisterGroupSceneComponent(int GroupType, class USceneComponent* GroupSceneComponent);
	TArray<struct FItemSpawnClass> RandomItemSpawnClass(const struct FString& ItemValue, const struct FString& ItemCategory);
	TArray<class USceneComponent*> RandomGroupSceneComponents(int GroupType, int Persent);
	class USceneComponent* RandomGroupSceneComponent(TArray<class USceneComponent*> AllGroups);
	class UClass* LoadActorClass(const struct FString& Path);
	TArray<struct FItemSpawnClass> GetItemSpawnClass(const struct FItemSpawnData& Data);
};


// Class Gameplay.ItemCountArea
// 0x0008 (0x03A0 - 0x0398)
class AItemCountArea : public AActor
{
public:
	class UBoxComponent*                               Area;                                                     // 0x0398(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.ItemCountArea");
		return pStaticClass;
	}


	bool IsInArea(struct FVector* Position);
};


// Class Gameplay.ItemGenerateInterface
// 0x0000 (0x0028 - 0x0028)
class UItemGenerateInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.ItemGenerateInterface");
		return pStaticClass;
	}

};


// Class Gameplay.ItemGeneratorComponent
// 0x0540 (0x0758 - 0x0218)
class UItemGeneratorComponent : public UBaseGeneratorComponent
{
public:
	struct FVector                                     ItemGenerateOffset;                                       // 0x0218(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TEnumAsByte<enum ESpotGroupType>                   BornIslandGroupType;                                      // 0x0224(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bStatisticsValid;                                         // 0x0225(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0226(0x0002) MISSED OFFSET
	struct FItemGenerateStatisticsData                 ItemStatisticsData;                                       // 0x0228(0x0110)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0338(0x0050) UNKNOWN PROPERTY: SetProperty Gameplay.ItemGeneratorComponent.IgnoreItemClassPathSet
	TArray<struct FSpotGroupProperty>                  SpotGroupPropertys;                                       // 0x0388(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               UseSpotGroupPropertysEx;                                  // 0x0398(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               UseAreaID;                                                // 0x0399(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x039A(0x0006) MISSED OFFSET
	TArray<struct FString>                             AreaIDList;                                               // 0x03A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FItemRegionCircle>                   ReplacedGeneratorRegionMap;                               // 0x03B0(0x0010) (ZeroConstructor)
	TArray<struct FSpotGroupProperty>                  SpotGroupPropertysEx;                                     // 0x03C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FExtraItemSpawn>                     ExtraSpawnItemsList;                                      // 0x03D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<TEnumAsByte<enum ESpotGroupType>, struct FSpotGroupProperty> SpotGroupPropertysDic;                                    // 0x03E0(0x0050) (ZeroConstructor)
	struct FSpotGroupProperty                          DefaultSpotGroupProperty;                                 // 0x0430(0x0028)
	class UCurveFloat*                                 SpotRateCurve;                                            // 0x0458(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ItemRateCurve;                                            // 0x0460(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TMap<struct FString, float>                        CategoryRates;                                            // 0x0468(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<struct FString, struct FItemGenerateSpawnDataArray> ItemGenerateSpawnDatas;                                   // 0x04B8(0x0050) (ZeroConstructor)
	TArray<class AActor*>                              BornIslandItems;                                          // 0x0508(0x0010) (ZeroConstructor)
	TArray<class UItemGroupSpotSceneComponent*>        AllValidGroups;                                           // 0x0518(0x0010) (ExportObject, ZeroConstructor)
	bool                                               bIsGenerateBornIslandItems;                               // 0x0528(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsGenerateMainlandItems;                                 // 0x0529(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsGenerateWorldTileItems;                                // 0x052A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x052B(0x0005) MISSED OFFSET
	struct FDateTime                                   GenerateBornIslandTime;                                   // 0x0530(0x0008)
	struct FDateTime                                   GenerateMainlandTime;                                     // 0x0538(0x0008)
	bool                                               bUseLocalSpotFile;                                        // 0x0540(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x57];                                      // 0x0541(0x0057) MISSED OFFSET
	TArray<struct FRepeatItemSpotData>                 AllRepeatItemSpotData;                                    // 0x0598(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData05[0x10];                                      // 0x05A8(0x0010) MISSED OFFSET
	TArray<struct FItemGenerateSpawnClass>             AllItemSpotDataToTick;                                    // 0x05B8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData06[0x50];                                      // 0x05C8(0x0050) MISSED OFFSET
	struct FString                                     CookedBandFilePath;                                       // 0x0618(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData07[0x50];                                      // 0x0628(0x0050) MISSED OFFSET
	bool                                               bIsAreaItemLimit;                                         // 0x0678(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0679(0x0007) MISSED OFFSET
	TArray<struct FAreaItemsLimitEdit>                 AreaItemsLimit;                                           // 0x0680(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<struct FRegionID, struct FAreaItemsLimit>     AreaItemsLimitMaps;                                       // 0x0690(0x0050) (ZeroConstructor)
	int                                                DSSwitchSyncLoadId;                                       // 0x06E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseDynamicSpotConfig;                                    // 0x06E4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x06E5(0x0003) MISSED OFFSET
	TArray<struct FDynamicSpotConfig>                  DynamicSpotConfigs;                                       // 0x06E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData10[0x60];                                      // 0x06F8(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.ItemGeneratorComponent");
		return pStaticClass;
	}


	void WriteItemSpotStatisticsDatas();
	void WriteItemClassStatisticsDatas_V15();
	void WriteItemClassStatisticsDatas();
	void WriteGroupStatisticsDatas();
	void WriteBuildingStatisticsDatas();
	void WriteAreaItemStatisticsDatas();
	void WriteAllStatisticsDatasToLog();
	void WriteAllStatisticsDatas();
	void SetCatetoryRate(TMap<struct FString, float> Rates);
	void RegisterItemGenerateSpawnData(const struct FItemGenerateSpawnData& Data);
	void RegisterBornIslandItem(class AActor* Item);
	class UUAEDataTable* ReadItemGenerateTable(const struct FString& TablePath);
	class UItemGroupSpotSceneComponent* RandomSingleGroup(const struct FSpotGroupProperty& GroupProperty, TArray<class UGroupSpotSceneComponent*>* Groups);
	struct FItemGenerateSpawnData RandomItemGenerateSpawnData(TArray<struct FItemGenerateSpawnData>* Items);
	void RandomGroupsByType(const struct FSpotGroupProperty& GroupProperty);
	void RandomGroups();
	void RandomBornIslandGroups();
	void OnAsyncLoadItemClassFinish(const struct FItemGenerateSpawnClass& SpawnClass);
	void LoadItemGenerateTable();
	bool IsCatetoryEnabled();
	void InitCatetorys();
	void InitCategoryEx();
	struct FSpotGroupProperty GetSpotGroupPropertyByGroupType(TEnumAsByte<enum ESpotGroupType> SpotGroupType);
	bool GetRandomItemClassArray(bool RepeatGenerateItem, class UItemSpotSceneComponent* SpotComponent, struct FString* Value, struct FString* Category, TArray<struct FItemGenerateSpawnClass>* Results);
	int GetItemDefineID(class UClass* PickUpClass);
	float GetCatetoryRate(const struct FString& Catetory);
	void GenerateSpotOnTick(float DeltaTime);
	struct FVector FindASpawnLoc(class UWorld* InWorld, const struct FVector& TraceStart);
	void EnableDynamicSpotConfigByIndex(int DynamicIndex);
	void DeleteValidGroups();
	void DeleteBornIslandItems();
	bool CheckShouldGenerateItem(int ItemId);
	void CheckRecoverItems();
	void AddIgnoreItemClassPath(TArray<struct FString> IgnoreItemClassList);
};


// Class Gameplay.ItemGroupRepeatSpotComponent
// 0x00C0 (0x03A0 - 0x02E0)
class UItemGroupRepeatSpotComponent : public UGroupSpotSceneComponent
{
public:
	float                                              RepeatGenerateItemTimer;                                  // 0x02E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                GroupID;                                                  // 0x02E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     GroupTag;                                                 // 0x02E8(0x0010) (Edit, ZeroConstructor)
	TArray<class UItemSpotSceneComponent*>             Spots;                                                    // 0x02F8(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor)
	TArray<class UItemSpotSceneComponent*>             PendingGenerateSpots;                                     // 0x0308(0x0010) (ExportObject, ZeroConstructor)
	class UItemGeneratorComponent*                     ItemGenerator;                                            // 0x0318(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FSpotGroupProperty                          SpotGroupProperty;                                        // 0x0320(0x0028)
	TMap<TEnumAsByte<enum ESpotType>, struct FSpotTypeProperty> SpotTypePropertys;                                        // 0x0348(0x0050) (ZeroConstructor)
	bool                                               bInitialize;                                              // 0x0398(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnable;                                                  // 0x0399(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x039A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.ItemGroupRepeatSpotComponent");
		return pStaticClass;
	}


	void Stop();
	void SetPropertySpotAll();
	class AUAEGameMode* GetGameMode();
	void GenerateSpotAll();
	void ClearAllSpotItems();
};


// Class Gameplay.ItemGroupSpotSceneComponent
// 0x0030 (0x0310 - 0x02E0)
class UItemGroupSpotSceneComponent : public UGroupSpotSceneComponent
{
public:
	class UItemGeneratorComponent*                     ItemGenerator;                                            // 0x02E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UItemSpotSceneComponent*>             SpotsCacheCur;                                            // 0x02E8(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UItemSpotSceneComponent*>             SpotsCacheAll;                                            // 0x02F8(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0308(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.ItemGroupSpotSceneComponent");
		return pStaticClass;
	}


	void SetGroupProperty(class UItemGeneratorComponent* Generator, const struct FSpotGroupProperty& Property);
	void RepeatSpots();
	void RepeatSingleSpot(class UItemSpotSceneComponent* Spot);
	void RandomSpotByType(TEnumAsByte<enum ESpotType> SpotType, const struct FSpotTypeProperty& Property, TArray<class UItemSpotSceneComponent*>* AllSpots);
	void RandomSingleSpot(const struct FSpotTypeProperty& Property, TArray<class UItemSpotSceneComponent*>* Spots);
	float RandomRepeatGenerateItemCD(const struct FSpotGroupProperty& GroupProperty);
};


// Class Gameplay.ItemSpotSceneComponent
// 0x0080 (0x0370 - 0x02F0)
class UItemSpotSceneComponent : public USpotSceneComponent
{
public:
	class UItemGeneratorComponent*                     ItemGenerator;                                            // 0x02F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FItemGenerateSpawnClass>             AllItems;                                                 // 0x02F8(0x0010) (ZeroConstructor)
	class UGroupSpotSceneComponent*                    GroupSpotSceneComponent;                                  // 0x0308(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TMap<struct FString, int>                          CacheItemValeCategory;                                    // 0x0310(0x0050) (ZeroConstructor)
	TArray<TWeakObjectPtr<class AActor>>               CacheItems;                                               // 0x0360(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.ItemSpotSceneComponent");
		return pStaticClass;
	}


	void SetSpotProperty(int CompositionID, TEnumAsByte<enum ESpotGroupType> GroupType, class UItemGeneratorComponent* Generator, const struct FSpotTypeProperty& Property, class UGroupSpotSceneComponent* Component, bool RepeatGenerateItem);
	void RepeatSpotProperty(const struct FSpotTypeProperty& Property);
	bool GenerateSpot();
	void GenerateItems(TArray<struct FItemGenerateSpawnClass>* AllItemClass);
	void DoPickUp(const struct FString& ItemValue, const struct FString& ItemCategory);
	int CountCacheItemValeCategory();
	void ClearCacheItems();
};


// Class Gameplay.LuaBTTaskBase
// 0x00A0 (0x0110 - 0x0070)
class ULuaBTTaskBase : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0070(0x0060) MISSED OFFSET
	class AAIController*                               AIOwner;                                                  // 0x00D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      ActorOwner;                                               // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x00E0(0x0018) MISSED OFFSET
	unsigned char                                      bShowPropertyDetails : 1;                                 // 0x00F8(0x0001) (Edit, DisableEditOnTemplate)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0100(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.LuaBTTaskBase");
		return pStaticClass;
	}


	void SetFinishOnMessageWithId(const struct FName& MessageName, int RequestID);
	void SetFinishOnMessage(const struct FName& MessageName);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecute(class AActor* OwnerActor);
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveAbort(class AActor* OwnerActor);
	bool IsTaskExecuting();
	bool IsTaskAborting();
	void FinishExecute(bool bSuccess);
	void FinishAbort();
};


// Class Gameplay.MissionBoardComponent
// 0x0060 (0x0170 - 0x0110)
class UMissionBoardComponent : public UActorComponent
{
public:
	struct FMissionBoardConfig                         Config;                                                   // 0x0110(0x0050) (BlueprintVisible, BlueprintReadOnly, Net)
	struct FScriptMulticastDelegate                    OnRepConfigDelegate;                                      // 0x0160(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.MissionBoardComponent");
		return pStaticClass;
	}


	void OnRep_Config();
	int GetUtcLeftSecondsByConfig();
};


// Class Gameplay.SpotGeneratorStruct
// 0x0000 (0x0028 - 0x0028)
class USpotGeneratorStruct : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.SpotGeneratorStruct");
		return pStaticClass;
	}

};


// Class Gameplay.TriggerActionSpawnItemInterface
// 0x0000 (0x0028 - 0x0028)
class UTriggerActionSpawnItemInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.TriggerActionSpawnItemInterface");
		return pStaticClass;
	}

};


// Class Gameplay.UAEActorMap
// 0x0050 (0x03E8 - 0x0398)
class AUAEActorMap : public AInfo
{
public:
	TMap<struct FVector, class AActor*>                ActorsMap;                                                // 0x0398(0x0050) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.UAEActorMap");
		return pStaticClass;
	}

};


// Class Gameplay.UAEAdvertisementActor
// 0x0040 (0x03E8 - 0x03A8)
class AUAEAdvertisementActor : public AStaticMeshActor
{
public:
	class UStaticMesh*                                 StaticMesh;                                               // 0x03A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     StaticMeshPath;                                           // 0x03B0(0x0010) (Net, ZeroConstructor)
	struct FString                                     PicUrl;                                                   // 0x03C0(0x0010) (Net, ZeroConstructor)
	int                                                ID;                                                       // 0x03D0(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03D4(0x0004) MISSED OFFSET
	class UFrontendHUD*                                FrontendHUD;                                              // 0x03D8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03E0(0x0004) MISSED OFFSET
	float                                              NetCullDistance;                                          // 0x03E4(0x0004) (ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.UAEAdvertisementActor");
		return pStaticClass;
	}


	void OnRequestImgSuccess(class UTexture2D* Texture, const struct FString& RequestedURL);
	void OnRep_PicURL();
	void OnRep_MeshPath();
	void OnRep_Id();
};


// Class Gameplay.UAECharAnimListCompBase
// 0x0010 (0x0218 - 0x0208)
class UUAECharAnimListCompBase : public UUAEAnimListComponentBase
{
public:
	TArray<struct FCharacterAsynLoadedTypeAnim>        CharacterAsynLoadedAnims;                                 // 0x0208(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.UAECharAnimListCompBase");
		return pStaticClass;
	}

};


// Class Gameplay.UAEChaParachuteAnimListComponent
// 0x0030 (0x0248 - 0x0218)
class UUAEChaParachuteAnimListComponent : public UUAECharAnimListCompBase
{
public:
	TArray<struct FCharParachuteAnimData>              CharParachuteAnimDataList;                                // 0x0218(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0228(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.UAEChaParachuteAnimListComponent");
		return pStaticClass;
	}


	void ReleaseParachuteAnimAssets();
	void OnParachuteAnimAsyncLoadingFinished(const struct FString& AnimLoaded);
	void OnAnimListAsyncLoadingFinished();
	bool HasAnimAsyncLoadingFinished();
	void HandleAsyncLoadingFinishedEvent();
	struct FString GetOwnerName();
	class UAnimationAsset* GetCharacterParachuteAnim(TEnumAsByte<enum ECharacterParachuteAnimType> AnimType);
};


// Class Gameplay.UAECharacterAnimListComponent
// 0x00A0 (0x02B8 - 0x0218)
class UUAECharacterAnimListComponent : public UUAECharAnimListCompBase
{
public:
	TArray<struct FCharacterMovementAnimData>          CharacterMovementAnimEditList;                            // 0x0218(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCharacterMovementAnimData>          CharacterFPPAnimEditList;                                 // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCharacterShieldAnimData>            CharacterShieldAnimEditList;                              // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCharacterJumpAnimData>              CharacterJumpEditList;                                    // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCharacterJumpAnimData>              CharacterJumpEditListFPP;                                 // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UCurveFloat*                                 FallingIKCurve;                                           // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FCharacterShovelAnimData>            CharacterShovelEditList;                                  // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCharacterShovelAnimData>            CharacterShovelEditListFPP;                               // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCharAnimModifyData>                 CharAnimModifyList;                                       // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCharacterVehAnimModifyData>         CharVehAnimModifyList;                                    // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsInitByBeginPlay;                                        // 0x02B0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnablePreLoadingFinish;                                   // 0x02B1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableNewAnimInit;                                        // 0x02B2(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               CurrentIsTPP;                                             // 0x02B3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CurrentHoldShield;                                        // 0x02B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02B5(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.UAECharacterAnimListComponent");
		return pStaticClass;
	}


	bool OnPreLoadingFinished(const struct FAsyncLoadCharAnimParams& LoadingParam);
	void OnAsyncLoadingFinishedNew(const struct FAsyncLoadCharAnimParams& LoadingParam);
	void OnAsyncLoadingFinished(const struct FAsyncLoadCharAnimParams& LoadingParam);
	TArray<struct FPlayerAnimData> GetCharacterShovelAnim();
	TArray<struct FPlayerAnimData> GetCharacterJumpAnim(TEnumAsByte<enum ECharacterJumpType> JumpType);
	class UAnimationAsset* GetAnimationAsset();
};


// Class Gameplay.UAEChaVehAnimListComponent
// 0x0028 (0x0240 - 0x0218)
class UUAEChaVehAnimListComponent : public UUAECharAnimListCompBase
{
public:
	bool                                               DefaultLoadAllAnim;                                       // 0x0218(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0219(0x0007) MISSED OFFSET
	TArray<struct FVehCharAnimData>                    VehCharAnimDataList;                                      // 0x0220(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0230(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.UAEChaVehAnimListComponent");
		return pStaticClass;
	}


	void OnIdleAnimListAsyncLoadingFinished();
	void OnAnimListAsyncLoadingFinished(const struct FAsyncLoadCharVehAnimParams& LoadingParam);
	void ChangeAnimData(TArray<struct FVehCharAnimData> InAnimData);
};


// Class Gameplay.UAEGameplayStatics
// 0x0000 (0x0028 - 0x0028)
class UUAEGameplayStatics : public UGameplayStatics
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.UAEGameplayStatics");
		return pStaticClass;
	}


	static class UUAEGameSubsystem* GetGameBridge(class UObject* WorldContextObject);
};


// Class Gameplay.UAEIndependentSpot
// 0x0008 (0x03A0 - 0x0398)
class AUAEIndependentSpot : public AActor
{
public:
	bool                                               bIsEditorOnly;                                            // 0x0398(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EIndependentSpotType                               SpotType;                                                 // 0x0399(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x039A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.UAEIndependentSpot");
		return pStaticClass;
	}

};


// Class Gameplay.UAELevelSequenceActor
// 0x00E8 (0x0520 - 0x0438)
class AUAELevelSequenceActor : public ALevelSequenceActor
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0438(0x0060) MISSED OFFSET
	bool                                               bPlayOnServer;                                            // 0x0498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0499(0x0003) MISSED OFFSET
	float                                              ClientSyncTime;                                           // 0x049C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSelfTransformOrigin;                                  // 0x04A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoDestroy;                                             // 0x04A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x04A2(0x0002) MISSED OFFSET
	float                                              ServerStartPlayTime;                                      // 0x04A4(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	struct FString                                     LevelSequenceAssetPath;                                   // 0x04A8(0x0010) (BlueprintVisible, Net, ZeroConstructor)
	unsigned char                                      UnknownData03[0x8];                                       // 0x04B8(0x0008) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x04C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x04D0(0x0050) (Net)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.UAELevelSequenceActor");
		return pStaticClass;
	}


	void UpdateSequence(const struct FString& LevelSequencePath);
	void UpdatePlayback(bool bRestoreState, bool bDisableMovementInput, bool bDisableLookAtInput, bool bHidePlayer);
	void UpdateInstanceData(const struct FVector& OffsetVector, const struct FRotator& OffsetRotation);
	void Stop();
	void SetLevelSequenceAssetPath(const struct FString& InLevelSequenceAssetPath);
	void ReceiveOnStop();
	void ReceiveOnPreStop();
	void ReceiveOnPlayReverse();
	void ReceiveOnPlay();
	void ReceiveOnPause();
	void ReceiveOnObjectSpawned(class UObject* InObject, const struct FGuid& InBindingID);
	void ReceiveOnFinished();
	void Play(float InPlaytime);
	void OnSequenceFinished();
	void OnRep_ServerStartPlayTime();
	void OnRep_LevelSequenceAssetPath();
	void OnObjectSpawnedEvent(class UObject* InObject, const struct FGuid& InBindingID, const struct FMovieSceneSequenceID& InSequenceID);
	static class ULevelSequencePlayer* CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* InLevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class AUAELevelSequenceActor** OutActor);
};


// Class Gameplay.AELobbyCharAnimListComp
// 0x0058 (0x0270 - 0x0218)
class UAELobbyCharAnimListComp : public UUAECharAnimListCompBase
{
public:
	TArray<struct FLobbyCharacterWeaponAnimData>       CharacterWeaponAnimEditList;                              // 0x0218(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLobbyCharacterWeaponAnimData>       AvatarSceneCharacterWeaponAnimEditList;                   // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLobbyCharacterWeaponAnimData>       LobbyWithCarCharacterWeaponAnimEditList;                  // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLobbyCharacterWeaponAnimData>       LobbySystemCharacterWeaponAnimEditList;                   // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                resultAvatarPoseIndex;                                    // 0x0258(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x025C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.AELobbyCharAnimListComp");
		return pStaticClass;
	}


	void OnAsyncLoadingFinished(const struct FLobbyAsyncLoadCharAnimParams& LoadingParam);
	void InitPendingList(TArray<struct FLobbyCharacterWeaponAnimData>* animEditList, TArray<struct FSoftObjectPath>* PendingList);
	class UAnimationAsset* GetCharacterAnim(TEnumAsByte<enum ELobbyCharacterPosIndex> PosIdx, TEnumAsByte<enum ELobbyCharacterAnimType> GenderType, int WeaponAnimType, TEnumAsByte<enum ECharacterShowSceneType> sceneType);
	void BuildAnimMap(TEnumAsByte<enum ECharacterShowSceneType> sceneType, TArray<struct FLobbyCharacterWeaponAnimData>* AnimList);
};


// Class Gameplay.UAESimpleSceneActor
// 0x0000 (0x0398 - 0x0398)
class AUAESimpleSceneActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.UAESimpleSceneActor");
		return pStaticClass;
	}

};


// Class Gameplay.UAESpawnActorComponent
// 0x0000 (0x0110 - 0x0110)
class UUAESpawnActorComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.UAESpawnActorComponent");
		return pStaticClass;
	}


	class AActor* UAESpawnActor(const struct FUAESpawnActorParam& Param);
	class UClass* PrepareSpawnData(int TemplateID);
	void InitializeActor(class AActor* InActor, int TemplateID);
};


// Class Gameplay.UAESpotGroupObject
// 0x0048 (0x0070 - 0x0028)
class UUAESpotGroupObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET
	class UObject*                                     Host;                                                     // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.UAESpotGroupObject");
		return pStaticClass;
	}

};


// Class Gameplay.UAEWindowComponent
// 0x0070 (0x08A0 - 0x0830)
class UUAEWindowComponent : public UStaticMeshComponent
{
public:
	class APawn*                                       LastInstigatorPawn;                                       // 0x0830(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UStaticMesh*                                 BrokenMesh;                                               // 0x0838(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             BrokenEffect;                                             // 0x0840(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0848(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.UAEWindowComponent");
		return pStaticClass;
	}


	void NotifyServerBroken();
	void NotifyRepDataUpdated(bool bInitial, bool bLocal);
	void LocalHandleWindowBrokenBP(bool bInitial, bool bLocal);
	void LocalHandleWindowBroken(bool bInitial, bool bLocal);
	void HandleBroken(class APlayerController* Instigator, bool bLocal);
	struct FUAEWindowRepData GetRepData();
};


// Class Gameplay.VehicleConfigActorComponent
// 0x0000 (0x0110 - 0x0110)
class UVehicleConfigActorComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.VehicleConfigActorComponent");
		return pStaticClass;
	}


	class UClass* LoadActorClass(const struct FString& Path);
};


// Class Gameplay.VehicleAndTreasureBoxGeneratorComponent
// 0x01B0 (0x03C8 - 0x0218)
class UVehicleAndTreasureBoxGeneratorComponent : public UBaseGeneratorComponent
{
public:
	bool                                               bUseLocalSpotFile;                                        // 0x0218(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanBackupVehicleSpotDatas;                               // 0x0219(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x021A(0x0006) MISSED OFFSET
	TArray<class UVehicleSpotSceneComponent*>          VehicleSpotSceneComponentList;                            // 0x0220(0x0010) (ExportObject, ZeroConstructor)
	TEnumAsByte<enum ERegionType>                      RegionType;                                               // 0x0230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0231(0x0007) MISSED OFFSET
	TArray<struct FBackupVehicleSpotData>              BackupVehicleSpotDatas;                                   // 0x0238(0x0010) (ZeroConstructor)
	TArray<struct FVehicleSpotProperty>                VehicleSpotPropertys;                                     // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FTreasureBoxSpotProperty>            TreasureBoxSpotPropertys;                                 // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bStatisticsValid;                                         // 0x0268(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsRandom;                                                // 0x0269(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x026A(0x0006) MISSED OFFSET
	TMap<TEnumAsByte<enum ESpotType>, struct FVehicleSpotComponentArray> AllVehicleSpots;                                          // 0x0270(0x0050) (ZeroConstructor)
	TMap<TEnumAsByte<enum ESpotType>, struct FVehicleSpotComponentArray> AllTreasureBoxSpots;                                      // 0x02C0(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FVehicleGenerateSpawnDataArray> VehicleGenerateSpawnDatas;                                // 0x0310(0x0050) (ZeroConstructor)
	struct FVehicleGenerateStatisticsData              VehicleStatisticsData;                                    // 0x0360(0x0060)
	class UUAEDataTable*                               VehicleDataTable;                                         // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.VehicleAndTreasureBoxGeneratorComponent");
		return pStaticClass;
	}


	void WriteVehicleSpotStatisticsDatas_V15();
	void WriteVehicleSpotStatisticsDatas();
	void WriteVehicleClassStatisticsDatas_V15();
	void WriteVehicleClassStatisticsDatas();
	void WriteAllVehicleStatisticsDatasToLog();
	void WriteAllVehicleStatisticsDatas_V15();
	void WriteAllVehicleStatisticsDatas();
	void RegisterVehicleGenerateSpawnData(const struct FVehicleGenerateSpawnData& Data);
	void RegisterGroupSpotComponent(class UGroupSpotSceneComponent* GroupSpotComponent);
	void RandomTreasureBoxSpotsByType(struct FTreasureBoxSpotProperty* Property, struct FVehicleSpotComponentArray* Spots);
	void RandomTreasureBoxSingleSpots(TArray<class UVehicleSpotSceneComponent*>* AllSpots, struct FTreasureBoxSpotProperty* Property);
	void RandomSpotsByType(struct FVehicleSpotProperty* Property, struct FVehicleSpotComponentArray* Spots);
	void RandomSingleSpots(TArray<class UVehicleSpotSceneComponent*>* AllSpots, struct FVehicleSpotProperty* Property);
	void RandomGroups();
	void LoadVehicleGenerateTable();
	struct FVehicleGenerateRandomInfo GetVehicleSpotRandomInfoWithCategory(const struct FString& Category, struct FVehicleSpotProperty* SpotProperty);
	struct FVehicleGenerateRandomInfo GetVehicleSpotRandomInfoBySpotType(TEnumAsByte<enum ESpotType> SpotType);
	struct FVehicleGenerateRandomInfo GetVehicleSpotRandomInfo(struct FVehicleSpotProperty* SpotProperty);
	struct FVehicleGenerateRandomInfo GetTreasureBoxSpotRandomInfo(struct FTreasureBoxSpotProperty* SpotProperty);
	struct FVehicleGenerateSpawnData GetRandomVehicleClass(const struct FString& Category);
	struct FString GetRandomCategory(TArray<struct FSpotWeight> SpotWeights);
	void GenerateSpotOnTick(float DeltaTime);
	bool DynamicSpawnVehicleBySpotId(int ID, const struct FString& Category);
	void DeleteGroups();
	bool CanDynamicSpawnVehicle(const struct FVector& SpawnLocation, const struct FVector& TestLocationOffset, const struct FVector& TestBoxSize);
	void AddVehicleSpotCount(TEnumAsByte<enum ESpotType> SpotType, const struct FString& Path, float LocationX, float LocationY, float LocationZ);
	void AddVehicleClassCount(const struct FString& Path, bool IsValid, int Count);
};


// Class Gameplay.VehicleGeneratorComponent
// 0x0118 (0x0330 - 0x0218)
class UVehicleGeneratorComponent : public UBaseGeneratorComponent
{
public:
	TArray<struct FVehicleSpotProperty>                VehicleSpotPropertys;                                     // 0x0218(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bStatisticsValid;                                         // 0x0228(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsRandom;                                                // 0x0229(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x022A(0x0006) MISSED OFFSET
	TMap<TEnumAsByte<enum ESpotType>, struct FVehicleSpotComponentArray> AllVehicleSpots;                                          // 0x0230(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FVehicleGenerateSpawnDataArray> VehicleGenerateSpawnDatas;                                // 0x0280(0x0050) (ZeroConstructor)
	struct FVehicleGenerateStatisticsData              VehicleStatisticsData;                                    // 0x02D0(0x0060)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.VehicleGeneratorComponent");
		return pStaticClass;
	}


	void WriteVehicleSpotStatisticsDatas();
	void WriteVehicleClassStatisticsDatas();
	void WriteAllVehicleStatisticsDatas();
	void RegisterVehicleGenerateSpawnData(const struct FVehicleGenerateSpawnData& Data);
	void RegisterGroupSpotComponent(class UGroupSpotSceneComponent* GroupSpotComponent);
	void RandomSpotsByType(struct FVehicleSpotProperty* Property, struct FVehicleSpotComponentArray* Spots);
	void RandomSingleSpots(TArray<class UVehicleSpotSceneComponent*>* AllSpots, struct FVehicleSpotProperty* Property);
	void RandomGroups();
	void LoadVehicleGenerateTable();
	struct FVehicleGenerateRandomInfo GetVehicleSpotRandomInfoBySpotType(TEnumAsByte<enum ESpotType> SpotType);
	struct FVehicleGenerateRandomInfo GetVehicleSpotRandomInfo(struct FVehicleSpotProperty* SpotProperty);
	struct FVehicleGenerateSpawnData GetRandomVehicleClass(const struct FString& Category);
	struct FString GetRandomCategory(TArray<struct FSpotWeight> SpotWeights);
	void GenerateSpotOnTick(float DeltaTime);
	void DeleteGroups();
	void AddVehicleSpotCount(TEnumAsByte<enum ESpotType> SpotType, const struct FString& Path, float LocationX, float LocationY, float LocationZ);
	void AddVehicleClassCount(const struct FString& Path, bool IsValid, int Count);
};


// Class Gameplay.VehicleGroupSpotSceneComponent
// 0x0000 (0x02E0 - 0x02E0)
class UVehicleGroupSpotSceneComponent : public UGroupSpotSceneComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.VehicleGroupSpotSceneComponent");
		return pStaticClass;
	}

};


// Class Gameplay.VehicleSpotObject
// 0x0070 (0x0098 - 0x0028)
class UVehicleSpotObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET
	struct FVehicleGenerateRandomInfo                  SpotRandomInfo;                                           // 0x0070(0x0028)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.VehicleSpotObject");
		return pStaticClass;
	}

};


// Class Gameplay.VehicleSpotSceneComponent
// 0x0040 (0x0330 - 0x02F0)
class UVehicleSpotSceneComponent : public USpotSceneComponent
{
public:
	TEnumAsByte<enum ESpotGroupType>                   SpotGroupType;                                            // 0x02F0(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ERegionType>                      RegionType;                                               // 0x02F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasGenerateSpot;                                         // 0x02F2(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bRandomRotation;                                          // 0x02F3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RandomRotationMin;                                        // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RandomRotationMax;                                        // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02FC(0x0004) MISSED OFFSET
	struct FVehicleGenerateRandomInfo                  SpotRandomInfo;                                           // 0x0300(0x0028)
	bool                                               IsEnableVehicleSpawnRestore;                              // 0x0328(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0329(0x0003) MISSED OFFSET
	float                                              VehicleSpawnRestoreOffset;                                // 0x032C(0x0004) (ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.VehicleSpotSceneComponent");
		return pStaticClass;
	}


	void SetSpotRandomInfo(struct FVehicleGenerateRandomInfo* RandomInfo);
	bool GenerateSpot();
};


// Class Gameplay.WeatherConfigComponent
// 0x0048 (0x0158 - 0x0110)
class UWeatherConfigComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0110(0x0008) MISSED OFFSET
	struct FWeatherInfo                                WeatherLevelInfo;                                         // 0x0118(0x0018) (BlueprintVisible, BlueprintReadOnly, Net)
	struct FString                                     LastLoadedWeatherLevelName;                               // 0x0130(0x0010) (ZeroConstructor)
	struct FString                                     DefaultWeatherLevelName;                                  // 0x0140(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bLoadWeatherLevel;                                        // 0x0150(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDefaulLevelLoaded;                                       // 0x0151(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0152(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Gameplay.WeatherConfigComponent");
		return pStaticClass;
	}


	void UnloadStreamLevel(const struct FString& LevelName);
	void SyncWeatherLevelInfo();
	void OnWeatherLevelChanged();
	void OnUnLoadStreamLevelCompleted();
	void OnRep_WeatherSyncCount();
	void OnLoadStreamLevelCompleted();
	void LoadWeatherLevel();
	void LoadStreamLevel(const struct FString& LevelName, int WeatherID);
	void LoadDefaultWeatherLevel();
	void Init();
};


}

