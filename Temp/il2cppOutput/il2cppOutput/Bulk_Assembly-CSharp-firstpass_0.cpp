﻿#include "il2cpp-config.h"

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

template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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

// UnityStandardAssets.CrossPlatformInput.AxisTouchButton
struct AxisTouchButton_t3522881333;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// System.String
struct String_t;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_t4087348596;
// System.Type
struct Type_t;
// UnityEngine.Object[]
struct ObjectU5BU5D_t1417781964;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t3807901092;
// UnityStandardAssets.CrossPlatformInput.ButtonHandler
struct ButtonHandler_t823762219;
// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput
struct MobileInput_t2025745297;
// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput
struct StandaloneInput_t1343950252;
// UnityStandardAssets.CrossPlatformInput.VirtualInput
struct VirtualInput_t2597455733;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
struct VirtualButton_t2756566330;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar
struct InputAxisScrollbar_t457958266;
// UnityStandardAssets.CrossPlatformInput.Joystick
struct Joystick_t2204371675;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityStandardAssets.CrossPlatformInput.MobileControlRig
struct MobileControlRig_t1964600252;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
struct Dictionary_2_t3872604895;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
struct Dictionary_2_t2541822629;
// System.Exception
struct Exception_t;
// UnityStandardAssets.CrossPlatformInput.TiltInput
struct TiltInput_t1639936653;
// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping
struct AxisMapping_t3982445645;
// UnityStandardAssets.CrossPlatformInput.TouchPad
struct TouchPad_t539039257;
// UnityEngine.UI.Image
struct Image_t2670269651;
// UnityEngine.Touch[]
struct TouchU5BU5D_t1849554061;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.String[]
struct StringU5BU5D_t1281789340;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis[]
struct VirtualAxisU5BU5D_t3683203645;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis,System.Collections.DictionaryEntry>
struct Transform_1_t2533615361;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton[]
struct VirtualButtonU5BU5D_t926872735;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton,System.Collections.DictionaryEntry>
struct Transform_1_t4072251747;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t1003666588;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t4150874583;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t2585711361;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
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
// UnityEngine.Sprite
struct Sprite_t280657092;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t4142344393;
// System.Action`1<UnityEngine.U2D.SpriteAtlas>
struct Action_1_t819399007;

extern String_t* _stringLiteral1828639942;
extern const uint32_t AxisTouchButton__ctor_m999535707_MetadataUsageId;
extern RuntimeClass* CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var;
extern RuntimeClass* VirtualAxis_t4087348596_il2cpp_TypeInfo_var;
extern const uint32_t AxisTouchButton_OnEnable_m442372918_MetadataUsageId;
extern const RuntimeType* AxisTouchButton_t3522881333_0_0_0_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* AxisTouchButtonU5BU5D_t4256519256_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern const uint32_t AxisTouchButton_FindPairedButton_m3895318073_MetadataUsageId;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern const uint32_t AxisTouchButton_OnPointerDown_m2871318548_MetadataUsageId;
extern const uint32_t AxisTouchButton_OnPointerUp_m3116908619_MetadataUsageId;
extern const uint32_t ButtonHandler_SetDownState_m1604948932_MetadataUsageId;
extern const uint32_t ButtonHandler_SetUpState_m1609465475_MetadataUsageId;
extern const uint32_t ButtonHandler_SetAxisPositiveState_m3352739966_MetadataUsageId;
extern const uint32_t ButtonHandler_SetAxisNeutralState_m3530688688_MetadataUsageId;
extern const uint32_t ButtonHandler_SetAxisNegativeState_m513810363_MetadataUsageId;
extern RuntimeClass* MobileInput_t2025745297_il2cpp_TypeInfo_var;
extern RuntimeClass* StandaloneInput_t1343950252_il2cpp_TypeInfo_var;
extern const uint32_t CrossPlatformInputManager__cctor_m342528670_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_SwitchActiveInputMethod_m1628095800_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_AxisExists_m365322552_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_ButtonExists_m3745088456_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_RegisterVirtualAxis_m3479801628_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_RegisterVirtualButton_m1830161946_MetadataUsageId;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern const RuntimeMethod* CrossPlatformInputManager_UnRegisterVirtualAxis_m2756471501_RuntimeMethod_var;
extern String_t* _stringLiteral62725243;
extern const uint32_t CrossPlatformInputManager_UnRegisterVirtualAxis_m2756471501_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_UnRegisterVirtualButton_m2844659319_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_VirtualAxisReference_m1463805196_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_GetAxis_m693277759_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_GetAxisRaw_m3797907116_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_GetAxis_m4082502259_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_GetButton_m241794690_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_GetButtonDown_m1689635996_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_GetButtonUp_m100471868_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_SetButtonDown_m1980143873_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_SetButtonUp_m3204959434_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_SetAxisPositive_m3893292619_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_SetAxisNegative_m1070090094_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_SetAxisZero_m3139545681_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_SetAxis_m1144576044_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_get_mousePosition_m2355398278_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_SetVirtualMousePositionX_m1649950270_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_SetVirtualMousePositionY_m427631433_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_SetVirtualMousePositionZ_m640530475_MetadataUsageId;
extern const uint32_t VirtualAxis_Remove_m3159277484_MetadataUsageId;
extern const uint32_t VirtualButton_Remove_m3337140985_MetadataUsageId;
extern const uint32_t InputAxisScrollbar_HandleInput_m921720287_MetadataUsageId;
extern String_t* _stringLiteral2984908384;
extern const uint32_t Joystick__ctor_m2282195716_MetadataUsageId;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern const uint32_t Joystick_UpdateVirtualAxes_m1439422241_MetadataUsageId;
extern const uint32_t Joystick_CreateVirtualAxes_m2739417166_MetadataUsageId;
extern const uint32_t Joystick_OnDrag_m2237949000_MetadataUsageId;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* Transform_t3600365921_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const uint32_t MobileControlRig_EnableControlRig_m2268035780_MetadataUsageId;
extern RuntimeClass* VirtualButton_t2756566330_il2cpp_TypeInfo_var;
extern const uint32_t MobileInput_AddButton_m1457048403_MetadataUsageId;
extern const uint32_t MobileInput_AddAxes_m488652706_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m3309109471_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m1067981918_RuntimeMethod_var;
extern const uint32_t MobileInput_GetAxis_m2154000143_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m3760162225_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m572056520_RuntimeMethod_var;
extern const uint32_t MobileInput_SetButtonDown_m3216050691_MetadataUsageId;
extern const uint32_t MobileInput_SetButtonUp_m157564634_MetadataUsageId;
extern const uint32_t MobileInput_SetAxisPositive_m3252752591_MetadataUsageId;
extern const uint32_t MobileInput_SetAxisNegative_m2158886203_MetadataUsageId;
extern const uint32_t MobileInput_SetAxisZero_m4114279636_MetadataUsageId;
extern const uint32_t MobileInput_SetAxis_m8177381_MetadataUsageId;
extern const uint32_t MobileInput_GetButtonDown_m504405365_MetadataUsageId;
extern const uint32_t MobileInput_GetButtonUp_m2869453812_MetadataUsageId;
extern const uint32_t MobileInput_GetButton_m1481759253_MetadataUsageId;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern const uint32_t StandaloneInput_GetAxis_m2410539728_MetadataUsageId;
extern const uint32_t StandaloneInput_GetButton_m1835211858_MetadataUsageId;
extern const uint32_t StandaloneInput_GetButtonDown_m3583403365_MetadataUsageId;
extern const uint32_t StandaloneInput_GetButtonUp_m3464108891_MetadataUsageId;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern const RuntimeMethod* StandaloneInput_SetButtonDown_m3676829417_RuntimeMethod_var;
extern String_t* _stringLiteral1111251549;
extern const uint32_t StandaloneInput_SetButtonDown_m3676829417_MetadataUsageId;
extern const RuntimeMethod* StandaloneInput_SetButtonUp_m191088641_RuntimeMethod_var;
extern const uint32_t StandaloneInput_SetButtonUp_m191088641_MetadataUsageId;
extern const RuntimeMethod* StandaloneInput_SetAxisPositive_m3047996072_RuntimeMethod_var;
extern const uint32_t StandaloneInput_SetAxisPositive_m3047996072_MetadataUsageId;
extern const RuntimeMethod* StandaloneInput_SetAxisNegative_m1888816296_RuntimeMethod_var;
extern const uint32_t StandaloneInput_SetAxisNegative_m1888816296_MetadataUsageId;
extern const RuntimeMethod* StandaloneInput_SetAxisZero_m1274847735_RuntimeMethod_var;
extern const uint32_t StandaloneInput_SetAxisZero_m1274847735_MetadataUsageId;
extern const RuntimeMethod* StandaloneInput_SetAxis_m55497828_RuntimeMethod_var;
extern const uint32_t StandaloneInput_SetAxis_m55497828_MetadataUsageId;
extern const uint32_t StandaloneInput_MousePosition_m3719131973_MetadataUsageId;
extern const uint32_t TiltInput_OnEnable_m692757573_MetadataUsageId;
extern const uint32_t TiltInput_Update_m223364922_MetadataUsageId;
extern const uint32_t TouchPad__ctor_m1845169266_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var;
extern const uint32_t TouchPad_OnEnable_m3972724317_MetadataUsageId;
extern const uint32_t TouchPad_CreateVirtualAxes_m1112936150_MetadataUsageId;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern const uint32_t TouchPad_OnPointerDown_m2573988246_MetadataUsageId;
extern const uint32_t TouchPad_Update_m4068717841_MetadataUsageId;
extern const uint32_t TouchPad_OnPointerUp_m2465142363_MetadataUsageId;
extern const uint32_t TouchPad_OnDisable_m3391228923_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t3872604895_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t2541822629_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3319525431_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m3611672568_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2614243156_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m706204246_RuntimeMethod_var;
extern const uint32_t VirtualInput__ctor_m132259715_MetadataUsageId;
extern const uint32_t VirtualInput_AxisExists_m20278768_MetadataUsageId;
extern const uint32_t VirtualInput_ButtonExists_m3875122617_MetadataUsageId;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2_Add_m2550485437_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1685793073_RuntimeMethod_var;
extern String_t* _stringLiteral1316003440;
extern String_t* _stringLiteral499939329;
extern const uint32_t VirtualInput_RegisterVirtualAxis_m2884529091_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_Add_m1118216421_RuntimeMethod_var;
extern String_t* _stringLiteral341380797;
extern const uint32_t VirtualInput_RegisterVirtualButton_m3959785200_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_Remove_m2199267801_RuntimeMethod_var;
extern const uint32_t VirtualInput_UnRegisterVirtualAxis_m2956537171_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_Remove_m2343242332_RuntimeMethod_var;
extern const uint32_t VirtualInput_UnRegisterVirtualButton_m3129182690_MetadataUsageId;
extern const uint32_t VirtualInput_VirtualAxisReference_m2155778560_MetadataUsageId;

struct AxisTouchButtonU5BU5D_t4256519256;
struct ObjectU5BU5D_t1417781964;
struct TouchU5BU5D_t1849554061;


#ifndef U3CMODULEU3E_T692745552_H
#define U3CMODULEU3E_T692745552_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745552 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745552_H
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
#ifndef CROSSPLATFORMINPUTMANAGER_T191731427_H
#define CROSSPLATFORMINPUTMANAGER_T191731427_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager
struct  CrossPlatformInputManager_t191731427  : public RuntimeObject
{
public:

public:
};

struct CrossPlatformInputManager_t191731427_StaticFields
{
public:
	// UnityStandardAssets.CrossPlatformInput.VirtualInput UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::activeInput
	VirtualInput_t2597455733 * ___activeInput_0;
	// UnityStandardAssets.CrossPlatformInput.VirtualInput UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::s_TouchInput
	VirtualInput_t2597455733 * ___s_TouchInput_1;
	// UnityStandardAssets.CrossPlatformInput.VirtualInput UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::s_HardwareInput
	VirtualInput_t2597455733 * ___s_HardwareInput_2;

public:
	inline static int32_t get_offset_of_activeInput_0() { return static_cast<int32_t>(offsetof(CrossPlatformInputManager_t191731427_StaticFields, ___activeInput_0)); }
	inline VirtualInput_t2597455733 * get_activeInput_0() const { return ___activeInput_0; }
	inline VirtualInput_t2597455733 ** get_address_of_activeInput_0() { return &___activeInput_0; }
	inline void set_activeInput_0(VirtualInput_t2597455733 * value)
	{
		___activeInput_0 = value;
		Il2CppCodeGenWriteBarrier((&___activeInput_0), value);
	}

	inline static int32_t get_offset_of_s_TouchInput_1() { return static_cast<int32_t>(offsetof(CrossPlatformInputManager_t191731427_StaticFields, ___s_TouchInput_1)); }
	inline VirtualInput_t2597455733 * get_s_TouchInput_1() const { return ___s_TouchInput_1; }
	inline VirtualInput_t2597455733 ** get_address_of_s_TouchInput_1() { return &___s_TouchInput_1; }
	inline void set_s_TouchInput_1(VirtualInput_t2597455733 * value)
	{
		___s_TouchInput_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_TouchInput_1), value);
	}

	inline static int32_t get_offset_of_s_HardwareInput_2() { return static_cast<int32_t>(offsetof(CrossPlatformInputManager_t191731427_StaticFields, ___s_HardwareInput_2)); }
	inline VirtualInput_t2597455733 * get_s_HardwareInput_2() const { return ___s_HardwareInput_2; }
	inline VirtualInput_t2597455733 ** get_address_of_s_HardwareInput_2() { return &___s_HardwareInput_2; }
	inline void set_s_HardwareInput_2(VirtualInput_t2597455733 * value)
	{
		___s_HardwareInput_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_HardwareInput_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSPLATFORMINPUTMANAGER_T191731427_H
#ifndef VIRTUALBUTTON_T2756566330_H
#define VIRTUALBUTTON_T2756566330_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
struct  VirtualButton_t2756566330  : public RuntimeObject
{
public:
	// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::<matchWithInputManager>k__BackingField
	bool ___U3CmatchWithInputManagerU3Ek__BackingField_1;
	// System.Int32 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::m_LastPressedFrame
	int32_t ___m_LastPressedFrame_2;
	// System.Int32 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::m_ReleasedFrame
	int32_t ___m_ReleasedFrame_3;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::m_Pressed
	bool ___m_Pressed_4;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VirtualButton_t2756566330, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CnameU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CmatchWithInputManagerU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(VirtualButton_t2756566330, ___U3CmatchWithInputManagerU3Ek__BackingField_1)); }
	inline bool get_U3CmatchWithInputManagerU3Ek__BackingField_1() const { return ___U3CmatchWithInputManagerU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CmatchWithInputManagerU3Ek__BackingField_1() { return &___U3CmatchWithInputManagerU3Ek__BackingField_1; }
	inline void set_U3CmatchWithInputManagerU3Ek__BackingField_1(bool value)
	{
		___U3CmatchWithInputManagerU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_m_LastPressedFrame_2() { return static_cast<int32_t>(offsetof(VirtualButton_t2756566330, ___m_LastPressedFrame_2)); }
	inline int32_t get_m_LastPressedFrame_2() const { return ___m_LastPressedFrame_2; }
	inline int32_t* get_address_of_m_LastPressedFrame_2() { return &___m_LastPressedFrame_2; }
	inline void set_m_LastPressedFrame_2(int32_t value)
	{
		___m_LastPressedFrame_2 = value;
	}

	inline static int32_t get_offset_of_m_ReleasedFrame_3() { return static_cast<int32_t>(offsetof(VirtualButton_t2756566330, ___m_ReleasedFrame_3)); }
	inline int32_t get_m_ReleasedFrame_3() const { return ___m_ReleasedFrame_3; }
	inline int32_t* get_address_of_m_ReleasedFrame_3() { return &___m_ReleasedFrame_3; }
	inline void set_m_ReleasedFrame_3(int32_t value)
	{
		___m_ReleasedFrame_3 = value;
	}

	inline static int32_t get_offset_of_m_Pressed_4() { return static_cast<int32_t>(offsetof(VirtualButton_t2756566330, ___m_Pressed_4)); }
	inline bool get_m_Pressed_4() const { return ___m_Pressed_4; }
	inline bool* get_address_of_m_Pressed_4() { return &___m_Pressed_4; }
	inline void set_m_Pressed_4(bool value)
	{
		___m_Pressed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIRTUALBUTTON_T2756566330_H
#ifndef DICTIONARY_2_T3872604895_H
#define DICTIONARY_2_T3872604895_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
struct  Dictionary_2_t3872604895  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	VirtualAxisU5BU5D_t3683203645* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3872604895, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3872604895, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3872604895, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3872604895, ___valueSlots_7)); }
	inline VirtualAxisU5BU5D_t3683203645* get_valueSlots_7() const { return ___valueSlots_7; }
	inline VirtualAxisU5BU5D_t3683203645** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(VirtualAxisU5BU5D_t3683203645* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3872604895, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3872604895, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3872604895, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3872604895, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3872604895, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3872604895, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3872604895, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3872604895_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t2533615361 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3872604895_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t2533615361 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t2533615361 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t2533615361 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3872604895_H
#ifndef DICTIONARY_2_T2541822629_H
#define DICTIONARY_2_T2541822629_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
struct  Dictionary_2_t2541822629  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	VirtualButtonU5BU5D_t926872735* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2541822629, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2541822629, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2541822629, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2541822629, ___valueSlots_7)); }
	inline VirtualButtonU5BU5D_t926872735* get_valueSlots_7() const { return ___valueSlots_7; }
	inline VirtualButtonU5BU5D_t926872735** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(VirtualButtonU5BU5D_t926872735* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2541822629, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2541822629, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2541822629, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2541822629, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2541822629, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2541822629, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2541822629, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2541822629_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t4072251747 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2541822629_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t4072251747 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t4072251747 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t4072251747 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2541822629_H
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
#ifndef LIST_1_T3319525431_H
#define LIST_1_T3319525431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.String>
struct  List_1_t3319525431  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t1281789340* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____items_1)); }
	inline StringU5BU5D_t1281789340* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t1281789340** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t1281789340* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3319525431_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	StringU5BU5D_t1281789340* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3319525431_StaticFields, ___EmptyArray_4)); }
	inline StringU5BU5D_t1281789340* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline StringU5BU5D_t1281789340** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(StringU5BU5D_t1281789340* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3319525431_H
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
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef ABSTRACTEVENTDATA_T4171500731_H
#define ABSTRACTEVENTDATA_T4171500731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t4171500731  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t4171500731, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTEVENTDATA_T4171500731_H
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
#ifndef VIRTUALAXIS_T4087348596_H
#define VIRTUALAXIS_T4087348596_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct  VirtualAxis_t4087348596  : public RuntimeObject
{
public:
	// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::m_Value
	float ___m_Value_1;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::<matchWithInputManager>k__BackingField
	bool ___U3CmatchWithInputManagerU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VirtualAxis_t4087348596, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CnameU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(VirtualAxis_t4087348596, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_U3CmatchWithInputManagerU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(VirtualAxis_t4087348596, ___U3CmatchWithInputManagerU3Ek__BackingField_2)); }
	inline bool get_U3CmatchWithInputManagerU3Ek__BackingField_2() const { return ___U3CmatchWithInputManagerU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CmatchWithInputManagerU3Ek__BackingField_2() { return &___U3CmatchWithInputManagerU3Ek__BackingField_2; }
	inline void set_U3CmatchWithInputManagerU3Ek__BackingField_2(bool value)
	{
		___U3CmatchWithInputManagerU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIRTUALAXIS_T4087348596_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
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
#ifndef BASEEVENTDATA_T3903027533_H
#define BASEEVENTDATA_T3903027533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t3903027533  : public AbstractEventData_t4171500731
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t1003666588 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t3903027533, ___m_EventSystem_1)); }
	inline EventSystem_t1003666588 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t1003666588 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t1003666588 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystem_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEEVENTDATA_T3903027533_H
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
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
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
#endif // BINDINGFLAGS_T2721792723_H
#ifndef VIRTUALINPUT_T2597455733_H
#define VIRTUALINPUT_T2597455733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.VirtualInput
struct  VirtualInput_t2597455733  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::<virtualMousePosition>k__BackingField
	Vector3_t3722313464  ___U3CvirtualMousePositionU3Ek__BackingField_0;
	// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis> UnityStandardAssets.CrossPlatformInput.VirtualInput::m_VirtualAxes
	Dictionary_2_t3872604895 * ___m_VirtualAxes_1;
	// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton> UnityStandardAssets.CrossPlatformInput.VirtualInput::m_VirtualButtons
	Dictionary_2_t2541822629 * ___m_VirtualButtons_2;
	// System.Collections.Generic.List`1<System.String> UnityStandardAssets.CrossPlatformInput.VirtualInput::m_AlwaysUseVirtual
	List_1_t3319525431 * ___m_AlwaysUseVirtual_3;

