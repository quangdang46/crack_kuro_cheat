#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Basic.OnlyActorComponent
// 0x0008 (0x0118 - 0x0110)
class UOnlyActorComponent : public UActorComponent
{
public:
	unsigned char                                      bCanEverUpdate;                                           // 0x0110(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0111(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.OnlyActorComponent");
		return pStaticClass;
	}

};


// Class Basic.UAENetActor
// 0x0010 (0x0470 - 0x0460)
class AUAENetActor : public ALuaActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0460(0x0008) MISSED OFFSET
	int                                                iRegionActor;                                             // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x046C(0x0002) MISSED OFFSET
	bool                                               bStaticAddNetworkActor;                                   // 0x046E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x046F(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.UAENetActor");
		return pStaticClass;
	}

};


// Class Basic.UAEAnimListComponentBase
// 0x00F8 (0x0208 - 0x0110)
class UUAEAnimListComponentBase : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0110(0x0068) MISSED OFFSET
	TMap<int, struct FAnimListMapValueData>            AnimListMap;                                              // 0x0178(0x0050) (ZeroConstructor, Transient)
	TArray<class UAnimationAsset*>                     AnimationCatcheList;                                      // 0x01C8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x28];                                      // 0x01D8(0x0028) MISSED OFFSET
	bool                                               bDisableAnimListOnDS;                                     // 0x0200(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0201(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.UAEAnimListComponentBase");
		return pStaticClass;
	}

};


// Class Basic.ItemHandleBase
// 0x0080 (0x00A8 - 0x0028)
class UItemHandleBase : public UObject
{
public:
	int                                                Count;                                                    // 0x0028(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxCount;                                                 // 0x002C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUnique;                                                  // 0x0030(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStackable;                                               // 0x0031(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSingle;                                                  // 0x0032(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0033(0x0005) MISSED OFFSET
	TMap<struct FName, struct FItemAssociation>        AssociationMap;                                           // 0x0038(0x0050) (ZeroConstructor)
	struct FItemDefineID                               DefineID;                                                 // 0x0088(0x0018)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.ItemHandleBase");
		return pStaticClass;
	}


	void SetAssociation(const struct FName& Name, const struct FItemAssociation& Association);
	void RemoveAssociation(const struct FName& Name);
	void Init(const struct FItemDefineID& InDefineID);
	struct FItemDefineID GetDefineID();
	TMap<struct FName, struct FItemAssociation> GetAssociationMap();
	TArray<struct FItemAssociation> GetAssociationListByTargetType(int Type);
	struct FItemAssociation GetAssociationByTargetDefineID(const struct FItemDefineID& TargetDefineID);
	struct FItemAssociation GetAssociation(const struct FName& Name);
	void Constuct(const struct FItemDefineID& InDefineID);
	void AddAssociation(const struct FName& Name, const struct FItemAssociation& Association);
};


// Class Basic.BattleItemHandleBase
// 0x0098 (0x0140 - 0x00A8)
class UBattleItemHandleBase : public UItemHandleBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x00A8(0x0060) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0108(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bEquipping;                                               // 0x0118(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EItemStoreArea                                     ItemStoreArea;                                            // 0x0119(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x011A(0x0006) MISSED OFFSET
	TArray<struct FBattleItemAdditionalData>           AdditionalData;                                           // 0x0120(0x0010) (BlueprintVisible, ZeroConstructor)
	bool                                               bDropOnDead;                                              // 0x0130(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0131(0x0003) MISSED OFFSET
	float                                              UnitWeight;                                               // 0x0134(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEquippable;                                              // 0x0138(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bConsumable;                                              // 0x0139(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoEquipAndDrop;                                        // 0x013A(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x013B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.BattleItemHandleBase");
		return pStaticClass;
	}


	void UpdateAttributeModify(bool bEnable);
	bool UnEquip();
	bool HanldePickupAssociationData(TArray<struct FBattleItemAdditionalData> PickupAdditionalData);
	bool HanldeDropAssociationData();
	bool HanldeCleared();
	bool HandleUse(const struct FBattleItemUseTarget& Target, EBattleItemUseReason Reason);
	bool HandlePickup(const TScriptInterface<class UItemContainerInterface>& ItemContainer, const struct FBattleItemPickupInfo& pickupInfo, EBattleItemPickupReason Reason);
	bool HandleEnable(bool bEnable);
	bool HandleDrop(int InCount, EBattleItemDropReason Reason);
	bool HandleDisuse(EBattleItemDisuseReason Reason);
	bool HandleChangeItemStoreArea(EItemStoreArea InItemStoreArea);
	bool HandleBindToTargetItem();
	class UWorld* GetWorldInternal();
	class UWorld* GetCurrentWorld();
	struct FBattleItemData ExtractItemData();
	void ClearAdditionalData();
	bool CheckCanUse(const TScriptInterface<class UItemContainerInterface>& ItemContainer, const struct FBattleItemUseTarget& Target, EBattleItemUseReason Reason);
};


// Class Basic.UAENetPoolActor
// 0x0048 (0x04B8 - 0x0470)
class AUAENetPoolActor : public AUAENetActor
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0470(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.UAENetPoolActor");
		return pStaticClass;
	}


	void OnBPRespawned();
	void OnBPRecycled();
};


// Class Basic.UAEBaseSkillCondition
// 0x0010 (0x0158 - 0x0148)
class UUAEBaseSkillCondition : public UUTSkillCondition
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0148(0x0008) MISSED OFFSET
	class APawn*                                       OwnerPawnForBuff;                                         // 0x0150(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.UAEBaseSkillCondition");
		return pStaticClass;
	}

};


// Class Basic.DataProviderBase
// 0x0000 (0x0028 - 0x0028)
class UDataProviderBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.DataProviderBase");
		return pStaticClass;
	}

};


// Class Basic.STBuffAction
// 0x0018 (0x0040 - 0x0028)
class USTBuffAction : public UObject
{
public:
	float                                              ExecuteDelay;                                             // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class USTBuff>                      OwnerBuff;                                                // 0x002C(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ArrayIndex;                                               // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STBuffAction");
		return pStaticClass;
	}


	void Tick(float DetalTime);
	void SetEnabled(bool Enabled);
	void ResetExecute(bool IgnoreEnd);
	void OnTick(float DetalTime);
	void OnInitialize();
	void OnExecute();
	void OnEnd();
	void OnDestroy();
	void OnChangeNotify();
	void Initialize();
	class USTBuff* GetOwnerBuff();
	class AActor* GetOwner();
	bool GetIsExecute();
	class AActor* GetCauser();
	void End();
	void Destroy();
	class USTBuffAction* CopyAction(class UObject* Outer);
	void ChangeNotify();
};


// Class Basic.STBuffCondition
// 0x0020 (0x0048 - 0x0028)
class USTBuffCondition : public UObject
{
public:
	EBuffConditionAndOr                                AndOrPrev;                                                // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsKeepResult;                                             // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
	class USTBuffAction*                               OwnerAction;                                              // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USTBuff*                                     OwnerBuff;                                                // 0x0038(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STBuffCondition");
		return pStaticClass;
	}


	void OnInitialize();
	void OnDestroy();
	class USTBuffCondition* Copy(class UObject* Outer);
	bool CheckIsTrue();
};


