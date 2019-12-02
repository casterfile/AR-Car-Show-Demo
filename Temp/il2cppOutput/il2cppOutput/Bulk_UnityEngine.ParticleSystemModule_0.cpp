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


// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.ParticleSystem
struct ParticleSystem_t1800779281;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.ParticleCollisionEvent[]
struct ParticleCollisionEventU5BU5D_t4144522048;
// UnityEngine.Object
struct Object_t631007953;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Void
struct Void_t1185182177;

extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ParticlePhysicsExtensions_GetCollisionEvents_m2032318737_RuntimeMethod_var;
extern String_t* _stringLiteral3454777273;
extern String_t* _stringLiteral4178700366;
extern const uint32_t ParticlePhysicsExtensions_GetCollisionEvents_m2032318737_MetadataUsageId;

struct ParticleCollisionEventU5BU5D_t4144522048;


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
#ifndef U3CMODULEU3E_T692745541_H
#define U3CMODULEU3E_T692745541_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745541 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745541_H
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
#ifndef PARTICLESYSTEMEXTENSIONSIMPL_T490859600_H
#define PARTICLESYSTEMEXTENSIONSIMPL_T490859600_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystemExtensionsImpl
struct  ParticleSystemExtensionsImpl_t490859600  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLESYSTEMEXTENSIONSIMPL_T490859600_H
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
#ifndef PARTICLEPHYSICSEXTENSIONS_T1867354557_H
#define PARTICLEPHYSICSEXTENSIONS_T1867354557_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticlePhysicsExtensions
struct  ParticlePhysicsExtensions_t1867354557  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLEPHYSICSEXTENSIONS_T1867354557_H
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
#ifndef EMISSIONMODULE_T311448003_H
#define EMISSIONMODULE_T311448003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem/EmissionModule
struct  EmissionModule_t311448003 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/EmissionModule::m_ParticleSystem
	ParticleSystem_t1800779281 * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(EmissionModule_t311448003, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t1800779281 * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t1800779281 ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t1800779281 * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParticleSystem_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_t311448003_marshaled_pinvoke
{
	ParticleSystem_t1800779281 * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_t311448003_marshaled_com
{
	ParticleSystem_t1800779281 * ___m_ParticleSystem_0;
};
#endif // EMISSIONMODULE_T311448003_H
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
#ifndef PARTICLECOLLISIONEVENT_T4055032941_H
#define PARTICLECOLLISIONEVENT_T4055032941_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleCollisionEvent
struct  ParticleCollisionEvent_t4055032941 
{
public:
	// UnityEngine.Vector3 UnityEngine.ParticleCollisionEvent::m_Intersection
	Vector3_t3722313464  ___m_Intersection_0;
	// UnityEngine.Vector3 UnityEngine.ParticleCollisionEvent::m_Normal
	Vector3_t3722313464  ___m_Normal_1;
	// UnityEngine.Vector3 UnityEngine.ParticleCollisionEvent::m_Velocity
	Vector3_t3722313464  ___m_Velocity_2;
	// System.Int32 UnityEngine.ParticleCollisionEvent::m_ColliderInstanceID
	int32_t ___m_ColliderInstanceID_3;

public:
	inline static int32_t get_offset_of_m_Intersection_0() { return static_cast<int32_t>(offsetof(ParticleCollisionEvent_t4055032941, ___m_Intersection_0)); }
	inline Vector3_t3722313464  get_m_Intersection_0() const { return ___m_Intersection_0; }
	inline Vector3_t3722313464 * get_address_of_m_Intersection_0() { return &___m_Intersection_0; }
	inline void set_m_Intersection_0(Vector3_t3722313464  value)
	{
		___m_Intersection_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(ParticleCollisionEvent_t4055032941, ___m_Normal_1)); }
	inline Vector3_t3722313464  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t3722313464 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t3722313464  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_2() { return static_cast<int32_t>(offsetof(ParticleCollisionEvent_t4055032941, ___m_Velocity_2)); }
	inline Vector3_t3722313464  get_m_Velocity_2() const { return ___m_Velocity_2; }
	inline Vector3_t3722313464 * get_address_of_m_Velocity_2() { return &___m_Velocity_2; }
	inline void set_m_Velocity_2(Vector3_t3722313464  value)
	{
		___m_Velocity_2 = value;
	}

	inline static int32_t get_offset_of_m_ColliderInstanceID_3() { return static_cast<int32_t>(offsetof(ParticleCollisionEvent_t4055032941, ___m_ColliderInstanceID_3)); }
	inline int32_t get_m_ColliderInstanceID_3() const { return ___m_ColliderInstanceID_3; }
	inline int32_t* get_address_of_m_ColliderInstanceID_3() { return &___m_ColliderInstanceID_3; }
	inline void set_m_ColliderInstanceID_3(int32_t value)
	{
		___m_ColliderInstanceID_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLECOLLISIONEVENT_T4055032941_H
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
#ifndef PARTICLESYSTEM_T1800779281_H
#define PARTICLESYSTEM_T1800779281_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem
struct  ParticleSystem_t1800779281  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLESYSTEM_T1800779281_H
// UnityEngine.ParticleCollisionEvent[]
struct ParticleCollisionEventU5BU5D_t4144522048  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParticleCollisionEvent_t4055032941  m_Items[1];

public:
	inline ParticleCollisionEvent_t4055032941  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParticleCollisionEvent_t4055032941 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParticleCollisionEvent_t4055032941  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ParticleCollisionEvent_t4055032941  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParticleCollisionEvent_t4055032941 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParticleCollisionEvent_t4055032941  value)
	{
		m_Items[index] = value;
	}
};



// UnityEngine.Component UnityEngine.ParticleCollisionEvent::InstanceIDToColliderComponent(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Component_t1923634451 * ParticleCollisionEvent_InstanceIDToColliderComponent_m3582923694 (RuntimeObject * __this /* static, unused */, int32_t ___instanceID0, const RuntimeMethod* method);
// UnityEngine.Component UnityEngine.ParticleCollisionEvent::get_colliderComponent()
extern "C" IL2CPP_METHOD_ATTR Component_t1923634451 * ParticleCollisionEvent_get_colliderComponent_m1489433520 (ParticleCollisionEvent_t4055032941 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.ParticleSystemExtensionsImpl::GetSafeCollisionEventSize(UnityEngine.ParticleSystem)
extern "C" IL2CPP_METHOD_ATTR int32_t ParticleSystemExtensionsImpl_GetSafeCollisionEventSize_m3494401876 (RuntimeObject * __this /* static, unused */, ParticleSystem_t1800779281 * ___ps0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.ParticleSystemExtensionsImpl::GetCollisionEventsDeprecated(UnityEngine.ParticleSystem,UnityEngine.GameObject,UnityEngine.ParticleCollisionEvent[])
extern "C" IL2CPP_METHOD_ATTR int32_t ParticleSystemExtensionsImpl_GetCollisionEventsDeprecated_m4126057163 (RuntimeObject * __this /* static, unused */, ParticleSystem_t1800779281 * ___ps0, GameObject_t1113636619 * ___go1, ParticleCollisionEventU5BU5D_t4144522048* ___collisionEvents2, const RuntimeMethod* method);
// UnityEngine.ParticleSystem/EmissionModule UnityEngine.ParticleSystem::get_emission()
extern "C" IL2CPP_METHOD_ATTR EmissionModule_t311448003  ParticleSystem_get_emission_m1034302947 (ParticleSystem_t1800779281 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/EmissionModule::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void EmissionModule_set_enabled_m353945573 (EmissionModule_t311448003 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/EmissionModule::.ctor(UnityEngine.ParticleSystem)
extern "C" IL2CPP_METHOD_ATTR void EmissionModule__ctor_m3908790904 (EmissionModule_t311448003 * __this, ParticleSystem_t1800779281 * ___particleSystem0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem::Play(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ParticleSystem_Play_m163824593 (ParticleSystem_t1800779281 * __this, bool ___withChildren0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem::Clear(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ParticleSystem_Clear_m2603704560 (ParticleSystem_t1800779281 * __this, bool ___withChildren0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/EmissionModule::SetEnabled(UnityEngine.ParticleSystem,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void EmissionModule_SetEnabled_m1150129533 (RuntimeObject * __this /* static, unused */, ParticleSystem_t1800779281 * ___system0, bool ___value1, const RuntimeMethod* method);
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
// UnityEngine.Component UnityEngine.ParticleCollisionEvent::get_colliderComponent()
extern "C" IL2CPP_METHOD_ATTR Component_t1923634451 * ParticleCollisionEvent_get_colliderComponent_m1489433520 (ParticleCollisionEvent_t4055032941 * __this, const RuntimeMethod* method)
{
	Component_t1923634451 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_m_ColliderInstanceID_3();
		Component_t1923634451 * L_1 = ParticleCollisionEvent_InstanceIDToColliderComponent_m3582923694(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		Component_t1923634451 * L_2 = V_0;
		return L_2;
	}
}
extern "C"  Component_t1923634451 * ParticleCollisionEvent_get_colliderComponent_m1489433520_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ParticleCollisionEvent_t4055032941 * _thisAdjusted = reinterpret_cast<ParticleCollisionEvent_t4055032941 *>(__this + 1);
	return ParticleCollisionEvent_get_colliderComponent_m1489433520(_thisAdjusted, method);
}
// UnityEngine.Component UnityEngine.ParticleCollisionEvent::InstanceIDToColliderComponent(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Component_t1923634451 * ParticleCollisionEvent_InstanceIDToColliderComponent_m3582923694 (RuntimeObject * __this /* static, unused */, int32_t ___instanceID0, const RuntimeMethod* method)
{
	typedef Component_t1923634451 * (*ParticleCollisionEvent_InstanceIDToColliderComponent_m3582923694_ftn) (int32_t);
	static ParticleCollisionEvent_InstanceIDToColliderComponent_m3582923694_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleCollisionEvent_InstanceIDToColliderComponent_m3582923694_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleCollisionEvent::InstanceIDToColliderComponent(System.Int32)");
	Component_t1923634451 * retVal = _il2cpp_icall_func(___instanceID0);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.ParticlePhysicsExtensions::GetSafeCollisionEventSize(UnityEngine.ParticleSystem)
extern "C" IL2CPP_METHOD_ATTR int32_t ParticlePhysicsExtensions_GetSafeCollisionEventSize_m3334672375 (RuntimeObject * __this /* static, unused */, ParticleSystem_t1800779281 * ___ps0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		ParticleSystem_t1800779281 * L_0 = ___ps0;
		int32_t L_1 = ParticleSystemExtensionsImpl_GetSafeCollisionEventSize_m3494401876(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityEngine.ParticlePhysicsExtensions::GetCollisionEvents(UnityEngine.ParticleSystem,UnityEngine.GameObject,UnityEngine.ParticleCollisionEvent[])
extern "C" IL2CPP_METHOD_ATTR int32_t ParticlePhysicsExtensions_GetCollisionEvents_m2032318737 (RuntimeObject * __this /* static, unused */, ParticleSystem_t1800779281 * ___ps0, GameObject_t1113636619 * ___go1, ParticleCollisionEventU5BU5D_t4144522048* ___collisionEvents2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParticlePhysicsExtensions_GetCollisionEvents_m2032318737_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		GameObject_t1113636619 * L_0 = ___go1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_2 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_2, _stringLiteral3454777273, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,ParticlePhysicsExtensions_GetCollisionEvents_m2032318737_RuntimeMethod_var);
	}

IL_0018:
	{
		ParticleCollisionEventU5BU5D_t4144522048* L_3 = ___collisionEvents2;
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_4 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_4, _stringLiteral4178700366, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4,ParticlePhysicsExtensions_GetCollisionEvents_m2032318737_RuntimeMethod_var);
	}

IL_0029:
	{
		ParticleSystem_t1800779281 * L_5 = ___ps0;
		GameObject_t1113636619 * L_6 = ___go1;
		ParticleCollisionEventU5BU5D_t4144522048* L_7 = ___collisionEvents2;
		int32_t L_8 = ParticleSystemExtensionsImpl_GetCollisionEventsDeprecated_m4126057163(NULL /*static, unused*/, L_5, L_6, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0037;
	}

IL_0037:
	{
		int32_t L_9 = V_0;
		return L_9;
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
// System.Boolean UnityEngine.ParticleSystem::get_isPlaying()
extern "C" IL2CPP_METHOD_ATTR bool ParticleSystem_get_isPlaying_m1820717466 (ParticleSystem_t1800779281 * __this, const RuntimeMethod* method)
{
	typedef bool (*ParticleSystem_get_isPlaying_m1820717466_ftn) (ParticleSystem_t1800779281 *);
	static ParticleSystem_get_isPlaying_m1820717466_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_get_isPlaying_m1820717466_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::get_isPlaying()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.ParticleSystem::set_enableEmission(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ParticleSystem_set_enableEmission_m2450064795 (ParticleSystem_t1800779281 * __this, bool ___value0, const RuntimeMethod* method)
{
	EmissionModule_t311448003  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		EmissionModule_t311448003  L_0 = ParticleSystem_get_emission_m1034302947(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = ___value0;
		EmissionModule_set_enabled_m353945573((&V_0), L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityEngine.ParticleSystem::get_startSpeed()
extern "C" IL2CPP_METHOD_ATTR float ParticleSystem_get_startSpeed_m4185695559 (ParticleSystem_t1800779281 * __this, const RuntimeMethod* method)
{
	typedef float (*ParticleSystem_get_startSpeed_m4185695559_ftn) (ParticleSystem_t1800779281 *);
	static ParticleSystem_get_startSpeed_m4185695559_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_get_startSpeed_m4185695559_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::get_startSpeed()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.ParticleSystem::set_startSpeed(System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParticleSystem_set_startSpeed_m1990602809 (ParticleSystem_t1800779281 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*ParticleSystem_set_startSpeed_m1990602809_ftn) (ParticleSystem_t1800779281 *, float);
	static ParticleSystem_set_startSpeed_m1990602809_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_set_startSpeed_m1990602809_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::set_startSpeed(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.ParticleSystem::get_startSize()
extern "C" IL2CPP_METHOD_ATTR float ParticleSystem_get_startSize_m1697540088 (ParticleSystem_t1800779281 * __this, const RuntimeMethod* method)
{
	typedef float (*ParticleSystem_get_startSize_m1697540088_ftn) (ParticleSystem_t1800779281 *);
	static ParticleSystem_get_startSize_m1697540088_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_get_startSize_m1697540088_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::get_startSize()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.ParticleSystem::set_startSize(System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParticleSystem_set_startSize_m3050134911 (ParticleSystem_t1800779281 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*ParticleSystem_set_startSize_m3050134911_ftn) (ParticleSystem_t1800779281 *, float);
	static ParticleSystem_set_startSize_m3050134911_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_set_startSize_m3050134911_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::set_startSize(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.ParticleSystem::get_startLifetime()
extern "C" IL2CPP_METHOD_ATTR float ParticleSystem_get_startLifetime_m3070133424 (ParticleSystem_t1800779281 * __this, const RuntimeMethod* method)
{
	typedef float (*ParticleSystem_get_startLifetime_m3070133424_ftn) (ParticleSystem_t1800779281 *);
	static ParticleSystem_get_startLifetime_m3070133424_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_get_startLifetime_m3070133424_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::get_startLifetime()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.ParticleSystem::set_startLifetime(System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParticleSystem_set_startLifetime_m1402764463 (ParticleSystem_t1800779281 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*ParticleSystem_set_startLifetime_m1402764463_ftn) (ParticleSystem_t1800779281 *, float);
	static ParticleSystem_set_startLifetime_m1402764463_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_set_startLifetime_m1402764463_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::set_startLifetime(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.ParticleSystem/EmissionModule UnityEngine.ParticleSystem::get_emission()
extern "C" IL2CPP_METHOD_ATTR EmissionModule_t311448003  ParticleSystem_get_emission_m1034302947 (ParticleSystem_t1800779281 * __this, const RuntimeMethod* method)
{
	EmissionModule_t311448003  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		EmissionModule_t311448003  L_0;
		memset(&L_0, 0, sizeof(L_0));
		EmissionModule__ctor_m3908790904((&L_0), __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		EmissionModule_t311448003  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.ParticleSystem::Play(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ParticleSystem_Play_m163824593 (ParticleSystem_t1800779281 * __this, bool ___withChildren0, const RuntimeMethod* method)
{
	typedef void (*ParticleSystem_Play_m163824593_ftn) (ParticleSystem_t1800779281 *, bool);
	static ParticleSystem_Play_m163824593_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_Play_m163824593_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::Play(System.Boolean)");
	_il2cpp_icall_func(__this, ___withChildren0);
}
// System.Void UnityEngine.ParticleSystem::Play()
extern "C" IL2CPP_METHOD_ATTR void ParticleSystem_Play_m882713458 (ParticleSystem_t1800779281 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)1;
		bool L_0 = V_0;
		ParticleSystem_Play_m163824593(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.ParticleSystem::Clear(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ParticleSystem_Clear_m2603704560 (ParticleSystem_t1800779281 * __this, bool ___withChildren0, const RuntimeMethod* method)
{
	typedef void (*ParticleSystem_Clear_m2603704560_ftn) (ParticleSystem_t1800779281 *, bool);
	static ParticleSystem_Clear_m2603704560_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_Clear_m2603704560_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::Clear(System.Boolean)");
	_il2cpp_icall_func(__this, ___withChildren0);
}
// System.Void UnityEngine.ParticleSystem::Clear()
extern "C" IL2CPP_METHOD_ATTR void ParticleSystem_Clear_m381529807 (ParticleSystem_t1800779281 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)1;
		bool L_0 = V_0;
		ParticleSystem_Clear_m2603704560(__this, L_0, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/EmissionModule
extern "C" void EmissionModule_t311448003_marshal_pinvoke(const EmissionModule_t311448003& unmarshaled, EmissionModule_t311448003_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'EmissionModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception,NULL);
}
extern "C" void EmissionModule_t311448003_marshal_pinvoke_back(const EmissionModule_t311448003_marshaled_pinvoke& marshaled, EmissionModule_t311448003& unmarshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'EmissionModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception,NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/EmissionModule
extern "C" void EmissionModule_t311448003_marshal_pinvoke_cleanup(EmissionModule_t311448003_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/EmissionModule
extern "C" void EmissionModule_t311448003_marshal_com(const EmissionModule_t311448003& unmarshaled, EmissionModule_t311448003_marshaled_com& marshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'EmissionModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception,NULL);
}
extern "C" void EmissionModule_t311448003_marshal_com_back(const EmissionModule_t311448003_marshaled_com& marshaled, EmissionModule_t311448003& unmarshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'EmissionModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception,NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/EmissionModule
extern "C" void EmissionModule_t311448003_marshal_com_cleanup(EmissionModule_t311448003_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.ParticleSystem/EmissionModule::.ctor(UnityEngine.ParticleSystem)
extern "C" IL2CPP_METHOD_ATTR void EmissionModule__ctor_m3908790904 (EmissionModule_t311448003 * __this, ParticleSystem_t1800779281 * ___particleSystem0, const RuntimeMethod* method)
{
	{
		ParticleSystem_t1800779281 * L_0 = ___particleSystem0;
		__this->set_m_ParticleSystem_0(L_0);
		return;
	}
}
extern "C"  void EmissionModule__ctor_m3908790904_AdjustorThunk (RuntimeObject * __this, ParticleSystem_t1800779281 * ___particleSystem0, const RuntimeMethod* method)
{
	EmissionModule_t311448003 * _thisAdjusted = reinterpret_cast<EmissionModule_t311448003 *>(__this + 1);
	EmissionModule__ctor_m3908790904(_thisAdjusted, ___particleSystem0, method);
}
// System.Void UnityEngine.ParticleSystem/EmissionModule::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void EmissionModule_set_enabled_m353945573 (EmissionModule_t311448003 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		ParticleSystem_t1800779281 * L_0 = __this->get_m_ParticleSystem_0();
		bool L_1 = ___value0;
		EmissionModule_SetEnabled_m1150129533(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void EmissionModule_set_enabled_m353945573_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	EmissionModule_t311448003 * _thisAdjusted = reinterpret_cast<EmissionModule_t311448003 *>(__this + 1);
	EmissionModule_set_enabled_m353945573(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.ParticleSystem/EmissionModule::SetEnabled(UnityEngine.ParticleSystem,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void EmissionModule_SetEnabled_m1150129533 (RuntimeObject * __this /* static, unused */, ParticleSystem_t1800779281 * ___system0, bool ___value1, const RuntimeMethod* method)
{
	typedef void (*EmissionModule_SetEnabled_m1150129533_ftn) (ParticleSystem_t1800779281 *, bool);
	static EmissionModule_SetEnabled_m1150129533_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (EmissionModule_SetEnabled_m1150129533_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/EmissionModule::SetEnabled(UnityEngine.ParticleSystem,System.Boolean)");
	_il2cpp_icall_func(___system0, ___value1);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.ParticleSystemExtensionsImpl::GetSafeCollisionEventSize(UnityEngine.ParticleSystem)
extern "C" IL2CPP_METHOD_ATTR int32_t ParticleSystemExtensionsImpl_GetSafeCollisionEventSize_m3494401876 (RuntimeObject * __this /* static, unused */, ParticleSystem_t1800779281 * ___ps0, const RuntimeMethod* method)
{
	typedef int32_t (*ParticleSystemExtensionsImpl_GetSafeCollisionEventSize_m3494401876_ftn) (ParticleSystem_t1800779281 *);
	static ParticleSystemExtensionsImpl_GetSafeCollisionEventSize_m3494401876_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystemExtensionsImpl_GetSafeCollisionEventSize_m3494401876_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystemExtensionsImpl::GetSafeCollisionEventSize(UnityEngine.ParticleSystem)");
	int32_t retVal = _il2cpp_icall_func(___ps0);
	return retVal;
}
// System.Int32 UnityEngine.ParticleSystemExtensionsImpl::GetCollisionEventsDeprecated(UnityEngine.ParticleSystem,UnityEngine.GameObject,UnityEngine.ParticleCollisionEvent[])
extern "C" IL2CPP_METHOD_ATTR int32_t ParticleSystemExtensionsImpl_GetCollisionEventsDeprecated_m4126057163 (RuntimeObject * __this /* static, unused */, ParticleSystem_t1800779281 * ___ps0, GameObject_t1113636619 * ___go1, ParticleCollisionEventU5BU5D_t4144522048* ___collisionEvents2, const RuntimeMethod* method)
{
	typedef int32_t (*ParticleSystemExtensionsImpl_GetCollisionEventsDeprecated_m4126057163_ftn) (ParticleSystem_t1800779281 *, GameObject_t1113636619 *, ParticleCollisionEventU5BU5D_t4144522048*);
	static ParticleSystemExtensionsImpl_GetCollisionEventsDeprecated_m4126057163_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystemExtensionsImpl_GetCollisionEventsDeprecated_m4126057163_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystemExtensionsImpl::GetCollisionEventsDeprecated(UnityEngine.ParticleSystem,UnityEngine.GameObject,UnityEngine.ParticleCollisionEvent[])");
	int32_t retVal = _il2cpp_icall_func(___ps0, ___go1, ___collisionEvents2);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
