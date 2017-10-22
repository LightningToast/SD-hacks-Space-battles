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

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// UnityEngine.CharacterController
struct CharacterController_t2287536771;
// UnityEngine.Collider
struct Collider_t2510189163;
// UnityEngine.Component
struct Component_t374082195;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t317570481;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t3010566026;
// UnityEngine.Rigidbody
struct Rigidbody_t2190582126;
// System.Char[]
struct CharU5BU5D_t3118480893;
// System.String
struct String_t;
// System.Void
struct Void_t3013587868;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t2054014307;

struct ContactPoint_t440168646 ;

struct ContactPointU5BU5D_t2054014307;
struct RaycastHitU5BU5D_t317570481;
struct ColliderU5BU5D_t3010566026;


#ifndef U3CMODULEU3E_T3735320475_H
#define U3CMODULEU3E_T3735320475_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t3735320475 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T3735320475_H
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
#ifndef VALUETYPE_T3785694120_H
#define VALUETYPE_T3785694120_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3785694120  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3785694120_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3785694120_marshaled_com
{
};
#endif // VALUETYPE_T3785694120_H
#ifndef PHYSICS_T2929188261_H
#define PHYSICS_T2929188261_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Physics
struct  Physics_t2929188261  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICS_T2929188261_H
#ifndef ENUM_T408947137_H
#define ENUM_T408947137_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t408947137  : public ValueType_t3785694120
{
public:

public:
};

struct Enum_t408947137_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3118480893* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t408947137_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3118480893* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3118480893** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3118480893* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t408947137_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t408947137_marshaled_com
{
};
#endif // ENUM_T408947137_H
#ifndef QUATERNION_T3112193037_H
#define QUATERNION_T3112193037_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t3112193037 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t3112193037, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t3112193037, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t3112193037, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t3112193037, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t3112193037_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t3112193037  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t3112193037_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t3112193037  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t3112193037 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t3112193037  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T3112193037_H
#ifndef VECTOR2_T3265457335_H
#define VECTOR2_T3265457335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t3265457335 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t3265457335, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t3265457335, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t3265457335_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t3265457335  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t3265457335  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t3265457335  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t3265457335  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t3265457335  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t3265457335  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t3265457335  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t3265457335  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t3265457335_StaticFields, ___zeroVector_2)); }
	inline Vector2_t3265457335  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t3265457335 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t3265457335  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t3265457335_StaticFields, ___oneVector_3)); }
	inline Vector2_t3265457335  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t3265457335 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t3265457335  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t3265457335_StaticFields, ___upVector_4)); }
	inline Vector2_t3265457335  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t3265457335 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t3265457335  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t3265457335_StaticFields, ___downVector_5)); }
	inline Vector2_t3265457335  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t3265457335 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t3265457335  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t3265457335_StaticFields, ___leftVector_6)); }
	inline Vector2_t3265457335  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t3265457335 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t3265457335  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t3265457335_StaticFields, ___rightVector_7)); }
	inline Vector2_t3265457335  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t3265457335 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t3265457335  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t3265457335_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t3265457335  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t3265457335 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t3265457335  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t3265457335_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t3265457335  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t3265457335 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t3265457335  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T3265457335_H
#ifndef INT32_T2680619739_H
#define INT32_T2680619739_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2680619739 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2680619739, ___m_value_2)); }
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
#endif // INT32_T2680619739_H
#ifndef SINGLE_T3948880559_H
#define SINGLE_T3948880559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t3948880559 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t3948880559, ___m_value_7)); }
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
#endif // SINGLE_T3948880559_H
#ifndef BOOLEAN_T1789116589_H
#define BOOLEAN_T1789116589_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t1789116589 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t1789116589, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t1789116589_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t1789116589_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t1789116589_StaticFields, ___TrueString_1)); }
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
#endif // BOOLEAN_T1789116589_H
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
#ifndef VECTOR3_T597324871_H
#define VECTOR3_T597324871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t597324871 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t597324871, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t597324871, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t597324871, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t597324871_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t597324871  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t597324871  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t597324871  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t597324871  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t597324871  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t597324871  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t597324871  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t597324871  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t597324871  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t597324871  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t597324871_StaticFields, ___zeroVector_4)); }
	inline Vector3_t597324871  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t597324871 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t597324871  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t597324871_StaticFields, ___oneVector_5)); }
	inline Vector3_t597324871  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t597324871 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t597324871  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t597324871_StaticFields, ___upVector_6)); }
	inline Vector3_t597324871  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t597324871 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t597324871  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t597324871_StaticFields, ___downVector_7)); }
	inline Vector3_t597324871  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t597324871 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t597324871  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t597324871_StaticFields, ___leftVector_8)); }
	inline Vector3_t597324871  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t597324871 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t597324871  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t597324871_StaticFields, ___rightVector_9)); }
	inline Vector3_t597324871  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t597324871 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t597324871  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t597324871_StaticFields, ___forwardVector_10)); }
	inline Vector3_t597324871  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t597324871 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t597324871  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t597324871_StaticFields, ___backVector_11)); }
	inline Vector3_t597324871  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t597324871 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t597324871  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t597324871_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t597324871  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t597324871 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t597324871  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t597324871_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t597324871  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t597324871 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t597324871  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T597324871_H
#ifndef VOID_T3013587868_H
#define VOID_T3013587868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t3013587868 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T3013587868_H
#ifndef CONTACTPOINT_T440168646_H
#define CONTACTPOINT_T440168646_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ContactPoint
struct  ContactPoint_t440168646 
{
public:
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Point
	Vector3_t597324871  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Normal
	Vector3_t597324871  ___m_Normal_1;
	// System.Int32 UnityEngine.ContactPoint::m_ThisColliderInstanceID
	int32_t ___m_ThisColliderInstanceID_2;
	// System.Int32 UnityEngine.ContactPoint::m_OtherColliderInstanceID
	int32_t ___m_OtherColliderInstanceID_3;
	// System.Single UnityEngine.ContactPoint::m_Separation
	float ___m_Separation_4;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(ContactPoint_t440168646, ___m_Point_0)); }
	inline Vector3_t597324871  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t597324871 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t597324871  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(ContactPoint_t440168646, ___m_Normal_1)); }
	inline Vector3_t597324871  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t597324871 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t597324871  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_ThisColliderInstanceID_2() { return static_cast<int32_t>(offsetof(ContactPoint_t440168646, ___m_ThisColliderInstanceID_2)); }
	inline int32_t get_m_ThisColliderInstanceID_2() const { return ___m_ThisColliderInstanceID_2; }
	inline int32_t* get_address_of_m_ThisColliderInstanceID_2() { return &___m_ThisColliderInstanceID_2; }
	inline void set_m_ThisColliderInstanceID_2(int32_t value)
	{
		___m_ThisColliderInstanceID_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherColliderInstanceID_3() { return static_cast<int32_t>(offsetof(ContactPoint_t440168646, ___m_OtherColliderInstanceID_3)); }
	inline int32_t get_m_OtherColliderInstanceID_3() const { return ___m_OtherColliderInstanceID_3; }
	inline int32_t* get_address_of_m_OtherColliderInstanceID_3() { return &___m_OtherColliderInstanceID_3; }
	inline void set_m_OtherColliderInstanceID_3(int32_t value)
	{
		___m_OtherColliderInstanceID_3 = value;
	}

	inline static int32_t get_offset_of_m_Separation_4() { return static_cast<int32_t>(offsetof(ContactPoint_t440168646, ___m_Separation_4)); }
	inline float get_m_Separation_4() const { return ___m_Separation_4; }
	inline float* get_address_of_m_Separation_4() { return &___m_Separation_4; }
	inline void set_m_Separation_4(float value)
	{
		___m_Separation_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTACTPOINT_T440168646_H
#ifndef COLLISIONFLAGS_T2331301010_H
#define COLLISIONFLAGS_T2331301010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CollisionFlags
struct  CollisionFlags_t2331301010 
{
public:
	// System.Int32 UnityEngine.CollisionFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CollisionFlags_t2331301010, ___value___1)); }
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
#endif // COLLISIONFLAGS_T2331301010_H
#ifndef RAY_T397193182_H
#define RAY_T397193182_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_t397193182 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t597324871  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t597324871  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t397193182, ___m_Origin_0)); }
	inline Vector3_t597324871  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t597324871 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t597324871  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t397193182, ___m_Direction_1)); }
	inline Vector3_t597324871  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t597324871 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t597324871  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_T397193182_H