// Class Basic.STBaseBuffManager
// 0x0160 (0x0188 - 0x0028)
class USTBaseBuffManager : public UObject
{
public:
	TArray<struct FSTBaseBuffTemplateItem>             BuffList;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UClass*>                              BuffListTemplates;                                        // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int, class USTBaseBuff*>                      BuffInstancedTemplateMap;                                 // 0x0048(0x0050) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0098(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STBaseBuffManager");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffStatusType
// 0x0000 (0x0028 - 0x0028)
class USTBaseBuffStatusType : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STBaseBuffStatusType");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffSystemComponent
// 0x0178 (0x0288 - 0x0110)
class USTBaseBuffSystemComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0110(0x0050) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBuffAttached;                                           // 0x0160(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBuffDetached;                                           // 0x0170(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x58];                                      // 0x0180(0x0058) MISSED OFFSET
	TArray<struct FUTBuffSynData>                      BuffSyncList;                                             // 0x01D8(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	struct FString                                     ServerBuffString;                                         // 0x01E8(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	float                                              BuffSyncRemainingPeriod;                                  // 0x01F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x01FC(0x0004) MISSED OFFSET
	TArray<struct FBuffInstancedItem>                  AllBuffs;                                                 // 0x0200(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	bool                                               isNeedCheckValidation;                                    // 0x0218(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6F];                                      // 0x0219(0x006F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STBaseBuffSystemComponent");
		return pStaticClass;
	}


	bool SetBuffExpiry(const struct FName& BuffName, float ExpirySeconds);
	void ResetForDeath();
	void RepBuffSyncList();
	bool RemoveBuffWithCauser(const struct FName& BuffName, bool RemoveLayerOnly, class AController* pCauser);
	bool RemoveBuffByID(int BuffID, bool RemoveLayerOnly, class AController* pCauser, class AActor* BuffApplierActor);
	bool RemoveBuff(const struct FName& BuffName, bool RemoveLayerOnly, class AActor* BuffApplierActor);
	void RefreshAllBuffs();
	bool IsBufferMutexed(const struct FName& NewBuffName);
	bool HasBuffID(int BuffID);
	bool HasBuff(const struct FName& BuffName);
	class APawn* GetPawnOwner();
	struct FName GetBuffName(int BuffID);
	int GetBuffID(const struct FName& BuffName);
	float GetBuffExpiry(const struct FName& BuffName);
	class USTBaseBuff* GetBuffByName(const struct FName& BuffName);
	class AActor* GetActorOwner();
	void ClientSimulateRemoveBuff(const struct FName& BuffName, bool RemoveLayerOnly, class AActor* BuffApplierActor);
	void ClientSimulateAddBuff(const struct FName& BuffName, class AController* BuffCauser, int LayerCount, class AActor* BuffApplierActor);
	void ClientMulticastSimulateRemoveBuff(const struct FName& BuffName, bool RemoveLayerOnly, class AActor* BuffApplierActor);
	void ClientMulticastSimulateAddBuff(const struct FName& BuffName, class AController* BuffCauser, int LayerCount, class AActor* BuffApplierActor);
	void ClientMulticastSetBuffExpiry(const struct FName& BuffName, float LeftSecondsAfterNow);
	void ClearBuff(bool bDebuff, bool bGainBuff);
	bool CheckBuffStatus(class UClass* Status, bool* Value);
	void BuffDetached__DelegateSignature(const struct FName& BuffName);
	void BuffAttached__DelegateSignature(const struct FName& BuffName);
	bool AddBuffLayer(const struct FName& BuffName, int layerNum);
	bool AddBuffExpiry(const struct FName& BuffName, float ExpirySeconds);
	int AddBuffByID(int BuffID, class AController* BuffCauser, int LayerCount, class AActor* BuffApplierActor);
	int AddBuff(const struct FName& BuffName, class AController* BuffCauser, int LayerCount, class AActor* BuffApplierActor, class AActor* CauserActor);
};


// Class Basic.STBaseBuffTriggerParam
// 0x0008 (0x0030 - 0x0028)
class USTBaseBuffTriggerParam : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STBaseBuffTriggerParam");
		return pStaticClass;
	}

};


// Class Basic.UAEGameInstance
// 0x01D0 (0x0470 - 0x02A0)
class UUAEGameInstance : public UGameInstance
{
public:
	struct FClientBaseInfo                             ClientBaseInfo;                                           // 0x02A0(0x0128)
	struct FScriptMulticastDelegate                    EnginePreTick;                                            // 0x03C8(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x30];                                      // 0x03D8(0x0030) MISSED OFFSET
	class UFrontendHUD*                                AssociatedFrontendHUD;                                    // 0x0408(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0410(0x0008) MISSED OFFSET
	class ULuaStateWrapper*                            LuaStateWrapper;                                          // 0x0418(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bStandAloneFromLobby;                                     // 0x0420(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x27];                                      // 0x0421(0x0027) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPreBattleResult;                                        // 0x0448(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FString>                             HighWeatherNames;                                         // 0x0458(0x0010) (ZeroConstructor, Config)
	int                                                HighWeatherMinRenderQuality;                              // 0x0468(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	int                                                HighWeatherMaxRenderQuality;                              // 0x046C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.UAEGameInstance");
		return pStaticClass;
	}


	void SetLuaStateWrapper(class ULuaStateWrapper* TLuaStateWrapper);
	void OpenAssetLoadLog();
	void OnPreBattleResult__DelegateSignature();
	void LuaLeakDetect();
	void LuaDoString(const struct FString& LuaString);
	float GetWeatherTime();
	struct FString GetWeatherLevelName();
	int GetWeatherID();
	class ULuaStateWrapper* GetLuaStateWrapper();
	struct FString GetLoadWeatherName(const struct FString& InWeatherName);
	bool GetIsHighWeatherLevel(const struct FString& InWeatherLevelName);
	struct FString GetGameId();
	int GetDeviceLevel();
	class UUAEDataTable* GetDataTable_Mod(const struct FString& tableName);
	class UUAEDataTable* GetDataTable(const struct FString& tableName);
	class UFrontendHUD* GetAssociatedFrontendHUD();
	void CloseAssetLoadLog();
};


