#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_UAETrigger_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class UAETrigger.LevelEventCenter
// 0x00B8 (0x00E0 - 0x0028)
class ULevelEventCenter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	TMap<struct FString, class UTriggerEvent*>         TriggerEvents;                                            // 0x0038(0x0050) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0088(0x0008) MISSED OFFSET
	TMap<struct FString, struct FLevelEventListenerList> EventListeners;                                           // 0x0090(0x0050) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.LevelEventCenter");
		return pStaticClass;
	}

};


// Class UAETrigger.UAELevelDirector
// 0x01C0 (0x0558 - 0x0398)
class AUAELevelDirector : public AActor
{
public:
	bool                                               IsEnable;                                                 // 0x0398(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               ClientEnvEnabled;                                         // 0x0399(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ServerEnvEnabled;                                         // 0x039A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x039B(0x0005) MISSED OFFSET
	TArray<struct FLevelDirectorInstAction>            InstanceActions;                                          // 0x03A0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FString>                             ClassPaths;                                               // 0x03B0(0x0010) (Edit, ZeroConstructor)
	struct FString                                     ConfigFilePath;                                           // 0x03C0(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      PlayerRepInfoClass;                                       // 0x03D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     ClientConfigFilePath;                                     // 0x03D8(0x0010) (Edit, ZeroConstructor)
	struct FUAELevelDirectorRepData                    LevelDirectorRepData;                                     // 0x03E8(0x0018) (Net, Transient)
	TMap<uint32_t, class AUAELevelDirector_PlayerRepInfo*> AllPlayersRepInfo;                                        // 0x0400(0x0050) (ZeroConstructor, Transient)
	TArray<class UUAETriggerFuncLib*>                  FunctionLibList;                                          // 0x0450(0x0010) (ZeroConstructor)
	class UTriggersFlowBase*                           TriggersFlowTree;                                         // 0x0460(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TMap<struct FString, class UUAETriggerObject*>     TriggerObjectMap;                                         // 0x0468(0x0050) (ZeroConstructor)
	class UVariableSet*                                AllVariableSet;                                           // 0x04B8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UUAETriggerParamFuncLib*                     TriggerParamFuncLib;                                      // 0x04C0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ULevelEventCenter*                           LevelEventCenter;                                         // 0x04C8(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     DescData;                                                 // 0x04D0(0x0010) (ZeroConstructor)
	class AUAELevelDirector_PlayerRepInfo*             CurLevelDirector_PlayerRepInfo;                           // 0x04E0(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<uint32_t, class AUAELevelDirector_PlayerRepInfo*> HistoryLevelDirector_PlayerRepInfos;                      // 0x04E8(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0538(0x0008) MISSED OFFSET
	struct FTaskRepData                                TaskData;                                                 // 0x0540(0x0018) (BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.UAELevelDirector");
		return pStaticClass;
	}


	bool StartLevelDirector();
	void SetTriggerRunType(const struct FString& TriggerName, EUAETriggerRunType RunType);
	void SetEnable(bool Enab);
	void S2Sim_CallExcuteAction();
	void RequestTriggerComplete(class UUAETriggerObject* CompleteTrigger);
	void OnRep_LevelDirectorData();
	bool InitialLevelDirector();
	class UUAETriggerObject* GetTrigger(const struct FString& NodeName, const struct FString& TriggerName);
	bool GetHasBeenInit();
	class UVariableSet* GetDataSet();
	int GetCurTaskID();
	void ForceExecuteTrigger(const struct FString& TriggerName);
	bool FlowControllSubControll(const struct FString& NodeName, TArray<struct FString>* TriggerNames);
	bool FlowControllOr(const struct FString& NodeName, TArray<struct FString>* TriggerNames);
	bool FlowControllOneSequence(const struct FString& TriggerName, const struct FString& NodeName);
	bool FlowControllMultiSequence(const struct FString& NodeName, TArray<struct FString>* TriggerNames);
	bool FlowControllAnd(const struct FString& NodeName, bool DefaultActive, TArray<struct FString>* TriggerNames);
	void DeactiveTrigger(const struct FString& NodeName, const struct FString& TriggerName);
	void DeactiveNode(const struct FString& NodeName);
	void ClientExecuteAction(const struct FString& ActionClassName, int64_t UId, TArray<struct FTriggerParamRepData> RepParams, bool IsKeep, bool IsRevert, class AUAELevelDirector_PlayerRepInfo* InLevelDirector_PlayerRepInfo);
	void AddEventToTrigger(const struct FString& TriggerName, class UClass* Event);
	class UTriggerCondition* AddConditionToTrigger(const struct FString& TriggerName, class UClass* Condition);
	class UTriggerAction* AddActionToTrigger(const struct FString& TriggerName, class UClass* Action);
	void ActiveTrigger(const struct FString& NodeName, const struct FString& TriggerName);
	void ActiveNode(const struct FString& NodeName);
};


