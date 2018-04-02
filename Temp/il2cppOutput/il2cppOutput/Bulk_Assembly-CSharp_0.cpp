#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// Block
struct Block_t1429612866;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// BlockGenerator
struct BlockGenerator_t3413848165;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3235626157;
// UnityEngine.Sprite
struct Sprite_t280657092;
// System.String
struct String_t;
// System.Exception
struct Exception_t;
// BlockMap
struct BlockMap_t3606162517;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,Block>>
struct Dictionary_2_t3502006824;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1968819495;
// System.Collections.Generic.IEnumerable`1<Block>
struct IEnumerable_1_t409465755;
// System.Collections.Generic.Dictionary`2<System.Int32,Block>
struct Dictionary_2_t318326197;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,Block>>
struct ValueCollection_t923083846;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t3684863813;
// System.Collections.Generic.IEnumerator`1<Block>
struct IEnumerator_1_t1862183334;
// BlockMap/<GetEnumerator>c__Iterator0
struct U3CGetEnumeratorU3Ec__Iterator0_t3958307049;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Block>
struct ValueCollection_t2034370515;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// Board
struct Board_t3688305287;
// System.Collections.Generic.List`1<Block>
struct List_1_t2901687608;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// Controller
struct Controller_t2994601017;
// PrepareArea
struct PrepareArea_t3780924708;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.Object
struct Object_t631007953;
// FeatureManager
struct FeatureManager_t1814774872;
// Feature
struct Feature_t1326242729;
// System.Collections.Generic.IEnumerable`1<Feature>
struct IEnumerable_1_t306095618;
// SoundManager
struct SoundManager_t2102329059;
// System.Collections.Generic.List`1<Feature>
struct List_1_t2798317471;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Vector2Int>>
struct List_1_t2119180731;
// System.Collections.Generic.List`1<UnityEngine.Vector2Int>
struct List_1_t647105989;
// UnityEngine.AudioSource
struct AudioSource_t3935305588;
// Feature[]
struct FeatureU5BU5D_t3255491476;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.Collections.Generic.Dictionary`2<System.Int32,Block>[]
struct Dictionary_2U5BU5D_t3625790424;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t763310475;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,Block>,System.Collections.DictionaryEntry>
struct Transform_1_t3230129268;
// Block[]
struct BlockU5BU5D_t2917470071;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Block,System.Collections.DictionaryEntry>
struct Transform_1_t2521808915;
// System.Collections.Generic.List`1<UnityEngine.Vector2Int>[]
struct List_1U5BU5D_t1779069320;
// UnityEngine.Vector2Int[]
struct Vector2IntU5BU5D_t2878452246;
// System.Void
struct Void_t1185182177;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// UnityEngine.AudioSourceExtension
struct AudioSourceExtension_t3064908834;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.UI.FontData
struct FontData_t746620069;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;

extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern const uint32_t Block_get_DisplayX_m1176785288_MetadataUsageId;
extern const uint32_t Block_set_DisplayX_m168506037_MetadataUsageId;
extern const uint32_t Block_get_DisplayY_m3515437448_MetadataUsageId;
extern const uint32_t Block_set_DisplayY_m4077732622_MetadataUsageId;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* ColorEnum_t4231286491_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t3235626157_m1701782593_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisBlock_t1429612866_m761197682_RuntimeMethod_var;
extern String_t* _stringLiteral1760693709;
extern const uint32_t BlockGenerator_GenerateBlock_m3289662658_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t3502006824_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2160597421_RuntimeMethod_var;
extern const uint32_t BlockMap__ctor_m2506368632_MetadataUsageId;
extern RuntimeClass* IEnumerable_1_t409465755_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t1862183334_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const uint32_t BlockMap__ctor_m2215885815_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t318326197_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m1868254207_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m1738051506_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m1352072047_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m3986497896_RuntimeMethod_var;
extern const uint32_t BlockMap_Add_m3274444037_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m3076939295_RuntimeMethod_var;
extern const uint32_t BlockMap_Get_m1449095388_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_get_Values_m2463211907_RuntimeMethod_var;
extern const RuntimeMethod* ValueCollection_GetEnumerator_m370576241_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2364877895_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Count_m583479041_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m4155731730_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2937772750_RuntimeMethod_var;
extern const uint32_t BlockMap_Count_m1705567556_MetadataUsageId;
extern RuntimeClass* U3CGetEnumeratorU3Ec__Iterator0_t3958307049_il2cpp_TypeInfo_var;
extern const uint32_t BlockMap_GetEnumerator_m2761892506_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_get_Values_m3033119611_RuntimeMethod_var;
extern const RuntimeMethod* ValueCollection_GetEnumerator_m4211823044_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m3688145751_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2645565764_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m3385976116_RuntimeMethod_var;
extern const uint32_t U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m2664898199_MetadataUsageId;
extern const uint32_t U3CGetEnumeratorU3Ec__Iterator0_Dispose_m2786392147_MetadataUsageId;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern const uint32_t U3CGetEnumeratorU3Ec__Iterator0_Reset_m411339085_MetadataUsageId;
extern RuntimeClass* List_1_t2901687608_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m1265523406_RuntimeMethod_var;
extern const uint32_t Board__ctor_m662563078_MetadataUsageId;
extern const RuntimeMethod* List_1_GetEnumerator_m2009197239_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m236452785_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m4263545981_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m3610076621_RuntimeMethod_var;
extern const uint32_t Board_GetBlock_m2505650597_MetadataUsageId;
extern const uint32_t Board_GetBlock_m1911538603_MetadataUsageId;
extern const RuntimeMethod* List_1_Add_m1148009476_RuntimeMethod_var;
extern const uint32_t Board_AddBlock_m1436331697_MetadataUsageId;
extern const uint32_t Board_AddBlock_m3758815230_MetadataUsageId;
extern const RuntimeMethod* List_1_Remove_m1429535524_RuntimeMethod_var;
extern const uint32_t Board_RemoveBlock_m20101843_MetadataUsageId;
extern RuntimeClass* State_t3767615678_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1533147717;
extern const uint32_t Controller_Update_m3034091414_MetadataUsageId;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1222789680;
extern const uint32_t Controller_UpdateGameover_m2451406716_MetadataUsageId;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern const uint32_t Controller_UpdateIdle_m2951809918_MetadataUsageId;
extern const uint32_t Controller_UpdateBegun_m989443283_MetadataUsageId;
extern String_t* _stringLiteral191864396;
extern const uint32_t Controller_UpdateInserted_m898415773_MetadataUsageId;
extern RuntimeClass* BlockMap_t3606162517_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t306095618_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t1758813197_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3645192190;
extern String_t* _stringLiteral4292268766;
extern String_t* _stringLiteral2091341590;
extern const uint32_t Controller_TickSLA_m1419395813_MetadataUsageId;
extern const uint32_t Controller_TickFire_m973793266_MetadataUsageId;
extern const uint32_t Controller_TickBGM_m3021719986_MetadataUsageId;
extern const uint32_t Feature__ctor_m2751144926_MetadataUsageId;
extern const uint32_t Feature_AddBlock_m3236566814_MetadataUsageId;
extern const uint32_t Feature_RefreshPositions_m3281415785_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Count_m1090070239_RuntimeMethod_var;
extern const uint32_t Feature_IsSatisfied_m196257584_MetadataUsageId;
extern const uint32_t Feature_Width_m546656546_MetadataUsageId;
extern const uint32_t Feature_Height_m1463955683_MetadataUsageId;
extern RuntimeClass* List_1_t2798317471_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2119180731_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m1620125414_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m2855100714_RuntimeMethod_var;
extern const uint32_t FeatureManager__ctor_m3039915811_MetadataUsageId;
extern RuntimeClass* List_1_t647105989_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m3805068493_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1745602227_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2785703956_RuntimeMethod_var;
extern const uint32_t FeatureManager_CreatePositionPresets_m987523800_MetadataUsageId;
extern const RuntimeMethod* List_1_Add_m591758470_RuntimeMethod_var;
extern const uint32_t FeatureManager_Add_m4230402021_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Count_m206966912_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m2609147429_RuntimeMethod_var;
extern const RuntimeMethod* List_1_RemoveAt_m1449043771_RuntimeMethod_var;
extern const uint32_t FeatureManager_Pop_m189944667_MetadataUsageId;
extern const uint32_t FeatureManager_Count_m2084563203_MetadataUsageId;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_GetEnumerator_m1581418248_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m1774344585_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m1706640735_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m599349345_RuntimeMethod_var;
extern const uint32_t FeatureManager_RefreshPositions_m428705523_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisFeature_t1326242729_m3959900819_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m1296270072_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m3091303159_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m2600226908_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m454119732_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m876221167_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m876803877_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m79320186_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m3719004310_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m3408976581_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m1930661044_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m361113603_RuntimeMethod_var;
extern String_t* _stringLiteral2986088542;
extern const uint32_t FeatureManager_Generate_m1673119772_MetadataUsageId;
extern RuntimeClass* Vector2Int_t3469998543_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_get_Item_m4221300425_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Remove_m135587606_RuntimeMethod_var;
extern String_t* _stringLiteral2630951462;
extern String_t* _stringLiteral1735168495;
extern const uint32_t FeatureManager_Generate2_m2011031179_MetadataUsageId;
extern String_t* _stringLiteral2904630691;
extern const uint32_t FeatureManager_ExplorePosition_m2411088474_MetadataUsageId;
extern const uint32_t PrepareArea__ctor_m2282897601_MetadataUsageId;
extern const uint32_t PrepareArea_AddBlock_m1617374146_MetadataUsageId;
extern const uint32_t PrepareArea_RemoveBlock_m1909169224_MetadataUsageId;
extern const uint32_t PrepareArea_RefreshPositions_m1537395655_MetadataUsageId;
extern const uint32_t PrepareArea_GetBlock_m2262492526_MetadataUsageId;
extern const uint32_t PrepareArea_GetBlock_m4252222892_MetadataUsageId;
extern const uint32_t PrepareArea_Count_m1980732666_MetadataUsageId;



#ifndef U3CMODULEU3E_T692745543_H
#define U3CMODULEU3E_T692745543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745543 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745543_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef LIST_1_T2798317471_H
#define LIST_1_T2798317471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Feature>
struct  List_1_t2798317471  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	FeatureU5BU5D_t3255491476* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2798317471, ____items_1)); }
	inline FeatureU5BU5D_t3255491476* get__items_1() const { return ____items_1; }
	inline FeatureU5BU5D_t3255491476** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(FeatureU5BU5D_t3255491476* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2798317471, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2798317471, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2798317471_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	FeatureU5BU5D_t3255491476* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2798317471_StaticFields, ___EmptyArray_4)); }
	inline FeatureU5BU5D_t3255491476* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline FeatureU5BU5D_t3255491476** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(FeatureU5BU5D_t3255491476* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2798317471_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef BLOCKMAP_T3606162517_H
#define BLOCKMAP_T3606162517_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BlockMap
struct  BlockMap_t3606162517  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,Block>> BlockMap::blocks
	Dictionary_2_t3502006824 * ___blocks_0;

public:
	inline static int32_t get_offset_of_blocks_0() { return static_cast<int32_t>(offsetof(BlockMap_t3606162517, ___blocks_0)); }
	inline Dictionary_2_t3502006824 * get_blocks_0() const { return ___blocks_0; }
	inline Dictionary_2_t3502006824 ** get_address_of_blocks_0() { return &___blocks_0; }
	inline void set_blocks_0(Dictionary_2_t3502006824 * value)
	{
		___blocks_0 = value;
		Il2CppCodeGenWriteBarrier((&___blocks_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLOCKMAP_T3606162517_H
#ifndef DICTIONARY_2_T3502006824_H
#define DICTIONARY_2_T3502006824_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,Block>>
struct  Dictionary_2_t3502006824  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	Int32U5BU5D_t385246372* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	Dictionary_2U5BU5D_t3625790424* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3502006824, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3502006824, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3502006824, ___keySlots_6)); }
	inline Int32U5BU5D_t385246372* get_keySlots_6() const { return ___keySlots_6; }
	inline Int32U5BU5D_t385246372** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(Int32U5BU5D_t385246372* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3502006824, ___valueSlots_7)); }
	inline Dictionary_2U5BU5D_t3625790424* get_valueSlots_7() const { return ___valueSlots_7; }
	inline Dictionary_2U5BU5D_t3625790424** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(Dictionary_2U5BU5D_t3625790424* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3502006824, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3502006824, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3502006824, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3502006824, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3502006824, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3502006824, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3502006824, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3502006824_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t3230129268 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3502006824_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t3230129268 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t3230129268 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t3230129268 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3502006824_H
#ifndef DICTIONARY_2_T318326197_H
#define DICTIONARY_2_T318326197_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,Block>
struct  Dictionary_2_t318326197  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	Int32U5BU5D_t385246372* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	BlockU5BU5D_t2917470071* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t318326197, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t318326197, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t318326197, ___keySlots_6)); }
	inline Int32U5BU5D_t385246372* get_keySlots_6() const { return ___keySlots_6; }
	inline Int32U5BU5D_t385246372** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(Int32U5BU5D_t385246372* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t318326197, ___valueSlots_7)); }
	inline BlockU5BU5D_t2917470071* get_valueSlots_7() const { return ___valueSlots_7; }
	inline BlockU5BU5D_t2917470071** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(BlockU5BU5D_t2917470071* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t318326197, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t318326197, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t318326197, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t318326197, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t318326197, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t318326197, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t318326197, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t318326197_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t2521808915 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t318326197_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t2521808915 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t2521808915 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t2521808915 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T318326197_H
#ifndef LIST_1_T2901687608_H
#define LIST_1_T2901687608_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Block>
struct  List_1_t2901687608  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BlockU5BU5D_t2917470071* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2901687608, ____items_1)); }
	inline BlockU5BU5D_t2917470071* get__items_1() const { return ____items_1; }
	inline BlockU5BU5D_t2917470071** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BlockU5BU5D_t2917470071* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2901687608, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2901687608, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2901687608_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	BlockU5BU5D_t2917470071* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2901687608_StaticFields, ___EmptyArray_4)); }
	inline BlockU5BU5D_t2917470071* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline BlockU5BU5D_t2917470071** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(BlockU5BU5D_t2917470071* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2901687608_H
#ifndef VALUECOLLECTION_T923083846_H
#define VALUECOLLECTION_T923083846_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,Block>>
struct  ValueCollection_t923083846  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t3502006824 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t923083846, ___dictionary_0)); }
	inline Dictionary_2_t3502006824 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t3502006824 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t3502006824 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUECOLLECTION_T923083846_H
#ifndef VALUECOLLECTION_T2034370515_H
#define VALUECOLLECTION_T2034370515_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Block>
struct  ValueCollection_t2034370515  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t318326197 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t2034370515, ___dictionary_0)); }
	inline Dictionary_2_t318326197 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t318326197 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t318326197 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUECOLLECTION_T2034370515_H
#ifndef LIST_1_T2119180731_H
#define LIST_1_T2119180731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Vector2Int>>
struct  List_1_t2119180731  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	List_1U5BU5D_t1779069320* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2119180731, ____items_1)); }
	inline List_1U5BU5D_t1779069320* get__items_1() const { return ____items_1; }
	inline List_1U5BU5D_t1779069320** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(List_1U5BU5D_t1779069320* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2119180731, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2119180731, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2119180731_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	List_1U5BU5D_t1779069320* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2119180731_StaticFields, ___EmptyArray_4)); }
	inline List_1U5BU5D_t1779069320* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline List_1U5BU5D_t1779069320** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(List_1U5BU5D_t1779069320* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2119180731_H
#ifndef LIST_1_T647105989_H
#define LIST_1_T647105989_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Vector2Int>
struct  List_1_t647105989  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector2IntU5BU5D_t2878452246* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t647105989, ____items_1)); }
	inline Vector2IntU5BU5D_t2878452246* get__items_1() const { return ____items_1; }
	inline Vector2IntU5BU5D_t2878452246** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector2IntU5BU5D_t2878452246* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t647105989, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t647105989, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t647105989_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Vector2IntU5BU5D_t2878452246* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t647105989_StaticFields, ___EmptyArray_4)); }
	inline Vector2IntU5BU5D_t2878452246* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Vector2IntU5BU5D_t2878452246** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Vector2IntU5BU5D_t2878452246* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T647105989_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef ENUMERATOR_T495964189_H
#define ENUMERATOR_T495964189_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<Block>
struct  Enumerator_t495964189 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t2901687608 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Block_t1429612866 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t495964189, ___l_0)); }
	inline List_1_t2901687608 * get_l_0() const { return ___l_0; }
	inline List_1_t2901687608 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t2901687608 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t495964189, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t495964189, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t495964189, ___current_3)); }
	inline Block_t1429612866 * get_current_3() const { return ___current_3; }
	inline Block_t1429612866 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Block_t1429612866 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T495964189_H
#ifndef KEYVALUEPAIR_2_T1604711695_H
#define KEYVALUEPAIR_2_T1604711695_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,Block>>
struct  KeyValuePair_2_t1604711695 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Dictionary_2_t318326197 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1604711695, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1604711695, ___value_1)); }
	inline Dictionary_2_t318326197 * get_value_1() const { return ___value_1; }
	inline Dictionary_2_t318326197 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Dictionary_2_t318326197 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T1604711695_H
#ifndef KEYVALUEPAIR_2_T71524366_H
#define KEYVALUEPAIR_2_T71524366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct  KeyValuePair_2_t71524366 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t71524366, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t71524366, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T71524366_H
#ifndef KEYVALUEPAIR_2_T2715998364_H
#define KEYVALUEPAIR_2_T2715998364_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,Block>
struct  KeyValuePair_2_t2715998364 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Block_t1429612866 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2715998364, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2715998364, ___value_1)); }
	inline Block_t1429612866 * get_value_1() const { return ___value_1; }
	inline Block_t1429612866 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Block_t1429612866 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2715998364_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef ENUMERATOR_T4008424608_H
#define ENUMERATOR_T4008424608_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.Vector2Int>>
struct  Enumerator_t4008424608 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t2119180731 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	List_1_t647105989 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t4008424608, ___l_0)); }
	inline List_1_t2119180731 * get_l_0() const { return ___l_0; }
	inline List_1_t2119180731 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t2119180731 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t4008424608, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t4008424608, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t4008424608, ___current_3)); }
	inline List_1_t647105989 * get_current_3() const { return ___current_3; }
	inline List_1_t647105989 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(List_1_t647105989 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T4008424608_H
#ifndef ENUMERATOR_T392594052_H
#define ENUMERATOR_T392594052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<Feature>
struct  Enumerator_t392594052 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t2798317471 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Feature_t1326242729 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t392594052, ___l_0)); }
	inline List_1_t2798317471 * get_l_0() const { return ___l_0; }
	inline List_1_t2798317471 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t2798317471 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t392594052, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t392594052, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t392594052, ___current_3)); }
	inline Feature_t1326242729 * get_current_3() const { return ___current_3; }
	inline Feature_t1326242729 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Feature_t1326242729 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T392594052_H
#ifndef VECTOR2INT_T3469998543_H
#define VECTOR2INT_T3469998543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2Int
struct  Vector2Int_t3469998543 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_t3469998543, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_t3469998543, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};

struct Vector2Int_t3469998543_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t3469998543  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t3469998543  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t3469998543  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t3469998543  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t3469998543  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t3469998543  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_t3469998543_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_t3469998543  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_t3469998543 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_t3469998543  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_t3469998543_StaticFields, ___s_One_3)); }
	inline Vector2Int_t3469998543  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_t3469998543 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_t3469998543  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_t3469998543_StaticFields, ___s_Up_4)); }
	inline Vector2Int_t3469998543  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_t3469998543 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_t3469998543  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_t3469998543_StaticFields, ___s_Down_5)); }
	inline Vector2Int_t3469998543  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_t3469998543 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_t3469998543  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_t3469998543_StaticFields, ___s_Left_6)); }
	inline Vector2Int_t3469998543  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_t3469998543 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_t3469998543  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_t3469998543_StaticFields, ___s_Right_7)); }
	inline Vector2Int_t3469998543  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_t3469998543 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_t3469998543  value)
	{
		___s_Right_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2INT_T3469998543_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef ENUMERATOR_T2536349866_H
#define ENUMERATOR_T2536349866_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2Int>
struct  Enumerator_t2536349866 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t647105989 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Vector2Int_t3469998543  ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2536349866, ___l_0)); }
	inline List_1_t647105989 * get_l_0() const { return ___l_0; }
	inline List_1_t647105989 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t647105989 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2536349866, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2536349866, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2536349866, ___current_3)); }
	inline Vector2Int_t3469998543  get_current_3() const { return ___current_3; }
	inline Vector2Int_t3469998543 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Vector2Int_t3469998543  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2536349866_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef ENUMERATOR_T1161222303_H
#define ENUMERATOR_T1161222303_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,Block>>
struct  Enumerator_t1161222303 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t3502006824 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t1604711695  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t1161222303, ___dictionary_0)); }
	inline Dictionary_2_t3502006824 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t3502006824 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t3502006824 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t1161222303, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t1161222303, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1161222303, ___current_3)); }
	inline KeyValuePair_2_t1604711695  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t1604711695 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t1604711695  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1161222303_H
#ifndef ENUMERATOR_T3923002270_H
#define ENUMERATOR_T3923002270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct  Enumerator_t3923002270 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t1968819495 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t71524366  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t3923002270, ___dictionary_0)); }
	inline Dictionary_2_t1968819495 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t1968819495 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t1968819495 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t3923002270, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t3923002270, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3923002270, ___current_3)); }
	inline KeyValuePair_2_t71524366  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t71524366 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t71524366  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3923002270_H
#ifndef DIRECTION_T3290393565_H
#define DIRECTION_T3290393565_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Direction
struct  Direction_t3290393565 
{
public:
	// System.Int32 Direction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Direction_t3290393565, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTION_T3290393565_H
#ifndef ENUMERATOR_T2272508972_H
#define ENUMERATOR_T2272508972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Block>
struct  Enumerator_t2272508972 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t318326197 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t2715998364  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t2272508972, ___dictionary_0)); }
	inline Dictionary_2_t318326197 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t318326197 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t318326197 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2272508972, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t2272508972, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2272508972, ___current_3)); }
	inline KeyValuePair_2_t2715998364  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t2715998364 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t2715998364  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2272508972_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef STATE_T3767615678_H