// Class Basic.AttrModifyComponent
// 0x0598 (0x06A8 - 0x0110)
class UAttrModifyComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x49];                                      // 0x0110(0x0049) MISSED OFFSET
	bool                                               UseAttributeModifyRep;                                    // 0x0159(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x015A(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnAttrModified;                                           // 0x0160(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	uint32_t                                           AttrModifyStateList;                                      // 0x0170(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0174(0x0004) MISSED OFFSET
	TArray<struct FAttrModifyItem>                     DynamicModifierRepList;                                   // 0x0178(0x0010) (Net, ZeroConstructor)
	struct FRepAttributeModify                         DynamicModifierRep;                                       // 0x0188(0x0018) (Net)
	TArray<struct FAttrModifyItem>                     ConfigAttrModifyList;                                     // 0x01A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData03[0x1C8];                                     // 0x01B0(0x01C8) MISSED OFFSET
	TArray<struct FAttributeExpand>                    AttributeExpands;                                         // 0x0378(0x0010) (Edit, ZeroConstructor)
	struct FAttrDynamicModifier                        DynamicModifier;                                          // 0x0388(0x00A8)
	TMap<struct FString, struct FRelateAttributeGroup> RelateAttributeGroup;                                     // 0x0430(0x0050) (ZeroConstructor)
	EActorRegAttrTableType                             ActorAttrType;                                            // 0x0480(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x10F];                                     // 0x0481(0x010F) MISSED OFFSET
	TArray<struct FModAttrSimulateSyncItem>            ModSimulateSyncList;                                      // 0x0590(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData05[0x108];                                     // 0x05A0(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.AttrModifyComponent");
		return pStaticClass;
	}


	void SetValueToAttributeSafety(const struct FString& AttrName, float Value);
	void SetOrignalValueToAttribute(const struct FString& AttrName, float Value);
	void SetAttrModifyStateValue(int Index, bool Value);
	void SetAttributeMaxValue(const struct FString& AttrName, float MaxValue);
	void ResponeAttrValue(const struct FString& AttrName, float FinalValue);
	void RequestAttrValue(const struct FString& AttrName);
	void RemoveDynamicModifyItemForLua(uint32_t ModifyUID);
	bool RegisterModifyAbleAttr(TArray<struct FAttrRegisterItem> AttrRegists, bool bSetAttrByOrigin);
	void OnRep_ModSimulateSyncList();
	void OnRep_DynamicModifierList();
	void OnRep_DynamicModifier();
	void OnRep_AttrModifyStateList();
	void OnAttrModifiedEvent__DelegateSignature(TArray<struct FAttrAffected> AffectedAttrS);
	bool IsAttrModifyStateValidIndex(int Index);
	bool HasDynamicModifier(const struct FString& AttrModifyId);
	class UAttrModifyModDataSubsystem* GetSubsystem();
	struct FString GetMaxAttrName(const struct FString& AttrName);
	bool GetAttrModifyStateValue(int Index);
	int GetAttrModifyStateNum();
	struct FAttrModifyItem GetAttrModifyItemByItemName(const struct FString& ItemName);
	float GetAttributeValue(const struct FString& AttrName);
	float GetAttributeOrignalValue(const struct FString& AttrName);
	bool EnableAttrModifierByIndex(int ModifyConfigIndex);
	bool EnableAttrModifier(const struct FString& AttrModifyItemName);
	bool DisableAttrModifierByIndex(int ModifyConfigIndex);
	bool DisableAttrModifier(const struct FString& AttrModifyItemName);
	bool DisableAllAttrModifier();
	void AddValueToAttribute(const struct FString& AttrName, float Value);
	uint32_t AddDynamicModifyItemForLua(const struct FString& AttrName, unsigned char ModifyType, float Value, bool bEnable, class UObject* Causer);
	void AddDynamicModifier(struct FAttrModifyItem* AttrModifyItem);
};


// Class Basic.AttrModifyInterface
// 0x0000 (0x0028 - 0x0028)
class UAttrModifyInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.AttrModifyInterface");
		return pStaticClass;
	}


	void SetAttrValue(const struct FString& AttrName, float NewVal, int Reason);
	void RequestAttrValue(const struct FString& AttrName);
	void RegisterModifiedAttributes();
	float GetAttrValue(const struct FString& AttrName);
	TArray<class AActor*> GetAttrModifyRelevantActors();
	class UAttrModifyComponent* GetAttrModifyComponent();
	float GetAttributeValue(const struct FString& AttrName);
	void AddAttrValue(const struct FString& AttrName, float AddVal, int Reason);
};


// Class Basic.AttrModifyModDataSubsystem
// 0x0158 (0x0188 - 0x0030)
class UAttrModifyModDataSubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData00[0x158];                                     // 0x0030(0x0158) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.AttrModifyModDataSubsystem");
		return pStaticClass;
	}

};


// Class Basic.BlueprintFunctionOverride
// 0x0070 (0x0098 - 0x0028)
class UBlueprintFunctionOverride : public UBlueprintFunctionLibrary
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0088(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.BlueprintFunctionOverride");
		return pStaticClass;
	}

};


// Class Basic.BPClassManager
// 0x0160 (0x0190 - 0x0030)
class UBPClassManager : public UDataAsset
{
public:
	TArray<struct FBPClassItem>                        BPClassList;                                              // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0040(0x0050) UNKNOWN PROPERTY: MapProperty Basic.BPClassManager.BPClassLookUp
	TMap<class UClass*, struct FBPClassItemMap>        BPClassLookUpOverride;                                    // 0x0090(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x50];                                      // 0x00E0(0x0050) UNKNOWN PROPERTY: MapProperty Basic.BPClassManager.BPClassNameLookUp
	TMap<struct FString, struct FBPClassItemMap>       BPClassNameLookUpOverride;                                // 0x0130(0x0050) (ZeroConstructor, Transient)
	struct FString                                     BPClassManagerPath;                                       // 0x0180(0x0010) (ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.BPClassManager");
		return pStaticClass;
	}


	void ModifyClass(class UClass* InNativeClass, const struct FString& ModTag);
	class UClass* GetUClass(int KeyIndex);
	class UClass* GetBPClassOverrideByName(const struct FString& ClassTagName, const struct FString& ModTag);
	class UClass* GetBPClassOverride(class UClass* InNativeClass, const struct FString& ModTag);
	static class UBPClassManager* Get();
};


// Class Basic.DataSearcherInterface
// 0x0000 (0x0028 - 0x0028)
class UDataSearcherInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.DataSearcherInterface");
		return pStaticClass;
	}

};


// Class Basic.DelayReplicationInterface
// 0x0000 (0x0028 - 0x0028)
class UDelayReplicationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.DelayReplicationInterface");
		return pStaticClass;
	}


	void ReSendRPCAfterBeginPlay();
	void ReCallRepAfterBeginPlay();
};


// Class Basic.FeatureSetDefine
// 0x0000 (0x0028 - 0x0028)
class UFeatureSetDefine : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.FeatureSetDefine");
		return pStaticClass;
	}

};


// Class Basic.PathCompressionRef
// 0x0028 (0x0058 - 0x0030)
class UPathCompressionRef : public UDataAsset
{
public:
	struct FString                                     Dict;                                                     // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FSoftObjectPath                             DataTableRef;                                             // 0x0040(0x0018) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.PathCompressionRef");
		return pStaticClass;
	}

};


// Class Basic.GameModeEnvInterface
// 0x0000 (0x0028 - 0x0028)
class UGameModeEnvInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.GameModeEnvInterface");
		return pStaticClass;
	}

};


