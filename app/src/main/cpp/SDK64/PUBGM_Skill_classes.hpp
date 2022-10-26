#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Skill_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Skill.UTSkillBaseWidget
// 0x0038 (0x0148 - 0x0110)
class UUTSkillBaseWidget : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0110(0x0008) MISSED OFFSET
	bool                                               bWidgetEnabled;                                           // 0x0118(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0119(0x0007) MISSED OFFSET
	struct FString                                     EffectName;                                               // 0x0120(0x0010) (Edit, ZeroConstructor, EditConst)
	class AActor*                                      BuffTargetActor;                                          // 0x0130(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class AUTSkill>                     OwnerSkill;                                               // 0x0138(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UActorComponent*                             CurOwnerActorComponent;                                   // 0x0140(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillBaseWidget");
		return pStaticClass;
	}


	void SetValueAsWeakObject(const struct FUAEBlackboardKeySelector& Key, class UObject* ObjectValue);
	void SetValueAsVector(const struct FUAEBlackboardKeySelector& Key, const struct FVector& VectorValue);
	void SetValueAsString(const struct FUAEBlackboardKeySelector& Key, const struct FString& StringValue);
	void SetValueAsRotator(const struct FUAEBlackboardKeySelector& Key, const struct FRotator& RotatorValue);
	void SetValueAsObject(const struct FUAEBlackboardKeySelector& Key, class UObject* ObjectValue);
	void SetValueAsName(const struct FUAEBlackboardKeySelector& Key, const struct FName& NameValue);
	void SetValueAsInt(const struct FUAEBlackboardKeySelector& Key, int IntValue);
	void SetValueAsFloat(const struct FUAEBlackboardKeySelector& Key, float FloatValue);
	void SetValueAsEnum(const struct FUAEBlackboardKeySelector& Key, unsigned char EnumValue);
	void SetValueAsClass(const struct FUAEBlackboardKeySelector& Key, class UClass* ClassValue);
	void SetValueAsBool(const struct FUAEBlackboardKeySelector& Key, bool BoolValue);
	bool IsExistWeakObject(const struct FUAEBlackboardKeySelector& Key);
	bool IsExistVector(const struct FUAEBlackboardKeySelector& Key);
	bool IsExistString(const struct FUAEBlackboardKeySelector& Key);
	bool IsExistRotator(const struct FUAEBlackboardKeySelector& Key);
	bool IsExistObject(const struct FUAEBlackboardKeySelector& Key);
	bool IsExistName(const struct FUAEBlackboardKeySelector& Key);
	bool IsExistInt(const struct FUAEBlackboardKeySelector& Key);
	bool IsExistFloat(const struct FUAEBlackboardKeySelector& Key);
	bool IsExistEnum(const struct FUAEBlackboardKeySelector& Key);
	bool IsExistClass(const struct FUAEBlackboardKeySelector& Key);
	bool IsExistBool(const struct FUAEBlackboardKeySelector& Key);
	class UObject* GetValueAsWeakObject(const struct FUAEBlackboardKeySelector& Key);
	class AActor* GetValueAsWeakActor(const struct FUAEBlackboardKeySelector& Key);
	struct FVector GetValueAsVector(const struct FUAEBlackboardKeySelector& Key);
	struct FString GetValueAsString(const struct FUAEBlackboardKeySelector& Key);
	struct FRotator GetValueAsRotator(const struct FUAEBlackboardKeySelector& Key);
	class UObject* GetValueAsObject(const struct FUAEBlackboardKeySelector& Key);
	struct FName GetValueAsName(const struct FUAEBlackboardKeySelector& Key);
	int GetValueAsInt(const struct FUAEBlackboardKeySelector& Key);
	float GetValueAsFloat(const struct FUAEBlackboardKeySelector& Key);
	unsigned char GetValueAsEnum(const struct FUAEBlackboardKeySelector& Key);
	class UClass* GetValueAsClass(const struct FUAEBlackboardKeySelector& Key);
	bool GetValueAsBool(const struct FUAEBlackboardKeySelector& Key);
	class AActor* GetValueAsActor(const struct FUAEBlackboardKeySelector& Key);
	class UUAEBlackboard* GetUAEBlackboardBySkillComp(class UUTSkillManagerComponent* InOwnerSkillManager);
	class UUAEBlackboard* GetUAEBlackboard();
	class UUTSkillManagerComponent* GetOwnerSkillManager();
	class AActor* GetOwnerPawn();
	TMap<TWeakObjectPtr<class AActor>, class UUAEBlackboard*> GetActorBlackboardBySkillComp(class UUTSkillManagerComponent* InOwnerSkillManager);
	TMap<TWeakObjectPtr<class AActor>, class UUAEBlackboard*> GetActorBlackboard();
};


// Class Skill.UTSkillCondition
// 0x0000 (0x0148 - 0x0148)
class UUTSkillCondition : public UUTSkillBaseWidget
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillCondition");
		return pStaticClass;
	}


	bool IsTargetOK(class UActorComponent* SkillManagerComponent, class AActor* Target);
	bool IsOK_Internal();
	bool IsOK(class UActorComponent* SkillManagerComponent);
	class AUTSkill* GetOwnerSkill();
};