// Class UAETrigger.TriggerAction
// 0x0068 (0x0090 - 0x0028)
class UTriggerAction : public UObject
{
public:
	class UVariableSet*                                DataSource;                                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	bool                                               bEnableActionTick;                                        // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EUAETriggerActionExecPolicy                        ExecPolicy;                                               // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
	class UUAETriggerObject*                           ParentTrigger;                                            // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AUAELevelDirector*                           ActionOuterActor;                                         // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x24];                                      // 0x0050(0x0024) MISSED OFFSET
	bool                                               bSupportNetRep;                                           // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1B];                                      // 0x0075(0x001B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.TriggerAction");
		return pStaticClass;
	}

};


// Class UAETrigger.TriggerCondition
// 0x0030 (0x0058 - 0x0028)
class UTriggerCondition : public UObject
{
public:
	class UVariableSet*                                DataSource;                                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UTriggerCondition*>                   ChildConditions;                                          // 0x0030(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET
	class UUAETriggerObject*                           ParentTrigger;                                            // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.TriggerCondition");
		return pStaticClass;
	}


	void AddChildCondition(class UTriggerCondition* NewChildCond);
};


// Class UAETrigger.TriggerEvent
// 0x0080 (0x00A8 - 0x0028)
class UTriggerEvent : public UObject
{
public:
	struct FString                                     EventName;                                                // 0x0028(0x0010) (ZeroConstructor)
	class UObject*                                     EventInstigator;                                          // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET
	TMap<struct FString, struct FTriggerEventListenerTrigger> RelevantListener;                                         // 0x0050(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.TriggerEvent");
		return pStaticClass;
	}

};


// Class UAETrigger.UAETriggerArea
// 0x0020 (0x03B8 - 0x0398)
class AUAETriggerArea : public AActor
{
public:
	TArray<struct FTriggerAreaEvent>                   Enter_EventsList;                                         // 0x0398(0x0010) (Edit, ZeroConstructor)
	TArray<struct FTriggerAreaEvent>                   Leave_EventsList;                                         // 0x03A8(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.UAETriggerArea");
		return pStaticClass;
	}


	void OnTriggerExit(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnTriggerEnter(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


// Class UAETrigger.UAETriggerFuncLib
// 0x0018 (0x0040 - 0x0028)
class UUAETriggerFuncLib : public UObject
{
public:
	TArray<struct FTriggerClassItem>                   ClassItemList;                                            // 0x0028(0x0010) (ZeroConstructor, Config)
	class UVariableSet*                                DataSet;                                                  // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.UAETriggerFuncLib");
		return pStaticClass;
	}


	class AActor* GetLastIteratorActor();
};


// Class UAETrigger.UAETriggerParamFuncLib
// 0x0000 (0x0040 - 0x0040)
class UUAETriggerParamFuncLib : public UUAETriggerFuncLib
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.UAETriggerParamFuncLib");
		return pStaticClass;
	}

};


// Class UAETrigger.UAETriggerEventFuncLib
// 0x0000 (0x0040 - 0x0040)
class UUAETriggerEventFuncLib : public UUAETriggerFuncLib
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.UAETriggerEventFuncLib");
		return pStaticClass;
	}

};