// Class Basic.ItemContainerInterface
// 0x0000 (0x0028 - 0x0028)
class UItemContainerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.ItemContainerInterface");
		return pStaticClass;
	}


	class UObject* GetOwningObject();
	TArray<class UItemHandleBase*> GetItemHandleListByDefineID(const struct FItemDefineID& DefineID);
	class UItemHandleBase* GetItemHandleByDefineID(const struct FItemDefineID& DefineID);
	TArray<struct FItemDefineID> GetItemDefineIDList();
};


// Class Basic.ItemFactoryInterface
// 0x0000 (0x0028 - 0x0028)
class UItemFactoryInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.ItemFactoryInterface");
		return pStaticClass;
	}

};


// Class Basic.LuaEventBridgeFunction
// 0x0000 (0x0028 - 0x0028)
class ULuaEventBridgeFunction : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.LuaEventBridgeFunction");
		return pStaticClass;
	}


	static void UnRegisterEventByTarget(class UObject* ObjContext);
	static void UnRegisterEvent(const struct FString& FEventType, const struct FString& EventId, class UObject* ObjContext);
	static void RegistEvent(const struct FString& EventType, const struct FString& EventId, class UObject* ObjContext, const struct FString& FunctionName);
};


// Class Basic.LuaEventBridge
// 0x0130 (0x0158 - 0x0028)
class ULuaEventBridge : public UObject
{
public:
	TWeakObjectPtr<class ULuaStateWrapper>             LuaStateWrapper;                                          // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	TMap<struct FString, struct FEventTypeContainer>   RegisterEventMap;                                         // 0x0038(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FLuaEventTypeContainer> LuaRegisterEventMap;                                      // 0x0088(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FLuaEventTypeToIDSet>        FilterKeyRegisterMap;                                     // 0x00D8(0x0050) (ZeroConstructor)
	TArray<class ULuaTemBPData*>                       CurrentParamArray;                                        // 0x0128(0x0010) (ZeroConstructor)
	TArray<class UProperty*>                           Params;                                                   // 0x0138(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0148(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.LuaEventBridge");
		return pStaticClass;
	}


	void SyncLuaRegisterEventNum(const struct FString& EventType, const struct FString& EventId, int Number);
	TArray<class ULuaTemBPData*> GetCurrentParam();
	void DeactivateEventsByFilterKey(uint32_t FilterKey);
	bool CheckNeedPostEventWithFilterKey(uint32_t FilterKey, const struct FString& EventType, const struct FString& EventId, bool bCheckNeedPostLua);
	void ActiveEventByFilterKey(uint32_t FilterKey, const struct FString& EventType, const struct FString& EventId, bool bActive);
};


// Class Basic.ModTable
// 0x00F8 (0x0120 - 0x0028)
class UModTable : public UObject
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0028(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.ModTable");
		return pStaticClass;
	}

};


// Class Basic.NetRelevancyGroup
// 0x0038 (0x0060 - 0x0028)
class UNetRelevancyGroup : public UObject
{
public:
	struct FNetRelevancyGroupID                        GroupID;                                                  // 0x0028(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<class UUAENetConnection*>                   Connections;                                              // 0x0030(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0040(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.NetRelevancyGroup");
		return pStaticClass;
	}

};


// Class Basic.OnlyActorCompManagerComponent
// 0x0060 (0x0170 - 0x0110)
class UOnlyActorCompManagerComponent : public UActorComponent
{
public:
	TMap<struct FString, class UOnlyActorComponent*>   CacheComponents;                                          // 0x0110(0x0050) (ExportObject, ZeroConstructor)
	TArray<class UOnlyActorComponent*>                 CacheUpdateComponents;                                    // 0x0160(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.OnlyActorCompManagerComponent");
		return pStaticClass;
	}

};


// Class Basic.OnlyActorComponentManagerInterface
// 0x0000 (0x0028 - 0x0028)
class UOnlyActorComponentManagerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.OnlyActorComponentManagerInterface");
		return pStaticClass;
	}

};


// Class Basic.OwnerRelevancyDependencyInterface
// 0x0000 (0x0028 - 0x0028)
class UOwnerRelevancyDependencyInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.OwnerRelevancyDependencyInterface");
		return pStaticClass;
	}

};


// Class Basic.PackTool
// 0x0010 (0x0038 - 0x0028)
class UPackTool : public UObject
{
public:
	TArray<class UObject*>                             CookCache;                                                // 0x0028(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.PackTool");
		return pStaticClass;
	}


	void CookResBySelection();
};


// Class Basic.RenderFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class URenderFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.RenderFunctionLibrary");
		return pStaticClass;
	}


	static void MarkComponentRenderStateDirty(class UActorComponent* Comp);
};


// Class Basic.STBaseBuff
// 0x0170 (0x0198 - 0x0028)
class USTBaseBuff : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	struct FString                                     BuffName;                                                 // 0x0038(0x0010) (ZeroConstructor, Transient)
	struct FString                                     DisplayName;                                              // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Message;                                                  // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UTexture2D*                                  Icon;                                                     // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  SoundData;                                                // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsDeBuff;                                                 // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreMagicalImmunity;                                    // 0x0079(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowOtherPawnRefreshBuff;                               // 0x007A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Layerable;                                                // 0x007B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NeedDetachAndAttachForReplaceExit;                        // 0x007C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NeedDetachAndAttachForAddLayer;                           // 0x007D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ReplaceExsist;                                            // 0x007E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               StaysOnDeath;                                             // 0x007F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LayerMax;                                                 // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InitialLayerCount;                                        // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LayerCount;                                               // 0x0088(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              ValidityTime;                                             // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Internal;                                                 // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	TArray<class UUTSkillCondition*>                   BuffConditions;                                           // 0x0098(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	float                                              Expiry;                                                   // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	TArray<struct FStatusChange>                       StatusChanges;                                            // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               NeedSimulateToClientMulticast;                            // 0x00C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NeedSimulateToClient;                                     // 0x00C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum ESimulateAddBuffRole>             SimulateAddBuffRole;                                      // 0x00C2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x00C3(0x0005) MISSED OFFSET
	TArray<struct FName>                               MutexBuffers;                                             // 0x00C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBuffActionItem>                     BuffActions;                                              // 0x00D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBuffEventActionItem>                EventBuffActions;                                         // 0x00E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              fADScale;                                                 // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              fAPScale;                                                 // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsAlwaysExists;                                           // 0x0100(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0101(0x0007) MISSED OFFSET
	class AController*                                 CauserPawnController;                                     // 0x0108(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      CauserPawnActor;                                          // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x10];                                      // 0x0118(0x0010) MISSED OFFSET
	TArray<struct FUAEBlackboardParameter>             UAEBlackboardParamList;                                   // 0x0128(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class AActor*                                      BuffApplier;                                              // 0x0138(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<class UObject*, int>                          InstancedNodeNameToMemoryMap;                             // 0x0140(0x0050) (ZeroConstructor)
	int                                                InstancedNodesTotalSize;                                  // 0x0190(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0194(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STBaseBuff");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffCarrierInterface
// 0x0000 (0x0028 - 0x0028)
class USTBaseBuffCarrierInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STBaseBuffCarrierInterface");
		return pStaticClass;
	}


	void SyncInvincibleData(float TotalTime);
	bool SetBuffExpiry(const struct FName& BuffName, float ExpirySecondsFromNow);
	bool RemoveBuffBySkill(int SkillID, int LayerCount, class AActor* Causer);
	bool RemoveBuffByID(int BuffID, class AActor* Causer, int LayerCount, int CauseSkillID);
	bool RemoveBuff(const struct FName& BuffName, bool RemoveLayerOnly, class AActor* BuffApplierActor);
	bool IsSameTeamWithFirstPC();
	bool HasBuffID(int BuffID);
	bool HasBuff(const struct FName& BuffName);
	float GetBuffExpiry(const struct FName& BuffName);
	float GetBuffDuration(int BuffID, int CauseSkillID);
	class USTBaseBuff* GetBuffByName(const struct FName& BuffName);
	bool CheckBuffTarget(class USTBuff* Buff);
	bool AddBuffLayer(const struct FName& BuffName, int layerNum);
	bool AddBuffExpiry(const struct FName& BuffName, float ExpirySeconds);
	bool AddBuffBySkill(int SkillID, int LayerCount, class AActor* Causer);
	bool AddBuffByID(int BuffID, class AActor* Causer, int LayerCount, int CauseSkillID);
	int AddBuff(const struct FName& BuffName, class AController* SkillActor, int LayerCount, class AActor* BuffApplierActor, class AActor* CauserActor);
};


// Class Basic.STBaseBuffConditionBase
// 0x0008 (0x0118 - 0x0110)
class USTBaseBuffConditionBase : public UActorComponent
{
public:
	TWeakObjectPtr<class USTBaseBuff>                  OwnerBuff;                                                // 0x0110(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STBaseBuffConditionBase");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffEventType
// 0x0008 (0x0030 - 0x0028)
class USTBaseBuffEventType : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STBaseBuffEventType");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffEventType_LayerMax
// 0x0000 (0x0030 - 0x0030)
class USTBaseBuffEventType_LayerMax : public USTBaseBuffEventType
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STBaseBuffEventType_LayerMax");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffEventType_LayerSpecific
// 0x0000 (0x0030 - 0x0030)
class USTBaseBuffEventType_LayerSpecific : public USTBaseBuffEventType
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STBaseBuffEventType_LayerSpecific");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffEventType_Removed
// 0x0000 (0x0030 - 0x0030)
class USTBaseBuffEventType_Removed : public USTBaseBuffEventType
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STBaseBuffEventType_Removed");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffEventType_TakeBuffDamage
// 0x0000 (0x0030 - 0x0030)
class USTBaseBuffEventType_TakeBuffDamage : public USTBaseBuffEventType
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STBaseBuffEventType_TakeBuffDamage");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffEventType_OnAttach
// 0x0000 (0x0030 - 0x0030)
class USTBaseBuffEventType_OnAttach : public USTBaseBuffEventType
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STBaseBuffEventType_OnAttach");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffEventType_ConditionNotMatch
// 0x0000 (0x0030 - 0x0030)
class USTBaseBuffEventType_ConditionNotMatch : public USTBaseBuffEventType
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STBaseBuffEventType_ConditionNotMatch");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffEventType_Resurrection
// 0x0000 (0x0030 - 0x0030)
class USTBaseBuffEventType_Resurrection : public USTBaseBuffEventType
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STBaseBuffEventType_Resurrection");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffEventType_WeaponAttack
// 0x0018 (0x0048 - 0x0030)
class USTBaseBuffEventType_WeaponAttack : public USTBaseBuffEventType
{
public:
	class AActor*                                      Attacter;                                                 // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      Victim;                                                   // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                HitCount;                                                 // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STBaseBuffEventType_WeaponAttack");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffList
// 0x0020 (0x0048 - 0x0028)
class USTBaseBuffList : public UObject
{
public:
	struct FString                                     BuffListName;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FSTBaseBuffTemplateItem>             BuffList;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STBaseBuffList");
		return pStaticClass;
	}

};


// Class Basic.BuffManagerPathClass
// 0x0020 (0x03B8 - 0x0398)
class ABuffManagerPathClass : public AActor
{
public:
	struct FString                                     BuffManagerBlueprintPath;                                 // 0x0398(0x0010) (ZeroConstructor, Config)
	TArray<struct FBuffManagerModPath>                 BuffListPathMap;                                          // 0x03A8(0x0010) (ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.BuffManagerPathClass");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffStatusType_ImmuneDebuff
// 0x0000 (0x0028 - 0x0028)
class USTBaseBuffStatusType_ImmuneDebuff : public USTBaseBuffStatusType
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STBaseBuffStatusType_ImmuneDebuff");
		return pStaticClass;
	}

};


// Class Basic.STBuff
// 0x0170 (0x0198 - 0x0028)
class USTBuff : public UObject
{
public:
	struct FString                                     BuffName;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Desc;                                                     // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                LayerMax;                                                 // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InitialLayerCount;                                        // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClientSyncInterval;                                       // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EBuffClientSyncType                                ClientSyncType;                                           // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EBuffTargetType                                    TargetType;                                               // 0x0059(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EBuffRefreshType                                   RefreshType;                                              // 0x005A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EBuffReActionType                                  ReActionType;                                             // 0x005B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMultiCauserHandleType                             MultiCauserHandleType;                                    // 0x005C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMultiSkillHandleType                              MultiSkillHandleType;                                     // 0x005D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsExecuteOnece;                                           // 0x005E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RemoveAllLayer;                                           // 0x005F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class USTBuffAction*>                       Actions;                                                  // 0x0060(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	bool                                               bNeedShowBuffInBuffList;                                  // 0x0070(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	int                                                LocalizeDescID;                                           // 0x0074(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     IconPath;                                                 // 0x0078(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                TipsOnAddBuff;                                            // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	TArray<class UDataProviderBase*>                   DataProviders;                                            // 0x0090(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	int                                                InstID;                                                   // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BuffID;                                                   // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LayerCount;                                               // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               PendingRemove;                                            // 0x00AC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00AD(0x0003) MISSED OFFSET
	float                                              EndTime;                                                  // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DSEndTime;                                                // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       Causer;                                                   // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       Owner;                                                    // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                CauseSkillID;                                             // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class USTBuffSystemComponent>       OwnerSystem;                                              // 0x00CC(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ExistForever;                                             // 0x00D4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00D5(0x0003) MISSED OFFSET
	float                                              PowerValue;                                               // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastSyncClientTime;                                       // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsNeedSyncClient;                                         // 0x00E0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsClientOwnLife;                                          // 0x00E1(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x00E2(0x0006) MISSED OFFSET
	class UUAEBlackboard*                              Blackborad;                                               // 0x00E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0xA0];                                      // 0x00F0(0x00A0) MISSED OFFSET
	int                                                LastLayerCount;                                           // 0x0190(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0194(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STBuff");
		return pStaticClass;
	}


	void Tick(float DetalTime, float TimeSeconds);
	void ResetActionExecute();
	void RefreshEndTime();
	void Initialize();
	void HandleLayer(int AddLayerCount, bool IsNewBuff);
	void End();
	void EnabledRemove();
	void Destroy();
	bool CopyActions();
	void CheckOnceBuffForClient();
	void ChangeNotify();
	void ChangeDuration(float NewDuration);
};