public:
	inline static int32_t get_offset_of_U3CvirtualMousePositionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VirtualInput_t2597455733, ___U3CvirtualMousePositionU3Ek__BackingField_0)); }
	inline Vector3_t3722313464  get_U3CvirtualMousePositionU3Ek__BackingField_0() const { return ___U3CvirtualMousePositionU3Ek__BackingField_0; }
	inline Vector3_t3722313464 * get_address_of_U3CvirtualMousePositionU3Ek__BackingField_0() { return &___U3CvirtualMousePositionU3Ek__BackingField_0; }
	inline void set_U3CvirtualMousePositionU3Ek__BackingField_0(Vector3_t3722313464  value)
	{
		___U3CvirtualMousePositionU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_VirtualAxes_1() { return static_cast<int32_t>(offsetof(VirtualInput_t2597455733, ___m_VirtualAxes_1)); }
	inline Dictionary_2_t3872604895 * get_m_VirtualAxes_1() const { return ___m_VirtualAxes_1; }
	inline Dictionary_2_t3872604895 ** get_address_of_m_VirtualAxes_1() { return &___m_VirtualAxes_1; }
	inline void set_m_VirtualAxes_1(Dictionary_2_t3872604895 * value)
	{
		___m_VirtualAxes_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_VirtualAxes_1), value);
	}

	inline static int32_t get_offset_of_m_VirtualButtons_2() { return static_cast<int32_t>(offsetof(VirtualInput_t2597455733, ___m_VirtualButtons_2)); }
	inline Dictionary_2_t2541822629 * get_m_VirtualButtons_2() const { return ___m_VirtualButtons_2; }
	inline Dictionary_2_t2541822629 ** get_address_of_m_VirtualButtons_2() { return &___m_VirtualButtons_2; }
	inline void set_m_VirtualButtons_2(Dictionary_2_t2541822629 * value)
	{
		___m_VirtualButtons_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_VirtualButtons_2), value);
	}

	inline static int32_t get_offset_of_m_AlwaysUseVirtual_3() { return static_cast<int32_t>(offsetof(VirtualInput_t2597455733, ___m_AlwaysUseVirtual_3)); }
	inline List_1_t3319525431 * get_m_AlwaysUseVirtual_3() const { return ___m_AlwaysUseVirtual_3; }
	inline List_1_t3319525431 ** get_address_of_m_AlwaysUseVirtual_3() { return &___m_AlwaysUseVirtual_3; }
	inline void set_m_AlwaysUseVirtual_3(List_1_t3319525431 * value)
	{
		___m_AlwaysUseVirtual_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_AlwaysUseVirtual_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIRTUALINPUT_T2597455733_H
#ifndef ACTIVEINPUTMETHOD_T139315314_H
#define ACTIVEINPUTMETHOD_T139315314_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/ActiveInputMethod
struct  ActiveInputMethod_t139315314 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/ActiveInputMethod::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ActiveInputMethod_t139315314, ___value___1)); }
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
#endif // ACTIVEINPUTMETHOD_T139315314_H
#ifndef CONTROLSTYLE_T1372986211_H
#define CONTROLSTYLE_T1372986211_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.TouchPad/ControlStyle
struct  ControlStyle_t1372986211 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.TouchPad/ControlStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ControlStyle_t1372986211, ___value___1)); }
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
#endif // CONTROLSTYLE_T1372986211_H
#ifndef AXISOPTION_T1372819835_H
#define AXISOPTION_T1372819835_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.TouchPad/AxisOption
struct  AxisOption_t1372819835 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.TouchPad/AxisOption::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AxisOption_t1372819835, ___value___1)); }
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
#endif // AXISOPTION_T1372819835_H
#ifndef AXISOPTIONS_T3101732129_H
#define AXISOPTIONS_T3101732129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisOptions
struct  AxisOptions_t3101732129 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.TiltInput/AxisOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AxisOptions_t3101732129, ___value___1)); }
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
#endif // AXISOPTIONS_T3101732129_H
#ifndef TOUCHTYPE_T2034578258_H
#define TOUCHTYPE_T2034578258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchType
struct  TouchType_t2034578258 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchType_t2034578258, ___value___1)); }
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
#endif // TOUCHTYPE_T2034578258_H
#ifndef TOUCHPHASE_T72348083_H
#define TOUCHPHASE_T72348083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchPhase
struct  TouchPhase_t72348083 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchPhase_t72348083, ___value___1)); }
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
#endif // TOUCHPHASE_T72348083_H
#ifndef FILLMETHOD_T1167457570_H
#define FILLMETHOD_T1167457570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image/FillMethod
struct  FillMethod_t1167457570 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FillMethod_t1167457570, ___value___1)); }
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
#endif // FILLMETHOD_T1167457570_H
#ifndef TYPE_T1152881528_H
#define TYPE_T1152881528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image/Type
struct  Type_t1152881528 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Type_t1152881528, ___value___1)); }
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
#endif // TYPE_T1152881528_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef INPUTBUTTON_T3704011348_H
#define INPUTBUTTON_T3704011348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerEventData/InputButton
struct  InputButton_t3704011348 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InputButton_t3704011348, ___value___1)); }
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
#endif // INPUTBUTTON_T3704011348_H
#ifndef RAYCASTRESULT_T3360306849_H
#define RAYCASTRESULT_T3360306849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.RaycastResult
struct  RaycastResult_t3360306849 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t1113636619 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t4150874583 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t3722313464  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t3722313464  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t2156229523  ___screenPosition_9;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___m_GameObject_0)); }
	inline GameObject_t1113636619 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_t1113636619 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_t1113636619 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_GameObject_0), value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___module_1)); }
	inline BaseRaycaster_t4150874583 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_t4150874583 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_t4150874583 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((&___module_1), value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___worldPosition_7)); }
	inline Vector3_t3722313464  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t3722313464 * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t3722313464  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___worldNormal_8)); }
	inline Vector3_t3722313464  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t3722313464 * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t3722313464  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___screenPosition_9)); }
	inline Vector2_t2156229523  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_t2156229523 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_t2156229523  value)
	{
		___screenPosition_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t3360306849_marshaled_pinvoke
{
	GameObject_t1113636619 * ___m_GameObject_0;
	BaseRaycaster_t4150874583 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t3722313464  ___worldPosition_7;
	Vector3_t3722313464  ___worldNormal_8;
	Vector2_t2156229523  ___screenPosition_9;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t3360306849_marshaled_com
{
	GameObject_t1113636619 * ___m_GameObject_0;
	BaseRaycaster_t4150874583 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t3722313464  ___worldPosition_7;
	Vector3_t3722313464  ___worldNormal_8;
	Vector2_t2156229523  ___screenPosition_9;
};
#endif // RAYCASTRESULT_T3360306849_H
#ifndef AXISOPTION_T3128671669_H
#define AXISOPTION_T3128671669_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.Joystick/AxisOption
struct  AxisOption_t3128671669 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.Joystick/AxisOption::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AxisOption_t3128671669, ___value___1)); }
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
#endif // AXISOPTION_T3128671669_H
#ifndef MAPPINGTYPE_T2039944511_H
#define MAPPINGTYPE_T2039944511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping/MappingType
struct  MappingType_t2039944511 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping/MappingType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MappingType_t2039944511, ___value___1)); }
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
#endif // MAPPINGTYPE_T2039944511_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
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
#ifndef ARGUMENTNULLEXCEPTION_T1615371798_H
#define ARGUMENTNULLEXCEPTION_T1615371798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t1615371798  : public ArgumentException_t132251570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T1615371798_H
#ifndef MOBILEINPUT_T2025745297_H
#define MOBILEINPUT_T2025745297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput
struct  MobileInput_t2025745297  : public VirtualInput_t2597455733
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOBILEINPUT_T2025745297_H
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
#ifndef POINTEREVENTDATA_T3807901092_H
#define POINTEREVENTDATA_T3807901092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerEventData
struct  PointerEventData_t3807901092  : public BaseEventData_t3903027533
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t1113636619 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t1113636619 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t1113636619 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t1113636619 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t1113636619 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t3360306849  ___U3CpointerCurrentRaycastU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t3360306849  ___U3CpointerPressRaycastU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t2585711361 * ___hovered_9;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_10;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_11;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t2156229523  ___U3CpositionU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t2156229523  ___U3CdeltaU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t2156229523  ___U3CpressPositionU3Ek__BackingField_14;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t3722313464  ___U3CworldPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t3722313464  ___U3CworldNormalU3Ek__BackingField_16;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_17;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_18;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t2156229523  ___U3CscrollDeltaU3Ek__BackingField_19;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_21;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_t1113636619 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_t1113636619 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_t1113636619 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpointerEnterU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___m_PointerPress_3)); }
	inline GameObject_t1113636619 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_t1113636619 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_t1113636619 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PointerPress_3), value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_t1113636619 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_t1113636619 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_t1113636619 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3ClastPressU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_t1113636619 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_t1113636619 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_t1113636619 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CrawPointerPressU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_t1113636619 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_t1113636619 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_t1113636619 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpointerDragU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerCurrentRaycastU3Ek__BackingField_7)); }
	inline RaycastResult_t3360306849  get_U3CpointerCurrentRaycastU3Ek__BackingField_7() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline RaycastResult_t3360306849 * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_7(RaycastResult_t3360306849  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerPressRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t3360306849  get_U3CpointerPressRaycastU3Ek__BackingField_8() const { return ___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t3360306849 * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return &___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_8(RaycastResult_t3360306849  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_hovered_9() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___hovered_9)); }
	inline List_1_t2585711361 * get_hovered_9() const { return ___hovered_9; }
	inline List_1_t2585711361 ** get_address_of_hovered_9() { return &___hovered_9; }
	inline void set_hovered_9(List_1_t2585711361 * value)
	{
		___hovered_9 = value;
		Il2CppCodeGenWriteBarrier((&___hovered_9), value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CeligibleForClickU3Ek__BackingField_10)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_10() const { return ___U3CeligibleForClickU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_10() { return &___U3CeligibleForClickU3Ek__BackingField_10; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_10(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerIdU3Ek__BackingField_11)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_11() const { return ___U3CpointerIdU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_11() { return &___U3CpointerIdU3Ek__BackingField_11; }
	inline void set_U3CpointerIdU3Ek__BackingField_11(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpositionU3Ek__BackingField_12)); }
	inline Vector2_t2156229523  get_U3CpositionU3Ek__BackingField_12() const { return ___U3CpositionU3Ek__BackingField_12; }
	inline Vector2_t2156229523 * get_address_of_U3CpositionU3Ek__BackingField_12() { return &___U3CpositionU3Ek__BackingField_12; }
	inline void set_U3CpositionU3Ek__BackingField_12(Vector2_t2156229523  value)
	{
		___U3CpositionU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CdeltaU3Ek__BackingField_13)); }
	inline Vector2_t2156229523  get_U3CdeltaU3Ek__BackingField_13() const { return ___U3CdeltaU3Ek__BackingField_13; }
	inline Vector2_t2156229523 * get_address_of_U3CdeltaU3Ek__BackingField_13() { return &___U3CdeltaU3Ek__BackingField_13; }
	inline void set_U3CdeltaU3Ek__BackingField_13(Vector2_t2156229523  value)
	{
		___U3CdeltaU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpressPositionU3Ek__BackingField_14)); }
	inline Vector2_t2156229523  get_U3CpressPositionU3Ek__BackingField_14() const { return ___U3CpressPositionU3Ek__BackingField_14; }
	inline Vector2_t2156229523 * get_address_of_U3CpressPositionU3Ek__BackingField_14() { return &___U3CpressPositionU3Ek__BackingField_14; }
	inline void set_U3CpressPositionU3Ek__BackingField_14(Vector2_t2156229523  value)
	{
		___U3CpressPositionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CworldPositionU3Ek__BackingField_15)); }
	inline Vector3_t3722313464  get_U3CworldPositionU3Ek__BackingField_15() const { return ___U3CworldPositionU3Ek__BackingField_15; }
	inline Vector3_t3722313464 * get_address_of_U3CworldPositionU3Ek__BackingField_15() { return &___U3CworldPositionU3Ek__BackingField_15; }
	inline void set_U3CworldPositionU3Ek__BackingField_15(Vector3_t3722313464  value)
	{
		___U3CworldPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CworldNormalU3Ek__BackingField_16)); }
	inline Vector3_t3722313464  get_U3CworldNormalU3Ek__BackingField_16() const { return ___U3CworldNormalU3Ek__BackingField_16; }
	inline Vector3_t3722313464 * get_address_of_U3CworldNormalU3Ek__BackingField_16() { return &___U3CworldNormalU3Ek__BackingField_16; }
	inline void set_U3CworldNormalU3Ek__BackingField_16(Vector3_t3722313464  value)
	{
		___U3CworldNormalU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CclickTimeU3Ek__BackingField_17)); }
	inline float get_U3CclickTimeU3Ek__BackingField_17() const { return ___U3CclickTimeU3Ek__BackingField_17; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_17() { return &___U3CclickTimeU3Ek__BackingField_17; }
	inline void set_U3CclickTimeU3Ek__BackingField_17(float value)
	{
		___U3CclickTimeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CclickCountU3Ek__BackingField_18)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_18() const { return ___U3CclickCountU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_18() { return &___U3CclickCountU3Ek__BackingField_18; }
	inline void set_U3CclickCountU3Ek__BackingField_18(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CscrollDeltaU3Ek__BackingField_19)); }
	inline Vector2_t2156229523  get_U3CscrollDeltaU3Ek__BackingField_19() const { return ___U3CscrollDeltaU3Ek__BackingField_19; }
	inline Vector2_t2156229523 * get_address_of_U3CscrollDeltaU3Ek__BackingField_19() { return &___U3CscrollDeltaU3Ek__BackingField_19; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_19(Vector2_t2156229523  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CuseDragThresholdU3Ek__BackingField_20)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_20() const { return ___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_20() { return &___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_20(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CdraggingU3Ek__BackingField_21)); }
	inline bool get_U3CdraggingU3Ek__BackingField_21() const { return ___U3CdraggingU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_21() { return &___U3CdraggingU3Ek__BackingField_21; }
	inline void set_U3CdraggingU3Ek__BackingField_21(bool value)
	{
		___U3CdraggingU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CbuttonU3Ek__BackingField_22)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_22() const { return ___U3CbuttonU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_22() { return &___U3CbuttonU3Ek__BackingField_22; }
	inline void set_U3CbuttonU3Ek__BackingField_22(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTEREVENTDATA_T3807901092_H
#ifndef STANDALONEINPUT_T1343950252_H
#define STANDALONEINPUT_T1343950252_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput
struct  StandaloneInput_t1343950252  : public VirtualInput_t2597455733
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STANDALONEINPUT_T1343950252_H
#ifndef AXISMAPPING_T3982445645_H
#define AXISMAPPING_T3982445645_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping
struct  AxisMapping_t3982445645  : public RuntimeObject
{
public:
	// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping/MappingType UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping::type
	int32_t ___type_0;
	// System.String UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping::axisName
	String_t* ___axisName_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(AxisMapping_t3982445645, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_axisName_1() { return static_cast<int32_t>(offsetof(AxisMapping_t3982445645, ___axisName_1)); }
	inline String_t* get_axisName_1() const { return ___axisName_1; }
	inline String_t** get_address_of_axisName_1() { return &___axisName_1; }
	inline void set_axisName_1(String_t* value)
	{
		___axisName_1 = value;
		Il2CppCodeGenWriteBarrier((&___axisName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AXISMAPPING_T3982445645_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef TOUCH_T1921856868_H
#define TOUCH_T1921856868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Touch
struct  Touch_t1921856868 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t2156229523  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t2156229523  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t2156229523  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Position_1)); }
	inline Vector2_t2156229523  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_t2156229523 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_t2156229523  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_RawPosition_2)); }
	inline Vector2_t2156229523  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_t2156229523 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_t2156229523  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_PositionDelta_3)); }
	inline Vector2_t2156229523  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_t2156229523 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_t2156229523  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCH_T1921856868_H
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
#ifndef JOYSTICK_T2204371675_H
#define JOYSTICK_T2204371675_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.Joystick
struct  Joystick_t2204371675  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.Joystick::MovementRange
	int32_t ___MovementRange_2;
	// UnityStandardAssets.CrossPlatformInput.Joystick/AxisOption UnityStandardAssets.CrossPlatformInput.Joystick::axesToUse
	int32_t ___axesToUse_3;
	// System.String UnityStandardAssets.CrossPlatformInput.Joystick::horizontalAxisName
	String_t* ___horizontalAxisName_4;
	// System.String UnityStandardAssets.CrossPlatformInput.Joystick::verticalAxisName
	String_t* ___verticalAxisName_5;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.Joystick::m_StartPos
	Vector3_t3722313464  ___m_StartPos_6;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.Joystick::m_UseX
	bool ___m_UseX_7;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.Joystick::m_UseY
	bool ___m_UseY_8;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.Joystick::m_HorizontalVirtualAxis
	VirtualAxis_t4087348596 * ___m_HorizontalVirtualAxis_9;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.Joystick::m_VerticalVirtualAxis
	VirtualAxis_t4087348596 * ___m_VerticalVirtualAxis_10;