// Class Skill.UTSkillEffect
// 0x0018 (0x0160 - 0x0148)
class UUTSkillEffect : public UUTSkillBaseWidget
{
public:
	float                                              fADScale;                                                 // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              fAPScale;                                                 // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>                             CacheSoftObject;                                          // 0x0150(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillEffect");
		return pStaticClass;
	}


	void UpdateAction(class UUTSkillManagerComponent* SkillManagerComponent, float DeltaSeconds);
	void UndoAction(class UUTSkillManagerComponent* SkillManagerComponent);
	void PreCloseSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill);
	void PostInitSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill);
	void PostActiveSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill);
	void OnAsyncLoadSoftPathDone();
	class AUTSkill* GetOwnerSkill();
	void DoHurtAppearance(class UUTSkillManagerComponent* SkillManagerComponent, class AActor* Victim);
	bool DoAction(class UUTSkillManagerComponent* SkillManagerComponent);
};


// Class Skill.UTSkillAction
// 0x0028 (0x0188 - 0x0160)
class UUTSkillAction : public UUTSkillEffect
{
public:
	struct FUTSkillActionCreateData                    BaseData;                                                 // 0x0160(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0164(0x0004) MISSED OFFSET
	class UUTSkillAction*                              OwnerPeriodAction;                                        // 0x0168(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0170(0x0001) MISSED OFFSET
	bool                                               bClearTimerAfterReset;                                    // 0x0171(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0172(0x0006) MISSED OFFSET
	class UObject*                                     EventObj;                                                 // 0x0178(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0180(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillAction");
		return pStaticClass;
	}


	void UpdateAction_Internal(float DeltaSeconds);
	void UpdateAction(class UUTSkillManagerComponent* SkillManagerComponent, float DeltaSeconds);
	void UndoAction_Internal();
	void UndoAction(class UUTSkillManagerComponent* SkillManagerComponent);
	void TimerRealDoAction(class UUTSkillManagerComponent* SkillManagerComponent);
	void Reset_Internal();
	void Reset(class UActorComponent* SkillManagerComponent);
	bool RealDoAction_Internal();
	bool RealDoAction(class UUTSkillManagerComponent* SkillManagerComponent);
	void PreCloseSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill);
	void PostInitSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill);
	void PostActiveSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill);
	void OnAsyncLoadAssetDone(class UUTSkillManagerComponent* SkillManagerComponent);
	bool JudgeNeedPhaseWait();
	bool DoAction(class UUTSkillManagerComponent* SkillManagerComponent);
};


// Class Skill.UTSkill
// 0x02F0 (0x0688 - 0x0398)
class AUTSkill : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0398(0x0010) MISSED OFFSET
	bool                                               bNeedSync;                                                // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03A9(0x0007) MISSED OFFSET
	struct FString                                     SkillName;                                                // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FName                                       SkillGroup;                                               // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSinglePhaseRep;                                          // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ESkillCastType                                     SkillCastType;                                            // 0x03C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldMonopolize;                                        // 0x03CA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMonopolizeSelf;                                          // 0x03CB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SkillID;                                                  // 0x03CC(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     SkillDescription;                                         // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     SkillDetailDes;                                           // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bMeleeSkill;                                              // 0x03F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckFirstPhaseConditions;                               // 0x03F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNeedAutonomousClientSimulate;                            // 0x03F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bKeepCastingWhenDisconnect;                               // 0x03F3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bClearInputCache;                                         // 0x03F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03F5(0x0003) MISSED OFFSET
	struct FUTSkillCreateData                          BaseData;                                                 // 0x03F8(0x0188) (Edit, BlueprintVisible)
	int                                                SkillCategory;                                            // 0x0580(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseNewSkillCD;                                           // 0x0584(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0585(0x0003) MISSED OFFSET
	TArray<struct FUAEBlackboardParameter>             BlackboardParamList;                                      // 0x0588(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bSetBlackboardDefaultData;                                // 0x0598(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGsListener;                                              // 0x0599(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x059A(0x0006) MISSED OFFSET
	struct FString                                     SkillTimeScaleAttrName;                                   // 0x05A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<class UObject*, int>                          InstancedNodeNameToMemoryMap;                             // 0x05B0(0x0050) (ZeroConstructor)
	int                                                InstancedNodesTotalSize;                                  // 0x0600(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0604(0x0004) MISSED OFFSET
	TArray<struct FString>                             ParentFolderPath;                                         // 0x0608(0x0010) (ZeroConstructor)
	int64_t                                            LastEditBluePrintTime;                                    // 0x0618(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                CurComponentNameIndex;                                    // 0x0620(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsSkillEnabled;                                           // 0x0624(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x53];                                      // 0x0625(0x0053) MISSED OFFSET
	TWeakObjectPtr<class UUTSkillManagerComponent>     SpecificSkillCompRef;                                     // 0x0678(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UUAEBlackboard>               SpecificBlackBlackRef;                                    // 0x0680(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkill");
		return pStaticClass;
	}


	void StopSkillCoolDown(class UUTSkillManagerComponent* SkillManagerComponent, int CoolDownIndex);
	void SetSkillPhasePercentage(class UUTSkillManagerComponent* SkillManagerComponent, float Percentage);
	bool OnEvent(class UUTSkillManagerComponent* SkillManagerComponent, TEnumAsByte<enum EUTSkillEventType> TheEventType, int PhaseIndex);
	bool IsEnableSkillCoolDown(class UUTSkillManagerComponent* SkillManagerComponent);
	bool IsCDOK(class UUTSkillManagerComponent* SkillManagerComponent);
	class UUTSkillManagerComponent* GetSpecificSkillManager();
	class UUAEBlackboard* GetSpecificBlackboard();
	float GetSkillPhasePercentage(class UUTSkillManagerComponent* SkillManagerComponent);
	class UUTSkillPhase* GetSkillPhaseByName(const struct FString& PhaseName);
	class UUTSkillPhase* GetSkillPhase(int PhaseIndex);
	class UUTSkillBaseWidget* GetSkillEffectByPhaseName(const struct FString& PhaseName, const struct FString& EffectName);
	class UUTSkillBaseWidget* GetSkillEffectByPhaseIndex(int PhaseIndex, const struct FString& EffectName);
	void DoSkillCoolDown(class UUTSkillManagerComponent* SkillManagerComponent, int CoolDownIndex);
	bool CanBePlayed(class UUTSkillManagerComponent* SkillManagerComponent, bool bShowErrorMsg);
};