#define STATE_T3767615678_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Controller/State
struct  State_t3767615678 
{
public:
	// System.Int32 Controller/State::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(State_t3767615678, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATE_T3767615678_H
#ifndef COLORENUM_T4231286491_H
#define COLORENUM_T4231286491_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Block/ColorEnum
struct  ColorEnum_t4231286491 
{
public:
	// System.Int32 Block/ColorEnum::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ColorEnum_t4231286491, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORENUM_T4231286491_H
#ifndef ENUMERATOR_T2537713152_H
#define ENUMERATOR_T2537713152_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>
struct  Enumerator_t2537713152 
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::host_enumerator
	Enumerator_t3923002270  ___host_enumerator_0;

public:
	inline static int32_t get_offset_of_host_enumerator_0() { return static_cast<int32_t>(offsetof(Enumerator_t2537713152, ___host_enumerator_0)); }
	inline Enumerator_t3923002270  get_host_enumerator_0() const { return ___host_enumerator_0; }
	inline Enumerator_t3923002270 * get_address_of_host_enumerator_0() { return &___host_enumerator_0; }
	inline void set_host_enumerator_0(Enumerator_t3923002270  value)
	{
		___host_enumerator_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2537713152_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef ENUMERATOR_T887219854_H
#define ENUMERATOR_T887219854_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,Block>
struct  Enumerator_t887219854 
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::host_enumerator
	Enumerator_t2272508972  ___host_enumerator_0;

public:
	inline static int32_t get_offset_of_host_enumerator_0() { return static_cast<int32_t>(offsetof(Enumerator_t887219854, ___host_enumerator_0)); }
	inline Enumerator_t2272508972  get_host_enumerator_0() const { return ___host_enumerator_0; }
	inline Enumerator_t2272508972 * get_address_of_host_enumerator_0() { return &___host_enumerator_0; }
	inline void set_host_enumerator_0(Enumerator_t2272508972  value)
	{
		___host_enumerator_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T887219854_H
#ifndef ENUMERATOR_T4070900481_H
#define ENUMERATOR_T4070900481_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,Block>>
struct  Enumerator_t4070900481 
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::host_enumerator
	Enumerator_t1161222303  ___host_enumerator_0;

public:
	inline static int32_t get_offset_of_host_enumerator_0() { return static_cast<int32_t>(offsetof(Enumerator_t4070900481, ___host_enumerator_0)); }
	inline Enumerator_t1161222303  get_host_enumerator_0() const { return ___host_enumerator_0; }
	inline Enumerator_t1161222303 * get_address_of_host_enumerator_0() { return &___host_enumerator_0; }
	inline void set_host_enumerator_0(Enumerator_t1161222303  value)
	{
		___host_enumerator_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T4070900481_H
#ifndef SPRITE_T280657092_H
#define SPRITE_T280657092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Sprite
struct  Sprite_t280657092  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITE_T280657092_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef U3CGETENUMERATORU3EC__ITERATOR0_T3958307049_H
#define U3CGETENUMERATORU3EC__ITERATOR0_T3958307049_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BlockMap/<GetEnumerator>c__Iterator0
struct  U3CGetEnumeratorU3Ec__Iterator0_t3958307049  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,Block>> BlockMap/<GetEnumerator>c__Iterator0::$locvar0
	Enumerator_t4070900481  ___U24locvar0_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,Block> BlockMap/<GetEnumerator>c__Iterator0::<inner>__1
	Dictionary_2_t318326197 * ___U3CinnerU3E__1_1;
	// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,Block> BlockMap/<GetEnumerator>c__Iterator0::$locvar1
	Enumerator_t887219854  ___U24locvar1_2;
	// Block BlockMap/<GetEnumerator>c__Iterator0::<block>__2
	Block_t1429612866 * ___U3CblockU3E__2_3;
	// BlockMap BlockMap/<GetEnumerator>c__Iterator0::$this
	BlockMap_t3606162517 * ___U24this_4;
	// Block BlockMap/<GetEnumerator>c__Iterator0::$current
	Block_t1429612866 * ___U24current_5;
	// System.Boolean BlockMap/<GetEnumerator>c__Iterator0::$disposing
	bool ___U24disposing_6;
	// System.Int32 BlockMap/<GetEnumerator>c__Iterator0::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_U24locvar0_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator0_t3958307049, ___U24locvar0_0)); }
	inline Enumerator_t4070900481  get_U24locvar0_0() const { return ___U24locvar0_0; }
	inline Enumerator_t4070900481 * get_address_of_U24locvar0_0() { return &___U24locvar0_0; }
	inline void set_U24locvar0_0(Enumerator_t4070900481  value)
	{
		___U24locvar0_0 = value;
	}

	inline static int32_t get_offset_of_U3CinnerU3E__1_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator0_t3958307049, ___U3CinnerU3E__1_1)); }
	inline Dictionary_2_t318326197 * get_U3CinnerU3E__1_1() const { return ___U3CinnerU3E__1_1; }
	inline Dictionary_2_t318326197 ** get_address_of_U3CinnerU3E__1_1() { return &___U3CinnerU3E__1_1; }
	inline void set_U3CinnerU3E__1_1(Dictionary_2_t318326197 * value)
	{
		___U3CinnerU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CinnerU3E__1_1), value);
	}

	inline static int32_t get_offset_of_U24locvar1_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator0_t3958307049, ___U24locvar1_2)); }
	inline Enumerator_t887219854  get_U24locvar1_2() const { return ___U24locvar1_2; }
	inline Enumerator_t887219854 * get_address_of_U24locvar1_2() { return &___U24locvar1_2; }
	inline void set_U24locvar1_2(Enumerator_t887219854  value)
	{
		___U24locvar1_2 = value;
	}

	inline static int32_t get_offset_of_U3CblockU3E__2_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator0_t3958307049, ___U3CblockU3E__2_3)); }
	inline Block_t1429612866 * get_U3CblockU3E__2_3() const { return ___U3CblockU3E__2_3; }
	inline Block_t1429612866 ** get_address_of_U3CblockU3E__2_3() { return &___U3CblockU3E__2_3; }
	inline void set_U3CblockU3E__2_3(Block_t1429612866 * value)
	{
		___U3CblockU3E__2_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CblockU3E__2_3), value);
	}

	inline static int32_t get_offset_of_U24this_4() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator0_t3958307049, ___U24this_4)); }
	inline BlockMap_t3606162517 * get_U24this_4() const { return ___U24this_4; }
	inline BlockMap_t3606162517 ** get_address_of_U24this_4() { return &___U24this_4; }
	inline void set_U24this_4(BlockMap_t3606162517 * value)
	{
		___U24this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_4), value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator0_t3958307049, ___U24current_5)); }
	inline Block_t1429612866 * get_U24current_5() const { return ___U24current_5; }
	inline Block_t1429612866 ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(Block_t1429612866 * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator0_t3958307049, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator0_t3958307049, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETENUMERATORU3EC__ITERATOR0_T3958307049_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t190067161 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t190067161 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t190067161 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t190067161 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t190067161 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t190067161 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef SPRITERENDERER_T3235626157_H
#define SPRITERENDERER_T3235626157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpriteRenderer
struct  SpriteRenderer_t3235626157  : public Renderer_t2627027031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITERENDERER_T3235626157_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef AUDIOSOURCE_T3935305588_H
#define AUDIOSOURCE_T3935305588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSource
struct  AudioSource_t3935305588  : public Behaviour_t1437897464
{
public:
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::spatializerExtension
	AudioSourceExtension_t3064908834 * ___spatializerExtension_2;
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::ambisonicExtension
	AudioSourceExtension_t3064908834 * ___ambisonicExtension_3;

public:
	inline static int32_t get_offset_of_spatializerExtension_2() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___spatializerExtension_2)); }
	inline AudioSourceExtension_t3064908834 * get_spatializerExtension_2() const { return ___spatializerExtension_2; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_spatializerExtension_2() { return &___spatializerExtension_2; }
	inline void set_spatializerExtension_2(AudioSourceExtension_t3064908834 * value)
	{
		___spatializerExtension_2 = value;
		Il2CppCodeGenWriteBarrier((&___spatializerExtension_2), value);
	}

	inline static int32_t get_offset_of_ambisonicExtension_3() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___ambisonicExtension_3)); }
	inline AudioSourceExtension_t3064908834 * get_ambisonicExtension_3() const { return ___ambisonicExtension_3; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_ambisonicExtension_3() { return &___ambisonicExtension_3; }
	inline void set_ambisonicExtension_3(AudioSourceExtension_t3064908834 * value)
	{
		___ambisonicExtension_3 = value;
		Il2CppCodeGenWriteBarrier((&___ambisonicExtension_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCE_T3935305588_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef BLOCK_T1429612866_H
#define BLOCK_T1429612866_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Block
struct  Block_t1429612866  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject Block::fire
	GameObject_t1113636619 * ___fire_2;
	// UnityEngine.GameObject Block::warning
	GameObject_t1113636619 * ___warning_3;
	// Block/ColorEnum Block::<Color>k__BackingField
	int32_t ___U3CColorU3Ek__BackingField_4;
	// System.Int32 Block::_x
	int32_t ____x_5;
	// System.Int32 Block::_y
	int32_t ____y_6;
	// UnityEngine.Vector3 Block::_displayPosition
	Vector3_t3722313464  ____displayPosition_7;
	// System.Int32 Block::<NoFireCount>k__BackingField
	int32_t ___U3CNoFireCountU3Ek__BackingField_8;
	// System.Int32 Block::<OnWarningCount>k__BackingField
	int32_t ___U3COnWarningCountU3Ek__BackingField_9;
	// System.Boolean Block::_onFire
	bool ____onFire_10;
	// System.Boolean Block::_onWarning
	bool ____onWarning_11;

public:
	inline static int32_t get_offset_of_fire_2() { return static_cast<int32_t>(offsetof(Block_t1429612866, ___fire_2)); }
	inline GameObject_t1113636619 * get_fire_2() const { return ___fire_2; }
	inline GameObject_t1113636619 ** get_address_of_fire_2() { return &___fire_2; }
	inline void set_fire_2(GameObject_t1113636619 * value)
	{
		___fire_2 = value;
		Il2CppCodeGenWriteBarrier((&___fire_2), value);
	}

	inline static int32_t get_offset_of_warning_3() { return static_cast<int32_t>(offsetof(Block_t1429612866, ___warning_3)); }
	inline GameObject_t1113636619 * get_warning_3() const { return ___warning_3; }
	inline GameObject_t1113636619 ** get_address_of_warning_3() { return &___warning_3; }
	inline void set_warning_3(GameObject_t1113636619 * value)
	{
		___warning_3 = value;
		Il2CppCodeGenWriteBarrier((&___warning_3), value);
	}

	inline static int32_t get_offset_of_U3CColorU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Block_t1429612866, ___U3CColorU3Ek__BackingField_4)); }
	inline int32_t get_U3CColorU3Ek__BackingField_4() const { return ___U3CColorU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CColorU3Ek__BackingField_4() { return &___U3CColorU3Ek__BackingField_4; }
	inline void set_U3CColorU3Ek__BackingField_4(int32_t value)
	{
		___U3CColorU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of__x_5() { return static_cast<int32_t>(offsetof(Block_t1429612866, ____x_5)); }
	inline int32_t get__x_5() const { return ____x_5; }
	inline int32_t* get_address_of__x_5() { return &____x_5; }
	inline void set__x_5(int32_t value)
	{
		____x_5 = value;
	}

	inline static int32_t get_offset_of__y_6() { return static_cast<int32_t>(offsetof(Block_t1429612866, ____y_6)); }
	inline int32_t get__y_6() const { return ____y_6; }
	inline int32_t* get_address_of__y_6() { return &____y_6; }
	inline void set__y_6(int32_t value)
	{
		____y_6 = value;
	}

	inline static int32_t get_offset_of__displayPosition_7() { return static_cast<int32_t>(offsetof(Block_t1429612866, ____displayPosition_7)); }
	inline Vector3_t3722313464  get__displayPosition_7() const { return ____displayPosition_7; }
	inline Vector3_t3722313464 * get_address_of__displayPosition_7() { return &____displayPosition_7; }
	inline void set__displayPosition_7(Vector3_t3722313464  value)
	{
		____displayPosition_7 = value;
	}

	inline static int32_t get_offset_of_U3CNoFireCountU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Block_t1429612866, ___U3CNoFireCountU3Ek__BackingField_8)); }
	inline int32_t get_U3CNoFireCountU3Ek__BackingField_8() const { return ___U3CNoFireCountU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CNoFireCountU3Ek__BackingField_8() { return &___U3CNoFireCountU3Ek__BackingField_8; }
	inline void set_U3CNoFireCountU3Ek__BackingField_8(int32_t value)
	{
		___U3CNoFireCountU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3COnWarningCountU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(Block_t1429612866, ___U3COnWarningCountU3Ek__BackingField_9)); }
	inline int32_t get_U3COnWarningCountU3Ek__BackingField_9() const { return ___U3COnWarningCountU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3COnWarningCountU3Ek__BackingField_9() { return &___U3COnWarningCountU3Ek__BackingField_9; }
	inline void set_U3COnWarningCountU3Ek__BackingField_9(int32_t value)
	{
		___U3COnWarningCountU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of__onFire_10() { return static_cast<int32_t>(offsetof(Block_t1429612866, ____onFire_10)); }
	inline bool get__onFire_10() const { return ____onFire_10; }
	inline bool* get_address_of__onFire_10() { return &____onFire_10; }
	inline void set__onFire_10(bool value)
	{
		____onFire_10 = value;
	}

	inline static int32_t get_offset_of__onWarning_11() { return static_cast<int32_t>(offsetof(Block_t1429612866, ____onWarning_11)); }
	inline bool get__onWarning_11() const { return ____onWarning_11; }
	inline bool* get_address_of__onWarning_11() { return &____onWarning_11; }
	inline void set__onWarning_11(bool value)
	{
		____onWarning_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLOCK_T1429612866_H
#ifndef CONTROLLER_T2994601017_H
#define CONTROLLER_T2994601017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Controller
struct  Controller_t2994601017  : public MonoBehaviour_t3962482529
{
public:
	// Board Controller::board
	Board_t3688305287 * ___board_2;
	// PrepareArea Controller::prepareArea
	PrepareArea_t3780924708 * ___prepareArea_3;
	// BlockGenerator Controller::blockGenerator
	BlockGenerator_t3413848165 * ___blockGenerator_4;
	// FeatureManager Controller::featureManager
	FeatureManager_t1814774872 * ___featureManager_5;
	// UnityEngine.UI.Text Controller::slaPercentText
	Text_t1901882714 * ___slaPercentText_6;
	// UnityEngine.UI.Text Controller::moneyText
	Text_t1901882714 * ___moneyText_7;
	// UnityEngine.GameObject Controller::gameoverOverlay
	GameObject_t1113636619 * ___gameoverOverlay_8;
	// UnityEngine.GameObject Controller::gameoverText
	GameObject_t1113636619 * ___gameoverText_9;
	// SoundManager Controller::soundManager
	SoundManager_t2102329059 * ___soundManager_10;
	// Controller/State Controller::state
	int32_t ___state_11;
	// Block Controller::begunBlock
	Block_t1429612866 * ___begunBlock_12;
	// Block Controller::insertedBlock
	Block_t1429612866 * ___insertedBlock_13;
	// Direction Controller::insertedDirection
	int32_t ___insertedDirection_14;
	// System.Int32 Controller::startingPrepareBlocks
	int32_t ___startingPrepareBlocks_15;
	// System.Int32 Controller::maxPrepareBlocks
	int32_t ___maxPrepareBlocks_16;
	// System.Int32 Controller::prepareBlockInterval
	int32_t ___prepareBlockInterval_17;
	// System.Int32 Controller::prepareBlockCount
	int32_t ___prepareBlockCount_18;
	// System.Int32 Controller::startingFeature
	int32_t ___startingFeature_19;
	// System.Int32 Controller::minFeatureGenerationSize
	int32_t ___minFeatureGenerationSize_20;
	// System.Int32 Controller::maxFeatureGenerationSize
	int32_t ___maxFeatureGenerationSize_21;
	// System.Int32 Controller::maxFeatureSize
	int32_t ___maxFeatureSize_22;
	// System.Int32 Controller::featureInterval
	int32_t ___featureInterval_23;
	// System.Int32 Controller::featureIntervalCount
	int32_t ___featureIntervalCount_24;
	// System.Int32 Controller::sla
	int32_t ___sla_27;
	// System.Int32 Controller::slaRecoverSpeed
	int32_t ___slaRecoverSpeed_28;
	// System.Int32 Controller::money
	int32_t ___money_30;
	// System.Single Controller::timeCount
	float ___timeCount_34;

public:
	inline static int32_t get_offset_of_board_2() { return static_cast<int32_t>(offsetof(Controller_t2994601017, ___board_2)); }
	inline Board_t3688305287 * get_board_2() const { return ___board_2; }
	inline Board_t3688305287 ** get_address_of_board_2() { return &___board_2; }
	inline void set_board_2(Board_t3688305287 * value)
	{
		___board_2 = value;
		Il2CppCodeGenWriteBarrier((&___board_2), value);
	}

	inline static int32_t get_offset_of_prepareArea_3() { return static_cast<int32_t>(offsetof(Controller_t2994601017, ___prepareArea_3)); }
	inline PrepareArea_t3780924708 * get_prepareArea_3() const { return ___prepareArea_3; }
	inline PrepareArea_t3780924708 ** get_address_of_prepareArea_3() { return &___prepareArea_3; }
	inline void set_prepareArea_3(PrepareArea_t3780924708 * value)
	{
		___prepareArea_3 = value;
		Il2CppCodeGenWriteBarrier((&___prepareArea_3), value);
	}

	inline static int32_t get_offset_of_blockGenerator_4() { return static_cast<int32_t>(offsetof(Controller_t2994601017, ___blockGenerator_4)); }
	inline BlockGenerator_t3413848165 * get_blockGenerator_4() const { return ___blockGenerator_4; }
	inline BlockGenerator_t3413848165 ** get_address_of_blockGenerator_4() { return &___blockGenerator_4; }
	inline void set_blockGenerator_4(BlockGenerator_t3413848165 * value)
	{
		___blockGenerator_4 = value;
		Il2CppCodeGenWriteBarrier((&___blockGenerator_4), value);
	}

	inline static int32_t get_offset_of_featureManager_5() { return static_cast<int32_t>(offsetof(Controller_t2994601017, ___featureManager_5)); }
	inline FeatureManager_t1814774872 * get_featureManager_5() const { return ___featureManager_5; }
	inline FeatureManager_t1814774872 ** get_address_of_featureManager_5() { return &___featureManager_5; }
	inline void set_featureManager_5(FeatureManager_t1814774872 * value)
	{
		___featureManager_5 = value;
		Il2CppCodeGenWriteBarrier((&___featureManager_5), value);
	}

	inline static int32_t get_offset_of_slaPercentText_6() { return static_cast<int32_t>(offsetof(Controller_t2994601017, ___slaPercentText_6)); }
	inline Text_t1901882714 * get_slaPercentText_6() const { return ___slaPercentText_6; }
	inline Text_t1901882714 ** get_address_of_slaPercentText_6() { return &___slaPercentText_6; }
	inline void set_slaPercentText_6(Text_t1901882714 * value)
	{
		___slaPercentText_6 = value;
		Il2CppCodeGenWriteBarrier((&___slaPercentText_6), value);
	}

	inline static int32_t get_offset_of_moneyText_7() { return static_cast<int32_t>(offsetof(Controller_t2994601017, ___moneyText_7)); }
	inline Text_t1901882714 * get_moneyText_7() const { return ___moneyText_7; }
	inline Text_t1901882714 ** get_address_of_moneyText_7() { return &___moneyText_7; }
	inline void set_moneyText_7(Text_t1901882714 * value)
	{
		___moneyText_7 = value;
		Il2CppCodeGenWriteBarrier((&___moneyText_7), value);
	}

	inline static int32_t get_offset_of_gameoverOverlay_8() { return static_cast<int32_t>(offsetof(Controller_t2994601017, ___gameoverOverlay_8)); }
	inline GameObject_t1113636619 * get_gameoverOverlay_8() const { return ___gameoverOverlay_8; }
	inline GameObject_t1113636619 ** get_address_of_gameoverOverlay_8() { return &___gameoverOverlay_8; }
	inline void set_gameoverOverlay_8(GameObject_t1113636619 * value)
	{
		___gameoverOverlay_8 = value;
		Il2CppCodeGenWriteBarrier((&___gameoverOverlay_8), value);
	}

	inline static int32_t get_offset_of_gameoverText_9() { return static_cast<int32_t>(offsetof(Controller_t2994601017, ___gameoverText_9)); }
	inline GameObject_t1113636619 * get_gameoverText_9() const { return ___gameoverText_9; }
	inline GameObject_t1113636619 ** get_address_of_gameoverText_9() { return &___gameoverText_9; }
	inline void set_gameoverText_9(GameObject_t1113636619 * value)
	{
		___gameoverText_9 = value;
		Il2CppCodeGenWriteBarrier((&___gameoverText_9), value);
	}

	inline static int32_t get_offset_of_soundManager_10() { return static_cast<int32_t>(offsetof(Controller_t2994601017, ___soundManager_10)); }
	inline SoundManager_t2102329059 * get_soundManager_10() const { return ___soundManager_10; }
	inline SoundManager_t2102329059 ** get_address_of_soundManager_10() { return &___soundManager_10; }
	inline void set_soundManager_10(SoundManager_t2102329059 * value)
	{
		___soundManager_10 = value;
		Il2CppCodeGenWriteBarrier((&___soundManager_10), value);
	}

	inline static int32_t get_offset_of_state_11() { return static_cast<int32_t>(offsetof(Controller_t2994601017, ___state_11)); }
	inline int32_t get_state_11() const { return ___state_11; }
	inline int32_t* get_address_of_state_11() { return &___state_11; }
	inline void set_state_11(int32_t value)
	{
		___state_11 = value;
	}

	inline static int32_t get_offset_of_begunBlock_12() { return static_cast<int32_t>(offsetof(Controller_t2994601017, ___begunBlock_12)); }
	inline Block_t1429612866 * get_begunBlock_12() const { return ___begunBlock_12; }
	inline Block_t1429612866 ** get_address_of_begunBlock_12() { return &___begunBlock_12; }
	inline void set_begunBlock_12(Block_t1429612866 * value)
	{
		___begunBlock_12 = value;
		Il2CppCodeGenWriteBarrier((&___begunBlock_12), value);
	}

	inline static int32_t get_offset_of_insertedBlock_13() { return static_cast<int32_t>(offsetof(Controller_t2994601017, ___insertedBlock_13)); }
	inline Block_t1429612866 * get_insertedBlock_13() const { return ___insertedBlock_13; }
	inline Block_t1429612866 ** get_address_of_insertedBlock_13() { return &___insertedBlock_13; }
	inline void set_insertedBlock_13(Block_t1429612866 * value)
	{
		___insertedBlock_13 = value;
		Il2CppCodeGenWriteBarrier((&___insertedBlock_13), value);
	}

	inline static int32_t get_offset_of_insertedDirection_14() { return static_cast<int32_t>(offsetof(Controller_t2994601017, ___insertedDirection_14)); }
	inline int32_t get_insertedDirection_14() const { return ___insertedDirection_14; }
	inline int32_t* get_address_of_insertedDirection_14() { return &___insertedDirection_14; }
	inline void set_insertedDirection_14(int32_t value)
	{
		___insertedDirection_14 = value;
	}

	inline static int32_t get_offset_of_startingPrepareBlocks_15() { return static_cast<int32_t>(offsetof(Controller_t2994601017, ___startingPrepareBlocks_15)); }
	inline int32_t get_startingPrepareBlocks_15() const { return ___startingPrepareBlocks_15; }
	inline int32_t* get_address_of_startingPrepareBlocks_15() { return &___startingPrepareBlocks_15; }
	inline void set_startingPrepareBlocks_15(int32_t value)
	{
		___startingPrepareBlocks_15 = value;
	}

	inline static int32_t get_offset_of_maxPrepareBlocks_16() { return static_cast<int32_t>(offsetof(Controller_t2994601017, ___maxPrepareBlocks_16)); }
	inline int32_t get_maxPrepareBlocks_16() const { return ___maxPrepareBlocks_16; }
	inline int32_t* get_address_of_maxPrepareBlocks_16() { return &___maxPrepareBlocks_16; }
	inline void set_maxPrepareBlocks_16(int32_t value)
	{
		___maxPrepareBlocks_16 = value;
	}

	inline static int32_t get_offset_of_prepareBlockInterval_17() { return static_cast<int32_t>(offsetof(Controller_t2994601017, ___prepareBlockInterval_17)); }
	inline int32_t get_prepareBlockInterval_17() const { return ___prepareBlockInterval_17; }
	inline int32_t* get_address_of_prepareBlockInterval_17() { return &___prepareBlockInterval_17; }
	inline void set_prepareBlockInterval_17(int32_t value)
	{
		___prepareBlockInterval_17 = value;
	}

	inline static int32_t get_offset_of_prepareBlockCount_18() { return static_cast<int32_t>(offsetof(Controller_t2994601017, ___prepareBlockCount_18)); }
	inline int32_t get_prepareBlockCount_18() const { return ___prepareBlockCount_18; }
	inline int32_t* get_address_of_prepareBlockCount_18() { return &___prepareBlockCount_18; }
	inline void set_prepareBlockCount_18(int32_t value)
	{
		___prepareBlockCount_18 = value;
	}

	inline static int32_t get_offset_of_startingFeature_19() { return static_cast<int32_t>(offsetof(Controller_t2994601017, ___startingFeature_19)); }
	inline int32_t get_startingFeature_19() const { return ___startingFeature_19; }
	inline int32_t* get_address_of_startingFeature_19() { return &___startingFeature_19; }
	inline void set_startingFeature_19(int32_t value)
	{
		___startingFeature_19 = value;
	}

	inline static int32_t get_offset_of_minFeatureGenerationSize_20() { return static_cast<int32_t>(offsetof(Controller_t2994601017, ___minFeatureGenerationSize_20)); }
	inline int32_t get_minFeatureGenerationSize_20() const { return ___minFeatureGenerationSize_20; }
	inline int32_t* get_address_of_minFeatureGenerationSize_20() { return &___minFeatureGenerationSize_20; }
	inline void set_minFeatureGenerationSize_20(int32_t value)
	{
		___minFeatureGenerationSize_20 = value;
	}

	inline static int32_t get_offset_of_maxFeatureGenerationSize_21() { return static_cast<int32_t>(offsetof(Controller_t2994601017, ___maxFeatureGenerationSize_21)); }
	inline int32_t get_maxFeatureGenerationSize_21() const { return ___maxFeatureGenerationSize_21; }
	inline int32_t* get_address_of_maxFeatureGenerationSize_21() { return &___maxFeatureGenerationSize_21; }
	inline void set_maxFeatureGenerationSize_21(int32_t value)
	{
		___maxFeatureGenerationSize_21 = value;
	}

	inline static int32_t get_offset_of_maxFeatureSize_22() { return static_cast<int32_t>(offsetof(Controller_t2994601017, ___maxFeatureSize_22)); }
	inline int32_t get_maxFeatureSize_22() const { return ___maxFeatureSize_22; }
	inline int32_t* get_address_of_maxFeatureSize_22() { return &___maxFeatureSize_22; }
	inline void set_maxFeatureSize_22(int32_t value)
	{
		___maxFeatureSize_22 = value;
	}

	inline static int32_t get_offset_of_featureInterval_23() { return static_cast<int32_t>(offsetof(Controller_t2994601017, ___featureInterval_23)); }
	inline int32_t get_featureInterval_23() const { return ___featureInterval_23; }
	inline int32_t* get_address_of_featureInterval_23() { return &___featureInterval_23; }
	inline void set_featureInterval_23(int32_t value)
	{
		___featureInterval_23 = value;
	}

	inline static int32_t get_offset_of_featureIntervalCount_24() { return static_cast<int32_t>(offsetof(Controller_t2994601017, ___featureIntervalCount_24)); }
	inline int32_t get_featureIntervalCount_24() const { return ___featureIntervalCount_24; }
	inline int32_t* get_address_of_featureIntervalCount_24() { return &___featureIntervalCount_24; }
	inline void set_featureIntervalCount_24(int32_t value)
	{
		___featureIntervalCount_24 = value;
	}

	inline static int32_t get_offset_of_sla_27() { return static_cast<int32_t>(offsetof(Controller_t2994601017, ___sla_27)); }
	inline int32_t get_sla_27() const { return ___sla_27; }
	inline int32_t* get_address_of_sla_27() { return &___sla_27; }
	inline void set_sla_27(int32_t value)
	{
		___sla_27 = value;
	}

	inline static int32_t get_offset_of_slaRecoverSpeed_28() { return static_cast<int32_t>(offsetof(Controller_t2994601017, ___slaRecoverSpeed_28)); }
	inline int32_t get_slaRecoverSpeed_28() const { return ___slaRecoverSpeed_28; }
	inline int32_t* get_address_of_slaRecoverSpeed_28() { return &___slaRecoverSpeed_28; }
	inline void set_slaRecoverSpeed_28(int32_t value)
	{
		___slaRecoverSpeed_28 = value;
	}

	inline static int32_t get_offset_of_money_30() { return static_cast<int32_t>(offsetof(Controller_t2994601017, ___money_30)); }
	inline int32_t get_money_30() const { return ___money_30; }
	inline int32_t* get_address_of_money_30() { return &___money_30; }
	inline void set_money_30(int32_t value)
	{
		___money_30 = value;
	}

	inline static int32_t get_offset_of_timeCount_34() { return static_cast<int32_t>(offsetof(Controller_t2994601017, ___timeCount_34)); }
	inline float get_timeCount_34() const { return ___timeCount_34; }
	inline float* get_address_of_timeCount_34() { return &___timeCount_34; }
	inline void set_timeCount_34(float value)
	{
		___timeCount_34 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTROLLER_T2994601017_H
#ifndef BLOCKGENERATOR_T3413848165_H
#define BLOCKGENERATOR_T3413848165_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BlockGenerator
struct  BlockGenerator_t3413848165  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject BlockGenerator::blockPrefab
	GameObject_t1113636619 * ___blockPrefab_2;
	// UnityEngine.Sprite BlockGenerator::blackSprite
	Sprite_t280657092 * ___blackSprite_3;
	// UnityEngine.Sprite BlockGenerator::whiteSprite
	Sprite_t280657092 * ___whiteSprite_4;

public:
	inline static int32_t get_offset_of_blockPrefab_2() { return static_cast<int32_t>(offsetof(BlockGenerator_t3413848165, ___blockPrefab_2)); }
	inline GameObject_t1113636619 * get_blockPrefab_2() const { return ___blockPrefab_2; }
	inline GameObject_t1113636619 ** get_address_of_blockPrefab_2() { return &___blockPrefab_2; }
	inline void set_blockPrefab_2(GameObject_t1113636619 * value)
	{
		___blockPrefab_2 = value;
		Il2CppCodeGenWriteBarrier((&___blockPrefab_2), value);
	}

	inline static int32_t get_offset_of_blackSprite_3() { return static_cast<int32_t>(offsetof(BlockGenerator_t3413848165, ___blackSprite_3)); }
	inline Sprite_t280657092 * get_blackSprite_3() const { return ___blackSprite_3; }
	inline Sprite_t280657092 ** get_address_of_blackSprite_3() { return &___blackSprite_3; }
	inline void set_blackSprite_3(Sprite_t280657092 * value)
	{
		___blackSprite_3 = value;
		Il2CppCodeGenWriteBarrier((&___blackSprite_3), value);
	}

	inline static int32_t get_offset_of_whiteSprite_4() { return static_cast<int32_t>(offsetof(BlockGenerator_t3413848165, ___whiteSprite_4)); }
	inline Sprite_t280657092 * get_whiteSprite_4() const { return ___whiteSprite_4; }
	inline Sprite_t280657092 ** get_address_of_whiteSprite_4() { return &___whiteSprite_4; }
	inline void set_whiteSprite_4(Sprite_t280657092 * value)
	{
		___whiteSprite_4 = value;
		Il2CppCodeGenWriteBarrier((&___whiteSprite_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLOCKGENERATOR_T3413848165_H
#ifndef SOUNDMANAGER_T2102329059_H
#define SOUNDMANAGER_T2102329059_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SoundManager
struct  SoundManager_t2102329059  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.AudioSource SoundManager::onFire
	AudioSource_t3935305588 * ___onFire_2;

public:
	inline static int32_t get_offset_of_onFire_2() { return static_cast<int32_t>(offsetof(SoundManager_t2102329059, ___onFire_2)); }
	inline AudioSource_t3935305588 * get_onFire_2() const { return ___onFire_2; }
	inline AudioSource_t3935305588 ** get_address_of_onFire_2() { return &___onFire_2; }
	inline void set_onFire_2(AudioSource_t3935305588 * value)
	{
		___onFire_2 = value;
		Il2CppCodeGenWriteBarrier((&___onFire_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOUNDMANAGER_T2102329059_H
#ifndef BOARD_T3688305287_H
#define BOARD_T3688305287_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Board
struct  Board_t3688305287  : public MonoBehaviour_t3962482529
{
public:
	// System.Collections.Generic.List`1<Block> Board::blocks
	List_1_t2901687608 * ___blocks_2;

public:
	inline static int32_t get_offset_of_blocks_2() { return static_cast<int32_t>(offsetof(Board_t3688305287, ___blocks_2)); }
	inline List_1_t2901687608 * get_blocks_2() const { return ___blocks_2; }
	inline List_1_t2901687608 ** get_address_of_blocks_2() { return &___blocks_2; }
	inline void set_blocks_2(List_1_t2901687608 * value)
	{
		___blocks_2 = value;
		Il2CppCodeGenWriteBarrier((&___blocks_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOARD_T3688305287_H
#ifndef FEATUREMANAGER_T1814774872_H
#define FEATUREMANAGER_T1814774872_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FeatureManager
struct  FeatureManager_t1814774872  : public MonoBehaviour_t3962482529
{
public:
	// BlockGenerator FeatureManager::blockGenerator
	BlockGenerator_t3413848165 * ___blockGenerator_2;
	// Feature FeatureManager::featurePrefab
	Feature_t1326242729 * ___featurePrefab_3;
	// System.Collections.Generic.List`1<Feature> FeatureManager::features
	List_1_t2798317471 * ___features_4;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Vector2Int>> FeatureManager::positionPresets
	List_1_t2119180731 * ___positionPresets_5;
	// System.Single FeatureManager::padding
	float ___padding_6;

public:
	inline static int32_t get_offset_of_blockGenerator_2() { return static_cast<int32_t>(offsetof(FeatureManager_t1814774872, ___blockGenerator_2)); }
	inline BlockGenerator_t3413848165 * get_blockGenerator_2() const { return ___blockGenerator_2; }
	inline BlockGenerator_t3413848165 ** get_address_of_blockGenerator_2() { return &___blockGenerator_2; }
	inline void set_blockGenerator_2(BlockGenerator_t3413848165 * value)
	{
		___blockGenerator_2 = value;
		Il2CppCodeGenWriteBarrier((&___blockGenerator_2), value);
	}

	inline static int32_t get_offset_of_featurePrefab_3() { return static_cast<int32_t>(offsetof(FeatureManager_t1814774872, ___featurePrefab_3)); }
	inline Feature_t1326242729 * get_featurePrefab_3() const { return ___featurePrefab_3; }
	inline Feature_t1326242729 ** get_address_of_featurePrefab_3() { return &___featurePrefab_3; }
	inline void set_featurePrefab_3(Feature_t1326242729 * value)
	{
		___featurePrefab_3 = value;
		Il2CppCodeGenWriteBarrier((&___featurePrefab_3), value);
	}

	inline static int32_t get_offset_of_features_4() { return static_cast<int32_t>(offsetof(FeatureManager_t1814774872, ___features_4)); }
	inline List_1_t2798317471 * get_features_4() const { return ___features_4; }
	inline List_1_t2798317471 ** get_address_of_features_4() { return &___features_4; }
	inline void set_features_4(List_1_t2798317471 * value)
	{
		___features_4 = value;
		Il2CppCodeGenWriteBarrier((&___features_4), value);
	}

	inline static int32_t get_offset_of_positionPresets_5() { return static_cast<int32_t>(offsetof(FeatureManager_t1814774872, ___positionPresets_5)); }
	inline List_1_t2119180731 * get_positionPresets_5() const { return ___positionPresets_5; }
	inline List_1_t2119180731 ** get_address_of_positionPresets_5() { return &___positionPresets_5; }
	inline void set_positionPresets_5(List_1_t2119180731 * value)
	{
		___positionPresets_5 = value;
		Il2CppCodeGenWriteBarrier((&___positionPresets_5), value);
	}

	inline static int32_t get_offset_of_padding_6() { return static_cast<int32_t>(offsetof(FeatureManager_t1814774872, ___padding_6)); }
	inline float get_padding_6() const { return ___padding_6; }
	inline float* get_address_of_padding_6() { return &___padding_6; }
	inline void set_padding_6(float value)
	{
		___padding_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FEATUREMANAGER_T1814774872_H
#ifndef PREPAREAREA_T3780924708_H
#define PREPAREAREA_T3780924708_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PrepareArea
struct  PrepareArea_t3780924708  : public MonoBehaviour_t3962482529
{
public:
	// System.Collections.Generic.List`1<Block> PrepareArea::blockQueue
	List_1_t2901687608 * ___blockQueue_2;

public:
	inline static int32_t get_offset_of_blockQueue_2() { return static_cast<int32_t>(offsetof(PrepareArea_t3780924708, ___blockQueue_2)); }
	inline List_1_t2901687608 * get_blockQueue_2() const { return ___blockQueue_2; }
	inline List_1_t2901687608 ** get_address_of_blockQueue_2() { return &___blockQueue_2; }
	inline void set_blockQueue_2(List_1_t2901687608 * value)
	{
		___blockQueue_2 = value;
		Il2CppCodeGenWriteBarrier((&___blockQueue_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREPAREAREA_T3780924708_H
#ifndef FEATURE_T1326242729_H
#define FEATURE_T1326242729_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Feature
struct  Feature_t1326242729  : public MonoBehaviour_t3962482529
{
public:
	// System.Collections.Generic.List`1<Block> Feature::blocks
	List_1_t2901687608 * ___blocks_2;
	// System.Int32 Feature::<Income>k__BackingField
	int32_t ___U3CIncomeU3Ek__BackingField_3;
	// System.Int32 Feature::<SLAEffect>k__BackingField
	int32_t ___U3CSLAEffectU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_blocks_2() { return static_cast<int32_t>(offsetof(Feature_t1326242729, ___blocks_2)); }
	inline List_1_t2901687608 * get_blocks_2() const { return ___blocks_2; }
	inline List_1_t2901687608 ** get_address_of_blocks_2() { return &___blocks_2; }
	inline void set_blocks_2(List_1_t2901687608 * value)
	{
		___blocks_2 = value;
		Il2CppCodeGenWriteBarrier((&___blocks_2), value);
	}

	inline static int32_t get_offset_of_U3CIncomeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Feature_t1326242729, ___U3CIncomeU3Ek__BackingField_3)); }
	inline int32_t get_U3CIncomeU3Ek__BackingField_3() const { return ___U3CIncomeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CIncomeU3Ek__BackingField_3() { return &___U3CIncomeU3Ek__BackingField_3; }
	inline void set_U3CIncomeU3Ek__BackingField_3(int32_t value)
	{
		___U3CIncomeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CSLAEffectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Feature_t1326242729, ___U3CSLAEffectU3Ek__BackingField_4)); }
	inline int32_t get_U3CSLAEffectU3Ek__BackingField_4() const { return ___U3CSLAEffectU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CSLAEffectU3Ek__BackingField_4() { return &___U3CSLAEffectU3Ek__BackingField_4; }
	inline void set_U3CSLAEffectU3Ek__BackingField_4(int32_t value)
	{
		___U3CSLAEffectU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FEATURE_T1326242729_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_4;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_5;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_6;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_7;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRender
	CanvasRenderer_t2598313366 * ___m_CanvasRender_8;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_9;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_10;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_11;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_12;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_14;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_17;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_m_Material_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_4)); }
	inline Material_t340375123 * get_m_Material_4() const { return ___m_Material_4; }
	inline Material_t340375123 ** get_address_of_m_Material_4() { return &___m_Material_4; }
	inline void set_m_Material_4(Material_t340375123 * value)
	{
		___m_Material_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_4), value);
	}

	inline static int32_t get_offset_of_m_Color_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_5)); }
	inline Color_t2555686324  get_m_Color_5() const { return ___m_Color_5; }
	inline Color_t2555686324 * get_address_of_m_Color_5() { return &___m_Color_5; }
	inline void set_m_Color_5(Color_t2555686324  value)
	{
		___m_Color_5 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_6)); }
	inline bool get_m_RaycastTarget_6() const { return ___m_RaycastTarget_6; }
	inline bool* get_address_of_m_RaycastTarget_6() { return &___m_RaycastTarget_6; }
	inline void set_m_RaycastTarget_6(bool value)
	{
		___m_RaycastTarget_6 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_7)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_7() const { return ___m_RectTransform_7; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_7() { return &___m_RectTransform_7; }
	inline void set_m_RectTransform_7(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_7), value);
	}

	inline static int32_t get_offset_of_m_CanvasRender_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRender_8)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRender_8() const { return ___m_CanvasRender_8; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRender_8() { return &___m_CanvasRender_8; }
	inline void set_m_CanvasRender_8(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRender_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRender_8), value);
	}

	inline static int32_t get_offset_of_m_Canvas_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_9)); }
	inline Canvas_t3310196443 * get_m_Canvas_9() const { return ___m_Canvas_9; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_9() { return &___m_Canvas_9; }
	inline void set_m_Canvas_9(Canvas_t3310196443 * value)
	{
		___m_Canvas_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_9), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_10)); }
	inline bool get_m_VertsDirty_10() const { return ___m_VertsDirty_10; }
	inline bool* get_address_of_m_VertsDirty_10() { return &___m_VertsDirty_10; }
	inline void set_m_VertsDirty_10(bool value)
	{
		___m_VertsDirty_10 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_11)); }
	inline bool get_m_MaterialDirty_11() const { return ___m_MaterialDirty_11; }
	inline bool* get_address_of_m_MaterialDirty_11() { return &___m_MaterialDirty_11; }
	inline void set_m_MaterialDirty_11(bool value)
	{
		___m_MaterialDirty_11 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_12)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_12() const { return ___m_OnDirtyLayoutCallback_12; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_12() { return &___m_OnDirtyLayoutCallback_12; }
	inline void set_m_OnDirtyLayoutCallback_12(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_12), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_13)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_13() const { return ___m_OnDirtyVertsCallback_13; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_13() { return &___m_OnDirtyVertsCallback_13; }
	inline void set_m_OnDirtyVertsCallback_13(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_13), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_14() const { return ___m_OnDirtyMaterialCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_14() { return &___m_OnDirtyMaterialCallback_14; }
	inline void set_m_OnDirtyMaterialCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_14), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_17)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_17() const { return ___m_ColorTweenRunner_17; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_17() { return &___m_ColorTweenRunner_17; }
	inline void set_m_ColorTweenRunner_17(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_17), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_18(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_18 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_2;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_3;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_15;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_16;

public:
	inline static int32_t get_offset_of_s_DefaultUI_2() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_2)); }
	inline Material_t340375123 * get_s_DefaultUI_2() const { return ___s_DefaultUI_2; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_2() { return &___s_DefaultUI_2; }
	inline void set_s_DefaultUI_2(Material_t340375123 * value)
	{
		___s_DefaultUI_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_2), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_3() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_3)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_3() const { return ___s_WhiteTexture_3; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_3() { return &___s_WhiteTexture_3; }
	inline void set_s_WhiteTexture_3(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_3), value);
	}

	inline static int32_t get_offset_of_s_Mesh_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_15)); }
	inline Mesh_t3648964284 * get_s_Mesh_15() const { return ___s_Mesh_15; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_15() { return &___s_Mesh_15; }
	inline void set_s_Mesh_15(Mesh_t3648964284 * value)
	{
		___s_Mesh_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_15), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_16)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_16() const { return ___s_VertexHelper_16; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_16() { return &___s_VertexHelper_16; }
	inline void set_s_VertexHelper_16(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_19;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_20;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_21;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_22;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_23;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_25;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_26;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_27;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_19() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_19)); }
	inline bool get_m_ShouldRecalculateStencil_19() const { return ___m_ShouldRecalculateStencil_19; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_19() { return &___m_ShouldRecalculateStencil_19; }
	inline void set_m_ShouldRecalculateStencil_19(bool value)
	{
		___m_ShouldRecalculateStencil_19 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_20() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_20)); }
	inline Material_t340375123 * get_m_MaskMaterial_20() const { return ___m_MaskMaterial_20; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_20() { return &___m_MaskMaterial_20; }
	inline void set_m_MaskMaterial_20(Material_t340375123 * value)
	{
		___m_MaskMaterial_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_20), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_21)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_21() const { return ___m_ParentMask_21; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_21() { return &___m_ParentMask_21; }
	inline void set_m_ParentMask_21(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_21), value);
	}

	inline static int32_t get_offset_of_m_Maskable_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_22)); }
	inline bool get_m_Maskable_22() const { return ___m_Maskable_22; }
	inline bool* get_address_of_m_Maskable_22() { return &___m_Maskable_22; }
	inline void set_m_Maskable_22(bool value)
	{
		___m_Maskable_22 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_23)); }
	inline bool get_m_IncludeForMasking_23() const { return ___m_IncludeForMasking_23; }
	inline bool* get_address_of_m_IncludeForMasking_23() { return &___m_IncludeForMasking_23; }
	inline void set_m_IncludeForMasking_23(bool value)
	{
		___m_IncludeForMasking_23 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_24)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_24() const { return ___m_OnCullStateChanged_24; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_24() { return &___m_OnCullStateChanged_24; }
	inline void set_m_OnCullStateChanged_24(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_24), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_25)); }
	inline bool get_m_ShouldRecalculate_25() const { return ___m_ShouldRecalculate_25; }
	inline bool* get_address_of_m_ShouldRecalculate_25() { return &___m_ShouldRecalculate_25; }
	inline void set_m_ShouldRecalculate_25(bool value)
	{
		___m_ShouldRecalculate_25 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_26)); }
	inline int32_t get_m_StencilValue_26() const { return ___m_StencilValue_26; }
	inline int32_t* get_address_of_m_StencilValue_26() { return &___m_StencilValue_26; }
	inline void set_m_StencilValue_26(int32_t value)
	{
		___m_StencilValue_26 = value;
	}

	inline static int32_t get_offset_of_m_Corners_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_27)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_27() const { return ___m_Corners_27; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_27() { return &___m_Corners_27; }
	inline void set_m_Corners_27(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef TEXT_T1901882714_H
#define TEXT_T1901882714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t1901882714  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t746620069 * ___m_FontData_28;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_29;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t3211863866 * ___m_TextCache_30;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t3211863866 * ___m_TextCacheForLayout_31;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_33;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t1981460040* ___m_TempVerts_34;

public:
	inline static int32_t get_offset_of_m_FontData_28() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_FontData_28)); }
	inline FontData_t746620069 * get_m_FontData_28() const { return ___m_FontData_28; }
	inline FontData_t746620069 ** get_address_of_m_FontData_28() { return &___m_FontData_28; }
	inline void set_m_FontData_28(FontData_t746620069 * value)
	{
		___m_FontData_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_28), value);
	}

	inline static int32_t get_offset_of_m_Text_29() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_Text_29)); }
	inline String_t* get_m_Text_29() const { return ___m_Text_29; }
	inline String_t** get_address_of_m_Text_29() { return &___m_Text_29; }
	inline void set_m_Text_29(String_t* value)
	{
		___m_Text_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_29), value);
	}

	inline static int32_t get_offset_of_m_TextCache_30() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCache_30)); }
	inline TextGenerator_t3211863866 * get_m_TextCache_30() const { return ___m_TextCache_30; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCache_30() { return &___m_TextCache_30; }
	inline void set_m_TextCache_30(TextGenerator_t3211863866 * value)
	{
		___m_TextCache_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_30), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_31() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCacheForLayout_31)); }
	inline TextGenerator_t3211863866 * get_m_TextCacheForLayout_31() const { return ___m_TextCacheForLayout_31; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCacheForLayout_31() { return &___m_TextCacheForLayout_31; }
	inline void set_m_TextCacheForLayout_31(TextGenerator_t3211863866 * value)
	{
		___m_TextCacheForLayout_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_31), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_33() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_DisableFontTextureRebuiltCallback_33)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_33() const { return ___m_DisableFontTextureRebuiltCallback_33; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_33() { return &___m_DisableFontTextureRebuiltCallback_33; }
	inline void set_m_DisableFontTextureRebuiltCallback_33(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_33 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_34() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TempVerts_34)); }
	inline UIVertexU5BU5D_t1981460040* get_m_TempVerts_34() const { return ___m_TempVerts_34; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_TempVerts_34() { return &___m_TempVerts_34; }
	inline void set_m_TempVerts_34(UIVertexU5BU5D_t1981460040* value)
	{
		___m_TempVerts_34 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_34), value);
	}
};

