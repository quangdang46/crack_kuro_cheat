#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Basic.hpp"
#include "PUBGM_Engine_classes.hpp"
#include "PUBGM_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum UAETrigger.EUAETriggerActionExecPolicy
enum class EUAETriggerActionExecPolicy : uint8_t
{
	EUAETriggerActionExecPolicy__ExecOnServer = 0,
	EUAETriggerActionExecPolicy__ExecOnFilterClientWithKeep = 1,
	EUAETriggerActionExecPolicy__ExecOnClientWithBroadCast = 2,
	EUAETriggerActionExecPolicy__ExecOnFilterClientsWithBroadCast = 3,
	EUAETriggerActionExecPolicy__EUAETriggerActionExecPolicy_MAX = 4
};


// Enum UAETrigger.EUAETriggerActionState
enum class EUAETriggerActionState : uint8_t
{
	EUAETriggerActionState__Running = 0,
	EUAETriggerActionState__Deactive = 1,
	EUAETriggerActionState__EUAETriggerActionState_MAX = 2
};


// Enum UAETrigger.EFlowTreeType
enum class EFlowTreeType : uint8_t
{
	EFlowTreeType__Sequence        = 0,
	EFlowTreeType__EFlowTreeType_MAX = 1
};


// Enum UAETrigger.EUAETriggerObjectType
enum class EUAETriggerObjectType : uint8_t
{
	EUAETriggerObjectType__Normal  = 0,
	EUAETriggerObjectType__EventDelay = 1,
	EUAETriggerObjectType__EUAETriggerObjectType_MAX = 2
};


// Enum UAETrigger.EUAETriggerRunType
enum class EUAETriggerRunType : uint8_t
{
	EUAETriggerRunType__RunOnDS    = 0,
	EUAETriggerRunType__RunOnClient = 1,
	EUAETriggerRunType__EUAETriggerRunType_MAX = 2
};


// Enum UAETrigger.EFlowNodeType
enum class EFlowNodeType : uint8_t
{
	EFlowNodeType__None            = 0,
	EFlowNodeType__Sequence        = 1,
	EFlowNodeType__Or              = 2,
	EFlowNodeType__And             = 3,
	EFlowNodeType__SubBranch       = 4,
	EFlowNodeType__EFlowNodeType_MAX = 5
};


// Enum UAETrigger.UAETParamType
enum class EUAETParamType : uint8_t
{
	UAETParamType__Invalid         = 0,
	UAETParamType__Int32           = 1,
	UAETParamType__UInt32          = 2,
	UAETParamType__Float           = 3,
	UAETParamType__String          = 4,
	UAETParamType__Boolean         = 5,
	UAETParamType__Vector          = 6,
	UAETParamType__Rotator         = 7,
	UAETParamType__Actor           = 8,
	UAETParamType__Func            = 9,
	UAETParamType__Event           = 10,
	UAETParamType__Compare         = 11,
	UAETParamType__Array           = 12,
	UAETParamType__Object          = 13,
	UAETParamType__KeyMap          = 14,
	UAETParamType__UAETParamType_MAX = 15
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct UAETrigger.LevelEventListenerList
// 0x0050
struct FLevelEventListenerList
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty UAETrigger.LevelEventListenerList.Listeners
};

// ScriptStruct UAETrigger.LevelDirectorInstAction
// 0x0010
struct FLevelDirectorInstAction
{
	int64_t                                            ActionUniqueID;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTriggerAction*                              Action;                                                   // 0x0008(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct UAETrigger.UFlowNodeRepData
// 0x0018
struct FUFlowNodeRepData
{
	struct FString                                     RepData;                                                  // 0x0000(0x0010) (ZeroConstructor)
	int                                                NodeID;                                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct UAETrigger.UAELevelDirectorRepData
// 0x0018
struct FUAELevelDirectorRepData
{
	struct FUFlowNodeRepData                           FlowNodeRepData;                                          // 0x0000(0x0018)
};

// ScriptStruct UAETrigger.TaskRepData
// 0x0018
struct FTaskRepData
{
	struct FString                                     TaskName;                                                 // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                TaskId;                                                   // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct UAETrigger.TriggerParamRepData
// 0x0028
struct FTriggerParamRepData
{
	unsigned char                                      ParamType;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ParamSubType;                                             // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FString                                     ParamName;                                                // 0x0008(0x0010) (ZeroConstructor)
	TArray<unsigned char>                              ParamData;                                                // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct UAETrigger.TriggerEventListenerTrigger
// 0x0008
struct FTriggerEventListenerTrigger
{
	class UUAETriggerObject*                           ListenerTrigger;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UAETrigger.TriggerEventKeySelector
// 0x0008
struct FTriggerEventKeySelector
{
	struct FName                                       SelectedKeyName;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
};

// ScriptStruct UAETrigger.TriggerEventParamKeySelector
// 0x0018
struct FTriggerEventParamKeySelector
{
	struct FName                                       SelectedKeyName;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FString                                     ParamData;                                                // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct UAETrigger.TriggerAreaEvent
// 0x0018
struct FTriggerAreaEvent
{
	struct FTriggerEventKeySelector                    EventKeySelector;                                         // 0x0000(0x0008) (Edit)
	TArray<struct FTriggerEventParamKeySelector>       EventParam;                                               // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct UAETrigger.TriggerClassItem
// 0x0028
struct FTriggerClassItem
{
	struct FString                                     TagName;                                                  // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     ClassFullPath;                                            // 0x0010(0x0010) (ZeroConstructor)
	float                                              RandomRadius;                                             // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct UAETrigger.EventFuncListenerTrigger
// 0x0010
struct FEventFuncListenerTrigger
{
	TArray<class UUAETriggerObject*>                   ListenerTriggers;                                         // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct UAETrigger.TriggerActionRepData
// 0x0030
struct FTriggerActionRepData
{
	int64_t                                            RepID;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            UId;                                                      // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ActionClassName;                                          // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FTriggerParamRepData>                ParamDatas;                                               // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct UAETrigger.VariableSetCachedActors
// 0x0058
struct FVariableSetCachedActors
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
	class AActor*                                      LastAccessActor;                                          // 0x0050(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct UAETrigger.LevelInstanceCondition
// 0x0018
struct FLevelInstanceCondition
{
	struct FString                                     TriggerName;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	class UTriggerCondition*                           Condition;                                                // 0x0010(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct UAETrigger.NodeCreateContent
// 0x0028
struct FNodeCreateContent
{
	struct FString                                     NodeName;                                                 // 0x0000(0x0010) (ZeroConstructor)
	bool                                               DefaultActive;                                            // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	TArray<struct FString>                             TriggerNames;                                             // 0x0018(0x0010) (ZeroConstructor)
};

}