// Class Skill.UTSkillManagerComponent
// 0x0618 (0x07F0 - 0x01D8)
class UUTSkillManagerComponent : public ULuaActorComponent
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x01D8(0x0058) MISSED OFFSET
	class APawn*                                       OwnerPawn;                                                // 0x0230(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0238(0x0010) MISSED OFFSET
	bool                                               bEnableSkillCoolDown;                                     // 0x0248(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0249(0x0007) MISSED OFFSET
	class AActor*                                      OwnerActor;                                               // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DestroySkillsOnDie;                                       // 0x0258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0259(0x0007) MISSED OFFSET
	TMap<int, TWeakObjectPtr<class AUTSkill>>          SkillIDToSkills;                                          // 0x0260(0x0050) (ZeroConstructor, Transient)
	TArray<TWeakObjectPtr<class UUAEUserWidget>>       AsyncLoadedSkillUI;                                       // 0x02B0(0x0010) (ExportObject, ZeroConstructor, Transient)
	class UUAEUserWidget*                              SkillUIRoot;                                              // 0x02C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPanelWidget*                                SkillUIRootPanel;                                         // 0x02C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TMap<TWeakObjectPtr<class AUTSkill>, class UUAEBlackboard*> SkillsBlackboardMap;                                      // 0x02D0(0x0050) (ZeroConstructor)
	TMap<TWeakObjectPtr<class AActor>, class UUAEBlackboard*> ActorBlackboardMap;                                       // 0x0320(0x0050) (ZeroConstructor)
	struct FScriptMulticastDelegate                    ChangeActorBlackboard;                                    // 0x0370(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class AActor*                                      Target;                                                   // 0x0380(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TMap<int, struct FUTSkillCreateData>               SkillBaseDataMaps;                                        // 0x0388(0x0050) (ZeroConstructor)
	TArray<struct FUTSkillLastCastInfo>                LastCastArray;                                            // 0x03D8(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnSkillHit;                                               // 0x03E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSkillCast;                                              // 0x03F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              PhasePercentage;                                          // 0x0408(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x040C(0x0004) MISSED OFFSET
	TMap<int, int>                                     IDToSyncSkillActiveStateData;                             // 0x0410(0x0050) (ZeroConstructor)
	TArray<struct FSkillActiveRepData>                 SyncSkillActiveStateDatas;                                // 0x0460(0x0010) (Net, ZeroConstructor)
	TMap<int, int>                                     IDToSyncSkillCDDatas;                                     // 0x0470(0x0050) (ZeroConstructor)
	struct FSkillDynamicRepData                        SyncDynamicRepData;                                       // 0x04C0(0x0010) (Net)
	TArray<struct FSkillCDRepData>                     SyncSkillCDDatas;                                         // 0x04D0(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData05[0x8];                                       // 0x04E0(0x0008) MISSED OFFSET
	struct FUTSkillHitInfo                             SkillHitInfo;                                             // 0x04E8(0x0030) (Net)
	struct FUTSkillHitEnvInfo                          SkillHitEnvInfo;                                          // 0x0518(0x0030)
	TArray<struct FString>                             MutexMontageGroupBeenPlayed;                              // 0x0548(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData06[0x8];                                       // 0x0558(0x0008) MISSED OFFSET
	struct FString                                     LastESkillTargetDesc;                                     // 0x0560(0x0010) (ZeroConstructor)
	int                                                SkillSynRandomSeed;                                       // 0x0570(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FRandomStream                               SkillSynRandStream;                                       // 0x0574(0x0008)
	int                                                SkillSynRandomSeedExpireCount;                            // 0x057C(0x0004) (ZeroConstructor, IsPlainOldData)
	TMap<struct FString, struct FTimerHandle>          SkillTimerMap;                                            // 0x0580(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData07[0x8];                                       // 0x05D0(0x0008) MISSED OFFSET
	float                                              ZombieModeUseSkillCD;                                     // 0x05D8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x05DC(0x0004) MISSED OFFSET
	int                                                ZombieModeMaxSkillPropLevel;                              // 0x05E0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x14];                                      // 0x05E4(0x0014) MISSED OFFSET
	TArray<struct FSkillParamater>                     SkillParamaters;                                          // 0x05F8(0x0010) (Net, ZeroConstructor)
	TArray<struct FUTMutilSkillSynData>                SkillSynData;                                             // 0x0608(0x0010) (BlueprintVisible, Net, ZeroConstructor)
	unsigned char                                      UnknownData10[0x10];                                      // 0x0618(0x0010) MISSED OFFSET
	TArray<struct FUTSkillSynSinglePhaseData>          SkillSynSinglePhaseData;                                  // 0x0628(0x0010) (BlueprintVisible, Net, ZeroConstructor)
	unsigned char                                      UnknownData11[0x18];                                      // 0x0638(0x0018) MISSED OFFSET
	TMap<class AUTSkill*, int>                         SkillCurPhaseIndexes;                                     // 0x0650(0x0050) (ZeroConstructor)
	TMap<class AUTSkill*, int>                         LastPhaseIndexes;                                         // 0x06A0(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData12[0x60];                                      // 0x06F0(0x0060) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSkillInitSignature;                                     // 0x0750(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SkillStartEvent;                                          // 0x0760(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SkillStopEvent;                                           // 0x0770(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<int>                                        PendingRemoveSkillID;                                     // 0x0780(0x0010) (ZeroConstructor)
	TMap<int, unsigned char>                           CurSKillLevels;                                           // 0x0790(0x0050) (ZeroConstructor, Transient)
	TArray<struct FUTReplaceSkillData>                 ReplacedSkillDatas;                                       // 0x07E0(0x0010) (BlueprintVisible, Net, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillManagerComponent");
		return pStaticClass;
	}


	void UpdateSyncSkillCDData(int SkillID);
	void UpdateSyncSkillActiveState(int SkillID);
	void UnRegisterActorBlackBorad(class AActor* InActor);
	void TryDeleteOneSkill(int SkillID, bool IsImmediately);
	void TryAddOneSkill(int SkillID, bool bActive);
	void TriggerParamsEvent(int InSkillID, TEnumAsByte<enum EUTSkillEventType> InEventType, const struct FUTSkillClientData& OperateData);
	void TriggerEvent_WithID(int InSkillID, TEnumAsByte<enum EUTSkillEventType> InEventType);
	void TriggerEvent(int SkillID, TEnumAsByte<enum EUTSkillEventType> EventType);
	bool TraceTarget(const struct FVector& StartTrace, const struct FVector& EndTrace, EUTPickerTargetType TargetType, float Radius, class AActor** TargetActor);
	void SyncOneSkillState(bool RepSkillCD, bool RepSkillActiveState, int RequestID);
	bool StopSkillWithSlot(int SkillSlot, EUTSkillStopReason StopReason);
	void StopSkillSpecific(class AUTSkill* Skill, EUTSkillStopReason StopReason);
	void StopSkillAll(EUTSkillStopReason StopReason);
	int StopSkill_WithID(int SkillID, EUTSkillStopReason StopReason);
	void StopSkill(int SkillID, EUTSkillStopReason StopReason);
	bool ShouldTriggerEvent(int SkillID, TEnumAsByte<enum EUTSkillEventType> EventType);
	bool SetupOwnerAndSystem();
	void SetSkillState(TArray<struct FUTSkillStateSyncData> InSyncStateDatas);
	void SetSkillOwner(class AActor* tempActor);
	void SetSkillLevel(int SkillID, int SkillLevel);
	void SetSkillLastPhase(class AUTSkill* Skill, int PhaseIndex);
	void SetSkillCurPhase(class AUTSkill* Skill, int PhaseIndex);
	bool SetSkillActive(int SkillID, bool bActive, bool bForceSet);
	void SetModSkillUIRoot(class UUAEUserWidget* ModSkillUIRoot);
	void SetCurSkill(int SkillID, int SkillSlot);
	void SetAutoSkillID(int InSkillID);
	void ServerTriggerParamsEvent(int SkillID, TEnumAsByte<enum EUTSkillEventType> EventType, const struct FUTSkillClientData& OperateData);
	void ServerTriggerEvent_WithID(int SkillID, TEnumAsByte<enum EUTSkillEventType> EventType);
	void ServerTriggerEvent(int SkillID, TEnumAsByte<enum EUTSkillEventType> EventType);
	bool ServerStartSkill(int SkillID, bool bAutoCast);
	void ServerNotifyRandomSeed(int Seed);
	void ResetSkillCollDown(int SkillID);
	void ResetAllSkillCollDown();
	void RequestSkillStates(bool RepSkillCD, bool RepSkillActiveState, TArray<int> RequestIDs);
	void RepSkillHitInfo();
	void RepOneSkillSynData(int SkillSlot, int InLastSkillID);
	void RepLastCastTime();
	void ReplaceSkill(int OldSkillID, int NewSkillID);
	void RemoveSkillUIWidget(const struct FString& SkillClassName, const struct FSoftObjectPath& ObjPath);
	void RemoveReplacedSkill(int OldSkillID);
	void RemoveAllSkillUIWidget();
	void RegistSkillUIWidgetBP(const struct FString& SkillClassName, const struct FSoftObjectPath& ObjPath);
	void RegisterActorBlackBorad(class AActor* InActor, class UUAEBlackboard* RegisterBlackboard);
	int RandRangeSyn(int StartIndex, int EndIndex);
	void PlayHurtSkillEffect(const struct FUTSkillHitInfo& TheSkillHitInfo);
	void OnStopSkill(class AUTSkill* Skill, EUTSkillStopReason StopReason);
	static bool OnSameTeam(class AActor* A, class AActor* B);
	void OnRespawned();
	void OnRep_SkillSynSinglePhaseData();
	void OnRep_SkillSynData();
	void OnRep_SkillHitInfo();
	void OnRep_SkillCDDatas();
	void OnRep_SkillActiveState();
	void OnRep_ReplaceSkill();
	void OnRep_DynamicRepData();
	void OnRecycled();
	void OnInterruptSkill(class AUTSkill* Skill, EUTSkillStopReason StopReason);
	bool IsUsingSkill(int SkillID);
	bool IsSkillCanUse();
	bool IsSkillActived(int SkillID);
	bool IsReadyToCastSkill(int SkillID);
	bool IsEnableSkillCoolDown();
	bool IsCurrentUseSkillID(int InSkillID);
	bool IsCastingSkillID(int InSkillID);
	bool IsCastingSkill();
	void HandleTriggerParamsEvent(int SkillID, TEnumAsByte<enum EUTSkillEventType> EventType, const struct FUTSkillClientData& OperateData);
	void HandleSkillStop(int SkillID, EUTSkillStopReason StopReason);
	void HandleSkillStart(int SkillID);
	class UUAEBlackboard* GetUAEBlackboardBySkillId(int SkillID);
	class UUAEBlackboard* GetUAEBlackboard(class AUTSkill* InSkill);
	class UUTSkillWidget* GetSkillWidget(int SkillID);
	TArray<struct FUTSkillStateSyncData> GetSkillState();
	int GetSkillSlotBySkillID(int SkillID);
	int GetSkillSlotBySkill(class AUTSkill* Skill);
	TArray<class AUTSkill*> GetSkillsByGroup(const struct FName& SkillGroup);
	int GetSkillLevel(int SkillID);
	int GetSkillLastPhase(class AUTSkill* Skill);
	int GetSkillIDFromSkillIndex(int InSkillIndex);
	int GetSkillIDByClass(class UClass* SkillClass);
	int GetSkillCurPhase(class AUTSkill* Skill);
	class AUTSkill* GetSkillByName(const struct FString& SkillName);
	class AUTSkill* GetSkillByClassName(const struct FString& SkillClassName);
	struct FUTSkillCreateData GetSkillBaseData(int SkillID);
	class AUTSkill* GetSkill(int SkillID);
	int GetReplacedSkill(int OldSkillID);
	TEnumAsByte<enum ENetRole> GetRealOwnerRoleSafety();
	float GetLastCastTime(int SkillID);
	float GetLastCastFinishTime(int SkillID);
	TArray<int> GetCurUsingSkillIDS();
	TArray<class AUTSkill*> GetCurSkills();
	TArray<class UUTSkillPhase*> GetCurSkillPhases();
	class UUTSkillPhase* GetCurSkillPhase(int InSkillSlot);
	TArray<int> GetCurSkillIDs();
	int GetCurSkillID(class AUTSkill* Skill);
	class AUTSkill* GetCurSkill(int InSkillSlot);
	TArray<int> GetCurMonopolizeSkills();
	int FindRelatedCurSkillID(int SkillID, bool bPeekSlotIndex, int* OutRelatedSkillSlot);
	void DynamicRemoveSkill(int InSkillID);
	void DynamicAddSkill(int InSkillID);
	void ClientStartSkill(int SkillID, bool bAutoCast);
	void ClearSkill();
	void ClearRepParams();
	void ClearInitParams();
};