// Class Basic.STBuffAction_Lua
// 0x00C0 (0x0100 - 0x0040)
class USTBuffAction_Lua : public USTBuffAction
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0040(0x0060) MISSED OFFSET
	TMap<struct FName, struct FString>                 ActionParams;                                             // 0x00A0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LuaFilePath;                                              // 0x00F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STBuffAction_Lua");
		return pStaticClass;
	}


	void OnTick(float DetalTime);
	void OnInitialize();
	void OnExecute();
	void OnEnd();
	void OnDestroy();
	void OnChangeNotify();
	struct FVector GetVectorValue(const struct FName& Key);
	struct FString GetStringValue(const struct FName& Key);
	int GetIntValue(const struct FName& Key);
	float GetFloatValue(const struct FName& Key);
	bool GetBoolValue(const struct FName& Key);
};


// Class Basic.STBuffConditionComplex
// 0x0010 (0x0058 - 0x0048)
class USTBuffConditionComplex : public USTBuffCondition
{
public:
	TArray<class USTBuffCondition*>                    Conditions;                                               // 0x0048(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STBuffConditionComplex");
		return pStaticClass;
	}


	void OnInitialize();
	void OnDestroy();
	class USTBuffCondition* Copy(class UObject* Outer);
	bool CheckIsTrue();
};


// Class Basic.STBuffConditionAction
// 0x0038 (0x0078 - 0x0040)
class USTBuffConditionAction : public USTBuffAction
{
public:
	class USTBuffCondition*                            Condition;                                                // 0x0040(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ConditionTickInterval;                                    // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Probality;                                                // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EBuffConditionExecuteTimeType                      ExecuteTimeType;                                          // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsDoOnFalse;                                              // 0x0051(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsNeedTick;                                               // 0x0052(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsSetFalseWhenExecute;                                    // 0x0053(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	TArray<struct FBuffConditionActionItem>            LinkActions;                                              // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0068(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STBuffConditionAction");
		return pStaticClass;
	}


	void OnTick(float DetalTime);
	void OnInitialize();
	void OnDestroy();
	void OnConditionTrue();
	void OnConditionFalse();
	void OnChangeNotify();
	void CheckCondition();
};


// Class Basic.STBuffSystemComponent
// 0x02E8 (0x03F8 - 0x0110)
class USTBuffSystemComponent : public UActorComponent
{
public:
	float                                              RPCSyncInterval;                                          // 0x0110(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnClientAddBuffEvent;                                     // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnClientRemoveBuffEvent;                                  // 0x0128(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnClientUpdateBuffEvent;                                  // 0x0138(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<class USTBuff*>                             Buffs;                                                    // 0x0148(0x0010) (ExportObject, ZeroConstructor)
	int                                                SyncBriefNum;                                             // 0x0158(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x015C(0x0004) MISSED OFFSET
	struct FClientSyncBrief                            SyncBriefs[0x6];                                          // 0x0160(0x0028) (Net)
	struct FClientSyncBrief                            SyncRefBriefs[0x6];                                       // 0x0250(0x0028)
	TMap<int, class USTBuff*>                          MaxPowerBuffs;                                            // 0x0340(0x0050) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0390(0x0050) UNKNOWN PROPERTY: SetProperty Basic.STBuffSystemComponent.BriefRemoveInstIds
	unsigned char                                      UnknownData03[0x18];                                      // 0x03E0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STBuffSystemComponent");
		return pStaticClass;
	}


	bool UpdateServerSyncBuff(class USTBuff* Buff);
	void UpdateClientBuff(int InstID, int BuffID, int LayerCount, int CauseSkillID, class AActor* CauseActor, float DSEndTime);
	void UpdateBriefs();
	void RPC_Server_ReqBriefs();
	void RPC_Client_SyncBrief(const struct FClientSyncBrief& Brief);
	void RPC_Client_RspBriefs(TArray<struct FClientSyncBrief> Briefs);
	void RemoveClientBuff(int InstID);
	class USTBuff* RemoveBuffInner(int BuffID, int LayerCount, class AActor* Causer, int CauseSkillID);
	void RemoveBuff(int BuffID, int LayerCount, class AActor* Causer, int CauseSkillID);
	void RemoveAndFindMaxPowerBuff(class USTBuff* RemoveBuff);
	void RemoveAllBuffs();
	void OnRep_SyncBriefs();
	void OnClientUpdateBuffEvent__DelegateSignature(int BuffID, int SkillID, int InstID);
	void OnClientRemoveBuffEvent__DelegateSignature(int BuffID, int SkillID, int InstID);
	void OnClientBuffCreated(class USTBuff* Buff, int BuffID, int CauseSkillID, int InstID, float DSEndTime);
	void OnClientAsyncLoaded(const struct FString& Path, int BuffID, class AActor* Causer, int LayerCount, int CauseSkillID, int InstID, float DSEndTime);
	void OnClientAddBuffEvent__DelegateSignature(int BuffID, int SkillID, int InstID);
	bool HasSkillID(int SkillID);
	bool HasBuff(int BuffID);
	void HandleCauserSkill(class USTBuff* Buff, int SkillID);
	bool HandleBuffTypeMutex(int BuffID);
	void HandleBuffTypeExclude(int BuffID);
	void HandleBuffLayer(class USTBuff* Buff, int AddLayerCount, bool IsNewBuff);
	class UBuffConfigSubsystem* GetSubsystem();
	TArray<class USTBuff*> GetBuffs();
	float GetBuffDuration(int BuffID, int CauseSkillID);
	class USTBuff* GetBuffByBuffID(int BuffID);
	class USTBuff* CreateBuffWithClass(class UClass* Class, int BuffID, class AActor* Causer, int LayerCount, int CauseSkillID);
	void CreateBuffAsync(int BuffID, class AActor* Causer, int LayerCount, int CauseSkillID, int InstID, float DSEndTime);
	class USTBuff* CreateBuff(int BuffID, class AActor* Causer, int LayerCount, int CauseSkillID);
	void CompareBuffPower(class USTBuff* Buff);
	bool ClientGetBuffInfo(int BuffID, struct FClientSyncBrief* OutBuff);
	void ClearBuffs(bool IsClearAll);
	bool CheckBuffTargetClient(class USTBuff* Buff);
	bool AddBuff(int BuffID, class AActor* Causer, int LayerCount, int CauseSkillID);
};


// Class Basic.BuffConfigSubsystem
// 0x0130 (0x0160 - 0x0030)
class UBuffConfigSubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0030(0x0030) MISSED OFFSET
	TMap<int, struct FBuffTableRow>                    Table;                                                    // 0x0060(0x0050) (ZeroConstructor)
	TMap<struct FString, class UClass*>                BuffClassMap;                                             // 0x00B0(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x60];                                      // 0x0100(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.BuffConfigSubsystem");
		return pStaticClass;
	}

};