public:
	inline static int32_t get_offset_of_MovementRange_2() { return static_cast<int32_t>(offsetof(Joystick_t2204371675, ___MovementRange_2)); }
	inline int32_t get_MovementRange_2() const { return ___MovementRange_2; }
	inline int32_t* get_address_of_MovementRange_2() { return &___MovementRange_2; }
	inline void set_MovementRange_2(int32_t value)
	{
		___MovementRange_2 = value;
	}

	inline static int32_t get_offset_of_axesToUse_3() { return static_cast<int32_t>(offsetof(Joystick_t2204371675, ___axesToUse_3)); }
	inline int32_t get_axesToUse_3() const { return ___axesToUse_3; }
	inline int32_t* get_address_of_axesToUse_3() { return &___axesToUse_3; }
	inline void set_axesToUse_3(int32_t value)
	{
		___axesToUse_3 = value;
	}

	inline static int32_t get_offset_of_horizontalAxisName_4() { return static_cast<int32_t>(offsetof(Joystick_t2204371675, ___horizontalAxisName_4)); }
	inline String_t* get_horizontalAxisName_4() const { return ___horizontalAxisName_4; }
	inline String_t** get_address_of_horizontalAxisName_4() { return &___horizontalAxisName_4; }
	inline void set_horizontalAxisName_4(String_t* value)
	{
		___horizontalAxisName_4 = value;
		Il2CppCodeGenWriteBarrier((&___horizontalAxisName_4), value);
	}

	inline static int32_t get_offset_of_verticalAxisName_5() { return static_cast<int32_t>(offsetof(Joystick_t2204371675, ___verticalAxisName_5)); }
	inline String_t* get_verticalAxisName_5() const { return ___verticalAxisName_5; }
	inline String_t** get_address_of_verticalAxisName_5() { return &___verticalAxisName_5; }
	inline void set_verticalAxisName_5(String_t* value)
	{
		___verticalAxisName_5 = value;
		Il2CppCodeGenWriteBarrier((&___verticalAxisName_5), value);
	}

	inline static int32_t get_offset_of_m_StartPos_6() { return static_cast<int32_t>(offsetof(Joystick_t2204371675, ___m_StartPos_6)); }
	inline Vector3_t3722313464  get_m_StartPos_6() const { return ___m_StartPos_6; }
	inline Vector3_t3722313464 * get_address_of_m_StartPos_6() { return &___m_StartPos_6; }
	inline void set_m_StartPos_6(Vector3_t3722313464  value)
	{
		___m_StartPos_6 = value;
	}

	inline static int32_t get_offset_of_m_UseX_7() { return static_cast<int32_t>(offsetof(Joystick_t2204371675, ___m_UseX_7)); }
	inline bool get_m_UseX_7() const { return ___m_UseX_7; }
	inline bool* get_address_of_m_UseX_7() { return &___m_UseX_7; }
	inline void set_m_UseX_7(bool value)
	{
		___m_UseX_7 = value;
	}

	inline static int32_t get_offset_of_m_UseY_8() { return static_cast<int32_t>(offsetof(Joystick_t2204371675, ___m_UseY_8)); }
	inline bool get_m_UseY_8() const { return ___m_UseY_8; }
	inline bool* get_address_of_m_UseY_8() { return &___m_UseY_8; }
	inline void set_m_UseY_8(bool value)
	{
		___m_UseY_8 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalVirtualAxis_9() { return static_cast<int32_t>(offsetof(Joystick_t2204371675, ___m_HorizontalVirtualAxis_9)); }
	inline VirtualAxis_t4087348596 * get_m_HorizontalVirtualAxis_9() const { return ___m_HorizontalVirtualAxis_9; }
	inline VirtualAxis_t4087348596 ** get_address_of_m_HorizontalVirtualAxis_9() { return &___m_HorizontalVirtualAxis_9; }
	inline void set_m_HorizontalVirtualAxis_9(VirtualAxis_t4087348596 * value)
	{
		___m_HorizontalVirtualAxis_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_HorizontalVirtualAxis_9), value);
	}

	inline static int32_t get_offset_of_m_VerticalVirtualAxis_10() { return static_cast<int32_t>(offsetof(Joystick_t2204371675, ___m_VerticalVirtualAxis_10)); }
	inline VirtualAxis_t4087348596 * get_m_VerticalVirtualAxis_10() const { return ___m_VerticalVirtualAxis_10; }
	inline VirtualAxis_t4087348596 ** get_address_of_m_VerticalVirtualAxis_10() { return &___m_VerticalVirtualAxis_10; }
	inline void set_m_VerticalVirtualAxis_10(VirtualAxis_t4087348596 * value)
	{
		___m_VerticalVirtualAxis_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_VerticalVirtualAxis_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JOYSTICK_T2204371675_H
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
#ifndef AXISTOUCHBUTTON_T3522881333_H
#define AXISTOUCHBUTTON_T3522881333_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.AxisTouchButton
struct  AxisTouchButton_t3522881333  : public MonoBehaviour_t3962482529
{
public:
	// System.String UnityStandardAssets.CrossPlatformInput.AxisTouchButton::axisName
	String_t* ___axisName_2;
	// System.Single UnityStandardAssets.CrossPlatformInput.AxisTouchButton::axisValue
	float ___axisValue_3;
	// System.Single UnityStandardAssets.CrossPlatformInput.AxisTouchButton::responseSpeed
	float ___responseSpeed_4;
	// System.Single UnityStandardAssets.CrossPlatformInput.AxisTouchButton::returnToCentreSpeed
	float ___returnToCentreSpeed_5;
	// UnityStandardAssets.CrossPlatformInput.AxisTouchButton UnityStandardAssets.CrossPlatformInput.AxisTouchButton::m_PairedWith
	AxisTouchButton_t3522881333 * ___m_PairedWith_6;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.AxisTouchButton::m_Axis
	VirtualAxis_t4087348596 * ___m_Axis_7;

public:
	inline static int32_t get_offset_of_axisName_2() { return static_cast<int32_t>(offsetof(AxisTouchButton_t3522881333, ___axisName_2)); }
	inline String_t* get_axisName_2() const { return ___axisName_2; }
	inline String_t** get_address_of_axisName_2() { return &___axisName_2; }
	inline void set_axisName_2(String_t* value)
	{
		___axisName_2 = value;
		Il2CppCodeGenWriteBarrier((&___axisName_2), value);
	}

	inline static int32_t get_offset_of_axisValue_3() { return static_cast<int32_t>(offsetof(AxisTouchButton_t3522881333, ___axisValue_3)); }
	inline float get_axisValue_3() const { return ___axisValue_3; }
	inline float* get_address_of_axisValue_3() { return &___axisValue_3; }
	inline void set_axisValue_3(float value)
	{
		___axisValue_3 = value;
	}

	inline static int32_t get_offset_of_responseSpeed_4() { return static_cast<int32_t>(offsetof(AxisTouchButton_t3522881333, ___responseSpeed_4)); }
	inline float get_responseSpeed_4() const { return ___responseSpeed_4; }
	inline float* get_address_of_responseSpeed_4() { return &___responseSpeed_4; }
	inline void set_responseSpeed_4(float value)
	{
		___responseSpeed_4 = value;
	}

	inline static int32_t get_offset_of_returnToCentreSpeed_5() { return static_cast<int32_t>(offsetof(AxisTouchButton_t3522881333, ___returnToCentreSpeed_5)); }
	inline float get_returnToCentreSpeed_5() const { return ___returnToCentreSpeed_5; }
	inline float* get_address_of_returnToCentreSpeed_5() { return &___returnToCentreSpeed_5; }
	inline void set_returnToCentreSpeed_5(float value)
	{
		___returnToCentreSpeed_5 = value;
	}

	inline static int32_t get_offset_of_m_PairedWith_6() { return static_cast<int32_t>(offsetof(AxisTouchButton_t3522881333, ___m_PairedWith_6)); }
	inline AxisTouchButton_t3522881333 * get_m_PairedWith_6() const { return ___m_PairedWith_6; }
	inline AxisTouchButton_t3522881333 ** get_address_of_m_PairedWith_6() { return &___m_PairedWith_6; }
	inline void set_m_PairedWith_6(AxisTouchButton_t3522881333 * value)
	{
		___m_PairedWith_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_PairedWith_6), value);
	}

	inline static int32_t get_offset_of_m_Axis_7() { return static_cast<int32_t>(offsetof(AxisTouchButton_t3522881333, ___m_Axis_7)); }
	inline VirtualAxis_t4087348596 * get_m_Axis_7() const { return ___m_Axis_7; }
	inline VirtualAxis_t4087348596 ** get_address_of_m_Axis_7() { return &___m_Axis_7; }
	inline void set_m_Axis_7(VirtualAxis_t4087348596 * value)
	{
		___m_Axis_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_Axis_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AXISTOUCHBUTTON_T3522881333_H
#ifndef TILTINPUT_T1639936653_H
#define TILTINPUT_T1639936653_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.TiltInput
struct  TiltInput_t1639936653  : public MonoBehaviour_t3962482529
{
public:
	// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping UnityStandardAssets.CrossPlatformInput.TiltInput::mapping
	AxisMapping_t3982445645 * ___mapping_2;
	// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisOptions UnityStandardAssets.CrossPlatformInput.TiltInput::tiltAroundAxis
	int32_t ___tiltAroundAxis_3;
	// System.Single UnityStandardAssets.CrossPlatformInput.TiltInput::fullTiltAngle
	float ___fullTiltAngle_4;
	// System.Single UnityStandardAssets.CrossPlatformInput.TiltInput::centreAngleOffset
	float ___centreAngleOffset_5;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.TiltInput::m_SteerAxis
	VirtualAxis_t4087348596 * ___m_SteerAxis_6;

public:
	inline static int32_t get_offset_of_mapping_2() { return static_cast<int32_t>(offsetof(TiltInput_t1639936653, ___mapping_2)); }
	inline AxisMapping_t3982445645 * get_mapping_2() const { return ___mapping_2; }
	inline AxisMapping_t3982445645 ** get_address_of_mapping_2() { return &___mapping_2; }
	inline void set_mapping_2(AxisMapping_t3982445645 * value)
	{
		___mapping_2 = value;
		Il2CppCodeGenWriteBarrier((&___mapping_2), value);
	}

	inline static int32_t get_offset_of_tiltAroundAxis_3() { return static_cast<int32_t>(offsetof(TiltInput_t1639936653, ___tiltAroundAxis_3)); }
	inline int32_t get_tiltAroundAxis_3() const { return ___tiltAroundAxis_3; }
	inline int32_t* get_address_of_tiltAroundAxis_3() { return &___tiltAroundAxis_3; }
	inline void set_tiltAroundAxis_3(int32_t value)
	{
		___tiltAroundAxis_3 = value;
	}

	inline static int32_t get_offset_of_fullTiltAngle_4() { return static_cast<int32_t>(offsetof(TiltInput_t1639936653, ___fullTiltAngle_4)); }
	inline float get_fullTiltAngle_4() const { return ___fullTiltAngle_4; }
	inline float* get_address_of_fullTiltAngle_4() { return &___fullTiltAngle_4; }
	inline void set_fullTiltAngle_4(float value)
	{
		___fullTiltAngle_4 = value;
	}

	inline static int32_t get_offset_of_centreAngleOffset_5() { return static_cast<int32_t>(offsetof(TiltInput_t1639936653, ___centreAngleOffset_5)); }
	inline float get_centreAngleOffset_5() const { return ___centreAngleOffset_5; }
	inline float* get_address_of_centreAngleOffset_5() { return &___centreAngleOffset_5; }
	inline void set_centreAngleOffset_5(float value)
	{
		___centreAngleOffset_5 = value;
	}

	inline static int32_t get_offset_of_m_SteerAxis_6() { return static_cast<int32_t>(offsetof(TiltInput_t1639936653, ___m_SteerAxis_6)); }
	inline VirtualAxis_t4087348596 * get_m_SteerAxis_6() const { return ___m_SteerAxis_6; }
	inline VirtualAxis_t4087348596 ** get_address_of_m_SteerAxis_6() { return &___m_SteerAxis_6; }
	inline void set_m_SteerAxis_6(VirtualAxis_t4087348596 * value)
	{
		___m_SteerAxis_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_SteerAxis_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TILTINPUT_T1639936653_H
#ifndef TOUCHPAD_T539039257_H
#define TOUCHPAD_T539039257_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.TouchPad
struct  TouchPad_t539039257  : public MonoBehaviour_t3962482529
{
public:
	// UnityStandardAssets.CrossPlatformInput.TouchPad/AxisOption UnityStandardAssets.CrossPlatformInput.TouchPad::axesToUse
	int32_t ___axesToUse_2;
	// UnityStandardAssets.CrossPlatformInput.TouchPad/ControlStyle UnityStandardAssets.CrossPlatformInput.TouchPad::controlStyle
	int32_t ___controlStyle_3;
	// System.String UnityStandardAssets.CrossPlatformInput.TouchPad::horizontalAxisName
	String_t* ___horizontalAxisName_4;
	// System.String UnityStandardAssets.CrossPlatformInput.TouchPad::verticalAxisName
	String_t* ___verticalAxisName_5;
	// System.Single UnityStandardAssets.CrossPlatformInput.TouchPad::Xsensitivity
	float ___Xsensitivity_6;
	// System.Single UnityStandardAssets.CrossPlatformInput.TouchPad::Ysensitivity
	float ___Ysensitivity_7;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.TouchPad::m_StartPos
	Vector3_t3722313464  ___m_StartPos_8;
	// UnityEngine.Vector2 UnityStandardAssets.CrossPlatformInput.TouchPad::m_PreviousDelta
	Vector2_t2156229523  ___m_PreviousDelta_9;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.TouchPad::m_JoytickOutput
	Vector3_t3722313464  ___m_JoytickOutput_10;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.TouchPad::m_UseX
	bool ___m_UseX_11;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.TouchPad::m_UseY
	bool ___m_UseY_12;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.TouchPad::m_HorizontalVirtualAxis
	VirtualAxis_t4087348596 * ___m_HorizontalVirtualAxis_13;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.TouchPad::m_VerticalVirtualAxis
	VirtualAxis_t4087348596 * ___m_VerticalVirtualAxis_14;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.TouchPad::m_Dragging
	bool ___m_Dragging_15;
	// System.Int32 UnityStandardAssets.CrossPlatformInput.TouchPad::m_Id
	int32_t ___m_Id_16;
	// UnityEngine.Vector2 UnityStandardAssets.CrossPlatformInput.TouchPad::m_PreviousTouchPos
	Vector2_t2156229523  ___m_PreviousTouchPos_17;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.TouchPad::m_Center
	Vector3_t3722313464  ___m_Center_18;
	// UnityEngine.UI.Image UnityStandardAssets.CrossPlatformInput.TouchPad::m_Image
	Image_t2670269651 * ___m_Image_19;

public:
	inline static int32_t get_offset_of_axesToUse_2() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___axesToUse_2)); }
	inline int32_t get_axesToUse_2() const { return ___axesToUse_2; }
	inline int32_t* get_address_of_axesToUse_2() { return &___axesToUse_2; }
	inline void set_axesToUse_2(int32_t value)
	{
		___axesToUse_2 = value;
	}

	inline static int32_t get_offset_of_controlStyle_3() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___controlStyle_3)); }
	inline int32_t get_controlStyle_3() const { return ___controlStyle_3; }
	inline int32_t* get_address_of_controlStyle_3() { return &___controlStyle_3; }
	inline void set_controlStyle_3(int32_t value)
	{
		___controlStyle_3 = value;
	}

	inline static int32_t get_offset_of_horizontalAxisName_4() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___horizontalAxisName_4)); }
	inline String_t* get_horizontalAxisName_4() const { return ___horizontalAxisName_4; }
	inline String_t** get_address_of_horizontalAxisName_4() { return &___horizontalAxisName_4; }
	inline void set_horizontalAxisName_4(String_t* value)
	{
		___horizontalAxisName_4 = value;
		Il2CppCodeGenWriteBarrier((&___horizontalAxisName_4), value);
	}

	inline static int32_t get_offset_of_verticalAxisName_5() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___verticalAxisName_5)); }
	inline String_t* get_verticalAxisName_5() const { return ___verticalAxisName_5; }
	inline String_t** get_address_of_verticalAxisName_5() { return &___verticalAxisName_5; }
	inline void set_verticalAxisName_5(String_t* value)
	{
		___verticalAxisName_5 = value;
		Il2CppCodeGenWriteBarrier((&___verticalAxisName_5), value);
	}

	inline static int32_t get_offset_of_Xsensitivity_6() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___Xsensitivity_6)); }
	inline float get_Xsensitivity_6() const { return ___Xsensitivity_6; }
	inline float* get_address_of_Xsensitivity_6() { return &___Xsensitivity_6; }
	inline void set_Xsensitivity_6(float value)
	{
		___Xsensitivity_6 = value;
	}

	inline static int32_t get_offset_of_Ysensitivity_7() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___Ysensitivity_7)); }
	inline float get_Ysensitivity_7() const { return ___Ysensitivity_7; }
	inline float* get_address_of_Ysensitivity_7() { return &___Ysensitivity_7; }
	inline void set_Ysensitivity_7(float value)
	{
		___Ysensitivity_7 = value;
	}

	inline static int32_t get_offset_of_m_StartPos_8() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___m_StartPos_8)); }
	inline Vector3_t3722313464  get_m_StartPos_8() const { return ___m_StartPos_8; }
	inline Vector3_t3722313464 * get_address_of_m_StartPos_8() { return &___m_StartPos_8; }
	inline void set_m_StartPos_8(Vector3_t3722313464  value)
	{
		___m_StartPos_8 = value;
	}

	inline static int32_t get_offset_of_m_PreviousDelta_9() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___m_PreviousDelta_9)); }
	inline Vector2_t2156229523  get_m_PreviousDelta_9() const { return ___m_PreviousDelta_9; }
	inline Vector2_t2156229523 * get_address_of_m_PreviousDelta_9() { return &___m_PreviousDelta_9; }
	inline void set_m_PreviousDelta_9(Vector2_t2156229523  value)
	{
		___m_PreviousDelta_9 = value;
	}

	inline static int32_t get_offset_of_m_JoytickOutput_10() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___m_JoytickOutput_10)); }
	inline Vector3_t3722313464  get_m_JoytickOutput_10() const { return ___m_JoytickOutput_10; }
	inline Vector3_t3722313464 * get_address_of_m_JoytickOutput_10() { return &___m_JoytickOutput_10; }
	inline void set_m_JoytickOutput_10(Vector3_t3722313464  value)
	{
		___m_JoytickOutput_10 = value;
	}

	inline static int32_t get_offset_of_m_UseX_11() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___m_UseX_11)); }
	inline bool get_m_UseX_11() const { return ___m_UseX_11; }
	inline bool* get_address_of_m_UseX_11() { return &___m_UseX_11; }
	inline void set_m_UseX_11(bool value)
	{
		___m_UseX_11 = value;
	}

	inline static int32_t get_offset_of_m_UseY_12() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___m_UseY_12)); }
	inline bool get_m_UseY_12() const { return ___m_UseY_12; }
	inline bool* get_address_of_m_UseY_12() { return &___m_UseY_12; }
	inline void set_m_UseY_12(bool value)
	{
		___m_UseY_12 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalVirtualAxis_13() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___m_HorizontalVirtualAxis_13)); }
	inline VirtualAxis_t4087348596 * get_m_HorizontalVirtualAxis_13() const { return ___m_HorizontalVirtualAxis_13; }
	inline VirtualAxis_t4087348596 ** get_address_of_m_HorizontalVirtualAxis_13() { return &___m_HorizontalVirtualAxis_13; }
	inline void set_m_HorizontalVirtualAxis_13(VirtualAxis_t4087348596 * value)
	{
		___m_HorizontalVirtualAxis_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_HorizontalVirtualAxis_13), value);
	}

	inline static int32_t get_offset_of_m_VerticalVirtualAxis_14() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___m_VerticalVirtualAxis_14)); }
	inline VirtualAxis_t4087348596 * get_m_VerticalVirtualAxis_14() const { return ___m_VerticalVirtualAxis_14; }
	inline VirtualAxis_t4087348596 ** get_address_of_m_VerticalVirtualAxis_14() { return &___m_VerticalVirtualAxis_14; }
	inline void set_m_VerticalVirtualAxis_14(VirtualAxis_t4087348596 * value)
	{
		___m_VerticalVirtualAxis_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_VerticalVirtualAxis_14), value);
	}

	inline static int32_t get_offset_of_m_Dragging_15() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___m_Dragging_15)); }
	inline bool get_m_Dragging_15() const { return ___m_Dragging_15; }
	inline bool* get_address_of_m_Dragging_15() { return &___m_Dragging_15; }
	inline void set_m_Dragging_15(bool value)
	{
		___m_Dragging_15 = value;
	}

	inline static int32_t get_offset_of_m_Id_16() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___m_Id_16)); }
	inline int32_t get_m_Id_16() const { return ___m_Id_16; }
	inline int32_t* get_address_of_m_Id_16() { return &___m_Id_16; }
	inline void set_m_Id_16(int32_t value)
	{
		___m_Id_16 = value;
	}

	inline static int32_t get_offset_of_m_PreviousTouchPos_17() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___m_PreviousTouchPos_17)); }
	inline Vector2_t2156229523  get_m_PreviousTouchPos_17() const { return ___m_PreviousTouchPos_17; }
	inline Vector2_t2156229523 * get_address_of_m_PreviousTouchPos_17() { return &___m_PreviousTouchPos_17; }
	inline void set_m_PreviousTouchPos_17(Vector2_t2156229523  value)
	{
		___m_PreviousTouchPos_17 = value;
	}

	inline static int32_t get_offset_of_m_Center_18() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___m_Center_18)); }
	inline Vector3_t3722313464  get_m_Center_18() const { return ___m_Center_18; }
	inline Vector3_t3722313464 * get_address_of_m_Center_18() { return &___m_Center_18; }
	inline void set_m_Center_18(Vector3_t3722313464  value)
	{
		___m_Center_18 = value;
	}

	inline static int32_t get_offset_of_m_Image_19() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___m_Image_19)); }
	inline Image_t2670269651 * get_m_Image_19() const { return ___m_Image_19; }
	inline Image_t2670269651 ** get_address_of_m_Image_19() { return &___m_Image_19; }
	inline void set_m_Image_19(Image_t2670269651 * value)
	{
		___m_Image_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_Image_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHPAD_T539039257_H
#ifndef MOBILECONTROLRIG_T1964600252_H
#define MOBILECONTROLRIG_T1964600252_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.MobileControlRig
struct  MobileControlRig_t1964600252  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOBILECONTROLRIG_T1964600252_H
#ifndef BUTTONHANDLER_T823762219_H
#define BUTTONHANDLER_T823762219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.ButtonHandler
struct  ButtonHandler_t823762219  : public MonoBehaviour_t3962482529
{
public:
	// System.String UnityStandardAssets.CrossPlatformInput.ButtonHandler::Name
	String_t* ___Name_2;

public:
	inline static int32_t get_offset_of_Name_2() { return static_cast<int32_t>(offsetof(ButtonHandler_t823762219, ___Name_2)); }
	inline String_t* get_Name_2() const { return ___Name_2; }
	inline String_t** get_address_of_Name_2() { return &___Name_2; }
	inline void set_Name_2(String_t* value)
	{
		___Name_2 = value;
		Il2CppCodeGenWriteBarrier((&___Name_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTONHANDLER_T823762219_H
#ifndef INPUTAXISSCROLLBAR_T457958266_H
#define INPUTAXISSCROLLBAR_T457958266_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar
struct  InputAxisScrollbar_t457958266  : public MonoBehaviour_t3962482529
{
public:
	// System.String UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar::axis
	String_t* ___axis_2;

public:
	inline static int32_t get_offset_of_axis_2() { return static_cast<int32_t>(offsetof(InputAxisScrollbar_t457958266, ___axis_2)); }
	inline String_t* get_axis_2() const { return ___axis_2; }
	inline String_t** get_address_of_axis_2() { return &___axis_2; }
	inline void set_axis_2(String_t* value)
	{
		___axis_2 = value;
		Il2CppCodeGenWriteBarrier((&___axis_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTAXISSCROLLBAR_T457958266_H
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
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_t2598313366 * ___m_CanvasRenderer_8;
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

	inline static int32_t get_offset_of_m_CanvasRenderer_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRenderer_8)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRenderer_8() const { return ___m_CanvasRenderer_8; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRenderer_8() { return &___m_CanvasRenderer_8; }
	inline void set_m_CanvasRenderer_8(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRenderer_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRenderer_8), value);
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
#ifndef IMAGE_T2670269651_H
#define IMAGE_T2670269651_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image
struct  Image_t2670269651  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t280657092 * ___m_Sprite_29;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t280657092 * ___m_OverrideSprite_30;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_31;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_32;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_33;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_34;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_35;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_36;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_37;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_38;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_39;

public:
	inline static int32_t get_offset_of_m_Sprite_29() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_Sprite_29)); }
	inline Sprite_t280657092 * get_m_Sprite_29() const { return ___m_Sprite_29; }
	inline Sprite_t280657092 ** get_address_of_m_Sprite_29() { return &___m_Sprite_29; }
	inline void set_m_Sprite_29(Sprite_t280657092 * value)
	{
		___m_Sprite_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Sprite_29), value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_30() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_OverrideSprite_30)); }
	inline Sprite_t280657092 * get_m_OverrideSprite_30() const { return ___m_OverrideSprite_30; }
	inline Sprite_t280657092 ** get_address_of_m_OverrideSprite_30() { return &___m_OverrideSprite_30; }
	inline void set_m_OverrideSprite_30(Sprite_t280657092 * value)
	{
		___m_OverrideSprite_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_OverrideSprite_30), value);
	}

	inline static int32_t get_offset_of_m_Type_31() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_Type_31)); }
	inline int32_t get_m_Type_31() const { return ___m_Type_31; }
	inline int32_t* get_address_of_m_Type_31() { return &___m_Type_31; }
	inline void set_m_Type_31(int32_t value)
	{
		___m_Type_31 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_32() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_PreserveAspect_32)); }
	inline bool get_m_PreserveAspect_32() const { return ___m_PreserveAspect_32; }
	inline bool* get_address_of_m_PreserveAspect_32() { return &___m_PreserveAspect_32; }
	inline void set_m_PreserveAspect_32(bool value)
	{
		___m_PreserveAspect_32 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_33() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillCenter_33)); }
	inline bool get_m_FillCenter_33() const { return ___m_FillCenter_33; }
	inline bool* get_address_of_m_FillCenter_33() { return &___m_FillCenter_33; }
	inline void set_m_FillCenter_33(bool value)
	{
		___m_FillCenter_33 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_34() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillMethod_34)); }
	inline int32_t get_m_FillMethod_34() const { return ___m_FillMethod_34; }
	inline int32_t* get_address_of_m_FillMethod_34() { return &___m_FillMethod_34; }
	inline void set_m_FillMethod_34(int32_t value)
	{
		___m_FillMethod_34 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_35() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillAmount_35)); }
	inline float get_m_FillAmount_35() const { return ___m_FillAmount_35; }
	inline float* get_address_of_m_FillAmount_35() { return &___m_FillAmount_35; }
	inline void set_m_FillAmount_35(float value)
	{
		___m_FillAmount_35 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_36() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillClockwise_36)); }
	inline bool get_m_FillClockwise_36() const { return ___m_FillClockwise_36; }
	inline bool* get_address_of_m_FillClockwise_36() { return &___m_FillClockwise_36; }
	inline void set_m_FillClockwise_36(bool value)
	{
		___m_FillClockwise_36 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_37() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillOrigin_37)); }
	inline int32_t get_m_FillOrigin_37() const { return ___m_FillOrigin_37; }
	inline int32_t* get_address_of_m_FillOrigin_37() { return &___m_FillOrigin_37; }
	inline void set_m_FillOrigin_37(int32_t value)
	{
		___m_FillOrigin_37 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_38() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_AlphaHitTestMinimumThreshold_38)); }
	inline float get_m_AlphaHitTestMinimumThreshold_38() const { return ___m_AlphaHitTestMinimumThreshold_38; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_38() { return &___m_AlphaHitTestMinimumThreshold_38; }
	inline void set_m_AlphaHitTestMinimumThreshold_38(float value)
	{
		___m_AlphaHitTestMinimumThreshold_38 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_39() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_Tracked_39)); }
	inline bool get_m_Tracked_39() const { return ___m_Tracked_39; }
	inline bool* get_address_of_m_Tracked_39() { return &___m_Tracked_39; }
	inline void set_m_Tracked_39(bool value)
	{
		___m_Tracked_39 = value;
	}
};