// Class Skill.UTSkillEventEffectMapForEditor
// 0x0048 (0x0190 - 0x0148)
class UUTSkillEventEffectMapForEditor : public UUTSkillBaseWidget
{
public:
	TEnumAsByte<enum EUTSkillEventType>                SkillEventType;                                           // 0x0148(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0149(0x0007) MISSED OFFSET
	TArray<struct FName>                               InterestedOwnerTags;                                      // 0x0150(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FName                                       PreEventActionTag;                                        // 0x0160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUTSkillEffect*                              SkillEffect;                                              // 0x0168(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FSkillConditionWarpper>              Conditions;                                               // 0x0170(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FSkillConditionWarpper>              TargetConditions;                                         // 0x0180(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillEventEffectMapForEditor");
		return pStaticClass;
	}

};


// Class Skill.UTSkillInterface
// 0x0000 (0x0028 - 0x0028)
class UUTSkillInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillInterface");
		return pStaticClass;
	}


	void TriggerEvent(int SkillID, TEnumAsByte<enum EUTSkillEventType> EventType);
	void HandleSkillStart(int SkillID);
	void HandleSkillEnd(int SkillID, EUTSkillStopReason Reason);
};


// Class Skill.UTSkillPhase
// 0x00E8 (0x01F8 - 0x0110)
class UUTSkillPhase : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0110(0x0008) MISSED OFFSET
	struct FString                                     PhaseName;                                                // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     PhaseDescription;                                         // 0x0128(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bPhaseEnabled;                                            // 0x0138(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0139(0x0003) MISSED OFFSET
	TWeakObjectPtr<class AUTSkill>                     OwnerSkill;                                               // 0x013C(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                PhaseIndex;                                               // 0x0144(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0148(0x0018) MISSED OFFSET
	int                                                ActionsTopHalfCount;                                      // 0x0160(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0164(0x0004) MISSED OFFSET
	struct FUTSkillPhaseCreateData                     BaseData;                                                 // 0x0168(0x0088) (Edit)
	class UUTSkillPicker*                              InEffectPickerOnAction;                                   // 0x01F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillPhase");
		return pStaticClass;
	}


	bool TryJumpToPhase(class UUTSkillManagerComponent* SkillManagerComponent, int PhaseId);
	void StopPhase(class UUTSkillManagerComponent* SkillManagerComponent);
	void StartPhase(class UUTSkillManagerComponent* SkillManagerComponent);
	void RepeatPhase(class UUTSkillManagerComponent* SkillManagerComponent);
	bool PlaySkillHurtEffect(class UUTSkillManagerComponent* SkillManagerComponent, class AActor* Victim);
	bool PlaySkillHurtAppearances(class UUTSkillManagerComponent* SkillManagerComponent, class AActor* Victim);
	void PickTargets(class UUTSkillManagerComponent* SkillManagerComponent);
	bool OnEvent(class UUTSkillManagerComponent* SkillManagerComponent, TEnumAsByte<enum EUTSkillEventType> TheEventType);
	bool OnCustomEvent(class UUTSkillManagerComponent* SkillManagerComponent, TEnumAsByte<enum EUTSkillEventType> TheEventType);
	float GetChargePhaseRate(class UUTSkillManagerComponent* SkillManagerComponent);
	bool ForceStopPhase(class UUTSkillManagerComponent* SkillManagerComponent);
	bool ClearAttachments();
	void AfterStartPhase(class UUTSkillManagerComponent* SkillManagerComponent);
	void AddSkillConditionLua(class AUTSkill* InSkill, const struct FString& InLuaPath);
	void AddSkillActionLua(class AUTSkill* InSkill, const struct FString& InLuaPath);
};