// Class Basic.UStringMap
// 0x0050 (0x0078 - 0x0028)
class UUStringMap : public UObject
{
public:
	struct FStringMap                                  Map;                                                      // 0x0028(0x0050)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.UStringMap");
		return pStaticClass;
	}

};


// Class Basic.STExtraNetPriorityConfig
// 0x00B8 (0x00E8 - 0x0030)
class USTExtraNetPriorityConfig : public UWorldSubsystem
{
public:
	bool                                               ExtraNetPriorityEnabled;                                  // 0x0030(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	TMap<ESTExtraNetPriorityFlags, float>              ExtraNetPriorityFactor;                                   // 0x0038(0x0050) (ZeroConstructor, Config)
	bool                                               EnemyExtraNetPriorityEnabled;                             // 0x0088(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	float                                              EnemyExtraNetPriorityFactor;                              // 0x008C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	TMap<ESTExtraNetPriorityIssueID, ESTExtraNetPriorityFlags> NetPriorityIssue;                                         // 0x0090(0x0050) (ZeroConstructor, Config)
	float                                              MoveExtraNetPriorityVelocitySquared;                      // 0x00E0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STExtraNetPriorityConfig");
		return pStaticClass;
	}

};


// Class Basic.STExtraNetPriorityInterface
// 0x0000 (0x0028 - 0x0028)
class USTExtraNetPriorityInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.STExtraNetPriorityInterface");
		return pStaticClass;
	}

};


// Class Basic.UAEBPGameSubsystem
// 0x0000 (0x0030 - 0x0030)
class UUAEBPGameSubsystem : public UWorldSubsystem
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.UAEBPGameSubsystem");
		return pStaticClass;
	}

};


// Class Basic.UAEGameEngine
// 0x0050 (0x0E08 - 0x0DB8)
class UUAEGameEngine : public UGameEngine
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0DB8(0x0010) MISSED OFFSET
	class UBackendHUD*                                 AssociatedBackendHUD;                                     // 0x0DC8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0DD0(0x000C) MISSED OFFSET
	bool                                               bEnableAutoStat;                                          // 0x0DDC(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableAutoTickDeltaThreshold;                            // 0x0DDD(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0DDE(0x0002) MISSED OFFSET
	float                                              AutoTickDeltaThresholdFactor;                             // 0x0DE0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              StatCollection_AvgTickDeltaThreshold;                     // 0x0DE4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              AutoStat_AvgTickDeltaThreshold;                           // 0x0DE8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              AutoStat_StartTime;                                       // 0x0DEC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0DF0(0x0004) MISSED OFFSET
	float                                              AutoStat_Duration_Engine;                                 // 0x0DF4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              AutoStat_Duration_PhysX;                                  // 0x0DF8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                                       // 0x0DFC(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.UAEGameEngine");
		return pStaticClass;
	}

};


// Class Basic.BPTable
// 0x00B0 (0x00D8 - 0x0028)
class UBPTable : public UObject
{
public:
	struct FString                                     BPTableName;                                              // 0x0028(0x0010) (BlueprintVisible, ZeroConstructor)
	TMap<int, struct FBPTableItem>                     BPTableItemMap;                                           // 0x0038(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<int, struct FBPTableItem>                     BPTableItemMap_Mod;                                       // 0x0088(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.BPTable");
		return pStaticClass;
	}


	struct FString GetWrapperPath(int ID);
	class UClass* GetWrapperClass(int ID);
	struct FString GetPath(int ID, bool IsLobby, bool bForceLobby);
	class UObject* GetObject(int ID, class UObject* Outer, bool IsLobby);
	class UObject* GetModObject(int ID, class UObject* Outer, bool IsLobby);
	class UClass* GetModClass(int ID, bool IsLobby);
	class UClass* GetCustom1Class(int ID);
	class UClass* GetClass(int ID, bool IsLobby);
	void ConvertPath(int ID);
};


// Class Basic.UAELoadedClassManager
// 0x0318 (0x0340 - 0x0028)
class UUAELoadedClassManager : public UObject
{
public:
	TMap<struct FString, class UBPTable*>              BPTableMap;                                               // 0x0028(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<struct FString, class UBPTable*>              BPTableMap_Mod;                                           // 0x0078(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<int, struct FString>                          BPTableNameMap;                                           // 0x00C8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LoadedClassManagerClassName;                              // 0x0118(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData00[0x1C0];                                     // 0x0128(0x01C0) MISSED OFFSET
	TMap<class UObject*, struct FSoftClassPath>        AsyncLoadClassDict;                                       // 0x02E8(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0338(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.UAELoadedClassManager");
		return pStaticClass;
	}


	void InitTableData();
	void InitialModTableItemMap();
	void InitBPTableMap_Mod();
	void InitBPTableMap();
	void HandleTableModNameChanged(const struct FString& InModName);
	struct FString GetWrapperPath(const struct FString& BPTableName, int ID);
	class UClass* GetWrapperClass(const struct FString& BPTableName, int ID);
	struct FString GetPath(const struct FString& BPTableName, int ID, bool IsLobby, bool bForceLobby);
	class UObject* GetObject(const struct FString& BPTableName, int ID, class UObject* Outer, bool IsLobby);
	class UClass* GetCustom1Class(const struct FString& BPTableName, int ID);
	class UClass* GetClass(const struct FString& BPTableName, int ID, bool IsLobby);
	struct FString GetBPTableName(int Type);
	void GetAssetByAssetReferenceAsync(const struct FSoftObjectPath& AssetReference, const struct FScriptDelegate& AssetLoadSuccessDelegate);
	static class UUAELoadedClassManager* Get();
	class UBPTable* CreateAndAddBPTable_Mod(const struct FString& BPTableName);
	class UBPTable* CreateAndAddBPTable(const struct FString& BPTableName);
	void ClearModTableItemMap();
	void ClearBPTable_Mod();
	void ClearAssetByAssetReferenceAsync(const struct FScriptDelegate& AssetLoadSuccessDelegate);
	void ClearAllData();
};


// Class Basic.UAEMeshComponent
// 0x0010 (0x0D70 - 0x0D60)
class UUAEMeshComponent : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0D60(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.UAEMeshComponent");
		return pStaticClass;
	}

};