// Class UAETrigger.UAETriggerObject
// 0x01A0 (0x01C8 - 0x0028)
class UUAETriggerObject : public UObject
{
public:
	EUAETriggerRunType                                 RunType;                                                  // 0x0028(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	EUAETriggerObjectType                              TriggerObjectType;                                        // 0x0029(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	int                                                EventDelayTime;                                           // 0x002C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                ActionDelayTime;                                          // 0x0030(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     TriggerName;                                              // 0x0038(0x0010) (Edit, ZeroConstructor, EditConst)
	class AActor*                                      OuterActor;                                               // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UClass*>                              TriggerEventsClass;                                       // 0x0050(0x0010) (ZeroConstructor)
	TArray<class UTriggerAction*>                      TriggerActions;                                           // 0x0060(0x0010) (ZeroConstructor)
	TArray<class UTriggerCondition*>                   TriggerConditions;                                        // 0x0070(0x0010) (ZeroConstructor, Transient)
	class UFlowNodeBase*                               CarrierFlowNode;                                          // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bActive;                                                  // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x17];                                      // 0x0089(0x0017) MISSED OFFSET
	struct FTimerHandle                                TimerHandle_EventDelay;                                   // 0x00A0(0x0008)
	struct FTimerHandle                                TimerHandle_ActionDelay;                                  // 0x00A8(0x0008)
	class UTriggerEvent*                               CurEvent;                                                 // 0x00B0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FString                                     DelayEventName;                                           // 0x00B8(0x0010) (ZeroConstructor)
	struct FString                                     FiredEventName;                                           // 0x00C8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x50];                                      // 0x00D8(0x0050) UNKNOWN PROPERTY: SetProperty UAETrigger.UAETriggerObject.TriggeredEvents
	unsigned char                                      UnknownData04[0x50];                                      // 0x0128(0x0050) UNKNOWN PROPERTY: SetProperty UAETrigger.UAETriggerObject.CompleteActions
	bool                                               IsEnableCheckDo;                                          // 0x0178(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0179(0x0007) MISSED OFFSET
	class AUAELevelDirector*                           OwnerLevelDirector;                                       // 0x0180(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x18];                                      // 0x0188(0x0018) MISSED OFFSET
	bool                                               bEnableTick;                                              // 0x01A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x01A1(0x0003) MISSED OFFSET
	float                                              TickInterval;                                             // 0x01A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldReplicateAction;                                   // 0x01A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCacheParamToTriggerObject;                               // 0x01A9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x6];                                       // 0x01AA(0x0006) MISSED OFFSET
	TArray<class UProperty*>                           eventParams;                                              // 0x01B0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData09[0x8];                                       // 0x01C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.UAETriggerObject");
		return pStaticClass;
	}

};


// Class UAETrigger.LevelEventListener
// 0x00D8 (0x0100 - 0x0028)
class ULevelEventListener : public UObject
{
public:
	struct FString                                     EventName;                                                // 0x0028(0x0010) (ZeroConstructor)
	TMap<struct FString, struct FName>                 RelevantListenerCallbacks;                                // 0x0038(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0088(0x0050) UNKNOWN PROPERTY: SetProperty UAETrigger.LevelEventListener.ObjectRelevantEvents
	class AActor*                                      ListenerEntity;                                           // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UProperty*>                           Params;                                                   // 0x00E0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.LevelEventListener");
		return pStaticClass;
	}

};


// Class UAETrigger.ActorEventListener
// 0x0018 (0x0118 - 0x0100)
class UActorEventListener : public ULevelEventListener
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0100(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.ActorEventListener");
		return pStaticClass;
	}

};


// Class UAETrigger.FlowNodeBase
// 0x0060 (0x0088 - 0x0028)
class UFlowNodeBase : public UObject
{
public:
	class UFlowNodeBase*                               NextFlowNode;                                             // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FUFlowNodeRepData                           RepData;                                                  // 0x0030(0x0018)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET
	bool                                               IsActive;                                                 // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               DefaltActive;                                             // 0x0061(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0062(0x0006) MISSED OFFSET
	class UTriggersFlowBase*                           CarriedFlow;                                              // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	EFlowNodeType                                      NodeType;                                                 // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	TArray<class UUAETriggerObject*>                   TriggerObjects;                                           // 0x0078(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.FlowNodeBase");
		return pStaticClass;
	}

};


// Class UAETrigger.AndFlowNode
// 0x0050 (0x00D8 - 0x0088)
class UAndFlowNode : public UFlowNodeBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0088(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.AndFlowNode");
		return pStaticClass;
	}

};