// Class Skill.UTSkillPicker
// 0x0050 (0x0198 - 0x0148)
class UUTSkillPicker : public UUTSkillBaseWidget
{
public:
	struct FUTSkillPickerCreateData                    BaseData;                                                 // 0x0148(0x0020) (Edit)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0168(0x0010) MISSED OFFSET
	TArray<struct FUTSkillPickedTarget>                PickedResultTargets;                                      // 0x0178(0x0010) (ZeroConstructor, Transient)
	TArray<class UUTSkillPickerFilter*>                Filters;                                                  // 0x0188(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillPicker");
		return pStaticClass;
	}


	bool PickTargetsInner(const struct FVector& OriginPoint);
	bool PickTargets(const struct FVector& OriginPoint);
};


// Class Skill.UTSkillPickerFilter
// 0x0000 (0x0028 - 0x0028)
class UUTSkillPickerFilter : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillPickerFilter");
		return pStaticClass;
	}


	void HandleFilterArray(class AActor* Owner, TArray<struct FUTSkillPickedTarget>* inArray);
};


// Class Skill.UTSkillWidget
// 0x0018 (0x0460 - 0x0448)
class UUTSkillWidget : public ULuaUAEUserWidget
{
public:
	class UUTSkillManagerComponent*                    SkillManager;                                             // 0x0448(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                SkillID;                                                  // 0x0450(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TickInterval;                                             // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableTick;                                              // 0x0458(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0459(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillWidget");
		return pStaticClass;
	}


	void TriggerPassiveEvent(TEnumAsByte<enum EUTSkillEventType> SkillEvent);
	void TriggerEvent(TEnumAsByte<enum EUTSkillEventType> SkillEvent);
	void SetSkillManager(class UUTSkillManagerComponent* manager);
	void SetSkillID(int InSkillID);
	void RemoveSkillUI();
	void OnSkillStopEvent(int InSkillID, EUTSkillStopReason InStopReason);
	void OnSkillStartEvent(int InSkillID);
	bool IsTickFinish();
	bool IsCDReady();
	struct FString GetSkillName();
	class UUTSkillManagerComponent* GetSkillManager();
	int GetSkillID();
	TArray<float> GetSkillCDProgess();
	TArray<class UUTSkillCDBase*> GetSkillCDBases();
	class AUTSkill* GetSkill();
	float GetMaxEnergy();
	class APlayerController* GetLocalPlayerController();
	float GetEnergyValue();
	float GetEnergyThreshold();
	float GetDeltaEnergy();
	void DoRemove();
};