struct Image_t2670269651_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t340375123 * ___s_ETC1DefaultUI_28;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_t1457185986* ___s_VertScratch_40;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_t1457185986* ___s_UVScratch_41;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t1718750761* ___s_Xy_42;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t1718750761* ___s_Uv_43;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t4142344393 * ___m_TrackedTexturelessImages_44;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_45;
	// System.Action`1<UnityEngine.U2D.SpriteAtlas> UnityEngine.UI.Image::<>f__mg$cache0
	Action_1_t819399007 * ___U3CU3Ef__mgU24cache0_46;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_28() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_ETC1DefaultUI_28)); }
	inline Material_t340375123 * get_s_ETC1DefaultUI_28() const { return ___s_ETC1DefaultUI_28; }
	inline Material_t340375123 ** get_address_of_s_ETC1DefaultUI_28() { return &___s_ETC1DefaultUI_28; }
	inline void set_s_ETC1DefaultUI_28(Material_t340375123 * value)
	{
		___s_ETC1DefaultUI_28 = value;
		Il2CppCodeGenWriteBarrier((&___s_ETC1DefaultUI_28), value);
	}

	inline static int32_t get_offset_of_s_VertScratch_40() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_VertScratch_40)); }
	inline Vector2U5BU5D_t1457185986* get_s_VertScratch_40() const { return ___s_VertScratch_40; }
	inline Vector2U5BU5D_t1457185986** get_address_of_s_VertScratch_40() { return &___s_VertScratch_40; }
	inline void set_s_VertScratch_40(Vector2U5BU5D_t1457185986* value)
	{
		___s_VertScratch_40 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertScratch_40), value);
	}

	inline static int32_t get_offset_of_s_UVScratch_41() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_UVScratch_41)); }
	inline Vector2U5BU5D_t1457185986* get_s_UVScratch_41() const { return ___s_UVScratch_41; }
	inline Vector2U5BU5D_t1457185986** get_address_of_s_UVScratch_41() { return &___s_UVScratch_41; }
	inline void set_s_UVScratch_41(Vector2U5BU5D_t1457185986* value)
	{
		___s_UVScratch_41 = value;
		Il2CppCodeGenWriteBarrier((&___s_UVScratch_41), value);
	}

	inline static int32_t get_offset_of_s_Xy_42() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_Xy_42)); }
	inline Vector3U5BU5D_t1718750761* get_s_Xy_42() const { return ___s_Xy_42; }
	inline Vector3U5BU5D_t1718750761** get_address_of_s_Xy_42() { return &___s_Xy_42; }
	inline void set_s_Xy_42(Vector3U5BU5D_t1718750761* value)
	{
		___s_Xy_42 = value;
		Il2CppCodeGenWriteBarrier((&___s_Xy_42), value);
	}

	inline static int32_t get_offset_of_s_Uv_43() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_Uv_43)); }
	inline Vector3U5BU5D_t1718750761* get_s_Uv_43() const { return ___s_Uv_43; }
	inline Vector3U5BU5D_t1718750761** get_address_of_s_Uv_43() { return &___s_Uv_43; }
	inline void set_s_Uv_43(Vector3U5BU5D_t1718750761* value)
	{
		___s_Uv_43 = value;
		Il2CppCodeGenWriteBarrier((&___s_Uv_43), value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_44() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___m_TrackedTexturelessImages_44)); }
	inline List_1_t4142344393 * get_m_TrackedTexturelessImages_44() const { return ___m_TrackedTexturelessImages_44; }
	inline List_1_t4142344393 ** get_address_of_m_TrackedTexturelessImages_44() { return &___m_TrackedTexturelessImages_44; }
	inline void set_m_TrackedTexturelessImages_44(List_1_t4142344393 * value)
	{
		___m_TrackedTexturelessImages_44 = value;
		Il2CppCodeGenWriteBarrier((&___m_TrackedTexturelessImages_44), value);
	}

	inline static int32_t get_offset_of_s_Initialized_45() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_Initialized_45)); }
	inline bool get_s_Initialized_45() const { return ___s_Initialized_45; }
	inline bool* get_address_of_s_Initialized_45() { return &___s_Initialized_45; }
	inline void set_s_Initialized_45(bool value)
	{
		___s_Initialized_45 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_46() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___U3CU3Ef__mgU24cache0_46)); }
	inline Action_1_t819399007 * get_U3CU3Ef__mgU24cache0_46() const { return ___U3CU3Ef__mgU24cache0_46; }
	inline Action_1_t819399007 ** get_address_of_U3CU3Ef__mgU24cache0_46() { return &___U3CU3Ef__mgU24cache0_46; }
	inline void set_U3CU3Ef__mgU24cache0_46(Action_1_t819399007 * value)
	{
		___U3CU3Ef__mgU24cache0_46 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_46), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGE_T2670269651_H
// UnityStandardAssets.CrossPlatformInput.AxisTouchButton[]
struct AxisTouchButtonU5BU5D_t4256519256  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AxisTouchButton_t3522881333 * m_Items[1];

public:
	inline AxisTouchButton_t3522881333 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AxisTouchButton_t3522881333 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AxisTouchButton_t3522881333 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline AxisTouchButton_t3522881333 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AxisTouchButton_t3522881333 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AxisTouchButton_t3522881333 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Object[]
struct ObjectU5BU5D_t1417781964  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Object_t631007953 * m_Items[1];

public:
	inline Object_t631007953 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_t631007953 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_t631007953 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Object_t631007953 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_t631007953 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_t631007953 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Touch[]
struct TouchU5BU5D_t1849554061  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Touch_t1921856868  m_Items[1];

public:
	inline Touch_t1921856868  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Touch_t1921856868 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Touch_t1921856868  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Touch_t1921856868  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Touch_t1921856868 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Touch_t1921856868  value)
	{
		m_Items[index] = value;
	}
};


// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m2278349286_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m2714930061_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m2387223709_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m1786738978_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::AxisExists(System.String)
extern "C" IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_AxisExists_m365322552 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void VirtualAxis__ctor_m1869943658 (VirtualAxis_t4087348596 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
extern "C" IL2CPP_METHOD_ATTR void CrossPlatformInputManager_RegisterVirtualAxis_m3479801628 (RuntimeObject * __this /* static, unused */, VirtualAxis_t4087348596 * ___axis0, const RuntimeMethod* method);
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::VirtualAxisReference(System.String)
extern "C" IL2CPP_METHOD_ATTR VirtualAxis_t4087348596 * CrossPlatformInputManager_VirtualAxisReference_m1463805196 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::FindPairedButton()
extern "C" IL2CPP_METHOD_ATTR void AxisTouchButton_FindPairedButton_m3895318073 (AxisTouchButton_t3522881333 * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method);
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t1417781964* Object_FindObjectsOfType_m2295101757 (RuntimeObject * __this /* static, unused */, Type_t * p0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Remove()
extern "C" IL2CPP_METHOD_ATTR void VirtualAxis_Remove_m3159277484 (VirtualAxis_t4087348596 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_GetValue()
extern "C" IL2CPP_METHOD_ATTR float VirtualAxis_get_GetValue_m337417923 (VirtualAxis_t4087348596 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::MoveTowards(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_MoveTowards_m2357711114 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Update(System.Single)
extern "C" IL2CPP_METHOD_ATTR void VirtualAxis_Update_m1043809197 (VirtualAxis_t4087348596 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonDown(System.String)
extern "C" IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetButtonDown_m1980143873 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonUp(System.String)
extern "C" IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetButtonUp_m3204959434 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisPositive(System.String)
extern "C" IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxisPositive_m3893292619 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisZero(System.String)
extern "C" IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxisZero_m3139545681 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisNegative(System.String)
extern "C" IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxisNegative_m1070090094 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MobileInput__ctor_m1458281675 (MobileInput_t2025745297 * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::.ctor()
extern "C" IL2CPP_METHOD_ATTR void StandaloneInput__ctor_m1221073179 (StandaloneInput_t1343950252 * __this, const RuntimeMethod* method);
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::AxisExists(System.String)
extern "C" IL2CPP_METHOD_ATTR bool VirtualInput_AxisExists_m20278768 (VirtualInput_t2597455733 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::ButtonExists(System.String)
extern "C" IL2CPP_METHOD_ATTR bool VirtualInput_ButtonExists_m3875122617 (VirtualInput_t2597455733 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
extern "C" IL2CPP_METHOD_ATTR void VirtualInput_RegisterVirtualAxis_m2884529091 (VirtualInput_t2597455733 * __this, VirtualAxis_t4087348596 * ___axis0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
extern "C" IL2CPP_METHOD_ATTR void VirtualInput_RegisterVirtualButton_m3959785200 (VirtualInput_t2597455733 * __this, VirtualButton_t2756566330 * ___button0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualAxis(System.String)
extern "C" IL2CPP_METHOD_ATTR void VirtualInput_UnRegisterVirtualAxis_m2956537171 (VirtualInput_t2597455733 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualButton(System.String)
extern "C" IL2CPP_METHOD_ATTR void VirtualInput_UnRegisterVirtualButton_m3129182690 (VirtualInput_t2597455733 * __this, String_t* ___name0, const RuntimeMethod* method);
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.VirtualInput::VirtualAxisReference(System.String)
extern "C" IL2CPP_METHOD_ATTR VirtualAxis_t4087348596 * VirtualInput_VirtualAxisReference_m2155778560 (VirtualInput_t2597455733 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR float CrossPlatformInputManager_GetAxis_m4082502259 (RuntimeObject * __this /* static, unused */, String_t* ___name0, bool ___raw1, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionX(System.Single)
extern "C" IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionX_m1438630863 (VirtualInput_t2597455733 * __this, float ___f0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionY(System.Single)
extern "C" IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionY_m110408526 (VirtualInput_t2597455733 * __this, float ___f0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionZ(System.Single)
extern "C" IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionZ_m414912069 (VirtualInput_t2597455733 * __this, float ___f0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void VirtualAxis__ctor_m2412437643 (VirtualAxis_t4087348596 * __this, String_t* ___name0, bool ___matchToInputSettings1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_name(System.String)
extern "C" IL2CPP_METHOD_ATTR void VirtualAxis_set_name_m1459829131 (VirtualAxis_t4087348596 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_matchWithInputManager(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void VirtualAxis_set_matchWithInputManager_m2896509700 (VirtualAxis_t4087348596 * __this, bool ___value0, const RuntimeMethod* method);
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* VirtualAxis_get_name_m610059897 (VirtualAxis_t4087348596 * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualAxis(System.String)
extern "C" IL2CPP_METHOD_ATTR void CrossPlatformInputManager_UnRegisterVirtualAxis_m2756471501 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void VirtualButton__ctor_m1314603841 (VirtualButton_t2756566330 * __this, String_t* ___name0, bool ___matchToInputSettings1, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_name(System.String)
extern "C" IL2CPP_METHOD_ATTR void VirtualButton_set_name_m2909511825 (VirtualButton_t2756566330 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_matchWithInputManager(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void VirtualButton_set_matchWithInputManager_m3716809525 (VirtualButton_t2756566330 * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Time::get_frameCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Time_get_frameCount_m1220035214 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* VirtualButton_get_name_m3473382228 (VirtualButton_t2756566330 * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualButton(System.String)
extern "C" IL2CPP_METHOD_ATTR void CrossPlatformInputManager_UnRegisterVirtualButton_m2844659319 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxis(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxis_m1144576044 (RuntimeObject * __this /* static, unused */, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::CreateVirtualAxes()
extern "C" IL2CPP_METHOD_ATTR void Joystick_CreateVirtualAxes_m2739417166 (Joystick_t2204371675 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Subtraction_m3073674971 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Division_m510815599 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  PointerEventData_get_position_m437660275 (PointerEventData_t3807901092 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m2756574208 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::UpdateVirtualAxes(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Joystick_UpdateVirtualAxes_m1439422241 (Joystick_t2204371675 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::CheckEnableControlRig()
extern "C" IL2CPP_METHOD_ATTR void MobileControlRig_CheckEnableControlRig_m2194254892 (MobileControlRig_t1964600252 * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::EnableControlRig(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MobileControlRig_EnableControlRig_m2268035780 (MobileControlRig_t1964600252 * __this, bool ___enabled0, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_m2717073726 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::.ctor()
extern "C" IL2CPP_METHOD_ATTR void VirtualInput__ctor_m132259715 (VirtualInput_t2597455733 * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void VirtualButton__ctor_m4196049871 (VirtualButton_t2756566330 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
extern "C" IL2CPP_METHOD_ATTR void CrossPlatformInputManager_RegisterVirtualButton_m1830161946 (RuntimeObject * __this /* static, unused */, VirtualButton_t2756566330 * ___button0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m3309109471(__this, p0, method) ((  bool (*) (Dictionary_2_t3872604895 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m2278349286_gshared)(__this, p0, method)
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddAxes(System.String)
extern "C" IL2CPP_METHOD_ATTR void MobileInput_AddAxes_m488652706 (MobileInput_t2025745297 * __this, String_t* ___name0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::get_Item(!0)
#define Dictionary_2_get_Item_m1067981918(__this, p0, method) ((  VirtualAxis_t4087348596 * (*) (Dictionary_2_t3872604895 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m2714930061_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m3760162225(__this, p0, method) ((  bool (*) (Dictionary_2_t2541822629 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m2278349286_gshared)(__this, p0, method)
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddButton(System.String)
extern "C" IL2CPP_METHOD_ATTR void MobileInput_AddButton_m1457048403 (MobileInput_t2025745297 * __this, String_t* ___name0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::get_Item(!0)
#define Dictionary_2_get_Item_m572056520(__this, p0, method) ((  VirtualButton_t2756566330 * (*) (Dictionary_2_t2541822629 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m2714930061_gshared)(__this, p0, method)
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Pressed()
extern "C" IL2CPP_METHOD_ATTR void VirtualButton_Pressed_m2977736877 (VirtualButton_t2756566330 * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Released()
extern "C" IL2CPP_METHOD_ATTR void VirtualButton_Released_m3633878926 (VirtualButton_t2756566330 * __this, const RuntimeMethod* method);
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonDown()
extern "C" IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButtonDown_m2538225749 (VirtualButton_t2756566330 * __this, const RuntimeMethod* method);
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonUp()
extern "C" IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButtonUp_m3614711974 (VirtualButton_t2756566330 * __this, const RuntimeMethod* method);
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButton()
extern "C" IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButton_m426677553 (VirtualButton_t2756566330 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::get_virtualMousePosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  VirtualInput_get_virtualMousePosition_m1530934210 (VirtualInput_t2597455733 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
extern "C" IL2CPP_METHOD_ATTR float Input_GetAxisRaw_m2316819917 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
extern "C" IL2CPP_METHOD_ATTR float Input_GetAxis_m4009438427 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButton(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Input_GetButton_m2064261504 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Input_GetButtonDown_m3074252807 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButtonUp(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Input_GetButtonUp_m4007681079 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m1152696503 (Exception_t * __this, String_t* p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Input_get_mousePosition_m1616496925 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_acceleration()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Input_get_acceleration_m2528400370 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m315980366 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::InverseLerp(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_InverseLerp_m4155825980 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_width_m345039817 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionX(System.Single)
extern "C" IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetVirtualMousePositionX_m1649950270 (RuntimeObject * __this /* static, unused */, float ___f0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionY(System.Single)
extern "C" IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetVirtualMousePositionY_m427631433 (RuntimeObject * __this /* static, unused */, float ___f0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionZ(System.Single)
extern "C" IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetVirtualMousePositionZ_m640530475 (RuntimeObject * __this /* static, unused */, float ___f0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::CreateVirtualAxes()
extern "C" IL2CPP_METHOD_ATTR void TouchPad_CreateVirtualAxes_m1112936150 (TouchPad_t539039257 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
#define Component_GetComponent_TisImage_t2670269651_m980647750(__this, method) ((  Image_t2670269651 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_normalized_m2454957984 (Vector3_t3722313464 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.EventSystems.PointerEventData::get_pointerId()
extern "C" IL2CPP_METHOD_ATTR int32_t PointerEventData_get_pointerId_m1200356155 (PointerEventData_t3807901092 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector2_op_Implicit_m1860157806 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Input::get_touchCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m3403849067 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
extern "C" IL2CPP_METHOD_ATTR TouchU5BU5D_t1849554061* Input_get_touches_m1702694043 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Touch_get_position_m3109777936 (Touch_t1921856868 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_get_normalized_m2683665860 (Vector2_t2156229523 * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::UpdateVirtualAxes(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void TouchPad_UpdateVirtualAxes_m1567451020 (TouchPad_t539039257 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::.ctor()
#define Dictionary_2__ctor_m3611672568(__this, method) ((  void (*) (Dictionary_2_t3872604895 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::.ctor()
#define Dictionary_2__ctor_m2614243156(__this, method) ((  void (*) (Dictionary_2_t2541822629 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
#define List_1__ctor_m706204246(__this, method) ((  void (*) (List_1_t3319525431 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::Add(!0,!1)
#define Dictionary_2_Add_m2550485437(__this, p0, p1, method) ((  void (*) (Dictionary_2_t3872604895 *, String_t*, VirtualAxis_t4087348596 *, const RuntimeMethod*))Dictionary_2_Add_m2387223709_gshared)(__this, p0, p1, method)
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_matchWithInputManager()
extern "C" IL2CPP_METHOD_ATTR bool VirtualAxis_get_matchWithInputManager_m2059598452 (VirtualAxis_t4087348596 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
#define List_1_Add_m1685793073(__this, p0, method) ((  void (*) (List_1_t3319525431 *, String_t*, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::Add(!0,!1)
#define Dictionary_2_Add_m1118216421(__this, p0, p1, method) ((  void (*) (Dictionary_2_t2541822629 *, String_t*, VirtualButton_t2756566330 *, const RuntimeMethod*))Dictionary_2_Add_m2387223709_gshared)(__this, p0, p1, method)
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_matchWithInputManager()
extern "C" IL2CPP_METHOD_ATTR bool VirtualButton_get_matchWithInputManager_m2472937772 (VirtualButton_t2756566330 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::Remove(!0)
#define Dictionary_2_Remove_m2199267801(__this, p0, method) ((  bool (*) (Dictionary_2_t3872604895 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m1786738978_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::Remove(!0)
#define Dictionary_2_Remove_m2343242332(__this, p0, method) ((  bool (*) (Dictionary_2_t2541822629 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m1786738978_gshared)(__this, p0, method)
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::set_virtualMousePosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void VirtualInput_set_virtualMousePosition_m308564020 (VirtualInput_t2597455733 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method);
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
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AxisTouchButton__ctor_m999535707 (AxisTouchButton_t3522881333 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AxisTouchButton__ctor_m999535707_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_axisName_2(_stringLiteral1828639942);
		__this->set_axisValue_3((1.0f));
		__this->set_responseSpeed_4((3.0f));
		__this->set_returnToCentreSpeed_5((3.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void AxisTouchButton_OnEnable_m442372918 (AxisTouchButton_t3522881333 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AxisTouchButton_OnEnable_m442372918_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_axisName_2();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		bool L_1 = CrossPlatformInputManager_AxisExists_m365322552(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_2 = __this->get_axisName_2();
		VirtualAxis_t4087348596 * L_3 = (VirtualAxis_t4087348596 *)il2cpp_codegen_object_new(VirtualAxis_t4087348596_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m1869943658(L_3, L_2, /*hidden argument*/NULL);
		__this->set_m_Axis_7(L_3);
		VirtualAxis_t4087348596 * L_4 = __this->get_m_Axis_7();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_m3479801628(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		goto IL_0042;
	}

IL_0031:
	{
		String_t* L_5 = __this->get_axisName_2();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		VirtualAxis_t4087348596 * L_6 = CrossPlatformInputManager_VirtualAxisReference_m1463805196(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		__this->set_m_Axis_7(L_6);
	}

IL_0042:
	{
		AxisTouchButton_FindPairedButton_m3895318073(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::FindPairedButton()
extern "C" IL2CPP_METHOD_ATTR void AxisTouchButton_FindPairedButton_m3895318073 (AxisTouchButton_t3522881333 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AxisTouchButton_FindPairedButton_m3895318073_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AxisTouchButtonU5BU5D_t4256519256* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (AxisTouchButton_t3522881333_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t1417781964* L_2 = Object_FindObjectsOfType_m2295101757(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = ((AxisTouchButtonU5BU5D_t4256519256*)IsInst((RuntimeObject*)L_2, AxisTouchButtonU5BU5D_t4256519256_il2cpp_TypeInfo_var));
		AxisTouchButtonU5BU5D_t4256519256* L_3 = V_0;
		if (!L_3)
		{
			goto IL_005e;
		}
	}
	{
		V_1 = 0;
		goto IL_0055;
	}

IL_0022:
	{
		AxisTouchButtonU5BU5D_t4256519256* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		AxisTouchButton_t3522881333 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		String_t* L_8 = L_7->get_axisName_2();
		String_t* L_9 = __this->get_axisName_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_op_Equality_m920492651(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0051;
		}
	}
	{
		AxisTouchButtonU5BU5D_t4256519256* L_11 = V_0;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		AxisTouchButton_t3522881333 * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_15 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_14, __this, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0051;
		}
	}
	{
		AxisTouchButtonU5BU5D_t4256519256* L_16 = V_0;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		AxisTouchButton_t3522881333 * L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		__this->set_m_PairedWith_6(L_19);
	}

IL_0051:
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0055:
	{
		int32_t L_21 = V_1;
		AxisTouchButtonU5BU5D_t4256519256* L_22 = V_0;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_22)->max_length)))))))
		{
			goto IL_0022;
		}
	}

IL_005e:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::OnDisable()
extern "C" IL2CPP_METHOD_ATTR void AxisTouchButton_OnDisable_m2583211833 (AxisTouchButton_t3522881333 * __this, const RuntimeMethod* method)
{
	{
		VirtualAxis_t4087348596 * L_0 = __this->get_m_Axis_7();
		NullCheck(L_0);
		VirtualAxis_Remove_m3159277484(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void AxisTouchButton_OnPointerDown_m2871318548 (AxisTouchButton_t3522881333 * __this, PointerEventData_t3807901092 * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AxisTouchButton_OnPointerDown_m2871318548_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AxisTouchButton_t3522881333 * L_0 = __this->get_m_PairedWith_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		AxisTouchButton_FindPairedButton_m3895318073(__this, /*hidden argument*/NULL);
	}

IL_0017:
	{
		VirtualAxis_t4087348596 * L_2 = __this->get_m_Axis_7();
		VirtualAxis_t4087348596 * L_3 = __this->get_m_Axis_7();
		NullCheck(L_3);
		float L_4 = VirtualAxis_get_GetValue_m337417923(L_3, /*hidden argument*/NULL);
		float L_5 = __this->get_axisValue_3();
		float L_6 = __this->get_responseSpeed_4();
		float L_7 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_8 = Mathf_MoveTowards_m2357711114(NULL /*static, unused*/, L_4, L_5, ((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)), /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtualAxis_Update_m1043809197(L_2, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void AxisTouchButton_OnPointerUp_m3116908619 (AxisTouchButton_t3522881333 * __this, PointerEventData_t3807901092 * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AxisTouchButton_OnPointerUp_m3116908619_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtualAxis_t4087348596 * L_0 = __this->get_m_Axis_7();
		VirtualAxis_t4087348596 * L_1 = __this->get_m_Axis_7();
		NullCheck(L_1);
		float L_2 = VirtualAxis_get_GetValue_m337417923(L_1, /*hidden argument*/NULL);
		float L_3 = __this->get_responseSpeed_4();
		float L_4 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_5 = Mathf_MoveTowards_m2357711114(NULL /*static, unused*/, L_2, (0.0f), ((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)), /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtualAxis_Update_m1043809197(L_0, L_5, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ButtonHandler__ctor_m64354371 (ButtonHandler_t823762219 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void ButtonHandler_OnEnable_m2044794226 (ButtonHandler_t823762219 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetDownState()
extern "C" IL2CPP_METHOD_ATTR void ButtonHandler_SetDownState_m1604948932 (ButtonHandler_t823762219 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ButtonHandler_SetDownState_m1604948932_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_Name_2();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetButtonDown_m1980143873(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetUpState()
extern "C" IL2CPP_METHOD_ATTR void ButtonHandler_SetUpState_m1609465475 (ButtonHandler_t823762219 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ButtonHandler_SetUpState_m1609465475_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_Name_2();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetButtonUp_m3204959434(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetAxisPositiveState()
extern "C" IL2CPP_METHOD_ATTR void ButtonHandler_SetAxisPositiveState_m3352739966 (ButtonHandler_t823762219 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ButtonHandler_SetAxisPositiveState_m3352739966_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_Name_2();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetAxisPositive_m3893292619(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetAxisNeutralState()
extern "C" IL2CPP_METHOD_ATTR void ButtonHandler_SetAxisNeutralState_m3530688688 (ButtonHandler_t823762219 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ButtonHandler_SetAxisNeutralState_m3530688688_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_Name_2();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetAxisZero_m3139545681(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetAxisNegativeState()
extern "C" IL2CPP_METHOD_ATTR void ButtonHandler_SetAxisNegativeState_m513810363 (ButtonHandler_t823762219 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ButtonHandler_SetAxisNegativeState_m513810363_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_Name_2();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetAxisNegative_m1070090094(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::Update()
extern "C" IL2CPP_METHOD_ATTR void ButtonHandler_Update_m1804842525 (ButtonHandler_t823762219 * __this, const RuntimeMethod* method)
{
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
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::.cctor()
extern "C" IL2CPP_METHOD_ATTR void CrossPlatformInputManager__cctor_m342528670 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager__cctor_m342528670_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MobileInput_t2025745297 * L_0 = (MobileInput_t2025745297 *)il2cpp_codegen_object_new(MobileInput_t2025745297_il2cpp_TypeInfo_var);
		MobileInput__ctor_m1458281675(L_0, /*hidden argument*/NULL);
		((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->set_s_TouchInput_1(L_0);
		StandaloneInput_t1343950252 * L_1 = (StandaloneInput_t1343950252 *)il2cpp_codegen_object_new(StandaloneInput_t1343950252_il2cpp_TypeInfo_var);
		StandaloneInput__ctor_m1221073179(L_1, /*hidden argument*/NULL);
		((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->set_s_HardwareInput_2(L_1);
		VirtualInput_t2597455733 * L_2 = ((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->get_s_TouchInput_1();
		((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->set_activeInput_0(L_2);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SwitchActiveInputMethod(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/ActiveInputMethod)
extern "C" IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SwitchActiveInputMethod_m1628095800 (RuntimeObject * __this /* static, unused */, int32_t ___activeInputMethod0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_SwitchActiveInputMethod_m1628095800_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___activeInputMethod0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___activeInputMethod0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0021;
		}
	}
	{
		goto IL_0030;
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		VirtualInput_t2597455733 * L_2 = ((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->get_s_HardwareInput_2();
		((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->set_activeInput_0(L_2);
		goto IL_0030;
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		VirtualInput_t2597455733 * L_3 = ((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->get_s_TouchInput_1();
		((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->set_activeInput_0(L_3);
		goto IL_0030;
	}

IL_0030:
	{
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::AxisExists(System.String)
extern "C" IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_AxisExists_m365322552 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_AxisExists_m365322552_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		VirtualInput_t2597455733 * L_0 = ((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = VirtualInput_AxisExists_m20278768(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::ButtonExists(System.String)
extern "C" IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_ButtonExists_m3745088456 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_ButtonExists_m3745088456_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		VirtualInput_t2597455733 * L_0 = ((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = VirtualInput_ButtonExists_m3875122617(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
extern "C" IL2CPP_METHOD_ATTR void CrossPlatformInputManager_RegisterVirtualAxis_m3479801628 (RuntimeObject * __this /* static, unused */, VirtualAxis_t4087348596 * ___axis0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_RegisterVirtualAxis_m3479801628_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		VirtualInput_t2597455733 * L_0 = ((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->get_activeInput_0();
		VirtualAxis_t4087348596 * L_1 = ___axis0;
		NullCheck(L_0);
		VirtualInput_RegisterVirtualAxis_m2884529091(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
extern "C" IL2CPP_METHOD_ATTR void CrossPlatformInputManager_RegisterVirtualButton_m1830161946 (RuntimeObject * __this /* static, unused */, VirtualButton_t2756566330 * ___button0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_RegisterVirtualButton_m1830161946_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		VirtualInput_t2597455733 * L_0 = ((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->get_activeInput_0();
		VirtualButton_t2756566330 * L_1 = ___button0;
		NullCheck(L_0);
		VirtualInput_RegisterVirtualButton_m3959785200(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualAxis(System.String)
extern "C" IL2CPP_METHOD_ATTR void CrossPlatformInputManager_UnRegisterVirtualAxis_m2756471501 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_UnRegisterVirtualAxis_m2756471501_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral62725243, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,CrossPlatformInputManager_UnRegisterVirtualAxis_m2756471501_RuntimeMethod_var);
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		VirtualInput_t2597455733 * L_2 = ((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		VirtualInput_UnRegisterVirtualAxis_m2956537171(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualButton(System.String)
extern "C" IL2CPP_METHOD_ATTR void CrossPlatformInputManager_UnRegisterVirtualButton_m2844659319 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_UnRegisterVirtualButton_m2844659319_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		VirtualInput_t2597455733 * L_0 = ((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtualInput_UnRegisterVirtualButton_m3129182690(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::VirtualAxisReference(System.String)
extern "C" IL2CPP_METHOD_ATTR VirtualAxis_t4087348596 * CrossPlatformInputManager_VirtualAxisReference_m1463805196 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_VirtualAxisReference_m1463805196_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		VirtualInput_t2597455733 * L_0 = ((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtualAxis_t4087348596 * L_2 = VirtualInput_VirtualAxisReference_m2155778560(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String)
extern "C" IL2CPP_METHOD_ATTR float CrossPlatformInputManager_GetAxis_m693277759 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_GetAxis_m693277759_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		float L_1 = CrossPlatformInputManager_GetAxis_m4082502259(NULL /*static, unused*/, L_0, (bool)0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxisRaw(System.String)
extern "C" IL2CPP_METHOD_ATTR float CrossPlatformInputManager_GetAxisRaw_m3797907116 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_GetAxisRaw_m3797907116_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		float L_1 = CrossPlatformInputManager_GetAxis_m4082502259(NULL /*static, unused*/, L_0, (bool)1, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR float CrossPlatformInputManager_GetAxis_m4082502259 (RuntimeObject * __this /* static, unused */, String_t* ___name0, bool ___raw1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_GetAxis_m4082502259_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		VirtualInput_t2597455733 * L_0 = ((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		bool L_2 = ___raw1;
		NullCheck(L_0);
		float L_3 = VirtFuncInvoker2< float, String_t*, bool >::Invoke(4 /* System.Single UnityStandardAssets.CrossPlatformInput.VirtualInput::GetAxis(System.String,System.Boolean) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButton(System.String)
extern "C" IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_GetButton_m241794690 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_GetButton_m241794690_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		VirtualInput_t2597455733 * L_0 = ((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = VirtFuncInvoker1< bool, String_t* >::Invoke(5 /* System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::GetButton(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButtonDown(System.String)
extern "C" IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_GetButtonDown_m1689635996 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_GetButtonDown_m1689635996_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		VirtualInput_t2597455733 * L_0 = ((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = VirtFuncInvoker1< bool, String_t* >::Invoke(6 /* System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::GetButtonDown(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButtonUp(System.String)
extern "C" IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_GetButtonUp_m100471868 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_GetButtonUp_m100471868_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		VirtualInput_t2597455733 * L_0 = ((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = VirtFuncInvoker1< bool, String_t* >::Invoke(7 /* System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::GetButtonUp(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonDown(System.String)
extern "C" IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetButtonDown_m1980143873 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_SetButtonDown_m1980143873_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		VirtualInput_t2597455733 * L_0 = ((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(8 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetButtonDown(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonUp(System.String)
extern "C" IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetButtonUp_m3204959434 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_SetButtonUp_m3204959434_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		VirtualInput_t2597455733 * L_0 = ((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(9 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetButtonUp(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisPositive(System.String)
extern "C" IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxisPositive_m3893292619 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_SetAxisPositive_m3893292619_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		VirtualInput_t2597455733 * L_0 = ((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxisPositive(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisNegative(System.String)
extern "C" IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxisNegative_m1070090094 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_SetAxisNegative_m1070090094_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		VirtualInput_t2597455733 * L_0 = ((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(11 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxisNegative(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisZero(System.String)
extern "C" IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxisZero_m3139545681 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_SetAxisZero_m3139545681_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		VirtualInput_t2597455733 * L_0 = ((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxisZero(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxis(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxis_m1144576044 (RuntimeObject * __this /* static, unused */, String_t* ___name0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_SetAxis_m1144576044_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		VirtualInput_t2597455733 * L_0 = ((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		float L_2 = ___value1;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, float >::Invoke(13 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxis(System.String,System.Single) */, L_0, L_1, L_2);
		return;
	}
}
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::get_mousePosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  CrossPlatformInputManager_get_mousePosition_m2355398278 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_get_mousePosition_m2355398278_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		VirtualInput_t2597455733 * L_0 = ((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->get_activeInput_0();
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = VirtFuncInvoker0< Vector3_t3722313464  >::Invoke(14 /* UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::MousePosition() */, L_0);
		return L_1;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionX(System.Single)
extern "C" IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetVirtualMousePositionX_m1649950270 (RuntimeObject * __this /* static, unused */, float ___f0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_SetVirtualMousePositionX_m1649950270_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		VirtualInput_t2597455733 * L_0 = ((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->get_activeInput_0();
		float L_1 = ___f0;
		NullCheck(L_0);
		VirtualInput_SetVirtualMousePositionX_m1438630863(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionY(System.Single)
extern "C" IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetVirtualMousePositionY_m427631433 (RuntimeObject * __this /* static, unused */, float ___f0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_SetVirtualMousePositionY_m427631433_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		VirtualInput_t2597455733 * L_0 = ((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->get_activeInput_0();
		float L_1 = ___f0;
		NullCheck(L_0);
		VirtualInput_SetVirtualMousePositionY_m110408526(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionZ(System.Single)
extern "C" IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetVirtualMousePositionZ_m640530475 (RuntimeObject * __this /* static, unused */, float ___f0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_SetVirtualMousePositionZ_m640530475_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		VirtualInput_t2597455733 * L_0 = ((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->get_activeInput_0();
		float L_1 = ___f0;
		NullCheck(L_0);
		VirtualInput_SetVirtualMousePositionZ_m414912069(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void VirtualAxis__ctor_m1869943658 (VirtualAxis_t4087348596 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		VirtualAxis__ctor_m2412437643(__this, L_0, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void VirtualAxis__ctor_m2412437643 (VirtualAxis_t4087348596 * __this, String_t* ___name0, bool ___matchToInputSettings1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		VirtualAxis_set_name_m1459829131(__this, L_0, /*hidden argument*/NULL);
		bool L_1 = ___matchToInputSettings1;
		VirtualAxis_set_matchWithInputManager_m2896509700(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* VirtualAxis_get_name_m610059897 (VirtualAxis_t4087348596 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CnameU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_name(System.String)
extern "C" IL2CPP_METHOD_ATTR void VirtualAxis_set_name_m1459829131 (VirtualAxis_t4087348596 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_matchWithInputManager()
extern "C" IL2CPP_METHOD_ATTR bool VirtualAxis_get_matchWithInputManager_m2059598452 (VirtualAxis_t4087348596 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CmatchWithInputManagerU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_matchWithInputManager(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void VirtualAxis_set_matchWithInputManager_m2896509700 (VirtualAxis_t4087348596 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CmatchWithInputManagerU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Remove()
extern "C" IL2CPP_METHOD_ATTR void VirtualAxis_Remove_m3159277484 (VirtualAxis_t4087348596 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualAxis_Remove_m3159277484_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = VirtualAxis_get_name_m610059897(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_UnRegisterVirtualAxis_m2756471501(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Update(System.Single)
extern "C" IL2CPP_METHOD_ATTR void VirtualAxis_Update_m1043809197 (VirtualAxis_t4087348596 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_m_Value_1(L_0);
		return;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_GetValue()
extern "C" IL2CPP_METHOD_ATTR float VirtualAxis_get_GetValue_m337417923 (VirtualAxis_t4087348596 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_m_Value_1();
		return L_0;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_GetValueRaw()
extern "C" IL2CPP_METHOD_ATTR float VirtualAxis_get_GetValueRaw_m2713978768 (VirtualAxis_t4087348596 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_m_Value_1();
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
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void VirtualButton__ctor_m4196049871 (VirtualButton_t2756566330 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		VirtualButton__ctor_m1314603841(__this, L_0, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void VirtualButton__ctor_m1314603841 (VirtualButton_t2756566330 * __this, String_t* ___name0, bool ___matchToInputSettings1, const RuntimeMethod* method)
{
	{
		__this->set_m_LastPressedFrame_2(((int32_t)-5));
		__this->set_m_ReleasedFrame_3(((int32_t)-5));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		VirtualButton_set_name_m2909511825(__this, L_0, /*hidden argument*/NULL);
		bool L_1 = ___matchToInputSettings1;
		VirtualButton_set_matchWithInputManager_m3716809525(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* VirtualButton_get_name_m3473382228 (VirtualButton_t2756566330 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CnameU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_name(System.String)
extern "C" IL2CPP_METHOD_ATTR void VirtualButton_set_name_m2909511825 (VirtualButton_t2756566330 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_matchWithInputManager()
extern "C" IL2CPP_METHOD_ATTR bool VirtualButton_get_matchWithInputManager_m2472937772 (VirtualButton_t2756566330 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CmatchWithInputManagerU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_matchWithInputManager(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void VirtualButton_set_matchWithInputManager_m3716809525 (VirtualButton_t2756566330 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CmatchWithInputManagerU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Pressed()
extern "C" IL2CPP_METHOD_ATTR void VirtualButton_Pressed_m2977736877 (VirtualButton_t2756566330 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_Pressed_4();
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
		__this->set_m_Pressed_4((bool)1);
		int32_t L_1 = Time_get_frameCount_m1220035214(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_LastPressedFrame_2(L_1);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Released()
extern "C" IL2CPP_METHOD_ATTR void VirtualButton_Released_m3633878926 (VirtualButton_t2756566330 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_Pressed_4((bool)0);
		int32_t L_0 = Time_get_frameCount_m1220035214(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_ReleasedFrame_3(L_0);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Remove()
extern "C" IL2CPP_METHOD_ATTR void VirtualButton_Remove_m3337140985 (VirtualButton_t2756566330 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualButton_Remove_m3337140985_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = VirtualButton_get_name_m3473382228(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_UnRegisterVirtualButton_m2844659319(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButton()
extern "C" IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButton_m426677553 (VirtualButton_t2756566330 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_Pressed_4();
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonDown()
extern "C" IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButtonDown_m2538225749 (VirtualButton_t2756566330 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_LastPressedFrame_2();
		int32_t L_1 = Time_get_frameCount_m1220035214(NULL /*static, unused*/, /*hidden argument*/NULL);
		return (bool)((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1))) == ((int32_t)(-1)))? 1 : 0);
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonUp()
extern "C" IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButtonUp_m3614711974 (VirtualButton_t2756566330 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_ReleasedFrame_3();
		int32_t L_1 = Time_get_frameCount_m1220035214(NULL /*static, unused*/, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1))))? 1 : 0);
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
// System.Void UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar::.ctor()
extern "C" IL2CPP_METHOD_ATTR void InputAxisScrollbar__ctor_m1747268639 (InputAxisScrollbar_t457958266 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar::Update()
extern "C" IL2CPP_METHOD_ATTR void InputAxisScrollbar_Update_m2874927048 (InputAxisScrollbar_t457958266 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar::HandleInput(System.Single)
extern "C" IL2CPP_METHOD_ATTR void InputAxisScrollbar_HandleInput_m921720287 (InputAxisScrollbar_t457958266 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputAxisScrollbar_HandleInput_m921720287_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_axis_2();
		float L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetAxis_m1144576044(NULL /*static, unused*/, L_0, ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_1, (float)(2.0f))), (float)(1.0f))), /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Joystick__ctor_m2282195716 (Joystick_t2204371675 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Joystick__ctor_m2282195716_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_MovementRange_2(((int32_t)100));
		__this->set_horizontalAxisName_4(_stringLiteral1828639942);
		__this->set_verticalAxisName_5(_stringLiteral2984908384);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void Joystick_OnEnable_m1014768022 (Joystick_t2204371675 * __this, const RuntimeMethod* method)
{
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		__this->set_m_StartPos_6(L_1);
		Joystick_CreateVirtualAxes_m2739417166(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::UpdateVirtualAxes(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Joystick_UpdateVirtualAxes_m1439422241 (Joystick_t2204371675 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Joystick_UpdateVirtualAxes_m1439422241_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector3_t3722313464  L_0 = __this->get_m_StartPos_6();
		Vector3_t3722313464  L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_2 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = (&V_0)->get_y_2();
		(&V_0)->set_y_2(((-L_3)));
		Vector3_t3722313464  L_4 = V_0;
		int32_t L_5 = __this->get_MovementRange_2();
		Vector3_t3722313464  L_6 = Vector3_op_Division_m510815599(NULL /*static, unused*/, L_4, (((float)((float)L_5))), /*hidden argument*/NULL);
		V_0 = L_6;
		bool L_7 = __this->get_m_UseX_7();
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		VirtualAxis_t4087348596 * L_8 = __this->get_m_HorizontalVirtualAxis_9();
		float L_9 = (&V_0)->get_x_1();
		NullCheck(L_8);
		VirtualAxis_Update_m1043809197(L_8, ((-L_9)), /*hidden argument*/NULL);
	}

IL_0048:
	{
		bool L_10 = __this->get_m_UseY_8();
		if (!L_10)
		{
			goto IL_0065;
		}
	}
	{
		VirtualAxis_t4087348596 * L_11 = __this->get_m_VerticalVirtualAxis_10();
		float L_12 = (&V_0)->get_y_2();
		NullCheck(L_11);
		VirtualAxis_Update_m1043809197(L_11, L_12, /*hidden argument*/NULL);
	}

IL_0065:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::CreateVirtualAxes()
extern "C" IL2CPP_METHOD_ATTR void Joystick_CreateVirtualAxes_m2739417166 (Joystick_t2204371675 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Joystick_CreateVirtualAxes_m2739417166_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Joystick_t2204371675 * G_B2_0 = NULL;
	Joystick_t2204371675 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Joystick_t2204371675 * G_B3_1 = NULL;
	Joystick_t2204371675 * G_B5_0 = NULL;
	Joystick_t2204371675 * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	Joystick_t2204371675 * G_B6_1 = NULL;
	{
		int32_t L_0 = __this->get_axesToUse_3();
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = __this->get_axesToUse_3();
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_m_UseX_7((bool)G_B3_0);
		int32_t L_2 = __this->get_axesToUse_3();
		G_B4_0 = __this;
		if (!L_2)
		{
			G_B5_0 = __this;
			goto IL_0034;
		}
	}
	{
		int32_t L_3 = __this->get_axesToUse_3();
		G_B6_0 = ((((int32_t)L_3) == ((int32_t)2))? 1 : 0);
		G_B6_1 = G_B4_0;
		goto IL_0035;
	}

IL_0034:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_0035:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_m_UseY_8((bool)G_B6_0);
		bool L_4 = __this->get_m_UseX_7();
		if (!L_4)
		{
			goto IL_0061;
		}
	}
	{
		String_t* L_5 = __this->get_horizontalAxisName_4();
		VirtualAxis_t4087348596 * L_6 = (VirtualAxis_t4087348596 *)il2cpp_codegen_object_new(VirtualAxis_t4087348596_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m1869943658(L_6, L_5, /*hidden argument*/NULL);
		__this->set_m_HorizontalVirtualAxis_9(L_6);
		VirtualAxis_t4087348596 * L_7 = __this->get_m_HorizontalVirtualAxis_9();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_m3479801628(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
	}

IL_0061:
	{
		bool L_8 = __this->get_m_UseY_8();
		if (!L_8)
		{
			goto IL_0088;
		}
	}
	{
		String_t* L_9 = __this->get_verticalAxisName_5();
		VirtualAxis_t4087348596 * L_10 = (VirtualAxis_t4087348596 *)il2cpp_codegen_object_new(VirtualAxis_t4087348596_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m1869943658(L_10, L_9, /*hidden argument*/NULL);
		__this->set_m_VerticalVirtualAxis_10(L_10);
		VirtualAxis_t4087348596 * L_11 = __this->get_m_VerticalVirtualAxis_10();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_m3479801628(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
	}

IL_0088:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void Joystick_OnDrag_m2237949000 (Joystick_t2204371675 * __this, PointerEventData_t3807901092 * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Joystick_OnDrag_m2237949000_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	Vector2_t2156229523  V_2;
	memset(&V_2, 0, sizeof(V_2));
	int32_t V_3 = 0;
	Vector2_t2156229523  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = __this->get_m_UseX_7();
		if (!L_1)
		{
			goto IL_004a;
		}
	}
	{
		PointerEventData_t3807901092 * L_2 = ___data0;
		NullCheck(L_2);
		Vector2_t2156229523  L_3 = PointerEventData_get_position_m437660275(L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		float L_4 = (&V_2)->get_x_0();
		Vector3_t3722313464 * L_5 = __this->get_address_of_m_StartPos_6();
		float L_6 = L_5->get_x_1();
		V_1 = (((int32_t)((int32_t)((float)il2cpp_codegen_subtract((float)L_4, (float)L_6)))));
		int32_t L_7 = V_1;
		int32_t L_8 = __this->get_MovementRange_2();
		int32_t L_9 = __this->get_MovementRange_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_10 = Mathf_Clamp_m2756574208(NULL /*static, unused*/, L_7, ((-L_8)), L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		int32_t L_11 = V_1;
		(&V_0)->set_x_1((((float)((float)L_11))));
	}

IL_004a:
	{
		bool L_12 = __this->get_m_UseY_8();
		if (!L_12)
		{
			goto IL_008f;
		}
	}
	{
		PointerEventData_t3807901092 * L_13 = ___data0;
		NullCheck(L_13);
		Vector2_t2156229523  L_14 = PointerEventData_get_position_m437660275(L_13, /*hidden argument*/NULL);
		V_4 = L_14;
		float L_15 = (&V_4)->get_y_1();
		Vector3_t3722313464 * L_16 = __this->get_address_of_m_StartPos_6();
		float L_17 = L_16->get_y_2();
		V_3 = (((int32_t)((int32_t)((float)il2cpp_codegen_subtract((float)L_15, (float)L_17)))));
		int32_t L_18 = V_3;
		int32_t L_19 = __this->get_MovementRange_2();
		int32_t L_20 = __this->get_MovementRange_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_21 = Mathf_Clamp_m2756574208(NULL /*static, unused*/, L_18, ((-L_19)), L_20, /*hidden argument*/NULL);
		V_3 = L_21;
		int32_t L_22 = V_3;
		(&V_0)->set_y_2((((float)((float)L_22))));
	}

IL_008f:
	{
		Transform_t3600365921 * L_23 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464 * L_24 = __this->get_address_of_m_StartPos_6();
		float L_25 = L_24->get_x_1();
		float L_26 = (&V_0)->get_x_1();
		Vector3_t3722313464 * L_27 = __this->get_address_of_m_StartPos_6();
		float L_28 = L_27->get_y_2();
		float L_29 = (&V_0)->get_y_2();
		Vector3_t3722313464 * L_30 = __this->get_address_of_m_StartPos_6();
		float L_31 = L_30->get_z_3();
		float L_32 = (&V_0)->get_z_3();
		Vector3_t3722313464  L_33;
		memset(&L_33, 0, sizeof(L_33));
		Vector3__ctor_m3353183577((&L_33), ((float)il2cpp_codegen_add((float)L_25, (float)L_26)), ((float)il2cpp_codegen_add((float)L_28, (float)L_29)), ((float)il2cpp_codegen_add((float)L_31, (float)L_32)), /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_set_position_m3387557959(L_23, L_33, /*hidden argument*/NULL);
		Transform_t3600365921 * L_34 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_34);
		Vector3_t3722313464  L_35 = Transform_get_position_m36019626(L_34, /*hidden argument*/NULL);
		Joystick_UpdateVirtualAxes_m1439422241(__this, L_35, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void Joystick_OnPointerUp_m2911367878 (Joystick_t2204371675 * __this, PointerEventData_t3807901092 * ___data0, const RuntimeMethod* method)
{
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = __this->get_m_StartPos_6();
		NullCheck(L_0);
		Transform_set_position_m3387557959(L_0, L_1, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = __this->get_m_StartPos_6();
		Joystick_UpdateVirtualAxes_m1439422241(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void Joystick_OnPointerDown_m538136489 (Joystick_t2204371675 * __this, PointerEventData_t3807901092 * ___data0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnDisable()
extern "C" IL2CPP_METHOD_ATTR void Joystick_OnDisable_m4045435458 (Joystick_t2204371675 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_UseX_7();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		VirtualAxis_t4087348596 * L_1 = __this->get_m_HorizontalVirtualAxis_9();
		NullCheck(L_1);
		VirtualAxis_Remove_m3159277484(L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		bool L_2 = __this->get_m_UseY_8();
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		VirtualAxis_t4087348596 * L_3 = __this->get_m_VerticalVirtualAxis_10();
		NullCheck(L_3);
		VirtualAxis_Remove_m3159277484(L_3, /*hidden argument*/NULL);
	}

IL_002c:
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
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MobileControlRig__ctor_m4012128667 (MobileControlRig_t1964600252 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void MobileControlRig_OnEnable_m2532484638 (MobileControlRig_t1964600252 * __this, const RuntimeMethod* method)
{
	{
		MobileControlRig_CheckEnableControlRig_m2194254892(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::CheckEnableControlRig()
extern "C" IL2CPP_METHOD_ATTR void MobileControlRig_CheckEnableControlRig_m2194254892 (MobileControlRig_t1964600252 * __this, const RuntimeMethod* method)
{
	{
		MobileControlRig_EnableControlRig_m2268035780(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::EnableControlRig(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MobileControlRig_EnableControlRig_m2268035780 (MobileControlRig_t1964600252 * __this, bool ___enabled0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileControlRig_EnableControlRig_m2268035780_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_t3600365921 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = Transform_GetEnumerator_m2717073726(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0029;
		}

IL_0011:
		{
			RuntimeObject* L_2 = V_1;
			NullCheck(L_2);
			RuntimeObject * L_3 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_2);
			V_0 = ((Transform_t3600365921 *)CastclassClass((RuntimeObject*)L_3, Transform_t3600365921_il2cpp_TypeInfo_var));
			Transform_t3600365921 * L_4 = V_0;
			NullCheck(L_4);
			GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142(L_4, /*hidden argument*/NULL);
			bool L_6 = ___enabled0;
			NullCheck(L_5);
			GameObject_SetActive_m796801857(L_5, L_6, /*hidden argument*/NULL);
		}

IL_0029:
		{
			RuntimeObject* L_7 = V_1;
			NullCheck(L_7);
			bool L_8 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_7);
			if (L_8)
			{
				goto IL_0011;
			}
		}

IL_0034:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_0039);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0039;
	}

FINALLY_0039:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_9 = V_1;
			RuntimeObject* L_10 = ((RuntimeObject*)IsInst((RuntimeObject*)L_9, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_2 = L_10;
			if (!L_10)
			{
				goto IL_004c;
			}
		}

IL_0046:
		{
			RuntimeObject* L_11 = V_2;
			NullCheck(L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_11);
		}

IL_004c:
		{
			IL2CPP_END_FINALLY(57)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(57)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004d:
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
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MobileInput__ctor_m1458281675 (MobileInput_t2025745297 * __this, const RuntimeMethod* method)
{
	{
		VirtualInput__ctor_m132259715(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddButton(System.String)
extern "C" IL2CPP_METHOD_ATTR void MobileInput_AddButton_m1457048403 (MobileInput_t2025745297 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_AddButton_m1457048403_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		VirtualButton_t2756566330 * L_1 = (VirtualButton_t2756566330 *)il2cpp_codegen_object_new(VirtualButton_t2756566330_il2cpp_TypeInfo_var);
		VirtualButton__ctor_m4196049871(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualButton_m1830161946(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddAxes(System.String)
extern "C" IL2CPP_METHOD_ATTR void MobileInput_AddAxes_m488652706 (MobileInput_t2025745297 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_AddAxes_m488652706_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		VirtualAxis_t4087348596 * L_1 = (VirtualAxis_t4087348596 *)il2cpp_codegen_object_new(VirtualAxis_t4087348596_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m1869943658(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_m3479801628(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetAxis(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR float MobileInput_GetAxis_m2154000143 (MobileInput_t2025745297 * __this, String_t* ___name0, bool ___raw1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_GetAxis_m2154000143_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3872604895 * L_0 = ((VirtualInput_t2597455733 *)__this)->get_m_VirtualAxes_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m3309109471(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3309109471_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_3 = ___name0;
		MobileInput_AddAxes_m488652706(__this, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		Dictionary_2_t3872604895 * L_4 = ((VirtualInput_t2597455733 *)__this)->get_m_VirtualAxes_1();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualAxis_t4087348596 * L_6 = Dictionary_2_get_Item_m1067981918(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m1067981918_RuntimeMethod_var);
		NullCheck(L_6);
		float L_7 = VirtualAxis_get_GetValue_m337417923(L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetButtonDown(System.String)
extern "C" IL2CPP_METHOD_ATTR void MobileInput_SetButtonDown_m3216050691 (MobileInput_t2025745297 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_SetButtonDown_m3216050691_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2541822629 * L_0 = ((VirtualInput_t2597455733 *)__this)->get_m_VirtualButtons_2();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m3760162225(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3760162225_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_3 = ___name0;
		MobileInput_AddButton_m1457048403(__this, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		Dictionary_2_t2541822629 * L_4 = ((VirtualInput_t2597455733 *)__this)->get_m_VirtualButtons_2();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualButton_t2756566330 * L_6 = Dictionary_2_get_Item_m572056520(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m572056520_RuntimeMethod_var);
		NullCheck(L_6);
		VirtualButton_Pressed_m2977736877(L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetButtonUp(System.String)
extern "C" IL2CPP_METHOD_ATTR void MobileInput_SetButtonUp_m157564634 (MobileInput_t2025745297 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_SetButtonUp_m157564634_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2541822629 * L_0 = ((VirtualInput_t2597455733 *)__this)->get_m_VirtualButtons_2();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m3760162225(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3760162225_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_3 = ___name0;
		MobileInput_AddButton_m1457048403(__this, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		Dictionary_2_t2541822629 * L_4 = ((VirtualInput_t2597455733 *)__this)->get_m_VirtualButtons_2();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualButton_t2756566330 * L_6 = Dictionary_2_get_Item_m572056520(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m572056520_RuntimeMethod_var);
		NullCheck(L_6);
		VirtualButton_Released_m3633878926(L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxisPositive(System.String)
extern "C" IL2CPP_METHOD_ATTR void MobileInput_SetAxisPositive_m3252752591 (MobileInput_t2025745297 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_SetAxisPositive_m3252752591_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3872604895 * L_0 = ((VirtualInput_t2597455733 *)__this)->get_m_VirtualAxes_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m3309109471(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3309109471_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_3 = ___name0;
		MobileInput_AddAxes_m488652706(__this, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		Dictionary_2_t3872604895 * L_4 = ((VirtualInput_t2597455733 *)__this)->get_m_VirtualAxes_1();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualAxis_t4087348596 * L_6 = Dictionary_2_get_Item_m1067981918(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m1067981918_RuntimeMethod_var);
		NullCheck(L_6);
		VirtualAxis_Update_m1043809197(L_6, (1.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxisNegative(System.String)
extern "C" IL2CPP_METHOD_ATTR void MobileInput_SetAxisNegative_m2158886203 (MobileInput_t2025745297 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_SetAxisNegative_m2158886203_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3872604895 * L_0 = ((VirtualInput_t2597455733 *)__this)->get_m_VirtualAxes_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m3309109471(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3309109471_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_3 = ___name0;
		MobileInput_AddAxes_m488652706(__this, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		Dictionary_2_t3872604895 * L_4 = ((VirtualInput_t2597455733 *)__this)->get_m_VirtualAxes_1();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualAxis_t4087348596 * L_6 = Dictionary_2_get_Item_m1067981918(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m1067981918_RuntimeMethod_var);
		NullCheck(L_6);
		VirtualAxis_Update_m1043809197(L_6, (-1.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxisZero(System.String)
extern "C" IL2CPP_METHOD_ATTR void MobileInput_SetAxisZero_m4114279636 (MobileInput_t2025745297 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_SetAxisZero_m4114279636_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3872604895 * L_0 = ((VirtualInput_t2597455733 *)__this)->get_m_VirtualAxes_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m3309109471(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3309109471_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_3 = ___name0;
		MobileInput_AddAxes_m488652706(__this, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		Dictionary_2_t3872604895 * L_4 = ((VirtualInput_t2597455733 *)__this)->get_m_VirtualAxes_1();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualAxis_t4087348596 * L_6 = Dictionary_2_get_Item_m1067981918(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m1067981918_RuntimeMethod_var);
		NullCheck(L_6);
		VirtualAxis_Update_m1043809197(L_6, (0.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxis(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR void MobileInput_SetAxis_m8177381 (MobileInput_t2025745297 * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_SetAxis_m8177381_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3872604895 * L_0 = ((VirtualInput_t2597455733 *)__this)->get_m_VirtualAxes_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m3309109471(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3309109471_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_3 = ___name0;
		MobileInput_AddAxes_m488652706(__this, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		Dictionary_2_t3872604895 * L_4 = ((VirtualInput_t2597455733 *)__this)->get_m_VirtualAxes_1();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualAxis_t4087348596 * L_6 = Dictionary_2_get_Item_m1067981918(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m1067981918_RuntimeMethod_var);
		float L_7 = ___value1;
		NullCheck(L_6);
		VirtualAxis_Update_m1043809197(L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetButtonDown(System.String)
extern "C" IL2CPP_METHOD_ATTR bool MobileInput_GetButtonDown_m504405365 (MobileInput_t2025745297 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_GetButtonDown_m504405365_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2541822629 * L_0 = ((VirtualInput_t2597455733 *)__this)->get_m_VirtualButtons_2();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m3760162225(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3760162225_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Dictionary_2_t2541822629 * L_3 = ((VirtualInput_t2597455733 *)__this)->get_m_VirtualButtons_2();
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		VirtualButton_t2756566330 * L_5 = Dictionary_2_get_Item_m572056520(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m572056520_RuntimeMethod_var);
		NullCheck(L_5);
		bool L_6 = VirtualButton_get_GetButtonDown_m2538225749(L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0023:
	{
		String_t* L_7 = ___name0;
		MobileInput_AddButton_m1457048403(__this, L_7, /*hidden argument*/NULL);
		Dictionary_2_t2541822629 * L_8 = ((VirtualInput_t2597455733 *)__this)->get_m_VirtualButtons_2();
		String_t* L_9 = ___name0;
		NullCheck(L_8);
		VirtualButton_t2756566330 * L_10 = Dictionary_2_get_Item_m572056520(L_8, L_9, /*hidden argument*/Dictionary_2_get_Item_m572056520_RuntimeMethod_var);
		NullCheck(L_10);
		bool L_11 = VirtualButton_get_GetButtonDown_m2538225749(L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetButtonUp(System.String)
extern "C" IL2CPP_METHOD_ATTR bool MobileInput_GetButtonUp_m2869453812 (MobileInput_t2025745297 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_GetButtonUp_m2869453812_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2541822629 * L_0 = ((VirtualInput_t2597455733 *)__this)->get_m_VirtualButtons_2();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m3760162225(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3760162225_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Dictionary_2_t2541822629 * L_3 = ((VirtualInput_t2597455733 *)__this)->get_m_VirtualButtons_2();
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		VirtualButton_t2756566330 * L_5 = Dictionary_2_get_Item_m572056520(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m572056520_RuntimeMethod_var);
		NullCheck(L_5);
		bool L_6 = VirtualButton_get_GetButtonUp_m3614711974(L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0023:
	{
		String_t* L_7 = ___name0;
		MobileInput_AddButton_m1457048403(__this, L_7, /*hidden argument*/NULL);
		Dictionary_2_t2541822629 * L_8 = ((VirtualInput_t2597455733 *)__this)->get_m_VirtualButtons_2();
		String_t* L_9 = ___name0;
		NullCheck(L_8);
		VirtualButton_t2756566330 * L_10 = Dictionary_2_get_Item_m572056520(L_8, L_9, /*hidden argument*/Dictionary_2_get_Item_m572056520_RuntimeMethod_var);
		NullCheck(L_10);
		bool L_11 = VirtualButton_get_GetButtonUp_m3614711974(L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetButton(System.String)
extern "C" IL2CPP_METHOD_ATTR bool MobileInput_GetButton_m1481759253 (MobileInput_t2025745297 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_GetButton_m1481759253_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2541822629 * L_0 = ((VirtualInput_t2597455733 *)__this)->get_m_VirtualButtons_2();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m3760162225(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3760162225_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Dictionary_2_t2541822629 * L_3 = ((VirtualInput_t2597455733 *)__this)->get_m_VirtualButtons_2();
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		VirtualButton_t2756566330 * L_5 = Dictionary_2_get_Item_m572056520(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m572056520_RuntimeMethod_var);
		NullCheck(L_5);
		bool L_6 = VirtualButton_get_GetButton_m426677553(L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0023:
	{
		String_t* L_7 = ___name0;
		MobileInput_AddButton_m1457048403(__this, L_7, /*hidden argument*/NULL);
		Dictionary_2_t2541822629 * L_8 = ((VirtualInput_t2597455733 *)__this)->get_m_VirtualButtons_2();
		String_t* L_9 = ___name0;
		NullCheck(L_8);
		VirtualButton_t2756566330 * L_10 = Dictionary_2_get_Item_m572056520(L_8, L_9, /*hidden argument*/Dictionary_2_get_Item_m572056520_RuntimeMethod_var);
		NullCheck(L_10);
		bool L_11 = VirtualButton_get_GetButton_m426677553(L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::MousePosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  MobileInput_MousePosition_m503980816 (MobileInput_t2025745297 * __this, const RuntimeMethod* method)
{
	{
		Vector3_t3722313464  L_0 = VirtualInput_get_virtualMousePosition_m1530934210(__this, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::.ctor()
extern "C" IL2CPP_METHOD_ATTR void StandaloneInput__ctor_m1221073179 (StandaloneInput_t1343950252 * __this, const RuntimeMethod* method)
{
	{
		VirtualInput__ctor_m132259715(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetAxis(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR float StandaloneInput_GetAxis_m2410539728 (StandaloneInput_t1343950252 * __this, String_t* ___name0, bool ___raw1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandaloneInput_GetAxis_m2410539728_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float G_B3_0 = 0.0f;
	{
		bool L_0 = ___raw1;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		float L_2 = Input_GetAxisRaw_m2316819917(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_0017;
	}

IL_0011:
	{
		String_t* L_3 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		float L_4 = Input_GetAxis_m4009438427(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
	}

IL_0017:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetButton(System.String)
extern "C" IL2CPP_METHOD_ATTR bool StandaloneInput_GetButton_m1835211858 (StandaloneInput_t1343950252 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandaloneInput_GetButton_m1835211858_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetButton_m2064261504(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetButtonDown(System.String)
extern "C" IL2CPP_METHOD_ATTR bool StandaloneInput_GetButtonDown_m3583403365 (StandaloneInput_t1343950252 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandaloneInput_GetButtonDown_m3583403365_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetButtonDown_m3074252807(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetButtonUp(System.String)
extern "C" IL2CPP_METHOD_ATTR bool StandaloneInput_GetButtonUp_m3464108891 (StandaloneInput_t1343950252 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandaloneInput_GetButtonUp_m3464108891_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetButtonUp_m4007681079(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetButtonDown(System.String)
extern "C" IL2CPP_METHOD_ATTR void StandaloneInput_SetButtonDown_m3676829417 (StandaloneInput_t1343950252 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandaloneInput_SetButtonDown_m3676829417_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_0, _stringLiteral1111251549, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,StandaloneInput_SetButtonDown_m3676829417_RuntimeMethod_var);
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetButtonUp(System.String)
extern "C" IL2CPP_METHOD_ATTR void StandaloneInput_SetButtonUp_m191088641 (StandaloneInput_t1343950252 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandaloneInput_SetButtonUp_m191088641_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_0, _stringLiteral1111251549, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,StandaloneInput_SetButtonUp_m191088641_RuntimeMethod_var);
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxisPositive(System.String)
extern "C" IL2CPP_METHOD_ATTR void StandaloneInput_SetAxisPositive_m3047996072 (StandaloneInput_t1343950252 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandaloneInput_SetAxisPositive_m3047996072_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_0, _stringLiteral1111251549, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,StandaloneInput_SetAxisPositive_m3047996072_RuntimeMethod_var);
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxisNegative(System.String)
extern "C" IL2CPP_METHOD_ATTR void StandaloneInput_SetAxisNegative_m1888816296 (StandaloneInput_t1343950252 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandaloneInput_SetAxisNegative_m1888816296_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_0, _stringLiteral1111251549, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,StandaloneInput_SetAxisNegative_m1888816296_RuntimeMethod_var);
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxisZero(System.String)
extern "C" IL2CPP_METHOD_ATTR void StandaloneInput_SetAxisZero_m1274847735 (StandaloneInput_t1343950252 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandaloneInput_SetAxisZero_m1274847735_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_0, _stringLiteral1111251549, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,StandaloneInput_SetAxisZero_m1274847735_RuntimeMethod_var);
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxis(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR void StandaloneInput_SetAxis_m55497828 (StandaloneInput_t1343950252 * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandaloneInput_SetAxis_m55497828_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_0, _stringLiteral1111251549, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,StandaloneInput_SetAxis_m55497828_RuntimeMethod_var);
	}
}
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::MousePosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  StandaloneInput_MousePosition_m3719131973 (StandaloneInput_t1343950252 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandaloneInput_MousePosition_m3719131973_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Input_get_mousePosition_m1616496925(NULL /*static, unused*/, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TiltInput__ctor_m684353858 (TiltInput_t1639936653 * __this, const RuntimeMethod* method)
{
	{
		__this->set_fullTiltAngle_4((25.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void TiltInput_OnEnable_m692757573 (TiltInput_t1639936653 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TiltInput_OnEnable_m692757573_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AxisMapping_t3982445645 * L_0 = __this->get_mapping_2();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_type_0();
		if (L_1)
		{
			goto IL_0031;
		}
	}
	{
		AxisMapping_t3982445645 * L_2 = __this->get_mapping_2();
		NullCheck(L_2);
		String_t* L_3 = L_2->get_axisName_1();
		VirtualAxis_t4087348596 * L_4 = (VirtualAxis_t4087348596 *)il2cpp_codegen_object_new(VirtualAxis_t4087348596_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m1869943658(L_4, L_3, /*hidden argument*/NULL);
		__this->set_m_SteerAxis_6(L_4);
		VirtualAxis_t4087348596 * L_5 = __this->get_m_SteerAxis_6();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_m3479801628(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
	}

IL_0031:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput::Update()
extern "C" IL2CPP_METHOD_ATTR void TiltInput_Update_m223364922 (TiltInput_t1639936653 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TiltInput_Update_m223364922_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	float V_6 = 0.0f;
	int32_t V_7 = 0;
	{
		V_0 = (0.0f);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Input_get_acceleration_m2528400370(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_1 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_2 = Vector3_op_Inequality_m315980366(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_009b;
		}
	}
	{
		int32_t L_3 = __this->get_tiltAroundAxis_3();
		V_1 = L_3;
		int32_t L_4 = V_1;
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_0066;
		}
	}
	{
		goto IL_009b;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_6 = Input_get_acceleration_m2528400370(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_6;
		float L_7 = (&V_2)->get_x_1();
		Vector3_t3722313464  L_8 = Input_get_acceleration_m2528400370(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_8;
		float L_9 = (&V_3)->get_y_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_10 = atan2f(L_7, ((-L_9)));
		float L_11 = __this->get_centreAngleOffset_5();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_10, (float)(57.29578f))), (float)L_11));
		goto IL_009b;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_12 = Input_get_acceleration_m2528400370(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_4 = L_12;
		float L_13 = (&V_4)->get_z_3();
		Vector3_t3722313464  L_14 = Input_get_acceleration_m2528400370(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_5 = L_14;
		float L_15 = (&V_5)->get_y_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_16 = atan2f(L_13, ((-L_15)));
		float L_17 = __this->get_centreAngleOffset_5();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_16, (float)(57.29578f))), (float)L_17));
		goto IL_009b;
	}

IL_009b:
	{
		float L_18 = __this->get_fullTiltAngle_4();
		float L_19 = __this->get_fullTiltAngle_4();
		float L_20 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_21 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, ((-L_18)), L_19, L_20, /*hidden argument*/NULL);
		V_6 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_21, (float)(2.0f))), (float)(1.0f)));
		AxisMapping_t3982445645 * L_22 = __this->get_mapping_2();
		NullCheck(L_22);
		int32_t L_23 = L_22->get_type_0();
		V_7 = L_23;
		int32_t L_24 = V_7;
		switch (L_24)
		{
			case 0:
			{
				goto IL_00e5;
			}
			case 1:
			{
				goto IL_00f7;
			}
			case 2:
			{
				goto IL_010a;
			}
			case 3:
			{
				goto IL_011d;
			}
		}
	}
	{
		goto IL_0130;
	}

IL_00e5:
	{
		VirtualAxis_t4087348596 * L_25 = __this->get_m_SteerAxis_6();
		float L_26 = V_6;
		NullCheck(L_25);
		VirtualAxis_Update_m1043809197(L_25, L_26, /*hidden argument*/NULL);
		goto IL_0130;
	}

IL_00f7:
	{
		float L_27 = V_6;
		int32_t L_28 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetVirtualMousePositionX_m1649950270(NULL /*static, unused*/, ((float)il2cpp_codegen_multiply((float)L_27, (float)(((float)((float)L_28))))), /*hidden argument*/NULL);
		goto IL_0130;
	}

IL_010a:
	{
		float L_29 = V_6;
		int32_t L_30 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetVirtualMousePositionY_m427631433(NULL /*static, unused*/, ((float)il2cpp_codegen_multiply((float)L_29, (float)(((float)((float)L_30))))), /*hidden argument*/NULL);
		goto IL_0130;
	}

IL_011d:
	{
		float L_31 = V_6;
		int32_t L_32 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetVirtualMousePositionZ_m640530475(NULL /*static, unused*/, ((float)il2cpp_codegen_multiply((float)L_31, (float)(((float)((float)L_32))))), /*hidden argument*/NULL);
		goto IL_0130;
	}

IL_0130:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput::OnDisable()
extern "C" IL2CPP_METHOD_ATTR void TiltInput_OnDisable_m1131217228 (TiltInput_t1639936653 * __this, const RuntimeMethod* method)
{
	{
		VirtualAxis_t4087348596 * L_0 = __this->get_m_SteerAxis_6();
		NullCheck(L_0);
		VirtualAxis_Remove_m3159277484(L_0, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AxisMapping__ctor_m715094701 (AxisMapping_t3982445645 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TouchPad__ctor_m1845169266 (TouchPad_t539039257 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchPad__ctor_m1845169266_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_horizontalAxisName_4(_stringLiteral1828639942);
		__this->set_verticalAxisName_5(_stringLiteral2984908384);
		__this->set_Xsensitivity_6((1.0f));
		__this->set_Ysensitivity_7((1.0f));
		__this->set_m_Id_16((-1));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void TouchPad_OnEnable_m3972724317 (TouchPad_t539039257 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchPad_OnEnable_m3972724317_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TouchPad_CreateVirtualAxes_m1112936150(__this, /*hidden argument*/NULL);
		Image_t2670269651 * L_0 = Component_GetComponent_TisImage_t2670269651_m980647750(__this, /*hidden argument*/Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var);
		__this->set_m_Image_19(L_0);
		Image_t2670269651 * L_1 = __this->get_m_Image_19();
		NullCheck(L_1);
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t3722313464  L_3 = Transform_get_position_m36019626(L_2, /*hidden argument*/NULL);
		__this->set_m_Center_18(L_3);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::CreateVirtualAxes()
extern "C" IL2CPP_METHOD_ATTR void TouchPad_CreateVirtualAxes_m1112936150 (TouchPad_t539039257 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchPad_CreateVirtualAxes_m1112936150_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TouchPad_t539039257 * G_B2_0 = NULL;
	TouchPad_t539039257 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	TouchPad_t539039257 * G_B3_1 = NULL;
	TouchPad_t539039257 * G_B5_0 = NULL;
	TouchPad_t539039257 * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	TouchPad_t539039257 * G_B6_1 = NULL;
	{
		int32_t L_0 = __this->get_axesToUse_2();
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = __this->get_axesToUse_2();
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_m_UseX_11((bool)G_B3_0);
		int32_t L_2 = __this->get_axesToUse_2();
		G_B4_0 = __this;
		if (!L_2)
		{
			G_B5_0 = __this;
			goto IL_0034;
		}
	}
	{
		int32_t L_3 = __this->get_axesToUse_2();
		G_B6_0 = ((((int32_t)L_3) == ((int32_t)2))? 1 : 0);
		G_B6_1 = G_B4_0;
		goto IL_0035;
	}

IL_0034:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_0035:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_m_UseY_12((bool)G_B6_0);
		bool L_4 = __this->get_m_UseX_11();
		if (!L_4)
		{
			goto IL_0061;
		}
	}
	{
		String_t* L_5 = __this->get_horizontalAxisName_4();
		VirtualAxis_t4087348596 * L_6 = (VirtualAxis_t4087348596 *)il2cpp_codegen_object_new(VirtualAxis_t4087348596_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m1869943658(L_6, L_5, /*hidden argument*/NULL);
		__this->set_m_HorizontalVirtualAxis_13(L_6);
		VirtualAxis_t4087348596 * L_7 = __this->get_m_HorizontalVirtualAxis_13();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_m3479801628(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
	}

IL_0061:
	{
		bool L_8 = __this->get_m_UseY_12();
		if (!L_8)
		{
			goto IL_0088;
		}
	}
	{
		String_t* L_9 = __this->get_verticalAxisName_5();
		VirtualAxis_t4087348596 * L_10 = (VirtualAxis_t4087348596 *)il2cpp_codegen_object_new(VirtualAxis_t4087348596_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m1869943658(L_10, L_9, /*hidden argument*/NULL);
		__this->set_m_VerticalVirtualAxis_14(L_10);
		VirtualAxis_t4087348596 * L_11 = __this->get_m_VerticalVirtualAxis_14();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_m3479801628(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
	}

IL_0088:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::UpdateVirtualAxes(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void TouchPad_UpdateVirtualAxes_m1567451020 (TouchPad_t539039257 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_t3722313464  L_0 = Vector3_get_normalized_m2454957984((&___value0), /*hidden argument*/NULL);
		___value0 = L_0;
		bool L_1 = __this->get_m_UseX_11();
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		VirtualAxis_t4087348596 * L_2 = __this->get_m_HorizontalVirtualAxis_13();
		float L_3 = (&___value0)->get_x_1();
		NullCheck(L_2);
		VirtualAxis_Update_m1043809197(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0026:
	{
		bool L_4 = __this->get_m_UseY_12();
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		VirtualAxis_t4087348596 * L_5 = __this->get_m_VerticalVirtualAxis_14();
		float L_6 = (&___value0)->get_y_2();
		NullCheck(L_5);
		VirtualAxis_Update_m1043809197(L_5, L_6, /*hidden argument*/NULL);
	}

IL_0043:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void TouchPad_OnPointerDown_m2573988246 (TouchPad_t539039257 * __this, PointerEventData_t3807901092 * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchPad_OnPointerDown_m2573988246_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_Dragging_15((bool)1);
		PointerEventData_t3807901092 * L_0 = ___data0;
		NullCheck(L_0);
		int32_t L_1 = PointerEventData_get_pointerId_m1200356155(L_0, /*hidden argument*/NULL);
		__this->set_m_Id_16(L_1);
		int32_t L_2 = __this->get_controlStyle_3();
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		PointerEventData_t3807901092 * L_3 = ___data0;
		NullCheck(L_3);
		Vector2_t2156229523  L_4 = PointerEventData_get_position_m437660275(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_5 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		__this->set_m_Center_18(L_5);
	}

IL_002f:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::Update()
extern "C" IL2CPP_METHOD_ATTR void TouchPad_Update_m4068717841 (TouchPad_t539039257 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchPad_Update_m4068717841_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector2_t2156229523  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector2_t2156229523  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		bool L_0 = __this->get_m_Dragging_15();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		int32_t L_1 = Input_get_touchCount_m3403849067(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_m_Id_16();
		if ((((int32_t)L_1) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)))))
		{
			goto IL_0109;
		}
	}
	{
		int32_t L_3 = __this->get_m_Id_16();
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0109;
		}
	}
	{
		int32_t L_4 = __this->get_controlStyle_3();
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0062;
		}
	}
	{
		Vector2_t2156229523  L_5 = __this->get_m_PreviousTouchPos_17();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_6 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		__this->set_m_Center_18(L_6);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		TouchU5BU5D_t1849554061* L_7 = Input_get_touches_m1702694043(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_8 = __this->get_m_Id_16();
		NullCheck(L_7);
		Vector2_t2156229523  L_9 = Touch_get_position_m3109777936(((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), /*hidden argument*/NULL);
		__this->set_m_PreviousTouchPos_17(L_9);
	}

IL_0062:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		TouchU5BU5D_t1849554061* L_10 = Input_get_touches_m1702694043(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_11 = __this->get_m_Id_16();
		NullCheck(L_10);
		Vector2_t2156229523  L_12 = Touch_get_position_m3109777936(((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), /*hidden argument*/NULL);
		V_2 = L_12;
		float L_13 = (&V_2)->get_x_0();
		Vector3_t3722313464 * L_14 = __this->get_address_of_m_Center_18();
		float L_15 = L_14->get_x_1();
		TouchU5BU5D_t1849554061* L_16 = Input_get_touches_m1702694043(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_17 = __this->get_m_Id_16();
		NullCheck(L_16);
		Vector2_t2156229523  L_18 = Touch_get_position_m3109777936(((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17))), /*hidden argument*/NULL);
		V_3 = L_18;
		float L_19 = (&V_3)->get_y_1();
		Vector3_t3722313464 * L_20 = __this->get_address_of_m_Center_18();
		float L_21 = L_20->get_y_2();
		Vector2__ctor_m3970636864((&V_1), ((float)il2cpp_codegen_subtract((float)L_13, (float)L_15)), ((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), /*hidden argument*/NULL);
		Vector2_t2156229523  L_22 = Vector2_get_normalized_m2683665860((&V_1), /*hidden argument*/NULL);
		V_0 = L_22;
		Vector2_t2156229523 * L_23 = (&V_0);
		float L_24 = L_23->get_x_0();
		float L_25 = __this->get_Xsensitivity_6();
		L_23->set_x_0(((float)il2cpp_codegen_multiply((float)L_24, (float)L_25)));
		Vector2_t2156229523 * L_26 = (&V_0);
		float L_27 = L_26->get_y_1();
		float L_28 = __this->get_Ysensitivity_7();
		L_26->set_y_1(((float)il2cpp_codegen_multiply((float)L_27, (float)L_28)));
		float L_29 = (&V_0)->get_x_0();
		float L_30 = (&V_0)->get_y_1();
		Vector3_t3722313464  L_31;
		memset(&L_31, 0, sizeof(L_31));
		Vector3__ctor_m3353183577((&L_31), L_29, L_30, (0.0f), /*hidden argument*/NULL);
		TouchPad_UpdateVirtualAxes_m1567451020(__this, L_31, /*hidden argument*/NULL);
	}

IL_0109:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void TouchPad_OnPointerUp_m2465142363 (TouchPad_t539039257 * __this, PointerEventData_t3807901092 * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchPad_OnPointerUp_m2465142363_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_Dragging_15((bool)0);
		__this->set_m_Id_16((-1));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		TouchPad_UpdateVirtualAxes_m1567451020(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::OnDisable()
extern "C" IL2CPP_METHOD_ATTR void TouchPad_OnDisable_m3391228923 (TouchPad_t539039257 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchPad_OnDisable_m3391228923_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_horizontalAxisName_4();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		bool L_1 = CrossPlatformInputManager_AxisExists_m365322552(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_2 = __this->get_horizontalAxisName_4();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_UnRegisterVirtualAxis_m2756471501(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_001b:
	{
		String_t* L_3 = __this->get_verticalAxisName_5();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		bool L_4 = CrossPlatformInputManager_AxisExists_m365322552(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		String_t* L_5 = __this->get_verticalAxisName_5();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_UnRegisterVirtualAxis_m2756471501(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
	}

IL_0036:
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
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::.ctor()
extern "C" IL2CPP_METHOD_ATTR void VirtualInput__ctor_m132259715 (VirtualInput_t2597455733 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualInput__ctor_m132259715_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3872604895 * L_0 = (Dictionary_2_t3872604895 *)il2cpp_codegen_object_new(Dictionary_2_t3872604895_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3611672568(L_0, /*hidden argument*/Dictionary_2__ctor_m3611672568_RuntimeMethod_var);
		__this->set_m_VirtualAxes_1(L_0);
		Dictionary_2_t2541822629 * L_1 = (Dictionary_2_t2541822629 *)il2cpp_codegen_object_new(Dictionary_2_t2541822629_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2614243156(L_1, /*hidden argument*/Dictionary_2__ctor_m2614243156_RuntimeMethod_var);
		__this->set_m_VirtualButtons_2(L_1);
		List_1_t3319525431 * L_2 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m706204246(L_2, /*hidden argument*/List_1__ctor_m706204246_RuntimeMethod_var);
		__this->set_m_AlwaysUseVirtual_3(L_2);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::get_virtualMousePosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  VirtualInput_get_virtualMousePosition_m1530934210 (VirtualInput_t2597455733 * __this, const RuntimeMethod* method)
{
	{
		Vector3_t3722313464  L_0 = __this->get_U3CvirtualMousePositionU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::set_virtualMousePosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void VirtualInput_set_virtualMousePosition_m308564020 (VirtualInput_t2597455733 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_t3722313464  L_0 = ___value0;
		__this->set_U3CvirtualMousePositionU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::AxisExists(System.String)
extern "C" IL2CPP_METHOD_ATTR bool VirtualInput_AxisExists_m20278768 (VirtualInput_t2597455733 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualInput_AxisExists_m20278768_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3872604895 * L_0 = __this->get_m_VirtualAxes_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m3309109471(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3309109471_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::ButtonExists(System.String)
extern "C" IL2CPP_METHOD_ATTR bool VirtualInput_ButtonExists_m3875122617 (VirtualInput_t2597455733 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualInput_ButtonExists_m3875122617_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2541822629 * L_0 = __this->get_m_VirtualButtons_2();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m3760162225(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3760162225_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
extern "C" IL2CPP_METHOD_ATTR void VirtualInput_RegisterVirtualAxis_m2884529091 (VirtualInput_t2597455733 * __this, VirtualAxis_t4087348596 * ___axis0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualInput_RegisterVirtualAxis_m2884529091_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3872604895 * L_0 = __this->get_m_VirtualAxes_1();
		VirtualAxis_t4087348596 * L_1 = ___axis0;
		NullCheck(L_1);
		String_t* L_2 = VirtualAxis_get_name_m610059897(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_3 = Dictionary_2_ContainsKey_m3309109471(L_0, L_2, /*hidden argument*/Dictionary_2_ContainsKey_m3309109471_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		VirtualAxis_t4087348596 * L_4 = ___axis0;
		NullCheck(L_4);
		String_t* L_5 = VirtualAxis_get_name_m610059897(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral1316003440, L_5, _stringLiteral499939329, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		goto IL_0063;
	}

IL_0035:
	{
		Dictionary_2_t3872604895 * L_7 = __this->get_m_VirtualAxes_1();
		VirtualAxis_t4087348596 * L_8 = ___axis0;
		NullCheck(L_8);
		String_t* L_9 = VirtualAxis_get_name_m610059897(L_8, /*hidden argument*/NULL);
		VirtualAxis_t4087348596 * L_10 = ___axis0;
		NullCheck(L_7);
		Dictionary_2_Add_m2550485437(L_7, L_9, L_10, /*hidden argument*/Dictionary_2_Add_m2550485437_RuntimeMethod_var);
		VirtualAxis_t4087348596 * L_11 = ___axis0;
		NullCheck(L_11);
		bool L_12 = VirtualAxis_get_matchWithInputManager_m2059598452(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0063;
		}
	}
	{
		List_1_t3319525431 * L_13 = __this->get_m_AlwaysUseVirtual_3();
		VirtualAxis_t4087348596 * L_14 = ___axis0;
		NullCheck(L_14);
		String_t* L_15 = VirtualAxis_get_name_m610059897(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		List_1_Add_m1685793073(L_13, L_15, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
	}

IL_0063:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
extern "C" IL2CPP_METHOD_ATTR void VirtualInput_RegisterVirtualButton_m3959785200 (VirtualInput_t2597455733 * __this, VirtualButton_t2756566330 * ___button0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualInput_RegisterVirtualButton_m3959785200_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2541822629 * L_0 = __this->get_m_VirtualButtons_2();
		VirtualButton_t2756566330 * L_1 = ___button0;
		NullCheck(L_1);
		String_t* L_2 = VirtualButton_get_name_m3473382228(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_3 = Dictionary_2_ContainsKey_m3760162225(L_0, L_2, /*hidden argument*/Dictionary_2_ContainsKey_m3760162225_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		VirtualButton_t2756566330 * L_4 = ___button0;
		NullCheck(L_4);
		String_t* L_5 = VirtualButton_get_name_m3473382228(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral341380797, L_5, _stringLiteral499939329, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		goto IL_0063;
	}

IL_0035:
	{
		Dictionary_2_t2541822629 * L_7 = __this->get_m_VirtualButtons_2();
		VirtualButton_t2756566330 * L_8 = ___button0;
		NullCheck(L_8);
		String_t* L_9 = VirtualButton_get_name_m3473382228(L_8, /*hidden argument*/NULL);
		VirtualButton_t2756566330 * L_10 = ___button0;
		NullCheck(L_7);
		Dictionary_2_Add_m1118216421(L_7, L_9, L_10, /*hidden argument*/Dictionary_2_Add_m1118216421_RuntimeMethod_var);
		VirtualButton_t2756566330 * L_11 = ___button0;
		NullCheck(L_11);
		bool L_12 = VirtualButton_get_matchWithInputManager_m2472937772(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0063;
		}
	}
	{
		List_1_t3319525431 * L_13 = __this->get_m_AlwaysUseVirtual_3();
		VirtualButton_t2756566330 * L_14 = ___button0;
		NullCheck(L_14);
		String_t* L_15 = VirtualButton_get_name_m3473382228(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		List_1_Add_m1685793073(L_13, L_15, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
	}

IL_0063:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualAxis(System.String)
extern "C" IL2CPP_METHOD_ATTR void VirtualInput_UnRegisterVirtualAxis_m2956537171 (VirtualInput_t2597455733 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualInput_UnRegisterVirtualAxis_m2956537171_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3872604895 * L_0 = __this->get_m_VirtualAxes_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m3309109471(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3309109471_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Dictionary_2_t3872604895 * L_3 = __this->get_m_VirtualAxes_1();
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		Dictionary_2_Remove_m2199267801(L_3, L_4, /*hidden argument*/Dictionary_2_Remove_m2199267801_RuntimeMethod_var);
	}

IL_001e:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualButton(System.String)
extern "C" IL2CPP_METHOD_ATTR void VirtualInput_UnRegisterVirtualButton_m3129182690 (VirtualInput_t2597455733 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualInput_UnRegisterVirtualButton_m3129182690_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2541822629 * L_0 = __this->get_m_VirtualButtons_2();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m3760162225(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3760162225_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Dictionary_2_t2541822629 * L_3 = __this->get_m_VirtualButtons_2();
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		Dictionary_2_Remove_m2343242332(L_3, L_4, /*hidden argument*/Dictionary_2_Remove_m2343242332_RuntimeMethod_var);
	}

IL_001e:
	{
		return;
	}
}
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.VirtualInput::VirtualAxisReference(System.String)
extern "C" IL2CPP_METHOD_ATTR VirtualAxis_t4087348596 * VirtualInput_VirtualAxisReference_m2155778560 (VirtualInput_t2597455733 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualInput_VirtualAxisReference_m2155778560_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VirtualAxis_t4087348596 * G_B3_0 = NULL;
	{
		Dictionary_2_t3872604895 * L_0 = __this->get_m_VirtualAxes_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m3309109471(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3309109471_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		Dictionary_2_t3872604895 * L_3 = __this->get_m_VirtualAxes_1();
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		VirtualAxis_t4087348596 * L_5 = Dictionary_2_get_Item_m1067981918(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m1067981918_RuntimeMethod_var);
		G_B3_0 = L_5;
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = ((VirtualAxis_t4087348596 *)(NULL));
	}

IL_0023:
	{
		return G_B3_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionX(System.Single)
extern "C" IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionX_m1438630863 (VirtualInput_t2597455733 * __this, float ___f0, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		float L_0 = ___f0;
		Vector3_t3722313464  L_1 = VirtualInput_get_virtualMousePosition_m1530934210(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = (&V_0)->get_y_2();
		Vector3_t3722313464  L_3 = VirtualInput_get_virtualMousePosition_m1530934210(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		float L_4 = (&V_1)->get_z_3();
		Vector3_t3722313464  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Vector3__ctor_m3353183577((&L_5), L_0, L_2, L_4, /*hidden argument*/NULL);
		VirtualInput_set_virtualMousePosition_m308564020(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionY(System.Single)
extern "C" IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionY_m110408526 (VirtualInput_t2597455733 * __this, float ___f0, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Vector3_t3722313464  L_0 = VirtualInput_get_virtualMousePosition_m1530934210(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = (&V_0)->get_x_1();
		float L_2 = ___f0;
		Vector3_t3722313464  L_3 = VirtualInput_get_virtualMousePosition_m1530934210(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		float L_4 = (&V_1)->get_z_3();
		Vector3_t3722313464  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Vector3__ctor_m3353183577((&L_5), L_1, L_2, L_4, /*hidden argument*/NULL);
		VirtualInput_set_virtualMousePosition_m308564020(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionZ(System.Single)
extern "C" IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionZ_m414912069 (VirtualInput_t2597455733 * __this, float ___f0, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Vector3_t3722313464  L_0 = VirtualInput_get_virtualMousePosition_m1530934210(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = (&V_0)->get_x_1();
		Vector3_t3722313464  L_2 = VirtualInput_get_virtualMousePosition_m1530934210(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		float L_3 = (&V_1)->get_y_2();
		float L_4 = ___f0;
		Vector3_t3722313464  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Vector3__ctor_m3353183577((&L_5), L_1, L_3, L_4, /*hidden argument*/NULL);
		VirtualInput_set_virtualMousePosition_m308564020(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