// Class UAETrigger.BranchFlowNode
// 0x0000 (0x0088 - 0x0088)
class UBranchFlowNode : public UFlowNodeBase
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.BranchFlowNode");
		return pStaticClass;
	}

};


// Class UAETrigger.TriggerEventWrapperInterface
// 0x0000 (0x0028 - 0x0028)
class UTriggerEventWrapperInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.TriggerEventWrapperInterface");
		return pStaticClass;
	}

};


// Class UAETrigger.LevelEventCenterFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class ULevelEventCenterFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.LevelEventCenterFunctionLibrary");
		return pStaticClass;
	}


	static void QuickFireLevelEventWithTag(const struct FString& EventFuncName, class AActor* PlayerActor, const struct FString& Tag);
	static void QuickFireLevelEvent(const struct FString& EventFuncName, class AActor* PlayerActor, const struct FString& PlayerKey, const struct FString& EventTag);
};


// Class UAETrigger.OrFlowNode
// 0x0000 (0x0088 - 0x0088)
class UOrFlowNode : public UFlowNodeBase
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.OrFlowNode");
		return pStaticClass;
	}

};


// Class UAETrigger.SequenceFlowNode
// 0x0008 (0x0090 - 0x0088)
class USequenceFlowNode : public UFlowNodeBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.SequenceFlowNode");
		return pStaticClass;
	}

};


// Class UAETrigger.SubBranchFlowNode
// 0x0000 (0x0088 - 0x0088)
class USubBranchFlowNode : public UFlowNodeBase
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.SubBranchFlowNode");
		return pStaticClass;
	}

};


// Class UAETrigger.TriggerAction_CallFunction
// 0x0010 (0x00A0 - 0x0090)
class UTriggerAction_CallFunction : public UTriggerAction
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0090(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.TriggerAction_CallFunction");
		return pStaticClass;
	}

};


// Class UAETrigger.TriggerCondition_Comparison
// 0x0000 (0x0058 - 0x0058)
class UTriggerCondition_Comparison : public UTriggerCondition
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.TriggerCondition_Comparison");
		return pStaticClass;
	}

};


// Class UAETrigger.TriggerEvent_Implementable
// 0x0090 (0x0138 - 0x00A8)
class UTriggerEvent_Implementable : public UTriggerEvent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00A8(0x0010) MISSED OFFSET
	TArray<class UProperty*>                           Params;                                                   // 0x00B8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x18];                                      // 0x00C8(0x0018) MISSED OFFSET
	class UFunction*                                   CachedAreaEventFunc;                                      // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<struct FString, struct FEventFuncListenerTrigger> EventFuncListener;                                        // 0x00E8(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.TriggerEvent_Implementable");
		return pStaticClass;
	}

};


// Class UAETrigger.TriggerEventBroadcastInterface
// 0x0000 (0x0028 - 0x0028)
class UTriggerEventBroadcastInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.TriggerEventBroadcastInterface");
		return pStaticClass;
	}

};


// Class UAETrigger.TriggersFlowBase
// 0x0068 (0x0090 - 0x0028)
class UTriggersFlowBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class AUAELevelDirector*                           OwnerLevelDirector;                                       // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<struct FString, class UFlowNodeBase*>         Nodes;                                                    // 0x0038(0x0050) (ZeroConstructor, Transient)
	bool                                               IsRun;                                                    // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0089(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.TriggersFlowBase");
		return pStaticClass;
	}

};


// Class UAETrigger.TriggersFlowMultiNodes
// 0x0000 (0x0090 - 0x0090)
class UTriggersFlowMultiNodes : public UTriggersFlowBase
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.TriggersFlowMultiNodes");
		return pStaticClass;
	}

};


// Class UAETrigger.TriggersFlowTree
// 0x0028 (0x00B8 - 0x0090)
class UTriggersFlowTree : public UTriggersFlowBase
{
public:
	class UFlowNodeBase*                               RootNode;                                                 // 0x0090(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UFlowNodeBase*                               TailNode;                                                 // 0x0098(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UFlowNodeBase*                               CurrentNode;                                              // 0x00A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UFlowNodeBase*                               SubNode;                                                  // 0x00A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.TriggersFlowTree");
		return pStaticClass;
	}

};