// Class Skill.UTSkillLocationPicker
// 0x0000 (0x0148 - 0x0148)
class UUTSkillLocationPicker : public UUTSkillBaseWidget
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillLocationPicker");
		return pStaticClass;
	}

};


// Class Skill.AddNewSkillToOwnerInterface
// 0x0000 (0x0028 - 0x0028)
class UAddNewSkillToOwnerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.AddNewSkillToOwnerInterface");
		return pStaticClass;
	}


	TArray<struct FItemSkillsConfig> GetSkillTemplates();
};


// Class Skill.SkillGlobalUIDDataAsset
// 0x00A0 (0x00D0 - 0x0030)
class USkillGlobalUIDDataAsset : public UDataAsset
{
public:
	TMap<struct FString, int>                          AllSkillUIDMap;                                           // 0x0030(0x0050) (Edit, ZeroConstructor, EditConst)
	TMap<int, struct FString>                          AllSkillPathMap;                                          // 0x0080(0x0050) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.SkillGlobalUIDDataAsset");
		return pStaticClass;
	}

};


// Class Skill.UTSkillAction_Lua
// 0x00D0 (0x0258 - 0x0188)
class UUTSkillAction_Lua : public UUTSkillAction
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0188(0x0060) MISSED OFFSET
	struct FString                                     ParameterFlag;                                            // 0x01E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<struct FName, struct FString>                 ActionParams;                                             // 0x01F8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LuaFilePath;                                              // 0x0248(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillAction_Lua");
		return pStaticClass;
	}


	struct FVector GetVectorValue(const struct FName& Key);
	struct FString GetStringValue(const struct FName& Key);
	int GetIntValue(const struct FName& Key);
	float GetFloatValue(const struct FName& Key);
	bool GetBoolValue(const struct FName& Key);
};