struct Text_t1901882714_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t340375123 * ___s_DefaultText_32;

public:
	inline static int32_t get_offset_of_s_DefaultText_32() { return static_cast<int32_t>(offsetof(Text_t1901882714_StaticFields, ___s_DefaultText_32)); }
	inline Material_t340375123 * get_s_DefaultText_32() const { return ___s_DefaultText_32; }
	inline Material_t340375123 ** get_address_of_s_DefaultText_32() { return &___s_DefaultText_32; }
	inline void set_s_DefaultText_32(Material_t340375123 * value)
	{
		___s_DefaultText_32 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_32), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_T1901882714_H


// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m2446893047_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m2601736566_gshared (Dictionary_2_t1968819495 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
extern "C"  bool Dictionary_2_TryGetValue_m3411363121_gshared (Dictionary_2_t1968819495 * __this, int32_t p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(!0,!1)
extern "C"  void Dictionary_2_Add_m2059424751_gshared (Dictionary_2_t1968819495 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C"  ValueCollection_t3684863813 * Dictionary_2_get_Values_m683714624_gshared (Dictionary_2_t1968819495 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::GetEnumerator()
extern "C"  Enumerator_t2537713152  ValueCollection_GetEnumerator_m616748621_gshared (ValueCollection_t3684863813 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m2250080680_gshared (Enumerator_t2537713152 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m3300912776_gshared (Dictionary_2_t1968819495 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2602845255_gshared (Enumerator_t2537713152 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m3503748991_gshared (Enumerator_t2537713152 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C"  Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
extern "C"  bool List_1_Remove_m1416767016_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C"  int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2Int>::.ctor()
extern "C"  void List_1__ctor_m3805068493_gshared (List_1_t647105989 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2Int>::Add(!0)
extern "C"  void List_1_Add_m1745602227_gshared (List_1_t647105989 * __this, Vector2Int_t3469998543  p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C"  RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C"  void List_1_RemoveAt_m2730968292_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2Int>::get_Count()
extern "C"  int32_t List_1_get_Count_m2600226908_gshared (List_1_t647105989 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Vector2Int>::GetEnumerator()
extern "C"  Enumerator_t2536349866  List_1_GetEnumerator_m3719004310_gshared (List_1_t647105989 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2Int>::get_Current()
extern "C"  Vector2Int_t3469998543  Enumerator_get_Current_m3408976581_gshared (Enumerator_t2536349866 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2Int>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m1930661044_gshared (Enumerator_t2536349866 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2Int>::Dispose()
extern "C"  void Enumerator_Dispose_m361113603_gshared (Enumerator_t2536349866 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector2Int>::get_Item(System.Int32)
extern "C"  Vector2Int_t3469998543  List_1_get_Item_m4221300425_gshared (List_1_t647105989 * __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2Int>::Remove(!0)
extern "C"  bool List_1_Remove_m135587606_gshared (List_1_t647105989 * __this, Vector2Int_t3469998543  p0, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern "C"  int32_t Random_Range_m4054026115 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
extern "C"  int32_t Mathf_RoundToInt_m1874334613 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C"  void Transform_set_localPosition_m4128471975 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C"  void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Block::set_X(System.Int32)
extern "C"  void Block_set_X_m3468419968 (Block_t1429612866 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Block::set_Y(System.Int32)
extern "C"  void Block_set_Y_m4279034752 (Block_t1429612866 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Block BlockGenerator::GenerateBlock(Block/ColorEnum)
extern "C"  Block_t1429612866 * BlockGenerator_GenerateBlock_m3289662658 (BlockGenerator_t3413848165 * __this, int32_t ___color0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
#define Object_Instantiate_TisGameObject_t1113636619_m4070250708(__this /* static, unused */, p0, method) ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2446893047_gshared)(__this /* static, unused */, p0, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
#define GameObject_GetComponent_TisSpriteRenderer_t3235626157_m1701782593(__this, method) ((  SpriteRenderer_t3235626157 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
extern "C"  void SpriteRenderer_set_sprite_m1286893786 (SpriteRenderer_t3235626157 * __this, Sprite_t280657092 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object)
extern "C"  String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.String)
extern "C"  void Exception__ctor_m1152696503 (Exception_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<Block>()
#define GameObject_GetComponent_TisBlock_t1429612866_m761197682(__this, method) ((  Block_t1429612866 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,Block>>::.ctor()
#define Dictionary_2__ctor_m2160597421(__this, method) ((  void (*) (Dictionary_2_t3502006824 *, const RuntimeMethod*))Dictionary_2__ctor_m2601736566_gshared)(__this, method)
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void BlockMap::Add(Block)
extern "C"  void BlockMap_Add_m3274444037 (BlockMap_t3606162517 * __this, Block_t1429612866 * ___block0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Block::get_X()
extern "C"  int32_t Block_get_X_m1483641575 (Block_t1429612866 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,Block>>::TryGetValue(!0,!1&)
#define Dictionary_2_TryGetValue_m1868254207(__this, p0, p1, method) ((  bool (*) (Dictionary_2_t3502006824 *, int32_t, Dictionary_2_t318326197 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3411363121_gshared)(__this, p0, p1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Block>::.ctor()
#define Dictionary_2__ctor_m1738051506(__this, method) ((  void (*) (Dictionary_2_t318326197 *, const RuntimeMethod*))Dictionary_2__ctor_m2601736566_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,Block>>::Add(!0,!1)
#define Dictionary_2_Add_m1352072047(__this, p0, p1, method) ((  void (*) (Dictionary_2_t3502006824 *, int32_t, Dictionary_2_t318326197 *, const RuntimeMethod*))Dictionary_2_Add_m2059424751_gshared)(__this, p0, p1, method)
// System.Int32 Block::get_Y()
extern "C"  int32_t Block_get_Y_m1483641576 (Block_t1429612866 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Block>::Add(!0,!1)
#define Dictionary_2_Add_m3986497896(__this, p0, p1, method) ((  void (*) (Dictionary_2_t318326197 *, int32_t, Block_t1429612866 *, const RuntimeMethod*))Dictionary_2_Add_m2059424751_gshared)(__this, p0, p1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Block>::TryGetValue(!0,!1&)
#define Dictionary_2_TryGetValue_m3076939295(__this, p0, p1, method) ((  bool (*) (Dictionary_2_t318326197 *, int32_t, Block_t1429612866 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3411363121_gshared)(__this, p0, p1, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,Block>>::get_Values()
#define Dictionary_2_get_Values_m2463211907(__this, method) ((  ValueCollection_t923083846 * (*) (Dictionary_2_t3502006824 *, const RuntimeMethod*))Dictionary_2_get_Values_m683714624_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,Block>>::GetEnumerator()
#define ValueCollection_GetEnumerator_m370576241(__this, method) ((  Enumerator_t4070900481  (*) (ValueCollection_t923083846 *, const RuntimeMethod*))ValueCollection_GetEnumerator_m616748621_gshared)(__this, method)
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,Block>>::get_Current()
#define Enumerator_get_Current_m2364877895(__this, method) ((  Dictionary_2_t318326197 * (*) (Enumerator_t4070900481 *, const RuntimeMethod*))Enumerator_get_Current_m2250080680_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Block>::get_Count()
#define Dictionary_2_get_Count_m583479041(__this, method) ((  int32_t (*) (Dictionary_2_t318326197 *, const RuntimeMethod*))Dictionary_2_get_Count_m3300912776_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,Block>>::MoveNext()
#define Enumerator_MoveNext_m4155731730(__this, method) ((  bool (*) (Enumerator_t4070900481 *, const RuntimeMethod*))Enumerator_MoveNext_m2602845255_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,Block>>::Dispose()
#define Enumerator_Dispose_m2937772750(__this, method) ((  void (*) (Enumerator_t4070900481 *, const RuntimeMethod*))Enumerator_Dispose_m3503748991_gshared)(__this, method)
// System.Void BlockMap/<GetEnumerator>c__Iterator0::.ctor()
extern "C"  void U3CGetEnumeratorU3Ec__Iterator0__ctor_m3575201792 (U3CGetEnumeratorU3Ec__Iterator0_t3958307049 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<Block> BlockMap::GetEnumerator()
extern "C"  RuntimeObject* BlockMap_GetEnumerator_m2761892506 (BlockMap_t3606162517 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,Block>::get_Values()
#define Dictionary_2_get_Values_m3033119611(__this, method) ((  ValueCollection_t2034370515 * (*) (Dictionary_2_t318326197 *, const RuntimeMethod*))Dictionary_2_get_Values_m683714624_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Block>::GetEnumerator()
#define ValueCollection_GetEnumerator_m4211823044(__this, method) ((  Enumerator_t887219854  (*) (ValueCollection_t2034370515 *, const RuntimeMethod*))ValueCollection_GetEnumerator_m616748621_gshared)(__this, method)
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,Block>::get_Current()
#define Enumerator_get_Current_m3688145751(__this, method) ((  Block_t1429612866 * (*) (Enumerator_t887219854 *, const RuntimeMethod*))Enumerator_get_Current_m2250080680_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,Block>::MoveNext()
#define Enumerator_MoveNext_m2645565764(__this, method) ((  bool (*) (Enumerator_t887219854 *, const RuntimeMethod*))Enumerator_MoveNext_m2602845255_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,Block>::Dispose()
#define Enumerator_Dispose_m3385976116(__this, method) ((  void (*) (Enumerator_t887219854 *, const RuntimeMethod*))Enumerator_Dispose_m3503748991_gshared)(__this, method)
// System.Void System.NotSupportedException::.ctor()
extern "C"  void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<Block>::.ctor()
#define List_1__ctor_m1265523406(__this, method) ((  void (*) (List_1_t2901687608 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Block>::GetEnumerator()
#define List_1_GetEnumerator_m2009197239(__this, method) ((  Enumerator_t495964189  (*) (List_1_t2901687608 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<Block>::get_Current()
#define Enumerator_get_Current_m236452785(__this, method) ((  Block_t1429612866 * (*) (Enumerator_t495964189 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<Block>::MoveNext()
#define Enumerator_MoveNext_m4263545981(__this, method) ((  bool (*) (Enumerator_t495964189 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<Block>::Dispose()
#define Enumerator_Dispose_m3610076621(__this, method) ((  void (*) (Enumerator_t495964189 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// Block Board::GetBlock(System.Int32,System.Int32)
extern "C"  Block_t1429612866 * Board_GetBlock_m2505650597 (Board_t3688305287 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
extern "C"  void Transform_SetParent_m381167889 (Transform_t3600365921 * __this, Transform_t3600365921 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Block::SetAllPosition(System.Int32,System.Int32)
extern "C"  void Block_SetAllPosition_m3483076702 (Block_t1429612866 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<Block>::Add(!0)
#define List_1_Add_m1148009476(__this, p0, method) ((  void (*) (List_1_t2901687608 *, Block_t1429612866 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Transform_InverseTransformPoint_m1343916000 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Board::AddBlock(Block,System.Int32,System.Int32)
extern "C"  void Board_AddBlock_m1436331697 (Board_t3688305287 * __this, Block_t1429612866 * ___block0, int32_t ___x1, int32_t ___y2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<Block>::Remove(!0)
#define List_1_Remove_m1429535524(__this, p0, method) ((  bool (*) (List_1_t2901687608 *, Block_t1429612866 *, const RuntimeMethod*))List_1_Remove_m1416767016_gshared)(__this, p0, method)
// System.Void Controller::GenerateFeature()
extern "C"  void Controller_GenerateFeature_m729756744 (Controller_t2994601017 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Block BlockGenerator::GenerateBlock()
extern "C"  Block_t1429612866 * BlockGenerator_GenerateBlock_m3842112577 (BlockGenerator_t3413848165 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PrepareArea::AddBlock(Block)
extern "C"  void PrepareArea_AddBlock_m1617374146 (PrepareArea_t3780924708 * __this, Block_t1429612866 * ___block0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Controller::UpdateGameover()
extern "C"  bool Controller_UpdateGameover_m2451406716 (Controller_t2994601017 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Controller::UpdateIdle()
extern "C"  void Controller_UpdateIdle_m2951809918 (Controller_t2994601017 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Controller::UpdateBegun()
extern "C"  void Controller_UpdateBegun_m989443283 (Controller_t2994601017 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Controller::UpdateInserted()
extern "C"  void Controller_UpdateInserted_m898415773 (Controller_t2994601017 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Controller::UpdateTick()
extern "C"  void Controller_UpdateTick_m4211989094 (Controller_t2994601017 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern "C"  bool Input_GetMouseButtonDown_m2081676745 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
extern "C"  void SceneManager_LoadScene_m1758133949 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C"  Camera_t4157153871 * Camera_get_main_m3643453163 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern "C"  Vector3_t3722313464  Input_get_mousePosition_m1616496925 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Camera_ScreenToWorldPoint_m3978588570 (Camera_t4157153871 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Block PrepareArea::GetBlock(System.Single,System.Single)
extern "C"  Block_t1429612866 * PrepareArea_GetBlock_m4252222892 (PrepareArea_t3780924708 * __this, float ___x0, float ___y1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PrepareArea::RemoveBlock(Block)
extern "C"  void PrepareArea_RemoveBlock_m1909169224 (PrepareArea_t3780924708 * __this, Block_t1429612866 * ___block0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Board::AddBlock(Block)
extern "C"  void Board_AddBlock_m3758815230 (Board_t3688305287 * __this, Block_t1429612866 * ___block0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Block::get_DisplayX()
extern "C"  int32_t Block_get_DisplayX_m1176785288 (Block_t1429612866 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Block::get_DisplayY()
extern "C"  int32_t Block_get_DisplayY_m3515437448 (Block_t1429612866 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Block::set_DisplayX(System.Int32)
extern "C"  void Block_set_DisplayX_m168506037 (Block_t1429612866 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Block::set_DisplayY(System.Int32)
extern "C"  void Block_set_DisplayY_m4077732622 (Block_t1429612866 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
extern "C"  bool Input_GetMouseButtonUp_m2924350851 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Board::WithinBoundary(System.Int32,System.Int32)
extern "C"  bool Board_WithinBoundary_m3209403396 (Board_t3688305287 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Board::RemoveBlock(Block)
extern "C"  void Board_RemoveBlock_m20101843 (Board_t3688305287 * __this, Block_t1429612866 * ___block0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Block> Board::GetBlocks()
extern "C"  RuntimeObject* Board_GetBlocks_m1473346119 (Board_t3688305287 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Block::set_OnFire(System.Boolean)
extern "C"  void Block_set_OnFire_m2016653161 (Block_t1429612866 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Block::set_OnWarning(System.Boolean)
extern "C"  void Block_set_OnWarning_m1793844659 (Block_t1429612866 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Block::set_NoFireCount(System.Int32)
extern "C"  void Block_set_NoFireCount_m1637704058 (Block_t1429612866 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Block::set_OnWarningCount(System.Int32)
extern "C"  void Block_set_OnWarningCount_m497880217 (Block_t1429612866 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Controller::Tick()
extern "C"  void Controller_Tick_m2530191668 (Controller_t2994601017 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Controller::TickFeature()
extern "C"  void Controller_TickFeature_m229797711 (Controller_t2994601017 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Controller::TickPrepare()
extern "C"  void Controller_TickPrepare_m2256266233 (Controller_t2994601017 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Controller::TickFire()
extern "C"  void Controller_TickFire_m973793266 (Controller_t2994601017 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Controller::TickSLA()
extern "C"  void Controller_TickSLA_m1419395813 (Controller_t2994601017 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Controller::TickBGM()
extern "C"  void Controller_TickBGM_m3021719986 (Controller_t2994601017 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 FeatureManager::Count()
extern "C"  int32_t FeatureManager_Count_m2084563203 (FeatureManager_t1814774872 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void FeatureManager::Pop()
extern "C"  void FeatureManager_Pop_m189944667 (FeatureManager_t1814774872 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void FeatureManager::RefreshPositions()
extern "C"  void FeatureManager_RefreshPositions_m428705523 (FeatureManager_t1814774872 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Feature FeatureManager::Generate2(System.Int32)
extern "C"  Feature_t1326242729 * FeatureManager_Generate2_m2011031179 (FeatureManager_t1814774872 * __this, int32_t ___size0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 PrepareArea::Count()
extern "C"  int32_t PrepareArea_Count_m1980732666 (PrepareArea_t3780924708 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void BlockMap::.ctor(System.Collections.Generic.IEnumerable`1<Block>)
extern "C"  void BlockMap__ctor_m2215885815 (BlockMap_t3606162517 * __this, RuntimeObject* ___existingBlocks0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Feature> FeatureManager::GetFeatures()
extern "C"  RuntimeObject* FeatureManager_GetFeatures_m4033949054 (FeatureManager_t1814774872 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Feature::IsSatisfied(BlockMap)
extern "C"  bool Feature_IsSatisfied_m196257584 (Feature_t1326242729 * __this, BlockMap_t3606162517 * ___existingBlocks0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Feature::get_SLAEffect()
extern "C"  int32_t Feature_get_SLAEffect_m4050651046 (Feature_t1326242729 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Feature::get_Income()
extern "C"  int32_t Feature_get_Income_m3890961505 (Feature_t1326242729 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t Mathf_Clamp_m2756574208 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 BlockMap::Count()
extern "C"  int32_t BlockMap_Count_m1705567556 (BlockMap_t3606162517 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Block::get_OnWarning()
extern "C"  bool Block_get_OnWarning_m2013193347 (Block_t1429612866 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Block::get_OnWarningCount()
extern "C"  int32_t Block_get_OnWarningCount_m957528029 (Block_t1429612866 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Block::get_OnFire()
extern "C"  bool Block_get_OnFire_m1491048475 (Block_t1429612866 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Block::get_NoFireCount()
extern "C"  int32_t Block_get_NoFireCount_m1792051196 (Block_t1429612866 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::PlayOnFire()
extern "C"  void SoundManager_PlayOnFire_m1318771670 (SoundManager_t2102329059 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::PauseOnFire()
extern "C"  void SoundManager_PauseOnFire_m2825996707 (SoundManager_t2102329059 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Feature::RefreshPositions()
extern "C"  void Feature_RefreshPositions_m3281415785 (Feature_t1326242729 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<Block>::get_Count()
#define List_1_get_Count_m1090070239(__this, method) ((  int32_t (*) (List_1_t2901687608 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// Block BlockMap::Get(System.Int32,System.Int32)
extern "C"  Block_t1429612866 * BlockMap_Get_m1449095388 (BlockMap_t3606162517 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Block/ColorEnum Block::get_Color()
extern "C"  int32_t Block_get_Color_m1669802801 (Block_t1429612866 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<Feature>::.ctor()
#define List_1__ctor_m1620125414(__this, method) ((  void (*) (List_1_t2798317471 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Vector2Int>>::.ctor()
#define List_1__ctor_m2855100714(__this, method) ((  void (*) (List_1_t2119180731 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2Int>::.ctor()
#define List_1__ctor_m3805068493(__this, method) ((  void (*) (List_1_t647105989 *, const RuntimeMethod*))List_1__ctor_m3805068493_gshared)(__this, method)
// System.Void UnityEngine.Vector2Int::.ctor(System.Int32,System.Int32)
extern "C"  void Vector2Int__ctor_m3872920888 (Vector2Int_t3469998543 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2Int>::Add(!0)
#define List_1_Add_m1745602227(__this, p0, method) ((  void (*) (List_1_t647105989 *, Vector2Int_t3469998543 , const RuntimeMethod*))List_1_Add_m1745602227_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Vector2Int>>::Add(!0)
#define List_1_Add_m2785703956(__this, p0, method) ((  void (*) (List_1_t2119180731 *, List_1_t647105989 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<Feature>::Add(!0)
#define List_1_Add_m591758470(__this, p0, method) ((  void (*) (List_1_t2798317471 *, Feature_t1326242729 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Int32 System.Collections.Generic.List`1<Feature>::get_Count()
#define List_1_get_Count_m206966912(__this, method) ((  int32_t (*) (List_1_t2798317471 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// !0 System.Collections.Generic.List`1<Feature>::get_Item(System.Int32)
#define List_1_get_Item_m2609147429(__this, p0, method) ((  Feature_t1326242729 * (*) (List_1_t2798317471 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<Feature>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m1449043771(__this, p0, method) ((  void (*) (List_1_t2798317471 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m2730968292_gshared)(__this, p0, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Feature>::GetEnumerator()
#define List_1_GetEnumerator_m1581418248(__this, method) ((  Enumerator_t392594052  (*) (List_1_t2798317471 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<Feature>::get_Current()
#define Enumerator_get_Current_m1774344585(__this, method) ((  Feature_t1326242729 * (*) (Enumerator_t392594052 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
extern "C"  Vector3_t3722313464  Vector3_get_one_m1629952498 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C"  void Transform_set_localScale_m3053443106 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Feature::Width()
extern "C"  int32_t Feature_Width_m546656546 (Feature_t1326242729 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Feature>::MoveNext()
#define Enumerator_MoveNext_m1706640735(__this, method) ((  bool (*) (Enumerator_t392594052 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<Feature>::Dispose()
#define Enumerator_Dispose_m599349345(__this, method) ((  void (*) (Enumerator_t392594052 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<Feature>()
#define GameObject_GetComponent_TisFeature_t1326242729_m3959900819(__this, method) ((  Feature_t1326242729 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void FeatureManager::Add(Feature)
extern "C"  void FeatureManager_Add_m4230402021 (FeatureManager_t1814774872 * __this, Feature_t1326242729 * ___feature0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Vector2Int>>::GetEnumerator()
#define List_1_GetEnumerator_m1296270072(__this, method) ((  Enumerator_t4008424608  (*) (List_1_t2119180731 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.Vector2Int>>::get_Current()
#define Enumerator_get_Current_m3091303159(__this, method) ((  List_1_t647105989 * (*) (Enumerator_t4008424608 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2Int>::get_Count()
#define List_1_get_Count_m2600226908(__this, method) ((  int32_t (*) (List_1_t647105989 *, const RuntimeMethod*))List_1_get_Count_m2600226908_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.Vector2Int>>::MoveNext()
#define Enumerator_MoveNext_m454119732(__this, method) ((  bool (*) (Enumerator_t4008424608 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.Vector2Int>>::Dispose()
#define Enumerator_Dispose_m876221167(__this, method) ((  void (*) (Enumerator_t4008424608 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Vector2Int>>::get_Count()
#define List_1_get_Count_m876803877(__this, method) ((  int32_t (*) (List_1_t2119180731 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// !0 System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Vector2Int>>::get_Item(System.Int32)
#define List_1_get_Item_m79320186(__this, p0, method) ((  List_1_t647105989 * (*) (List_1_t2119180731 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Vector2Int>::GetEnumerator()
#define List_1_GetEnumerator_m3719004310(__this, method) ((  Enumerator_t2536349866  (*) (List_1_t647105989 *, const RuntimeMethod*))List_1_GetEnumerator_m3719004310_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2Int>::get_Current()
#define Enumerator_get_Current_m3408976581(__this, method) ((  Vector2Int_t3469998543  (*) (Enumerator_t2536349866 *, const RuntimeMethod*))Enumerator_get_Current_m3408976581_gshared)(__this, method)
// System.Int32 UnityEngine.Vector2Int::get_x()
extern "C"  int32_t Vector2Int_get_x_m64542184 (Vector2Int_t3469998543 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Vector2Int::get_y()
extern "C"  int32_t Vector2Int_get_y_m64542185 (Vector2Int_t3469998543 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Feature::AddBlock(Block)
extern "C"  void Feature_AddBlock_m3236566814 (Feature_t1326242729 * __this, Block_t1429612866 * ___block0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2Int>::MoveNext()
#define Enumerator_MoveNext_m1930661044(__this, method) ((  bool (*) (Enumerator_t2536349866 *, const RuntimeMethod*))Enumerator_MoveNext_m1930661044_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2Int>::Dispose()
#define Enumerator_Dispose_m361113603(__this, method) ((  void (*) (Enumerator_t2536349866 *, const RuntimeMethod*))Enumerator_Dispose_m361113603_gshared)(__this, method)
// UnityEngine.Vector2Int UnityEngine.Vector2Int::get_zero()
extern "C"  Vector2Int_t3469998543  Vector2Int_get_zero_m353440403 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void BlockMap::.ctor()
extern "C"  void BlockMap__ctor_m2506368632 (BlockMap_t3606162517 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.List`1<UnityEngine.Vector2Int>::get_Item(System.Int32)
#define List_1_get_Item_m4221300425(__this, p0, method) ((  Vector2Int_t3469998543  (*) (List_1_t647105989 *, int32_t, const RuntimeMethod*))List_1_get_Item_m4221300425_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2Int>::Remove(!0)
#define List_1_Remove_m135587606(__this, p0, method) ((  bool (*) (List_1_t647105989 *, Vector2Int_t3469998543 , const RuntimeMethod*))List_1_Remove_m135587606_gshared)(__this, p0, method)
// System.Void FeatureManager::ExplorePosition(System.Int32,System.Int32,BlockMap,System.Collections.Generic.List`1<UnityEngine.Vector2Int>)
extern "C"  void FeatureManager_ExplorePosition_m2411088474 (RuntimeObject * __this /* static, unused */, int32_t ___x0, int32_t ___y1, BlockMap_t3606162517 * ___closeList2, List_1_t647105989 * ___openList3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Feature::set_Income(System.Int32)
extern "C"  void Feature_set_Income_m1730798806 (Feature_t1326242729 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Feature::set_SLAEffect(System.Int32)
extern "C"  void Feature_set_SLAEffect_m2176273856 (Feature_t1326242729 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C"  String_t* String_Format_m2556382932 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PrepareArea::RefreshPositions()
extern "C"  void PrepareArea_RefreshPositions_m1537395655 (PrepareArea_t3780924708 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Block PrepareArea::GetBlock(System.Int32,System.Int32)
extern "C"  Block_t1429612866 * PrepareArea_GetBlock_m2262492526 (PrepareArea_t3780924708 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_mute(System.Boolean)
extern "C"  void AudioSource_set_mute_m3553377094 (AudioSource_t3935305588 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Block::.ctor()
extern "C"  void Block__ctor_m2599590690 (Block_t1429612866 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t3722313464 ));
		Vector3_t3722313464  L_0 = V_0;
		__this->set__displayPosition_7(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// Block/ColorEnum Block::RandomColor()
extern "C"  int32_t Block_RandomColor_m3639358857 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		int32_t L_0 = Random_Range_m4054026115(NULL /*static, unused*/, 0, 2, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000e:
	{
		return (int32_t)(1);
	}
}
// Block/ColorEnum Block::get_Color()
extern "C"  int32_t Block_get_Color_m1669802801 (Block_t1429612866 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CColorU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Block::set_Color(Block/ColorEnum)
extern "C"  void Block_set_Color_m3781510481 (Block_t1429612866 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CColorU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Int32 Block::get_X()
extern "C"  int32_t Block_get_X_m1483641575 (Block_t1429612866 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__x_5();
		return L_0;
	}
}
// System.Void Block::set_X(System.Int32)
extern "C"  void Block_set_X_m3468419968 (Block_t1429612866 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set__x_5(L_0);
		return;
	}
}
// System.Int32 Block::get_Y()
extern "C"  int32_t Block_get_Y_m1483641576 (Block_t1429612866 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__y_6();
		return L_0;
	}
}
// System.Void Block::set_Y(System.Int32)
extern "C"  void Block_set_Y_m4279034752 (Block_t1429612866 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set__y_6(L_0);
		return;
	}
}
// System.Int32 Block::get_DisplayX()
extern "C"  int32_t Block_get_DisplayX_m1176785288 (Block_t1429612866 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Block_get_DisplayX_m1176785288_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t3722313464 * L_0 = __this->get_address_of__displayPosition_7();
		float L_1 = L_0->get_x_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_2 = Mathf_RoundToInt_m1874334613(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Block::set_DisplayX(System.Int32)
extern "C"  void Block_set_DisplayX_m168506037 (Block_t1429612866 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Block_set_DisplayX_m168506037_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t3722313464 * L_0 = __this->get_address_of__displayPosition_7();
		int32_t L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_2 = Mathf_RoundToInt_m1874334613(NULL /*static, unused*/, (((float)((float)L_1))), /*hidden argument*/NULL);
		L_0->set_x_1((((float)((float)L_2))));
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_4 = __this->get__displayPosition_7();
		NullCheck(L_3);
		Transform_set_localPosition_m4128471975(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Block::get_DisplayY()
extern "C"  int32_t Block_get_DisplayY_m3515437448 (Block_t1429612866 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Block_get_DisplayY_m3515437448_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t3722313464 * L_0 = __this->get_address_of__displayPosition_7();
		float L_1 = L_0->get_y_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_2 = Mathf_RoundToInt_m1874334613(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Block::set_DisplayY(System.Int32)
extern "C"  void Block_set_DisplayY_m4077732622 (Block_t1429612866 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Block_set_DisplayY_m4077732622_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t3722313464 * L_0 = __this->get_address_of__displayPosition_7();
		int32_t L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_2 = Mathf_RoundToInt_m1874334613(NULL /*static, unused*/, (((float)((float)L_1))), /*hidden argument*/NULL);
		L_0->set_y_2((((float)((float)L_2))));
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_4 = __this->get__displayPosition_7();
		NullCheck(L_3);
		Transform_set_localPosition_m4128471975(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Block::get_NoFireCount()
extern "C"  int32_t Block_get_NoFireCount_m1792051196 (Block_t1429612866 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CNoFireCountU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void Block::set_NoFireCount(System.Int32)
extern "C"  void Block_set_NoFireCount_m1637704058 (Block_t1429612866 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CNoFireCountU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Int32 Block::get_OnWarningCount()
extern "C"  int32_t Block_get_OnWarningCount_m957528029 (Block_t1429612866 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3COnWarningCountU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void Block::set_OnWarningCount(System.Int32)
extern "C"  void Block_set_OnWarningCount_m497880217 (Block_t1429612866 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3COnWarningCountU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Boolean Block::get_OnFire()
extern "C"  bool Block_get_OnFire_m1491048475 (Block_t1429612866 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__onFire_10();
		return L_0;
	}
}
// System.Void Block::set_OnFire(System.Boolean)
extern "C"  void Block_set_OnFire_m2016653161 (Block_t1429612866 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set__onFire_10(L_0);
		GameObject_t1113636619 * L_1 = __this->get_fire_2();
		bool L_2 = __this->get__onFire_10();
		NullCheck(L_1);
		GameObject_SetActive_m796801857(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Block::get_OnWarning()
extern "C"  bool Block_get_OnWarning_m2013193347 (Block_t1429612866 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__onWarning_11();
		return L_0;
	}
}
// System.Void Block::set_OnWarning(System.Boolean)
extern "C"  void Block_set_OnWarning_m1793844659 (Block_t1429612866 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set__onWarning_11(L_0);
		GameObject_t1113636619 * L_1 = __this->get_warning_3();
		bool L_2 = __this->get__onWarning_11();
		NullCheck(L_1);
		GameObject_SetActive_m796801857(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Block::SetAllPosition(System.Int32,System.Int32)
extern "C"  void Block_SetAllPosition_m3483076702 (Block_t1429612866 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	{
		Vector3_t3722313464 * L_0 = __this->get_address_of__displayPosition_7();
		int32_t L_1 = ___x0;
		L_0->set_x_1((((float)((float)L_1))));
		Vector3_t3722313464 * L_2 = __this->get_address_of__displayPosition_7();
		int32_t L_3 = ___y1;
		L_2->set_y_2((((float)((float)L_3))));
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5 = __this->get__displayPosition_7();
		NullCheck(L_4);
		Transform_set_localPosition_m4128471975(L_4, L_5, /*hidden argument*/NULL);
		int32_t L_6 = ___x0;
		Block_set_X_m3468419968(__this, L_6, /*hidden argument*/NULL);
		int32_t L_7 = ___y1;
		Block_set_Y_m4279034752(__this, L_7, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BlockGenerator::.ctor()
extern "C"  void BlockGenerator__ctor_m1213555850 (BlockGenerator_t3413848165 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// Block BlockGenerator::GenerateBlock()
extern "C"  Block_t1429612866 * BlockGenerator_GenerateBlock_m3842112577 (BlockGenerator_t3413848165 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = Random_Range_m4054026115(NULL /*static, unused*/, 0, 2, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		V_0 = 0;
		goto IL_0015;
	}

IL_0013:
	{
		V_0 = 1;
	}

IL_0015:
	{
		int32_t L_1 = V_0;
		Block_t1429612866 * L_2 = BlockGenerator_GenerateBlock_m3289662658(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Block BlockGenerator::GenerateBlock(Block/ColorEnum)
extern "C"  Block_t1429612866 * BlockGenerator_GenerateBlock_m3289662658 (BlockGenerator_t3413848165 * __this, int32_t ___color0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BlockGenerator_GenerateBlock_m3289662658_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		GameObject_t1113636619 * L_0 = __this->get_blockPrefab_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_1 = Object_Instantiate_TisGameObject_t1113636619_m4070250708(NULL /*static, unused*/, L_0, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var);
		V_0 = L_1;
		int32_t L_2 = ___color0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_3 = ___color0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0034;
		}
	}
	{
		goto IL_004a;
	}

IL_001e:
	{
		GameObject_t1113636619 * L_4 = V_0;
		NullCheck(L_4);
		SpriteRenderer_t3235626157 * L_5 = GameObject_GetComponent_TisSpriteRenderer_t3235626157_m1701782593(L_4, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3235626157_m1701782593_RuntimeMethod_var);
		Sprite_t280657092 * L_6 = __this->get_blackSprite_3();
		NullCheck(L_5);
		SpriteRenderer_set_sprite_m1286893786(L_5, L_6, /*hidden argument*/NULL);
		goto IL_0060;
	}

IL_0034:
	{
		GameObject_t1113636619 * L_7 = V_0;
		NullCheck(L_7);
		SpriteRenderer_t3235626157 * L_8 = GameObject_GetComponent_TisSpriteRenderer_t3235626157_m1701782593(L_7, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3235626157_m1701782593_RuntimeMethod_var);
		Sprite_t280657092 * L_9 = __this->get_whiteSprite_4();
		NullCheck(L_8);
		SpriteRenderer_set_sprite_m1286893786(L_8, L_9, /*hidden argument*/NULL);
		goto IL_0060;
	}

IL_004a:
	{
		int32_t L_10 = ___color0;
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(ColorEnum_t4231286491_il2cpp_TypeInfo_var, &L_11);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral1760693709, L_12, /*hidden argument*/NULL);
		Exception_t * L_14 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_14, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14);
	}

IL_0060:
	{
		GameObject_t1113636619 * L_15 = V_0;
		NullCheck(L_15);
		Block_t1429612866 * L_16 = GameObject_GetComponent_TisBlock_t1429612866_m761197682(L_15, /*hidden argument*/GameObject_GetComponent_TisBlock_t1429612866_m761197682_RuntimeMethod_var);
		return L_16;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BlockMap::.ctor()
extern "C"  void BlockMap__ctor_m2506368632 (BlockMap_t3606162517 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BlockMap__ctor_m2506368632_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3502006824 * L_0 = (Dictionary_2_t3502006824 *)il2cpp_codegen_object_new(Dictionary_2_t3502006824_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2160597421(L_0, /*hidden argument*/Dictionary_2__ctor_m2160597421_RuntimeMethod_var);
		__this->set_blocks_0(L_0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BlockMap::.ctor(System.Collections.Generic.IEnumerable`1<Block>)
extern "C"  void BlockMap__ctor_m2215885815 (BlockMap_t3606162517 * __this, RuntimeObject* ___existingBlocks0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BlockMap__ctor_m2215885815_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Block_t1429612866 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t3502006824 * L_0 = (Dictionary_2_t3502006824 *)il2cpp_codegen_object_new(Dictionary_2_t3502006824_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2160597421(L_0, /*hidden argument*/Dictionary_2__ctor_m2160597421_RuntimeMethod_var);
		__this->set_blocks_0(L_0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___existingBlocks0;
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Block>::GetEnumerator() */, IEnumerable_1_t409465755_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002b;
		}

IL_001d:
		{
			RuntimeObject* L_3 = V_1;
			NullCheck(L_3);
			Block_t1429612866 * L_4 = InterfaceFuncInvoker0< Block_t1429612866 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Block>::get_Current() */, IEnumerator_1_t1862183334_il2cpp_TypeInfo_var, L_3);
			V_0 = L_4;
			Block_t1429612866 * L_5 = V_0;
			BlockMap_Add_m3274444037(__this, L_5, /*hidden argument*/NULL);
		}

IL_002b:
		{
			RuntimeObject* L_6 = V_1;
			NullCheck(L_6);
			bool L_7 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_6);
			if (L_7)
			{
				goto IL_001d;
			}
		}

IL_0036:
		{
			IL2CPP_LEAVE(0x48, FINALLY_003b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003b;
	}

FINALLY_003b:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_8 = V_1;
			if (!L_8)
			{
				goto IL_0047;
			}
		}

IL_0041:
		{
			RuntimeObject* L_9 = V_1;
			NullCheck(L_9);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_9);
		}

IL_0047:
		{
			IL2CPP_END_FINALLY(59)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(59)
	{
		IL2CPP_JUMP_TBL(0x48, IL_0048)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0048:
	{
		return;
	}
}
// System.Void BlockMap::Add(Block)
extern "C"  void BlockMap_Add_m3274444037 (BlockMap_t3606162517 * __this, Block_t1429612866 * ___block0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BlockMap_Add_m3274444037_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t318326197 * V_0 = NULL;
	{
		Dictionary_2_t3502006824 * L_0 = __this->get_blocks_0();
		Block_t1429612866 * L_1 = ___block0;
		NullCheck(L_1);
		int32_t L_2 = Block_get_X_m1483641575(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_3 = Dictionary_2_TryGetValue_m1868254207(L_0, L_2, (&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m1868254207_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		Dictionary_2_t318326197 * L_4 = (Dictionary_2_t318326197 *)il2cpp_codegen_object_new(Dictionary_2_t318326197_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1738051506(L_4, /*hidden argument*/Dictionary_2__ctor_m1738051506_RuntimeMethod_var);
		V_0 = L_4;
		Dictionary_2_t3502006824 * L_5 = __this->get_blocks_0();
		Block_t1429612866 * L_6 = ___block0;
		NullCheck(L_6);
		int32_t L_7 = Block_get_X_m1483641575(L_6, /*hidden argument*/NULL);
		Dictionary_2_t318326197 * L_8 = V_0;
		NullCheck(L_5);
		Dictionary_2_Add_m1352072047(L_5, L_7, L_8, /*hidden argument*/Dictionary_2_Add_m1352072047_RuntimeMethod_var);
	}

IL_0030:
	{
		Dictionary_2_t318326197 * L_9 = V_0;
		Block_t1429612866 * L_10 = ___block0;
		NullCheck(L_10);
		int32_t L_11 = Block_get_Y_m1483641576(L_10, /*hidden argument*/NULL);
		Block_t1429612866 * L_12 = ___block0;
		NullCheck(L_9);
		Dictionary_2_Add_m3986497896(L_9, L_11, L_12, /*hidden argument*/Dictionary_2_Add_m3986497896_RuntimeMethod_var);
		return;
	}
}
// Block BlockMap::Get(System.Int32,System.Int32)
extern "C"  Block_t1429612866 * BlockMap_Get_m1449095388 (BlockMap_t3606162517 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BlockMap_Get_m1449095388_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t318326197 * V_0 = NULL;
	Block_t1429612866 * V_1 = NULL;
	{
		Dictionary_2_t3502006824 * L_0 = __this->get_blocks_0();
		int32_t L_1 = ___x0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_TryGetValue_m1868254207(L_0, L_1, (&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m1868254207_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		return (Block_t1429612866 *)NULL;
	}

IL_0015:
	{
		Dictionary_2_t318326197 * L_3 = V_0;
		int32_t L_4 = ___y1;
		NullCheck(L_3);
		bool L_5 = Dictionary_2_TryGetValue_m3076939295(L_3, L_4, (&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m3076939295_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0025;
		}
	}
	{
		return (Block_t1429612866 *)NULL;
	}

IL_0025:
	{
		Block_t1429612866 * L_6 = V_1;
		return L_6;
	}
}
// System.Int32 BlockMap::Count()
extern "C"  int32_t BlockMap_Count_m1705567556 (BlockMap_t3606162517 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BlockMap_Count_m1705567556_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Dictionary_2_t318326197 * V_1 = NULL;
	Enumerator_t4070900481  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = 0;
		Dictionary_2_t3502006824 * L_0 = __this->get_blocks_0();
		NullCheck(L_0);
		ValueCollection_t923083846 * L_1 = Dictionary_2_get_Values_m2463211907(L_0, /*hidden argument*/Dictionary_2_get_Values_m2463211907_RuntimeMethod_var);
		NullCheck(L_1);
		Enumerator_t4070900481  L_2 = ValueCollection_GetEnumerator_m370576241(L_1, /*hidden argument*/ValueCollection_GetEnumerator_m370576241_RuntimeMethod_var);
		V_2 = L_2;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0029;
		}

IL_0018:
		{
			Dictionary_2_t318326197 * L_3 = Enumerator_get_Current_m2364877895((&V_2), /*hidden argument*/Enumerator_get_Current_m2364877895_RuntimeMethod_var);
			V_1 = L_3;
			int32_t L_4 = V_0;
			Dictionary_2_t318326197 * L_5 = V_1;
			NullCheck(L_5);
			int32_t L_6 = Dictionary_2_get_Count_m583479041(L_5, /*hidden argument*/Dictionary_2_get_Count_m583479041_RuntimeMethod_var);
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_6));
		}

IL_0029:
		{
			bool L_7 = Enumerator_MoveNext_m4155731730((&V_2), /*hidden argument*/Enumerator_MoveNext_m4155731730_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0018;
			}
		}

IL_0035:
		{
			IL2CPP_LEAVE(0x48, FINALLY_003a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003a;
	}

FINALLY_003a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2937772750((&V_2), /*hidden argument*/Enumerator_Dispose_m2937772750_RuntimeMethod_var);
		IL2CPP_END_FINALLY(58)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(58)
	{
		IL2CPP_JUMP_TBL(0x48, IL_0048)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0048:
	{
		int32_t L_8 = V_0;
		return L_8;
	}
}
// System.Collections.Generic.IEnumerator`1<Block> BlockMap::GetEnumerator()
extern "C"  RuntimeObject* BlockMap_GetEnumerator_m2761892506 (BlockMap_t3606162517 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BlockMap_GetEnumerator_m2761892506_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetEnumeratorU3Ec__Iterator0_t3958307049 * V_0 = NULL;
	{
		U3CGetEnumeratorU3Ec__Iterator0_t3958307049 * L_0 = (U3CGetEnumeratorU3Ec__Iterator0_t3958307049 *)il2cpp_codegen_object_new(U3CGetEnumeratorU3Ec__Iterator0_t3958307049_il2cpp_TypeInfo_var);
		U3CGetEnumeratorU3Ec__Iterator0__ctor_m3575201792(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetEnumeratorU3Ec__Iterator0_t3958307049 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_4(__this);
		U3CGetEnumeratorU3Ec__Iterator0_t3958307049 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator BlockMap::System.Collections.IEnumerable.GetEnumerator()
extern "C"  RuntimeObject* BlockMap_System_Collections_IEnumerable_GetEnumerator_m2467682298 (BlockMap_t3606162517 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = BlockMap_GetEnumerator_m2761892506(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BlockMap/<GetEnumerator>c__Iterator0::.ctor()
extern "C"  void U3CGetEnumeratorU3Ec__Iterator0__ctor_m3575201792 (U3CGetEnumeratorU3Ec__Iterator0_t3958307049 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean BlockMap/<GetEnumerator>c__Iterator0::MoveNext()
extern "C"  bool U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m2664898199 (U3CGetEnumeratorU3Ec__Iterator0_t3958307049 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m2664898199_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U24PC_7();
		V_0 = L_0;
		__this->set_U24PC_7((-1));
		V_1 = (bool)0;
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0023;
			}
			case 1:
			{
				goto IL_0041;
			}
		}
	}
	{
		goto IL_011d;
	}

IL_0023:
	{
		BlockMap_t3606162517 * L_2 = __this->get_U24this_4();
		NullCheck(L_2);
		Dictionary_2_t3502006824 * L_3 = L_2->get_blocks_0();
		NullCheck(L_3);
		ValueCollection_t923083846 * L_4 = Dictionary_2_get_Values_m2463211907(L_3, /*hidden argument*/Dictionary_2_get_Values_m2463211907_RuntimeMethod_var);
		NullCheck(L_4);
		Enumerator_t4070900481  L_5 = ValueCollection_GetEnumerator_m370576241(L_4, /*hidden argument*/ValueCollection_GetEnumerator_m370576241_RuntimeMethod_var);
		__this->set_U24locvar0_0(L_5);
		V_0 = ((int32_t)-3);
	}

IL_0041:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_6 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)))
			{
				case 0:
				{
					goto IL_007c;
				}
			}
		}

IL_004d:
		{
			goto IL_00eb;
		}

IL_0052:
		{
			Enumerator_t4070900481 * L_7 = __this->get_address_of_U24locvar0_0();
			Dictionary_2_t318326197 * L_8 = Enumerator_get_Current_m2364877895(L_7, /*hidden argument*/Enumerator_get_Current_m2364877895_RuntimeMethod_var);
			__this->set_U3CinnerU3E__1_1(L_8);
			Dictionary_2_t318326197 * L_9 = __this->get_U3CinnerU3E__1_1();
			NullCheck(L_9);
			ValueCollection_t2034370515 * L_10 = Dictionary_2_get_Values_m3033119611(L_9, /*hidden argument*/Dictionary_2_get_Values_m3033119611_RuntimeMethod_var);
			NullCheck(L_10);
			Enumerator_t887219854  L_11 = ValueCollection_GetEnumerator_m4211823044(L_10, /*hidden argument*/ValueCollection_GetEnumerator_m4211823044_RuntimeMethod_var);
			__this->set_U24locvar1_2(L_11);
			V_0 = ((int32_t)-3);
		}

IL_007c:
		try
		{ // begin try (depth: 2)
			{
				uint32_t L_12 = V_0;
				switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1)))
				{
					case 0:
					{
						goto IL_00c0;
					}
				}
			}

IL_0088:
			{
				goto IL_00c0;
			}

IL_008d:
			{
				Enumerator_t887219854 * L_13 = __this->get_address_of_U24locvar1_2();
				Block_t1429612866 * L_14 = Enumerator_get_Current_m3688145751(L_13, /*hidden argument*/Enumerator_get_Current_m3688145751_RuntimeMethod_var);
				__this->set_U3CblockU3E__2_3(L_14);
				Block_t1429612866 * L_15 = __this->get_U3CblockU3E__2_3();
				__this->set_U24current_5(L_15);
				bool L_16 = __this->get_U24disposing_6();
				if (L_16)
				{
					goto IL_00b9;
				}
			}

IL_00b2:
			{
				__this->set_U24PC_7(1);
			}

IL_00b9:
			{
				V_1 = (bool)1;
				IL2CPP_LEAVE(0x11F, FINALLY_00d5);
			}

IL_00c0:
			{
				Enumerator_t887219854 * L_17 = __this->get_address_of_U24locvar1_2();
				bool L_18 = Enumerator_MoveNext_m2645565764(L_17, /*hidden argument*/Enumerator_MoveNext_m2645565764_RuntimeMethod_var);
				if (L_18)
				{
					goto IL_008d;
				}
			}

IL_00d0:
			{
				IL2CPP_LEAVE(0xEB, FINALLY_00d5);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00d5;
		}

FINALLY_00d5:
		{ // begin finally (depth: 2)
			{
				bool L_19 = V_1;
				if (!L_19)
				{
					goto IL_00d9;
				}
			}

IL_00d8:
			{
				IL2CPP_END_FINALLY(213)
			}

IL_00d9:
			{
				Enumerator_t887219854 * L_20 = __this->get_address_of_U24locvar1_2();
				Enumerator_Dispose_m3385976116(L_20, /*hidden argument*/Enumerator_Dispose_m3385976116_RuntimeMethod_var);
				IL2CPP_END_FINALLY(213)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(213)
		{
			IL2CPP_END_CLEANUP(0x11F, FINALLY_0100);
			IL2CPP_JUMP_TBL(0xEB, IL_00eb)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_00eb:
		{
			Enumerator_t4070900481 * L_21 = __this->get_address_of_U24locvar0_0();
			bool L_22 = Enumerator_MoveNext_m4155731730(L_21, /*hidden argument*/Enumerator_MoveNext_m4155731730_RuntimeMethod_var);
			if (L_22)
			{
				goto IL_0052;
			}
		}

IL_00fb:
		{
			IL2CPP_LEAVE(0x116, FINALLY_0100);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0100;
	}

FINALLY_0100:
	{ // begin finally (depth: 1)
		{
			bool L_23 = V_1;
			if (!L_23)
			{
				goto IL_0104;
			}
		}

IL_0103:
		{
			IL2CPP_END_FINALLY(256)
		}

IL_0104:
		{
			Enumerator_t4070900481 * L_24 = __this->get_address_of_U24locvar0_0();
			Enumerator_Dispose_m2937772750(L_24, /*hidden argument*/Enumerator_Dispose_m2937772750_RuntimeMethod_var);
			IL2CPP_END_FINALLY(256)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(256)
	{
		IL2CPP_JUMP_TBL(0x11F, IL_011f)
		IL2CPP_JUMP_TBL(0x116, IL_0116)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0116:
	{
		__this->set_U24PC_7((-1));
	}

IL_011d:
	{
		return (bool)0;
	}

IL_011f:
	{
		return (bool)1;
	}
}
// Block BlockMap/<GetEnumerator>c__Iterator0::System.Collections.Generic.IEnumerator<Block>.get_Current()
extern "C"  Block_t1429612866 * U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CBlockU3E_get_Current_m3211039622 (U3CGetEnumeratorU3Ec__Iterator0_t3958307049 * __this, const RuntimeMethod* method)
{
	{
		Block_t1429612866 * L_0 = __this->get_U24current_5();
		return L_0;
	}
}
// System.Object BlockMap/<GetEnumerator>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m2277315121 (U3CGetEnumeratorU3Ec__Iterator0_t3958307049 * __this, const RuntimeMethod* method)
{
	{
		Block_t1429612866 * L_0 = __this->get_U24current_5();
		return L_0;
	}
}
// System.Void BlockMap/<GetEnumerator>c__Iterator0::Dispose()
extern "C"  void U3CGetEnumeratorU3Ec__Iterator0_Dispose_m2786392147 (U3CGetEnumeratorU3Ec__Iterator0_t3958307049 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetEnumeratorU3Ec__Iterator0_Dispose_m2786392147_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U24PC_7();
		V_0 = L_0;
		__this->set_U24disposing_6((bool)1);
		__this->set_U24PC_7((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0056;
			}
			case 1:
			{
				goto IL_0028;
			}
		}
	}
	{
		goto IL_0056;
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			IL2CPP_LEAVE(0x3F, FINALLY_002d);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_002d;
		}

FINALLY_002d:
		{ // begin finally (depth: 2)
			Enumerator_t887219854 * L_2 = __this->get_address_of_U24locvar1_2();
			Enumerator_Dispose_m3385976116(L_2, /*hidden argument*/Enumerator_Dispose_m3385976116_RuntimeMethod_var);
			IL2CPP_END_FINALLY(45)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(45)
		{
			IL2CPP_JUMP_TBL(0x3F, IL_003f)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_003f:
		{
			IL2CPP_LEAVE(0x56, FINALLY_0044);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0044;
	}

FINALLY_0044:
	{ // begin finally (depth: 1)
		Enumerator_t4070900481 * L_3 = __this->get_address_of_U24locvar0_0();
		Enumerator_Dispose_m2937772750(L_3, /*hidden argument*/Enumerator_Dispose_m2937772750_RuntimeMethod_var);
		IL2CPP_END_FINALLY(68)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(68)
	{
		IL2CPP_JUMP_TBL(0x56, IL_0056)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0056:
	{
		return;
	}
}
// System.Void BlockMap/<GetEnumerator>c__Iterator0::Reset()
extern "C"  void U3CGetEnumeratorU3Ec__Iterator0_Reset_m411339085 (U3CGetEnumeratorU3Ec__Iterator0_t3958307049 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetEnumeratorU3Ec__Iterator0_Reset_m411339085_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Board::.ctor()
extern "C"  void Board__ctor_m662563078 (Board_t3688305287 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board__ctor_m662563078_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t2901687608 * L_0 = (List_1_t2901687608 *)il2cpp_codegen_object_new(List_1_t2901687608_il2cpp_TypeInfo_var);
		List_1__ctor_m1265523406(L_0, /*hidden argument*/List_1__ctor_m1265523406_RuntimeMethod_var);
		__this->set_blocks_2(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Board::Start()
extern "C"  void Board_Start_m2081441992 (Board_t3688305287 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Board::Update()
extern "C"  void Board_Update_m2724691675 (Board_t3688305287 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<Block> Board::GetBlocks()
extern "C"  RuntimeObject* Board_GetBlocks_m1473346119 (Board_t3688305287 * __this, const RuntimeMethod* method)
{
	{
		List_1_t2901687608 * L_0 = __this->get_blocks_2();
		return L_0;
	}
}
// Block Board::GetBlock(System.Int32,System.Int32)
extern "C"  Block_t1429612866 * Board_GetBlock_m2505650597 (Board_t3688305287 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_GetBlock_m2505650597_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Block_t1429612866 * V_0 = NULL;
	Enumerator_t495964189  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Block_t1429612866 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t2901687608 * L_0 = __this->get_blocks_2();
		NullCheck(L_0);
		Enumerator_t495964189  L_1 = List_1_GetEnumerator_m2009197239(L_0, /*hidden argument*/List_1_GetEnumerator_m2009197239_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0038;
		}

IL_0011:
		{
			Block_t1429612866 * L_2 = Enumerator_get_Current_m236452785((&V_1), /*hidden argument*/Enumerator_get_Current_m236452785_RuntimeMethod_var);
			V_0 = L_2;
			Block_t1429612866 * L_3 = V_0;
			NullCheck(L_3);
			int32_t L_4 = Block_get_X_m1483641575(L_3, /*hidden argument*/NULL);
			int32_t L_5 = ___x0;
			if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
			{
				goto IL_0038;
			}
		}

IL_0025:
		{
			Block_t1429612866 * L_6 = V_0;
			NullCheck(L_6);
			int32_t L_7 = Block_get_Y_m1483641576(L_6, /*hidden argument*/NULL);
			int32_t L_8 = ___y1;
			if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
			{
				goto IL_0038;
			}
		}

IL_0031:
		{
			Block_t1429612866 * L_9 = V_0;
			V_2 = L_9;
			IL2CPP_LEAVE(0x59, FINALLY_0049);
		}

IL_0038:
		{
			bool L_10 = Enumerator_MoveNext_m4263545981((&V_1), /*hidden argument*/Enumerator_MoveNext_m4263545981_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_0011;
			}
		}

IL_0044:
		{
			IL2CPP_LEAVE(0x57, FINALLY_0049);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0049;
	}

FINALLY_0049:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3610076621((&V_1), /*hidden argument*/Enumerator_Dispose_m3610076621_RuntimeMethod_var);
		IL2CPP_END_FINALLY(73)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(73)
	{
		IL2CPP_JUMP_TBL(0x59, IL_0059)
		IL2CPP_JUMP_TBL(0x57, IL_0057)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0057:
	{
		return (Block_t1429612866 *)NULL;
	}

IL_0059:
	{
		Block_t1429612866 * L_11 = V_2;
		return L_11;
	}
}
// Block Board::GetBlock(System.Single,System.Single)
extern "C"  Block_t1429612866 * Board_GetBlock_m1911538603 (Board_t3688305287 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_GetBlock_m1911538603_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_1 = Mathf_RoundToInt_m1874334613(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		float L_2 = ___y1;
		int32_t L_3 = Mathf_RoundToInt_m1874334613(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		Block_t1429612866 * L_4 = Board_GetBlock_m2505650597(__this, L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void Board::AddBlock(Block,System.Int32,System.Int32)
extern "C"  void Board_AddBlock_m1436331697 (Board_t3688305287 * __this, Block_t1429612866 * ___block0, int32_t ___x1, int32_t ___y2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_AddBlock_m1436331697_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Block_t1429612866 * L_0 = ___block0;
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_t3600365921 * L_2 = GameObject_get_transform_m1369836730(L_1, /*hidden argument*/NULL);
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_SetParent_m381167889(L_2, L_3, /*hidden argument*/NULL);
		Block_t1429612866 * L_4 = ___block0;
		int32_t L_5 = ___x1;
		int32_t L_6 = ___y2;
		NullCheck(L_4);
		Block_SetAllPosition_m3483076702(L_4, L_5, L_6, /*hidden argument*/NULL);
		List_1_t2901687608 * L_7 = __this->get_blocks_2();
		Block_t1429612866 * L_8 = ___block0;
		NullCheck(L_7);
		List_1_Add_m1148009476(L_7, L_8, /*hidden argument*/List_1_Add_m1148009476_RuntimeMethod_var);
		return;
	}
}
// System.Void Board::AddBlock(Block)
extern "C"  void Board_AddBlock_m3758815230 (Board_t3688305287 * __this, Block_t1429612866 * ___block0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_AddBlock_m3758815230_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Block_t1429612866 * L_1 = ___block0;
		NullCheck(L_1);
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t3722313464  L_3 = Transform_get_position_m36019626(L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3722313464  L_4 = Transform_InverseTransformPoint_m1343916000(L_0, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Block_t1429612866 * L_5 = ___block0;
		float L_6 = (&V_0)->get_x_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_7 = Mathf_RoundToInt_m1874334613(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		float L_8 = (&V_0)->get_y_2();
		int32_t L_9 = Mathf_RoundToInt_m1874334613(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		Board_AddBlock_m1436331697(__this, L_5, L_7, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Board::RemoveBlock(Block)
extern "C"  void Board_RemoveBlock_m20101843 (Board_t3688305287 * __this, Block_t1429612866 * ___block0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_RemoveBlock_m20101843_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t2901687608 * L_0 = __this->get_blocks_2();
		Block_t1429612866 * L_1 = ___block0;
		NullCheck(L_0);
		List_1_Remove_m1429535524(L_0, L_1, /*hidden argument*/List_1_Remove_m1429535524_RuntimeMethod_var);
		return;
	}
}
// System.Boolean Board::WithinBoundary(System.Int32,System.Int32)
extern "C"  bool Board_WithinBoundary_m3209403396 (Board_t3688305287 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		V_0 = 3;
		int32_t L_0 = ___x0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_0) < ((int32_t)((-L_1)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_2 = ___x0;
		int32_t L_3 = V_0;
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = ___y1;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) < ((int32_t)((-L_5)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_6 = ___y1;
		int32_t L_7 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) > ((int32_t)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0023;
	}

IL_0022:
	{
		G_B5_0 = 0;
	}

IL_0023:
	{
		return (bool)G_B5_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Controller::.ctor()
extern "C"  void Controller__ctor_m718828780 (Controller_t2994601017 * __this, const RuntimeMethod* method)
{
	{
		__this->set_startingPrepareBlocks_15(2);
		__this->set_maxPrepareBlocks_16(6);
		__this->set_prepareBlockInterval_17(4);
		__this->set_startingFeature_19(1);
		__this->set_minFeatureGenerationSize_20(3);
		__this->set_maxFeatureGenerationSize_21(4);
		__this->set_maxFeatureSize_22(6);
		__this->set_featureInterval_23(8);
		__this->set_sla_27(((int32_t)10000));
		__this->set_slaRecoverSpeed_28(((int32_t)100));
		__this->set_money_30(((int32_t)100));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Controller::Start()
extern "C"  void Controller_Start_m1509433144 (Controller_t2994601017 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_0007:
	{
		Controller_GenerateFeature_m729756744(__this, /*hidden argument*/NULL);
		int32_t L_0 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1));
	}

IL_0011:
	{
		int32_t L_1 = V_0;
		int32_t L_2 = __this->get_startingFeature_19();
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0007;
		}
	}
	{
		V_1 = 0;
		goto IL_003e;
	}

IL_0024:
	{
		PrepareArea_t3780924708 * L_3 = __this->get_prepareArea_3();
		BlockGenerator_t3413848165 * L_4 = __this->get_blockGenerator_4();
		NullCheck(L_4);
		Block_t1429612866 * L_5 = BlockGenerator_GenerateBlock_m3842112577(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		PrepareArea_AddBlock_m1617374146(L_3, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_003e:
	{
		int32_t L_7 = V_1;
		int32_t L_8 = __this->get_startingPrepareBlocks_15();
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0024;
		}
	}
	{
		return;
	}
}
// System.Void Controller::Update()
extern "C"  void Controller_Update_m3034091414 (Controller_t2994601017 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Controller_Update_m3034091414_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = Controller_UpdateGameover_m2451406716(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		int32_t L_1 = __this->get_state_11();
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_0035;
			}
			case 2:
			{
				goto IL_0040;
			}
		}
	}
	{
		goto IL_004b;
	}

IL_002a:
	{
		Controller_UpdateIdle_m2951809918(__this, /*hidden argument*/NULL);
		goto IL_0066;
	}

IL_0035:
	{
		Controller_UpdateBegun_m989443283(__this, /*hidden argument*/NULL);
		goto IL_0066;
	}

IL_0040:
	{
		Controller_UpdateInserted_m898415773(__this, /*hidden argument*/NULL);
		goto IL_0066;
	}

IL_004b:
	{
		int32_t L_3 = __this->get_state_11();
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(State_t3767615678_il2cpp_TypeInfo_var, &L_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral1533147717, L_5, /*hidden argument*/NULL);
		Exception_t * L_7 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7);
	}

IL_0066:
	{
		Controller_UpdateTick_m4211989094(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Controller::UpdateGameover()
extern "C"  bool Controller_UpdateGameover_m2451406716 (Controller_t2994601017 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Controller_UpdateGameover_m2451406716_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_sla_27();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = __this->get_money_30();
		if (L_1)
		{
			goto IL_0045;
		}
	}

IL_0016:
	{
		GameObject_t1113636619 * L_2 = __this->get_gameoverOverlay_8();
		NullCheck(L_2);
		GameObject_SetActive_m796801857(L_2, (bool)1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_3 = __this->get_gameoverText_9();
		NullCheck(L_3);
		GameObject_SetActive_m796801857(L_3, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_4 = Input_GetMouseButtonDown_m2081676745(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral1222789680, /*hidden argument*/NULL);
	}

IL_0043:
	{
		return (bool)1;
	}

IL_0045:
	{
		return (bool)0;
	}
}
// System.Void Controller::UpdateIdle()
extern "C"  void Controller_UpdateIdle_m2951809918 (Controller_t2994601017 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Controller_UpdateIdle_m2951809918_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Block_t1429612866 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButtonDown_m2081676745(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_007f;
		}
	}
	{
		Camera_t4157153871 * L_1 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_2 = Input_get_mousePosition_m1616496925(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t3722313464  L_3 = Camera_ScreenToWorldPoint_m3978588570(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		PrepareArea_t3780924708 * L_4 = __this->get_prepareArea_3();
		NullCheck(L_4);
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(L_4, /*hidden argument*/NULL);
		Vector3_t3722313464  L_6 = V_0;
		NullCheck(L_5);
		Vector3_t3722313464  L_7 = Transform_InverseTransformPoint_m1343916000(L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		PrepareArea_t3780924708 * L_8 = __this->get_prepareArea_3();
		float L_9 = (&V_1)->get_x_1();
		float L_10 = (&V_1)->get_y_2();
		NullCheck(L_8);
		Block_t1429612866 * L_11 = PrepareArea_GetBlock_m4252222892(L_8, L_9, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		Block_t1429612866 * L_12 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_13 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_12, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_007f;
		}
	}
	{
		Block_t1429612866 * L_14 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		Block_t1429612866 * L_15 = V_2;
		__this->set_begunBlock_12(L_15);
		PrepareArea_t3780924708 * L_16 = __this->get_prepareArea_3();
		Block_t1429612866 * L_17 = V_2;
		NullCheck(L_16);
		PrepareArea_RemoveBlock_m1909169224(L_16, L_17, /*hidden argument*/NULL);
		Board_t3688305287 * L_18 = __this->get_board_2();
		Block_t1429612866 * L_19 = V_2;
		NullCheck(L_18);
		Board_AddBlock_m3758815230(L_18, L_19, /*hidden argument*/NULL);
		__this->set_state_11(1);
	}

IL_007f:
	{
		return;
	}
}
// System.Void Controller::UpdateBegun()
extern "C"  void Controller_UpdateBegun_m989443283 (Controller_t2994601017 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Controller_UpdateBegun_m989443283_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		Board_t3688305287 * L_0 = __this->get_board_2();
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(L_0, /*hidden argument*/NULL);
		Camera_t4157153871 * L_2 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_3 = Input_get_mousePosition_m1616496925(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t3722313464  L_4 = Camera_ScreenToWorldPoint_m3978588570(L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t3722313464  L_5 = Transform_InverseTransformPoint_m1343916000(L_1, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		float L_6 = (&V_0)->get_x_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_7 = Mathf_RoundToInt_m1874334613(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		float L_8 = (&V_0)->get_y_2();
		int32_t L_9 = Mathf_RoundToInt_m1874334613(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		Board_t3688305287 * L_10 = __this->get_board_2();
		int32_t L_11 = V_1;
		int32_t L_12 = V_2;
		NullCheck(L_10);
		Block_t1429612866 * L_13 = Board_GetBlock_m2505650597(L_10, L_11, L_12, /*hidden argument*/NULL);
		__this->set_insertedBlock_13(L_13);
		Block_t1429612866 * L_14 = __this->get_insertedBlock_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_15 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_14, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00f7;
		}
	}
	{
		Block_t1429612866 * L_16 = __this->get_insertedBlock_13();
		Block_t1429612866 * L_17 = __this->get_begunBlock_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_18 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00f7;
		}
	}
	{
		Block_t1429612866 * L_19 = __this->get_insertedBlock_13();
		NullCheck(L_19);
		int32_t L_20 = Block_get_DisplayX_m1176785288(L_19, /*hidden argument*/NULL);
		Block_t1429612866 * L_21 = __this->get_begunBlock_12();
		NullCheck(L_21);
		int32_t L_22 = Block_get_DisplayX_m1176785288(L_21, /*hidden argument*/NULL);
		if ((((int32_t)L_20) <= ((int32_t)L_22)))
		{
			goto IL_009b;
		}
	}
	{
		__this->set_insertedDirection_14(0);
		goto IL_00f0;
	}

IL_009b:
	{
		Block_t1429612866 * L_23 = __this->get_insertedBlock_13();
		NullCheck(L_23);
		int32_t L_24 = Block_get_DisplayX_m1176785288(L_23, /*hidden argument*/NULL);
		Block_t1429612866 * L_25 = __this->get_begunBlock_12();
		NullCheck(L_25);
		int32_t L_26 = Block_get_DisplayX_m1176785288(L_25, /*hidden argument*/NULL);
		if ((((int32_t)L_24) >= ((int32_t)L_26)))
		{
			goto IL_00c2;
		}
	}
	{
		__this->set_insertedDirection_14(2);
		goto IL_00f0;
	}

IL_00c2:
	{
		Block_t1429612866 * L_27 = __this->get_insertedBlock_13();
		NullCheck(L_27);
		int32_t L_28 = Block_get_DisplayY_m3515437448(L_27, /*hidden argument*/NULL);
		Block_t1429612866 * L_29 = __this->get_begunBlock_12();
		NullCheck(L_29);
		int32_t L_30 = Block_get_DisplayY_m3515437448(L_29, /*hidden argument*/NULL);
		if ((((int32_t)L_28) <= ((int32_t)L_30)))
		{
			goto IL_00e9;
		}
	}
	{
		__this->set_insertedDirection_14(3);
		goto IL_00f0;
	}

IL_00e9:
	{
		__this->set_insertedDirection_14(1);
	}

IL_00f0:
	{
		__this->set_state_11(2);
	}

IL_00f7:
	{
		Block_t1429612866 * L_31 = __this->get_begunBlock_12();
		int32_t L_32 = V_1;
		NullCheck(L_31);
		Block_set_DisplayX_m168506037(L_31, L_32, /*hidden argument*/NULL);
		Block_t1429612866 * L_33 = __this->get_begunBlock_12();
		int32_t L_34 = V_2;
		NullCheck(L_33);
		Block_set_DisplayY_m4077732622(L_33, L_34, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_35 = Input_GetMouseButtonUp_m2924350851(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_0196;
		}
	}
	{
		Board_t3688305287 * L_36 = __this->get_board_2();
		Block_t1429612866 * L_37 = __this->get_begunBlock_12();
		NullCheck(L_37);
		int32_t L_38 = Block_get_DisplayX_m1176785288(L_37, /*hidden argument*/NULL);
		Block_t1429612866 * L_39 = __this->get_begunBlock_12();
		NullCheck(L_39);
		int32_t L_40 = Block_get_DisplayY_m3515437448(L_39, /*hidden argument*/NULL);
		NullCheck(L_36);
		bool L_41 = Board_WithinBoundary_m3209403396(L_36, L_38, L_40, /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_0166;
		}
	}
	{
		Block_t1429612866 * L_42 = __this->get_begunBlock_12();
		Block_t1429612866 * L_43 = __this->get_begunBlock_12();
		NullCheck(L_43);
		int32_t L_44 = Block_get_DisplayX_m1176785288(L_43, /*hidden argument*/NULL);
		Block_t1429612866 * L_45 = __this->get_begunBlock_12();
		NullCheck(L_45);
		int32_t L_46 = Block_get_DisplayY_m3515437448(L_45, /*hidden argument*/NULL);
		NullCheck(L_42);
		Block_SetAllPosition_m3483076702(L_42, L_44, L_46, /*hidden argument*/NULL);
		goto IL_0188;
	}

IL_0166:
	{
		Board_t3688305287 * L_47 = __this->get_board_2();
		Block_t1429612866 * L_48 = __this->get_begunBlock_12();
		NullCheck(L_47);
		Board_RemoveBlock_m20101843(L_47, L_48, /*hidden argument*/NULL);
		PrepareArea_t3780924708 * L_49 = __this->get_prepareArea_3();
		Block_t1429612866 * L_50 = __this->get_begunBlock_12();
		NullCheck(L_49);
		PrepareArea_AddBlock_m1617374146(L_49, L_50, /*hidden argument*/NULL);
	}

IL_0188:
	{
		__this->set_begunBlock_12((Block_t1429612866 *)NULL);
		__this->set_state_11(0);
	}

IL_0196:
	{
		return;
	}
}
// System.Void Controller::UpdateInserted()
extern "C"  void Controller_UpdateInserted_m898415773 (Controller_t2994601017 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Controller_UpdateInserted_m898415773_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Block_t1429612866 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	Block_t1429612866 * V_9 = NULL;
	List_1_t2901687608 * V_10 = NULL;
	Block_t1429612866 * V_11 = NULL;
	RuntimeObject* V_12 = NULL;
	Block_t1429612866 * V_13 = NULL;
	Enumerator_t495964189  V_14;
	memset(&V_14, 0, sizeof(V_14));
	Block_t1429612866 * V_15 = NULL;
	RuntimeObject* V_16 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Board_t3688305287 * L_0 = __this->get_board_2();
		NullCheck(L_0);
		RuntimeObject* L_1 = Board_GetBlocks_m1473346119(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Block>::GetEnumerator() */, IEnumerable_1_t409465755_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0046;
		}

IL_0016:
		{
			RuntimeObject* L_3 = V_1;
			NullCheck(L_3);
			Block_t1429612866 * L_4 = InterfaceFuncInvoker0< Block_t1429612866 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Block>::get_Current() */, IEnumerator_1_t1862183334_il2cpp_TypeInfo_var, L_3);
			V_0 = L_4;
			Block_t1429612866 * L_5 = V_0;
			Block_t1429612866 * L_6 = __this->get_begunBlock_12();
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_7 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_0046;
			}
		}

IL_002e:
		{
			Block_t1429612866 * L_8 = V_0;
			Block_t1429612866 * L_9 = V_0;
			NullCheck(L_9);
			int32_t L_10 = Block_get_X_m1483641575(L_9, /*hidden argument*/NULL);
			NullCheck(L_8);
			Block_set_DisplayX_m168506037(L_8, L_10, /*hidden argument*/NULL);
			Block_t1429612866 * L_11 = V_0;
			Block_t1429612866 * L_12 = V_0;
			NullCheck(L_12);
			int32_t L_13 = Block_get_Y_m1483641576(L_12, /*hidden argument*/NULL);
			NullCheck(L_11);
			Block_set_DisplayY_m4077732622(L_11, L_13, /*hidden argument*/NULL);
		}

IL_0046:
		{
			RuntimeObject* L_14 = V_1;
			NullCheck(L_14);
			bool L_15 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_14);
			if (L_15)
			{
				goto IL_0016;
			}
		}

IL_0051:
		{
			IL2CPP_LEAVE(0x63, FINALLY_0056);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0056;
	}

FINALLY_0056:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_16 = V_1;
			if (!L_16)
			{
				goto IL_0062;
			}
		}

IL_005c:
		{
			RuntimeObject* L_17 = V_1;
			NullCheck(L_17);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_17);
		}

IL_0062:
		{
			IL2CPP_END_FINALLY(86)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(86)
	{
		IL2CPP_JUMP_TBL(0x63, IL_0063)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0063:
	{
		Camera_t4157153871 * L_18 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_19 = Input_get_mousePosition_m1616496925(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t3722313464  L_20 = Camera_ScreenToWorldPoint_m3978588570(L_18, L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		int32_t L_21 = __this->get_insertedDirection_14();
		if ((((int32_t)L_21) == ((int32_t)3)))
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_22 = __this->get_insertedDirection_14();
		if ((!(((uint32_t)L_22) == ((uint32_t)1))))
		{
			goto IL_00a7;
		}
	}

IL_008b:
	{
		Block_t1429612866 * L_23 = __this->get_begunBlock_12();
		float L_24 = (&V_2)->get_y_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_25 = Mathf_RoundToInt_m1874334613(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		Block_set_DisplayY_m4077732622(L_23, L_25, /*hidden argument*/NULL);
		goto IL_00be;
	}

IL_00a7:
	{
		Block_t1429612866 * L_26 = __this->get_begunBlock_12();
		float L_27 = (&V_2)->get_x_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_28 = Mathf_RoundToInt_m1874334613(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		Block_set_DisplayX_m168506037(L_26, L_28, /*hidden argument*/NULL);
	}

IL_00be:
	{
		Block_t1429612866 * L_29 = __this->get_insertedBlock_13();
		NullCheck(L_29);
		int32_t L_30 = Block_get_X_m1483641575(L_29, /*hidden argument*/NULL);
		V_3 = L_30;
		Block_t1429612866 * L_31 = __this->get_insertedBlock_13();
		NullCheck(L_31);
		int32_t L_32 = Block_get_Y_m1483641576(L_31, /*hidden argument*/NULL);
		V_4 = L_32;
		V_5 = 0;
		V_6 = 0;
		V_7 = 0;
		int32_t L_33 = __this->get_insertedDirection_14();
		V_8 = L_33;
		int32_t L_34 = V_8;
		switch (L_34)
		{
			case 0:
			{
				goto IL_0104;
			}
			case 1:
			{
				goto IL_0127;
			}
			case 2:
			{
				goto IL_014a;
			}
			case 3:
			{
				goto IL_016d;
			}
		}
	}
	{
		goto IL_0190;
	}

IL_0104:
	{
		Block_t1429612866 * L_35 = __this->get_begunBlock_12();
		NullCheck(L_35);
		int32_t L_36 = Block_get_DisplayX_m1176785288(L_35, /*hidden argument*/NULL);
		Block_t1429612866 * L_37 = __this->get_insertedBlock_13();
		NullCheck(L_37);
		int32_t L_38 = Block_get_X_m1483641575(L_37, /*hidden argument*/NULL);
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)L_38)), (int32_t)1));
		V_6 = 1;
		goto IL_019b;
	}

IL_0127:
	{
		Block_t1429612866 * L_39 = __this->get_insertedBlock_13();
		NullCheck(L_39);
		int32_t L_40 = Block_get_Y_m1483641576(L_39, /*hidden argument*/NULL);
		Block_t1429612866 * L_41 = __this->get_begunBlock_12();
		NullCheck(L_41);
		int32_t L_42 = Block_get_DisplayY_m3515437448(L_41, /*hidden argument*/NULL);
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_40, (int32_t)L_42)), (int32_t)1));
		V_7 = (-1);
		goto IL_019b;
	}

IL_014a:
	{
		Block_t1429612866 * L_43 = __this->get_insertedBlock_13();
		NullCheck(L_43);
		int32_t L_44 = Block_get_X_m1483641575(L_43, /*hidden argument*/NULL);
		Block_t1429612866 * L_45 = __this->get_begunBlock_12();
		NullCheck(L_45);
		int32_t L_46 = Block_get_DisplayX_m1176785288(L_45, /*hidden argument*/NULL);
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_44, (int32_t)L_46)), (int32_t)1));
		V_6 = (-1);
		goto IL_019b;
	}

IL_016d:
	{
		Block_t1429612866 * L_47 = __this->get_begunBlock_12();
		NullCheck(L_47);
		int32_t L_48 = Block_get_DisplayY_m3515437448(L_47, /*hidden argument*/NULL);
		Block_t1429612866 * L_49 = __this->get_insertedBlock_13();
		NullCheck(L_49);
		int32_t L_50 = Block_get_Y_m1483641576(L_49, /*hidden argument*/NULL);
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_48, (int32_t)L_50)), (int32_t)1));
		V_7 = 1;
		goto IL_019b;
	}

IL_0190:
	{
		Exception_t * L_51 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_51, _stringLiteral191864396, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_51);
	}

IL_019b:
	{
		int32_t L_52 = V_5;
		if ((((int32_t)L_52) > ((int32_t)0)))
		{
			goto IL_01ab;
		}
	}
	{
		__this->set_state_11(1);
		return;
	}

IL_01ab:
	{
		goto IL_020c;
	}

IL_01b0:
	{
		Board_t3688305287 * L_53 = __this->get_board_2();
		int32_t L_54 = V_3;
		int32_t L_55 = V_4;
		NullCheck(L_53);
		Block_t1429612866 * L_56 = Board_GetBlock_m2505650597(L_53, L_54, L_55, /*hidden argument*/NULL);
		V_9 = L_56;
		Block_t1429612866 * L_57 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_58 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_57, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_58)
		{
			goto IL_01d8;
		}
	}
	{
		int32_t L_59 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_59, (int32_t)1));
		goto IL_0200;
	}

IL_01d8:
	{
		Block_t1429612866 * L_60 = V_9;
		Block_t1429612866 * L_61 = V_9;
		NullCheck(L_61);
		int32_t L_62 = Block_get_X_m1483641575(L_61, /*hidden argument*/NULL);
		int32_t L_63 = V_6;
		int32_t L_64 = V_5;
		NullCheck(L_60);
		Block_set_DisplayX_m168506037(L_60, ((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_63, (int32_t)L_64)))), /*hidden argument*/NULL);
		Block_t1429612866 * L_65 = V_9;
		Block_t1429612866 * L_66 = V_9;
		NullCheck(L_66);
		int32_t L_67 = Block_get_Y_m1483641576(L_66, /*hidden argument*/NULL);
		int32_t L_68 = V_7;
		int32_t L_69 = V_5;
		NullCheck(L_65);
		Block_set_DisplayY_m4077732622(L_65, ((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_68, (int32_t)L_69)))), /*hidden argument*/NULL);
	}

IL_0200:
	{
		int32_t L_70 = V_3;
		int32_t L_71 = V_6;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)L_71));
		int32_t L_72 = V_4;
		int32_t L_73 = V_7;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)L_73));
	}

IL_020c:
	{
		int32_t L_74 = V_5;
		if ((((int32_t)L_74) > ((int32_t)0)))
		{
			goto IL_01b0;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_75 = Input_GetMouseButtonUp_m2924350851(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_75)
		{
			goto IL_03f9;
		}
	}
	{
		Board_t3688305287 * L_76 = __this->get_board_2();
		Block_t1429612866 * L_77 = __this->get_begunBlock_12();
		NullCheck(L_77);
		int32_t L_78 = Block_get_DisplayX_m1176785288(L_77, /*hidden argument*/NULL);
		Block_t1429612866 * L_79 = __this->get_begunBlock_12();
		NullCheck(L_79);
		int32_t L_80 = Block_get_DisplayY_m3515437448(L_79, /*hidden argument*/NULL);
		NullCheck(L_76);
		bool L_81 = Board_WithinBoundary_m3209403396(L_76, L_78, L_80, /*hidden argument*/NULL);
		if (!L_81)
		{
			goto IL_0374;
		}
	}
	{
		List_1_t2901687608 * L_82 = (List_1_t2901687608 *)il2cpp_codegen_object_new(List_1_t2901687608_il2cpp_TypeInfo_var);
		List_1__ctor_m1265523406(L_82, /*hidden argument*/List_1__ctor_m1265523406_RuntimeMethod_var);
		V_10 = L_82;
		Board_t3688305287 * L_83 = __this->get_board_2();
		NullCheck(L_83);
		RuntimeObject* L_84 = Board_GetBlocks_m1473346119(L_83, /*hidden argument*/NULL);
		NullCheck(L_84);
		RuntimeObject* L_85 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Block>::GetEnumerator() */, IEnumerable_1_t409465755_il2cpp_TypeInfo_var, L_84);
		V_12 = L_85;
	}

IL_025e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_02f3;
		}

IL_0263:
		{
			RuntimeObject* L_86 = V_12;
			NullCheck(L_86);
			Block_t1429612866 * L_87 = InterfaceFuncInvoker0< Block_t1429612866 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Block>::get_Current() */, IEnumerator_1_t1862183334_il2cpp_TypeInfo_var, L_86);
			V_11 = L_87;
			Board_t3688305287 * L_88 = __this->get_board_2();
			Block_t1429612866 * L_89 = V_11;
			NullCheck(L_89);
			int32_t L_90 = Block_get_DisplayX_m1176785288(L_89, /*hidden argument*/NULL);
			Block_t1429612866 * L_91 = V_11;
			NullCheck(L_91);
			int32_t L_92 = Block_get_DisplayY_m3515437448(L_91, /*hidden argument*/NULL);
			NullCheck(L_88);
			bool L_93 = Board_WithinBoundary_m3209403396(L_88, L_90, L_92, /*hidden argument*/NULL);
			if (L_93)
			{
				goto IL_0298;
			}
		}

IL_028a:
		{
			List_1_t2901687608 * L_94 = V_10;
			Block_t1429612866 * L_95 = V_11;
			NullCheck(L_94);
			List_1_Add_m1148009476(L_94, L_95, /*hidden argument*/List_1_Add_m1148009476_RuntimeMethod_var);
			goto IL_02f3;
		}

IL_0298:
		{
			Block_t1429612866 * L_96 = V_11;
			NullCheck(L_96);
			int32_t L_97 = Block_get_DisplayX_m1176785288(L_96, /*hidden argument*/NULL);
			Block_t1429612866 * L_98 = V_11;
			NullCheck(L_98);
			int32_t L_99 = Block_get_X_m1483641575(L_98, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_97) == ((uint32_t)L_99))))
			{
				goto IL_02be;
			}
		}

IL_02ab:
		{
			Block_t1429612866 * L_100 = V_11;
			NullCheck(L_100);
			int32_t L_101 = Block_get_DisplayY_m3515437448(L_100, /*hidden argument*/NULL);
			Block_t1429612866 * L_102 = V_11;
			NullCheck(L_102);
			int32_t L_103 = Block_get_Y_m1483641576(L_102, /*hidden argument*/NULL);
			if ((((int32_t)L_101) == ((int32_t)L_103)))
			{
				goto IL_02de;
			}
		}

IL_02be:
		{
			Block_t1429612866 * L_104 = V_11;
			NullCheck(L_104);
			Block_set_OnFire_m2016653161(L_104, (bool)0, /*hidden argument*/NULL);
			Block_t1429612866 * L_105 = V_11;
			NullCheck(L_105);
			Block_set_OnWarning_m1793844659(L_105, (bool)0, /*hidden argument*/NULL);
			Block_t1429612866 * L_106 = V_11;
			NullCheck(L_106);
			Block_set_NoFireCount_m1637704058(L_106, 0, /*hidden argument*/NULL);
			Block_t1429612866 * L_107 = V_11;
			NullCheck(L_107);
			Block_set_OnWarningCount_m497880217(L_107, 0, /*hidden argument*/NULL);
		}

IL_02de:
		{
			Block_t1429612866 * L_108 = V_11;
			Block_t1429612866 * L_109 = V_11;
			NullCheck(L_109);
			int32_t L_110 = Block_get_DisplayX_m1176785288(L_109, /*hidden argument*/NULL);
			Block_t1429612866 * L_111 = V_11;
			NullCheck(L_111);
			int32_t L_112 = Block_get_DisplayY_m3515437448(L_111, /*hidden argument*/NULL);
			NullCheck(L_108);
			Block_SetAllPosition_m3483076702(L_108, L_110, L_112, /*hidden argument*/NULL);
		}

IL_02f3:
		{
			RuntimeObject* L_113 = V_12;
			NullCheck(L_113);
			bool L_114 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_113);
			if (L_114)
			{
				goto IL_0263;
			}
		}

IL_02ff:
		{
			IL2CPP_LEAVE(0x313, FINALLY_0304);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0304;
	}

FINALLY_0304:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_115 = V_12;
			if (!L_115)
			{
				goto IL_0312;
			}
		}

IL_030b:
		{
			RuntimeObject* L_116 = V_12;
			NullCheck(L_116);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_116);
		}

IL_0312:
		{
			IL2CPP_END_FINALLY(772)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(772)
	{
		IL2CPP_JUMP_TBL(0x313, IL_0313)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0313:
	{
		List_1_t2901687608 * L_117 = V_10;
		NullCheck(L_117);
		Enumerator_t495964189  L_118 = List_1_GetEnumerator_m2009197239(L_117, /*hidden argument*/List_1_GetEnumerator_m2009197239_RuntimeMethod_var);
		V_14 = L_118;
	}

IL_031c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0350;
		}

IL_0321:
		{
			Block_t1429612866 * L_119 = Enumerator_get_Current_m236452785((&V_14), /*hidden argument*/Enumerator_get_Current_m236452785_RuntimeMethod_var);
			V_13 = L_119;
			Board_t3688305287 * L_120 = __this->get_board_2();
			Block_t1429612866 * L_121 = V_13;
			NullCheck(L_120);
			Board_RemoveBlock_m20101843(L_120, L_121, /*hidden argument*/NULL);
			Block_t1429612866 * L_122 = V_13;
			NullCheck(L_122);
			GameObject_t1113636619 * L_123 = Component_get_gameObject_m442555142(L_122, /*hidden argument*/NULL);
			NullCheck(L_123);
			GameObject_SetActive_m796801857(L_123, (bool)0, /*hidden argument*/NULL);
			Block_t1429612866 * L_124 = V_13;
			NullCheck(L_124);
			GameObject_t1113636619 * L_125 = Component_get_gameObject_m442555142(L_124, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			Object_Destroy_m565254235(NULL /*static, unused*/, L_125, /*hidden argument*/NULL);
		}

IL_0350:
		{
			bool L_126 = Enumerator_MoveNext_m4263545981((&V_14), /*hidden argument*/Enumerator_MoveNext_m4263545981_RuntimeMethod_var);
			if (L_126)
			{
				goto IL_0321;
			}
		}

IL_035c:
		{
			IL2CPP_LEAVE(0x36F, FINALLY_0361);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0361;
	}

FINALLY_0361:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3610076621((&V_14), /*hidden argument*/Enumerator_Dispose_m3610076621_RuntimeMethod_var);
		IL2CPP_END_FINALLY(865)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(865)
	{
		IL2CPP_JUMP_TBL(0x36F, IL_036f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_036f:
	{
		goto IL_03eb;
	}

IL_0374:
	{
		Board_t3688305287 * L_127 = __this->get_board_2();
		Block_t1429612866 * L_128 = __this->get_begunBlock_12();
		NullCheck(L_127);
		Board_RemoveBlock_m20101843(L_127, L_128, /*hidden argument*/NULL);
		PrepareArea_t3780924708 * L_129 = __this->get_prepareArea_3();
		Block_t1429612866 * L_130 = __this->get_begunBlock_12();
		NullCheck(L_129);
		PrepareArea_AddBlock_m1617374146(L_129, L_130, /*hidden argument*/NULL);
		Board_t3688305287 * L_131 = __this->get_board_2();
		NullCheck(L_131);
		RuntimeObject* L_132 = Board_GetBlocks_m1473346119(L_131, /*hidden argument*/NULL);
		NullCheck(L_132);
		RuntimeObject* L_133 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Block>::GetEnumerator() */, IEnumerable_1_t409465755_il2cpp_TypeInfo_var, L_132);
		V_16 = L_133;
	}

IL_03a8:
	try
	{ // begin try (depth: 1)
		{
			goto IL_03cb;
		}

IL_03ad:
		{
			RuntimeObject* L_134 = V_16;
			NullCheck(L_134);
			Block_t1429612866 * L_135 = InterfaceFuncInvoker0< Block_t1429612866 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Block>::get_Current() */, IEnumerator_1_t1862183334_il2cpp_TypeInfo_var, L_134);
			V_15 = L_135;
			Block_t1429612866 * L_136 = V_15;
			Block_t1429612866 * L_137 = V_15;
			NullCheck(L_137);
			int32_t L_138 = Block_get_X_m1483641575(L_137, /*hidden argument*/NULL);
			Block_t1429612866 * L_139 = V_15;
			NullCheck(L_139);
			int32_t L_140 = Block_get_Y_m1483641576(L_139, /*hidden argument*/NULL);
			NullCheck(L_136);
			Block_SetAllPosition_m3483076702(L_136, L_138, L_140, /*hidden argument*/NULL);
		}

IL_03cb:
		{
			RuntimeObject* L_141 = V_16;
			NullCheck(L_141);
			bool L_142 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_141);
			if (L_142)
			{
				goto IL_03ad;
			}
		}

IL_03d7:
		{
			IL2CPP_LEAVE(0x3EB, FINALLY_03dc);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_03dc;
	}

FINALLY_03dc:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_143 = V_16;
			if (!L_143)
			{
				goto IL_03ea;
			}
		}

IL_03e3:
		{
			RuntimeObject* L_144 = V_16;
			NullCheck(L_144);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_144);
		}

IL_03ea:
		{
			IL2CPP_END_FINALLY(988)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(988)
	{
		IL2CPP_JUMP_TBL(0x3EB, IL_03eb)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_03eb:
	{
		__this->set_begunBlock_12((Block_t1429612866 *)NULL);
		__this->set_state_11(0);
	}

IL_03f9:
	{
		return;
	}
}
// System.Void Controller::UpdateTick()
extern "C"  void Controller_UpdateTick_m4211989094 (Controller_t2994601017 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_timeCount_34();
		float L_1 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_timeCount_34(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		goto IL_002f;
	}

IL_0017:
	{
		float L_2 = __this->get_timeCount_34();
		__this->set_timeCount_34(((float)il2cpp_codegen_subtract((float)L_2, (float)(1.0f))));
		Controller_Tick_m2530191668(__this, /*hidden argument*/NULL);
	}

IL_002f:
	{
		float L_3 = __this->get_timeCount_34();
		if ((((float)L_3) > ((float)(0.0f))))
		{
			goto IL_0017;
		}
	}
	{
		return;
	}
}
// System.Void Controller::Tick()
extern "C"  void Controller_Tick_m2530191668 (Controller_t2994601017 * __this, const RuntimeMethod* method)
{
	{
		Controller_TickFeature_m229797711(__this, /*hidden argument*/NULL);
		Controller_TickPrepare_m2256266233(__this, /*hidden argument*/NULL);
		Controller_TickFire_m973793266(__this, /*hidden argument*/NULL);
		Controller_TickSLA_m1419395813(__this, /*hidden argument*/NULL);
		Controller_TickBGM_m3021719986(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Controller::TickFeature()
extern "C"  void Controller_TickFeature_m229797711 (Controller_t2994601017 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_featureIntervalCount_24();
		__this->set_featureIntervalCount_24(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		int32_t L_1 = __this->get_featureIntervalCount_24();
		int32_t L_2 = __this->get_featureInterval_23();
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0058;
		}
	}
	{
		__this->set_featureIntervalCount_24(0);
		Controller_GenerateFeature_m729756744(__this, /*hidden argument*/NULL);
		FeatureManager_t1814774872 * L_3 = __this->get_featureManager_5();
		NullCheck(L_3);
		int32_t L_4 = FeatureManager_Count_m2084563203(L_3, /*hidden argument*/NULL);
		int32_t L_5 = __this->get_maxFeatureSize_22();
		if ((((int32_t)L_4) <= ((int32_t)L_5)))
		{
			goto IL_0058;
		}
	}
	{
		FeatureManager_t1814774872 * L_6 = __this->get_featureManager_5();
		NullCheck(L_6);
		FeatureManager_Pop_m189944667(L_6, /*hidden argument*/NULL);
		FeatureManager_t1814774872 * L_7 = __this->get_featureManager_5();
		NullCheck(L_7);
		FeatureManager_RefreshPositions_m428705523(L_7, /*hidden argument*/NULL);
	}

IL_0058:
	{
		return;
	}
}
// System.Void Controller::GenerateFeature()
extern "C"  void Controller_GenerateFeature_m729756744 (Controller_t2994601017 * __this, const RuntimeMethod* method)
{
	{
		FeatureManager_t1814774872 * L_0 = __this->get_featureManager_5();
		int32_t L_1 = __this->get_minFeatureGenerationSize_20();
		int32_t L_2 = __this->get_maxFeatureGenerationSize_21();
		int32_t L_3 = Random_Range_m4054026115(NULL /*static, unused*/, L_1, ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_0);
		FeatureManager_Generate2_m2011031179(L_0, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Controller::TickPrepare()
extern "C"  void Controller_TickPrepare_m2256266233 (Controller_t2994601017 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_prepareBlockCount_18();
		__this->set_prepareBlockCount_18(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		int32_t L_1 = __this->get_prepareBlockCount_18();
		int32_t L_2 = __this->get_prepareBlockInterval_17();
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0052;
		}
	}
	{
		__this->set_prepareBlockCount_18(0);
		PrepareArea_t3780924708 * L_3 = __this->get_prepareArea_3();
		NullCheck(L_3);
		int32_t L_4 = PrepareArea_Count_m1980732666(L_3, /*hidden argument*/NULL);
		int32_t L_5 = __this->get_maxPrepareBlocks_16();
		if ((((int32_t)L_4) > ((int32_t)L_5)))
		{
			goto IL_0052;
		}
	}
	{
		PrepareArea_t3780924708 * L_6 = __this->get_prepareArea_3();
		BlockGenerator_t3413848165 * L_7 = __this->get_blockGenerator_4();
		NullCheck(L_7);
		Block_t1429612866 * L_8 = BlockGenerator_GenerateBlock_m3842112577(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		PrepareArea_AddBlock_m1617374146(L_6, L_8, /*hidden argument*/NULL);
	}

IL_0052:
	{
		return;
	}
}
// System.Void Controller::TickSLA()
extern "C"  void Controller_TickSLA_m1419395813 (Controller_t2994601017 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Controller_TickSLA_m1419395813_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BlockMap_t3606162517 * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	Feature_t1326242729 * V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Board_t3688305287 * L_0 = __this->get_board_2();
		NullCheck(L_0);
		RuntimeObject* L_1 = Board_GetBlocks_m1473346119(L_0, /*hidden argument*/NULL);
		BlockMap_t3606162517 * L_2 = (BlockMap_t3606162517 *)il2cpp_codegen_object_new(BlockMap_t3606162517_il2cpp_TypeInfo_var);
		BlockMap__ctor_m2215885815(L_2, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = 0;
		V_2 = (bool)1;
		FeatureManager_t1814774872 * L_3 = __this->get_featureManager_5();
		NullCheck(L_3);
		RuntimeObject* L_4 = FeatureManager_GetFeatures_m4033949054(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		RuntimeObject* L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Feature>::GetEnumerator() */, IEnumerable_1_t306095618_il2cpp_TypeInfo_var, L_4);
		V_4 = L_5;
	}

IL_0027:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0086;
		}

IL_002c:
		{
			RuntimeObject* L_6 = V_4;
			NullCheck(L_6);
			Feature_t1326242729 * L_7 = InterfaceFuncInvoker0< Feature_t1326242729 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Feature>::get_Current() */, IEnumerator_1_t1758813197_il2cpp_TypeInfo_var, L_6);
			V_3 = L_7;
			Feature_t1326242729 * L_8 = V_3;
			BlockMap_t3606162517 * L_9 = V_0;
			NullCheck(L_8);
			bool L_10 = Feature_IsSatisfied_m196257584(L_8, L_9, /*hidden argument*/NULL);
			if (L_10)
			{
				goto IL_006f;
			}
		}

IL_0040:
		{
			int32_t L_11 = V_1;
			int32_t L_12 = L_11;
			RuntimeObject * L_13 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_12);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_14 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral3645192190, L_13, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_Log_m4051431634(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
			int32_t L_15 = __this->get_sla_27();
			Feature_t1326242729 * L_16 = V_3;
			NullCheck(L_16);
			int32_t L_17 = Feature_get_SLAEffect_m4050651046(L_16, /*hidden argument*/NULL);
			__this->set_sla_27(((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)L_17)));
			V_2 = (bool)0;
			goto IL_0082;
		}

IL_006f:
		{
			int32_t L_18 = __this->get_money_30();
			Feature_t1326242729 * L_19 = V_3;
			NullCheck(L_19);
			int32_t L_20 = Feature_get_Income_m3890961505(L_19, /*hidden argument*/NULL);
			__this->set_money_30(((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)L_20)));
		}

IL_0082:
		{
			int32_t L_21 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
		}

IL_0086:
		{
			RuntimeObject* L_22 = V_4;
			NullCheck(L_22);
			bool L_23 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_22);
			if (L_23)
			{
				goto IL_002c;
			}
		}

IL_0092:
		{
			IL2CPP_LEAVE(0xA6, FINALLY_0097);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0097;
	}

FINALLY_0097:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_24 = V_4;
			if (!L_24)
			{
				goto IL_00a5;
			}
		}

IL_009e:
		{
			RuntimeObject* L_25 = V_4;
			NullCheck(L_25);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_25);
		}

IL_00a5:
		{
			IL2CPP_END_FINALLY(151)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(151)
	{
		IL2CPP_JUMP_TBL(0xA6, IL_00a6)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00a6:
	{
		bool L_26 = V_2;
		if (!L_26)
		{
			goto IL_00bf;
		}
	}
	{
		int32_t L_27 = __this->get_sla_27();
		int32_t L_28 = __this->get_slaRecoverSpeed_28();
		__this->set_sla_27(((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)L_28)));
	}

IL_00bf:
	{
		int32_t L_29 = __this->get_sla_27();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_30 = Mathf_Clamp_m2756574208(NULL /*static, unused*/, L_29, 0, ((int32_t)10000), /*hidden argument*/NULL);
		__this->set_sla_27(L_30);
		int32_t L_31 = __this->get_sla_27();
		V_5 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)100), (int32_t)L_31))/(int32_t)((int32_t)10000)));
		Text_t1901882714 * L_32 = __this->get_slaPercentText_6();
		int32_t L_33 = V_5;
		int32_t L_34 = L_33;
		RuntimeObject * L_35 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_34);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_36 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral4292268766, L_35, /*hidden argument*/NULL);
		NullCheck(L_32);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_32, L_36);
		BlockMap_t3606162517 * L_37 = V_0;
		NullCheck(L_37);
		int32_t L_38 = BlockMap_Count_m1705567556(L_37, /*hidden argument*/NULL);
		V_6 = L_38;
		int32_t L_39 = __this->get_state_11();
		if ((!(((uint32_t)L_39) == ((uint32_t)1))))
		{
			goto IL_011d;
		}
	}
	{
		int32_t L_40 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_40, (int32_t)1));
	}

IL_011d:
	{
		int32_t L_41 = __this->get_money_30();
		int32_t L_42 = V_6;
		__this->set_money_30(((int32_t)il2cpp_codegen_subtract((int32_t)L_41, (int32_t)L_42)));
		int32_t L_43 = __this->get_money_30();
		if ((((int32_t)L_43) >= ((int32_t)0)))
		{
			goto IL_013f;
		}
	}
	{
		__this->set_money_30(0);
	}

IL_013f:
	{
		Text_t1901882714 * L_44 = __this->get_moneyText_7();
		int32_t L_45 = __this->get_money_30();
		int32_t L_46 = L_45;
		RuntimeObject * L_47 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_46);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_48 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral2091341590, L_47, /*hidden argument*/NULL);
		NullCheck(L_44);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_44, L_48);
		return;
	}
}
// System.Void Controller::TickFire()
extern "C"  void Controller_TickFire_m973793266 (Controller_t2994601017 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Controller_TickFire_m973793266_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Block_t1429612866 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Board_t3688305287 * L_0 = __this->get_board_2();
		NullCheck(L_0);
		RuntimeObject* L_1 = Board_GetBlocks_m1473346119(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Block>::GetEnumerator() */, IEnumerable_1_t409465755_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00ce;
		}

IL_0016:
		{
			RuntimeObject* L_3 = V_1;
			NullCheck(L_3);
			Block_t1429612866 * L_4 = InterfaceFuncInvoker0< Block_t1429612866 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Block>::get_Current() */, IEnumerator_1_t1862183334_il2cpp_TypeInfo_var, L_3);
			V_0 = L_4;
			Block_t1429612866 * L_5 = __this->get_begunBlock_12();
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_6 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_5, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_0044;
			}
		}

IL_002e:
		{
			Block_t1429612866 * L_7 = __this->get_begunBlock_12();
			Block_t1429612866 * L_8 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_9 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_0044;
			}
		}

IL_003f:
		{
			goto IL_00ce;
		}

IL_0044:
		{
			Block_t1429612866 * L_10 = V_0;
			NullCheck(L_10);
			bool L_11 = Block_get_OnWarning_m2013193347(L_10, /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_007c;
			}
		}

IL_004f:
		{
			Block_t1429612866 * L_12 = V_0;
			Block_t1429612866 * L_13 = L_12;
			NullCheck(L_13);
			int32_t L_14 = Block_get_OnWarningCount_m957528029(L_13, /*hidden argument*/NULL);
			NullCheck(L_13);
			Block_set_OnWarningCount_m497880217(L_13, ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1)), /*hidden argument*/NULL);
			Block_t1429612866 * L_15 = V_0;
			NullCheck(L_15);
			int32_t L_16 = Block_get_OnWarningCount_m957528029(L_15, /*hidden argument*/NULL);
			if ((((int32_t)L_16) <= ((int32_t)4)))
			{
				goto IL_0077;
			}
		}

IL_0069:
		{
			Block_t1429612866 * L_17 = V_0;
			NullCheck(L_17);
			Block_set_OnWarning_m1793844659(L_17, (bool)0, /*hidden argument*/NULL);
			Block_t1429612866 * L_18 = V_0;
			NullCheck(L_18);
			Block_set_OnFire_m2016653161(L_18, (bool)1, /*hidden argument*/NULL);
		}

IL_0077:
		{
			goto IL_00ce;
		}

IL_007c:
		{
			Block_t1429612866 * L_19 = V_0;
			NullCheck(L_19);
			bool L_20 = Block_get_OnWarning_m2013193347(L_19, /*hidden argument*/NULL);
			if (L_20)
			{
				goto IL_00ce;
			}
		}

IL_0087:
		{
			Block_t1429612866 * L_21 = V_0;
			NullCheck(L_21);
			bool L_22 = Block_get_OnFire_m1491048475(L_21, /*hidden argument*/NULL);
			if (L_22)
			{
				goto IL_00ce;
			}
		}

IL_0092:
		{
			int32_t L_23 = Random_Range_m4054026115(NULL /*static, unused*/, 0, ((int32_t)30), /*hidden argument*/NULL);
			Block_t1429612866 * L_24 = V_0;
			NullCheck(L_24);
			int32_t L_25 = Block_get_NoFireCount_m1792051196(L_24, /*hidden argument*/NULL);
			if ((((int32_t)L_23) >= ((int32_t)L_25)))
			{
				goto IL_00b8;
			}
		}

IL_00a5:
		{
			Block_t1429612866 * L_26 = V_0;
			NullCheck(L_26);
			Block_set_OnWarning_m1793844659(L_26, (bool)1, /*hidden argument*/NULL);
			Block_t1429612866 * L_27 = V_0;
			NullCheck(L_27);
			Block_set_OnWarningCount_m497880217(L_27, 0, /*hidden argument*/NULL);
			goto IL_00ce;
		}

IL_00b8:
		{
			Block_t1429612866 * L_28 = V_0;
			Block_t1429612866 * L_29 = V_0;
			NullCheck(L_29);
			int32_t L_30 = Block_get_NoFireCount_m1792051196(L_29, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
			int32_t L_31 = Mathf_Clamp_m2756574208(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1)), 0, ((int32_t)10), /*hidden argument*/NULL);
			NullCheck(L_28);
			Block_set_NoFireCount_m1637704058(L_28, L_31, /*hidden argument*/NULL);
		}

IL_00ce:
		{
			RuntimeObject* L_32 = V_1;
			NullCheck(L_32);
			bool L_33 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_32);
			if (L_33)
			{
				goto IL_0016;
			}
		}

IL_00d9:
		{
			IL2CPP_LEAVE(0xEB, FINALLY_00de);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00de;
	}

FINALLY_00de:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_1;
			if (!L_34)
			{
				goto IL_00ea;
			}
		}

IL_00e4:
		{
			RuntimeObject* L_35 = V_1;
			NullCheck(L_35);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_35);
		}

IL_00ea:
		{
			IL2CPP_END_FINALLY(222)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(222)
	{
		IL2CPP_JUMP_TBL(0xEB, IL_00eb)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00eb:
	{
		return;
	}
}
// System.Void Controller::TickBGM()
extern "C"  void Controller_TickBGM_m3021719986 (Controller_t2994601017 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Controller_TickBGM_m3021719986_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Block_t1429612866 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_sla_27();
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)3000))))
		{
			goto IL_001c;
		}
	}
	{
		SoundManager_t2102329059 * L_1 = __this->get_soundManager_10();
		NullCheck(L_1);
		SoundManager_PlayOnFire_m1318771670(L_1, /*hidden argument*/NULL);
		return;
	}

IL_001c:
	{
		Board_t3688305287 * L_2 = __this->get_board_2();
		NullCheck(L_2);
		RuntimeObject* L_3 = Board_GetBlocks_m1473346119(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		RuntimeObject* L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Block>::GetEnumerator() */, IEnumerable_1_t409465755_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}

IL_002d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0054;
		}

IL_0032:
		{
			RuntimeObject* L_5 = V_1;
			NullCheck(L_5);
			Block_t1429612866 * L_6 = InterfaceFuncInvoker0< Block_t1429612866 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Block>::get_Current() */, IEnumerator_1_t1862183334_il2cpp_TypeInfo_var, L_5);
			V_0 = L_6;
			Block_t1429612866 * L_7 = V_0;
			NullCheck(L_7);
			bool L_8 = Block_get_OnFire_m1491048475(L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_0054;
			}
		}

IL_0044:
		{
			SoundManager_t2102329059 * L_9 = __this->get_soundManager_10();
			NullCheck(L_9);
			SoundManager_PlayOnFire_m1318771670(L_9, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x7C, FINALLY_0064);
		}

IL_0054:
		{
			RuntimeObject* L_10 = V_1;
			NullCheck(L_10);
			bool L_11 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_0032;
			}
		}

IL_005f:
		{
			IL2CPP_LEAVE(0x71, FINALLY_0064);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0064;
	}

FINALLY_0064:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_12 = V_1;
			if (!L_12)
			{
				goto IL_0070;
			}
		}

IL_006a:
		{
			RuntimeObject* L_13 = V_1;
			NullCheck(L_13);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_13);
		}

IL_0070:
		{
			IL2CPP_END_FINALLY(100)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(100)
	{
		IL2CPP_JUMP_TBL(0x7C, IL_007c)
		IL2CPP_JUMP_TBL(0x71, IL_0071)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0071:
	{
		SoundManager_t2102329059 * L_14 = __this->get_soundManager_10();
		NullCheck(L_14);
		SoundManager_PauseOnFire_m2825996707(L_14, /*hidden argument*/NULL);
	}

IL_007c:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Feature::.ctor()
extern "C"  void Feature__ctor_m2751144926 (Feature_t1326242729 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Feature__ctor_m2751144926_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t2901687608 * L_0 = (List_1_t2901687608 *)il2cpp_codegen_object_new(List_1_t2901687608_il2cpp_TypeInfo_var);
		List_1__ctor_m1265523406(L_0, /*hidden argument*/List_1__ctor_m1265523406_RuntimeMethod_var);
		__this->set_blocks_2(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Feature::get_Income()
extern "C"  int32_t Feature_get_Income_m3890961505 (Feature_t1326242729 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CIncomeU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Feature::set_Income(System.Int32)
extern "C"  void Feature_set_Income_m1730798806 (Feature_t1326242729 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CIncomeU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Int32 Feature::get_SLAEffect()
extern "C"  int32_t Feature_get_SLAEffect_m4050651046 (Feature_t1326242729 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CSLAEffectU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Feature::set_SLAEffect(System.Int32)
extern "C"  void Feature_set_SLAEffect_m2176273856 (Feature_t1326242729 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CSLAEffectU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<Block> Feature::GetBlocks()
extern "C"  RuntimeObject* Feature_GetBlocks_m1375471522 (Feature_t1326242729 * __this, const RuntimeMethod* method)
{
	{
		List_1_t2901687608 * L_0 = __this->get_blocks_2();
		return L_0;
	}
}
// System.Void Feature::AddBlock(Block)
extern "C"  void Feature_AddBlock_m3236566814 (Feature_t1326242729 * __this, Block_t1429612866 * ___block0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Feature_AddBlock_m3236566814_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Block_t1429612866 * L_0 = ___block0;
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(L_0, /*hidden argument*/NULL);
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_SetParent_m381167889(L_1, L_2, /*hidden argument*/NULL);
		Block_t1429612866 * L_3 = ___block0;
		Block_t1429612866 * L_4 = ___block0;
		NullCheck(L_4);
		int32_t L_5 = Block_get_X_m1483641575(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		Block_set_DisplayX_m168506037(L_3, L_5, /*hidden argument*/NULL);
		Block_t1429612866 * L_6 = ___block0;
		Block_t1429612866 * L_7 = ___block0;
		NullCheck(L_7);
		int32_t L_8 = Block_get_Y_m1483641576(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		Block_set_DisplayY_m4077732622(L_6, L_8, /*hidden argument*/NULL);
		List_1_t2901687608 * L_9 = __this->get_blocks_2();
		Block_t1429612866 * L_10 = ___block0;
		NullCheck(L_9);
		List_1_Add_m1148009476(L_9, L_10, /*hidden argument*/List_1_Add_m1148009476_RuntimeMethod_var);
		Feature_RefreshPositions_m3281415785(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Feature::RefreshPositions()
extern "C"  void Feature_RefreshPositions_m3281415785 (Feature_t1326242729 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Feature_RefreshPositions_m3281415785_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Block_t1429612866 * V_2 = NULL;
	Enumerator_t495964189  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Block_t1429612866 * V_4 = NULL;
	Enumerator_t495964189  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = 0;
		V_1 = 0;
		List_1_t2901687608 * L_0 = __this->get_blocks_2();
		NullCheck(L_0);
		Enumerator_t495964189  L_1 = List_1_GetEnumerator_m2009197239(L_0, /*hidden argument*/List_1_GetEnumerator_m2009197239_RuntimeMethod_var);
		V_3 = L_1;
	}

IL_0010:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0043;
		}

IL_0015:
		{
			Block_t1429612866 * L_2 = Enumerator_get_Current_m236452785((&V_3), /*hidden argument*/Enumerator_get_Current_m236452785_RuntimeMethod_var);
			V_2 = L_2;
			Block_t1429612866 * L_3 = V_2;
			NullCheck(L_3);
			int32_t L_4 = Block_get_X_m1483641575(L_3, /*hidden argument*/NULL);
			int32_t L_5 = V_0;
			if ((((int32_t)L_4) >= ((int32_t)L_5)))
			{
				goto IL_0030;
			}
		}

IL_0029:
		{
			Block_t1429612866 * L_6 = V_2;
			NullCheck(L_6);
			int32_t L_7 = Block_get_X_m1483641575(L_6, /*hidden argument*/NULL);
			V_0 = L_7;
		}

IL_0030:
		{
			Block_t1429612866 * L_8 = V_2;
			NullCheck(L_8);
			int32_t L_9 = Block_get_Y_m1483641576(L_8, /*hidden argument*/NULL);
			int32_t L_10 = V_1;
			if ((((int32_t)L_9) <= ((int32_t)L_10)))
			{
				goto IL_0043;
			}
		}

IL_003c:
		{
			Block_t1429612866 * L_11 = V_2;
			NullCheck(L_11);
			int32_t L_12 = Block_get_Y_m1483641576(L_11, /*hidden argument*/NULL);
			V_1 = L_12;
		}

IL_0043:
		{
			bool L_13 = Enumerator_MoveNext_m4263545981((&V_3), /*hidden argument*/Enumerator_MoveNext_m4263545981_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_0015;
			}
		}

IL_004f:
		{
			IL2CPP_LEAVE(0x62, FINALLY_0054);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0054;
	}

FINALLY_0054:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3610076621((&V_3), /*hidden argument*/Enumerator_Dispose_m3610076621_RuntimeMethod_var);
		IL2CPP_END_FINALLY(84)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(84)
	{
		IL2CPP_JUMP_TBL(0x62, IL_0062)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0062:
	{
		List_1_t2901687608 * L_14 = __this->get_blocks_2();
		NullCheck(L_14);
		Enumerator_t495964189  L_15 = List_1_GetEnumerator_m2009197239(L_14, /*hidden argument*/List_1_GetEnumerator_m2009197239_RuntimeMethod_var);
		V_5 = L_15;
	}

IL_006f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_009d;
		}

IL_0074:
		{
			Block_t1429612866 * L_16 = Enumerator_get_Current_m236452785((&V_5), /*hidden argument*/Enumerator_get_Current_m236452785_RuntimeMethod_var);
			V_4 = L_16;
			Block_t1429612866 * L_17 = V_4;
			Block_t1429612866 * L_18 = V_4;
			NullCheck(L_18);
			int32_t L_19 = Block_get_X_m1483641575(L_18, /*hidden argument*/NULL);
			int32_t L_20 = V_0;
			NullCheck(L_17);
			Block_set_DisplayX_m168506037(L_17, ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)L_20)), /*hidden argument*/NULL);
			Block_t1429612866 * L_21 = V_4;
			Block_t1429612866 * L_22 = V_4;
			NullCheck(L_22);
			int32_t L_23 = Block_get_Y_m1483641576(L_22, /*hidden argument*/NULL);
			int32_t L_24 = V_1;
			NullCheck(L_21);
			Block_set_DisplayY_m4077732622(L_21, ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)L_24)), /*hidden argument*/NULL);
		}

IL_009d:
		{
			bool L_25 = Enumerator_MoveNext_m4263545981((&V_5), /*hidden argument*/Enumerator_MoveNext_m4263545981_RuntimeMethod_var);
			if (L_25)
			{
				goto IL_0074;
			}
		}

IL_00a9:
		{
			IL2CPP_LEAVE(0xBC, FINALLY_00ae);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00ae;
	}

FINALLY_00ae:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3610076621((&V_5), /*hidden argument*/Enumerator_Dispose_m3610076621_RuntimeMethod_var);
		IL2CPP_END_FINALLY(174)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(174)
	{
		IL2CPP_JUMP_TBL(0xBC, IL_00bc)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00bc:
	{
		return;
	}
}
// System.Boolean Feature::IsSatisfied(BlockMap)
extern "C"  bool Feature_IsSatisfied_m196257584 (Feature_t1326242729 * __this, BlockMap_t3606162517 * ___existingBlocks0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Feature_IsSatisfied_m196257584_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Block_t1429612866 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	Block_t1429612866 * V_3 = NULL;
	Enumerator_t495964189  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Block_t1429612866 * V_5 = NULL;
	bool V_6 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t2901687608 * L_0 = __this->get_blocks_2();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m1090070239(L_0, /*hidden argument*/List_1_get_Count_m1090070239_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)1;
	}

IL_0012:
	{
		BlockMap_t3606162517 * L_2 = ___existingBlocks0;
		NullCheck(L_2);
		RuntimeObject* L_3 = BlockMap_GetEnumerator_m2761892506(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00c2;
		}

IL_001e:
		{
			RuntimeObject* L_4 = V_1;
			NullCheck(L_4);
			Block_t1429612866 * L_5 = InterfaceFuncInvoker0< Block_t1429612866 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Block>::get_Current() */, IEnumerator_1_t1862183334_il2cpp_TypeInfo_var, L_4);
			V_0 = L_5;
			V_2 = (bool)1;
			List_1_t2901687608 * L_6 = __this->get_blocks_2();
			NullCheck(L_6);
			Enumerator_t495964189  L_7 = List_1_GetEnumerator_m2009197239(L_6, /*hidden argument*/List_1_GetEnumerator_m2009197239_RuntimeMethod_var);
			V_4 = L_7;
		}

IL_0034:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0095;
			}

IL_0039:
			{
				Block_t1429612866 * L_8 = Enumerator_get_Current_m236452785((&V_4), /*hidden argument*/Enumerator_get_Current_m236452785_RuntimeMethod_var);
				V_3 = L_8;
				BlockMap_t3606162517 * L_9 = ___existingBlocks0;
				Block_t1429612866 * L_10 = V_0;
				NullCheck(L_10);
				int32_t L_11 = Block_get_X_m1483641575(L_10, /*hidden argument*/NULL);
				Block_t1429612866 * L_12 = V_3;
				NullCheck(L_12);
				int32_t L_13 = Block_get_X_m1483641575(L_12, /*hidden argument*/NULL);
				Block_t1429612866 * L_14 = V_0;
				NullCheck(L_14);
				int32_t L_15 = Block_get_Y_m1483641576(L_14, /*hidden argument*/NULL);
				Block_t1429612866 * L_16 = V_3;
				NullCheck(L_16);
				int32_t L_17 = Block_get_Y_m1483641576(L_16, /*hidden argument*/NULL);
				NullCheck(L_9);
				Block_t1429612866 * L_18 = BlockMap_Get_m1449095388(L_9, ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)L_13)), ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_17)), /*hidden argument*/NULL);
				V_5 = L_18;
				Block_t1429612866 * L_19 = V_5;
				IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
				bool L_20 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_19, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
				if (L_20)
				{
					goto IL_008e;
				}
			}

IL_0070:
			{
				Block_t1429612866 * L_21 = V_5;
				NullCheck(L_21);
				int32_t L_22 = Block_get_Color_m1669802801(L_21, /*hidden argument*/NULL);
				Block_t1429612866 * L_23 = V_3;
				NullCheck(L_23);
				int32_t L_24 = Block_get_Color_m1669802801(L_23, /*hidden argument*/NULL);
				if ((!(((uint32_t)L_22) == ((uint32_t)L_24))))
				{
					goto IL_008e;
				}
			}

IL_0082:
			{
				Block_t1429612866 * L_25 = V_5;
				NullCheck(L_25);
				bool L_26 = Block_get_OnFire_m1491048475(L_25, /*hidden argument*/NULL);
				if (!L_26)
				{
					goto IL_0095;
				}
			}

IL_008e:
			{
				V_2 = (bool)0;
				goto IL_00a1;
			}

IL_0095:
			{
				bool L_27 = Enumerator_MoveNext_m4263545981((&V_4), /*hidden argument*/Enumerator_MoveNext_m4263545981_RuntimeMethod_var);
				if (L_27)
				{
					goto IL_0039;
				}
			}

IL_00a1:
			{
				IL2CPP_LEAVE(0xB4, FINALLY_00a6);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00a6;
		}

FINALLY_00a6:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m3610076621((&V_4), /*hidden argument*/Enumerator_Dispose_m3610076621_RuntimeMethod_var);
			IL2CPP_END_FINALLY(166)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(166)
		{
			IL2CPP_JUMP_TBL(0xB4, IL_00b4)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_00b4:
		{
			bool L_28 = V_2;
			if (!L_28)
			{
				goto IL_00c2;
			}
		}

IL_00ba:
		{
			V_6 = (bool)1;
			IL2CPP_LEAVE(0xE1, FINALLY_00d2);
		}

IL_00c2:
		{
			RuntimeObject* L_29 = V_1;
			NullCheck(L_29);
			bool L_30 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_29);
			if (L_30)
			{
				goto IL_001e;
			}
		}

IL_00cd:
		{
			IL2CPP_LEAVE(0xDF, FINALLY_00d2);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00d2;
	}

FINALLY_00d2:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_31 = V_1;
			if (!L_31)
			{
				goto IL_00de;
			}
		}

IL_00d8:
		{
			RuntimeObject* L_32 = V_1;
			NullCheck(L_32);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_32);
		}

IL_00de:
		{
			IL2CPP_END_FINALLY(210)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(210)
	{
		IL2CPP_JUMP_TBL(0xE1, IL_00e1)
		IL2CPP_JUMP_TBL(0xDF, IL_00df)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00df:
	{
		return (bool)0;
	}

IL_00e1:
	{
		bool L_33 = V_6;
		return L_33;
	}
}
// System.Int32 Feature::Width()
extern "C"  int32_t Feature_Width_m546656546 (Feature_t1326242729 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Feature_Width_m546656546_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Block_t1429612866 * V_2 = NULL;
	Enumerator_t495964189  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = 0;
		V_1 = 0;
		List_1_t2901687608 * L_0 = __this->get_blocks_2();
		NullCheck(L_0);
		Enumerator_t495964189  L_1 = List_1_GetEnumerator_m2009197239(L_0, /*hidden argument*/List_1_GetEnumerator_m2009197239_RuntimeMethod_var);
		V_3 = L_1;
	}

IL_0010:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0043;
		}

IL_0015:
		{
			Block_t1429612866 * L_2 = Enumerator_get_Current_m236452785((&V_3), /*hidden argument*/Enumerator_get_Current_m236452785_RuntimeMethod_var);
			V_2 = L_2;
			Block_t1429612866 * L_3 = V_2;
			NullCheck(L_3);
			int32_t L_4 = Block_get_X_m1483641575(L_3, /*hidden argument*/NULL);
			int32_t L_5 = V_0;
			if ((((int32_t)L_4) >= ((int32_t)L_5)))
			{
				goto IL_0030;
			}
		}

IL_0029:
		{
			Block_t1429612866 * L_6 = V_2;
			NullCheck(L_6);
			int32_t L_7 = Block_get_X_m1483641575(L_6, /*hidden argument*/NULL);
			V_0 = L_7;
		}

IL_0030:
		{
			Block_t1429612866 * L_8 = V_2;
			NullCheck(L_8);
			int32_t L_9 = Block_get_X_m1483641575(L_8, /*hidden argument*/NULL);
			int32_t L_10 = V_1;
			if ((((int32_t)L_9) <= ((int32_t)L_10)))
			{
				goto IL_0043;
			}
		}

IL_003c:
		{
			Block_t1429612866 * L_11 = V_2;
			NullCheck(L_11);
			int32_t L_12 = Block_get_X_m1483641575(L_11, /*hidden argument*/NULL);
			V_1 = L_12;
		}

IL_0043:
		{
			bool L_13 = Enumerator_MoveNext_m4263545981((&V_3), /*hidden argument*/Enumerator_MoveNext_m4263545981_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_0015;
			}
		}

IL_004f:
		{
			IL2CPP_LEAVE(0x62, FINALLY_0054);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0054;
	}

FINALLY_0054:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3610076621((&V_3), /*hidden argument*/Enumerator_Dispose_m3610076621_RuntimeMethod_var);
		IL2CPP_END_FINALLY(84)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(84)
	{
		IL2CPP_JUMP_TBL(0x62, IL_0062)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0062:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = V_0;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)L_15)), (int32_t)1));
	}
}
// System.Int32 Feature::Height()
extern "C"  int32_t Feature_Height_m1463955683 (Feature_t1326242729 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Feature_Height_m1463955683_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Block_t1429612866 * V_2 = NULL;
	Enumerator_t495964189  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = 0;
		V_1 = 0;
		List_1_t2901687608 * L_0 = __this->get_blocks_2();
		NullCheck(L_0);
		Enumerator_t495964189  L_1 = List_1_GetEnumerator_m2009197239(L_0, /*hidden argument*/List_1_GetEnumerator_m2009197239_RuntimeMethod_var);
		V_3 = L_1;
	}

IL_0010:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0043;
		}

IL_0015:
		{
			Block_t1429612866 * L_2 = Enumerator_get_Current_m236452785((&V_3), /*hidden argument*/Enumerator_get_Current_m236452785_RuntimeMethod_var);
			V_2 = L_2;
			Block_t1429612866 * L_3 = V_2;
			NullCheck(L_3);
			int32_t L_4 = Block_get_Y_m1483641576(L_3, /*hidden argument*/NULL);
			int32_t L_5 = V_0;
			if ((((int32_t)L_4) >= ((int32_t)L_5)))
			{
				goto IL_0030;
			}
		}

IL_0029:
		{
			Block_t1429612866 * L_6 = V_2;
			NullCheck(L_6);
			int32_t L_7 = Block_get_Y_m1483641576(L_6, /*hidden argument*/NULL);
			V_0 = L_7;
		}

IL_0030:
		{
			Block_t1429612866 * L_8 = V_2;
			NullCheck(L_8);
			int32_t L_9 = Block_get_Y_m1483641576(L_8, /*hidden argument*/NULL);
			int32_t L_10 = V_1;
			if ((((int32_t)L_9) <= ((int32_t)L_10)))
			{
				goto IL_0043;
			}
		}

IL_003c:
		{
			Block_t1429612866 * L_11 = V_2;
			NullCheck(L_11);
			int32_t L_12 = Block_get_Y_m1483641576(L_11, /*hidden argument*/NULL);
			V_1 = L_12;
		}

IL_0043:
		{
			bool L_13 = Enumerator_MoveNext_m4263545981((&V_3), /*hidden argument*/Enumerator_MoveNext_m4263545981_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_0015;
			}
		}

IL_004f:
		{
			IL2CPP_LEAVE(0x62, FINALLY_0054);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0054;
	}

FINALLY_0054:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3610076621((&V_3), /*hidden argument*/Enumerator_Dispose_m3610076621_RuntimeMethod_var);
		IL2CPP_END_FINALLY(84)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(84)
	{
		IL2CPP_JUMP_TBL(0x62, IL_0062)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0062:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = V_0;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)L_15)), (int32_t)1));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FeatureManager::.ctor()
extern "C"  void FeatureManager__ctor_m3039915811 (FeatureManager_t1814774872 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FeatureManager__ctor_m3039915811_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t2798317471 * L_0 = (List_1_t2798317471 *)il2cpp_codegen_object_new(List_1_t2798317471_il2cpp_TypeInfo_var);
		List_1__ctor_m1620125414(L_0, /*hidden argument*/List_1__ctor_m1620125414_RuntimeMethod_var);
		__this->set_features_4(L_0);
		List_1_t2119180731 * L_1 = (List_1_t2119180731 *)il2cpp_codegen_object_new(List_1_t2119180731_il2cpp_TypeInfo_var);
		List_1__ctor_m2855100714(L_1, /*hidden argument*/List_1__ctor_m2855100714_RuntimeMethod_var);
		__this->set_positionPresets_5(L_1);
		__this->set_padding_6((1.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FeatureManager::Start()
extern "C"  void FeatureManager_Start_m3220313329 (FeatureManager_t1814774872 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void FeatureManager::CreatePositionPresets()
extern "C"  void FeatureManager_CreatePositionPresets_m987523800 (FeatureManager_t1814774872 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FeatureManager_CreatePositionPresets_m987523800_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t647105989 * V_0 = NULL;
	List_1_t647105989 * V_1 = NULL;
	List_1_t647105989 * V_2 = NULL;
	List_1_t647105989 * V_3 = NULL;
	List_1_t647105989 * V_4 = NULL;
	List_1_t647105989 * V_5 = NULL;
	List_1_t647105989 * V_6 = NULL;
	List_1_t647105989 * V_7 = NULL;
	List_1_t647105989 * V_8 = NULL;
	{
		List_1_t647105989 * L_0 = (List_1_t647105989 *)il2cpp_codegen_object_new(List_1_t647105989_il2cpp_TypeInfo_var);
		List_1__ctor_m3805068493(L_0, /*hidden argument*/List_1__ctor_m3805068493_RuntimeMethod_var);
		V_0 = L_0;
		List_1_t647105989 * L_1 = V_0;
		Vector2Int_t3469998543  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector2Int__ctor_m3872920888((&L_2), 0, 0, /*hidden argument*/NULL);
		NullCheck(L_1);
		List_1_Add_m1745602227(L_1, L_2, /*hidden argument*/List_1_Add_m1745602227_RuntimeMethod_var);
		List_1_t2119180731 * L_3 = __this->get_positionPresets_5();
		List_1_t647105989 * L_4 = V_0;
		NullCheck(L_3);
		List_1_Add_m2785703956(L_3, L_4, /*hidden argument*/List_1_Add_m2785703956_RuntimeMethod_var);
		List_1_t647105989 * L_5 = (List_1_t647105989 *)il2cpp_codegen_object_new(List_1_t647105989_il2cpp_TypeInfo_var);
		List_1__ctor_m3805068493(L_5, /*hidden argument*/List_1__ctor_m3805068493_RuntimeMethod_var);
		V_1 = L_5;
		List_1_t647105989 * L_6 = V_1;
		Vector2Int_t3469998543  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector2Int__ctor_m3872920888((&L_7), 0, 0, /*hidden argument*/NULL);
		NullCheck(L_6);
		List_1_Add_m1745602227(L_6, L_7, /*hidden argument*/List_1_Add_m1745602227_RuntimeMethod_var);
		List_1_t647105989 * L_8 = V_1;
		Vector2Int_t3469998543  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Vector2Int__ctor_m3872920888((&L_9), 0, (-1), /*hidden argument*/NULL);
		NullCheck(L_8);
		List_1_Add_m1745602227(L_8, L_9, /*hidden argument*/List_1_Add_m1745602227_RuntimeMethod_var);
		List_1_t2119180731 * L_10 = __this->get_positionPresets_5();
		List_1_t647105989 * L_11 = V_1;
		NullCheck(L_10);
		List_1_Add_m2785703956(L_10, L_11, /*hidden argument*/List_1_Add_m2785703956_RuntimeMethod_var);
		List_1_t647105989 * L_12 = (List_1_t647105989 *)il2cpp_codegen_object_new(List_1_t647105989_il2cpp_TypeInfo_var);
		List_1__ctor_m3805068493(L_12, /*hidden argument*/List_1__ctor_m3805068493_RuntimeMethod_var);
		V_2 = L_12;
		List_1_t647105989 * L_13 = V_2;
		Vector2Int_t3469998543  L_14;
		memset(&L_14, 0, sizeof(L_14));
		Vector2Int__ctor_m3872920888((&L_14), 0, 0, /*hidden argument*/NULL);
		NullCheck(L_13);
		List_1_Add_m1745602227(L_13, L_14, /*hidden argument*/List_1_Add_m1745602227_RuntimeMethod_var);
		List_1_t647105989 * L_15 = V_2;
		Vector2Int_t3469998543  L_16;
		memset(&L_16, 0, sizeof(L_16));
		Vector2Int__ctor_m3872920888((&L_16), 1, 0, /*hidden argument*/NULL);
		NullCheck(L_15);
		List_1_Add_m1745602227(L_15, L_16, /*hidden argument*/List_1_Add_m1745602227_RuntimeMethod_var);
		List_1_t2119180731 * L_17 = __this->get_positionPresets_5();
		List_1_t647105989 * L_18 = V_2;
		NullCheck(L_17);
		List_1_Add_m2785703956(L_17, L_18, /*hidden argument*/List_1_Add_m2785703956_RuntimeMethod_var);
		List_1_t647105989 * L_19 = (List_1_t647105989 *)il2cpp_codegen_object_new(List_1_t647105989_il2cpp_TypeInfo_var);
		List_1__ctor_m3805068493(L_19, /*hidden argument*/List_1__ctor_m3805068493_RuntimeMethod_var);
		V_3 = L_19;
		List_1_t647105989 * L_20 = V_3;
		Vector2Int_t3469998543  L_21;
		memset(&L_21, 0, sizeof(L_21));
		Vector2Int__ctor_m3872920888((&L_21), 0, 0, /*hidden argument*/NULL);
		NullCheck(L_20);
		List_1_Add_m1745602227(L_20, L_21, /*hidden argument*/List_1_Add_m1745602227_RuntimeMethod_var);
		List_1_t647105989 * L_22 = V_3;
		Vector2Int_t3469998543  L_23;
		memset(&L_23, 0, sizeof(L_23));
		Vector2Int__ctor_m3872920888((&L_23), 0, (-1), /*hidden argument*/NULL);
		NullCheck(L_22);
		List_1_Add_m1745602227(L_22, L_23, /*hidden argument*/List_1_Add_m1745602227_RuntimeMethod_var);
		List_1_t647105989 * L_24 = V_3;
		Vector2Int_t3469998543  L_25;
		memset(&L_25, 0, sizeof(L_25));
		Vector2Int__ctor_m3872920888((&L_25), 0, ((int32_t)-2), /*hidden argument*/NULL);
		NullCheck(L_24);
		List_1_Add_m1745602227(L_24, L_25, /*hidden argument*/List_1_Add_m1745602227_RuntimeMethod_var);
		List_1_t2119180731 * L_26 = __this->get_positionPresets_5();
		List_1_t647105989 * L_27 = V_3;
		NullCheck(L_26);
		List_1_Add_m2785703956(L_26, L_27, /*hidden argument*/List_1_Add_m2785703956_RuntimeMethod_var);
		List_1_t647105989 * L_28 = (List_1_t647105989 *)il2cpp_codegen_object_new(List_1_t647105989_il2cpp_TypeInfo_var);
		List_1__ctor_m3805068493(L_28, /*hidden argument*/List_1__ctor_m3805068493_RuntimeMethod_var);
		V_4 = L_28;
		List_1_t647105989 * L_29 = V_4;
		Vector2Int_t3469998543  L_30;
		memset(&L_30, 0, sizeof(L_30));
		Vector2Int__ctor_m3872920888((&L_30), 0, 0, /*hidden argument*/NULL);
		NullCheck(L_29);
		List_1_Add_m1745602227(L_29, L_30, /*hidden argument*/List_1_Add_m1745602227_RuntimeMethod_var);
		List_1_t647105989 * L_31 = V_4;
		Vector2Int_t3469998543  L_32;
		memset(&L_32, 0, sizeof(L_32));
		Vector2Int__ctor_m3872920888((&L_32), 0, (-1), /*hidden argument*/NULL);
		NullCheck(L_31);
		List_1_Add_m1745602227(L_31, L_32, /*hidden argument*/List_1_Add_m1745602227_RuntimeMethod_var);
		List_1_t647105989 * L_33 = V_4;
		Vector2Int_t3469998543  L_34;
		memset(&L_34, 0, sizeof(L_34));
		Vector2Int__ctor_m3872920888((&L_34), 1, (-1), /*hidden argument*/NULL);
		NullCheck(L_33);
		List_1_Add_m1745602227(L_33, L_34, /*hidden argument*/List_1_Add_m1745602227_RuntimeMethod_var);
		List_1_t2119180731 * L_35 = __this->get_positionPresets_5();
		List_1_t647105989 * L_36 = V_4;
		NullCheck(L_35);
		List_1_Add_m2785703956(L_35, L_36, /*hidden argument*/List_1_Add_m2785703956_RuntimeMethod_var);
		List_1_t647105989 * L_37 = (List_1_t647105989 *)il2cpp_codegen_object_new(List_1_t647105989_il2cpp_TypeInfo_var);
		List_1__ctor_m3805068493(L_37, /*hidden argument*/List_1__ctor_m3805068493_RuntimeMethod_var);
		V_5 = L_37;
		List_1_t647105989 * L_38 = V_5;
		Vector2Int_t3469998543  L_39;
		memset(&L_39, 0, sizeof(L_39));
		Vector2Int__ctor_m3872920888((&L_39), 0, 0, /*hidden argument*/NULL);
		NullCheck(L_38);
		List_1_Add_m1745602227(L_38, L_39, /*hidden argument*/List_1_Add_m1745602227_RuntimeMethod_var);
		List_1_t647105989 * L_40 = V_5;
		Vector2Int_t3469998543  L_41;
		memset(&L_41, 0, sizeof(L_41));
		Vector2Int__ctor_m3872920888((&L_41), 0, (-1), /*hidden argument*/NULL);
		NullCheck(L_40);
		List_1_Add_m1745602227(L_40, L_41, /*hidden argument*/List_1_Add_m1745602227_RuntimeMethod_var);
		List_1_t647105989 * L_42 = V_5;
		Vector2Int_t3469998543  L_43;
		memset(&L_43, 0, sizeof(L_43));
		Vector2Int__ctor_m3872920888((&L_43), 1, 0, /*hidden argument*/NULL);
		NullCheck(L_42);
		List_1_Add_m1745602227(L_42, L_43, /*hidden argument*/List_1_Add_m1745602227_RuntimeMethod_var);
		List_1_t2119180731 * L_44 = __this->get_positionPresets_5();
		List_1_t647105989 * L_45 = V_5;
		NullCheck(L_44);
		List_1_Add_m2785703956(L_44, L_45, /*hidden argument*/List_1_Add_m2785703956_RuntimeMethod_var);
		List_1_t647105989 * L_46 = (List_1_t647105989 *)il2cpp_codegen_object_new(List_1_t647105989_il2cpp_TypeInfo_var);
		List_1__ctor_m3805068493(L_46, /*hidden argument*/List_1__ctor_m3805068493_RuntimeMethod_var);
		V_6 = L_46;
		List_1_t647105989 * L_47 = V_6;
		Vector2Int_t3469998543  L_48;
		memset(&L_48, 0, sizeof(L_48));
		Vector2Int__ctor_m3872920888((&L_48), 0, 0, /*hidden argument*/NULL);
		NullCheck(L_47);
		List_1_Add_m1745602227(L_47, L_48, /*hidden argument*/List_1_Add_m1745602227_RuntimeMethod_var);
		List_1_t647105989 * L_49 = V_6;
		Vector2Int_t3469998543  L_50;
		memset(&L_50, 0, sizeof(L_50));
		Vector2Int__ctor_m3872920888((&L_50), 1, 0, /*hidden argument*/NULL);
		NullCheck(L_49);
		List_1_Add_m1745602227(L_49, L_50, /*hidden argument*/List_1_Add_m1745602227_RuntimeMethod_var);
		List_1_t647105989 * L_51 = V_6;
		Vector2Int_t3469998543  L_52;
		memset(&L_52, 0, sizeof(L_52));
		Vector2Int__ctor_m3872920888((&L_52), 1, (-1), /*hidden argument*/NULL);
		NullCheck(L_51);
		List_1_Add_m1745602227(L_51, L_52, /*hidden argument*/List_1_Add_m1745602227_RuntimeMethod_var);
		List_1_t2119180731 * L_53 = __this->get_positionPresets_5();
		List_1_t647105989 * L_54 = V_6;
		NullCheck(L_53);
		List_1_Add_m2785703956(L_53, L_54, /*hidden argument*/List_1_Add_m2785703956_RuntimeMethod_var);
		List_1_t647105989 * L_55 = (List_1_t647105989 *)il2cpp_codegen_object_new(List_1_t647105989_il2cpp_TypeInfo_var);
		List_1__ctor_m3805068493(L_55, /*hidden argument*/List_1__ctor_m3805068493_RuntimeMethod_var);
		V_7 = L_55;
		List_1_t647105989 * L_56 = V_7;
		Vector2Int_t3469998543  L_57;
		memset(&L_57, 0, sizeof(L_57));
		Vector2Int__ctor_m3872920888((&L_57), 0, 0, /*hidden argument*/NULL);
		NullCheck(L_56);
		List_1_Add_m1745602227(L_56, L_57, /*hidden argument*/List_1_Add_m1745602227_RuntimeMethod_var);
		List_1_t647105989 * L_58 = V_7;
		Vector2Int_t3469998543  L_59;
		memset(&L_59, 0, sizeof(L_59));
		Vector2Int__ctor_m3872920888((&L_59), (-1), (-1), /*hidden argument*/NULL);
		NullCheck(L_58);
		List_1_Add_m1745602227(L_58, L_59, /*hidden argument*/List_1_Add_m1745602227_RuntimeMethod_var);
		List_1_t647105989 * L_60 = V_7;
		Vector2Int_t3469998543  L_61;
		memset(&L_61, 0, sizeof(L_61));
		Vector2Int__ctor_m3872920888((&L_61), 0, (-1), /*hidden argument*/NULL);
		NullCheck(L_60);
		List_1_Add_m1745602227(L_60, L_61, /*hidden argument*/List_1_Add_m1745602227_RuntimeMethod_var);
		List_1_t2119180731 * L_62 = __this->get_positionPresets_5();
		List_1_t647105989 * L_63 = V_7;
		NullCheck(L_62);
		List_1_Add_m2785703956(L_62, L_63, /*hidden argument*/List_1_Add_m2785703956_RuntimeMethod_var);
		List_1_t647105989 * L_64 = (List_1_t647105989 *)il2cpp_codegen_object_new(List_1_t647105989_il2cpp_TypeInfo_var);
		List_1__ctor_m3805068493(L_64, /*hidden argument*/List_1__ctor_m3805068493_RuntimeMethod_var);
		V_8 = L_64;
		List_1_t647105989 * L_65 = V_8;
		Vector2Int_t3469998543  L_66;
		memset(&L_66, 0, sizeof(L_66));
		Vector2Int__ctor_m3872920888((&L_66), 0, 0, /*hidden argument*/NULL);
		NullCheck(L_65);
		List_1_Add_m1745602227(L_65, L_66, /*hidden argument*/List_1_Add_m1745602227_RuntimeMethod_var);
		List_1_t647105989 * L_67 = V_8;
		Vector2Int_t3469998543  L_68;
		memset(&L_68, 0, sizeof(L_68));
		Vector2Int__ctor_m3872920888((&L_68), 1, 0, /*hidden argument*/NULL);
		NullCheck(L_67);
		List_1_Add_m1745602227(L_67, L_68, /*hidden argument*/List_1_Add_m1745602227_RuntimeMethod_var);
		List_1_t647105989 * L_69 = V_8;
		Vector2Int_t3469998543  L_70;
		memset(&L_70, 0, sizeof(L_70));
		Vector2Int__ctor_m3872920888((&L_70), 2, 0, /*hidden argument*/NULL);
		NullCheck(L_69);
		List_1_Add_m1745602227(L_69, L_70, /*hidden argument*/List_1_Add_m1745602227_RuntimeMethod_var);
		List_1_t2119180731 * L_71 = __this->get_positionPresets_5();
		List_1_t647105989 * L_72 = V_8;
		NullCheck(L_71);
		List_1_Add_m2785703956(L_71, L_72, /*hidden argument*/List_1_Add_m2785703956_RuntimeMethod_var);
		return;
	}
}
// System.Void FeatureManager::Update()
extern "C"  void FeatureManager_Update_m1151305535 (FeatureManager_t1814774872 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<Feature> FeatureManager::GetFeatures()
extern "C"  RuntimeObject* FeatureManager_GetFeatures_m4033949054 (FeatureManager_t1814774872 * __this, const RuntimeMethod* method)
{
	{
		List_1_t2798317471 * L_0 = __this->get_features_4();
		return L_0;
	}
}
// System.Void FeatureManager::Add(Feature)
extern "C"  void FeatureManager_Add_m4230402021 (FeatureManager_t1814774872 * __this, Feature_t1326242729 * ___feature0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FeatureManager_Add_m4230402021_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t2798317471 * L_0 = __this->get_features_4();
		Feature_t1326242729 * L_1 = ___feature0;
		NullCheck(L_0);
		List_1_Add_m591758470(L_0, L_1, /*hidden argument*/List_1_Add_m591758470_RuntimeMethod_var);
		Feature_t1326242729 * L_2 = ___feature0;
		NullCheck(L_2);
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(L_2, /*hidden argument*/NULL);
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_SetParent_m381167889(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FeatureManager::Pop()
extern "C"  void FeatureManager_Pop_m189944667 (FeatureManager_t1814774872 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FeatureManager_Pop_m189944667_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Feature_t1326242729 * V_0 = NULL;
	{
		List_1_t2798317471 * L_0 = __this->get_features_4();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m206966912(L_0, /*hidden argument*/List_1_get_Count_m206966912_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		List_1_t2798317471 * L_2 = __this->get_features_4();
		NullCheck(L_2);
		Feature_t1326242729 * L_3 = List_1_get_Item_m2609147429(L_2, 0, /*hidden argument*/List_1_get_Item_m2609147429_RuntimeMethod_var);
		V_0 = L_3;
		List_1_t2798317471 * L_4 = __this->get_features_4();
		NullCheck(L_4);
		List_1_RemoveAt_m1449043771(L_4, 0, /*hidden argument*/List_1_RemoveAt_m1449043771_RuntimeMethod_var);
		Feature_t1326242729 * L_5 = V_0;
		NullCheck(L_5);
		GameObject_t1113636619 * L_6 = Component_get_gameObject_m442555142(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_SetActive_m796801857(L_6, (bool)0, /*hidden argument*/NULL);
		Feature_t1326242729 * L_7 = V_0;
		NullCheck(L_7);
		GameObject_t1113636619 * L_8 = Component_get_gameObject_m442555142(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 FeatureManager::Count()
extern "C"  int32_t FeatureManager_Count_m2084563203 (FeatureManager_t1814774872 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FeatureManager_Count_m2084563203_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t2798317471 * L_0 = __this->get_features_4();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m206966912(L_0, /*hidden argument*/List_1_get_Count_m206966912_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void FeatureManager::RefreshPositions()
extern "C"  void FeatureManager_RefreshPositions_m428705523 (FeatureManager_t1814774872 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FeatureManager_RefreshPositions_m428705523_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Feature_t1326242729 * V_1 = NULL;
	Enumerator_t392594052  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t3722313464 ));
		List_1_t2798317471 * L_0 = __this->get_features_4();
		NullCheck(L_0);
		Enumerator_t392594052  L_1 = List_1_GetEnumerator_m1581418248(L_0, /*hidden argument*/List_1_GetEnumerator_m1581418248_RuntimeMethod_var);
		V_2 = L_1;
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0059;
		}

IL_0019:
		{
			Feature_t1326242729 * L_2 = Enumerator_get_Current_m1774344585((&V_2), /*hidden argument*/Enumerator_get_Current_m1774344585_RuntimeMethod_var);
			V_1 = L_2;
			Feature_t1326242729 * L_3 = V_1;
			NullCheck(L_3);
			Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(L_3, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
			Vector3_t3722313464  L_5 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
			NullCheck(L_4);
			Transform_set_localScale_m3053443106(L_4, L_5, /*hidden argument*/NULL);
			Feature_t1326242729 * L_6 = V_1;
			NullCheck(L_6);
			Transform_t3600365921 * L_7 = Component_get_transform_m3162698980(L_6, /*hidden argument*/NULL);
			Vector3_t3722313464  L_8 = V_0;
			NullCheck(L_7);
			Transform_set_localPosition_m4128471975(L_7, L_8, /*hidden argument*/NULL);
			Vector3_t3722313464 * L_9 = (&V_0);
			float L_10 = L_9->get_x_1();
			Feature_t1326242729 * L_11 = V_1;
			NullCheck(L_11);
			int32_t L_12 = Feature_Width_m546656546(L_11, /*hidden argument*/NULL);
			float L_13 = __this->get_padding_6();
			L_9->set_x_1(((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_add((float)(((float)((float)L_12))), (float)L_13)))));
		}

IL_0059:
		{
			bool L_14 = Enumerator_MoveNext_m1706640735((&V_2), /*hidden argument*/Enumerator_MoveNext_m1706640735_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_0019;
			}
		}

IL_0065:
		{
			IL2CPP_LEAVE(0x78, FINALLY_006a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006a;
	}

FINALLY_006a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m599349345((&V_2), /*hidden argument*/Enumerator_Dispose_m599349345_RuntimeMethod_var);
		IL2CPP_END_FINALLY(106)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(106)
	{
		IL2CPP_JUMP_TBL(0x78, IL_0078)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0078:
	{
		return;
	}
}
// Feature FeatureManager::Generate(System.Int32)
extern "C"  Feature_t1326242729 * FeatureManager_Generate_m1673119772 (FeatureManager_t1814774872 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FeatureManager_Generate_m1673119772_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	Feature_t1326242729 * V_1 = NULL;
	List_1_t2119180731 * V_2 = NULL;
	List_1_t647105989 * V_3 = NULL;
	Enumerator_t4008424608  V_4;
	memset(&V_4, 0, sizeof(V_4));
	List_1_t647105989 * V_5 = NULL;
	Vector2Int_t3469998543  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Enumerator_t2536349866  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Block_t1429612866 * V_8 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Feature_t1326242729 * L_0 = __this->get_featurePrefab_3();
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_2 = Object_Instantiate_TisGameObject_t1113636619_m4070250708(NULL /*static, unused*/, L_1, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var);
		V_0 = L_2;
		GameObject_t1113636619 * L_3 = V_0;
		NullCheck(L_3);
		Feature_t1326242729 * L_4 = GameObject_GetComponent_TisFeature_t1326242729_m3959900819(L_3, /*hidden argument*/GameObject_GetComponent_TisFeature_t1326242729_m3959900819_RuntimeMethod_var);
		V_1 = L_4;
		Feature_t1326242729 * L_5 = V_1;
		FeatureManager_Add_m4230402021(__this, L_5, /*hidden argument*/NULL);
		int32_t L_6 = ___size0;
		if (L_6)
		{
			goto IL_002d;
		}
	}
	{
		FeatureManager_RefreshPositions_m428705523(__this, /*hidden argument*/NULL);
		Feature_t1326242729 * L_7 = V_1;
		return L_7;
	}

IL_002d:
	{
		List_1_t2119180731 * L_8 = (List_1_t2119180731 *)il2cpp_codegen_object_new(List_1_t2119180731_il2cpp_TypeInfo_var);
		List_1__ctor_m2855100714(L_8, /*hidden argument*/List_1__ctor_m2855100714_RuntimeMethod_var);
		V_2 = L_8;
		List_1_t2119180731 * L_9 = __this->get_positionPresets_5();
		NullCheck(L_9);
		Enumerator_t4008424608  L_10 = List_1_GetEnumerator_m1296270072(L_9, /*hidden argument*/List_1_GetEnumerator_m1296270072_RuntimeMethod_var);
		V_4 = L_10;
	}

IL_0040:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0060;
		}

IL_0045:
		{
			List_1_t647105989 * L_11 = Enumerator_get_Current_m3091303159((&V_4), /*hidden argument*/Enumerator_get_Current_m3091303159_RuntimeMethod_var);
			V_3 = L_11;
			List_1_t647105989 * L_12 = V_3;
			NullCheck(L_12);
			int32_t L_13 = List_1_get_Count_m2600226908(L_12, /*hidden argument*/List_1_get_Count_m2600226908_RuntimeMethod_var);
			int32_t L_14 = ___size0;
			if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
			{
				goto IL_0060;
			}
		}

IL_0059:
		{
			List_1_t2119180731 * L_15 = V_2;
			List_1_t647105989 * L_16 = V_3;
			NullCheck(L_15);
			List_1_Add_m2785703956(L_15, L_16, /*hidden argument*/List_1_Add_m2785703956_RuntimeMethod_var);
		}

IL_0060:
		{
			bool L_17 = Enumerator_MoveNext_m454119732((&V_4), /*hidden argument*/Enumerator_MoveNext_m454119732_RuntimeMethod_var);
			if (L_17)
			{
				goto IL_0045;
			}
		}

IL_006c:
		{
			IL2CPP_LEAVE(0x7F, FINALLY_0071);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0071;
	}

FINALLY_0071:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m876221167((&V_4), /*hidden argument*/Enumerator_Dispose_m876221167_RuntimeMethod_var);
		IL2CPP_END_FINALLY(113)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(113)
	{
		IL2CPP_JUMP_TBL(0x7F, IL_007f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_007f:
	{
		List_1_t2119180731 * L_18 = V_2;
		NullCheck(L_18);
		int32_t L_19 = List_1_get_Count_m876803877(L_18, /*hidden argument*/List_1_get_Count_m876803877_RuntimeMethod_var);
		if (L_19)
		{
			goto IL_00a0;
		}
	}
	{
		int32_t L_20 = ___size0;
		int32_t L_21 = L_20;
		RuntimeObject * L_22 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_21);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral2986088542, L_22, /*hidden argument*/NULL);
		Exception_t * L_24 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_24, L_23, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24);
	}

IL_00a0:
	{
		List_1_t2119180731 * L_25 = V_2;
		List_1_t2119180731 * L_26 = V_2;
		NullCheck(L_26);
		int32_t L_27 = List_1_get_Count_m876803877(L_26, /*hidden argument*/List_1_get_Count_m876803877_RuntimeMethod_var);
		int32_t L_28 = Random_Range_m4054026115(NULL /*static, unused*/, 0, L_27, /*hidden argument*/NULL);
		NullCheck(L_25);
		List_1_t647105989 * L_29 = List_1_get_Item_m79320186(L_25, L_28, /*hidden argument*/List_1_get_Item_m79320186_RuntimeMethod_var);
		V_5 = L_29;
		List_1_t647105989 * L_30 = V_5;
		NullCheck(L_30);
		Enumerator_t2536349866  L_31 = List_1_GetEnumerator_m3719004310(L_30, /*hidden argument*/List_1_GetEnumerator_m3719004310_RuntimeMethod_var);
		V_7 = L_31;
	}

IL_00bd:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00fc;
		}

IL_00c2:
		{
			Vector2Int_t3469998543  L_32 = Enumerator_get_Current_m3408976581((&V_7), /*hidden argument*/Enumerator_get_Current_m3408976581_RuntimeMethod_var);
			V_6 = L_32;
			BlockGenerator_t3413848165 * L_33 = __this->get_blockGenerator_2();
			NullCheck(L_33);
			Block_t1429612866 * L_34 = BlockGenerator_GenerateBlock_m3842112577(L_33, /*hidden argument*/NULL);
			V_8 = L_34;
			Block_t1429612866 * L_35 = V_8;
			int32_t L_36 = Vector2Int_get_x_m64542184((&V_6), /*hidden argument*/NULL);
			NullCheck(L_35);
			Block_set_X_m3468419968(L_35, L_36, /*hidden argument*/NULL);
			Block_t1429612866 * L_37 = V_8;
			int32_t L_38 = Vector2Int_get_y_m64542185((&V_6), /*hidden argument*/NULL);
			NullCheck(L_37);
			Block_set_Y_m4279034752(L_37, L_38, /*hidden argument*/NULL);
			Feature_t1326242729 * L_39 = V_1;
			Block_t1429612866 * L_40 = V_8;
			NullCheck(L_39);
			Feature_AddBlock_m3236566814(L_39, L_40, /*hidden argument*/NULL);
		}

IL_00fc:
		{
			bool L_41 = Enumerator_MoveNext_m1930661044((&V_7), /*hidden argument*/Enumerator_MoveNext_m1930661044_RuntimeMethod_var);
			if (L_41)
			{
				goto IL_00c2;
			}
		}

IL_0108:
		{
			IL2CPP_LEAVE(0x11B, FINALLY_010d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_010d;
	}

FINALLY_010d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m361113603((&V_7), /*hidden argument*/Enumerator_Dispose_m361113603_RuntimeMethod_var);
		IL2CPP_END_FINALLY(269)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(269)
	{
		IL2CPP_JUMP_TBL(0x11B, IL_011b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_011b:
	{
		FeatureManager_RefreshPositions_m428705523(__this, /*hidden argument*/NULL);
		Feature_t1326242729 * L_42 = V_1;
		return L_42;
	}
}
// Feature FeatureManager::Generate2(System.Int32)
extern "C"  Feature_t1326242729 * FeatureManager_Generate2_m2011031179 (FeatureManager_t1814774872 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FeatureManager_Generate2_m2011031179_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	Feature_t1326242729 * V_1 = NULL;
	List_1_t647105989 * V_2 = NULL;
	BlockMap_t3606162517 * V_3 = NULL;
	int32_t V_4 = 0;
	Vector2Int_t3469998543  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Block_t1429612866 * V_6 = NULL;
	int32_t V_7 = 0;
	{
		int32_t L_0 = ___size0;
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral2630951462, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		Feature_t1326242729 * L_4 = __this->get_featurePrefab_3();
		NullCheck(L_4);
		GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_6 = Object_Instantiate_TisGameObject_t1113636619_m4070250708(NULL /*static, unused*/, L_5, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var);
		V_0 = L_6;
		GameObject_t1113636619 * L_7 = V_0;
		NullCheck(L_7);
		Feature_t1326242729 * L_8 = GameObject_GetComponent_TisFeature_t1326242729_m3959900819(L_7, /*hidden argument*/GameObject_GetComponent_TisFeature_t1326242729_m3959900819_RuntimeMethod_var);
		V_1 = L_8;
		Feature_t1326242729 * L_9 = V_1;
		FeatureManager_Add_m4230402021(__this, L_9, /*hidden argument*/NULL);
		List_1_t647105989 * L_10 = (List_1_t647105989 *)il2cpp_codegen_object_new(List_1_t647105989_il2cpp_TypeInfo_var);
		List_1__ctor_m3805068493(L_10, /*hidden argument*/List_1__ctor_m3805068493_RuntimeMethod_var);
		V_2 = L_10;
		List_1_t647105989 * L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2Int_t3469998543_il2cpp_TypeInfo_var);
		Vector2Int_t3469998543  L_12 = Vector2Int_get_zero_m353440403(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_11);
		List_1_Add_m1745602227(L_11, L_12, /*hidden argument*/List_1_Add_m1745602227_RuntimeMethod_var);
		BlockMap_t3606162517 * L_13 = (BlockMap_t3606162517 *)il2cpp_codegen_object_new(BlockMap_t3606162517_il2cpp_TypeInfo_var);
		BlockMap__ctor_m2506368632(L_13, /*hidden argument*/NULL);
		V_3 = L_13;
		int32_t L_14 = ___size0;
		V_4 = L_14;
		goto IL_0121;
	}

IL_0053:
	{
		List_1_t647105989 * L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16 = List_1_get_Count_m2600226908(L_15, /*hidden argument*/List_1_get_Count_m2600226908_RuntimeMethod_var);
		if (L_16)
		{
			goto IL_0069;
		}
	}
	{
		Exception_t * L_17 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_17, _stringLiteral1735168495, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17);
	}

IL_0069:
	{
		List_1_t647105989 * L_18 = V_2;
		List_1_t647105989 * L_19 = V_2;
		NullCheck(L_19);
		int32_t L_20 = List_1_get_Count_m2600226908(L_19, /*hidden argument*/List_1_get_Count_m2600226908_RuntimeMethod_var);
		int32_t L_21 = Random_Range_m4054026115(NULL /*static, unused*/, 0, L_20, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector2Int_t3469998543  L_22 = List_1_get_Item_m4221300425(L_18, L_21, /*hidden argument*/List_1_get_Item_m4221300425_RuntimeMethod_var);
		V_5 = L_22;
		List_1_t647105989 * L_23 = V_2;
		Vector2Int_t3469998543  L_24 = V_5;
		NullCheck(L_23);
		List_1_Remove_m135587606(L_23, L_24, /*hidden argument*/List_1_Remove_m135587606_RuntimeMethod_var);
		BlockGenerator_t3413848165 * L_25 = __this->get_blockGenerator_2();
		NullCheck(L_25);
		Block_t1429612866 * L_26 = BlockGenerator_GenerateBlock_m3842112577(L_25, /*hidden argument*/NULL);
		V_6 = L_26;
		Block_t1429612866 * L_27 = V_6;
		int32_t L_28 = Vector2Int_get_x_m64542184((&V_5), /*hidden argument*/NULL);
		NullCheck(L_27);
		Block_set_X_m3468419968(L_27, L_28, /*hidden argument*/NULL);
		Block_t1429612866 * L_29 = V_6;
		int32_t L_30 = Vector2Int_get_y_m64542185((&V_5), /*hidden argument*/NULL);
		NullCheck(L_29);
		Block_set_Y_m4279034752(L_29, L_30, /*hidden argument*/NULL);
		Feature_t1326242729 * L_31 = V_1;
		Block_t1429612866 * L_32 = V_6;
		NullCheck(L_31);
		Feature_AddBlock_m3236566814(L_31, L_32, /*hidden argument*/NULL);
		BlockMap_t3606162517 * L_33 = V_3;
		Block_t1429612866 * L_34 = V_6;
		NullCheck(L_33);
		BlockMap_Add_m3274444037(L_33, L_34, /*hidden argument*/NULL);
		int32_t L_35 = Vector2Int_get_x_m64542184((&V_5), /*hidden argument*/NULL);
		int32_t L_36 = Vector2Int_get_y_m64542185((&V_5), /*hidden argument*/NULL);
		BlockMap_t3606162517 * L_37 = V_3;
		List_1_t647105989 * L_38 = V_2;
		FeatureManager_ExplorePosition_m2411088474(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1)), L_36, L_37, L_38, /*hidden argument*/NULL);
		int32_t L_39 = Vector2Int_get_x_m64542184((&V_5), /*hidden argument*/NULL);
		int32_t L_40 = Vector2Int_get_y_m64542185((&V_5), /*hidden argument*/NULL);
		BlockMap_t3606162517 * L_41 = V_3;
		List_1_t647105989 * L_42 = V_2;
		FeatureManager_ExplorePosition_m2411088474(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)1)), L_40, L_41, L_42, /*hidden argument*/NULL);
		int32_t L_43 = Vector2Int_get_x_m64542184((&V_5), /*hidden argument*/NULL);
		int32_t L_44 = Vector2Int_get_y_m64542185((&V_5), /*hidden argument*/NULL);
		BlockMap_t3606162517 * L_45 = V_3;
		List_1_t647105989 * L_46 = V_2;
		FeatureManager_ExplorePosition_m2411088474(NULL /*static, unused*/, L_43, ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1)), L_45, L_46, /*hidden argument*/NULL);
		int32_t L_47 = Vector2Int_get_x_m64542184((&V_5), /*hidden argument*/NULL);
		int32_t L_48 = Vector2Int_get_y_m64542185((&V_5), /*hidden argument*/NULL);
		BlockMap_t3606162517 * L_49 = V_3;
		List_1_t647105989 * L_50 = V_2;
		FeatureManager_ExplorePosition_m2411088474(NULL /*static, unused*/, L_47, ((int32_t)il2cpp_codegen_subtract((int32_t)L_48, (int32_t)1)), L_49, L_50, /*hidden argument*/NULL);
		int32_t L_51 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_51, (int32_t)1));
	}

IL_0121:
	{
		int32_t L_52 = V_4;
		if ((((int32_t)L_52) > ((int32_t)0)))
		{
			goto IL_0053;
		}
	}
	{
		FeatureManager_RefreshPositions_m428705523(__this, /*hidden argument*/NULL);
		Feature_t1326242729 * L_53 = V_1;
		NullCheck(L_53);
		Feature_set_Income_m1730798806(L_53, 0, /*hidden argument*/NULL);
		V_7 = 1;
		goto IL_0152;
	}

IL_013e:
	{
		Feature_t1326242729 * L_54 = V_1;
		Feature_t1326242729 * L_55 = L_54;
		NullCheck(L_55);
		int32_t L_56 = Feature_get_Income_m3890961505(L_55, /*hidden argument*/NULL);
		int32_t L_57 = ___size0;
		NullCheck(L_55);
		Feature_set_Income_m1730798806(L_55, ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)L_57)), /*hidden argument*/NULL);
		int32_t L_58 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1));
	}

IL_0152:
	{
		int32_t L_59 = V_7;
		int32_t L_60 = ___size0;
		if ((((int32_t)L_59) <= ((int32_t)L_60)))
		{
			goto IL_013e;
		}
	}
	{
		Feature_t1326242729 * L_61 = V_1;
		NullCheck(L_61);
		Feature_set_SLAEffect_m2176273856(L_61, ((int32_t)100), /*hidden argument*/NULL);
		Feature_t1326242729 * L_62 = V_1;
		return L_62;
	}
}
// System.Void FeatureManager::ExplorePosition(System.Int32,System.Int32,BlockMap,System.Collections.Generic.List`1<UnityEngine.Vector2Int>)
extern "C"  void FeatureManager_ExplorePosition_m2411088474 (RuntimeObject * __this /* static, unused */, int32_t ___x0, int32_t ___y1, BlockMap_t3606162517 * ___closeList2, List_1_t647105989 * ___openList3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FeatureManager_ExplorePosition_m2411088474_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		BlockMap_t3606162517 * L_0 = ___closeList2;
		int32_t L_1 = ___x0;
		int32_t L_2 = ___y1;
		NullCheck(L_0);
		Block_t1429612866 * L_3 = BlockMap_Get_m1449095388(L_0, L_1, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_3, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_5 = ___x0;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_6);
		int32_t L_8 = ___y1;
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral2904630691, L_7, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		List_1_t647105989 * L_12 = ___openList3;
		int32_t L_13 = ___x0;
		int32_t L_14 = ___y1;
		Vector2Int_t3469998543  L_15;
		memset(&L_15, 0, sizeof(L_15));
		Vector2Int__ctor_m3872920888((&L_15), L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		List_1_Add_m1745602227(L_12, L_15, /*hidden argument*/List_1_Add_m1745602227_RuntimeMethod_var);
	}

IL_003b:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PrepareArea::.ctor()
extern "C"  void PrepareArea__ctor_m2282897601 (PrepareArea_t3780924708 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PrepareArea__ctor_m2282897601_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t2901687608 * L_0 = (List_1_t2901687608 *)il2cpp_codegen_object_new(List_1_t2901687608_il2cpp_TypeInfo_var);
		List_1__ctor_m1265523406(L_0, /*hidden argument*/List_1__ctor_m1265523406_RuntimeMethod_var);
		__this->set_blockQueue_2(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PrepareArea::Start()
extern "C"  void PrepareArea_Start_m814453203 (PrepareArea_t3780924708 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void PrepareArea::Update()
extern "C"  void PrepareArea_Update_m1898107070 (PrepareArea_t3780924708 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void PrepareArea::AddBlock(Block)
extern "C"  void PrepareArea_AddBlock_m1617374146 (PrepareArea_t3780924708 * __this, Block_t1429612866 * ___block0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PrepareArea_AddBlock_m1617374146_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t2901687608 * L_0 = __this->get_blockQueue_2();
		Block_t1429612866 * L_1 = ___block0;
		NullCheck(L_0);
		List_1_Add_m1148009476(L_0, L_1, /*hidden argument*/List_1_Add_m1148009476_RuntimeMethod_var);
		Block_t1429612866 * L_2 = ___block0;
		NullCheck(L_2);
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(L_2, /*hidden argument*/NULL);
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_SetParent_m381167889(L_3, L_4, /*hidden argument*/NULL);
		PrepareArea_RefreshPositions_m1537395655(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PrepareArea::RemoveBlock(Block)
extern "C"  void PrepareArea_RemoveBlock_m1909169224 (PrepareArea_t3780924708 * __this, Block_t1429612866 * ___block0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PrepareArea_RemoveBlock_m1909169224_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t2901687608 * L_0 = __this->get_blockQueue_2();
		Block_t1429612866 * L_1 = ___block0;
		NullCheck(L_0);
		List_1_Remove_m1429535524(L_0, L_1, /*hidden argument*/List_1_Remove_m1429535524_RuntimeMethod_var);
		PrepareArea_RefreshPositions_m1537395655(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PrepareArea::RefreshPositions()
extern "C"  void PrepareArea_RefreshPositions_m1537395655 (PrepareArea_t3780924708 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PrepareArea_RefreshPositions_m1537395655_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Block_t1429612866 * V_2 = NULL;
	Enumerator_t495964189  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = 0;
		V_1 = 0;
		List_1_t2901687608 * L_0 = __this->get_blockQueue_2();
		NullCheck(L_0);
		Enumerator_t495964189  L_1 = List_1_GetEnumerator_m2009197239(L_0, /*hidden argument*/List_1_GetEnumerator_m2009197239_RuntimeMethod_var);
		V_3 = L_1;
	}

IL_0010:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002b;
		}

IL_0015:
		{
			Block_t1429612866 * L_2 = Enumerator_get_Current_m236452785((&V_3), /*hidden argument*/Enumerator_get_Current_m236452785_RuntimeMethod_var);
			V_2 = L_2;
			Block_t1429612866 * L_3 = V_2;
			int32_t L_4 = V_0;
			int32_t L_5 = V_1;
			NullCheck(L_3);
			Block_SetAllPosition_m3483076702(L_3, L_4, L_5, /*hidden argument*/NULL);
			int32_t L_6 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
			int32_t L_7 = V_1;
			V_1 = L_7;
		}

IL_002b:
		{
			bool L_8 = Enumerator_MoveNext_m4263545981((&V_3), /*hidden argument*/Enumerator_MoveNext_m4263545981_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_0015;
			}
		}

IL_0037:
		{
			IL2CPP_LEAVE(0x4A, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3610076621((&V_3), /*hidden argument*/Enumerator_Dispose_m3610076621_RuntimeMethod_var);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_JUMP_TBL(0x4A, IL_004a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004a:
	{
		return;
	}
}
// Block PrepareArea::GetBlock(System.Int32,System.Int32)
extern "C"  Block_t1429612866 * PrepareArea_GetBlock_m2262492526 (PrepareArea_t3780924708 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PrepareArea_GetBlock_m2262492526_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Block_t1429612866 * V_0 = NULL;
	Enumerator_t495964189  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Block_t1429612866 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t2901687608 * L_0 = __this->get_blockQueue_2();
		NullCheck(L_0);
		Enumerator_t495964189  L_1 = List_1_GetEnumerator_m2009197239(L_0, /*hidden argument*/List_1_GetEnumerator_m2009197239_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0038;
		}

IL_0011:
		{
			Block_t1429612866 * L_2 = Enumerator_get_Current_m236452785((&V_1), /*hidden argument*/Enumerator_get_Current_m236452785_RuntimeMethod_var);
			V_0 = L_2;
			Block_t1429612866 * L_3 = V_0;
			NullCheck(L_3);
			int32_t L_4 = Block_get_X_m1483641575(L_3, /*hidden argument*/NULL);
			int32_t L_5 = ___x0;
			if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
			{
				goto IL_0038;
			}
		}

IL_0025:
		{
			Block_t1429612866 * L_6 = V_0;
			NullCheck(L_6);
			int32_t L_7 = Block_get_Y_m1483641576(L_6, /*hidden argument*/NULL);
			int32_t L_8 = ___y1;
			if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
			{
				goto IL_0038;
			}
		}

IL_0031:
		{
			Block_t1429612866 * L_9 = V_0;
			V_2 = L_9;
			IL2CPP_LEAVE(0x59, FINALLY_0049);
		}

IL_0038:
		{
			bool L_10 = Enumerator_MoveNext_m4263545981((&V_1), /*hidden argument*/Enumerator_MoveNext_m4263545981_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_0011;
			}
		}

IL_0044:
		{
			IL2CPP_LEAVE(0x57, FINALLY_0049);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0049;
	}

FINALLY_0049:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3610076621((&V_1), /*hidden argument*/Enumerator_Dispose_m3610076621_RuntimeMethod_var);
		IL2CPP_END_FINALLY(73)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(73)
	{
		IL2CPP_JUMP_TBL(0x59, IL_0059)
		IL2CPP_JUMP_TBL(0x57, IL_0057)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0057:
	{
		return (Block_t1429612866 *)NULL;
	}

IL_0059:
	{
		Block_t1429612866 * L_11 = V_2;
		return L_11;
	}
}
// Block PrepareArea::GetBlock(System.Single,System.Single)
extern "C"  Block_t1429612866 * PrepareArea_GetBlock_m4252222892 (PrepareArea_t3780924708 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PrepareArea_GetBlock_m4252222892_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_1 = Mathf_RoundToInt_m1874334613(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		float L_2 = ___y1;
		int32_t L_3 = Mathf_RoundToInt_m1874334613(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		Block_t1429612866 * L_4 = PrepareArea_GetBlock_m2262492526(__this, L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 PrepareArea::Count()
extern "C"  int32_t PrepareArea_Count_m1980732666 (PrepareArea_t3780924708 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PrepareArea_Count_m1980732666_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t2901687608 * L_0 = __this->get_blockQueue_2();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m1090070239(L_0, /*hidden argument*/List_1_get_Count_m1090070239_RuntimeMethod_var);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SoundManager::.ctor()
extern "C"  void SoundManager__ctor_m1311707663 (SoundManager_t2102329059 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SoundManager::Start()
extern "C"  void SoundManager_Start_m2990335043 (SoundManager_t2102329059 * __this, const RuntimeMethod* method)
{
	{
		AudioSource_t3935305588 * L_0 = __this->get_onFire_2();
		NullCheck(L_0);
		AudioSource_set_mute_m3553377094(L_0, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SoundManager::Update()
extern "C"  void SoundManager_Update_m793118089 (SoundManager_t2102329059 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void SoundManager::PlayOnFire()
extern "C"  void SoundManager_PlayOnFire_m1318771670 (SoundManager_t2102329059 * __this, const RuntimeMethod* method)
{
	{
		AudioSource_t3935305588 * L_0 = __this->get_onFire_2();
		NullCheck(L_0);
		AudioSource_set_mute_m3553377094(L_0, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SoundManager::PauseOnFire()
extern "C"  void SoundManager_PauseOnFire_m2825996707 (SoundManager_t2102329059 * __this, const RuntimeMethod* method)
{
	{
		AudioSource_t3935305588 * L_0 = __this->get_onFire_2();
		NullCheck(L_0);
		AudioSource_set_mute_m3553377094(L_0, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