// Class UAETrigger.UAELevelDirector_PlayerRepInfo
// 0x0078 (0x0410 - 0x0398)
class AUAELevelDirector_PlayerRepInfo : public AInfo
{
public:
	TArray<struct FTriggerActionRepData>               ActionRepDatas;                                           // 0x0398(0x0010) (Net, ZeroConstructor, Transient)
	uint32_t                                           UniqueId;                                                 // 0x03A8(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03AC(0x0004) MISSED OFFSET
	class AUAELevelDirector*                           RelevantLevelDirector;                                    // 0x03B0(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x58];                                      // 0x03B8(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.UAELevelDirector_PlayerRepInfo");
		return pStaticClass;
	}


	void OnRep_LevelDirector();
	void OnRep_ActionRepDatas();
	void ClientExecuteAction(const struct FTriggerActionRepData& InActionRepData);
};


// Class UAETrigger.UAELevelDirectorBlueprint
// 0x0000 (0x00D8 - 0x00D8)
class UUAELevelDirectorBlueprint : public UBlueprint
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.UAELevelDirectorBlueprint");
		return pStaticClass;
	}

};


// Class UAETrigger.UAELevelEventCenterInterface
// 0x0000 (0x0028 - 0x0028)
class UUAELevelEventCenterInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.UAELevelEventCenterInterface");
		return pStaticClass;
	}

};


// Class UAETrigger.UAETriggerArea_Sphere
// 0x0008 (0x03C0 - 0x03B8)
class AUAETriggerArea_Sphere : public AUAETriggerArea
{
public:
	class USphereComponent*                            SphereCollisionComponent;                                 // 0x03B8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.UAETriggerArea_Sphere");
		return pStaticClass;
	}

};


// Class UAETrigger.UAETriggerArea_Box
// 0x0008 (0x03C0 - 0x03B8)
class AUAETriggerArea_Box : public AUAETriggerArea
{
public:
	class UBoxComponent*                               BoxCollision;                                             // 0x03B8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.UAETriggerArea_Box");
		return pStaticClass;
	}

};


// Class UAETrigger.UAETriggerAreaComponent
// 0x0070 (0x0770 - 0x0700)
class UUAETriggerAreaComponent : public UPrimitiveComponent
{
public:
	float                                              CheckFrequency;                                           // 0x0700(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0704(0x0004) MISSED OFFSET
	TArray<struct FName>                               CanTriggeredTags;                                         // 0x0708(0x0010) (Edit, ZeroConstructor)
	float                                              EnterAreaColdTime;                                        // 0x0718(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x071C(0x0004) MISSED OFFSET
	TArray<struct FTriggerAreaEvent>                   Enter_EventsList;                                         // 0x0720(0x0010) (Edit, ZeroConstructor)
	float                                              LeaveAreaColdTime;                                        // 0x0730(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0734(0x0004) MISSED OFFSET
	TArray<struct FTriggerAreaEvent>                   Leave_EventsList;                                         // 0x0738(0x0010) (Edit, ZeroConstructor)
	struct FColor                                      ShapeColor;                                               // 0x0748(0x0004) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x074C(0x000C) MISSED OFFSET
	TArray<class AActor*>                              CachedEnterAreaActors;                                    // 0x0758(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0768(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.UAETriggerAreaComponent");
		return pStaticClass;
	}

};


// Class UAETrigger.UAETriggerAreaComponent_Box
// 0x0020 (0x0790 - 0x0770)
class UUAETriggerAreaComponent_Box : public UUAETriggerAreaComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0770(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.UAETriggerAreaComponent_Box");
		return pStaticClass;
	}

};


// Class UAETrigger.UAETriggerAreaComponent_Sphere
// 0x0000 (0x0770 - 0x0770)
class UUAETriggerAreaComponent_Sphere : public UUAETriggerAreaComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.UAETriggerAreaComponent_Sphere");
		return pStaticClass;
	}

};


// Class UAETrigger.VariableSet
// 0x00A8 (0x00D0 - 0x0028)
class UVariableSet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET
	struct FVariableSetCachedActors                    DataActors;                                               // 0x0078(0x0058) (Transient)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("Class UAETrigger.VariableSet");
		return pStaticClass;
	}

};


}