// Class Skill.UTSkillBlackboardInterface
// 0x0000 (0x0028 - 0x0028)
class UUTSkillBlackboardInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillBlackboardInterface");
		return pStaticClass;
	}


	void SetValueAsWeakObject(int SkillID, const struct FUAEBlackboardKeySelector& Key, class UObject* ObjectValue);
	void SetValueAsVector(int SkillID, const struct FUAEBlackboardKeySelector& Key, const struct FVector& VectorValue);
	void SetValueAsString(int SkillID, const struct FUAEBlackboardKeySelector& Key, const struct FString& StringValue);
	void SetValueAsRotator(int SkillID, const struct FUAEBlackboardKeySelector& Key, const struct FRotator& VectorValue);
	void SetValueAsObject(int SkillID, const struct FUAEBlackboardKeySelector& Key, class UObject* ObjectValue);
	void SetValueAsName(int SkillID, const struct FUAEBlackboardKeySelector& Key, const struct FName& NameValue);
	void SetValueAsInt(int SkillID, const struct FUAEBlackboardKeySelector& Key, int IntValue);
	void SetValueAsFloat(int SkillID, const struct FUAEBlackboardKeySelector& Key, float FloatValue);
	void SetValueAsEnum(int SkillID, const struct FUAEBlackboardKeySelector& Key, unsigned char EnumValue);
	void SetValueAsClass(int SkillID, const struct FUAEBlackboardKeySelector& Key, class UClass* ClassValue);
	void SetValueAsBool(int SkillID, const struct FUAEBlackboardKeySelector& Key, bool BoolValue);
	bool IsExistWeakObject(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	bool IsExistVector(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	bool IsExistString(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	bool IsExistRotator(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	bool IsExistObject(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	bool IsExistName(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	bool IsExistInt(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	bool IsExistFloat(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	bool IsExistEnum(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	bool IsExistClass(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	bool IsExistBool(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	struct FVector GetValueAsVector(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	struct FString GetValueAsString(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	struct FRotator GetValueAsRotator(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	struct FName GetValueAsName(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	int GetValueAsInt(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	float GetValueAsFloat(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	unsigned char GetValueAsEnum(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	class UClass* GetValueAsClass(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	bool GetValueAsBool(int SkillID, const struct FUAEBlackboardKeySelector& Key);
	class UUAEBlackboard* GetUAEBlackboardBySkillId(int SkillID);
};


// Class Skill.UTSkillCDBase
// 0x0040 (0x00E0 - 0x00A0)
class UUTSkillCDBase : public ULuaObject
{
public:
	TWeakObjectPtr<class UUTSkillManagerComponent>     OwnerSkillManager;                                        // 0x00A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class AUTSkill>                     OwnerSkill;                                               // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
	ECDType                                            cdType;                                                   // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
	struct FString                                     cdTypeStr;                                                // 0x00B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UUTSkillManagerComponent*                    CurOwnerManager;                                          // 0x00C8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillCDBase");
		return pStaticClass;
	}


	bool StopConsumCD();
	bool IsTickFinish();
	bool IsCDReady();
	float GetCurrentTime();
	bool ForceConsumCD();
	bool ConsumCD();
};


// Class Skill.UTSkillCD_CastEnergyByOwner
// 0x0008 (0x00E8 - 0x00E0)
class UUTSkillCD_CastEnergyByOwner : public UUTSkillCDBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillCD_CastEnergyByOwner");
		return pStaticClass;
	}

};


// Class Skill.UTSkillCD_EnergyOfSkill
// 0x0010 (0x00F0 - 0x00E0)
class UUTSkillCD_EnergyOfSkill : public UUTSkillCDBase
{
public:
	float                                              MaxEnergy;                                                // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurEnergy;                                                // 0x00E4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DeltaEnergy;                                              // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillCD_EnergyOfSkill");
		return pStaticClass;
	}


	float RefreshEnergy();
	float GetDeltaEnergy();
	float GetCurrentPercent();
	float GetCurrentEnergy();
};


// Class Skill.UTSkillCD_CastEnergyBySkill
// 0x0010 (0x0100 - 0x00F0)
class UUTSkillCD_CastEnergyBySkill : public UUTSkillCD_EnergyOfSkill
{
public:
	float                                              Threshold;                                                // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              castEnergy;                                               // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSkillEffectHoldTime;                                   // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillCD_CastEnergyBySkill");
		return pStaticClass;
	}

};


// Class Skill.UTSkillCD_CastTime
// 0x0008 (0x00E8 - 0x00E0)
class UUTSkillCD_CastTime : public UUTSkillCDBase
{
public:
	float                                              toTime;                                                   // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillCD_CastTime");
		return pStaticClass;
	}

};


// Class Skill.UTSkillCD_TickEnergyBySkill
// 0x0010 (0x0100 - 0x00F0)
class UUTSkillCD_TickEnergyBySkill : public UUTSkillCD_EnergyOfSkill
{
public:
	float                                              Threshold;                                                // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              castEnergyDelta;                                          // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CountTime;                                                // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillCD_TickEnergyBySkill");
		return pStaticClass;
	}

};


// Class Skill.UTSkillCondition_Lua
// 0x0070 (0x01B8 - 0x0148)
class UUTSkillCondition_Lua : public UUTSkillCondition
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0148(0x0060) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x01A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillCondition_Lua");
		return pStaticClass;
	}

};


// Class Skill.UTSkillEvent
// 0x0008 (0x0030 - 0x0028)
class UUTSkillEvent : public UObject
{
public:
	TEnumAsByte<enum EUTSkillEventType>                SkillEventType;                                           // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillEvent");
		return pStaticClass;
	}

};


// Class Skill.UTSkillInstancedNodeContainerInterface
// 0x0000 (0x0028 - 0x0028)
class UUTSkillInstancedNodeContainerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillInstancedNodeContainerInterface");
		return pStaticClass;
	}

};


// Class Skill.UTSkillInstancedNodeInterface
// 0x0000 (0x0028 - 0x0028)
class UUTSkillInstancedNodeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillInstancedNodeInterface");
		return pStaticClass;
	}

};


// Class Skill.UTSkillFunctionBase
// 0x0018 (0x0160 - 0x0148)
class UUTSkillFunctionBase : public UUTSkillBaseWidget
{
public:
	struct FSkillFuncNameSelector                      DoActionFuncKey;                                          // 0x0148(0x0008) (Edit, BlueprintVisible)
	struct FSkillFuncNameSelector                      UndoActionFuncKey;                                        // 0x0150(0x0008) (Edit, BlueprintVisible)
	struct FSkillFuncNameSelector                      ConditionFuncKey;                                         // 0x0158(0x0008) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillFunctionBase");
		return pStaticClass;
	}

};


// Class Skill.UTSkillSpecificAction
// 0x0010 (0x0198 - 0x0188)
class UUTSkillSpecificAction : public UUTSkillAction
{
public:
	struct FSkillFuncNameSelector                      DoActionFuncKey;                                          // 0x0188(0x0008) (Edit, BlueprintVisible)
	struct FSkillFuncNameSelector                      UndoActionFuncKey;                                        // 0x0190(0x0008) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillSpecificAction");
		return pStaticClass;
	}


	void UpdateAction_Internal(float DeltaSeconds);
	void UndoAction_Internal();
	void Reset_Internal();
	bool RealDoAction_Internal();
	void PreCloseSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill);
	void PostInitSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill);
	void PostActiveSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill);
};


// Class Skill.UTSkillSpecificCondition
// 0x0008 (0x0150 - 0x0148)
class UUTSkillSpecificCondition : public UUTSkillCondition
{
public:
	struct FSkillFuncNameSelector                      ConditionFuncKey;                                         // 0x0148(0x0008) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.UTSkillSpecificCondition");
		return pStaticClass;
	}

};


// Class Skill.SkillUtil
// 0x0000 (0x0028 - 0x0028)
class USkillUtil : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class Skill.SkillUtil");
		return pStaticClass;
	}

};


}