// Class Basic.UAENetConnection
// 0x02A8 (0x339C0 - 0x33718)
class UUAENetConnection : public UIpConnection
{
public:
	unsigned char                                      UnknownData00[0xBC];                                      // 0x33718(0x00BC) MISSED OFFSET
	int                                                InitialHandshakeTimeoutNumThreshold;                      // 0x337D4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x337D8(0x0004) MISSED OFFSET
	int                                                ActorChannelProcessBunchErrorNumThreshold_Server_Global;  // 0x337DC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                ActorChannelProcessBunchErrorNumThreshold_Client_Global;  // 0x337E0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                ActorChannelProcessBunchErrorNumThreshold_Client_PerActor;// 0x337E4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x50];                                      // 0x337E8(0x0050) MISSED OFFSET
	bool                                               bEnableHTTPDNS;                                           // 0x33838(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x33839(0x0007) MISSED OFFSET
	struct FString                                     HTTPDNSServerAddr;                                        // 0x33840(0x0010) (ZeroConstructor, Config)
	float                                              HTTPDNSResponseTimeout;                                   // 0x33850(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                                       // 0x33854(0x000C) MISSED OFFSET
	class UNetRelevancyGroup*                          RelevancyGroup;                                           // 0x33860(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0xE0];                                      // 0x33868(0x00E0) MISSED OFFSET
	TArray<struct FPendingRegionNetworkObject>         PendingRegionNetworkObjects;                              // 0x33948(0x0010) (ZeroConstructor)
	float                                              MinRegionActorTickDelta;                                  // 0x33958(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxRegionActorTickDelta;                                  // 0x3395C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData06[0xC];                                       // 0x33960(0x000C) MISSED OFFSET
	bool                                               EnableWeakNetUpdate;                                      // 0x3396C(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x3396D(0x0003) MISSED OFFSET
	float                                              MinWeakNetUpdateDelay;                                    // 0x33970(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxWeakNetUpdateDelay;                                    // 0x33974(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              SquareSegmentSize;                                        // 0x33978(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxSegmentDistance;                                       // 0x3397C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxObjectNumInSegments;                                   // 0x33980(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData08[0x15];                                      // 0x33984(0x0015) MISSED OFFSET
	bool                                               bRecreateSocketOnLost;                                    // 0x33999(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData09[0x12];                                      // 0x3399A(0x0012) MISSED OFFSET
	float                                              UpdateClientPingTimeThreshold;                            // 0x339AC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData10[0x10];                                      // 0x339B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.UAENetConnection");
		return pStaticClass;
	}

};


// Class Basic.UAENetDriver
// 0x0138 (0x07C8 - 0x0690)
class UUAENetDriver : public UIpNetDriver
{
public:
	float                                              NetCullChangeTime;                                        // 0x0690(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableCollectNetStats;                                   // 0x0694(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableResetNetStats;                                     // 0x0695(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x132];                                     // 0x0696(0x0132) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.UAENetDriver");
		return pStaticClass;
	}

};


// Class Basic.UAETableManager
// 0x0440 (0x0468 - 0x0028)
class UUAETableManager : public UObject
{
public:
	struct FString                                     TableRelativeDir;                                         // 0x0028(0x0010) (ZeroConstructor, Config)
	TArray<struct FName>                               TablesNeedReleasedInBattle;                               // 0x0038(0x0010) (ZeroConstructor, Config)
	struct FString                                     ManualTableDirectory;                                     // 0x0048(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0058(0x00A0) MISSED OFFSET
	bool                                               AllowItemTable;                                           // 0x00F8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET
	TArray<class UUAEDataTable*>                       TableObjList;                                             // 0x0100(0x0010) (ZeroConstructor)
	class UWorld*                                      CurWorld;                                                 // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<struct FName, TWeakObjectPtr<class UUAEDataTable>> TableObjMap;                                              // 0x0118(0x0050) (ZeroConstructor)
	TMap<struct FName, TWeakObjectPtr<class UUAEDataTable>> TableObjMap_Mod;                                          // 0x0168(0x0050) (ZeroConstructor)
	struct FScriptMulticastDelegate                    OnTableCreateInFighting;                                  // 0x01B8(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData02[0xA0];                                      // 0x01C8(0x00A0) MISSED OFFSET
	struct FString                                     PathCompressionConfigsPath;                               // 0x0268(0x0010) (ZeroConstructor, Config)
	bool                                               bIsPathCompression;                                       // 0x0278(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bIsPathCompressionCache;                                  // 0x0279(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x027A(0x0002) MISSED OFFSET
	int                                                PathCompressionCacheMaxSize;                              // 0x027C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0280(0x0008) MISSED OFFSET
	struct FString                                     BaseTableRelativeDir;                                     // 0x0288(0x0010) (ZeroConstructor, Config)
	struct FString                                     ModTableRelativeDir;                                      // 0x0298(0x0010) (ZeroConstructor, Config)
	TMap<struct FName, class UModTable*>               ModTableMap;                                              // 0x02A8(0x0050) (ZeroConstructor)
	TMap<struct FName, TWeakObjectPtr<class UUAEDataTable>> ModTableObjMap;                                           // 0x02F8(0x0050) (ZeroConstructor)
	TArray<class UUAEDataTable*>                       InGameTableObjList;                                       // 0x0348(0x0010) (ZeroConstructor)
	TMap<struct FName, bool>                           CheckNeedModMap;                                          // 0x0358(0x0050) (ZeroConstructor)
	struct FString                                     CurrentModName;                                           // 0x03A8(0x0010) (ZeroConstructor)
	struct FString                                     EmptyModName;                                             // 0x03B8(0x0010) (ZeroConstructor)
	TMap<struct FString, class UBaseTableResMap*>      LoadedTableMap;                                           // 0x03C8(0x0050) (ZeroConstructor)
	TMap<struct FString, bool>                         CheckMapTable;                                            // 0x0418(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.UAETableManager");
		return pStaticClass;
	}


	void ReleaseTable(const struct FName& tableName);
	class UUAEDataTable* GetTablePtr_Mod(const struct FName& tableName);
	class UUAEDataTable* GetTablePtr(const struct FName& tableName);
	class UBaseTableResMap* GetTableMap(const struct FString& tableName);
	static bool GetTableData(const struct FString& tableName, const struct FString& Key, struct FTableRowBase* OutRow);
	static class UUAETableManager* GetInstance();
	static class UUAEDataTable* GetDataTableStatic_Mod(const struct FString& tableName);
	static class UUAEDataTable* GetDataTableStatic(const struct FString& tableName);
};


// Class Basic.UEMathUtilityMethods
// 0x0000 (0x0028 - 0x0028)
class UUEMathUtilityMethods : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.UEMathUtilityMethods");
		return pStaticClass;
	}


	static bool FilterOKForCurrentMode(unsigned char ModeType, int ModeOpenFlag, const struct FString& ModeTypes);
	static float CalculateAngleToTargetAngle(float startAngle, float targetAngle, float stepAngle, EAngleRotationDirectionType Dir);
	static int BKDRHash(const struct FString& StrToHash, int Mod);
	static float AngleDis(float angleA, float angleB);
};


// Class Basic.UEPathUtilityMethods
// 0x0000 (0x0028 - 0x0028)
class UUEPathUtilityMethods : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Basic.UEPathUtilityMethods");
		return pStaticClass;
	}


	static bool IsPathExist(const struct FString& HandlePath);
	static bool IsAvatarResPathExist(const struct FString& HandlePath);
	static struct FString GetModName(class UObject* WorldContext);
	static bool FilterOKForCurrentModeString(const struct FString& CurrentModeString, const struct FString& ModStringInfo, unsigned char ModeType, int ModeOpenFlag);
};


}