#ifndef QUERYTRIGGERINTERACTION_T3738409731_H
#define QUERYTRIGGERINTERACTION_T3738409731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.QueryTriggerInteraction
struct  QueryTriggerInteraction_t3738409731 
{
public:
	// System.Int32 UnityEngine.QueryTriggerInteraction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(QueryTriggerInteraction_t3738409731, ___value___1)); }
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
#endif // QUERYTRIGGERINTERACTION_T3738409731_H
#ifndef RAYCASTHIT_T385331216_H
#define RAYCASTHIT_T385331216_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit
struct  RaycastHit_t385331216 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t597324871  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t597324871  ___m_Normal_1;
	// System.Int32 UnityEngine.RaycastHit::m_FaceID
	int32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t3265457335  ___m_UV_4;
	// UnityEngine.Collider UnityEngine.RaycastHit::m_Collider
	Collider_t2510189163 * ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t385331216, ___m_Point_0)); }
	inline Vector3_t597324871  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t597324871 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t597324871  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t385331216, ___m_Normal_1)); }
	inline Vector3_t597324871  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t597324871 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t597324871  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t385331216, ___m_FaceID_2)); }
	inline int32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline int32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(int32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t385331216, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t385331216, ___m_UV_4)); }
	inline Vector2_t3265457335  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_t3265457335 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_t3265457335  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t385331216, ___m_Collider_5)); }
	inline Collider_t2510189163 * get_m_Collider_5() const { return ___m_Collider_5; }
	inline Collider_t2510189163 ** get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(Collider_t2510189163 * value)
	{
		___m_Collider_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RaycastHit
struct RaycastHit_t385331216_marshaled_pinvoke
{
	Vector3_t597324871  ___m_Point_0;
	Vector3_t597324871  ___m_Normal_1;
	int32_t ___m_FaceID_2;
	float ___m_Distance_3;
	Vector2_t3265457335  ___m_UV_4;
	Collider_t2510189163 * ___m_Collider_5;
};
// Native definition for COM marshalling of UnityEngine.RaycastHit
struct RaycastHit_t385331216_marshaled_com
{
	Vector3_t597324871  ___m_Point_0;
	Vector3_t597324871  ___m_Normal_1;
	int32_t ___m_FaceID_2;
	float ___m_Distance_3;
	Vector2_t3265457335  ___m_UV_4;
	Collider_t2510189163 * ___m_Collider_5;
};
#endif // RAYCASTHIT_T385331216_H
#ifndef COLLISION_T2956891687_H
#define COLLISION_T2956891687_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collision
struct  Collision_t2956891687  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t597324871  ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t597324871  ___m_RelativeVelocity_1;
	// UnityEngine.Rigidbody UnityEngine.Collision::m_Rigidbody
	Rigidbody_t2190582126 * ___m_Rigidbody_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t2510189163 * ___m_Collider_3;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_Contacts
	ContactPointU5BU5D_t2054014307* ___m_Contacts_4;

public:
	inline static int32_t get_offset_of_m_Impulse_0() { return static_cast<int32_t>(offsetof(Collision_t2956891687, ___m_Impulse_0)); }
	inline Vector3_t597324871  get_m_Impulse_0() const { return ___m_Impulse_0; }
	inline Vector3_t597324871 * get_address_of_m_Impulse_0() { return &___m_Impulse_0; }
	inline void set_m_Impulse_0(Vector3_t597324871  value)
	{
		___m_Impulse_0 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_1() { return static_cast<int32_t>(offsetof(Collision_t2956891687, ___m_RelativeVelocity_1)); }
	inline Vector3_t597324871  get_m_RelativeVelocity_1() const { return ___m_RelativeVelocity_1; }
	inline Vector3_t597324871 * get_address_of_m_RelativeVelocity_1() { return &___m_RelativeVelocity_1; }
	inline void set_m_RelativeVelocity_1(Vector3_t597324871  value)
	{
		___m_RelativeVelocity_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision_t2956891687, ___m_Rigidbody_2)); }
	inline Rigidbody_t2190582126 * get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline Rigidbody_t2190582126 ** get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(Rigidbody_t2190582126 * value)
	{
		___m_Rigidbody_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rigidbody_2), value);
	}

	inline static int32_t get_offset_of_m_Collider_3() { return static_cast<int32_t>(offsetof(Collision_t2956891687, ___m_Collider_3)); }
	inline Collider_t2510189163 * get_m_Collider_3() const { return ___m_Collider_3; }
	inline Collider_t2510189163 ** get_address_of_m_Collider_3() { return &___m_Collider_3; }
	inline void set_m_Collider_3(Collider_t2510189163 * value)
	{
		___m_Collider_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_3), value);
	}

	inline static int32_t get_offset_of_m_Contacts_4() { return static_cast<int32_t>(offsetof(Collision_t2956891687, ___m_Contacts_4)); }
	inline ContactPointU5BU5D_t2054014307* get_m_Contacts_4() const { return ___m_Contacts_4; }
	inline ContactPointU5BU5D_t2054014307** get_address_of_m_Contacts_4() { return &___m_Contacts_4; }
	inline void set_m_Contacts_4(ContactPointU5BU5D_t2054014307* value)
	{
		___m_Contacts_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Contacts_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_t2956891687_marshaled_pinvoke
{
	Vector3_t597324871  ___m_Impulse_0;
	Vector3_t597324871  ___m_RelativeVelocity_1;
	Rigidbody_t2190582126 * ___m_Rigidbody_2;
	Collider_t2510189163 * ___m_Collider_3;
	ContactPoint_t440168646 * ___m_Contacts_4;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_t2956891687_marshaled_com
{
	Vector3_t597324871  ___m_Impulse_0;
	Vector3_t597324871  ___m_RelativeVelocity_1;
	Rigidbody_t2190582126 * ___m_Rigidbody_2;
	Collider_t2510189163 * ___m_Collider_3;
	ContactPoint_t440168646 * ___m_Contacts_4;
};
#endif // COLLISION_T2956891687_H
#ifndef OBJECT_T2074734763_H
#define OBJECT_T2074734763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t2074734763  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t2074734763, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t2074734763_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t2074734763_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
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
struct Object_t2074734763_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t2074734763_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T2074734763_H
#ifndef CONTROLLERCOLLIDERHIT_T1708203928_H
#define CONTROLLERCOLLIDERHIT_T1708203928_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ControllerColliderHit
struct  ControllerColliderHit_t1708203928  : public RuntimeObject
{
public:
	// UnityEngine.CharacterController UnityEngine.ControllerColliderHit::m_Controller
	CharacterController_t2287536771 * ___m_Controller_0;
	// UnityEngine.Collider UnityEngine.ControllerColliderHit::m_Collider
	Collider_t2510189163 * ___m_Collider_1;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Point
	Vector3_t597324871  ___m_Point_2;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Normal
	Vector3_t597324871  ___m_Normal_3;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_MoveDirection
	Vector3_t597324871  ___m_MoveDirection_4;
	// System.Single UnityEngine.ControllerColliderHit::m_MoveLength
	float ___m_MoveLength_5;
	// System.Int32 UnityEngine.ControllerColliderHit::m_Push
	int32_t ___m_Push_6;

public:
	inline static int32_t get_offset_of_m_Controller_0() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t1708203928, ___m_Controller_0)); }
	inline CharacterController_t2287536771 * get_m_Controller_0() const { return ___m_Controller_0; }
	inline CharacterController_t2287536771 ** get_address_of_m_Controller_0() { return &___m_Controller_0; }
	inline void set_m_Controller_0(CharacterController_t2287536771 * value)
	{
		___m_Controller_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Controller_0), value);
	}

	inline static int32_t get_offset_of_m_Collider_1() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t1708203928, ___m_Collider_1)); }
	inline Collider_t2510189163 * get_m_Collider_1() const { return ___m_Collider_1; }
	inline Collider_t2510189163 ** get_address_of_m_Collider_1() { return &___m_Collider_1; }
	inline void set_m_Collider_1(Collider_t2510189163 * value)
	{
		___m_Collider_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_1), value);
	}

	inline static int32_t get_offset_of_m_Point_2() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t1708203928, ___m_Point_2)); }
	inline Vector3_t597324871  get_m_Point_2() const { return ___m_Point_2; }
	inline Vector3_t597324871 * get_address_of_m_Point_2() { return &___m_Point_2; }
	inline void set_m_Point_2(Vector3_t597324871  value)
	{
		___m_Point_2 = value;
	}

	inline static int32_t get_offset_of_m_Normal_3() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t1708203928, ___m_Normal_3)); }
	inline Vector3_t597324871  get_m_Normal_3() const { return ___m_Normal_3; }
	inline Vector3_t597324871 * get_address_of_m_Normal_3() { return &___m_Normal_3; }
	inline void set_m_Normal_3(Vector3_t597324871  value)
	{
		___m_Normal_3 = value;
	}

	inline static int32_t get_offset_of_m_MoveDirection_4() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t1708203928, ___m_MoveDirection_4)); }
	inline Vector3_t597324871  get_m_MoveDirection_4() const { return ___m_MoveDirection_4; }
	inline Vector3_t597324871 * get_address_of_m_MoveDirection_4() { return &___m_MoveDirection_4; }
	inline void set_m_MoveDirection_4(Vector3_t597324871  value)
	{
		___m_MoveDirection_4 = value;
	}

	inline static int32_t get_offset_of_m_MoveLength_5() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t1708203928, ___m_MoveLength_5)); }
	inline float get_m_MoveLength_5() const { return ___m_MoveLength_5; }
	inline float* get_address_of_m_MoveLength_5() { return &___m_MoveLength_5; }
	inline void set_m_MoveLength_5(float value)
	{
		___m_MoveLength_5 = value;
	}

	inline static int32_t get_offset_of_m_Push_6() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t1708203928, ___m_Push_6)); }
	inline int32_t get_m_Push_6() const { return ___m_Push_6; }
	inline int32_t* get_address_of_m_Push_6() { return &___m_Push_6; }
	inline void set_m_Push_6(int32_t value)
	{
		___m_Push_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t1708203928_marshaled_pinvoke
{
	CharacterController_t2287536771 * ___m_Controller_0;
	Collider_t2510189163 * ___m_Collider_1;
	Vector3_t597324871  ___m_Point_2;
	Vector3_t597324871  ___m_Normal_3;
	Vector3_t597324871  ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
};
// Native definition for COM marshalling of UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t1708203928_marshaled_com
{
	CharacterController_t2287536771 * ___m_Controller_0;
	Collider_t2510189163 * ___m_Collider_1;
	Vector3_t597324871  ___m_Point_2;
	Vector3_t597324871  ___m_Normal_3;
	Vector3_t597324871  ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
};
#endif // CONTROLLERCOLLIDERHIT_T1708203928_H
#ifndef COMPONENT_T374082195_H
#define COMPONENT_T374082195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t374082195  : public Object_t2074734763
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T374082195_H
#ifndef RIGIDBODY_T2190582126_H
#define RIGIDBODY_T2190582126_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody
struct  Rigidbody_t2190582126  : public Component_t374082195
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY_T2190582126_H
#ifndef COLLIDER_T2510189163_H
#define COLLIDER_T2510189163_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t2510189163  : public Component_t374082195
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T2510189163_H
#ifndef SPHERECOLLIDER_T691082187_H
#define SPHERECOLLIDER_T691082187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SphereCollider
struct  SphereCollider_t691082187  : public Collider_t2510189163
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPHERECOLLIDER_T691082187_H
#ifndef CHARACTERCONTROLLER_T2287536771_H
#define CHARACTERCONTROLLER_T2287536771_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CharacterController
struct  CharacterController_t2287536771  : public Collider_t2510189163
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARACTERCONTROLLER_T2287536771_H
#ifndef CAPSULECOLLIDER_T3773047699_H
#define CAPSULECOLLIDER_T3773047699_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CapsuleCollider
struct  CapsuleCollider_t3773047699  : public Collider_t2510189163
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAPSULECOLLIDER_T3773047699_H
#ifndef BOXCOLLIDER_T1682301633_H
#define BOXCOLLIDER_T1682301633_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.BoxCollider
struct  BoxCollider_t1682301633  : public Collider_t2510189163
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOXCOLLIDER_T1682301633_H
#ifndef MESHCOLLIDER_T1651054848_H
#define MESHCOLLIDER_T1651054848_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshCollider
struct  MeshCollider_t1651054848  : public Collider_t2510189163
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHCOLLIDER_T1651054848_H
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t2054014307  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ContactPoint_t440168646  m_Items[1];

public:
	inline ContactPoint_t440168646  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ContactPoint_t440168646 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ContactPoint_t440168646  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ContactPoint_t440168646  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ContactPoint_t440168646 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ContactPoint_t440168646  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t317570481  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RaycastHit_t385331216  m_Items[1];

public:
	inline RaycastHit_t385331216  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit_t385331216 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit_t385331216  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit_t385331216  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit_t385331216 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit_t385331216  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Collider[]
struct ColliderU5BU5D_t3010566026  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Collider_t2510189163 * m_Items[1];

public:
	inline Collider_t2510189163 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t2510189163 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t2510189163 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Collider_t2510189163 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t2510189163 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t2510189163 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};



// UnityEngine.CollisionFlags UnityEngine.CharacterController::INTERNAL_CALL_Move(UnityEngine.CharacterController,UnityEngine.Vector3&)
extern "C"  int32_t CharacterController_INTERNAL_CALL_Move_m187758632 (RuntimeObject * __this /* static, unused */, CharacterController_t2287536771 * ___self0, Vector3_t597324871 * ___motion1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CharacterController::INTERNAL_get_velocity(UnityEngine.Vector3&)
extern "C"  void CharacterController_INTERNAL_get_velocity_m4275058887 (CharacterController_t2287536771 * __this, Vector3_t597324871 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::.ctor()
extern "C"  void Component__ctor_m1806458186 (Component_t374082195 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_Raycast_m3738972782 (RuntimeObject * __this /* static, unused */, Vector3_t597324871  ___origin0, Vector3_t597324871  ___direction1, float ___maxDistance2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Internal_RaycastTest(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_Internal_RaycastTest_m636016028 (RuntimeObject * __this /* static, unused */, Vector3_t597324871  ___origin0, Vector3_t597324871  ___direction1, float ___maxDistance2, int32_t ___layermask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_Raycast_m1147736206 (RuntimeObject * __this /* static, unused */, Vector3_t597324871  ___origin0, Vector3_t597324871  ___direction1, RaycastHit_t385331216 * ___hitInfo2, float ___maxDistance3, int32_t ___layerMask4, int32_t ___queryTriggerInteraction5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Internal_Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_Internal_Raycast_m163630568 (RuntimeObject * __this /* static, unused */, Vector3_t597324871  ___origin0, Vector3_t597324871  ___direction1, RaycastHit_t385331216 * ___hitInfo2, float ___maxDistance3, int32_t ___layermask4, int32_t ___queryTriggerInteraction5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_Raycast_m1799019145 (RuntimeObject * __this /* static, unused */, Ray_t397193182  ___ray0, float ___maxDistance1, int32_t ___layerMask2, int32_t ___queryTriggerInteraction3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
extern "C"  Vector3_t597324871  Ray_get_origin_m3412796967 (Ray_t397193182 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
extern "C"  Vector3_t597324871  Ray_get_direction_m1496800563 (Ray_t397193182 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_Raycast_m1861206283 (RuntimeObject * __this /* static, unused */, Ray_t397193182  ___ray0, RaycastHit_t385331216 * ___hitInfo1, float ___maxDistance2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  RaycastHitU5BU5D_t317570481* Physics_RaycastAll_m4106126763 (RuntimeObject * __this /* static, unused */, Ray_t397193182  ___ray0, float ___maxDistance1, int32_t ___layerMask2, int32_t ___queryTriggerInteraction3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  RaycastHitU5BU5D_t317570481* Physics_RaycastAll_m1783691951 (RuntimeObject * __this /* static, unused */, Vector3_t597324871  ___origin0, Vector3_t597324871  ___direction1, float ___maxDistance2, int32_t ___layermask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  RaycastHitU5BU5D_t317570481* Physics_INTERNAL_CALL_RaycastAll_m564753056 (RuntimeObject * __this /* static, unused */, Vector3_t597324871 * ___origin0, Vector3_t597324871 * ___direction1, float ___maxDistance2, int32_t ___layermask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider[] UnityEngine.Physics::INTERNAL_CALL_OverlapSphere(UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  ColliderU5BU5D_t3010566026* Physics_INTERNAL_CALL_OverlapSphere_m1568544676 (RuntimeObject * __this /* static, unused */, Vector3_t597324871 * ___position0, float ___radius1, int32_t ___layerMask2, int32_t ___queryTriggerInteraction3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_INTERNAL_CALL_Internal_Raycast_m2539164973 (RuntimeObject * __this /* static, unused */, Vector3_t597324871 * ___origin0, Vector3_t597324871 * ___direction1, RaycastHit_t385331216 * ___hitInfo2, float ___maxDistance3, int32_t ___layermask4, int32_t ___queryTriggerInteraction5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_RaycastTest(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_INTERNAL_CALL_Internal_RaycastTest_m3071949216 (RuntimeObject * __this /* static, unused */, Vector3_t597324871 * ___origin0, Vector3_t597324871 * ___direction1, float ___maxDistance2, int32_t ___layermask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C"  Vector3_t597324871  RaycastHit_get_point_m2065479901 (RaycastHit_t385331216 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern "C"  Vector3_t597324871  RaycastHit_get_normal_m2537448628 (RaycastHit_t385331216 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.RaycastHit::get_distance()
extern "C"  float RaycastHit_get_distance_m1784794480 (RaycastHit_t385331216 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C"  Collider_t2510189163 * RaycastHit_get_collider_m3478677648 (RaycastHit_t385331216 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_get_velocity(UnityEngine.Vector3&)
extern "C"  void Rigidbody_INTERNAL_get_velocity_m318462437 (Rigidbody_t2190582126 * __this, Vector3_t597324871 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_set_velocity(UnityEngine.Vector3&)
extern "C"  void Rigidbody_INTERNAL_set_velocity_m4284068926 (Rigidbody_t2190582126 * __this, Vector3_t597324871 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_get_angularVelocity(UnityEngine.Vector3&)
extern "C"  void Rigidbody_INTERNAL_get_angularVelocity_m2733369892 (Rigidbody_t2190582126 * __this, Vector3_t597324871 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_set_angularVelocity(UnityEngine.Vector3&)
extern "C"  void Rigidbody_INTERNAL_set_angularVelocity_m1535292961 (Rigidbody_t2190582126 * __this, Vector3_t597324871 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_get_position(UnityEngine.Vector3&)
extern "C"  void Rigidbody_INTERNAL_get_position_m3602526171 (Rigidbody_t2190582126 * __this, Vector3_t597324871 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_set_position(UnityEngine.Vector3&)
extern "C"  void Rigidbody_INTERNAL_set_position_m3471670650 (Rigidbody_t2190582126 * __this, Vector3_t597324871 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_get_rotation(UnityEngine.Quaternion&)
extern "C"  void Rigidbody_INTERNAL_get_rotation_m2499832404 (Rigidbody_t2190582126 * __this, Quaternion_t3112193037 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_set_rotation(UnityEngine.Quaternion&)
extern "C"  void Rigidbody_INTERNAL_set_rotation_m2532518076 (Rigidbody_t2190582126 * __this, Quaternion_t3112193037 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_MovePosition(UnityEngine.Rigidbody,UnityEngine.Vector3&)
extern "C"  void Rigidbody_INTERNAL_CALL_MovePosition_m3476015502 (RuntimeObject * __this /* static, unused */, Rigidbody_t2190582126 * ___self0, Vector3_t597324871 * ___position1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_MoveRotation(UnityEngine.Rigidbody,UnityEngine.Quaternion&)
extern "C"  void Rigidbody_INTERNAL_CALL_MoveRotation_m1888990988 (RuntimeObject * __this /* static, unused */, Rigidbody_t2190582126 * ___self0, Quaternion_t3112193037 * ___rot1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.CollisionFlags UnityEngine.CharacterController::Move(UnityEngine.Vector3)
extern "C"  int32_t CharacterController_Move_m1001714688 (CharacterController_t2287536771 * __this, Vector3_t597324871  ___motion0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = CharacterController_INTERNAL_CALL_Move_m187758632(NULL /*static, unused*/, __this, (&___motion0), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.CollisionFlags UnityEngine.CharacterController::INTERNAL_CALL_Move(UnityEngine.CharacterController,UnityEngine.Vector3&)
extern "C"  int32_t CharacterController_INTERNAL_CALL_Move_m187758632 (RuntimeObject * __this /* static, unused */, CharacterController_t2287536771 * ___self0, Vector3_t597324871 * ___motion1, const RuntimeMethod* method)
{
	typedef int32_t (*CharacterController_INTERNAL_CALL_Move_m187758632_ftn) (CharacterController_t2287536771 *, Vector3_t597324871 *);
	static CharacterController_INTERNAL_CALL_Move_m187758632_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CharacterController_INTERNAL_CALL_Move_m187758632_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CharacterController::INTERNAL_CALL_Move(UnityEngine.CharacterController,UnityEngine.Vector3&)");
	int32_t retVal = _il2cpp_icall_func(___self0, ___motion1);
	return retVal;
}
// UnityEngine.Vector3 UnityEngine.CharacterController::get_velocity()
extern "C"  Vector3_t597324871  CharacterController_get_velocity_m2485048644 (CharacterController_t2287536771 * __this, const RuntimeMethod* method)
{
	Vector3_t597324871  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t597324871  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		CharacterController_INTERNAL_get_velocity_m4275058887(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t597324871  L_0 = V_0;
		V_1 = L_0;
		goto IL_0010;
	}

IL_0010:
	{
		Vector3_t597324871  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.CharacterController::INTERNAL_get_velocity(UnityEngine.Vector3&)
extern "C"  void CharacterController_INTERNAL_get_velocity_m4275058887 (CharacterController_t2287536771 * __this, Vector3_t597324871 * ___value0, const RuntimeMethod* method)
{
	typedef void (*CharacterController_INTERNAL_get_velocity_m4275058887_ftn) (CharacterController_t2287536771 *, Vector3_t597324871 *);
	static CharacterController_INTERNAL_get_velocity_m4275058887_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CharacterController_INTERNAL_get_velocity_m4275058887_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CharacterController::INTERNAL_get_velocity(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Collider::.ctor()
extern "C"  void Collider__ctor_m2559950985 (Collider_t2510189163 * __this, const RuntimeMethod* method)
{
	{
		Component__ctor_m1806458186(__this, /*hidden argument*/NULL);
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.Collision
extern "C" void Collision_t2956891687_marshal_pinvoke(const Collision_t2956891687& unmarshaled, Collision_t2956891687_marshaled_pinvoke& marshaled)
{
	Il2CppCodeGenException* ___m_Rigidbody_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Rigidbody' of type 'Collision': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Rigidbody_2Exception);
}
extern "C" void Collision_t2956891687_marshal_pinvoke_back(const Collision_t2956891687_marshaled_pinvoke& marshaled, Collision_t2956891687& unmarshaled)
{
	Il2CppCodeGenException* ___m_Rigidbody_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Rigidbody' of type 'Collision': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Rigidbody_2Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.Collision
extern "C" void Collision_t2956891687_marshal_pinvoke_cleanup(Collision_t2956891687_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Collision
extern "C" void Collision_t2956891687_marshal_com(const Collision_t2956891687& unmarshaled, Collision_t2956891687_marshaled_com& marshaled)
{
	Il2CppCodeGenException* ___m_Rigidbody_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Rigidbody' of type 'Collision': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Rigidbody_2Exception);
}
extern "C" void Collision_t2956891687_marshal_com_back(const Collision_t2956891687_marshaled_com& marshaled, Collision_t2956891687& unmarshaled)
{
	Il2CppCodeGenException* ___m_Rigidbody_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Rigidbody' of type 'Collision': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Rigidbody_2Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.Collision
extern "C" void Collision_t2956891687_marshal_com_cleanup(Collision_t2956891687_marshaled_com& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ControllerColliderHit
extern "C" void ControllerColliderHit_t1708203928_marshal_pinvoke(const ControllerColliderHit_t1708203928& unmarshaled, ControllerColliderHit_t1708203928_marshaled_pinvoke& marshaled)
{
	Il2CppCodeGenException* ___m_Controller_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Controller' of type 'ControllerColliderHit': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Controller_0Exception);
}
extern "C" void ControllerColliderHit_t1708203928_marshal_pinvoke_back(const ControllerColliderHit_t1708203928_marshaled_pinvoke& marshaled, ControllerColliderHit_t1708203928& unmarshaled)
{
	Il2CppCodeGenException* ___m_Controller_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Controller' of type 'ControllerColliderHit': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Controller_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.ControllerColliderHit
extern "C" void ControllerColliderHit_t1708203928_marshal_pinvoke_cleanup(ControllerColliderHit_t1708203928_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ControllerColliderHit
extern "C" void ControllerColliderHit_t1708203928_marshal_com(const ControllerColliderHit_t1708203928& unmarshaled, ControllerColliderHit_t1708203928_marshaled_com& marshaled)
{
	Il2CppCodeGenException* ___m_Controller_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Controller' of type 'ControllerColliderHit': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Controller_0Exception);
}
extern "C" void ControllerColliderHit_t1708203928_marshal_com_back(const ControllerColliderHit_t1708203928_marshaled_com& marshaled, ControllerColliderHit_t1708203928& unmarshaled)
{
	Il2CppCodeGenException* ___m_Controller_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Controller' of type 'ControllerColliderHit': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Controller_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.ControllerColliderHit
extern "C" void ControllerColliderHit_t1708203928_marshal_com_cleanup(ControllerColliderHit_t1708203928_marshaled_com& marshaled)
{
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
extern "C"  bool Physics_Raycast_m3223051719 (RuntimeObject * __this /* static, unused */, Vector3_t597324871  ___origin0, Vector3_t597324871  ___direction1, float ___maxDistance2, int32_t ___layerMask3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		V_0 = 0;
		Vector3_t597324871  L_0 = ___origin0;
		Vector3_t597324871  L_1 = ___direction1;
		float L_2 = ___maxDistance2;
		int32_t L_3 = ___layerMask3;
		int32_t L_4 = V_0;
		bool L_5 = Physics_Raycast_m3738972782(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		goto IL_0013;
	}

IL_0013:
	{
		bool L_6 = V_1;
		return L_6;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  bool Physics_Raycast_m3881306680 (RuntimeObject * __this /* static, unused */, Vector3_t597324871  ___origin0, Vector3_t597324871  ___direction1, float ___maxDistance2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		Vector3_t597324871  L_0 = ___origin0;
		Vector3_t597324871  L_1 = ___direction1;
		float L_2 = ___maxDistance2;
		int32_t L_3 = V_1;
		int32_t L_4 = V_0;
		bool L_5 = Physics_Raycast_m3738972782(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool Physics_Raycast_m1377946830 (RuntimeObject * __this /* static, unused */, Vector3_t597324871  ___origin0, Vector3_t597324871  ___direction1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	bool V_3 = false;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		V_2 = (std::numeric_limits<float>::infinity());
		Vector3_t597324871  L_0 = ___origin0;
		Vector3_t597324871  L_1 = ___direction1;
		float L_2 = V_2;
		int32_t L_3 = V_1;
		int32_t L_4 = V_0;
		bool L_5 = Physics_Raycast_m3738972782(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_3 = L_5;
		goto IL_001c;
	}

IL_001c:
	{
		bool L_6 = V_3;
		return L_6;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_Raycast_m3738972782 (RuntimeObject * __this /* static, unused */, Vector3_t597324871  ___origin0, Vector3_t597324871  ___direction1, float ___maxDistance2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector3_t597324871  L_0 = ___origin0;
		Vector3_t597324871  L_1 = ___direction1;
		float L_2 = ___maxDistance2;
		int32_t L_3 = ___layerMask3;
		int32_t L_4 = ___queryTriggerInteraction4;
		bool L_5 = Physics_Internal_RaycastTest_m636016028(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C"  bool Physics_Raycast_m3029732314 (RuntimeObject * __this /* static, unused */, Vector3_t597324871  ___origin0, Vector3_t597324871  ___direction1, RaycastHit_t385331216 * ___hitInfo2, float ___maxDistance3, int32_t ___layerMask4, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		V_0 = 0;
		Vector3_t597324871  L_0 = ___origin0;
		Vector3_t597324871  L_1 = ___direction1;
		RaycastHit_t385331216 * L_2 = ___hitInfo2;
		float L_3 = ___maxDistance3;
		int32_t L_4 = ___layerMask4;
		int32_t L_5 = V_0;
		bool L_6 = Physics_Raycast_m1147736206(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_7 = V_1;
		return L_7;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
extern "C"  bool Physics_Raycast_m3068614196 (RuntimeObject * __this /* static, unused */, Vector3_t597324871  ___origin0, Vector3_t597324871  ___direction1, RaycastHit_t385331216 * ___hitInfo2, float ___maxDistance3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		Vector3_t597324871  L_0 = ___origin0;
		Vector3_t597324871  L_1 = ___direction1;
		RaycastHit_t385331216 * L_2 = ___hitInfo2;
		float L_3 = ___maxDistance3;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		bool L_6 = Physics_Raycast_m1147736206(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		goto IL_0017;
	}

IL_0017:
	{
		bool L_7 = V_2;
		return L_7;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&)
extern "C"  bool Physics_Raycast_m836169697 (RuntimeObject * __this /* static, unused */, Vector3_t597324871  ___origin0, Vector3_t597324871  ___direction1, RaycastHit_t385331216 * ___hitInfo2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	bool V_3 = false;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		V_2 = (std::numeric_limits<float>::infinity());
		Vector3_t597324871  L_0 = ___origin0;
		Vector3_t597324871  L_1 = ___direction1;
		RaycastHit_t385331216 * L_2 = ___hitInfo2;
		float L_3 = V_2;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		bool L_6 = Physics_Raycast_m1147736206(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_3 = L_6;
		goto IL_001d;
	}

IL_001d:
	{
		bool L_7 = V_3;
		return L_7;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_Raycast_m1147736206 (RuntimeObject * __this /* static, unused */, Vector3_t597324871  ___origin0, Vector3_t597324871  ___direction1, RaycastHit_t385331216 * ___hitInfo2, float ___maxDistance3, int32_t ___layerMask4, int32_t ___queryTriggerInteraction5, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector3_t597324871  L_0 = ___origin0;
		Vector3_t597324871  L_1 = ___direction1;
		RaycastHit_t385331216 * L_2 = ___hitInfo2;
		float L_3 = ___maxDistance3;
		int32_t L_4 = ___layerMask4;
		int32_t L_5 = ___queryTriggerInteraction5;
		bool L_6 = Physics_Internal_Raycast_m163630568(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,System.Single,System.Int32)
extern "C"  bool Physics_Raycast_m182042007 (RuntimeObject * __this /* static, unused */, Ray_t397193182  ___ray0, float ___maxDistance1, int32_t ___layerMask2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		V_0 = 0;
		Ray_t397193182  L_0 = ___ray0;
		float L_1 = ___maxDistance1;
		int32_t L_2 = ___layerMask2;
		int32_t L_3 = V_0;
		bool L_4 = Physics_Raycast_m1799019145(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,System.Single)
extern "C"  bool Physics_Raycast_m2009509719 (RuntimeObject * __this /* static, unused */, Ray_t397193182  ___ray0, float ___maxDistance1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		Ray_t397193182  L_0 = ___ray0;
		float L_1 = ___maxDistance1;
		int32_t L_2 = V_1;
		int32_t L_3 = V_0;
		bool L_4 = Physics_Raycast_m1799019145(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_5 = V_2;
		return L_5;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray)
extern "C"  bool Physics_Raycast_m2695551968 (RuntimeObject * __this /* static, unused */, Ray_t397193182  ___ray0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	bool V_3 = false;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		V_2 = (std::numeric_limits<float>::infinity());
		Ray_t397193182  L_0 = ___ray0;
		float L_1 = V_2;
		int32_t L_2 = V_1;
		int32_t L_3 = V_0;
		bool L_4 = Physics_Raycast_m1799019145(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_3 = L_4;
		goto IL_001b;
	}

IL_001b:
	{
		bool L_5 = V_3;
		return L_5;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_Raycast_m1799019145 (RuntimeObject * __this /* static, unused */, Ray_t397193182  ___ray0, float ___maxDistance1, int32_t ___layerMask2, int32_t ___queryTriggerInteraction3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector3_t597324871  L_0 = Ray_get_origin_m3412796967((&___ray0), /*hidden argument*/NULL);
		Vector3_t597324871  L_1 = Ray_get_direction_m1496800563((&___ray0), /*hidden argument*/NULL);
		float L_2 = ___maxDistance1;
		int32_t L_3 = ___layerMask2;
		int32_t L_4 = ___queryTriggerInteraction3;
		bool L_5 = Physics_Raycast_m3738972782(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_001d;
	}

IL_001d:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C"  bool Physics_Raycast_m3011814154 (RuntimeObject * __this /* static, unused */, Ray_t397193182  ___ray0, RaycastHit_t385331216 * ___hitInfo1, float ___maxDistance2, int32_t ___layerMask3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		V_0 = 0;
		Ray_t397193182  L_0 = ___ray0;
		RaycastHit_t385331216 * L_1 = ___hitInfo1;
		float L_2 = ___maxDistance2;
		int32_t L_3 = ___layerMask3;
		int32_t L_4 = V_0;
		bool L_5 = Physics_Raycast_m1861206283(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		goto IL_0013;
	}

IL_0013:
	{
		bool L_6 = V_1;
		return L_6;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
extern "C"  bool Physics_Raycast_m3450118966 (RuntimeObject * __this /* static, unused */, Ray_t397193182  ___ray0, RaycastHit_t385331216 * ___hitInfo1, float ___maxDistance2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		Ray_t397193182  L_0 = ___ray0;
		RaycastHit_t385331216 * L_1 = ___hitInfo1;
		float L_2 = ___maxDistance2;
		int32_t L_3 = V_1;
		int32_t L_4 = V_0;
		bool L_5 = Physics_Raycast_m1861206283(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
extern "C"  bool Physics_Raycast_m3281303008 (RuntimeObject * __this /* static, unused */, Ray_t397193182  ___ray0, RaycastHit_t385331216 * ___hitInfo1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	bool V_3 = false;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		V_2 = (std::numeric_limits<float>::infinity());
		Ray_t397193182  L_0 = ___ray0;
		RaycastHit_t385331216 * L_1 = ___hitInfo1;
		float L_2 = V_2;
		int32_t L_3 = V_1;
		int32_t L_4 = V_0;
		bool L_5 = Physics_Raycast_m1861206283(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_3 = L_5;
		goto IL_001c;
	}

IL_001c:
	{
		bool L_6 = V_3;
		return L_6;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_Raycast_m1861206283 (RuntimeObject * __this /* static, unused */, Ray_t397193182  ___ray0, RaycastHit_t385331216 * ___hitInfo1, float ___maxDistance2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector3_t597324871  L_0 = Ray_get_origin_m3412796967((&___ray0), /*hidden argument*/NULL);
		Vector3_t597324871  L_1 = Ray_get_direction_m1496800563((&___ray0), /*hidden argument*/NULL);
		RaycastHit_t385331216 * L_2 = ___hitInfo1;
		float L_3 = ___maxDistance2;
		int32_t L_4 = ___layerMask3;
		int32_t L_5 = ___queryTriggerInteraction4;
		bool L_6 = Physics_Raycast_m1147736206(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001f;
	}

IL_001f:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32)
extern "C"  RaycastHitU5BU5D_t317570481* Physics_RaycastAll_m2282989492 (RuntimeObject * __this /* static, unused */, Ray_t397193182  ___ray0, float ___maxDistance1, int32_t ___layerMask2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RaycastHitU5BU5D_t317570481* V_1 = NULL;
	{
		V_0 = 0;
		Ray_t397193182  L_0 = ___ray0;
		float L_1 = ___maxDistance1;
		int32_t L_2 = ___layerMask2;
		int32_t L_3 = V_0;
		RaycastHitU5BU5D_t317570481* L_4 = Physics_RaycastAll_m4106126763(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		RaycastHitU5BU5D_t317570481* L_5 = V_1;
		return L_5;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single)
extern "C"  RaycastHitU5BU5D_t317570481* Physics_RaycastAll_m3318289874 (RuntimeObject * __this /* static, unused */, Ray_t397193182  ___ray0, float ___maxDistance1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RaycastHitU5BU5D_t317570481* V_2 = NULL;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		Ray_t397193182  L_0 = ___ray0;
		float L_1 = ___maxDistance1;
		int32_t L_2 = V_1;
		int32_t L_3 = V_0;
		RaycastHitU5BU5D_t317570481* L_4 = Physics_RaycastAll_m4106126763(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		RaycastHitU5BU5D_t317570481* L_5 = V_2;
		return L_5;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray)
extern "C"  RaycastHitU5BU5D_t317570481* Physics_RaycastAll_m2495259239 (RuntimeObject * __this /* static, unused */, Ray_t397193182  ___ray0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	RaycastHitU5BU5D_t317570481* V_3 = NULL;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		V_2 = (std::numeric_limits<float>::infinity());
		Ray_t397193182  L_0 = ___ray0;
		float L_1 = V_2;
		int32_t L_2 = V_1;
		int32_t L_3 = V_0;
		RaycastHitU5BU5D_t317570481* L_4 = Physics_RaycastAll_m4106126763(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_3 = L_4;
		goto IL_001b;
	}

IL_001b:
	{
		RaycastHitU5BU5D_t317570481* L_5 = V_3;
		return L_5;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  RaycastHitU5BU5D_t317570481* Physics_RaycastAll_m4106126763 (RuntimeObject * __this /* static, unused */, Ray_t397193182  ___ray0, float ___maxDistance1, int32_t ___layerMask2, int32_t ___queryTriggerInteraction3, const RuntimeMethod* method)
{
	RaycastHitU5BU5D_t317570481* V_0 = NULL;
	{
		Vector3_t597324871  L_0 = Ray_get_origin_m3412796967((&___ray0), /*hidden argument*/NULL);
		Vector3_t597324871  L_1 = Ray_get_direction_m1496800563((&___ray0), /*hidden argument*/NULL);
		float L_2 = ___maxDistance1;
		int32_t L_3 = ___layerMask2;
		int32_t L_4 = ___queryTriggerInteraction3;
		RaycastHitU5BU5D_t317570481* L_5 = Physics_RaycastAll_m1783691951(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_001d;
	}

IL_001d:
	{
		RaycastHitU5BU5D_t317570481* L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  RaycastHitU5BU5D_t317570481* Physics_RaycastAll_m1783691951 (RuntimeObject * __this /* static, unused */, Vector3_t597324871  ___origin0, Vector3_t597324871  ___direction1, float ___maxDistance2, int32_t ___layermask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method)
{
	RaycastHitU5BU5D_t317570481* V_0 = NULL;
	{
		float L_0 = ___maxDistance2;
		int32_t L_1 = ___layermask3;
		int32_t L_2 = ___queryTriggerInteraction4;
		RaycastHitU5BU5D_t317570481* L_3 = Physics_INTERNAL_CALL_RaycastAll_m564753056(NULL /*static, unused*/, (&___origin0), (&___direction1), L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		RaycastHitU5BU5D_t317570481* L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
extern "C"  RaycastHitU5BU5D_t317570481* Physics_RaycastAll_m2774871889 (RuntimeObject * __this /* static, unused */, Vector3_t597324871  ___origin0, Vector3_t597324871  ___direction1, float ___maxDistance2, int32_t ___layermask3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RaycastHitU5BU5D_t317570481* V_1 = NULL;
	{
		V_0 = 0;
		float L_0 = ___maxDistance2;
		int32_t L_1 = ___layermask3;
		int32_t L_2 = V_0;
		RaycastHitU5BU5D_t317570481* L_3 = Physics_INTERNAL_CALL_RaycastAll_m564753056(NULL /*static, unused*/, (&___origin0), (&___direction1), L_0, L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0015;
	}

IL_0015:
	{
		RaycastHitU5BU5D_t317570481* L_4 = V_1;
		return L_4;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  RaycastHitU5BU5D_t317570481* Physics_RaycastAll_m2729777559 (RuntimeObject * __this /* static, unused */, Vector3_t597324871  ___origin0, Vector3_t597324871  ___direction1, float ___maxDistance2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RaycastHitU5BU5D_t317570481* V_2 = NULL;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		float L_0 = ___maxDistance2;
		int32_t L_1 = V_1;
		int32_t L_2 = V_0;
		RaycastHitU5BU5D_t317570481* L_3 = Physics_INTERNAL_CALL_RaycastAll_m564753056(NULL /*static, unused*/, (&___origin0), (&___direction1), L_0, L_1, L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		goto IL_0018;
	}

IL_0018:
	{
		RaycastHitU5BU5D_t317570481* L_4 = V_2;
		return L_4;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  RaycastHitU5BU5D_t317570481* Physics_RaycastAll_m956431473 (RuntimeObject * __this /* static, unused */, Vector3_t597324871  ___origin0, Vector3_t597324871  ___direction1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	RaycastHitU5BU5D_t317570481* V_3 = NULL;
	{
		V_0 = 0;
		V_1 = ((int32_t)-5);
		V_2 = (std::numeric_limits<float>::infinity());
		float L_0 = V_2;
		int32_t L_1 = V_1;
		int32_t L_2 = V_0;
		RaycastHitU5BU5D_t317570481* L_3 = Physics_INTERNAL_CALL_RaycastAll_m564753056(NULL /*static, unused*/, (&___origin0), (&___direction1), L_0, L_1, L_2, /*hidden argument*/NULL);
		V_3 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		RaycastHitU5BU5D_t317570481* L_4 = V_3;
		return L_4;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  RaycastHitU5BU5D_t317570481* Physics_INTERNAL_CALL_RaycastAll_m564753056 (RuntimeObject * __this /* static, unused */, Vector3_t597324871 * ___origin0, Vector3_t597324871 * ___direction1, float ___maxDistance2, int32_t ___layermask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method)
{
	typedef RaycastHitU5BU5D_t317570481* (*Physics_INTERNAL_CALL_RaycastAll_m564753056_ftn) (Vector3_t597324871 *, Vector3_t597324871 *, float, int32_t, int32_t);
	static Physics_INTERNAL_CALL_RaycastAll_m564753056_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_RaycastAll_m564753056_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)");
	RaycastHitU5BU5D_t317570481* retVal = _il2cpp_icall_func(___origin0, ___direction1, ___maxDistance2, ___layermask3, ___queryTriggerInteraction4);
	return retVal;
}
// UnityEngine.Collider[] UnityEngine.Physics::OverlapSphere(UnityEngine.Vector3,System.Single)
extern "C"  ColliderU5BU5D_t3010566026* Physics_OverlapSphere_m3791494143 (RuntimeObject * __this /* static, unused */, Vector3_t597324871  ___position0, float ___radius1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ColliderU5BU5D_t3010566026* V_2 = NULL;
	{
		V_0 = 0;
		V_1 = (-1);
		float L_0 = ___radius1;
		int32_t L_1 = V_1;
		int32_t L_2 = V_0;
		ColliderU5BU5D_t3010566026* L_3 = Physics_INTERNAL_CALL_OverlapSphere_m1568544676(NULL /*static, unused*/, (&___position0), L_0, L_1, L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		goto IL_0015;
	}

IL_0015:
	{
		ColliderU5BU5D_t3010566026* L_4 = V_2;
		return L_4;
	}
}
// UnityEngine.Collider[] UnityEngine.Physics::INTERNAL_CALL_OverlapSphere(UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  ColliderU5BU5D_t3010566026* Physics_INTERNAL_CALL_OverlapSphere_m1568544676 (RuntimeObject * __this /* static, unused */, Vector3_t597324871 * ___position0, float ___radius1, int32_t ___layerMask2, int32_t ___queryTriggerInteraction3, const RuntimeMethod* method)
{
	typedef ColliderU5BU5D_t3010566026* (*Physics_INTERNAL_CALL_OverlapSphere_m1568544676_ftn) (Vector3_t597324871 *, float, int32_t, int32_t);
	static Physics_INTERNAL_CALL_OverlapSphere_m1568544676_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_OverlapSphere_m1568544676_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_OverlapSphere(UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)");
	ColliderU5BU5D_t3010566026* retVal = _il2cpp_icall_func(___position0, ___radius1, ___layerMask2, ___queryTriggerInteraction3);
	return retVal;
}
// System.Boolean UnityEngine.Physics::Internal_Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_Internal_Raycast_m163630568 (RuntimeObject * __this /* static, unused */, Vector3_t597324871  ___origin0, Vector3_t597324871  ___direction1, RaycastHit_t385331216 * ___hitInfo2, float ___maxDistance3, int32_t ___layermask4, int32_t ___queryTriggerInteraction5, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		RaycastHit_t385331216 * L_0 = ___hitInfo2;
		float L_1 = ___maxDistance3;
		int32_t L_2 = ___layermask4;
		int32_t L_3 = ___queryTriggerInteraction5;
		bool L_4 = Physics_INTERNAL_CALL_Internal_Raycast_m2539164973(NULL /*static, unused*/, (&___origin0), (&___direction1), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_INTERNAL_CALL_Internal_Raycast_m2539164973 (RuntimeObject * __this /* static, unused */, Vector3_t597324871 * ___origin0, Vector3_t597324871 * ___direction1, RaycastHit_t385331216 * ___hitInfo2, float ___maxDistance3, int32_t ___layermask4, int32_t ___queryTriggerInteraction5, const RuntimeMethod* method)
{
	typedef bool (*Physics_INTERNAL_CALL_Internal_Raycast_m2539164973_ftn) (Vector3_t597324871 *, Vector3_t597324871 *, RaycastHit_t385331216 *, float, int32_t, int32_t);
	static Physics_INTERNAL_CALL_Internal_Raycast_m2539164973_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_Internal_Raycast_m2539164973_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)");
	bool retVal = _il2cpp_icall_func(___origin0, ___direction1, ___hitInfo2, ___maxDistance3, ___layermask4, ___queryTriggerInteraction5);
	return retVal;
}
// System.Boolean UnityEngine.Physics::Internal_RaycastTest(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_Internal_RaycastTest_m636016028 (RuntimeObject * __this /* static, unused */, Vector3_t597324871  ___origin0, Vector3_t597324871  ___direction1, float ___maxDistance2, int32_t ___layermask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		float L_0 = ___maxDistance2;
		int32_t L_1 = ___layermask3;
		int32_t L_2 = ___queryTriggerInteraction4;
		bool L_3 = Physics_INTERNAL_CALL_Internal_RaycastTest_m3071949216(NULL /*static, unused*/, (&___origin0), (&___direction1), L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_RaycastTest(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_INTERNAL_CALL_Internal_RaycastTest_m3071949216 (RuntimeObject * __this /* static, unused */, Vector3_t597324871 * ___origin0, Vector3_t597324871 * ___direction1, float ___maxDistance2, int32_t ___layermask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method)
{
	typedef bool (*Physics_INTERNAL_CALL_Internal_RaycastTest_m3071949216_ftn) (Vector3_t597324871 *, Vector3_t597324871 *, float, int32_t, int32_t);
	static Physics_INTERNAL_CALL_Internal_RaycastTest_m3071949216_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_Internal_RaycastTest_m3071949216_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_Internal_RaycastTest(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)");
	bool retVal = _il2cpp_icall_func(___origin0, ___direction1, ___maxDistance2, ___layermask3, ___queryTriggerInteraction4);
	return retVal;
}
// Conversion methods for marshalling of: UnityEngine.RaycastHit
extern "C" void RaycastHit_t385331216_marshal_pinvoke(const RaycastHit_t385331216& unmarshaled, RaycastHit_t385331216_marshaled_pinvoke& marshaled)
{
	Il2CppCodeGenException* ___m_Collider_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Collider' of type 'RaycastHit': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Collider_5Exception);
}
extern "C" void RaycastHit_t385331216_marshal_pinvoke_back(const RaycastHit_t385331216_marshaled_pinvoke& marshaled, RaycastHit_t385331216& unmarshaled)
{
	Il2CppCodeGenException* ___m_Collider_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Collider' of type 'RaycastHit': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Collider_5Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.RaycastHit
extern "C" void RaycastHit_t385331216_marshal_pinvoke_cleanup(RaycastHit_t385331216_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.RaycastHit
extern "C" void RaycastHit_t385331216_marshal_com(const RaycastHit_t385331216& unmarshaled, RaycastHit_t385331216_marshaled_com& marshaled)
{
	Il2CppCodeGenException* ___m_Collider_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Collider' of type 'RaycastHit': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Collider_5Exception);
}
extern "C" void RaycastHit_t385331216_marshal_com_back(const RaycastHit_t385331216_marshaled_com& marshaled, RaycastHit_t385331216& unmarshaled)
{
	Il2CppCodeGenException* ___m_Collider_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Collider' of type 'RaycastHit': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Collider_5Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.RaycastHit
extern "C" void RaycastHit_t385331216_marshal_com_cleanup(RaycastHit_t385331216_marshaled_com& marshaled)
{
}
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C"  Vector3_t597324871  RaycastHit_get_point_m2065479901 (RaycastHit_t385331216 * __this, const RuntimeMethod* method)
{
	Vector3_t597324871  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector3_t597324871  L_0 = __this->get_m_Point_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Vector3_t597324871  L_1 = V_0;
		return L_1;
	}
}
extern "C"  Vector3_t597324871  RaycastHit_get_point_m2065479901_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	RaycastHit_t385331216 * _thisAdjusted = reinterpret_cast<RaycastHit_t385331216 *>(__this + 1);
	return RaycastHit_get_point_m2065479901(_thisAdjusted, method);
}
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern "C"  Vector3_t597324871  RaycastHit_get_normal_m2537448628 (RaycastHit_t385331216 * __this, const RuntimeMethod* method)
{
	Vector3_t597324871  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector3_t597324871  L_0 = __this->get_m_Normal_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Vector3_t597324871  L_1 = V_0;
		return L_1;
	}
}
extern "C"  Vector3_t597324871  RaycastHit_get_normal_m2537448628_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	RaycastHit_t385331216 * _thisAdjusted = reinterpret_cast<RaycastHit_t385331216 *>(__this + 1);
	return RaycastHit_get_normal_m2537448628(_thisAdjusted, method);
}
// System.Single UnityEngine.RaycastHit::get_distance()
extern "C"  float RaycastHit_get_distance_m1784794480 (RaycastHit_t385331216 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_Distance_3();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
extern "C"  float RaycastHit_get_distance_m1784794480_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	RaycastHit_t385331216 * _thisAdjusted = reinterpret_cast<RaycastHit_t385331216 *>(__this + 1);
	return RaycastHit_get_distance_m1784794480(_thisAdjusted, method);
}
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C"  Collider_t2510189163 * RaycastHit_get_collider_m3478677648 (RaycastHit_t385331216 * __this, const RuntimeMethod* method)
{
	Collider_t2510189163 * V_0 = NULL;
	{
		Collider_t2510189163 * L_0 = __this->get_m_Collider_5();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Collider_t2510189163 * L_1 = V_0;
		return L_1;
	}
}
extern "C"  Collider_t2510189163 * RaycastHit_get_collider_m3478677648_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	RaycastHit_t385331216 * _thisAdjusted = reinterpret_cast<RaycastHit_t385331216 *>(__this + 1);
	return RaycastHit_get_collider_m3478677648(_thisAdjusted, method);
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
extern "C"  Vector3_t597324871  Rigidbody_get_velocity_m2076226959 (Rigidbody_t2190582126 * __this, const RuntimeMethod* method)
{
	Vector3_t597324871  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t597324871  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Rigidbody_INTERNAL_get_velocity_m318462437(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t597324871  L_0 = V_0;
		V_1 = L_0;
		goto IL_0010;
	}

IL_0010:
	{
		Vector3_t597324871  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
extern "C"  void Rigidbody_set_velocity_m3082851070 (Rigidbody_t2190582126 * __this, Vector3_t597324871  ___value0, const RuntimeMethod* method)
{
	{
		Rigidbody_INTERNAL_set_velocity_m4284068926(__this, (&___value0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_get_velocity(UnityEngine.Vector3&)
extern "C"  void Rigidbody_INTERNAL_get_velocity_m318462437 (Rigidbody_t2190582126 * __this, Vector3_t597324871 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_INTERNAL_get_velocity_m318462437_ftn) (Rigidbody_t2190582126 *, Vector3_t597324871 *);
	static Rigidbody_INTERNAL_get_velocity_m318462437_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_get_velocity_m318462437_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_get_velocity(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Rigidbody::INTERNAL_set_velocity(UnityEngine.Vector3&)
extern "C"  void Rigidbody_INTERNAL_set_velocity_m4284068926 (Rigidbody_t2190582126 * __this, Vector3_t597324871 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_INTERNAL_set_velocity_m4284068926_ftn) (Rigidbody_t2190582126 *, Vector3_t597324871 *);
	static Rigidbody_INTERNAL_set_velocity_m4284068926_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_set_velocity_m4284068926_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_set_velocity(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_angularVelocity()
extern "C"  Vector3_t597324871  Rigidbody_get_angularVelocity_m1051874386 (Rigidbody_t2190582126 * __this, const RuntimeMethod* method)
{
	Vector3_t597324871  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t597324871  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Rigidbody_INTERNAL_get_angularVelocity_m2733369892(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t597324871  L_0 = V_0;
		V_1 = L_0;
		goto IL_0010;
	}

IL_0010:
	{
		Vector3_t597324871  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Rigidbody::set_angularVelocity(UnityEngine.Vector3)
extern "C"  void Rigidbody_set_angularVelocity_m688503301 (Rigidbody_t2190582126 * __this, Vector3_t597324871  ___value0, const RuntimeMethod* method)
{
	{
		Rigidbody_INTERNAL_set_angularVelocity_m1535292961(__this, (&___value0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_get_angularVelocity(UnityEngine.Vector3&)
extern "C"  void Rigidbody_INTERNAL_get_angularVelocity_m2733369892 (Rigidbody_t2190582126 * __this, Vector3_t597324871 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_INTERNAL_get_angularVelocity_m2733369892_ftn) (Rigidbody_t2190582126 *, Vector3_t597324871 *);
	static Rigidbody_INTERNAL_get_angularVelocity_m2733369892_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_get_angularVelocity_m2733369892_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_get_angularVelocity(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Rigidbody::INTERNAL_set_angularVelocity(UnityEngine.Vector3&)
extern "C"  void Rigidbody_INTERNAL_set_angularVelocity_m1535292961 (Rigidbody_t2190582126 * __this, Vector3_t597324871 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_INTERNAL_set_angularVelocity_m1535292961_ftn) (Rigidbody_t2190582126 *, Vector3_t597324871 *);
	static Rigidbody_INTERNAL_set_angularVelocity_m1535292961_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_set_angularVelocity_m1535292961_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_set_angularVelocity(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_position()
extern "C"  Vector3_t597324871  Rigidbody_get_position_m2210330735 (Rigidbody_t2190582126 * __this, const RuntimeMethod* method)
{
	Vector3_t597324871  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t597324871  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Rigidbody_INTERNAL_get_position_m3602526171(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t597324871  L_0 = V_0;
		V_1 = L_0;
		goto IL_0010;
	}

IL_0010:
	{
		Vector3_t597324871  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Rigidbody::set_position(UnityEngine.Vector3)
extern "C"  void Rigidbody_set_position_m1044745327 (Rigidbody_t2190582126 * __this, Vector3_t597324871  ___value0, const RuntimeMethod* method)
{
	{
		Rigidbody_INTERNAL_set_position_m3471670650(__this, (&___value0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_get_position(UnityEngine.Vector3&)
extern "C"  void Rigidbody_INTERNAL_get_position_m3602526171 (Rigidbody_t2190582126 * __this, Vector3_t597324871 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_INTERNAL_get_position_m3602526171_ftn) (Rigidbody_t2190582126 *, Vector3_t597324871 *);
	static Rigidbody_INTERNAL_get_position_m3602526171_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_get_position_m3602526171_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_get_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Rigidbody::INTERNAL_set_position(UnityEngine.Vector3&)
extern "C"  void Rigidbody_INTERNAL_set_position_m3471670650 (Rigidbody_t2190582126 * __this, Vector3_t597324871 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_INTERNAL_set_position_m3471670650_ftn) (Rigidbody_t2190582126 *, Vector3_t597324871 *);
	static Rigidbody_INTERNAL_set_position_m3471670650_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_set_position_m3471670650_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_set_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Quaternion UnityEngine.Rigidbody::get_rotation()
extern "C"  Quaternion_t3112193037  Rigidbody_get_rotation_m1854683570 (Rigidbody_t2190582126 * __this, const RuntimeMethod* method)
{
	Quaternion_t3112193037  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Quaternion_t3112193037  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Rigidbody_INTERNAL_get_rotation_m2499832404(__this, (&V_0), /*hidden argument*/NULL);
		Quaternion_t3112193037  L_0 = V_0;
		V_1 = L_0;
		goto IL_0010;
	}

IL_0010:
	{
		Quaternion_t3112193037  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Rigidbody::set_rotation(UnityEngine.Quaternion)
extern "C"  void Rigidbody_set_rotation_m2126041865 (Rigidbody_t2190582126 * __this, Quaternion_t3112193037  ___value0, const RuntimeMethod* method)
{
	{
		Rigidbody_INTERNAL_set_rotation_m2532518076(__this, (&___value0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_get_rotation(UnityEngine.Quaternion&)
extern "C"  void Rigidbody_INTERNAL_get_rotation_m2499832404 (Rigidbody_t2190582126 * __this, Quaternion_t3112193037 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_INTERNAL_get_rotation_m2499832404_ftn) (Rigidbody_t2190582126 *, Quaternion_t3112193037 *);
	static Rigidbody_INTERNAL_get_rotation_m2499832404_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_get_rotation_m2499832404_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_get_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Rigidbody::INTERNAL_set_rotation(UnityEngine.Quaternion&)
extern "C"  void Rigidbody_INTERNAL_set_rotation_m2532518076 (Rigidbody_t2190582126 * __this, Quaternion_t3112193037 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_INTERNAL_set_rotation_m2532518076_ftn) (Rigidbody_t2190582126 *, Quaternion_t3112193037 *);
	static Rigidbody_INTERNAL_set_rotation_m2532518076_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_set_rotation_m2532518076_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_set_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Rigidbody::MovePosition(UnityEngine.Vector3)
extern "C"  void Rigidbody_MovePosition_m857962330 (Rigidbody_t2190582126 * __this, Vector3_t597324871  ___position0, const RuntimeMethod* method)
{
	{
		Rigidbody_INTERNAL_CALL_MovePosition_m3476015502(NULL /*static, unused*/, __this, (&___position0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_MovePosition(UnityEngine.Rigidbody,UnityEngine.Vector3&)
extern "C"  void Rigidbody_INTERNAL_CALL_MovePosition_m3476015502 (RuntimeObject * __this /* static, unused */, Rigidbody_t2190582126 * ___self0, Vector3_t597324871 * ___position1, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_INTERNAL_CALL_MovePosition_m3476015502_ftn) (Rigidbody_t2190582126 *, Vector3_t597324871 *);
	static Rigidbody_INTERNAL_CALL_MovePosition_m3476015502_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_CALL_MovePosition_m3476015502_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_CALL_MovePosition(UnityEngine.Rigidbody,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___self0, ___position1);
}
// System.Void UnityEngine.Rigidbody::MoveRotation(UnityEngine.Quaternion)
extern "C"  void Rigidbody_MoveRotation_m2894315450 (Rigidbody_t2190582126 * __this, Quaternion_t3112193037  ___rot0, const RuntimeMethod* method)
{
	{
		Rigidbody_INTERNAL_CALL_MoveRotation_m1888990988(NULL /*static, unused*/, __this, (&___rot0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_MoveRotation(UnityEngine.Rigidbody,UnityEngine.Quaternion&)
extern "C"  void Rigidbody_INTERNAL_CALL_MoveRotation_m1888990988 (RuntimeObject * __this /* static, unused */, Rigidbody_t2190582126 * ___self0, Quaternion_t3112193037 * ___rot1, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_INTERNAL_CALL_MoveRotation_m1888990988_ftn) (Rigidbody_t2190582126 *, Quaternion_t3112193037 *);
	static Rigidbody_INTERNAL_CALL_MoveRotation_m1888990988_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_CALL_MoveRotation_m1888990988_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_CALL_MoveRotation(UnityEngine.Rigidbody,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(___self0, ___rot1);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
