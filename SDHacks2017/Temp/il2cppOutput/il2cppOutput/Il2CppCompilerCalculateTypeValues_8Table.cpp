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

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.String
struct String_t;
// System.IO.TextWriter
struct TextWriter_t2312127179;
// System.IO.TextReader
struct TextReader_t2673594362;
// System.Text.Encoding
struct Encoding_t3968504285;
// System.Boolean[]
struct BooleanU5BU5D_t4009053696;
// System.Type
struct Type_t;
// System.Delegate
struct Delegate_t3136160981;
// System.Threading.Thread
struct Thread_t553919686;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t3188828065;
// System.Char[]
struct CharU5BU5D_t3118480893;
// System.UInt64
struct UInt64_t2021233695;
// System.Int32
struct Int32_t2680619739;
// System.Char
struct Char_t3126326452;
// System.Int64
struct Int64_t2089949512;
// System.OperatingSystem
struct OperatingSystem_t4256499369;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t3198151032;
// System.AttributeUsageAttribute
struct AttributeUsageAttribute_t2879905124;
// System.Reflection.Assembly
struct Assembly_t2046867000;
// System.Type[]
struct TypeU5BU5D_t3623644370;
// System.Collections.SortedList
struct SortedList_t3721915040;
// System.IntPtr[]
struct IntPtrU5BU5D_t293399462;
// System.Collections.IDictionary
struct IDictionary_t764412979;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2359731826;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2366981949;
// System.Threading.Timer/Scheduler
struct Scheduler_t3261027599;
// System.Threading.TimerCallback
struct TimerCallback_t3887909300;
// System.String[]
struct StringU5BU5D_t626887548;
// System.Collections.Hashtable
struct Hashtable_t2876210346;
// System.MonoEnumInfo/SByteComparer
struct SByteComparer_t2289762869;
// System.MonoEnumInfo/ShortComparer
struct ShortComparer_t2165764877;
// System.MonoEnumInfo/IntComparer
struct IntComparer_t2697796556;
// System.MonoEnumInfo/LongComparer
struct LongComparer_t1935479835;
// System.Void
struct Void_t3013587868;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t3677400074;
// System.Threading.WaitHandle
struct WaitHandle_t3767532909;
// System.Threading.WaitOrTimerCallback
struct WaitOrTimerCallback_t3740787230;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t2315127291;
// System.Threading.ExecutionContext
struct ExecutionContext_t202972378;
// System.Object[]
struct ObjectU5BU5D_t791365558;
// System.MulticastDelegate
struct MulticastDelegate_t3203678551;
// System.Security.Principal.IPrincipal
struct IPrincipal_t2329088827;
// System.Security.Policy.Evidence
struct Evidence_t1489258759;
// System.Security.PermissionSet
struct PermissionSet_t1789701757;
// System.AppDomainManager
struct AppDomainManager_t1322683753;
// System.ActivationContext
struct ActivationContext_t2851808966;
// System.ApplicationIdentity
struct ApplicationIdentity_t4137633900;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t1432153386;
// System.ResolveEventHandler
struct ResolveEventHandler_t3576160498;
// System.EventHandler
struct EventHandler_t1739171887;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t2259281728;
// System.Runtime.Hosting.ActivationArguments
struct ActivationArguments_t3237249187;
// System.AppDomainInitializer
struct AppDomainInitializer_t2374693748;
// System.Security.Policy.ApplicationTrust
struct ApplicationTrust_t3644315908;
// System.Security.SecurityElement
struct SecurityElement_t81532998;
// System.Byte[]
struct ByteU5BU5D_t532980522;
// System.Reflection.MemberFilter
struct MemberFilter_t2512445373;
// System.Int32[]
struct Int32U5BU5D_t1558972250;
// System.Version
struct Version_t2274984160;
// System.MonoTypeInfo
struct MonoTypeInfo_t3353572741;




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
#ifndef BUFFER_T4059497384_H
#define BUFFER_T4059497384_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Buffer
struct  Buffer_t4059497384  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUFFER_T4059497384_H
#ifndef CHARENUMERATOR_T3060996705_H
#define CHARENUMERATOR_T3060996705_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CharEnumerator
struct  CharEnumerator_t3060996705  : public RuntimeObject
{
public:
	// System.String System.CharEnumerator::str
	String_t* ___str_0;
	// System.Int32 System.CharEnumerator::index
	int32_t ___index_1;
	// System.Int32 System.CharEnumerator::length
	int32_t ___length_2;

public:
	inline static int32_t get_offset_of_str_0() { return static_cast<int32_t>(offsetof(CharEnumerator_t3060996705, ___str_0)); }
	inline String_t* get_str_0() const { return ___str_0; }
	inline String_t** get_address_of_str_0() { return &___str_0; }
	inline void set_str_0(String_t* value)
	{
		___str_0 = value;
		Il2CppCodeGenWriteBarrier((&___str_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(CharEnumerator_t3060996705, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_length_2() { return static_cast<int32_t>(offsetof(CharEnumerator_t3060996705, ___length_2)); }
	inline int32_t get_length_2() const { return ___length_2; }
	inline int32_t* get_address_of_length_2() { return &___length_2; }
	inline void set_length_2(int32_t value)
	{
		___length_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARENUMERATOR_T3060996705_H
#ifndef CONSOLE_T3796480395_H
#define CONSOLE_T3796480395_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Console
struct  Console_t3796480395  : public RuntimeObject
{
public:

public:
};

struct Console_t3796480395_StaticFields
{
public:
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t2312127179 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t2312127179 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t2673594362 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t3968504285 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t3968504285 * ___outputEncoding_4;

public:
	inline static int32_t get_offset_of_stdout_0() { return static_cast<int32_t>(offsetof(Console_t3796480395_StaticFields, ___stdout_0)); }
	inline TextWriter_t2312127179 * get_stdout_0() const { return ___stdout_0; }
	inline TextWriter_t2312127179 ** get_address_of_stdout_0() { return &___stdout_0; }
	inline void set_stdout_0(TextWriter_t2312127179 * value)
	{
		___stdout_0 = value;
		Il2CppCodeGenWriteBarrier((&___stdout_0), value);
	}

	inline static int32_t get_offset_of_stderr_1() { return static_cast<int32_t>(offsetof(Console_t3796480395_StaticFields, ___stderr_1)); }
	inline TextWriter_t2312127179 * get_stderr_1() const { return ___stderr_1; }
	inline TextWriter_t2312127179 ** get_address_of_stderr_1() { return &___stderr_1; }
	inline void set_stderr_1(TextWriter_t2312127179 * value)
	{
		___stderr_1 = value;
		Il2CppCodeGenWriteBarrier((&___stderr_1), value);
	}

	inline static int32_t get_offset_of_stdin_2() { return static_cast<int32_t>(offsetof(Console_t3796480395_StaticFields, ___stdin_2)); }
	inline TextReader_t2673594362 * get_stdin_2() const { return ___stdin_2; }
	inline TextReader_t2673594362 ** get_address_of_stdin_2() { return &___stdin_2; }
	inline void set_stdin_2(TextReader_t2673594362 * value)
	{
		___stdin_2 = value;
		Il2CppCodeGenWriteBarrier((&___stdin_2), value);
	}

	inline static int32_t get_offset_of_inputEncoding_3() { return static_cast<int32_t>(offsetof(Console_t3796480395_StaticFields, ___inputEncoding_3)); }
	inline Encoding_t3968504285 * get_inputEncoding_3() const { return ___inputEncoding_3; }
	inline Encoding_t3968504285 ** get_address_of_inputEncoding_3() { return &___inputEncoding_3; }
	inline void set_inputEncoding_3(Encoding_t3968504285 * value)
	{
		___inputEncoding_3 = value;
		Il2CppCodeGenWriteBarrier((&___inputEncoding_3), value);
	}

	inline static int32_t get_offset_of_outputEncoding_4() { return static_cast<int32_t>(offsetof(Console_t3796480395_StaticFields, ___outputEncoding_4)); }
	inline Encoding_t3968504285 * get_outputEncoding_4() const { return ___outputEncoding_4; }
	inline Encoding_t3968504285 ** get_address_of_outputEncoding_4() { return &___outputEncoding_4; }
	inline void set_outputEncoding_4(Encoding_t3968504285 * value)
	{
		___outputEncoding_4 = value;
		Il2CppCodeGenWriteBarrier((&___outputEncoding_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSOLE_T3796480395_H
#ifndef LOCALDATASTORESLOT_T1533255930_H
#define LOCALDATASTORESLOT_T1533255930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.LocalDataStoreSlot
struct  LocalDataStoreSlot_t1533255930  : public RuntimeObject
{
public:
	// System.Int32 System.LocalDataStoreSlot::slot
	int32_t ___slot_0;
	// System.Boolean System.LocalDataStoreSlot::thread_local
	bool ___thread_local_1;

public:
	inline static int32_t get_offset_of_slot_0() { return static_cast<int32_t>(offsetof(LocalDataStoreSlot_t1533255930, ___slot_0)); }
	inline int32_t get_slot_0() const { return ___slot_0; }
	inline int32_t* get_address_of_slot_0() { return &___slot_0; }
	inline void set_slot_0(int32_t value)
	{
		___slot_0 = value;
	}

	inline static int32_t get_offset_of_thread_local_1() { return static_cast<int32_t>(offsetof(LocalDataStoreSlot_t1533255930, ___thread_local_1)); }
	inline bool get_thread_local_1() const { return ___thread_local_1; }
	inline bool* get_address_of_thread_local_1() { return &___thread_local_1; }
	inline void set_thread_local_1(bool value)
	{
		___thread_local_1 = value;
	}
};

struct LocalDataStoreSlot_t1533255930_StaticFields
{
public:
	// System.Object System.LocalDataStoreSlot::lock_obj
	RuntimeObject * ___lock_obj_2;
	// System.Boolean[] System.LocalDataStoreSlot::slot_bitmap_thread
	BooleanU5BU5D_t4009053696* ___slot_bitmap_thread_3;
	// System.Boolean[] System.LocalDataStoreSlot::slot_bitmap_context
	BooleanU5BU5D_t4009053696* ___slot_bitmap_context_4;

public:
	inline static int32_t get_offset_of_lock_obj_2() { return static_cast<int32_t>(offsetof(LocalDataStoreSlot_t1533255930_StaticFields, ___lock_obj_2)); }
	inline RuntimeObject * get_lock_obj_2() const { return ___lock_obj_2; }
	inline RuntimeObject ** get_address_of_lock_obj_2() { return &___lock_obj_2; }
	inline void set_lock_obj_2(RuntimeObject * value)
	{
		___lock_obj_2 = value;
		Il2CppCodeGenWriteBarrier((&___lock_obj_2), value);
	}

	inline static int32_t get_offset_of_slot_bitmap_thread_3() { return static_cast<int32_t>(offsetof(LocalDataStoreSlot_t1533255930_StaticFields, ___slot_bitmap_thread_3)); }
	inline BooleanU5BU5D_t4009053696* get_slot_bitmap_thread_3() const { return ___slot_bitmap_thread_3; }
	inline BooleanU5BU5D_t4009053696** get_address_of_slot_bitmap_thread_3() { return &___slot_bitmap_thread_3; }
	inline void set_slot_bitmap_thread_3(BooleanU5BU5D_t4009053696* value)
	{
		___slot_bitmap_thread_3 = value;
		Il2CppCodeGenWriteBarrier((&___slot_bitmap_thread_3), value);
	}

	inline static int32_t get_offset_of_slot_bitmap_context_4() { return static_cast<int32_t>(offsetof(LocalDataStoreSlot_t1533255930_StaticFields, ___slot_bitmap_context_4)); }
	inline BooleanU5BU5D_t4009053696* get_slot_bitmap_context_4() const { return ___slot_bitmap_context_4; }
	inline BooleanU5BU5D_t4009053696** get_address_of_slot_bitmap_context_4() { return &___slot_bitmap_context_4; }
	inline void set_slot_bitmap_context_4(BooleanU5BU5D_t4009053696* value)
	{
		___slot_bitmap_context_4 = value;
		Il2CppCodeGenWriteBarrier((&___slot_bitmap_context_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALDATASTORESLOT_T1533255930_H
#ifndef DBNULL_T782840749_H
#define DBNULL_T782840749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DBNull
struct  DBNull_t782840749  : public RuntimeObject
{
public:

public:
};

struct DBNull_t782840749_StaticFields
{
public:
	// System.DBNull System.DBNull::Value
	DBNull_t782840749 * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(DBNull_t782840749_StaticFields, ___Value_0)); }
	inline DBNull_t782840749 * get_Value_0() const { return ___Value_0; }
	inline DBNull_t782840749 ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(DBNull_t782840749 * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBNULL_T782840749_H
#ifndef DATETIMEUTILS_T2358707862_H
#define DATETIMEUTILS_T2358707862_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeUtils
struct  DateTimeUtils_t2358707862  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEUTILS_T2358707862_H
#ifndef CUSTOMINFO_T2050207728_H
#define CUSTOMINFO_T2050207728_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NumberFormatter/CustomInfo
struct  CustomInfo_t2050207728  : public RuntimeObject
{
public:
	// System.Boolean System.NumberFormatter/CustomInfo::UseGroup
	bool ___UseGroup_0;
	// System.Int32 System.NumberFormatter/CustomInfo::DecimalDigits
	int32_t ___DecimalDigits_1;
	// System.Int32 System.NumberFormatter/CustomInfo::DecimalPointPos
	int32_t ___DecimalPointPos_2;
	// System.Int32 System.NumberFormatter/CustomInfo::DecimalTailSharpDigits
	int32_t ___DecimalTailSharpDigits_3;
	// System.Int32 System.NumberFormatter/CustomInfo::IntegerDigits
	int32_t ___IntegerDigits_4;
	// System.Int32 System.NumberFormatter/CustomInfo::IntegerHeadSharpDigits
	int32_t ___IntegerHeadSharpDigits_5;
	// System.Int32 System.NumberFormatter/CustomInfo::IntegerHeadPos
	int32_t ___IntegerHeadPos_6;
	// System.Boolean System.NumberFormatter/CustomInfo::UseExponent
	bool ___UseExponent_7;
	// System.Int32 System.NumberFormatter/CustomInfo::ExponentDigits
	int32_t ___ExponentDigits_8;
	// System.Int32 System.NumberFormatter/CustomInfo::ExponentTailSharpDigits
	int32_t ___ExponentTailSharpDigits_9;
	// System.Boolean System.NumberFormatter/CustomInfo::ExponentNegativeSignOnly
	bool ___ExponentNegativeSignOnly_10;
	// System.Int32 System.NumberFormatter/CustomInfo::DividePlaces
	int32_t ___DividePlaces_11;
	// System.Int32 System.NumberFormatter/CustomInfo::Percents
	int32_t ___Percents_12;
	// System.Int32 System.NumberFormatter/CustomInfo::Permilles
	int32_t ___Permilles_13;

public:
	inline static int32_t get_offset_of_UseGroup_0() { return static_cast<int32_t>(offsetof(CustomInfo_t2050207728, ___UseGroup_0)); }
	inline bool get_UseGroup_0() const { return ___UseGroup_0; }
	inline bool* get_address_of_UseGroup_0() { return &___UseGroup_0; }
	inline void set_UseGroup_0(bool value)
	{
		___UseGroup_0 = value;
	}

	inline static int32_t get_offset_of_DecimalDigits_1() { return static_cast<int32_t>(offsetof(CustomInfo_t2050207728, ___DecimalDigits_1)); }
	inline int32_t get_DecimalDigits_1() const { return ___DecimalDigits_1; }
	inline int32_t* get_address_of_DecimalDigits_1() { return &___DecimalDigits_1; }
	inline void set_DecimalDigits_1(int32_t value)
	{
		___DecimalDigits_1 = value;
	}

	inline static int32_t get_offset_of_DecimalPointPos_2() { return static_cast<int32_t>(offsetof(CustomInfo_t2050207728, ___DecimalPointPos_2)); }
	inline int32_t get_DecimalPointPos_2() const { return ___DecimalPointPos_2; }
	inline int32_t* get_address_of_DecimalPointPos_2() { return &___DecimalPointPos_2; }
	inline void set_DecimalPointPos_2(int32_t value)
	{
		___DecimalPointPos_2 = value;
	}

	inline static int32_t get_offset_of_DecimalTailSharpDigits_3() { return static_cast<int32_t>(offsetof(CustomInfo_t2050207728, ___DecimalTailSharpDigits_3)); }
	inline int32_t get_DecimalTailSharpDigits_3() const { return ___DecimalTailSharpDigits_3; }
	inline int32_t* get_address_of_DecimalTailSharpDigits_3() { return &___DecimalTailSharpDigits_3; }
	inline void set_DecimalTailSharpDigits_3(int32_t value)
	{
		___DecimalTailSharpDigits_3 = value;
	}

	inline static int32_t get_offset_of_IntegerDigits_4() { return static_cast<int32_t>(offsetof(CustomInfo_t2050207728, ___IntegerDigits_4)); }
	inline int32_t get_IntegerDigits_4() const { return ___IntegerDigits_4; }
	inline int32_t* get_address_of_IntegerDigits_4() { return &___IntegerDigits_4; }
	inline void set_IntegerDigits_4(int32_t value)
	{
		___IntegerDigits_4 = value;
	}

	inline static int32_t get_offset_of_IntegerHeadSharpDigits_5() { return static_cast<int32_t>(offsetof(CustomInfo_t2050207728, ___IntegerHeadSharpDigits_5)); }
	inline int32_t get_IntegerHeadSharpDigits_5() const { return ___IntegerHeadSharpDigits_5; }
	inline int32_t* get_address_of_IntegerHeadSharpDigits_5() { return &___IntegerHeadSharpDigits_5; }
	inline void set_IntegerHeadSharpDigits_5(int32_t value)
	{
		___IntegerHeadSharpDigits_5 = value;
	}

	inline static int32_t get_offset_of_IntegerHeadPos_6() { return static_cast<int32_t>(offsetof(CustomInfo_t2050207728, ___IntegerHeadPos_6)); }
	inline int32_t get_IntegerHeadPos_6() const { return ___IntegerHeadPos_6; }
	inline int32_t* get_address_of_IntegerHeadPos_6() { return &___IntegerHeadPos_6; }
	inline void set_IntegerHeadPos_6(int32_t value)
	{
		___IntegerHeadPos_6 = value;
	}

	inline static int32_t get_offset_of_UseExponent_7() { return static_cast<int32_t>(offsetof(CustomInfo_t2050207728, ___UseExponent_7)); }
	inline bool get_UseExponent_7() const { return ___UseExponent_7; }
	inline bool* get_address_of_UseExponent_7() { return &___UseExponent_7; }
	inline void set_UseExponent_7(bool value)
	{
		___UseExponent_7 = value;
	}

	inline static int32_t get_offset_of_ExponentDigits_8() { return static_cast<int32_t>(offsetof(CustomInfo_t2050207728, ___ExponentDigits_8)); }
	inline int32_t get_ExponentDigits_8() const { return ___ExponentDigits_8; }
	inline int32_t* get_address_of_ExponentDigits_8() { return &___ExponentDigits_8; }
	inline void set_ExponentDigits_8(int32_t value)
	{
		___ExponentDigits_8 = value;
	}

	inline static int32_t get_offset_of_ExponentTailSharpDigits_9() { return static_cast<int32_t>(offsetof(CustomInfo_t2050207728, ___ExponentTailSharpDigits_9)); }
	inline int32_t get_ExponentTailSharpDigits_9() const { return ___ExponentTailSharpDigits_9; }
	inline int32_t* get_address_of_ExponentTailSharpDigits_9() { return &___ExponentTailSharpDigits_9; }
	inline void set_ExponentTailSharpDigits_9(int32_t value)
	{
		___ExponentTailSharpDigits_9 = value;
	}

	inline static int32_t get_offset_of_ExponentNegativeSignOnly_10() { return static_cast<int32_t>(offsetof(CustomInfo_t2050207728, ___ExponentNegativeSignOnly_10)); }
	inline bool get_ExponentNegativeSignOnly_10() const { return ___ExponentNegativeSignOnly_10; }
	inline bool* get_address_of_ExponentNegativeSignOnly_10() { return &___ExponentNegativeSignOnly_10; }
	inline void set_ExponentNegativeSignOnly_10(bool value)
	{
		___ExponentNegativeSignOnly_10 = value;
	}

	inline static int32_t get_offset_of_DividePlaces_11() { return static_cast<int32_t>(offsetof(CustomInfo_t2050207728, ___DividePlaces_11)); }
	inline int32_t get_DividePlaces_11() const { return ___DividePlaces_11; }
	inline int32_t* get_address_of_DividePlaces_11() { return &___DividePlaces_11; }
	inline void set_DividePlaces_11(int32_t value)
	{
		___DividePlaces_11 = value;
	}

	inline static int32_t get_offset_of_Percents_12() { return static_cast<int32_t>(offsetof(CustomInfo_t2050207728, ___Percents_12)); }
	inline int32_t get_Percents_12() const { return ___Percents_12; }
	inline int32_t* get_address_of_Percents_12() { return &___Percents_12; }
	inline void set_Percents_12(int32_t value)
	{
		___Percents_12 = value;
	}

	inline static int32_t get_offset_of_Permilles_13() { return static_cast<int32_t>(offsetof(CustomInfo_t2050207728, ___Permilles_13)); }
	inline int32_t get_Permilles_13() const { return ___Permilles_13; }
	inline int32_t* get_address_of_Permilles_13() { return &___Permilles_13; }
	inline void set_Permilles_13(int32_t value)
	{
		___Permilles_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMINFO_T2050207728_H
#ifndef DELEGATEDATA_T650570042_H
#define DELEGATEDATA_T650570042_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DelegateData
struct  DelegateData_t650570042  : public RuntimeObject
{
public:
	// System.Type System.DelegateData::target_type
	Type_t * ___target_type_0;
	// System.String System.DelegateData::method_name
	String_t* ___method_name_1;

public:
	inline static int32_t get_offset_of_target_type_0() { return static_cast<int32_t>(offsetof(DelegateData_t650570042, ___target_type_0)); }
	inline Type_t * get_target_type_0() const { return ___target_type_0; }
	inline Type_t ** get_address_of_target_type_0() { return &___target_type_0; }
	inline void set_target_type_0(Type_t * value)
	{
		___target_type_0 = value;
		Il2CppCodeGenWriteBarrier((&___target_type_0), value);
	}

	inline static int32_t get_offset_of_method_name_1() { return static_cast<int32_t>(offsetof(DelegateData_t650570042, ___method_name_1)); }
	inline String_t* get_method_name_1() const { return ___method_name_1; }
	inline String_t** get_address_of_method_name_1() { return &___method_name_1; }
	inline void set_method_name_1(String_t* value)
	{
		___method_name_1 = value;
		Il2CppCodeGenWriteBarrier((&___method_name_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATEDATA_T650570042_H
#ifndef DELEGATESERIALIZATIONHOLDER_T132065378_H
#define DELEGATESERIALIZATIONHOLDER_T132065378_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DelegateSerializationHolder
struct  DelegateSerializationHolder_t132065378  : public RuntimeObject
{
public:
	// System.Delegate System.DelegateSerializationHolder::_delegate
	Delegate_t3136160981 * ____delegate_0;

public:
	inline static int32_t get_offset_of__delegate_0() { return static_cast<int32_t>(offsetof(DelegateSerializationHolder_t132065378, ____delegate_0)); }
	inline Delegate_t3136160981 * get__delegate_0() const { return ____delegate_0; }
	inline Delegate_t3136160981 ** get_address_of__delegate_0() { return &____delegate_0; }
	inline void set__delegate_0(Delegate_t3136160981 * value)
	{
		____delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&____delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATESERIALIZATIONHOLDER_T132065378_H
#ifndef DELEGATEENTRY_T3976749550_H
#define DELEGATEENTRY_T3976749550_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DelegateSerializationHolder/DelegateEntry
struct  DelegateEntry_t3976749550  : public RuntimeObject
{
public:
	// System.String System.DelegateSerializationHolder/DelegateEntry::type
	String_t* ___type_0;
	// System.String System.DelegateSerializationHolder/DelegateEntry::assembly
	String_t* ___assembly_1;
	// System.Object System.DelegateSerializationHolder/DelegateEntry::target
	RuntimeObject * ___target_2;
	// System.String System.DelegateSerializationHolder/DelegateEntry::targetTypeAssembly
	String_t* ___targetTypeAssembly_3;
	// System.String System.DelegateSerializationHolder/DelegateEntry::targetTypeName
	String_t* ___targetTypeName_4;
	// System.String System.DelegateSerializationHolder/DelegateEntry::methodName
	String_t* ___methodName_5;
	// System.DelegateSerializationHolder/DelegateEntry System.DelegateSerializationHolder/DelegateEntry::delegateEntry
	DelegateEntry_t3976749550 * ___delegateEntry_6;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(DelegateEntry_t3976749550, ___type_0)); }
	inline String_t* get_type_0() const { return ___type_0; }
	inline String_t** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(String_t* value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

	inline static int32_t get_offset_of_assembly_1() { return static_cast<int32_t>(offsetof(DelegateEntry_t3976749550, ___assembly_1)); }
	inline String_t* get_assembly_1() const { return ___assembly_1; }
	inline String_t** get_address_of_assembly_1() { return &___assembly_1; }
	inline void set_assembly_1(String_t* value)
	{
		___assembly_1 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_1), value);
	}

	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(DelegateEntry_t3976749550, ___target_2)); }
	inline RuntimeObject * get_target_2() const { return ___target_2; }
	inline RuntimeObject ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(RuntimeObject * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier((&___target_2), value);
	}

	inline static int32_t get_offset_of_targetTypeAssembly_3() { return static_cast<int32_t>(offsetof(DelegateEntry_t3976749550, ___targetTypeAssembly_3)); }
	inline String_t* get_targetTypeAssembly_3() const { return ___targetTypeAssembly_3; }
	inline String_t** get_address_of_targetTypeAssembly_3() { return &___targetTypeAssembly_3; }
	inline void set_targetTypeAssembly_3(String_t* value)
	{
		___targetTypeAssembly_3 = value;
		Il2CppCodeGenWriteBarrier((&___targetTypeAssembly_3), value);
	}

	inline static int32_t get_offset_of_targetTypeName_4() { return static_cast<int32_t>(offsetof(DelegateEntry_t3976749550, ___targetTypeName_4)); }
	inline String_t* get_targetTypeName_4() const { return ___targetTypeName_4; }
	inline String_t** get_address_of_targetTypeName_4() { return &___targetTypeName_4; }
	inline void set_targetTypeName_4(String_t* value)
	{
		___targetTypeName_4 = value;
		Il2CppCodeGenWriteBarrier((&___targetTypeName_4), value);
	}

	inline static int32_t get_offset_of_methodName_5() { return static_cast<int32_t>(offsetof(DelegateEntry_t3976749550, ___methodName_5)); }
	inline String_t* get_methodName_5() const { return ___methodName_5; }
	inline String_t** get_address_of_methodName_5() { return &___methodName_5; }
	inline void set_methodName_5(String_t* value)
	{
		___methodName_5 = value;
		Il2CppCodeGenWriteBarrier((&___methodName_5), value);
	}

	inline static int32_t get_offset_of_delegateEntry_6() { return static_cast<int32_t>(offsetof(DelegateEntry_t3976749550, ___delegateEntry_6)); }
	inline DelegateEntry_t3976749550 * get_delegateEntry_6() const { return ___delegateEntry_6; }
	inline DelegateEntry_t3976749550 ** get_address_of_delegateEntry_6() { return &___delegateEntry_6; }
	inline void set_delegateEntry_6(DelegateEntry_t3976749550 * value)
	{
		___delegateEntry_6 = value;
		Il2CppCodeGenWriteBarrier((&___delegateEntry_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATEENTRY_T3976749550_H
#ifndef NUMBERFORMATTER_T3678200339_H
#define NUMBERFORMATTER_T3678200339_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NumberFormatter
struct  NumberFormatter_t3678200339  : public RuntimeObject
{
public:
	// System.Threading.Thread System.NumberFormatter::_thread
	Thread_t553919686 * ____thread_6;
	// System.Globalization.NumberFormatInfo System.NumberFormatter::_nfi
	NumberFormatInfo_t3188828065 * ____nfi_7;
	// System.Boolean System.NumberFormatter::_NaN
	bool ____NaN_8;
	// System.Boolean System.NumberFormatter::_infinity
	bool ____infinity_9;
	// System.Boolean System.NumberFormatter::_isCustomFormat
	bool ____isCustomFormat_10;
	// System.Boolean System.NumberFormatter::_specifierIsUpper
	bool ____specifierIsUpper_11;
	// System.Boolean System.NumberFormatter::_positive
	bool ____positive_12;
	// System.Char System.NumberFormatter::_specifier
	Il2CppChar ____specifier_13;
	// System.Int32 System.NumberFormatter::_precision
	int32_t ____precision_14;
	// System.Int32 System.NumberFormatter::_defPrecision
	int32_t ____defPrecision_15;
	// System.Int32 System.NumberFormatter::_digitsLen
	int32_t ____digitsLen_16;
	// System.Int32 System.NumberFormatter::_offset
	int32_t ____offset_17;
	// System.Int32 System.NumberFormatter::_decPointPos
	int32_t ____decPointPos_18;
	// System.UInt32 System.NumberFormatter::_val1
	uint32_t ____val1_19;
	// System.UInt32 System.NumberFormatter::_val2
	uint32_t ____val2_20;
	// System.UInt32 System.NumberFormatter::_val3
	uint32_t ____val3_21;
	// System.UInt32 System.NumberFormatter::_val4
	uint32_t ____val4_22;
	// System.Char[] System.NumberFormatter::_cbuf
	CharU5BU5D_t3118480893* ____cbuf_23;
	// System.Int32 System.NumberFormatter::_ind
	int32_t ____ind_24;

public:
	inline static int32_t get_offset_of__thread_6() { return static_cast<int32_t>(offsetof(NumberFormatter_t3678200339, ____thread_6)); }
	inline Thread_t553919686 * get__thread_6() const { return ____thread_6; }
	inline Thread_t553919686 ** get_address_of__thread_6() { return &____thread_6; }
	inline void set__thread_6(Thread_t553919686 * value)
	{
		____thread_6 = value;
		Il2CppCodeGenWriteBarrier((&____thread_6), value);
	}

	inline static int32_t get_offset_of__nfi_7() { return static_cast<int32_t>(offsetof(NumberFormatter_t3678200339, ____nfi_7)); }
	inline NumberFormatInfo_t3188828065 * get__nfi_7() const { return ____nfi_7; }
	inline NumberFormatInfo_t3188828065 ** get_address_of__nfi_7() { return &____nfi_7; }
	inline void set__nfi_7(NumberFormatInfo_t3188828065 * value)
	{
		____nfi_7 = value;
		Il2CppCodeGenWriteBarrier((&____nfi_7), value);
	}

	inline static int32_t get_offset_of__NaN_8() { return static_cast<int32_t>(offsetof(NumberFormatter_t3678200339, ____NaN_8)); }
	inline bool get__NaN_8() const { return ____NaN_8; }
	inline bool* get_address_of__NaN_8() { return &____NaN_8; }
	inline void set__NaN_8(bool value)
	{
		____NaN_8 = value;
	}

	inline static int32_t get_offset_of__infinity_9() { return static_cast<int32_t>(offsetof(NumberFormatter_t3678200339, ____infinity_9)); }
	inline bool get__infinity_9() const { return ____infinity_9; }
	inline bool* get_address_of__infinity_9() { return &____infinity_9; }
	inline void set__infinity_9(bool value)
	{
		____infinity_9 = value;
	}

	inline static int32_t get_offset_of__isCustomFormat_10() { return static_cast<int32_t>(offsetof(NumberFormatter_t3678200339, ____isCustomFormat_10)); }
	inline bool get__isCustomFormat_10() const { return ____isCustomFormat_10; }
	inline bool* get_address_of__isCustomFormat_10() { return &____isCustomFormat_10; }
	inline void set__isCustomFormat_10(bool value)
	{
		____isCustomFormat_10 = value;
	}

	inline static int32_t get_offset_of__specifierIsUpper_11() { return static_cast<int32_t>(offsetof(NumberFormatter_t3678200339, ____specifierIsUpper_11)); }
	inline bool get__specifierIsUpper_11() const { return ____specifierIsUpper_11; }
	inline bool* get_address_of__specifierIsUpper_11() { return &____specifierIsUpper_11; }
	inline void set__specifierIsUpper_11(bool value)
	{
		____specifierIsUpper_11 = value;
	}

	inline static int32_t get_offset_of__positive_12() { return static_cast<int32_t>(offsetof(NumberFormatter_t3678200339, ____positive_12)); }
	inline bool get__positive_12() const { return ____positive_12; }
	inline bool* get_address_of__positive_12() { return &____positive_12; }
	inline void set__positive_12(bool value)
	{
		____positive_12 = value;
	}

	inline static int32_t get_offset_of__specifier_13() { return static_cast<int32_t>(offsetof(NumberFormatter_t3678200339, ____specifier_13)); }
	inline Il2CppChar get__specifier_13() const { return ____specifier_13; }
	inline Il2CppChar* get_address_of__specifier_13() { return &____specifier_13; }
	inline void set__specifier_13(Il2CppChar value)
	{
		____specifier_13 = value;
	}

	inline static int32_t get_offset_of__precision_14() { return static_cast<int32_t>(offsetof(NumberFormatter_t3678200339, ____precision_14)); }
	inline int32_t get__precision_14() const { return ____precision_14; }
	inline int32_t* get_address_of__precision_14() { return &____precision_14; }
	inline void set__precision_14(int32_t value)
	{
		____precision_14 = value;
	}

	inline static int32_t get_offset_of__defPrecision_15() { return static_cast<int32_t>(offsetof(NumberFormatter_t3678200339, ____defPrecision_15)); }
	inline int32_t get__defPrecision_15() const { return ____defPrecision_15; }
	inline int32_t* get_address_of__defPrecision_15() { return &____defPrecision_15; }
	inline void set__defPrecision_15(int32_t value)
	{
		____defPrecision_15 = value;
	}

	inline static int32_t get_offset_of__digitsLen_16() { return static_cast<int32_t>(offsetof(NumberFormatter_t3678200339, ____digitsLen_16)); }
	inline int32_t get__digitsLen_16() const { return ____digitsLen_16; }
	inline int32_t* get_address_of__digitsLen_16() { return &____digitsLen_16; }
	inline void set__digitsLen_16(int32_t value)
	{
		____digitsLen_16 = value;
	}

	inline static int32_t get_offset_of__offset_17() { return static_cast<int32_t>(offsetof(NumberFormatter_t3678200339, ____offset_17)); }
	inline int32_t get__offset_17() const { return ____offset_17; }
	inline int32_t* get_address_of__offset_17() { return &____offset_17; }
	inline void set__offset_17(int32_t value)
	{
		____offset_17 = value;
	}

	inline static int32_t get_offset_of__decPointPos_18() { return static_cast<int32_t>(offsetof(NumberFormatter_t3678200339, ____decPointPos_18)); }
	inline int32_t get__decPointPos_18() const { return ____decPointPos_18; }
	inline int32_t* get_address_of__decPointPos_18() { return &____decPointPos_18; }
	inline void set__decPointPos_18(int32_t value)
	{
		____decPointPos_18 = value;
	}

	inline static int32_t get_offset_of__val1_19() { return static_cast<int32_t>(offsetof(NumberFormatter_t3678200339, ____val1_19)); }
	inline uint32_t get__val1_19() const { return ____val1_19; }
	inline uint32_t* get_address_of__val1_19() { return &____val1_19; }
	inline void set__val1_19(uint32_t value)
	{
		____val1_19 = value;
	}

	inline static int32_t get_offset_of__val2_20() { return static_cast<int32_t>(offsetof(NumberFormatter_t3678200339, ____val2_20)); }
	inline uint32_t get__val2_20() const { return ____val2_20; }
	inline uint32_t* get_address_of__val2_20() { return &____val2_20; }
	inline void set__val2_20(uint32_t value)
	{
		____val2_20 = value;
	}

	inline static int32_t get_offset_of__val3_21() { return static_cast<int32_t>(offsetof(NumberFormatter_t3678200339, ____val3_21)); }
	inline uint32_t get__val3_21() const { return ____val3_21; }
	inline uint32_t* get_address_of__val3_21() { return &____val3_21; }
	inline void set__val3_21(uint32_t value)
	{
		____val3_21 = value;
	}

	inline static int32_t get_offset_of__val4_22() { return static_cast<int32_t>(offsetof(NumberFormatter_t3678200339, ____val4_22)); }
	inline uint32_t get__val4_22() const { return ____val4_22; }
	inline uint32_t* get_address_of__val4_22() { return &____val4_22; }
	inline void set__val4_22(uint32_t value)
	{
		____val4_22 = value;
	}

	inline static int32_t get_offset_of__cbuf_23() { return static_cast<int32_t>(offsetof(NumberFormatter_t3678200339, ____cbuf_23)); }
	inline CharU5BU5D_t3118480893* get__cbuf_23() const { return ____cbuf_23; }
	inline CharU5BU5D_t3118480893** get_address_of__cbuf_23() { return &____cbuf_23; }
	inline void set__cbuf_23(CharU5BU5D_t3118480893* value)
	{
		____cbuf_23 = value;
		Il2CppCodeGenWriteBarrier((&____cbuf_23), value);
	}

	inline static int32_t get_offset_of__ind_24() { return static_cast<int32_t>(offsetof(NumberFormatter_t3678200339, ____ind_24)); }
	inline int32_t get__ind_24() const { return ____ind_24; }
	inline int32_t* get_address_of__ind_24() { return &____ind_24; }
	inline void set__ind_24(int32_t value)
	{
		____ind_24 = value;
	}
};

struct NumberFormatter_t3678200339_StaticFields
{
public:
	// System.UInt64* System.NumberFormatter::MantissaBitsTable
	uint64_t* ___MantissaBitsTable_0;
	// System.Int32* System.NumberFormatter::TensExponentTable
	int32_t* ___TensExponentTable_1;
	// System.Char* System.NumberFormatter::DigitLowerTable
	Il2CppChar* ___DigitLowerTable_2;
	// System.Char* System.NumberFormatter::DigitUpperTable
	Il2CppChar* ___DigitUpperTable_3;
	// System.Int64* System.NumberFormatter::TenPowersList
	int64_t* ___TenPowersList_4;
	// System.Int32* System.NumberFormatter::DecHexDigits
	int32_t* ___DecHexDigits_5;

public:
	inline static int32_t get_offset_of_MantissaBitsTable_0() { return static_cast<int32_t>(offsetof(NumberFormatter_t3678200339_StaticFields, ___MantissaBitsTable_0)); }
	inline uint64_t* get_MantissaBitsTable_0() const { return ___MantissaBitsTable_0; }
	inline uint64_t** get_address_of_MantissaBitsTable_0() { return &___MantissaBitsTable_0; }
	inline void set_MantissaBitsTable_0(uint64_t* value)
	{
		___MantissaBitsTable_0 = value;
	}

	inline static int32_t get_offset_of_TensExponentTable_1() { return static_cast<int32_t>(offsetof(NumberFormatter_t3678200339_StaticFields, ___TensExponentTable_1)); }
	inline int32_t* get_TensExponentTable_1() const { return ___TensExponentTable_1; }
	inline int32_t** get_address_of_TensExponentTable_1() { return &___TensExponentTable_1; }
	inline void set_TensExponentTable_1(int32_t* value)
	{
		___TensExponentTable_1 = value;
	}

	inline static int32_t get_offset_of_DigitLowerTable_2() { return static_cast<int32_t>(offsetof(NumberFormatter_t3678200339_StaticFields, ___DigitLowerTable_2)); }
	inline Il2CppChar* get_DigitLowerTable_2() const { return ___DigitLowerTable_2; }
	inline Il2CppChar** get_address_of_DigitLowerTable_2() { return &___DigitLowerTable_2; }
	inline void set_DigitLowerTable_2(Il2CppChar* value)
	{
		___DigitLowerTable_2 = value;
	}

	inline static int32_t get_offset_of_DigitUpperTable_3() { return static_cast<int32_t>(offsetof(NumberFormatter_t3678200339_StaticFields, ___DigitUpperTable_3)); }
	inline Il2CppChar* get_DigitUpperTable_3() const { return ___DigitUpperTable_3; }
	inline Il2CppChar** get_address_of_DigitUpperTable_3() { return &___DigitUpperTable_3; }
	inline void set_DigitUpperTable_3(Il2CppChar* value)
	{
		___DigitUpperTable_3 = value;
	}

	inline static int32_t get_offset_of_TenPowersList_4() { return static_cast<int32_t>(offsetof(NumberFormatter_t3678200339_StaticFields, ___TenPowersList_4)); }
	inline int64_t* get_TenPowersList_4() const { return ___TenPowersList_4; }
	inline int64_t** get_address_of_TenPowersList_4() { return &___TenPowersList_4; }
	inline void set_TenPowersList_4(int64_t* value)
	{
		___TenPowersList_4 = value;
	}

	inline static int32_t get_offset_of_DecHexDigits_5() { return static_cast<int32_t>(offsetof(NumberFormatter_t3678200339_StaticFields, ___DecHexDigits_5)); }
	inline int32_t* get_DecHexDigits_5() const { return ___DecHexDigits_5; }
	inline int32_t** get_address_of_DecHexDigits_5() { return &___DecHexDigits_5; }
	inline void set_DecHexDigits_5(int32_t* value)
	{
		___DecHexDigits_5 = value;
	}
};

struct NumberFormatter_t3678200339_ThreadStaticFields
{
public:
	// System.NumberFormatter System.NumberFormatter::threadNumberFormatter
	NumberFormatter_t3678200339 * ___threadNumberFormatter_25;

public:
	inline static int32_t get_offset_of_threadNumberFormatter_25() { return static_cast<int32_t>(offsetof(NumberFormatter_t3678200339_ThreadStaticFields, ___threadNumberFormatter_25)); }
	inline NumberFormatter_t3678200339 * get_threadNumberFormatter_25() const { return ___threadNumberFormatter_25; }
	inline NumberFormatter_t3678200339 ** get_address_of_threadNumberFormatter_25() { return &___threadNumberFormatter_25; }
	inline void set_threadNumberFormatter_25(NumberFormatter_t3678200339 * value)
	{
		___threadNumberFormatter_25 = value;
		Il2CppCodeGenWriteBarrier((&___threadNumberFormatter_25), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUMBERFORMATTER_T3678200339_H
#ifndef SBYTECOMPARER_T2289762869_H
#define SBYTECOMPARER_T2289762869_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoEnumInfo/SByteComparer
struct  SByteComparer_t2289762869  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTECOMPARER_T2289762869_H
#ifndef SHORTCOMPARER_T2165764877_H
#define SHORTCOMPARER_T2165764877_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoEnumInfo/ShortComparer
struct  ShortComparer_t2165764877  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHORTCOMPARER_T2165764877_H
#ifndef INTCOMPARER_T2697796556_H
#define INTCOMPARER_T2697796556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoEnumInfo/IntComparer
struct  IntComparer_t2697796556  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTCOMPARER_T2697796556_H
#ifndef LONGCOMPARER_T1935479835_H
#define LONGCOMPARER_T1935479835_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoEnumInfo/LongComparer
struct  LongComparer_t1935479835  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LONGCOMPARER_T1935479835_H
#ifndef ENVIRONMENT_T3305779819_H
#define ENVIRONMENT_T3305779819_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Environment
struct  Environment_t3305779819  : public RuntimeObject
{
public:

public:
};

struct Environment_t3305779819_StaticFields
{
public:
	// System.OperatingSystem System.Environment::os
	OperatingSystem_t4256499369 * ___os_1;

public:
	inline static int32_t get_offset_of_os_1() { return static_cast<int32_t>(offsetof(Environment_t3305779819_StaticFields, ___os_1)); }
	inline OperatingSystem_t4256499369 * get_os_1() const { return ___os_1; }
	inline OperatingSystem_t4256499369 ** get_address_of_os_1() { return &___os_1; }
	inline void set_os_1(OperatingSystem_t4256499369 * value)
	{
		___os_1 = value;
		Il2CppCodeGenWriteBarrier((&___os_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENVIRONMENT_T3305779819_H
#ifndef EVENTARGS_T1303406721_H
#define EVENTARGS_T1303406721_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t1303406721  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t1303406721_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t1303406721 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t1303406721_StaticFields, ___Empty_0)); }
	inline EventArgs_t1303406721 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t1303406721 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t1303406721 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T1303406721_H
#ifndef MONOTYPEINFO_T3353572741_H
#define MONOTYPEINFO_T3353572741_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoTypeInfo
struct  MonoTypeInfo_t3353572741  : public RuntimeObject
{
public:
	// System.String System.MonoTypeInfo::full_name
	String_t* ___full_name_0;
	// System.Reflection.ConstructorInfo System.MonoTypeInfo::default_ctor
	ConstructorInfo_t3198151032 * ___default_ctor_1;

public:
	inline static int32_t get_offset_of_full_name_0() { return static_cast<int32_t>(offsetof(MonoTypeInfo_t3353572741, ___full_name_0)); }
	inline String_t* get_full_name_0() const { return ___full_name_0; }
	inline String_t** get_address_of_full_name_0() { return &___full_name_0; }
	inline void set_full_name_0(String_t* value)
	{
		___full_name_0 = value;
		Il2CppCodeGenWriteBarrier((&___full_name_0), value);
	}

	inline static int32_t get_offset_of_default_ctor_1() { return static_cast<int32_t>(offsetof(MonoTypeInfo_t3353572741, ___default_ctor_1)); }
	inline ConstructorInfo_t3198151032 * get_default_ctor_1() const { return ___default_ctor_1; }
	inline ConstructorInfo_t3198151032 ** get_address_of_default_ctor_1() { return &___default_ctor_1; }
	inline void set_default_ctor_1(ConstructorInfo_t3198151032 * value)
	{
		___default_ctor_1 = value;
		Il2CppCodeGenWriteBarrier((&___default_ctor_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTYPEINFO_T3353572741_H
#ifndef GC_T2878187020_H
#define GC_T2878187020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.GC
struct  GC_t2878187020  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GC_T2878187020_H
#ifndef GUIDPARSER_T594874540_H
#define GUIDPARSER_T594874540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid/GuidParser
struct  GuidParser_t594874540  : public RuntimeObject
{
public:
	// System.String System.Guid/GuidParser::_src
	String_t* ____src_0;
	// System.Int32 System.Guid/GuidParser::_length
	int32_t ____length_1;
	// System.Int32 System.Guid/GuidParser::_cur
	int32_t ____cur_2;

public:
	inline static int32_t get_offset_of__src_0() { return static_cast<int32_t>(offsetof(GuidParser_t594874540, ____src_0)); }
	inline String_t* get__src_0() const { return ____src_0; }
	inline String_t** get_address_of__src_0() { return &____src_0; }
	inline void set__src_0(String_t* value)
	{
		____src_0 = value;
		Il2CppCodeGenWriteBarrier((&____src_0), value);
	}

	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(GuidParser_t594874540, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__cur_2() { return static_cast<int32_t>(offsetof(GuidParser_t594874540, ____cur_2)); }
	inline int32_t get__cur_2() const { return ____cur_2; }
	inline int32_t* get_address_of__cur_2() { return &____cur_2; }
	inline void set__cur_2(int32_t value)
	{
		____cur_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDPARSER_T594874540_H
#ifndef MONOTOUCHAOTHELPER_T3863100029_H
#define MONOTOUCHAOTHELPER_T3863100029_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoTouchAOTHelper
struct  MonoTouchAOTHelper_t3863100029  : public RuntimeObject
{
public:

public:
};

struct MonoTouchAOTHelper_t3863100029_StaticFields
{
public:
	// System.Boolean System.MonoTouchAOTHelper::FalseFlag
	bool ___FalseFlag_0;

public:
	inline static int32_t get_offset_of_FalseFlag_0() { return static_cast<int32_t>(offsetof(MonoTouchAOTHelper_t3863100029_StaticFields, ___FalseFlag_0)); }
	inline bool get_FalseFlag_0() const { return ___FalseFlag_0; }
	inline bool* get_address_of_FalseFlag_0() { return &___FalseFlag_0; }
	inline void set_FalseFlag_0(bool value)
	{
		___FalseFlag_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTOUCHAOTHELPER_T3863100029_H
#ifndef ATTRIBUTEINFO_T1729010380_H
#define ATTRIBUTEINFO_T1729010380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoCustomAttrs/AttributeInfo
struct  AttributeInfo_t1729010380  : public RuntimeObject
{
public:
	// System.AttributeUsageAttribute System.MonoCustomAttrs/AttributeInfo::_usage
	AttributeUsageAttribute_t2879905124 * ____usage_0;
	// System.Int32 System.MonoCustomAttrs/AttributeInfo::_inheritanceLevel
	int32_t ____inheritanceLevel_1;

public:
	inline static int32_t get_offset_of__usage_0() { return static_cast<int32_t>(offsetof(AttributeInfo_t1729010380, ____usage_0)); }
	inline AttributeUsageAttribute_t2879905124 * get__usage_0() const { return ____usage_0; }
	inline AttributeUsageAttribute_t2879905124 ** get_address_of__usage_0() { return &____usage_0; }
	inline void set__usage_0(AttributeUsageAttribute_t2879905124 * value)
	{
		____usage_0 = value;
		Il2CppCodeGenWriteBarrier((&____usage_0), value);
	}

	inline static int32_t get_offset_of__inheritanceLevel_1() { return static_cast<int32_t>(offsetof(AttributeInfo_t1729010380, ____inheritanceLevel_1)); }
	inline int32_t get__inheritanceLevel_1() const { return ____inheritanceLevel_1; }
	inline int32_t* get_address_of__inheritanceLevel_1() { return &____inheritanceLevel_1; }
	inline void set__inheritanceLevel_1(int32_t value)
	{
		____inheritanceLevel_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTEINFO_T1729010380_H
#ifndef MONOCUSTOMATTRS_T3288799394_H
#define MONOCUSTOMATTRS_T3288799394_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoCustomAttrs
struct  MonoCustomAttrs_t3288799394  : public RuntimeObject
{
public:

public:
};

struct MonoCustomAttrs_t3288799394_StaticFields
{
public:
	// System.Reflection.Assembly System.MonoCustomAttrs::corlib
	Assembly_t2046867000 * ___corlib_0;
	// System.Type System.MonoCustomAttrs::AttributeUsageType
	Type_t * ___AttributeUsageType_1;
	// System.AttributeUsageAttribute System.MonoCustomAttrs::DefaultAttributeUsage
	AttributeUsageAttribute_t2879905124 * ___DefaultAttributeUsage_2;

public:
	inline static int32_t get_offset_of_corlib_0() { return static_cast<int32_t>(offsetof(MonoCustomAttrs_t3288799394_StaticFields, ___corlib_0)); }
	inline Assembly_t2046867000 * get_corlib_0() const { return ___corlib_0; }
	inline Assembly_t2046867000 ** get_address_of_corlib_0() { return &___corlib_0; }
	inline void set_corlib_0(Assembly_t2046867000 * value)
	{
		___corlib_0 = value;
		Il2CppCodeGenWriteBarrier((&___corlib_0), value);
	}

	inline static int32_t get_offset_of_AttributeUsageType_1() { return static_cast<int32_t>(offsetof(MonoCustomAttrs_t3288799394_StaticFields, ___AttributeUsageType_1)); }
	inline Type_t * get_AttributeUsageType_1() const { return ___AttributeUsageType_1; }
	inline Type_t ** get_address_of_AttributeUsageType_1() { return &___AttributeUsageType_1; }
	inline void set_AttributeUsageType_1(Type_t * value)
	{
		___AttributeUsageType_1 = value;
		Il2CppCodeGenWriteBarrier((&___AttributeUsageType_1), value);
	}

	inline static int32_t get_offset_of_DefaultAttributeUsage_2() { return static_cast<int32_t>(offsetof(MonoCustomAttrs_t3288799394_StaticFields, ___DefaultAttributeUsage_2)); }
	inline AttributeUsageAttribute_t2879905124 * get_DefaultAttributeUsage_2() const { return ___DefaultAttributeUsage_2; }
	inline AttributeUsageAttribute_t2879905124 ** get_address_of_DefaultAttributeUsage_2() { return &___DefaultAttributeUsage_2; }
	inline void set_DefaultAttributeUsage_2(AttributeUsageAttribute_t2879905124 * value)
	{
		___DefaultAttributeUsage_2 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultAttributeUsage_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOCUSTOMATTRS_T3288799394_H
#ifndef BITCONVERTER_T3677198277_H
#define BITCONVERTER_T3677198277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.BitConverter
struct  BitConverter_t3677198277  : public RuntimeObject
{
public:

public:
};

struct BitConverter_t3677198277_StaticFields
{
public:
	// System.Boolean System.BitConverter::SwappedWordsInDouble
	bool ___SwappedWordsInDouble_0;
	// System.Boolean System.BitConverter::IsLittleEndian
	bool ___IsLittleEndian_1;

public:
	inline static int32_t get_offset_of_SwappedWordsInDouble_0() { return static_cast<int32_t>(offsetof(BitConverter_t3677198277_StaticFields, ___SwappedWordsInDouble_0)); }
	inline bool get_SwappedWordsInDouble_0() const { return ___SwappedWordsInDouble_0; }
	inline bool* get_address_of_SwappedWordsInDouble_0() { return &___SwappedWordsInDouble_0; }
	inline void set_SwappedWordsInDouble_0(bool value)
	{
		___SwappedWordsInDouble_0 = value;
	}

	inline static int32_t get_offset_of_IsLittleEndian_1() { return static_cast<int32_t>(offsetof(BitConverter_t3677198277_StaticFields, ___IsLittleEndian_1)); }
	inline bool get_IsLittleEndian_1() const { return ___IsLittleEndian_1; }
	inline bool* get_address_of_IsLittleEndian_1() { return &___IsLittleEndian_1; }
	inline void set_IsLittleEndian_1(bool value)
	{
		___IsLittleEndian_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITCONVERTER_T3677198277_H
#ifndef NATIVEEVENTCALLS_T3571126172_H
#define NATIVEEVENTCALLS_T3571126172_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.NativeEventCalls
struct  NativeEventCalls_t3571126172  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEEVENTCALLS_T3571126172_H
#ifndef CONVERT_T2841881561_H
#define CONVERT_T2841881561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Convert
struct  Convert_t2841881561  : public RuntimeObject
{
public:

public:
};

struct Convert_t2841881561_StaticFields
{
public:
	// System.Object System.Convert::DBNull
	RuntimeObject * ___DBNull_0;
	// System.Type[] System.Convert::conversionTable
	TypeU5BU5D_t3623644370* ___conversionTable_1;

public:
	inline static int32_t get_offset_of_DBNull_0() { return static_cast<int32_t>(offsetof(Convert_t2841881561_StaticFields, ___DBNull_0)); }
	inline RuntimeObject * get_DBNull_0() const { return ___DBNull_0; }
	inline RuntimeObject ** get_address_of_DBNull_0() { return &___DBNull_0; }
	inline void set_DBNull_0(RuntimeObject * value)
	{
		___DBNull_0 = value;
		Il2CppCodeGenWriteBarrier((&___DBNull_0), value);
	}

	inline static int32_t get_offset_of_conversionTable_1() { return static_cast<int32_t>(offsetof(Convert_t2841881561_StaticFields, ___conversionTable_1)); }
	inline TypeU5BU5D_t3623644370* get_conversionTable_1() const { return ___conversionTable_1; }
	inline TypeU5BU5D_t3623644370** get_address_of_conversionTable_1() { return &___conversionTable_1; }
	inline void set_conversionTable_1(TypeU5BU5D_t3623644370* value)
	{
		___conversionTable_1 = value;
		Il2CppCodeGenWriteBarrier((&___conversionTable_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONVERT_T2841881561_H
#ifndef MATH_T1029967512_H
#define MATH_T1029967512_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Math
struct  Math_t1029967512  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATH_T1029967512_H
#ifndef TIMERCOMPARER_T4201101803_H
#define TIMERCOMPARER_T4201101803_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Timer/TimerComparer
struct  TimerComparer_t4201101803  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMERCOMPARER_T4201101803_H
#ifndef ACTIVATIONCONTEXT_T2851808966_H
#define ACTIVATIONCONTEXT_T2851808966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ActivationContext
struct  ActivationContext_t2851808966  : public RuntimeObject
{
public:
	// System.Boolean System.ActivationContext::_disposed
	bool ____disposed_0;

public:
	inline static int32_t get_offset_of__disposed_0() { return static_cast<int32_t>(offsetof(ActivationContext_t2851808966, ____disposed_0)); }
	inline bool get__disposed_0() const { return ____disposed_0; }
	inline bool* get_address_of__disposed_0() { return &____disposed_0; }
	inline void set__disposed_0(bool value)
	{
		____disposed_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVATIONCONTEXT_T2851808966_H
#ifndef ACTIVATOR_T3199484662_H
#define ACTIVATOR_T3199484662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Activator
struct  Activator_t3199484662  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVATOR_T3199484662_H
#ifndef THREADPOOL_T3064708390_H
#define THREADPOOL_T3064708390_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadPool
struct  ThreadPool_t3064708390  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADPOOL_T3064708390_H
#ifndef SCHEDULER_T3261027599_H
#define SCHEDULER_T3261027599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Timer/Scheduler
struct  Scheduler_t3261027599  : public RuntimeObject
{
public:
	// System.Collections.SortedList System.Threading.Timer/Scheduler::list
	SortedList_t3721915040 * ___list_1;

public:
	inline static int32_t get_offset_of_list_1() { return static_cast<int32_t>(offsetof(Scheduler_t3261027599, ___list_1)); }
	inline SortedList_t3721915040 * get_list_1() const { return ___list_1; }
	inline SortedList_t3721915040 ** get_address_of_list_1() { return &___list_1; }
	inline void set_list_1(SortedList_t3721915040 * value)
	{
		___list_1 = value;
		Il2CppCodeGenWriteBarrier((&___list_1), value);
	}
};

struct Scheduler_t3261027599_StaticFields
{
public:
	// System.Threading.Timer/Scheduler System.Threading.Timer/Scheduler::instance
	Scheduler_t3261027599 * ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(Scheduler_t3261027599_StaticFields, ___instance_0)); }
	inline Scheduler_t3261027599 * get_instance_0() const { return ___instance_0; }
	inline Scheduler_t3261027599 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(Scheduler_t3261027599 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCHEDULER_T3261027599_H
#ifndef CRITICALFINALIZEROBJECT_T4187350776_H
#define CRITICALFINALIZEROBJECT_T4187350776_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t4187350776  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALFINALIZEROBJECT_T4187350776_H
#ifndef EXCEPTION_T2038377577_H
#define EXCEPTION_T2038377577_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t2038377577  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t293399462* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t2038377577 * ___inner_exception_1;
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
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t2038377577, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t293399462* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t293399462** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t293399462* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t2038377577, ___inner_exception_1)); }
	inline Exception_t2038377577 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t2038377577 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t2038377577 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t2038377577, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t2038377577, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t2038377577, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t2038377577, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t2038377577, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t2038377577, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t2038377577, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t2038377577, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t2038377577, ____data_10)); }
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
#endif // EXCEPTION_T2038377577_H
#ifndef APPLICATIONIDENTITY_T4137633900_H
#define APPLICATIONIDENTITY_T4137633900_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ApplicationIdentity
struct  ApplicationIdentity_t4137633900  : public RuntimeObject
{
public:
	// System.String System.ApplicationIdentity::_fullName
	String_t* ____fullName_0;

public:
	inline static int32_t get_offset_of__fullName_0() { return static_cast<int32_t>(offsetof(ApplicationIdentity_t4137633900, ____fullName_0)); }
	inline String_t* get__fullName_0() const { return ____fullName_0; }
	inline String_t** get_address_of__fullName_0() { return &____fullName_0; }
	inline void set__fullName_0(String_t* value)
	{
		____fullName_0 = value;
		Il2CppCodeGenWriteBarrier((&____fullName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONIDENTITY_T4137633900_H
#ifndef ATTRIBUTE_T4045945856_H
#define ATTRIBUTE_T4045945856_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t4045945856  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T4045945856_H
#ifndef SYNCHRONIZATIONCONTEXT_T2082318167_H
#define SYNCHRONIZATIONCONTEXT_T2082318167_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SynchronizationContext
struct  SynchronizationContext_t2082318167  : public RuntimeObject
{
public:

public:
};

struct SynchronizationContext_t2082318167_ThreadStaticFields
{
public:
	// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::currentContext
	SynchronizationContext_t2082318167 * ___currentContext_0;

public:
	inline static int32_t get_offset_of_currentContext_0() { return static_cast<int32_t>(offsetof(SynchronizationContext_t2082318167_ThreadStaticFields, ___currentContext_0)); }
	inline SynchronizationContext_t2082318167 * get_currentContext_0() const { return ___currentContext_0; }
	inline SynchronizationContext_t2082318167 ** get_address_of_currentContext_0() { return &___currentContext_0; }
	inline void set_currentContext_0(SynchronizationContext_t2082318167 * value)
	{
		___currentContext_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentContext_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZATIONCONTEXT_T2082318167_H
#ifndef MARSHALBYREFOBJECT_T3511612679_H
#define MARSHALBYREFOBJECT_T3511612679_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t3511612679  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2359731826 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t3511612679, ____identity_0)); }
	inline ServerIdentity_t2359731826 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2359731826 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2359731826 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T3511612679_H
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
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_0;
	// System.Int16 System.Guid::_b
	int16_t ____b_1;
	// System.Int16 System.Guid::_c
	int16_t ____c_2;
	// System.Byte System.Guid::_d
	uint8_t ____d_3;
	// System.Byte System.Guid::_e
	uint8_t ____e_4;
	// System.Byte System.Guid::_f
	uint8_t ____f_5;
	// System.Byte System.Guid::_g
	uint8_t ____g_6;
	// System.Byte System.Guid::_h
	uint8_t ____h_7;
	// System.Byte System.Guid::_i
	uint8_t ____i_8;
	// System.Byte System.Guid::_j
	uint8_t ____j_9;
	// System.Byte System.Guid::_k
	uint8_t ____k_10;

public:
	inline static int32_t get_offset_of__a_0() { return static_cast<int32_t>(offsetof(Guid_t, ____a_0)); }
	inline int32_t get__a_0() const { return ____a_0; }
	inline int32_t* get_address_of__a_0() { return &____a_0; }
	inline void set__a_0(int32_t value)
	{
		____a_0 = value;
	}

	inline static int32_t get_offset_of__b_1() { return static_cast<int32_t>(offsetof(Guid_t, ____b_1)); }
	inline int16_t get__b_1() const { return ____b_1; }
	inline int16_t* get_address_of__b_1() { return &____b_1; }
	inline void set__b_1(int16_t value)
	{
		____b_1 = value;
	}

	inline static int32_t get_offset_of__c_2() { return static_cast<int32_t>(offsetof(Guid_t, ____c_2)); }
	inline int16_t get__c_2() const { return ____c_2; }
	inline int16_t* get_address_of__c_2() { return &____c_2; }
	inline void set__c_2(int16_t value)
	{
		____c_2 = value;
	}

	inline static int32_t get_offset_of__d_3() { return static_cast<int32_t>(offsetof(Guid_t, ____d_3)); }
	inline uint8_t get__d_3() const { return ____d_3; }
	inline uint8_t* get_address_of__d_3() { return &____d_3; }
	inline void set__d_3(uint8_t value)
	{
		____d_3 = value;
	}

	inline static int32_t get_offset_of__e_4() { return static_cast<int32_t>(offsetof(Guid_t, ____e_4)); }
	inline uint8_t get__e_4() const { return ____e_4; }
	inline uint8_t* get_address_of__e_4() { return &____e_4; }
	inline void set__e_4(uint8_t value)
	{
		____e_4 = value;
	}

	inline static int32_t get_offset_of__f_5() { return static_cast<int32_t>(offsetof(Guid_t, ____f_5)); }
	inline uint8_t get__f_5() const { return ____f_5; }
	inline uint8_t* get_address_of__f_5() { return &____f_5; }
	inline void set__f_5(uint8_t value)
	{
		____f_5 = value;
	}

	inline static int32_t get_offset_of__g_6() { return static_cast<int32_t>(offsetof(Guid_t, ____g_6)); }
	inline uint8_t get__g_6() const { return ____g_6; }
	inline uint8_t* get_address_of__g_6() { return &____g_6; }
	inline void set__g_6(uint8_t value)
	{
		____g_6 = value;
	}

	inline static int32_t get_offset_of__h_7() { return static_cast<int32_t>(offsetof(Guid_t, ____h_7)); }
	inline uint8_t get__h_7() const { return ____h_7; }
	inline uint8_t* get_address_of__h_7() { return &____h_7; }
	inline void set__h_7(uint8_t value)
	{
		____h_7 = value;
	}

	inline static int32_t get_offset_of__i_8() { return static_cast<int32_t>(offsetof(Guid_t, ____i_8)); }
	inline uint8_t get__i_8() const { return ____i_8; }
	inline uint8_t* get_address_of__i_8() { return &____i_8; }
	inline void set__i_8(uint8_t value)
	{
		____i_8 = value;
	}

	inline static int32_t get_offset_of__j_9() { return static_cast<int32_t>(offsetof(Guid_t, ____j_9)); }
	inline uint8_t get__j_9() const { return ____j_9; }
	inline uint8_t* get_address_of__j_9() { return &____j_9; }
	inline void set__j_9(uint8_t value)
	{
		____j_9 = value;
	}

	inline static int32_t get_offset_of__k_10() { return static_cast<int32_t>(offsetof(Guid_t, ____k_10)); }
	inline uint8_t get__k_10() const { return ____k_10; }
	inline uint8_t* get_address_of__k_10() { return &____k_10; }
	inline void set__k_10(uint8_t value)
	{
		____k_10 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_11;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2366981949 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2366981949 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_11() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_11)); }
	inline Guid_t  get_Empty_11() const { return ___Empty_11; }
	inline Guid_t * get_address_of_Empty_11() { return &___Empty_11; }
	inline void set_Empty_11(Guid_t  value)
	{
		___Empty_11 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2366981949 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2366981949 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2366981949 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2366981949 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2366981949 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2366981949 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef FLAGSATTRIBUTE_T662196437_H
#define FLAGSATTRIBUTE_T662196437_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FlagsAttribute
struct  FlagsAttribute_t662196437  : public Attribute_t4045945856
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLAGSATTRIBUTE_T662196437_H
#ifndef NONSERIALIZEDATTRIBUTE_T2626510564_H
#define NONSERIALIZEDATTRIBUTE_T2626510564_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NonSerializedAttribute
struct  NonSerializedAttribute_t2626510564  : public Attribute_t4045945856
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NONSERIALIZEDATTRIBUTE_T2626510564_H
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
#ifndef TIMER_T2914235532_H
#define TIMER_T2914235532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Timer
struct  Timer_t2914235532  : public MarshalByRefObject_t3511612679
{
public:
	// System.Threading.TimerCallback System.Threading.Timer::callback
	TimerCallback_t3887909300 * ___callback_2;
	// System.Object System.Threading.Timer::state
	RuntimeObject * ___state_3;
	// System.Int64 System.Threading.Timer::due_time_ms
	int64_t ___due_time_ms_4;
	// System.Int64 System.Threading.Timer::period_ms
	int64_t ___period_ms_5;
	// System.Int64 System.Threading.Timer::next_run
	int64_t ___next_run_6;
	// System.Boolean System.Threading.Timer::disposed
	bool ___disposed_7;

public:
	inline static int32_t get_offset_of_callback_2() { return static_cast<int32_t>(offsetof(Timer_t2914235532, ___callback_2)); }
	inline TimerCallback_t3887909300 * get_callback_2() const { return ___callback_2; }
	inline TimerCallback_t3887909300 ** get_address_of_callback_2() { return &___callback_2; }
	inline void set_callback_2(TimerCallback_t3887909300 * value)
	{
		___callback_2 = value;
		Il2CppCodeGenWriteBarrier((&___callback_2), value);
	}

	inline static int32_t get_offset_of_state_3() { return static_cast<int32_t>(offsetof(Timer_t2914235532, ___state_3)); }
	inline RuntimeObject * get_state_3() const { return ___state_3; }
	inline RuntimeObject ** get_address_of_state_3() { return &___state_3; }
	inline void set_state_3(RuntimeObject * value)
	{
		___state_3 = value;
		Il2CppCodeGenWriteBarrier((&___state_3), value);
	}

	inline static int32_t get_offset_of_due_time_ms_4() { return static_cast<int32_t>(offsetof(Timer_t2914235532, ___due_time_ms_4)); }
	inline int64_t get_due_time_ms_4() const { return ___due_time_ms_4; }
	inline int64_t* get_address_of_due_time_ms_4() { return &___due_time_ms_4; }
	inline void set_due_time_ms_4(int64_t value)
	{
		___due_time_ms_4 = value;
	}

	inline static int32_t get_offset_of_period_ms_5() { return static_cast<int32_t>(offsetof(Timer_t2914235532, ___period_ms_5)); }
	inline int64_t get_period_ms_5() const { return ___period_ms_5; }
	inline int64_t* get_address_of_period_ms_5() { return &___period_ms_5; }
	inline void set_period_ms_5(int64_t value)
	{
		___period_ms_5 = value;
	}

	inline static int32_t get_offset_of_next_run_6() { return static_cast<int32_t>(offsetof(Timer_t2914235532, ___next_run_6)); }
	inline int64_t get_next_run_6() const { return ___next_run_6; }
	inline int64_t* get_address_of_next_run_6() { return &___next_run_6; }
	inline void set_next_run_6(int64_t value)
	{
		___next_run_6 = value;
	}

	inline static int32_t get_offset_of_disposed_7() { return static_cast<int32_t>(offsetof(Timer_t2914235532, ___disposed_7)); }
	inline bool get_disposed_7() const { return ___disposed_7; }
	inline bool* get_address_of_disposed_7() { return &___disposed_7; }
	inline void set_disposed_7(bool value)
	{
		___disposed_7 = value;
	}
};

struct Timer_t2914235532_StaticFields
{
public:
	// System.Threading.Timer/Scheduler System.Threading.Timer::scheduler
	Scheduler_t3261027599 * ___scheduler_1;

public:
	inline static int32_t get_offset_of_scheduler_1() { return static_cast<int32_t>(offsetof(Timer_t2914235532_StaticFields, ___scheduler_1)); }
	inline Scheduler_t3261027599 * get_scheduler_1() const { return ___scheduler_1; }
	inline Scheduler_t3261027599 ** get_address_of_scheduler_1() { return &___scheduler_1; }
	inline void set_scheduler_1(Scheduler_t3261027599 * value)
	{
		___scheduler_1 = value;
		Il2CppCodeGenWriteBarrier((&___scheduler_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMER_T2914235532_H
#ifndef MONOENUMINFO_T2204979078_H
#define MONOENUMINFO_T2204979078_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoEnumInfo
struct  MonoEnumInfo_t2204979078 
{
public:
	// System.Type System.MonoEnumInfo::utype
	Type_t * ___utype_0;
	// System.Array System.MonoEnumInfo::values
	RuntimeArray * ___values_1;
	// System.String[] System.MonoEnumInfo::names
	StringU5BU5D_t626887548* ___names_2;
	// System.Collections.Hashtable System.MonoEnumInfo::name_hash
	Hashtable_t2876210346 * ___name_hash_3;

public:
	inline static int32_t get_offset_of_utype_0() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t2204979078, ___utype_0)); }
	inline Type_t * get_utype_0() const { return ___utype_0; }
	inline Type_t ** get_address_of_utype_0() { return &___utype_0; }
	inline void set_utype_0(Type_t * value)
	{
		___utype_0 = value;
		Il2CppCodeGenWriteBarrier((&___utype_0), value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t2204979078, ___values_1)); }
	inline RuntimeArray * get_values_1() const { return ___values_1; }
	inline RuntimeArray ** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(RuntimeArray * value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((&___values_1), value);
	}

	inline static int32_t get_offset_of_names_2() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t2204979078, ___names_2)); }
	inline StringU5BU5D_t626887548* get_names_2() const { return ___names_2; }
	inline StringU5BU5D_t626887548** get_address_of_names_2() { return &___names_2; }
	inline void set_names_2(StringU5BU5D_t626887548* value)
	{
		___names_2 = value;
		Il2CppCodeGenWriteBarrier((&___names_2), value);
	}

	inline static int32_t get_offset_of_name_hash_3() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t2204979078, ___name_hash_3)); }
	inline Hashtable_t2876210346 * get_name_hash_3() const { return ___name_hash_3; }
	inline Hashtable_t2876210346 ** get_address_of_name_hash_3() { return &___name_hash_3; }
	inline void set_name_hash_3(Hashtable_t2876210346 * value)
	{
		___name_hash_3 = value;
		Il2CppCodeGenWriteBarrier((&___name_hash_3), value);
	}
};

struct MonoEnumInfo_t2204979078_StaticFields
{
public:
	// System.Collections.Hashtable System.MonoEnumInfo::global_cache
	Hashtable_t2876210346 * ___global_cache_5;
	// System.Object System.MonoEnumInfo::global_cache_monitor
	RuntimeObject * ___global_cache_monitor_6;
	// System.MonoEnumInfo/SByteComparer System.MonoEnumInfo::sbyte_comparer
	SByteComparer_t2289762869 * ___sbyte_comparer_7;
	// System.MonoEnumInfo/ShortComparer System.MonoEnumInfo::short_comparer
	ShortComparer_t2165764877 * ___short_comparer_8;
	// System.MonoEnumInfo/IntComparer System.MonoEnumInfo::int_comparer
	IntComparer_t2697796556 * ___int_comparer_9;
	// System.MonoEnumInfo/LongComparer System.MonoEnumInfo::long_comparer
	LongComparer_t1935479835 * ___long_comparer_10;

public:
	inline static int32_t get_offset_of_global_cache_5() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t2204979078_StaticFields, ___global_cache_5)); }
	inline Hashtable_t2876210346 * get_global_cache_5() const { return ___global_cache_5; }
	inline Hashtable_t2876210346 ** get_address_of_global_cache_5() { return &___global_cache_5; }
	inline void set_global_cache_5(Hashtable_t2876210346 * value)
	{
		___global_cache_5 = value;
		Il2CppCodeGenWriteBarrier((&___global_cache_5), value);
	}

	inline static int32_t get_offset_of_global_cache_monitor_6() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t2204979078_StaticFields, ___global_cache_monitor_6)); }
	inline RuntimeObject * get_global_cache_monitor_6() const { return ___global_cache_monitor_6; }
	inline RuntimeObject ** get_address_of_global_cache_monitor_6() { return &___global_cache_monitor_6; }
	inline void set_global_cache_monitor_6(RuntimeObject * value)
	{
		___global_cache_monitor_6 = value;
		Il2CppCodeGenWriteBarrier((&___global_cache_monitor_6), value);
	}

	inline static int32_t get_offset_of_sbyte_comparer_7() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t2204979078_StaticFields, ___sbyte_comparer_7)); }
	inline SByteComparer_t2289762869 * get_sbyte_comparer_7() const { return ___sbyte_comparer_7; }
	inline SByteComparer_t2289762869 ** get_address_of_sbyte_comparer_7() { return &___sbyte_comparer_7; }
	inline void set_sbyte_comparer_7(SByteComparer_t2289762869 * value)
	{
		___sbyte_comparer_7 = value;
		Il2CppCodeGenWriteBarrier((&___sbyte_comparer_7), value);
	}

	inline static int32_t get_offset_of_short_comparer_8() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t2204979078_StaticFields, ___short_comparer_8)); }
	inline ShortComparer_t2165764877 * get_short_comparer_8() const { return ___short_comparer_8; }
	inline ShortComparer_t2165764877 ** get_address_of_short_comparer_8() { return &___short_comparer_8; }
	inline void set_short_comparer_8(ShortComparer_t2165764877 * value)
	{
		___short_comparer_8 = value;
		Il2CppCodeGenWriteBarrier((&___short_comparer_8), value);
	}

	inline static int32_t get_offset_of_int_comparer_9() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t2204979078_StaticFields, ___int_comparer_9)); }
	inline IntComparer_t2697796556 * get_int_comparer_9() const { return ___int_comparer_9; }
	inline IntComparer_t2697796556 ** get_address_of_int_comparer_9() { return &___int_comparer_9; }
	inline void set_int_comparer_9(IntComparer_t2697796556 * value)
	{
		___int_comparer_9 = value;
		Il2CppCodeGenWriteBarrier((&___int_comparer_9), value);
	}

	inline static int32_t get_offset_of_long_comparer_10() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t2204979078_StaticFields, ___long_comparer_10)); }
	inline LongComparer_t1935479835 * get_long_comparer_10() const { return ___long_comparer_10; }
	inline LongComparer_t1935479835 ** get_address_of_long_comparer_10() { return &___long_comparer_10; }
	inline void set_long_comparer_10(LongComparer_t1935479835 * value)
	{
		___long_comparer_10 = value;
		Il2CppCodeGenWriteBarrier((&___long_comparer_10), value);
	}
};

struct MonoEnumInfo_t2204979078_ThreadStaticFields
{
public:
	// System.Collections.Hashtable System.MonoEnumInfo::cache
	Hashtable_t2876210346 * ___cache_4;

public:
	inline static int32_t get_offset_of_cache_4() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t2204979078_ThreadStaticFields, ___cache_4)); }
	inline Hashtable_t2876210346 * get_cache_4() const { return ___cache_4; }
	inline Hashtable_t2876210346 ** get_address_of_cache_4() { return &___cache_4; }
	inline void set_cache_4(Hashtable_t2876210346 * value)
	{
		___cache_4 = value;
		Il2CppCodeGenWriteBarrier((&___cache_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MonoEnumInfo
struct MonoEnumInfo_t2204979078_marshaled_pinvoke
{
	Type_t * ___utype_0;
	RuntimeArray * ___values_1;
	char** ___names_2;
	Hashtable_t2876210346 * ___name_hash_3;
};
// Native definition for COM marshalling of System.MonoEnumInfo
struct MonoEnumInfo_t2204979078_marshaled_com
{
	Type_t * ___utype_0;
	RuntimeArray * ___values_1;
	Il2CppChar** ___names_2;
	Hashtable_t2876210346 * ___name_hash_3;
};
#endif // MONOENUMINFO_T2204979078_H
#ifndef ASSEMBLYLOADEVENTARGS_T426611754_H
#define ASSEMBLYLOADEVENTARGS_T426611754_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AssemblyLoadEventArgs
struct  AssemblyLoadEventArgs_t426611754  : public EventArgs_t1303406721
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYLOADEVENTARGS_T426611754_H
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
#ifndef UINTPTR_T_H
#define UINTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UIntPtr
struct  UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline uintptr_t get_Zero_0() const { return ___Zero_0; }
	inline uintptr_t* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(uintptr_t value)
	{
		___Zero_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINTPTR_T_H
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
#ifndef APPDOMAINMANAGER_T1322683753_H
#define APPDOMAINMANAGER_T1322683753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AppDomainManager
struct  AppDomainManager_t1322683753  : public MarshalByRefObject_t3511612679
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPDOMAINMANAGER_T1322683753_H
#ifndef TIMESPAN_T3322851442_H
#define TIMESPAN_T3322851442_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t3322851442 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t3322851442, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t3322851442_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t3322851442  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t3322851442  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t3322851442  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t3322851442_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t3322851442  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t3322851442 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t3322851442  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t3322851442_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t3322851442  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t3322851442 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t3322851442  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t3322851442_StaticFields, ___Zero_2)); }
	inline TimeSpan_t3322851442  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t3322851442 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t3322851442  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T3322851442_H
#ifndef SYSTEMEXCEPTION_T2210084228_H
#define SYSTEMEXCEPTION_T2210084228_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t2210084228  : public Exception_t2038377577
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T2210084228_H
#ifndef CONTEXTBOUNDOBJECT_T1306076581_H
#define CONTEXTBOUNDOBJECT_T1306076581_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ContextBoundObject
struct  ContextBoundObject_t1306076581  : public MarshalByRefObject_t3511612679
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTBOUNDOBJECT_T1306076581_H
#ifndef RESOLVEEVENTARGS_T682394723_H
#define RESOLVEEVENTARGS_T682394723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ResolveEventArgs
struct  ResolveEventArgs_t682394723  : public EventArgs_t1303406721
{
public:
	// System.String System.ResolveEventArgs::m_Name
	String_t* ___m_Name_1;

public:
	inline static int32_t get_offset_of_m_Name_1() { return static_cast<int32_t>(offsetof(ResolveEventArgs_t682394723, ___m_Name_1)); }
	inline String_t* get_m_Name_1() const { return ___m_Name_1; }
	inline String_t** get_address_of_m_Name_1() { return &___m_Name_1; }
	inline void set_m_Name_1(String_t* value)
	{
		___m_Name_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Name_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOLVEEVENTARGS_T682394723_H
#ifndef APPLICATIONEXCEPTION_T3847393849_H
#define APPLICATIONEXCEPTION_T3847393849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ApplicationException
struct  ApplicationException_t3847393849  : public Exception_t2038377577
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONEXCEPTION_T3847393849_H
#ifndef NULLREFERENCEEXCEPTION_T2185676726_H
#define NULLREFERENCEEXCEPTION_T2185676726_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NullReferenceException
struct  NullReferenceException_t2185676726  : public SystemException_t2210084228
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLREFERENCEEXCEPTION_T2185676726_H
#ifndef MONOASYNCCALL_T3121238468_H
#define MONOASYNCCALL_T3121238468_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoAsyncCall
struct  MonoAsyncCall_t3121238468  : public RuntimeObject
{
public:
	// System.Object System.MonoAsyncCall::msg
	RuntimeObject * ___msg_0;
	// System.IntPtr System.MonoAsyncCall::cb_method
	intptr_t ___cb_method_1;
	// System.Object System.MonoAsyncCall::cb_target
	RuntimeObject * ___cb_target_2;
	// System.Object System.MonoAsyncCall::state
	RuntimeObject * ___state_3;
	// System.Object System.MonoAsyncCall::res
	RuntimeObject * ___res_4;
	// System.Object System.MonoAsyncCall::out_args
	RuntimeObject * ___out_args_5;
	// System.Int64 System.MonoAsyncCall::wait_event
	int64_t ___wait_event_6;

public:
	inline static int32_t get_offset_of_msg_0() { return static_cast<int32_t>(offsetof(MonoAsyncCall_t3121238468, ___msg_0)); }
	inline RuntimeObject * get_msg_0() const { return ___msg_0; }
	inline RuntimeObject ** get_address_of_msg_0() { return &___msg_0; }
	inline void set_msg_0(RuntimeObject * value)
	{
		___msg_0 = value;
		Il2CppCodeGenWriteBarrier((&___msg_0), value);
	}

	inline static int32_t get_offset_of_cb_method_1() { return static_cast<int32_t>(offsetof(MonoAsyncCall_t3121238468, ___cb_method_1)); }
	inline intptr_t get_cb_method_1() const { return ___cb_method_1; }
	inline intptr_t* get_address_of_cb_method_1() { return &___cb_method_1; }
	inline void set_cb_method_1(intptr_t value)
	{
		___cb_method_1 = value;
	}

	inline static int32_t get_offset_of_cb_target_2() { return static_cast<int32_t>(offsetof(MonoAsyncCall_t3121238468, ___cb_target_2)); }
	inline RuntimeObject * get_cb_target_2() const { return ___cb_target_2; }
	inline RuntimeObject ** get_address_of_cb_target_2() { return &___cb_target_2; }
	inline void set_cb_target_2(RuntimeObject * value)
	{
		___cb_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___cb_target_2), value);
	}

	inline static int32_t get_offset_of_state_3() { return static_cast<int32_t>(offsetof(MonoAsyncCall_t3121238468, ___state_3)); }
	inline RuntimeObject * get_state_3() const { return ___state_3; }
	inline RuntimeObject ** get_address_of_state_3() { return &___state_3; }
	inline void set_state_3(RuntimeObject * value)
	{
		___state_3 = value;
		Il2CppCodeGenWriteBarrier((&___state_3), value);
	}

	inline static int32_t get_offset_of_res_4() { return static_cast<int32_t>(offsetof(MonoAsyncCall_t3121238468, ___res_4)); }
	inline RuntimeObject * get_res_4() const { return ___res_4; }
	inline RuntimeObject ** get_address_of_res_4() { return &___res_4; }
	inline void set_res_4(RuntimeObject * value)
	{
		___res_4 = value;
		Il2CppCodeGenWriteBarrier((&___res_4), value);
	}

	inline static int32_t get_offset_of_out_args_5() { return static_cast<int32_t>(offsetof(MonoAsyncCall_t3121238468, ___out_args_5)); }
	inline RuntimeObject * get_out_args_5() const { return ___out_args_5; }
	inline RuntimeObject ** get_address_of_out_args_5() { return &___out_args_5; }
	inline void set_out_args_5(RuntimeObject * value)
	{
		___out_args_5 = value;
		Il2CppCodeGenWriteBarrier((&___out_args_5), value);
	}

	inline static int32_t get_offset_of_wait_event_6() { return static_cast<int32_t>(offsetof(MonoAsyncCall_t3121238468, ___wait_event_6)); }
	inline int64_t get_wait_event_6() const { return ___wait_event_6; }
	inline int64_t* get_address_of_wait_event_6() { return &___wait_event_6; }
	inline void set_wait_event_6(int64_t value)
	{
		___wait_event_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOASYNCCALL_T3121238468_H
#ifndef RUNTIMEMETHODHANDLE_T2092377273_H
#define RUNTIMEMETHODHANDLE_T2092377273_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeMethodHandle
struct  RuntimeMethodHandle_t2092377273 
{
public:
	// System.IntPtr System.RuntimeMethodHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeMethodHandle_t2092377273, ___value_0)); }
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
#endif // RUNTIMEMETHODHANDLE_T2092377273_H
#ifndef TYPELOADEXCEPTION_T662751264_H
#define TYPELOADEXCEPTION_T662751264_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeLoadException
struct  TypeLoadException_t662751264  : public SystemException_t2210084228
{
public:
	// System.String System.TypeLoadException::className
	String_t* ___className_12;
	// System.String System.TypeLoadException::assemblyName
	String_t* ___assemblyName_13;

public:
	inline static int32_t get_offset_of_className_12() { return static_cast<int32_t>(offsetof(TypeLoadException_t662751264, ___className_12)); }
	inline String_t* get_className_12() const { return ___className_12; }
	inline String_t** get_address_of_className_12() { return &___className_12; }
	inline void set_className_12(String_t* value)
	{
		___className_12 = value;
		Il2CppCodeGenWriteBarrier((&___className_12), value);
	}

	inline static int32_t get_offset_of_assemblyName_13() { return static_cast<int32_t>(offsetof(TypeLoadException_t662751264, ___assemblyName_13)); }
	inline String_t* get_assemblyName_13() const { return ___assemblyName_13; }
	inline String_t** get_address_of_assemblyName_13() { return &___assemblyName_13; }
	inline void set_assemblyName_13(String_t* value)
	{
		___assemblyName_13 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELOADEXCEPTION_T662751264_H
#ifndef RANKEXCEPTION_T403763498_H
#define RANKEXCEPTION_T403763498_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RankException
struct  RankException_t403763498  : public SystemException_t2210084228
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANKEXCEPTION_T403763498_H
#ifndef MULTICASTNOTSUPPORTEDEXCEPTION_T2857899371_H
#define MULTICASTNOTSUPPORTEDEXCEPTION_T2857899371_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastNotSupportedException
struct  MulticastNotSupportedException_t2857899371  : public SystemException_t2210084228
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTNOTSUPPORTEDEXCEPTION_T2857899371_H
#ifndef PLATFORMID_T405509743_H
#define PLATFORMID_T405509743_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.PlatformID
struct  PlatformID_t405509743 
{
public:
	// System.Int32 System.PlatformID::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PlatformID_t405509743, ___value___1)); }
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
#endif // PLATFORMID_T405509743_H
#ifndef OUTOFMEMORYEXCEPTION_T782299704_H
#define OUTOFMEMORYEXCEPTION_T782299704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OutOfMemoryException
struct  OutOfMemoryException_t782299704  : public SystemException_t2210084228
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUTOFMEMORYEXCEPTION_T782299704_H
#ifndef NOTIMPLEMENTEDEXCEPTION_T1542628665_H
#define NOTIMPLEMENTEDEXCEPTION_T1542628665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotImplementedException
struct  NotImplementedException_t1542628665  : public SystemException_t2210084228
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIMPLEMENTEDEXCEPTION_T1542628665_H
#ifndef PRINCIPALPOLICY_T495979854_H
#define PRINCIPALPOLICY_T495979854_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.PrincipalPolicy
struct  PrincipalPolicy_t495979854 
{
public:
	// System.Int32 System.Security.Principal.PrincipalPolicy::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PrincipalPolicy_t495979854, ___value___1)); }
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
#endif // PRINCIPALPOLICY_T495979854_H
#ifndef STACKOVERFLOWEXCEPTION_T910691218_H
#define STACKOVERFLOWEXCEPTION_T910691218_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StackOverflowException
struct  StackOverflowException_t910691218  : public SystemException_t2210084228
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKOVERFLOWEXCEPTION_T910691218_H
#ifndef NOTSUPPORTEDEXCEPTION_T2487033105_H
#define NOTSUPPORTEDEXCEPTION_T2487033105_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t2487033105  : public SystemException_t2210084228
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T2487033105_H
#ifndef RUNTIMETYPEHANDLE_T1873936514_H
#define RUNTIMETYPEHANDLE_T1873936514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t1873936514 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t1873936514, ___value_0)); }
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
#endif // RUNTIMETYPEHANDLE_T1873936514_H
#ifndef THREADINTERRUPTEDEXCEPTION_T151853079_H
#define THREADINTERRUPTEDEXCEPTION_T151853079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadInterruptedException
struct  ThreadInterruptedException_t151853079  : public SystemException_t2210084228
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADINTERRUPTEDEXCEPTION_T151853079_H
#ifndef ARRAYTYPEMISMATCHEXCEPTION_T930825571_H
#define ARRAYTYPEMISMATCHEXCEPTION_T930825571_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArrayTypeMismatchException
struct  ArrayTypeMismatchException_t930825571  : public SystemException_t2210084228
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYTYPEMISMATCHEXCEPTION_T930825571_H
#ifndef ATTRIBUTETARGETS_T1613716473_H
#define ATTRIBUTETARGETS_T1613716473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AttributeTargets
struct  AttributeTargets_t1613716473 
{
public:
	// System.Int32 System.AttributeTargets::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AttributeTargets_t1613716473, ___value___1)); }
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
#endif // ATTRIBUTETARGETS_T1613716473_H
#ifndef WHICH_T3947353013_H
#define WHICH_T3947353013_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime/Which
struct  Which_t3947353013 
{
public:
	// System.Int32 System.DateTime/Which::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Which_t3947353013, ___value___1)); }
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
#endif // WHICH_T3947353013_H
#ifndef MEMBERACCESSEXCEPTION_T1711299098_H
#define MEMBERACCESSEXCEPTION_T1711299098_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MemberAccessException
struct  MemberAccessException_t1711299098  : public SystemException_t2210084228
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERACCESSEXCEPTION_T1711299098_H
#ifndef DATETIMEKIND_T1106466873_H
#define DATETIMEKIND_T1106466873_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t1106466873 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t1106466873, ___value___1)); }
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
#endif // DATETIMEKIND_T1106466873_H
#ifndef ACCESSVIOLATIONEXCEPTION_T2219982846_H
#define ACCESSVIOLATIONEXCEPTION_T2219982846_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AccessViolationException
struct  AccessViolationException_t2219982846  : public SystemException_t2210084228
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACCESSVIOLATIONEXCEPTION_T2219982846_H
#ifndef WAITHANDLE_T3767532909_H
#define WAITHANDLE_T3767532909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitHandle
struct  WaitHandle_t3767532909  : public MarshalByRefObject_t3511612679
{
public:
	// Microsoft.Win32.SafeHandles.SafeWaitHandle System.Threading.WaitHandle::safe_wait_handle
	SafeWaitHandle_t3677400074 * ___safe_wait_handle_2;
	// System.Boolean System.Threading.WaitHandle::disposed
	bool ___disposed_4;

public:
	inline static int32_t get_offset_of_safe_wait_handle_2() { return static_cast<int32_t>(offsetof(WaitHandle_t3767532909, ___safe_wait_handle_2)); }
	inline SafeWaitHandle_t3677400074 * get_safe_wait_handle_2() const { return ___safe_wait_handle_2; }
	inline SafeWaitHandle_t3677400074 ** get_address_of_safe_wait_handle_2() { return &___safe_wait_handle_2; }
	inline void set_safe_wait_handle_2(SafeWaitHandle_t3677400074 * value)
	{
		___safe_wait_handle_2 = value;
		Il2CppCodeGenWriteBarrier((&___safe_wait_handle_2), value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(WaitHandle_t3767532909, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}
};

struct WaitHandle_t3767532909_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_3;

public:
	inline static int32_t get_offset_of_InvalidHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_t3767532909_StaticFields, ___InvalidHandle_3)); }
	inline intptr_t get_InvalidHandle_3() const { return ___InvalidHandle_3; }
	inline intptr_t* get_address_of_InvalidHandle_3() { return &___InvalidHandle_3; }
	inline void set_InvalidHandle_3(intptr_t value)
	{
		___InvalidHandle_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITHANDLE_T3767532909_H
#ifndef THREADSTATEEXCEPTION_T1480917842_H
#define THREADSTATEEXCEPTION_T1480917842_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadStateException
struct  ThreadStateException_t1480917842  : public SystemException_t2210084228
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSTATEEXCEPTION_T1480917842_H
#ifndef DAYOFWEEK_T1520320548_H
#define DAYOFWEEK_T1520320548_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DayOfWeek
struct  DayOfWeek_t1520320548 
{
public:
	// System.Int32 System.DayOfWeek::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DayOfWeek_t1520320548, ___value___1)); }
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
#endif // DAYOFWEEK_T1520320548_H
#ifndef THREADSTATE_T343949538_H
#define THREADSTATE_T343949538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadState
struct  ThreadState_t343949538 
{
public:
	// System.Int32 System.Threading.ThreadState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ThreadState_t343949538, ___value___1)); }
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
#endif // THREADSTATE_T343949538_H
#ifndef ARITHMETICEXCEPTION_T2576788645_H
#define ARITHMETICEXCEPTION_T2576788645_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArithmeticException
struct  ArithmeticException_t2576788645  : public SystemException_t2210084228
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARITHMETICEXCEPTION_T2576788645_H
#ifndef THREADABORTEXCEPTION_T2100309067_H
#define THREADABORTEXCEPTION_T2100309067_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadAbortException
struct  ThreadAbortException_t2100309067  : public SystemException_t2210084228
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADABORTEXCEPTION_T2100309067_H
#ifndef ARGUMENTEXCEPTION_T345812312_H
#define ARGUMENTEXCEPTION_T345812312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t345812312  : public SystemException_t2210084228
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t345812312, ___param_name_12)); }
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
#endif // ARGUMENTEXCEPTION_T345812312_H
#ifndef EXECUTIONENGINEEXCEPTION_T2393925026_H
#define EXECUTIONENGINEEXCEPTION_T2393925026_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ExecutionEngineException
struct  ExecutionEngineException_t2393925026  : public SystemException_t2210084228
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXECUTIONENGINEEXCEPTION_T2393925026_H
#ifndef BINDINGFLAGS_T942165093_H
#define BINDINGFLAGS_T942165093_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t942165093 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t942165093, ___value___1)); }
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
#endif // BINDINGFLAGS_T942165093_H
#ifndef FORMATEXCEPTION_T1540828544_H
#define FORMATEXCEPTION_T1540828544_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FormatException
struct  FormatException_t1540828544  : public SystemException_t2210084228
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATEXCEPTION_T1540828544_H
#ifndef INDEXOUTOFRANGEEXCEPTION_T3032476479_H
#define INDEXOUTOFRANGEEXCEPTION_T3032476479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IndexOutOfRangeException
struct  IndexOutOfRangeException_t3032476479  : public SystemException_t2210084228
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INDEXOUTOFRANGEEXCEPTION_T3032476479_H
#ifndef INVALIDCASTEXCEPTION_T3051705080_H
#define INVALIDCASTEXCEPTION_T3051705080_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidCastException
struct  InvalidCastException_t3051705080  : public SystemException_t2210084228
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDCASTEXCEPTION_T3051705080_H
#ifndef INVALIDOPERATIONEXCEPTION_T330130334_H
#define INVALIDOPERATIONEXCEPTION_T330130334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t330130334  : public SystemException_t2210084228
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T330130334_H
#ifndef LOADEROPTIMIZATION_T2166784085_H
#define LOADEROPTIMIZATION_T2166784085_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.LoaderOptimization
struct  LoaderOptimization_t2166784085 
{
public:
	// System.Int32 System.LoaderOptimization::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LoaderOptimization_t2166784085, ___value___1)); }
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
#endif // LOADEROPTIMIZATION_T2166784085_H
#ifndef SYNCHRONIZATIONLOCKEXCEPTION_T3729259098_H
#define SYNCHRONIZATIONLOCKEXCEPTION_T3729259098_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SynchronizationLockException
struct  SynchronizationLockException_t3729259098  : public SystemException_t2210084228
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZATIONLOCKEXCEPTION_T3729259098_H
#ifndef REGISTEREDWAITHANDLE_T3893640513_H
#define REGISTEREDWAITHANDLE_T3893640513_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.RegisteredWaitHandle
struct  RegisteredWaitHandle_t3893640513  : public MarshalByRefObject_t3511612679
{
public:
	// System.Threading.WaitHandle System.Threading.RegisteredWaitHandle::_waitObject
	WaitHandle_t3767532909 * ____waitObject_1;
	// System.Threading.WaitOrTimerCallback System.Threading.RegisteredWaitHandle::_callback
	WaitOrTimerCallback_t3740787230 * ____callback_2;
	// System.TimeSpan System.Threading.RegisteredWaitHandle::_timeout
	TimeSpan_t3322851442  ____timeout_3;
	// System.Object System.Threading.RegisteredWaitHandle::_state
	RuntimeObject * ____state_4;
	// System.Boolean System.Threading.RegisteredWaitHandle::_executeOnlyOnce
	bool ____executeOnlyOnce_5;
	// System.Threading.WaitHandle System.Threading.RegisteredWaitHandle::_finalEvent
	WaitHandle_t3767532909 * ____finalEvent_6;
	// System.Threading.ManualResetEvent System.Threading.RegisteredWaitHandle::_cancelEvent
	ManualResetEvent_t2315127291 * ____cancelEvent_7;
	// System.Int32 System.Threading.RegisteredWaitHandle::_callsInProcess
	int32_t ____callsInProcess_8;
	// System.Boolean System.Threading.RegisteredWaitHandle::_unregistered
	bool ____unregistered_9;

public:
	inline static int32_t get_offset_of__waitObject_1() { return static_cast<int32_t>(offsetof(RegisteredWaitHandle_t3893640513, ____waitObject_1)); }
	inline WaitHandle_t3767532909 * get__waitObject_1() const { return ____waitObject_1; }
	inline WaitHandle_t3767532909 ** get_address_of__waitObject_1() { return &____waitObject_1; }
	inline void set__waitObject_1(WaitHandle_t3767532909 * value)
	{
		____waitObject_1 = value;
		Il2CppCodeGenWriteBarrier((&____waitObject_1), value);
	}

	inline static int32_t get_offset_of__callback_2() { return static_cast<int32_t>(offsetof(RegisteredWaitHandle_t3893640513, ____callback_2)); }
	inline WaitOrTimerCallback_t3740787230 * get__callback_2() const { return ____callback_2; }
	inline WaitOrTimerCallback_t3740787230 ** get_address_of__callback_2() { return &____callback_2; }
	inline void set__callback_2(WaitOrTimerCallback_t3740787230 * value)
	{
		____callback_2 = value;
		Il2CppCodeGenWriteBarrier((&____callback_2), value);
	}

	inline static int32_t get_offset_of__timeout_3() { return static_cast<int32_t>(offsetof(RegisteredWaitHandle_t3893640513, ____timeout_3)); }
	inline TimeSpan_t3322851442  get__timeout_3() const { return ____timeout_3; }
	inline TimeSpan_t3322851442 * get_address_of__timeout_3() { return &____timeout_3; }
	inline void set__timeout_3(TimeSpan_t3322851442  value)
	{
		____timeout_3 = value;
	}

	inline static int32_t get_offset_of__state_4() { return static_cast<int32_t>(offsetof(RegisteredWaitHandle_t3893640513, ____state_4)); }
	inline RuntimeObject * get__state_4() const { return ____state_4; }
	inline RuntimeObject ** get_address_of__state_4() { return &____state_4; }
	inline void set__state_4(RuntimeObject * value)
	{
		____state_4 = value;
		Il2CppCodeGenWriteBarrier((&____state_4), value);
	}

	inline static int32_t get_offset_of__executeOnlyOnce_5() { return static_cast<int32_t>(offsetof(RegisteredWaitHandle_t3893640513, ____executeOnlyOnce_5)); }
	inline bool get__executeOnlyOnce_5() const { return ____executeOnlyOnce_5; }
	inline bool* get_address_of__executeOnlyOnce_5() { return &____executeOnlyOnce_5; }
	inline void set__executeOnlyOnce_5(bool value)
	{
		____executeOnlyOnce_5 = value;
	}

	inline static int32_t get_offset_of__finalEvent_6() { return static_cast<int32_t>(offsetof(RegisteredWaitHandle_t3893640513, ____finalEvent_6)); }
	inline WaitHandle_t3767532909 * get__finalEvent_6() const { return ____finalEvent_6; }
	inline WaitHandle_t3767532909 ** get_address_of__finalEvent_6() { return &____finalEvent_6; }
	inline void set__finalEvent_6(WaitHandle_t3767532909 * value)
	{
		____finalEvent_6 = value;
		Il2CppCodeGenWriteBarrier((&____finalEvent_6), value);
	}

	inline static int32_t get_offset_of__cancelEvent_7() { return static_cast<int32_t>(offsetof(RegisteredWaitHandle_t3893640513, ____cancelEvent_7)); }
	inline ManualResetEvent_t2315127291 * get__cancelEvent_7() const { return ____cancelEvent_7; }
	inline ManualResetEvent_t2315127291 ** get_address_of__cancelEvent_7() { return &____cancelEvent_7; }
	inline void set__cancelEvent_7(ManualResetEvent_t2315127291 * value)
	{
		____cancelEvent_7 = value;
		Il2CppCodeGenWriteBarrier((&____cancelEvent_7), value);
	}

	inline static int32_t get_offset_of__callsInProcess_8() { return static_cast<int32_t>(offsetof(RegisteredWaitHandle_t3893640513, ____callsInProcess_8)); }
	inline int32_t get__callsInProcess_8() const { return ____callsInProcess_8; }
	inline int32_t* get_address_of__callsInProcess_8() { return &____callsInProcess_8; }
	inline void set__callsInProcess_8(int32_t value)
	{
		____callsInProcess_8 = value;
	}

	inline static int32_t get_offset_of__unregistered_9() { return static_cast<int32_t>(offsetof(RegisteredWaitHandle_t3893640513, ____unregistered_9)); }
	inline bool get__unregistered_9() const { return ____unregistered_9; }
	inline bool* get_address_of__unregistered_9() { return &____unregistered_9; }
	inline void set__unregistered_9(bool value)
	{
		____unregistered_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGISTEREDWAITHANDLE_T3893640513_H
#ifndef SPECIALFOLDER_T3287482643_H
#define SPECIALFOLDER_T3287482643_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Environment/SpecialFolder
struct  SpecialFolder_t3287482643 
{
public:
	// System.Int32 System.Environment/SpecialFolder::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SpecialFolder_t3287482643, ___value___1)); }
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
#endif // SPECIALFOLDER_T3287482643_H
#ifndef THREAD_T553919686_H
#define THREAD_T553919686_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Thread
struct  Thread_t553919686  : public CriticalFinalizerObject_t4187350776
{
public:
	// System.Int32 System.Threading.Thread::lock_thread_id
	int32_t ___lock_thread_id_0;
	// System.IntPtr System.Threading.Thread::system_thread_handle
	intptr_t ___system_thread_handle_1;
	// System.Object System.Threading.Thread::cached_culture_info
	RuntimeObject * ___cached_culture_info_2;
	// System.IntPtr System.Threading.Thread::unused0
	intptr_t ___unused0_3;
	// System.Boolean System.Threading.Thread::threadpool_thread
	bool ___threadpool_thread_4;
	// System.IntPtr System.Threading.Thread::name
	intptr_t ___name_5;
	// System.Int32 System.Threading.Thread::name_len
	int32_t ___name_len_6;
	// System.Threading.ThreadState System.Threading.Thread::state
	int32_t ___state_7;
	// System.Object System.Threading.Thread::abort_exc
	RuntimeObject * ___abort_exc_8;
	// System.Int32 System.Threading.Thread::abort_state_handle
	int32_t ___abort_state_handle_9;
	// System.Int64 System.Threading.Thread::thread_id
	int64_t ___thread_id_10;
	// System.IntPtr System.Threading.Thread::start_notify
	intptr_t ___start_notify_11;
	// System.IntPtr System.Threading.Thread::stack_ptr
	intptr_t ___stack_ptr_12;
	// System.UIntPtr System.Threading.Thread::static_data
	uintptr_t ___static_data_13;
	// System.IntPtr System.Threading.Thread::jit_data
	intptr_t ___jit_data_14;
	// System.IntPtr System.Threading.Thread::lock_data
	intptr_t ___lock_data_15;
	// System.Object System.Threading.Thread::current_appcontext
	RuntimeObject * ___current_appcontext_16;
	// System.Int32 System.Threading.Thread::stack_size
	int32_t ___stack_size_17;
	// System.Object System.Threading.Thread::start_obj
	RuntimeObject * ___start_obj_18;
	// System.IntPtr System.Threading.Thread::appdomain_refs
	intptr_t ___appdomain_refs_19;
	// System.Int32 System.Threading.Thread::interruption_requested
	int32_t ___interruption_requested_20;
	// System.IntPtr System.Threading.Thread::suspend_event
	intptr_t ___suspend_event_21;
	// System.IntPtr System.Threading.Thread::suspended_event
	intptr_t ___suspended_event_22;
	// System.IntPtr System.Threading.Thread::resume_event
	intptr_t ___resume_event_23;
	// System.IntPtr System.Threading.Thread::synch_cs
	intptr_t ___synch_cs_24;
	// System.IntPtr System.Threading.Thread::serialized_culture_info
	intptr_t ___serialized_culture_info_25;
	// System.Int32 System.Threading.Thread::serialized_culture_info_len
	int32_t ___serialized_culture_info_len_26;
	// System.IntPtr System.Threading.Thread::serialized_ui_culture_info
	intptr_t ___serialized_ui_culture_info_27;
	// System.Int32 System.Threading.Thread::serialized_ui_culture_info_len
	int32_t ___serialized_ui_culture_info_len_28;
	// System.Boolean System.Threading.Thread::thread_dump_requested
	bool ___thread_dump_requested_29;
	// System.IntPtr System.Threading.Thread::end_stack
	intptr_t ___end_stack_30;
	// System.Boolean System.Threading.Thread::thread_interrupt_requested
	bool ___thread_interrupt_requested_31;
	// System.Byte System.Threading.Thread::apartment_state
	uint8_t ___apartment_state_32;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Thread::critical_region_level
	int32_t ___critical_region_level_33;
	// System.Int32 System.Threading.Thread::small_id
	int32_t ___small_id_34;
	// System.IntPtr System.Threading.Thread::manage_callback
	intptr_t ___manage_callback_35;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_36;
	// System.Threading.ExecutionContext System.Threading.Thread::ec_to_set
	ExecutionContext_t202972378 * ___ec_to_set_37;
	// System.IntPtr System.Threading.Thread::interrupt_on_stop
	intptr_t ___interrupt_on_stop_38;
	// System.IntPtr System.Threading.Thread::unused3
	intptr_t ___unused3_39;
	// System.IntPtr System.Threading.Thread::unused4
	intptr_t ___unused4_40;
	// System.IntPtr System.Threading.Thread::unused5
	intptr_t ___unused5_41;
	// System.IntPtr System.Threading.Thread::unused6
	intptr_t ___unused6_42;
	// System.MulticastDelegate System.Threading.Thread::threadstart
	MulticastDelegate_t3203678551 * ___threadstart_45;
	// System.Int32 System.Threading.Thread::managed_id
	int32_t ___managed_id_46;
	// System.Security.Principal.IPrincipal System.Threading.Thread::_principal
	RuntimeObject* ____principal_47;
	// System.Boolean System.Threading.Thread::in_currentculture
	bool ___in_currentculture_50;

public:
	inline static int32_t get_offset_of_lock_thread_id_0() { return static_cast<int32_t>(offsetof(Thread_t553919686, ___lock_thread_id_0)); }
	inline int32_t get_lock_thread_id_0() const { return ___lock_thread_id_0; }
	inline int32_t* get_address_of_lock_thread_id_0() { return &___lock_thread_id_0; }
	inline void set_lock_thread_id_0(int32_t value)
	{
		___lock_thread_id_0 = value;
	}

	inline static int32_t get_offset_of_system_thread_handle_1() { return static_cast<int32_t>(offsetof(Thread_t553919686, ___system_thread_handle_1)); }
	inline intptr_t get_system_thread_handle_1() const { return ___system_thread_handle_1; }
	inline intptr_t* get_address_of_system_thread_handle_1() { return &___system_thread_handle_1; }
	inline void set_system_thread_handle_1(intptr_t value)
	{
		___system_thread_handle_1 = value;
	}

	inline static int32_t get_offset_of_cached_culture_info_2() { return static_cast<int32_t>(offsetof(Thread_t553919686, ___cached_culture_info_2)); }
	inline RuntimeObject * get_cached_culture_info_2() const { return ___cached_culture_info_2; }
	inline RuntimeObject ** get_address_of_cached_culture_info_2() { return &___cached_culture_info_2; }
	inline void set_cached_culture_info_2(RuntimeObject * value)
	{
		___cached_culture_info_2 = value;
		Il2CppCodeGenWriteBarrier((&___cached_culture_info_2), value);
	}

	inline static int32_t get_offset_of_unused0_3() { return static_cast<int32_t>(offsetof(Thread_t553919686, ___unused0_3)); }
	inline intptr_t get_unused0_3() const { return ___unused0_3; }
	inline intptr_t* get_address_of_unused0_3() { return &___unused0_3; }
	inline void set_unused0_3(intptr_t value)
	{
		___unused0_3 = value;
	}

	inline static int32_t get_offset_of_threadpool_thread_4() { return static_cast<int32_t>(offsetof(Thread_t553919686, ___threadpool_thread_4)); }
	inline bool get_threadpool_thread_4() const { return ___threadpool_thread_4; }
	inline bool* get_address_of_threadpool_thread_4() { return &___threadpool_thread_4; }
	inline void set_threadpool_thread_4(bool value)
	{
		___threadpool_thread_4 = value;
	}

	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(Thread_t553919686, ___name_5)); }
	inline intptr_t get_name_5() const { return ___name_5; }
	inline intptr_t* get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(intptr_t value)
	{
		___name_5 = value;
	}

	inline static int32_t get_offset_of_name_len_6() { return static_cast<int32_t>(offsetof(Thread_t553919686, ___name_len_6)); }
	inline int32_t get_name_len_6() const { return ___name_len_6; }
	inline int32_t* get_address_of_name_len_6() { return &___name_len_6; }
	inline void set_name_len_6(int32_t value)
	{
		___name_len_6 = value;
	}

	inline static int32_t get_offset_of_state_7() { return static_cast<int32_t>(offsetof(Thread_t553919686, ___state_7)); }
	inline int32_t get_state_7() const { return ___state_7; }
	inline int32_t* get_address_of_state_7() { return &___state_7; }
	inline void set_state_7(int32_t value)
	{
		___state_7 = value;
	}

	inline static int32_t get_offset_of_abort_exc_8() { return static_cast<int32_t>(offsetof(Thread_t553919686, ___abort_exc_8)); }
	inline RuntimeObject * get_abort_exc_8() const { return ___abort_exc_8; }
	inline RuntimeObject ** get_address_of_abort_exc_8() { return &___abort_exc_8; }
	inline void set_abort_exc_8(RuntimeObject * value)
	{
		___abort_exc_8 = value;
		Il2CppCodeGenWriteBarrier((&___abort_exc_8), value);
	}

	inline static int32_t get_offset_of_abort_state_handle_9() { return static_cast<int32_t>(offsetof(Thread_t553919686, ___abort_state_handle_9)); }
	inline int32_t get_abort_state_handle_9() const { return ___abort_state_handle_9; }
	inline int32_t* get_address_of_abort_state_handle_9() { return &___abort_state_handle_9; }
	inline void set_abort_state_handle_9(int32_t value)
	{
		___abort_state_handle_9 = value;
	}

	inline static int32_t get_offset_of_thread_id_10() { return static_cast<int32_t>(offsetof(Thread_t553919686, ___thread_id_10)); }
	inline int64_t get_thread_id_10() const { return ___thread_id_10; }
	inline int64_t* get_address_of_thread_id_10() { return &___thread_id_10; }
	inline void set_thread_id_10(int64_t value)
	{
		___thread_id_10 = value;
	}

	inline static int32_t get_offset_of_start_notify_11() { return static_cast<int32_t>(offsetof(Thread_t553919686, ___start_notify_11)); }
	inline intptr_t get_start_notify_11() const { return ___start_notify_11; }
	inline intptr_t* get_address_of_start_notify_11() { return &___start_notify_11; }
	inline void set_start_notify_11(intptr_t value)
	{
		___start_notify_11 = value;
	}

	inline static int32_t get_offset_of_stack_ptr_12() { return static_cast<int32_t>(offsetof(Thread_t553919686, ___stack_ptr_12)); }
	inline intptr_t get_stack_ptr_12() const { return ___stack_ptr_12; }
	inline intptr_t* get_address_of_stack_ptr_12() { return &___stack_ptr_12; }
	inline void set_stack_ptr_12(intptr_t value)
	{
		___stack_ptr_12 = value;
	}

	inline static int32_t get_offset_of_static_data_13() { return static_cast<int32_t>(offsetof(Thread_t553919686, ___static_data_13)); }
	inline uintptr_t get_static_data_13() const { return ___static_data_13; }
	inline uintptr_t* get_address_of_static_data_13() { return &___static_data_13; }
	inline void set_static_data_13(uintptr_t value)
	{
		___static_data_13 = value;
	}

	inline static int32_t get_offset_of_jit_data_14() { return static_cast<int32_t>(offsetof(Thread_t553919686, ___jit_data_14)); }
	inline intptr_t get_jit_data_14() const { return ___jit_data_14; }
	inline intptr_t* get_address_of_jit_data_14() { return &___jit_data_14; }
	inline void set_jit_data_14(intptr_t value)
	{
		___jit_data_14 = value;
	}

	inline static int32_t get_offset_of_lock_data_15() { return static_cast<int32_t>(offsetof(Thread_t553919686, ___lock_data_15)); }
	inline intptr_t get_lock_data_15() const { return ___lock_data_15; }
	inline intptr_t* get_address_of_lock_data_15() { return &___lock_data_15; }
	inline void set_lock_data_15(intptr_t value)
	{
		___lock_data_15 = value;
	}

	inline static int32_t get_offset_of_current_appcontext_16() { return static_cast<int32_t>(offsetof(Thread_t553919686, ___current_appcontext_16)); }
	inline RuntimeObject * get_current_appcontext_16() const { return ___current_appcontext_16; }
	inline RuntimeObject ** get_address_of_current_appcontext_16() { return &___current_appcontext_16; }
	inline void set_current_appcontext_16(RuntimeObject * value)
	{
		___current_appcontext_16 = value;
		Il2CppCodeGenWriteBarrier((&___current_appcontext_16), value);
	}

	inline static int32_t get_offset_of_stack_size_17() { return static_cast<int32_t>(offsetof(Thread_t553919686, ___stack_size_17)); }
	inline int32_t get_stack_size_17() const { return ___stack_size_17; }
	inline int32_t* get_address_of_stack_size_17() { return &___stack_size_17; }
	inline void set_stack_size_17(int32_t value)
	{
		___stack_size_17 = value;
	}

	inline static int32_t get_offset_of_start_obj_18() { return static_cast<int32_t>(offsetof(Thread_t553919686, ___start_obj_18)); }
	inline RuntimeObject * get_start_obj_18() const { return ___start_obj_18; }
	inline RuntimeObject ** get_address_of_start_obj_18() { return &___start_obj_18; }
	inline void set_start_obj_18(RuntimeObject * value)
	{
		___start_obj_18 = value;
		Il2CppCodeGenWriteBarrier((&___start_obj_18), value);
	}

	inline static int32_t get_offset_of_appdomain_refs_19() { return static_cast<int32_t>(offsetof(Thread_t553919686, ___appdomain_refs_19)); }
	inline intptr_t get_appdomain_refs_19() const { return ___appdomain_refs_19; }
	inline intptr_t* get_address_of_appdomain_refs_19() { return &___appdomain_refs_19; }
	inline void set_appdomain_refs_19(intptr_t value)
	{
		___appdomain_refs_19 = value;
	}

	inline static int32_t get_offset_of_interruption_requested_20() { return static_cast<int32_t>(offsetof(Thread_t553919686, ___interruption_requested_20)); }
	inline int32_t get_interruption_requested_20() const { return ___interruption_requested_20; }
	inline int32_t* get_address_of_interruption_requested_20() { return &___interruption_requested_20; }
	inline void set_interruption_requested_20(int32_t value)
	{
		___interruption_requested_20 = value;
	}

	inline static int32_t get_offset_of_suspend_event_21() { return static_cast<int32_t>(offsetof(Thread_t553919686, ___suspend_event_21)); }
	inline intptr_t get_suspend_event_21() const { return ___suspend_event_21; }
	inline intptr_t* get_address_of_suspend_event_21() { return &___suspend_event_21; }
	inline void set_suspend_event_21(intptr_t value)
	{
		___suspend_event_21 = value;
	}

	inline static int32_t get_offset_of_suspended_event_22() { return static_cast<int32_t>(offsetof(Thread_t553919686, ___suspended_event_22)); }
	inline intptr_t get_suspended_event_22() const { return ___suspended_event_22; }
	inline intptr_t* get_address_of_suspended_event_22() { return &___suspended_event_22; }
	inline void set_suspended_event_22(intptr_t value)
	{
		___suspended_event_22 = value;
	}

	inline static int32_t get_offset_of_resume_event_23() { return static_cast<int32_t>(offsetof(Thread_t553919686, ___resume_event_23)); }
	inline intptr_t get_resume_event_23() const { return ___resume_event_23; }
	inline intptr_t* get_address_of_resume_event_23() { return &___resume_event_23; }
	inline void set_resume_event_23(intptr_t value)
	{
		___resume_event_23 = value;
	}

	inline static int32_t get_offset_of_synch_cs_24() { return static_cast<int32_t>(offsetof(Thread_t553919686, ___synch_cs_24)); }
	inline intptr_t get_synch_cs_24() const { return ___synch_cs_24; }
	inline intptr_t* get_address_of_synch_cs_24() { return &___synch_cs_24; }
	inline void set_synch_cs_24(intptr_t value)
	{
		___synch_cs_24 = value;
	}

	inline static int32_t get_offset_of_serialized_culture_info_25() { return static_cast<int32_t>(offsetof(Thread_t553919686, ___serialized_culture_info_25)); }
	inline intptr_t get_serialized_culture_info_25() const { return ___serialized_culture_info_25; }
	inline intptr_t* get_address_of_serialized_culture_info_25() { return &___serialized_culture_info_25; }
	inline void set_serialized_culture_info_25(intptr_t value)
	{
		___serialized_culture_info_25 = value;
	}

	inline static int32_t get_offset_of_serialized_culture_info_len_26() { return static_cast<int32_t>(offsetof(Thread_t553919686, ___serialized_culture_info_len_26)); }
	inline int32_t get_serialized_culture_info_len_26() const { return ___serialized_culture_info_len_26; }
	inline int32_t* get_address_of_serialized_culture_info_len_26() { return &___serialized_culture_info_len_26; }
	inline void set_serialized_culture_info_len_26(int32_t value)
	{
		___serialized_culture_info_len_26 = value;
	}

	inline static int32_t get_offset_of_serialized_ui_culture_info_27() { return static_cast<int32_t>(offsetof(Thread_t553919686, ___serialized_ui_culture_info_27)); }
	inline intptr_t get_serialized_ui_culture_info_27() const { return ___serialized_ui_culture_info_27; }
	inline intptr_t* get_address_of_serialized_ui_culture_info_27() { return &___serialized_ui_culture_info_27; }
	inline void set_serialized_ui_culture_info_27(intptr_t value)
	{
		___serialized_ui_culture_info_27 = value;
	}

	inline static int32_t get_offset_of_serialized_ui_culture_info_len_28() { return static_cast<int32_t>(offsetof(Thread_t553919686, ___serialized_ui_culture_info_len_28)); }
	inline int32_t get_serialized_ui_culture_info_len_28() const { return ___serialized_ui_culture_info_len_28; }
	inline int32_t* get_address_of_serialized_ui_culture_info_len_28() { return &___serialized_ui_culture_info_len_28; }
	inline void set_serialized_ui_culture_info_len_28(int32_t value)
	{
		___serialized_ui_culture_info_len_28 = value;
	}

	inline static int32_t get_offset_of_thread_dump_requested_29() { return static_cast<int32_t>(offsetof(Thread_t553919686, ___thread_dump_requested_29)); }
	inline bool get_thread_dump_requested_29() const { return ___thread_dump_requested_29; }
	inline bool* get_address_of_thread_dump_requested_29() { return &___thread_dump_requested_29; }
	inline void set_thread_dump_requested_29(bool value)
	{
		___thread_dump_requested_29 = value;
	}

	inline static int32_t get_offset_of_end_stack_30() { return static_cast<int32_t>(offsetof(Thread_t553919686, ___end_stack_30)); }
	inline intptr_t get_end_stack_30() const { return ___end_stack_30; }
	inline intptr_t* get_address_of_end_stack_30() { return &___end_stack_30; }
	inline void set_end_stack_30(intptr_t value)
	{
		___end_stack_30 = value;
	}

	inline static int32_t get_offset_of_thread_interrupt_requested_31() { return static_cast<int32_t>(offsetof(Thread_t553919686, ___thread_interrupt_requested_31)); }
	inline bool get_thread_interrupt_requested_31() const { return ___thread_interrupt_requested_31; }
	inline bool* get_address_of_thread_interrupt_requested_31() { return &___thread_interrupt_requested_31; }
	inline void set_thread_interrupt_requested_31(bool value)
	{
		___thread_interrupt_requested_31 = value;
	}

	inline static int32_t get_offset_of_apartment_state_32() { return static_cast<int32_t>(offsetof(Thread_t553919686, ___apartment_state_32)); }
	inline uint8_t get_apartment_state_32() const { return ___apartment_state_32; }
	inline uint8_t* get_address_of_apartment_state_32() { return &___apartment_state_32; }
	inline void set_apartment_state_32(uint8_t value)
	{
		___apartment_state_32 = value;
	}

	inline static int32_t get_offset_of_critical_region_level_33() { return static_cast<int32_t>(offsetof(Thread_t553919686, ___critical_region_level_33)); }
	inline int32_t get_critical_region_level_33() const { return ___critical_region_level_33; }
	inline int32_t* get_address_of_critical_region_level_33() { return &___critical_region_level_33; }
	inline void set_critical_region_level_33(int32_t value)
	{
		___critical_region_level_33 = value;
	}

	inline static int32_t get_offset_of_small_id_34() { return static_cast<int32_t>(offsetof(Thread_t553919686, ___small_id_34)); }
	inline int32_t get_small_id_34() const { return ___small_id_34; }
	inline int32_t* get_address_of_small_id_34() { return &___small_id_34; }
	inline void set_small_id_34(int32_t value)
	{
		___small_id_34 = value;
	}

	inline static int32_t get_offset_of_manage_callback_35() { return static_cast<int32_t>(offsetof(Thread_t553919686, ___manage_callback_35)); }
	inline intptr_t get_manage_callback_35() const { return ___manage_callback_35; }
	inline intptr_t* get_address_of_manage_callback_35() { return &___manage_callback_35; }
	inline void set_manage_callback_35(intptr_t value)
	{
		___manage_callback_35 = value;
	}

	inline static int32_t get_offset_of_pending_exception_36() { return static_cast<int32_t>(offsetof(Thread_t553919686, ___pending_exception_36)); }
	inline RuntimeObject * get_pending_exception_36() const { return ___pending_exception_36; }
	inline RuntimeObject ** get_address_of_pending_exception_36() { return &___pending_exception_36; }
	inline void set_pending_exception_36(RuntimeObject * value)
	{
		___pending_exception_36 = value;
		Il2CppCodeGenWriteBarrier((&___pending_exception_36), value);
	}

	inline static int32_t get_offset_of_ec_to_set_37() { return static_cast<int32_t>(offsetof(Thread_t553919686, ___ec_to_set_37)); }
	inline ExecutionContext_t202972378 * get_ec_to_set_37() const { return ___ec_to_set_37; }
	inline ExecutionContext_t202972378 ** get_address_of_ec_to_set_37() { return &___ec_to_set_37; }
	inline void set_ec_to_set_37(ExecutionContext_t202972378 * value)
	{
		___ec_to_set_37 = value;
		Il2CppCodeGenWriteBarrier((&___ec_to_set_37), value);
	}

	inline static int32_t get_offset_of_interrupt_on_stop_38() { return static_cast<int32_t>(offsetof(Thread_t553919686, ___interrupt_on_stop_38)); }
	inline intptr_t get_interrupt_on_stop_38() const { return ___interrupt_on_stop_38; }
	inline intptr_t* get_address_of_interrupt_on_stop_38() { return &___interrupt_on_stop_38; }
	inline void set_interrupt_on_stop_38(intptr_t value)
	{
		___interrupt_on_stop_38 = value;
	}

	inline static int32_t get_offset_of_unused3_39() { return static_cast<int32_t>(offsetof(Thread_t553919686, ___unused3_39)); }
	inline intptr_t get_unused3_39() const { return ___unused3_39; }
	inline intptr_t* get_address_of_unused3_39() { return &___unused3_39; }
	inline void set_unused3_39(intptr_t value)
	{
		___unused3_39 = value;
	}

	inline static int32_t get_offset_of_unused4_40() { return static_cast<int32_t>(offsetof(Thread_t553919686, ___unused4_40)); }
	inline intptr_t get_unused4_40() const { return ___unused4_40; }
	inline intptr_t* get_address_of_unused4_40() { return &___unused4_40; }
	inline void set_unused4_40(intptr_t value)
	{
		___unused4_40 = value;
	}

	inline static int32_t get_offset_of_unused5_41() { return static_cast<int32_t>(offsetof(Thread_t553919686, ___unused5_41)); }
	inline intptr_t get_unused5_41() const { return ___unused5_41; }
	inline intptr_t* get_address_of_unused5_41() { return &___unused5_41; }
	inline void set_unused5_41(intptr_t value)
	{
		___unused5_41 = value;
	}

	inline static int32_t get_offset_of_unused6_42() { return static_cast<int32_t>(offsetof(Thread_t553919686, ___unused6_42)); }
	inline intptr_t get_unused6_42() const { return ___unused6_42; }
	inline intptr_t* get_address_of_unused6_42() { return &___unused6_42; }
	inline void set_unused6_42(intptr_t value)
	{
		___unused6_42 = value;
	}

	inline static int32_t get_offset_of_threadstart_45() { return static_cast<int32_t>(offsetof(Thread_t553919686, ___threadstart_45)); }
	inline MulticastDelegate_t3203678551 * get_threadstart_45() const { return ___threadstart_45; }
	inline MulticastDelegate_t3203678551 ** get_address_of_threadstart_45() { return &___threadstart_45; }
	inline void set_threadstart_45(MulticastDelegate_t3203678551 * value)
	{
		___threadstart_45 = value;
		Il2CppCodeGenWriteBarrier((&___threadstart_45), value);
	}

	inline static int32_t get_offset_of_managed_id_46() { return static_cast<int32_t>(offsetof(Thread_t553919686, ___managed_id_46)); }
	inline int32_t get_managed_id_46() const { return ___managed_id_46; }
	inline int32_t* get_address_of_managed_id_46() { return &___managed_id_46; }
	inline void set_managed_id_46(int32_t value)
	{
		___managed_id_46 = value;
	}

	inline static int32_t get_offset_of__principal_47() { return static_cast<int32_t>(offsetof(Thread_t553919686, ____principal_47)); }
	inline RuntimeObject* get__principal_47() const { return ____principal_47; }
	inline RuntimeObject** get_address_of__principal_47() { return &____principal_47; }
	inline void set__principal_47(RuntimeObject* value)
	{
		____principal_47 = value;
		Il2CppCodeGenWriteBarrier((&____principal_47), value);
	}

	inline static int32_t get_offset_of_in_currentculture_50() { return static_cast<int32_t>(offsetof(Thread_t553919686, ___in_currentculture_50)); }
	inline bool get_in_currentculture_50() const { return ___in_currentculture_50; }
	inline bool* get_address_of_in_currentculture_50() { return &___in_currentculture_50; }
	inline void set_in_currentculture_50(bool value)
	{
		___in_currentculture_50 = value;
	}
};

struct Thread_t553919686_StaticFields
{
public:
	// System.Collections.Hashtable System.Threading.Thread::datastorehash
	Hashtable_t2876210346 * ___datastorehash_48;
	// System.Object System.Threading.Thread::datastore_lock
	RuntimeObject * ___datastore_lock_49;
	// System.Object System.Threading.Thread::culture_lock
	RuntimeObject * ___culture_lock_51;

public:
	inline static int32_t get_offset_of_datastorehash_48() { return static_cast<int32_t>(offsetof(Thread_t553919686_StaticFields, ___datastorehash_48)); }
	inline Hashtable_t2876210346 * get_datastorehash_48() const { return ___datastorehash_48; }
	inline Hashtable_t2876210346 ** get_address_of_datastorehash_48() { return &___datastorehash_48; }
	inline void set_datastorehash_48(Hashtable_t2876210346 * value)
	{
		___datastorehash_48 = value;
		Il2CppCodeGenWriteBarrier((&___datastorehash_48), value);
	}

	inline static int32_t get_offset_of_datastore_lock_49() { return static_cast<int32_t>(offsetof(Thread_t553919686_StaticFields, ___datastore_lock_49)); }
	inline RuntimeObject * get_datastore_lock_49() const { return ___datastore_lock_49; }
	inline RuntimeObject ** get_address_of_datastore_lock_49() { return &___datastore_lock_49; }
	inline void set_datastore_lock_49(RuntimeObject * value)
	{
		___datastore_lock_49 = value;
		Il2CppCodeGenWriteBarrier((&___datastore_lock_49), value);
	}

	inline static int32_t get_offset_of_culture_lock_51() { return static_cast<int32_t>(offsetof(Thread_t553919686_StaticFields, ___culture_lock_51)); }
	inline RuntimeObject * get_culture_lock_51() const { return ___culture_lock_51; }
	inline RuntimeObject ** get_address_of_culture_lock_51() { return &___culture_lock_51; }
	inline void set_culture_lock_51(RuntimeObject * value)
	{
		___culture_lock_51 = value;
		Il2CppCodeGenWriteBarrier((&___culture_lock_51), value);
	}
};

struct Thread_t553919686_ThreadStaticFields
{
public:
	// System.Object[] System.Threading.Thread::local_slots
	ObjectU5BU5D_t791365558* ___local_slots_43;
	// System.Threading.ExecutionContext System.Threading.Thread::_ec
	ExecutionContext_t202972378 * ____ec_44;

public:
	inline static int32_t get_offset_of_local_slots_43() { return static_cast<int32_t>(offsetof(Thread_t553919686_ThreadStaticFields, ___local_slots_43)); }
	inline ObjectU5BU5D_t791365558* get_local_slots_43() const { return ___local_slots_43; }
	inline ObjectU5BU5D_t791365558** get_address_of_local_slots_43() { return &___local_slots_43; }
	inline void set_local_slots_43(ObjectU5BU5D_t791365558* value)
	{
		___local_slots_43 = value;
		Il2CppCodeGenWriteBarrier((&___local_slots_43), value);
	}

	inline static int32_t get_offset_of__ec_44() { return static_cast<int32_t>(offsetof(Thread_t553919686_ThreadStaticFields, ____ec_44)); }
	inline ExecutionContext_t202972378 * get__ec_44() const { return ____ec_44; }
	inline ExecutionContext_t202972378 ** get_address_of__ec_44() { return &____ec_44; }
	inline void set__ec_44(ExecutionContext_t202972378 * value)
	{
		____ec_44 = value;
		Il2CppCodeGenWriteBarrier((&____ec_44), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREAD_T553919686_H
#ifndef APPDOMAIN_T3548177653_H
#define APPDOMAIN_T3548177653_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AppDomain
struct  AppDomain_t3548177653  : public MarshalByRefObject_t3511612679
{
public:
	// System.IntPtr System.AppDomain::_mono_app_domain
	intptr_t ____mono_app_domain_1;
	// System.Security.Policy.Evidence System.AppDomain::_evidence
	Evidence_t1489258759 * ____evidence_6;
	// System.Security.PermissionSet System.AppDomain::_granted
	PermissionSet_t1789701757 * ____granted_7;
	// System.Security.Principal.PrincipalPolicy System.AppDomain::_principalPolicy
	int32_t ____principalPolicy_8;
	// System.AppDomainManager System.AppDomain::_domain_manager
	AppDomainManager_t1322683753 * ____domain_manager_11;
	// System.ActivationContext System.AppDomain::_activation
	ActivationContext_t2851808966 * ____activation_12;
	// System.ApplicationIdentity System.AppDomain::_applicationIdentity
	ApplicationIdentity_t4137633900 * ____applicationIdentity_13;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_t1432153386 * ___AssemblyLoad_14;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_t3576160498 * ___AssemblyResolve_15;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_t1739171887 * ___DomainUnload_16;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_t1739171887 * ___ProcessExit_17;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_t3576160498 * ___ResourceResolve_18;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_t3576160498 * ___TypeResolve_19;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_t2259281728 * ___UnhandledException_20;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_t3576160498 * ___ReflectionOnlyAssemblyResolve_21;

public:
	inline static int32_t get_offset_of__mono_app_domain_1() { return static_cast<int32_t>(offsetof(AppDomain_t3548177653, ____mono_app_domain_1)); }
	inline intptr_t get__mono_app_domain_1() const { return ____mono_app_domain_1; }
	inline intptr_t* get_address_of__mono_app_domain_1() { return &____mono_app_domain_1; }
	inline void set__mono_app_domain_1(intptr_t value)
	{
		____mono_app_domain_1 = value;
	}

	inline static int32_t get_offset_of__evidence_6() { return static_cast<int32_t>(offsetof(AppDomain_t3548177653, ____evidence_6)); }
	inline Evidence_t1489258759 * get__evidence_6() const { return ____evidence_6; }
	inline Evidence_t1489258759 ** get_address_of__evidence_6() { return &____evidence_6; }
	inline void set__evidence_6(Evidence_t1489258759 * value)
	{
		____evidence_6 = value;
		Il2CppCodeGenWriteBarrier((&____evidence_6), value);
	}

	inline static int32_t get_offset_of__granted_7() { return static_cast<int32_t>(offsetof(AppDomain_t3548177653, ____granted_7)); }
	inline PermissionSet_t1789701757 * get__granted_7() const { return ____granted_7; }
	inline PermissionSet_t1789701757 ** get_address_of__granted_7() { return &____granted_7; }
	inline void set__granted_7(PermissionSet_t1789701757 * value)
	{
		____granted_7 = value;
		Il2CppCodeGenWriteBarrier((&____granted_7), value);
	}

	inline static int32_t get_offset_of__principalPolicy_8() { return static_cast<int32_t>(offsetof(AppDomain_t3548177653, ____principalPolicy_8)); }
	inline int32_t get__principalPolicy_8() const { return ____principalPolicy_8; }
	inline int32_t* get_address_of__principalPolicy_8() { return &____principalPolicy_8; }
	inline void set__principalPolicy_8(int32_t value)
	{
		____principalPolicy_8 = value;
	}

	inline static int32_t get_offset_of__domain_manager_11() { return static_cast<int32_t>(offsetof(AppDomain_t3548177653, ____domain_manager_11)); }
	inline AppDomainManager_t1322683753 * get__domain_manager_11() const { return ____domain_manager_11; }
	inline AppDomainManager_t1322683753 ** get_address_of__domain_manager_11() { return &____domain_manager_11; }
	inline void set__domain_manager_11(AppDomainManager_t1322683753 * value)
	{
		____domain_manager_11 = value;
		Il2CppCodeGenWriteBarrier((&____domain_manager_11), value);
	}

	inline static int32_t get_offset_of__activation_12() { return static_cast<int32_t>(offsetof(AppDomain_t3548177653, ____activation_12)); }
	inline ActivationContext_t2851808966 * get__activation_12() const { return ____activation_12; }
	inline ActivationContext_t2851808966 ** get_address_of__activation_12() { return &____activation_12; }
	inline void set__activation_12(ActivationContext_t2851808966 * value)
	{
		____activation_12 = value;
		Il2CppCodeGenWriteBarrier((&____activation_12), value);
	}

	inline static int32_t get_offset_of__applicationIdentity_13() { return static_cast<int32_t>(offsetof(AppDomain_t3548177653, ____applicationIdentity_13)); }
	inline ApplicationIdentity_t4137633900 * get__applicationIdentity_13() const { return ____applicationIdentity_13; }
	inline ApplicationIdentity_t4137633900 ** get_address_of__applicationIdentity_13() { return &____applicationIdentity_13; }
	inline void set__applicationIdentity_13(ApplicationIdentity_t4137633900 * value)
	{
		____applicationIdentity_13 = value;
		Il2CppCodeGenWriteBarrier((&____applicationIdentity_13), value);
	}

	inline static int32_t get_offset_of_AssemblyLoad_14() { return static_cast<int32_t>(offsetof(AppDomain_t3548177653, ___AssemblyLoad_14)); }
	inline AssemblyLoadEventHandler_t1432153386 * get_AssemblyLoad_14() const { return ___AssemblyLoad_14; }
	inline AssemblyLoadEventHandler_t1432153386 ** get_address_of_AssemblyLoad_14() { return &___AssemblyLoad_14; }
	inline void set_AssemblyLoad_14(AssemblyLoadEventHandler_t1432153386 * value)
	{
		___AssemblyLoad_14 = value;
		Il2CppCodeGenWriteBarrier((&___AssemblyLoad_14), value);
	}

	inline static int32_t get_offset_of_AssemblyResolve_15() { return static_cast<int32_t>(offsetof(AppDomain_t3548177653, ___AssemblyResolve_15)); }
	inline ResolveEventHandler_t3576160498 * get_AssemblyResolve_15() const { return ___AssemblyResolve_15; }
	inline ResolveEventHandler_t3576160498 ** get_address_of_AssemblyResolve_15() { return &___AssemblyResolve_15; }
	inline void set_AssemblyResolve_15(ResolveEventHandler_t3576160498 * value)
	{
		___AssemblyResolve_15 = value;
		Il2CppCodeGenWriteBarrier((&___AssemblyResolve_15), value);
	}

	inline static int32_t get_offset_of_DomainUnload_16() { return static_cast<int32_t>(offsetof(AppDomain_t3548177653, ___DomainUnload_16)); }
	inline EventHandler_t1739171887 * get_DomainUnload_16() const { return ___DomainUnload_16; }
	inline EventHandler_t1739171887 ** get_address_of_DomainUnload_16() { return &___DomainUnload_16; }
	inline void set_DomainUnload_16(EventHandler_t1739171887 * value)
	{
		___DomainUnload_16 = value;
		Il2CppCodeGenWriteBarrier((&___DomainUnload_16), value);
	}

	inline static int32_t get_offset_of_ProcessExit_17() { return static_cast<int32_t>(offsetof(AppDomain_t3548177653, ___ProcessExit_17)); }
	inline EventHandler_t1739171887 * get_ProcessExit_17() const { return ___ProcessExit_17; }
	inline EventHandler_t1739171887 ** get_address_of_ProcessExit_17() { return &___ProcessExit_17; }
	inline void set_ProcessExit_17(EventHandler_t1739171887 * value)
	{
		___ProcessExit_17 = value;
		Il2CppCodeGenWriteBarrier((&___ProcessExit_17), value);
	}

	inline static int32_t get_offset_of_ResourceResolve_18() { return static_cast<int32_t>(offsetof(AppDomain_t3548177653, ___ResourceResolve_18)); }
	inline ResolveEventHandler_t3576160498 * get_ResourceResolve_18() const { return ___ResourceResolve_18; }
	inline ResolveEventHandler_t3576160498 ** get_address_of_ResourceResolve_18() { return &___ResourceResolve_18; }
	inline void set_ResourceResolve_18(ResolveEventHandler_t3576160498 * value)
	{
		___ResourceResolve_18 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceResolve_18), value);
	}

	inline static int32_t get_offset_of_TypeResolve_19() { return static_cast<int32_t>(offsetof(AppDomain_t3548177653, ___TypeResolve_19)); }
	inline ResolveEventHandler_t3576160498 * get_TypeResolve_19() const { return ___TypeResolve_19; }
	inline ResolveEventHandler_t3576160498 ** get_address_of_TypeResolve_19() { return &___TypeResolve_19; }
	inline void set_TypeResolve_19(ResolveEventHandler_t3576160498 * value)
	{
		___TypeResolve_19 = value;
		Il2CppCodeGenWriteBarrier((&___TypeResolve_19), value);
	}

	inline static int32_t get_offset_of_UnhandledException_20() { return static_cast<int32_t>(offsetof(AppDomain_t3548177653, ___UnhandledException_20)); }
	inline UnhandledExceptionEventHandler_t2259281728 * get_UnhandledException_20() const { return ___UnhandledException_20; }
	inline UnhandledExceptionEventHandler_t2259281728 ** get_address_of_UnhandledException_20() { return &___UnhandledException_20; }
	inline void set_UnhandledException_20(UnhandledExceptionEventHandler_t2259281728 * value)
	{
		___UnhandledException_20 = value;
		Il2CppCodeGenWriteBarrier((&___UnhandledException_20), value);
	}

	inline static int32_t get_offset_of_ReflectionOnlyAssemblyResolve_21() { return static_cast<int32_t>(offsetof(AppDomain_t3548177653, ___ReflectionOnlyAssemblyResolve_21)); }
	inline ResolveEventHandler_t3576160498 * get_ReflectionOnlyAssemblyResolve_21() const { return ___ReflectionOnlyAssemblyResolve_21; }
	inline ResolveEventHandler_t3576160498 ** get_address_of_ReflectionOnlyAssemblyResolve_21() { return &___ReflectionOnlyAssemblyResolve_21; }
	inline void set_ReflectionOnlyAssemblyResolve_21(ResolveEventHandler_t3576160498 * value)
	{
		___ReflectionOnlyAssemblyResolve_21 = value;
		Il2CppCodeGenWriteBarrier((&___ReflectionOnlyAssemblyResolve_21), value);
	}
};

struct AppDomain_t3548177653_StaticFields
{
public:
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid_2;
	// System.AppDomain System.AppDomain::default_domain
	AppDomain_t3548177653 * ___default_domain_10;

public:
	inline static int32_t get_offset_of__process_guid_2() { return static_cast<int32_t>(offsetof(AppDomain_t3548177653_StaticFields, ____process_guid_2)); }
	inline String_t* get__process_guid_2() const { return ____process_guid_2; }
	inline String_t** get_address_of__process_guid_2() { return &____process_guid_2; }
	inline void set__process_guid_2(String_t* value)
	{
		____process_guid_2 = value;
		Il2CppCodeGenWriteBarrier((&____process_guid_2), value);
	}

	inline static int32_t get_offset_of_default_domain_10() { return static_cast<int32_t>(offsetof(AppDomain_t3548177653_StaticFields, ___default_domain_10)); }
	inline AppDomain_t3548177653 * get_default_domain_10() const { return ___default_domain_10; }
	inline AppDomain_t3548177653 ** get_address_of_default_domain_10() { return &___default_domain_10; }
	inline void set_default_domain_10(AppDomain_t3548177653 * value)
	{
		___default_domain_10 = value;
		Il2CppCodeGenWriteBarrier((&___default_domain_10), value);
	}
};

struct AppDomain_t3548177653_ThreadStaticFields
{
public:
	// System.Collections.Hashtable System.AppDomain::type_resolve_in_progress
	Hashtable_t2876210346 * ___type_resolve_in_progress_3;
	// System.Collections.Hashtable System.AppDomain::assembly_resolve_in_progress
	Hashtable_t2876210346 * ___assembly_resolve_in_progress_4;
	// System.Collections.Hashtable System.AppDomain::assembly_resolve_in_progress_refonly
	Hashtable_t2876210346 * ___assembly_resolve_in_progress_refonly_5;
	// System.Security.Principal.IPrincipal System.AppDomain::_principal
	RuntimeObject* ____principal_9;

public:
	inline static int32_t get_offset_of_type_resolve_in_progress_3() { return static_cast<int32_t>(offsetof(AppDomain_t3548177653_ThreadStaticFields, ___type_resolve_in_progress_3)); }
	inline Hashtable_t2876210346 * get_type_resolve_in_progress_3() const { return ___type_resolve_in_progress_3; }
	inline Hashtable_t2876210346 ** get_address_of_type_resolve_in_progress_3() { return &___type_resolve_in_progress_3; }
	inline void set_type_resolve_in_progress_3(Hashtable_t2876210346 * value)
	{
		___type_resolve_in_progress_3 = value;
		Il2CppCodeGenWriteBarrier((&___type_resolve_in_progress_3), value);
	}

	inline static int32_t get_offset_of_assembly_resolve_in_progress_4() { return static_cast<int32_t>(offsetof(AppDomain_t3548177653_ThreadStaticFields, ___assembly_resolve_in_progress_4)); }
	inline Hashtable_t2876210346 * get_assembly_resolve_in_progress_4() const { return ___assembly_resolve_in_progress_4; }
	inline Hashtable_t2876210346 ** get_address_of_assembly_resolve_in_progress_4() { return &___assembly_resolve_in_progress_4; }
	inline void set_assembly_resolve_in_progress_4(Hashtable_t2876210346 * value)
	{
		___assembly_resolve_in_progress_4 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_resolve_in_progress_4), value);
	}

	inline static int32_t get_offset_of_assembly_resolve_in_progress_refonly_5() { return static_cast<int32_t>(offsetof(AppDomain_t3548177653_ThreadStaticFields, ___assembly_resolve_in_progress_refonly_5)); }
	inline Hashtable_t2876210346 * get_assembly_resolve_in_progress_refonly_5() const { return ___assembly_resolve_in_progress_refonly_5; }
	inline Hashtable_t2876210346 ** get_address_of_assembly_resolve_in_progress_refonly_5() { return &___assembly_resolve_in_progress_refonly_5; }
	inline void set_assembly_resolve_in_progress_refonly_5(Hashtable_t2876210346 * value)
	{
		___assembly_resolve_in_progress_refonly_5 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_resolve_in_progress_refonly_5), value);
	}

	inline static int32_t get_offset_of__principal_9() { return static_cast<int32_t>(offsetof(AppDomain_t3548177653_ThreadStaticFields, ____principal_9)); }
	inline RuntimeObject* get__principal_9() const { return ____principal_9; }
	inline RuntimeObject** get_address_of__principal_9() { return &____principal_9; }
	inline void set__principal_9(RuntimeObject* value)
	{
		____principal_9 = value;
		Il2CppCodeGenWriteBarrier((&____principal_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPDOMAIN_T3548177653_H
#ifndef APPDOMAINSETUP_T3686712183_H
#define APPDOMAINSETUP_T3686712183_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AppDomainSetup
struct  AppDomainSetup_t3686712183  : public RuntimeObject
{
public:
	// System.String System.AppDomainSetup::application_base
	String_t* ___application_base_0;
	// System.String System.AppDomainSetup::application_name
	String_t* ___application_name_1;
	// System.String System.AppDomainSetup::cache_path
	String_t* ___cache_path_2;
	// System.String System.AppDomainSetup::configuration_file
	String_t* ___configuration_file_3;
	// System.String System.AppDomainSetup::dynamic_base
	String_t* ___dynamic_base_4;
	// System.String System.AppDomainSetup::license_file
	String_t* ___license_file_5;
	// System.String System.AppDomainSetup::private_bin_path
	String_t* ___private_bin_path_6;
	// System.String System.AppDomainSetup::private_bin_path_probe
	String_t* ___private_bin_path_probe_7;
	// System.String System.AppDomainSetup::shadow_copy_directories
	String_t* ___shadow_copy_directories_8;
	// System.String System.AppDomainSetup::shadow_copy_files
	String_t* ___shadow_copy_files_9;
	// System.Boolean System.AppDomainSetup::publisher_policy
	bool ___publisher_policy_10;
	// System.Boolean System.AppDomainSetup::path_changed
	bool ___path_changed_11;
	// System.LoaderOptimization System.AppDomainSetup::loader_optimization
	int32_t ___loader_optimization_12;
	// System.Boolean System.AppDomainSetup::disallow_binding_redirects
	bool ___disallow_binding_redirects_13;
	// System.Boolean System.AppDomainSetup::disallow_code_downloads
	bool ___disallow_code_downloads_14;
	// System.Runtime.Hosting.ActivationArguments System.AppDomainSetup::_activationArguments
	ActivationArguments_t3237249187 * ____activationArguments_15;
	// System.AppDomainInitializer System.AppDomainSetup::domain_initializer
	AppDomainInitializer_t2374693748 * ___domain_initializer_16;
	// System.Security.Policy.ApplicationTrust System.AppDomainSetup::application_trust
	ApplicationTrust_t3644315908 * ___application_trust_17;
	// System.String[] System.AppDomainSetup::domain_initializer_args
	StringU5BU5D_t626887548* ___domain_initializer_args_18;
	// System.Security.SecurityElement System.AppDomainSetup::application_trust_xml
	SecurityElement_t81532998 * ___application_trust_xml_19;
	// System.Boolean System.AppDomainSetup::disallow_appbase_probe
	bool ___disallow_appbase_probe_20;
	// System.Byte[] System.AppDomainSetup::configuration_bytes
	ByteU5BU5D_t532980522* ___configuration_bytes_21;

public:
	inline static int32_t get_offset_of_application_base_0() { return static_cast<int32_t>(offsetof(AppDomainSetup_t3686712183, ___application_base_0)); }
	inline String_t* get_application_base_0() const { return ___application_base_0; }
	inline String_t** get_address_of_application_base_0() { return &___application_base_0; }
	inline void set_application_base_0(String_t* value)
	{
		___application_base_0 = value;
		Il2CppCodeGenWriteBarrier((&___application_base_0), value);
	}

	inline static int32_t get_offset_of_application_name_1() { return static_cast<int32_t>(offsetof(AppDomainSetup_t3686712183, ___application_name_1)); }
	inline String_t* get_application_name_1() const { return ___application_name_1; }
	inline String_t** get_address_of_application_name_1() { return &___application_name_1; }
	inline void set_application_name_1(String_t* value)
	{
		___application_name_1 = value;
		Il2CppCodeGenWriteBarrier((&___application_name_1), value);
	}

	inline static int32_t get_offset_of_cache_path_2() { return static_cast<int32_t>(offsetof(AppDomainSetup_t3686712183, ___cache_path_2)); }
	inline String_t* get_cache_path_2() const { return ___cache_path_2; }
	inline String_t** get_address_of_cache_path_2() { return &___cache_path_2; }
	inline void set_cache_path_2(String_t* value)
	{
		___cache_path_2 = value;
		Il2CppCodeGenWriteBarrier((&___cache_path_2), value);
	}

	inline static int32_t get_offset_of_configuration_file_3() { return static_cast<int32_t>(offsetof(AppDomainSetup_t3686712183, ___configuration_file_3)); }
	inline String_t* get_configuration_file_3() const { return ___configuration_file_3; }
	inline String_t** get_address_of_configuration_file_3() { return &___configuration_file_3; }
	inline void set_configuration_file_3(String_t* value)
	{
		___configuration_file_3 = value;
		Il2CppCodeGenWriteBarrier((&___configuration_file_3), value);
	}

	inline static int32_t get_offset_of_dynamic_base_4() { return static_cast<int32_t>(offsetof(AppDomainSetup_t3686712183, ___dynamic_base_4)); }
	inline String_t* get_dynamic_base_4() const { return ___dynamic_base_4; }
	inline String_t** get_address_of_dynamic_base_4() { return &___dynamic_base_4; }
	inline void set_dynamic_base_4(String_t* value)
	{
		___dynamic_base_4 = value;
		Il2CppCodeGenWriteBarrier((&___dynamic_base_4), value);
	}

	inline static int32_t get_offset_of_license_file_5() { return static_cast<int32_t>(offsetof(AppDomainSetup_t3686712183, ___license_file_5)); }
	inline String_t* get_license_file_5() const { return ___license_file_5; }
	inline String_t** get_address_of_license_file_5() { return &___license_file_5; }
	inline void set_license_file_5(String_t* value)
	{
		___license_file_5 = value;
		Il2CppCodeGenWriteBarrier((&___license_file_5), value);
	}

	inline static int32_t get_offset_of_private_bin_path_6() { return static_cast<int32_t>(offsetof(AppDomainSetup_t3686712183, ___private_bin_path_6)); }
	inline String_t* get_private_bin_path_6() const { return ___private_bin_path_6; }
	inline String_t** get_address_of_private_bin_path_6() { return &___private_bin_path_6; }
	inline void set_private_bin_path_6(String_t* value)
	{
		___private_bin_path_6 = value;
		Il2CppCodeGenWriteBarrier((&___private_bin_path_6), value);
	}

	inline static int32_t get_offset_of_private_bin_path_probe_7() { return static_cast<int32_t>(offsetof(AppDomainSetup_t3686712183, ___private_bin_path_probe_7)); }
	inline String_t* get_private_bin_path_probe_7() const { return ___private_bin_path_probe_7; }
	inline String_t** get_address_of_private_bin_path_probe_7() { return &___private_bin_path_probe_7; }
	inline void set_private_bin_path_probe_7(String_t* value)
	{
		___private_bin_path_probe_7 = value;
		Il2CppCodeGenWriteBarrier((&___private_bin_path_probe_7), value);
	}

	inline static int32_t get_offset_of_shadow_copy_directories_8() { return static_cast<int32_t>(offsetof(AppDomainSetup_t3686712183, ___shadow_copy_directories_8)); }
	inline String_t* get_shadow_copy_directories_8() const { return ___shadow_copy_directories_8; }
	inline String_t** get_address_of_shadow_copy_directories_8() { return &___shadow_copy_directories_8; }
	inline void set_shadow_copy_directories_8(String_t* value)
	{
		___shadow_copy_directories_8 = value;
		Il2CppCodeGenWriteBarrier((&___shadow_copy_directories_8), value);
	}

	inline static int32_t get_offset_of_shadow_copy_files_9() { return static_cast<int32_t>(offsetof(AppDomainSetup_t3686712183, ___shadow_copy_files_9)); }
	inline String_t* get_shadow_copy_files_9() const { return ___shadow_copy_files_9; }
	inline String_t** get_address_of_shadow_copy_files_9() { return &___shadow_copy_files_9; }
	inline void set_shadow_copy_files_9(String_t* value)
	{
		___shadow_copy_files_9 = value;
		Il2CppCodeGenWriteBarrier((&___shadow_copy_files_9), value);
	}

	inline static int32_t get_offset_of_publisher_policy_10() { return static_cast<int32_t>(offsetof(AppDomainSetup_t3686712183, ___publisher_policy_10)); }
	inline bool get_publisher_policy_10() const { return ___publisher_policy_10; }
	inline bool* get_address_of_publisher_policy_10() { return &___publisher_policy_10; }
	inline void set_publisher_policy_10(bool value)
	{
		___publisher_policy_10 = value;
	}

	inline static int32_t get_offset_of_path_changed_11() { return static_cast<int32_t>(offsetof(AppDomainSetup_t3686712183, ___path_changed_11)); }
	inline bool get_path_changed_11() const { return ___path_changed_11; }
	inline bool* get_address_of_path_changed_11() { return &___path_changed_11; }
	inline void set_path_changed_11(bool value)
	{
		___path_changed_11 = value;
	}

	inline static int32_t get_offset_of_loader_optimization_12() { return static_cast<int32_t>(offsetof(AppDomainSetup_t3686712183, ___loader_optimization_12)); }
	inline int32_t get_loader_optimization_12() const { return ___loader_optimization_12; }
	inline int32_t* get_address_of_loader_optimization_12() { return &___loader_optimization_12; }
	inline void set_loader_optimization_12(int32_t value)
	{
		___loader_optimization_12 = value;
	}

	inline static int32_t get_offset_of_disallow_binding_redirects_13() { return static_cast<int32_t>(offsetof(AppDomainSetup_t3686712183, ___disallow_binding_redirects_13)); }
	inline bool get_disallow_binding_redirects_13() const { return ___disallow_binding_redirects_13; }
	inline bool* get_address_of_disallow_binding_redirects_13() { return &___disallow_binding_redirects_13; }
	inline void set_disallow_binding_redirects_13(bool value)
	{
		___disallow_binding_redirects_13 = value;
	}

	inline static int32_t get_offset_of_disallow_code_downloads_14() { return static_cast<int32_t>(offsetof(AppDomainSetup_t3686712183, ___disallow_code_downloads_14)); }
	inline bool get_disallow_code_downloads_14() const { return ___disallow_code_downloads_14; }
	inline bool* get_address_of_disallow_code_downloads_14() { return &___disallow_code_downloads_14; }
	inline void set_disallow_code_downloads_14(bool value)
	{
		___disallow_code_downloads_14 = value;
	}

	inline static int32_t get_offset_of__activationArguments_15() { return static_cast<int32_t>(offsetof(AppDomainSetup_t3686712183, ____activationArguments_15)); }
	inline ActivationArguments_t3237249187 * get__activationArguments_15() const { return ____activationArguments_15; }
	inline ActivationArguments_t3237249187 ** get_address_of__activationArguments_15() { return &____activationArguments_15; }
	inline void set__activationArguments_15(ActivationArguments_t3237249187 * value)
	{
		____activationArguments_15 = value;
		Il2CppCodeGenWriteBarrier((&____activationArguments_15), value);
	}

	inline static int32_t get_offset_of_domain_initializer_16() { return static_cast<int32_t>(offsetof(AppDomainSetup_t3686712183, ___domain_initializer_16)); }
	inline AppDomainInitializer_t2374693748 * get_domain_initializer_16() const { return ___domain_initializer_16; }
	inline AppDomainInitializer_t2374693748 ** get_address_of_domain_initializer_16() { return &___domain_initializer_16; }
	inline void set_domain_initializer_16(AppDomainInitializer_t2374693748 * value)
	{
		___domain_initializer_16 = value;
		Il2CppCodeGenWriteBarrier((&___domain_initializer_16), value);
	}

	inline static int32_t get_offset_of_application_trust_17() { return static_cast<int32_t>(offsetof(AppDomainSetup_t3686712183, ___application_trust_17)); }
	inline ApplicationTrust_t3644315908 * get_application_trust_17() const { return ___application_trust_17; }
	inline ApplicationTrust_t3644315908 ** get_address_of_application_trust_17() { return &___application_trust_17; }
	inline void set_application_trust_17(ApplicationTrust_t3644315908 * value)
	{
		___application_trust_17 = value;
		Il2CppCodeGenWriteBarrier((&___application_trust_17), value);
	}

	inline static int32_t get_offset_of_domain_initializer_args_18() { return static_cast<int32_t>(offsetof(AppDomainSetup_t3686712183, ___domain_initializer_args_18)); }
	inline StringU5BU5D_t626887548* get_domain_initializer_args_18() const { return ___domain_initializer_args_18; }
	inline StringU5BU5D_t626887548** get_address_of_domain_initializer_args_18() { return &___domain_initializer_args_18; }
	inline void set_domain_initializer_args_18(StringU5BU5D_t626887548* value)
	{
		___domain_initializer_args_18 = value;
		Il2CppCodeGenWriteBarrier((&___domain_initializer_args_18), value);
	}

	inline static int32_t get_offset_of_application_trust_xml_19() { return static_cast<int32_t>(offsetof(AppDomainSetup_t3686712183, ___application_trust_xml_19)); }
	inline SecurityElement_t81532998 * get_application_trust_xml_19() const { return ___application_trust_xml_19; }
	inline SecurityElement_t81532998 ** get_address_of_application_trust_xml_19() { return &___application_trust_xml_19; }
	inline void set_application_trust_xml_19(SecurityElement_t81532998 * value)
	{
		___application_trust_xml_19 = value;
		Il2CppCodeGenWriteBarrier((&___application_trust_xml_19), value);
	}

	inline static int32_t get_offset_of_disallow_appbase_probe_20() { return static_cast<int32_t>(offsetof(AppDomainSetup_t3686712183, ___disallow_appbase_probe_20)); }
	inline bool get_disallow_appbase_probe_20() const { return ___disallow_appbase_probe_20; }
	inline bool* get_address_of_disallow_appbase_probe_20() { return &___disallow_appbase_probe_20; }
	inline void set_disallow_appbase_probe_20(bool value)
	{
		___disallow_appbase_probe_20 = value;
	}

	inline static int32_t get_offset_of_configuration_bytes_21() { return static_cast<int32_t>(offsetof(AppDomainSetup_t3686712183, ___configuration_bytes_21)); }
	inline ByteU5BU5D_t532980522* get_configuration_bytes_21() const { return ___configuration_bytes_21; }
	inline ByteU5BU5D_t532980522** get_address_of_configuration_bytes_21() { return &___configuration_bytes_21; }
	inline void set_configuration_bytes_21(ByteU5BU5D_t532980522* value)
	{
		___configuration_bytes_21 = value;
		Il2CppCodeGenWriteBarrier((&___configuration_bytes_21), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPDOMAINSETUP_T3686712183_H
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
	RuntimeTypeHandle_t1873936514  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t1873936514  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t1873936514 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t1873936514  value)
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
	TypeU5BU5D_t3623644370* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t2512445373 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t2512445373 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t2512445373 * ___FilterNameIgnoreCase_6;
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
	inline TypeU5BU5D_t3623644370* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3623644370** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3623644370* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t2512445373 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t2512445373 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t2512445373 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t2512445373 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t2512445373 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t2512445373 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t2512445373 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t2512445373 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t2512445373 * value)
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
#ifndef METHODACCESSEXCEPTION_T3210213075_H
#define METHODACCESSEXCEPTION_T3210213075_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MethodAccessException
struct  MethodAccessException_t3210213075  : public MemberAccessException_t1711299098
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODACCESSEXCEPTION_T3210213075_H
#ifndef PLATFORMNOTSUPPORTEDEXCEPTION_T3765158775_H
#define PLATFORMNOTSUPPORTEDEXCEPTION_T3765158775_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.PlatformNotSupportedException
struct  PlatformNotSupportedException_t3765158775  : public NotSupportedException_t2487033105
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLATFORMNOTSUPPORTEDEXCEPTION_T3765158775_H
#ifndef ARGUMENTOUTOFRANGEEXCEPTION_T3525975574_H
#define ARGUMENTOUTOFRANGEEXCEPTION_T3525975574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t3525975574  : public ArgumentException_t345812312
{
public:
	// System.Object System.ArgumentOutOfRangeException::actual_value
	RuntimeObject * ___actual_value_13;

public:
	inline static int32_t get_offset_of_actual_value_13() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t3525975574, ___actual_value_13)); }
	inline RuntimeObject * get_actual_value_13() const { return ___actual_value_13; }
	inline RuntimeObject ** get_address_of_actual_value_13() { return &___actual_value_13; }
	inline void set_actual_value_13(RuntimeObject * value)
	{
		___actual_value_13 = value;
		Il2CppCodeGenWriteBarrier((&___actual_value_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTOUTOFRANGEEXCEPTION_T3525975574_H
#ifndef DATETIME_T2069620368_H
#define DATETIME_T2069620368_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t2069620368 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t3322851442  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t2069620368, ___ticks_0)); }
	inline TimeSpan_t3322851442  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t3322851442 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t3322851442  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t2069620368, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t2069620368_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t2069620368  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t2069620368  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t626887548* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t626887548* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t626887548* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t626887548* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t626887548* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t626887548* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t626887548* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t1558972250* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t1558972250* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t2069620368_StaticFields, ___MaxValue_2)); }
	inline DateTime_t2069620368  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t2069620368 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t2069620368  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t2069620368_StaticFields, ___MinValue_3)); }
	inline DateTime_t2069620368  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t2069620368 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t2069620368  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t2069620368_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t626887548* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t626887548** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t626887548* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t2069620368_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t626887548* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t626887548** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t626887548* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t2069620368_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t626887548* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t626887548** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t626887548* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t2069620368_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t626887548* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t626887548** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t626887548* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t2069620368_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t626887548* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t626887548** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t626887548* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t2069620368_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t626887548* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t626887548** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t626887548* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t2069620368_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t626887548* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t626887548** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t626887548* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t2069620368_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t1558972250* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t1558972250** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t1558972250* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t2069620368_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t1558972250* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t1558972250** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t1558972250* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t2069620368_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t2069620368_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T2069620368_H
#ifndef OVERFLOWEXCEPTION_T1086194029_H
#define OVERFLOWEXCEPTION_T1086194029_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OverflowException
struct  OverflowException_t1086194029  : public ArithmeticException_t2576788645
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OVERFLOWEXCEPTION_T1086194029_H
#ifndef OPERATINGSYSTEM_T4256499369_H
#define OPERATINGSYSTEM_T4256499369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OperatingSystem
struct  OperatingSystem_t4256499369  : public RuntimeObject
{
public:
	// System.PlatformID System.OperatingSystem::_platform
	int32_t ____platform_0;
	// System.Version System.OperatingSystem::_version
	Version_t2274984160 * ____version_1;
	// System.String System.OperatingSystem::_servicePack
	String_t* ____servicePack_2;

public:
	inline static int32_t get_offset_of__platform_0() { return static_cast<int32_t>(offsetof(OperatingSystem_t4256499369, ____platform_0)); }
	inline int32_t get__platform_0() const { return ____platform_0; }
	inline int32_t* get_address_of__platform_0() { return &____platform_0; }
	inline void set__platform_0(int32_t value)
	{
		____platform_0 = value;
	}

	inline static int32_t get_offset_of__version_1() { return static_cast<int32_t>(offsetof(OperatingSystem_t4256499369, ____version_1)); }
	inline Version_t2274984160 * get__version_1() const { return ____version_1; }
	inline Version_t2274984160 ** get_address_of__version_1() { return &____version_1; }
	inline void set__version_1(Version_t2274984160 * value)
	{
		____version_1 = value;
		Il2CppCodeGenWriteBarrier((&____version_1), value);
	}

	inline static int32_t get_offset_of__servicePack_2() { return static_cast<int32_t>(offsetof(OperatingSystem_t4256499369, ____servicePack_2)); }
	inline String_t* get__servicePack_2() const { return ____servicePack_2; }
	inline String_t** get_address_of__servicePack_2() { return &____servicePack_2; }
	inline void set__servicePack_2(String_t* value)
	{
		____servicePack_2 = value;
		Il2CppCodeGenWriteBarrier((&____servicePack_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPERATINGSYSTEM_T4256499369_H
#ifndef OBJECTDISPOSEDEXCEPTION_T3675417077_H
#define OBJECTDISPOSEDEXCEPTION_T3675417077_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ObjectDisposedException
struct  ObjectDisposedException_t3675417077  : public InvalidOperationException_t330130334
{
public:
	// System.String System.ObjectDisposedException::obj_name
	String_t* ___obj_name_12;
	// System.String System.ObjectDisposedException::msg
	String_t* ___msg_13;

public:
	inline static int32_t get_offset_of_obj_name_12() { return static_cast<int32_t>(offsetof(ObjectDisposedException_t3675417077, ___obj_name_12)); }
	inline String_t* get_obj_name_12() const { return ___obj_name_12; }
	inline String_t** get_address_of_obj_name_12() { return &___obj_name_12; }
	inline void set_obj_name_12(String_t* value)
	{
		___obj_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___obj_name_12), value);
	}

	inline static int32_t get_offset_of_msg_13() { return static_cast<int32_t>(offsetof(ObjectDisposedException_t3675417077, ___msg_13)); }
	inline String_t* get_msg_13() const { return ___msg_13; }
	inline String_t** get_address_of_msg_13() { return &___msg_13; }
	inline void set_msg_13(String_t* value)
	{
		___msg_13 = value;
		Il2CppCodeGenWriteBarrier((&___msg_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTDISPOSEDEXCEPTION_T3675417077_H
#ifndef DIVIDEBYZEROEXCEPTION_T3109699357_H
#define DIVIDEBYZEROEXCEPTION_T3109699357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DivideByZeroException
struct  DivideByZeroException_t3109699357  : public ArithmeticException_t2576788645
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIVIDEBYZEROEXCEPTION_T3109699357_H
#ifndef DLLNOTFOUNDEXCEPTION_T1441243769_H
#define DLLNOTFOUNDEXCEPTION_T1441243769_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DllNotFoundException
struct  DllNotFoundException_t1441243769  : public TypeLoadException_t662751264
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DLLNOTFOUNDEXCEPTION_T1441243769_H
#ifndef ENTRYPOINTNOTFOUNDEXCEPTION_T2444135647_H
#define ENTRYPOINTNOTFOUNDEXCEPTION_T2444135647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EntryPointNotFoundException
struct  EntryPointNotFoundException_t2444135647  : public TypeLoadException_t662751264
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENTRYPOINTNOTFOUNDEXCEPTION_T2444135647_H
#ifndef MISSINGMEMBEREXCEPTION_T681507010_H
#define MISSINGMEMBEREXCEPTION_T681507010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MissingMemberException
struct  MissingMemberException_t681507010  : public MemberAccessException_t1711299098
{
public:
	// System.String System.MissingMemberException::ClassName
	String_t* ___ClassName_11;
	// System.String System.MissingMemberException::MemberName
	String_t* ___MemberName_12;
	// System.Byte[] System.MissingMemberException::Signature
	ByteU5BU5D_t532980522* ___Signature_13;

public:
	inline static int32_t get_offset_of_ClassName_11() { return static_cast<int32_t>(offsetof(MissingMemberException_t681507010, ___ClassName_11)); }
	inline String_t* get_ClassName_11() const { return ___ClassName_11; }
	inline String_t** get_address_of_ClassName_11() { return &___ClassName_11; }
	inline void set_ClassName_11(String_t* value)
	{
		___ClassName_11 = value;
		Il2CppCodeGenWriteBarrier((&___ClassName_11), value);
	}

	inline static int32_t get_offset_of_MemberName_12() { return static_cast<int32_t>(offsetof(MissingMemberException_t681507010, ___MemberName_12)); }
	inline String_t* get_MemberName_12() const { return ___MemberName_12; }
	inline String_t** get_address_of_MemberName_12() { return &___MemberName_12; }
	inline void set_MemberName_12(String_t* value)
	{
		___MemberName_12 = value;
		Il2CppCodeGenWriteBarrier((&___MemberName_12), value);
	}

	inline static int32_t get_offset_of_Signature_13() { return static_cast<int32_t>(offsetof(MissingMemberException_t681507010, ___Signature_13)); }
	inline ByteU5BU5D_t532980522* get_Signature_13() const { return ___Signature_13; }
	inline ByteU5BU5D_t532980522** get_address_of_Signature_13() { return &___Signature_13; }
	inline void set_Signature_13(ByteU5BU5D_t532980522* value)
	{
		___Signature_13 = value;
		Il2CppCodeGenWriteBarrier((&___Signature_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSINGMEMBEREXCEPTION_T681507010_H
#ifndef ARGUMENTNULLEXCEPTION_T866011422_H
#define ARGUMENTNULLEXCEPTION_T866011422_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t866011422  : public ArgumentException_t345812312
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T866011422_H
#ifndef FIELDACCESSEXCEPTION_T3919253727_H
#define FIELDACCESSEXCEPTION_T3919253727_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FieldAccessException
struct  FieldAccessException_t3919253727  : public MemberAccessException_t1711299098
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDACCESSEXCEPTION_T3919253727_H
#ifndef DATETIMEOFFSET_T629262299_H
#define DATETIMEOFFSET_T629262299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeOffset
struct  DateTimeOffset_t629262299 
{
public:
	// System.DateTime System.DateTimeOffset::dt
	DateTime_t2069620368  ___dt_2;
	// System.TimeSpan System.DateTimeOffset::utc_offset
	TimeSpan_t3322851442  ___utc_offset_3;

public:
	inline static int32_t get_offset_of_dt_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t629262299, ___dt_2)); }
	inline DateTime_t2069620368  get_dt_2() const { return ___dt_2; }
	inline DateTime_t2069620368 * get_address_of_dt_2() { return &___dt_2; }
	inline void set_dt_2(DateTime_t2069620368  value)
	{
		___dt_2 = value;
	}

	inline static int32_t get_offset_of_utc_offset_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t629262299, ___utc_offset_3)); }
	inline TimeSpan_t3322851442  get_utc_offset_3() const { return ___utc_offset_3; }
	inline TimeSpan_t3322851442 * get_address_of_utc_offset_3() { return &___utc_offset_3; }
	inline void set_utc_offset_3(TimeSpan_t3322851442  value)
	{
		___utc_offset_3 = value;
	}
};

struct DateTimeOffset_t629262299_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t629262299  ___MaxValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t629262299  ___MinValue_1;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t629262299_StaticFields, ___MaxValue_0)); }
	inline DateTimeOffset_t629262299  get_MaxValue_0() const { return ___MaxValue_0; }
	inline DateTimeOffset_t629262299 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(DateTimeOffset_t629262299  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t629262299_StaticFields, ___MinValue_1)); }
	inline DateTimeOffset_t629262299  get_MinValue_1() const { return ___MinValue_1; }
	inline DateTimeOffset_t629262299 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(DateTimeOffset_t629262299  value)
	{
		___MinValue_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEOFFSET_T629262299_H
#ifndef MONOTYPE_T_H
#define MONOTYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoType
struct  MonoType_t  : public Type_t
{
public:
	// System.MonoTypeInfo System.MonoType::type_info
	MonoTypeInfo_t3353572741 * ___type_info_8;

public:
	inline static int32_t get_offset_of_type_info_8() { return static_cast<int32_t>(offsetof(MonoType_t, ___type_info_8)); }
	inline MonoTypeInfo_t3353572741 * get_type_info_8() const { return ___type_info_8; }
	inline MonoTypeInfo_t3353572741 ** get_address_of_type_info_8() { return &___type_info_8; }
	inline void set_type_info_8(MonoTypeInfo_t3353572741 * value)
	{
		___type_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___type_info_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTYPE_T_H
#ifndef MISSINGMETHODEXCEPTION_T3829242137_H
#define MISSINGMETHODEXCEPTION_T3829242137_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MissingMethodException
struct  MissingMethodException_t3829242137  : public MissingMemberException_t681507010
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSINGMETHODEXCEPTION_T3829242137_H
#ifndef MISSINGFIELDEXCEPTION_T3440335132_H
#define MISSINGFIELDEXCEPTION_T3440335132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MissingFieldException
struct  MissingFieldException_t3440335132  : public MissingMemberException_t681507010
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSINGFIELDEXCEPTION_T3440335132_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize800 = { sizeof (NativeEventCalls_t3571126172), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize801 = { sizeof (RegisteredWaitHandle_t3893640513), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable801[9] = 
{
	RegisteredWaitHandle_t3893640513::get_offset_of__waitObject_1(),
	RegisteredWaitHandle_t3893640513::get_offset_of__callback_2(),
	RegisteredWaitHandle_t3893640513::get_offset_of__timeout_3(),
	RegisteredWaitHandle_t3893640513::get_offset_of__state_4(),
	RegisteredWaitHandle_t3893640513::get_offset_of__executeOnlyOnce_5(),
	RegisteredWaitHandle_t3893640513::get_offset_of__finalEvent_6(),
	RegisteredWaitHandle_t3893640513::get_offset_of__cancelEvent_7(),
	RegisteredWaitHandle_t3893640513::get_offset_of__callsInProcess_8(),
	RegisteredWaitHandle_t3893640513::get_offset_of__unregistered_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize802 = { sizeof (SynchronizationContext_t2082318167), -1, 0, sizeof(SynchronizationContext_t2082318167_ThreadStaticFields) };
extern const int32_t g_FieldOffsetTable802[1] = 
{
	THREAD_STATIC_FIELD_OFFSET,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize803 = { sizeof (SynchronizationLockException_t3729259098), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize804 = { sizeof (Thread_t553919686), -1, sizeof(Thread_t553919686_StaticFields), sizeof(Thread_t553919686_ThreadStaticFields) };
extern const int32_t g_FieldOffsetTable804[52] = 
{
	Thread_t553919686::get_offset_of_lock_thread_id_0(),
	Thread_t553919686::get_offset_of_system_thread_handle_1(),
	Thread_t553919686::get_offset_of_cached_culture_info_2(),
	Thread_t553919686::get_offset_of_unused0_3(),
	Thread_t553919686::get_offset_of_threadpool_thread_4(),
	Thread_t553919686::get_offset_of_name_5(),
	Thread_t553919686::get_offset_of_name_len_6(),
	Thread_t553919686::get_offset_of_state_7(),
	Thread_t553919686::get_offset_of_abort_exc_8(),
	Thread_t553919686::get_offset_of_abort_state_handle_9(),
	Thread_t553919686::get_offset_of_thread_id_10(),
	Thread_t553919686::get_offset_of_start_notify_11(),
	Thread_t553919686::get_offset_of_stack_ptr_12(),
	Thread_t553919686::get_offset_of_static_data_13(),
	Thread_t553919686::get_offset_of_jit_data_14(),
	Thread_t553919686::get_offset_of_lock_data_15(),
	Thread_t553919686::get_offset_of_current_appcontext_16(),
	Thread_t553919686::get_offset_of_stack_size_17(),
	Thread_t553919686::get_offset_of_start_obj_18(),
	Thread_t553919686::get_offset_of_appdomain_refs_19(),
	Thread_t553919686::get_offset_of_interruption_requested_20(),
	Thread_t553919686::get_offset_of_suspend_event_21(),
	Thread_t553919686::get_offset_of_suspended_event_22(),
	Thread_t553919686::get_offset_of_resume_event_23(),
	Thread_t553919686::get_offset_of_synch_cs_24(),
	Thread_t553919686::get_offset_of_serialized_culture_info_25(),
	Thread_t553919686::get_offset_of_serialized_culture_info_len_26(),
	Thread_t553919686::get_offset_of_serialized_ui_culture_info_27(),
	Thread_t553919686::get_offset_of_serialized_ui_culture_info_len_28(),
	Thread_t553919686::get_offset_of_thread_dump_requested_29(),
	Thread_t553919686::get_offset_of_end_stack_30(),
	Thread_t553919686::get_offset_of_thread_interrupt_requested_31(),
	Thread_t553919686::get_offset_of_apartment_state_32(),
	Thread_t553919686::get_offset_of_critical_region_level_33(),
	Thread_t553919686::get_offset_of_small_id_34(),
	Thread_t553919686::get_offset_of_manage_callback_35(),
	Thread_t553919686::get_offset_of_pending_exception_36(),
	Thread_t553919686::get_offset_of_ec_to_set_37(),
	Thread_t553919686::get_offset_of_interrupt_on_stop_38(),
	Thread_t553919686::get_offset_of_unused3_39(),
	Thread_t553919686::get_offset_of_unused4_40(),
	Thread_t553919686::get_offset_of_unused5_41(),
	Thread_t553919686::get_offset_of_unused6_42(),
	THREAD_STATIC_FIELD_OFFSET,
	THREAD_STATIC_FIELD_OFFSET,
	Thread_t553919686::get_offset_of_threadstart_45(),
	Thread_t553919686::get_offset_of_managed_id_46(),
	Thread_t553919686::get_offset_of__principal_47(),
	Thread_t553919686_StaticFields::get_offset_of_datastorehash_48(),
	Thread_t553919686_StaticFields::get_offset_of_datastore_lock_49(),
	Thread_t553919686::get_offset_of_in_currentculture_50(),
	Thread_t553919686_StaticFields::get_offset_of_culture_lock_51(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize805 = { sizeof (ThreadAbortException_t2100309067), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize806 = { sizeof (ThreadInterruptedException_t151853079), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize807 = { sizeof (ThreadPool_t3064708390), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize808 = { sizeof (ThreadState_t343949538)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable808[11] = 
{
	ThreadState_t343949538::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize809 = { sizeof (ThreadStateException_t1480917842), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize810 = { sizeof (Timer_t2914235532), -1, sizeof(Timer_t2914235532_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable810[7] = 
{
	Timer_t2914235532_StaticFields::get_offset_of_scheduler_1(),
	Timer_t2914235532::get_offset_of_callback_2(),
	Timer_t2914235532::get_offset_of_state_3(),
	Timer_t2914235532::get_offset_of_due_time_ms_4(),
	Timer_t2914235532::get_offset_of_period_ms_5(),
	Timer_t2914235532::get_offset_of_next_run_6(),
	Timer_t2914235532::get_offset_of_disposed_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize811 = { sizeof (TimerComparer_t4201101803), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize812 = { sizeof (Scheduler_t3261027599), -1, sizeof(Scheduler_t3261027599_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable812[2] = 
{
	Scheduler_t3261027599_StaticFields::get_offset_of_instance_0(),
	Scheduler_t3261027599::get_offset_of_list_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize813 = { sizeof (WaitHandle_t3767532909), -1, sizeof(WaitHandle_t3767532909_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable813[4] = 
{
	0,
	WaitHandle_t3767532909::get_offset_of_safe_wait_handle_2(),
	WaitHandle_t3767532909_StaticFields::get_offset_of_InvalidHandle_3(),
	WaitHandle_t3767532909::get_offset_of_disposed_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize814 = { sizeof (AccessViolationException_t2219982846), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize815 = { sizeof (ActivationContext_t2851808966), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable815[1] = 
{
	ActivationContext_t2851808966::get_offset_of__disposed_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize816 = { sizeof (Activator_t3199484662), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize817 = { sizeof (AppDomain_t3548177653), -1, sizeof(AppDomain_t3548177653_StaticFields), sizeof(AppDomain_t3548177653_ThreadStaticFields) };
extern const int32_t g_FieldOffsetTable817[21] = 
{
	AppDomain_t3548177653::get_offset_of__mono_app_domain_1(),
	AppDomain_t3548177653_StaticFields::get_offset_of__process_guid_2(),
	THREAD_STATIC_FIELD_OFFSET,
	THREAD_STATIC_FIELD_OFFSET,
	THREAD_STATIC_FIELD_OFFSET,
	AppDomain_t3548177653::get_offset_of__evidence_6(),
	AppDomain_t3548177653::get_offset_of__granted_7(),
	AppDomain_t3548177653::get_offset_of__principalPolicy_8(),
	THREAD_STATIC_FIELD_OFFSET,
	AppDomain_t3548177653_StaticFields::get_offset_of_default_domain_10(),
	AppDomain_t3548177653::get_offset_of__domain_manager_11(),
	AppDomain_t3548177653::get_offset_of__activation_12(),
	AppDomain_t3548177653::get_offset_of__applicationIdentity_13(),
	AppDomain_t3548177653::get_offset_of_AssemblyLoad_14(),
	AppDomain_t3548177653::get_offset_of_AssemblyResolve_15(),
	AppDomain_t3548177653::get_offset_of_DomainUnload_16(),
	AppDomain_t3548177653::get_offset_of_ProcessExit_17(),
	AppDomain_t3548177653::get_offset_of_ResourceResolve_18(),
	AppDomain_t3548177653::get_offset_of_TypeResolve_19(),
	AppDomain_t3548177653::get_offset_of_UnhandledException_20(),
	AppDomain_t3548177653::get_offset_of_ReflectionOnlyAssemblyResolve_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize818 = { sizeof (AppDomainManager_t1322683753), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize819 = { sizeof (AppDomainSetup_t3686712183), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable819[22] = 
{
	AppDomainSetup_t3686712183::get_offset_of_application_base_0(),
	AppDomainSetup_t3686712183::get_offset_of_application_name_1(),
	AppDomainSetup_t3686712183::get_offset_of_cache_path_2(),
	AppDomainSetup_t3686712183::get_offset_of_configuration_file_3(),
	AppDomainSetup_t3686712183::get_offset_of_dynamic_base_4(),
	AppDomainSetup_t3686712183::get_offset_of_license_file_5(),
	AppDomainSetup_t3686712183::get_offset_of_private_bin_path_6(),
	AppDomainSetup_t3686712183::get_offset_of_private_bin_path_probe_7(),
	AppDomainSetup_t3686712183::get_offset_of_shadow_copy_directories_8(),
	AppDomainSetup_t3686712183::get_offset_of_shadow_copy_files_9(),
	AppDomainSetup_t3686712183::get_offset_of_publisher_policy_10(),
	AppDomainSetup_t3686712183::get_offset_of_path_changed_11(),
	AppDomainSetup_t3686712183::get_offset_of_loader_optimization_12(),
	AppDomainSetup_t3686712183::get_offset_of_disallow_binding_redirects_13(),
	AppDomainSetup_t3686712183::get_offset_of_disallow_code_downloads_14(),
	AppDomainSetup_t3686712183::get_offset_of__activationArguments_15(),
	AppDomainSetup_t3686712183::get_offset_of_domain_initializer_16(),
	AppDomainSetup_t3686712183::get_offset_of_application_trust_17(),
	AppDomainSetup_t3686712183::get_offset_of_domain_initializer_args_18(),
	AppDomainSetup_t3686712183::get_offset_of_application_trust_xml_19(),
	AppDomainSetup_t3686712183::get_offset_of_disallow_appbase_probe_20(),
	AppDomainSetup_t3686712183::get_offset_of_configuration_bytes_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize820 = { sizeof (ApplicationException_t3847393849), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize821 = { sizeof (ApplicationIdentity_t4137633900), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable821[1] = 
{
	ApplicationIdentity_t4137633900::get_offset_of__fullName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize822 = { sizeof (ArgumentException_t345812312), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable822[2] = 
{
	0,
	ArgumentException_t345812312::get_offset_of_param_name_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize823 = { sizeof (ArgumentNullException_t866011422), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable823[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize824 = { sizeof (ArgumentOutOfRangeException_t3525975574), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable824[1] = 
{
	ArgumentOutOfRangeException_t3525975574::get_offset_of_actual_value_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize825 = { sizeof (ArithmeticException_t2576788645), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize826 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable826[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize827 = { sizeof (ArrayTypeMismatchException_t930825571), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable827[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize828 = { sizeof (AssemblyLoadEventArgs_t426611754), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize829 = { sizeof (AttributeTargets_t1613716473)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable829[17] = 
{
	AttributeTargets_t1613716473::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize830 = { sizeof (BitConverter_t3677198277), -1, sizeof(BitConverter_t3677198277_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable830[2] = 
{
	BitConverter_t3677198277_StaticFields::get_offset_of_SwappedWordsInDouble_0(),
	BitConverter_t3677198277_StaticFields::get_offset_of_IsLittleEndian_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize831 = { sizeof (Buffer_t4059497384), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize832 = { sizeof (CharEnumerator_t3060996705), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable832[3] = 
{
	CharEnumerator_t3060996705::get_offset_of_str_0(),
	CharEnumerator_t3060996705::get_offset_of_index_1(),
	CharEnumerator_t3060996705::get_offset_of_length_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize833 = { sizeof (Console_t3796480395), -1, sizeof(Console_t3796480395_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable833[5] = 
{
	Console_t3796480395_StaticFields::get_offset_of_stdout_0(),
	Console_t3796480395_StaticFields::get_offset_of_stderr_1(),
	Console_t3796480395_StaticFields::get_offset_of_stdin_2(),
	Console_t3796480395_StaticFields::get_offset_of_inputEncoding_3(),
	Console_t3796480395_StaticFields::get_offset_of_outputEncoding_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize834 = { sizeof (ContextBoundObject_t1306076581), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize835 = { sizeof (Convert_t2841881561), -1, sizeof(Convert_t2841881561_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable835[2] = 
{
	Convert_t2841881561_StaticFields::get_offset_of_DBNull_0(),
	Convert_t2841881561_StaticFields::get_offset_of_conversionTable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize836 = { sizeof (DBNull_t782840749), -1, sizeof(DBNull_t782840749_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable836[1] = 
{
	DBNull_t782840749_StaticFields::get_offset_of_Value_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize837 = { sizeof (DateTime_t2069620368)+ sizeof (RuntimeObject), -1, sizeof(DateTime_t2069620368_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable837[15] = 
{
	DateTime_t2069620368::get_offset_of_ticks_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTime_t2069620368::get_offset_of_kind_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTime_t2069620368_StaticFields::get_offset_of_MaxValue_2(),
	DateTime_t2069620368_StaticFields::get_offset_of_MinValue_3(),
	DateTime_t2069620368_StaticFields::get_offset_of_ParseTimeFormats_4(),
	DateTime_t2069620368_StaticFields::get_offset_of_ParseYearDayMonthFormats_5(),
	DateTime_t2069620368_StaticFields::get_offset_of_ParseYearMonthDayFormats_6(),
	DateTime_t2069620368_StaticFields::get_offset_of_ParseDayMonthYearFormats_7(),
	DateTime_t2069620368_StaticFields::get_offset_of_ParseMonthDayYearFormats_8(),
	DateTime_t2069620368_StaticFields::get_offset_of_MonthDayShortFormats_9(),
	DateTime_t2069620368_StaticFields::get_offset_of_DayMonthShortFormats_10(),
	DateTime_t2069620368_StaticFields::get_offset_of_daysmonth_11(),
	DateTime_t2069620368_StaticFields::get_offset_of_daysmonthleap_12(),
	DateTime_t2069620368_StaticFields::get_offset_of_to_local_time_span_object_13(),
	DateTime_t2069620368_StaticFields::get_offset_of_last_now_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize838 = { sizeof (Which_t3947353013)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable838[5] = 
{
	Which_t3947353013::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize839 = { sizeof (DateTimeKind_t1106466873)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable839[4] = 
{
	DateTimeKind_t1106466873::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize840 = { sizeof (DateTimeOffset_t629262299)+ sizeof (RuntimeObject), -1, sizeof(DateTimeOffset_t629262299_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable840[4] = 
{
	DateTimeOffset_t629262299_StaticFields::get_offset_of_MaxValue_0(),
	DateTimeOffset_t629262299_StaticFields::get_offset_of_MinValue_1(),
	DateTimeOffset_t629262299::get_offset_of_dt_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeOffset_t629262299::get_offset_of_utc_offset_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize841 = { sizeof (DateTimeUtils_t2358707862), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize842 = { sizeof (DayOfWeek_t1520320548)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable842[8] = 
{
	DayOfWeek_t1520320548::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize843 = { sizeof (DelegateData_t650570042), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable843[2] = 
{
	DelegateData_t650570042::get_offset_of_target_type_0(),
	DelegateData_t650570042::get_offset_of_method_name_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize844 = { sizeof (DelegateSerializationHolder_t132065378), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable844[1] = 
{
	DelegateSerializationHolder_t132065378::get_offset_of__delegate_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize845 = { sizeof (DelegateEntry_t3976749550), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable845[7] = 
{
	DelegateEntry_t3976749550::get_offset_of_type_0(),
	DelegateEntry_t3976749550::get_offset_of_assembly_1(),
	DelegateEntry_t3976749550::get_offset_of_target_2(),
	DelegateEntry_t3976749550::get_offset_of_targetTypeAssembly_3(),
	DelegateEntry_t3976749550::get_offset_of_targetTypeName_4(),
	DelegateEntry_t3976749550::get_offset_of_methodName_5(),
	DelegateEntry_t3976749550::get_offset_of_delegateEntry_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize846 = { sizeof (DivideByZeroException_t3109699357), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable846[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize847 = { sizeof (DllNotFoundException_t1441243769), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable847[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize848 = { sizeof (EntryPointNotFoundException_t2444135647), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable848[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize849 = { sizeof (MonoEnumInfo_t2204979078)+ sizeof (RuntimeObject), -1, sizeof(MonoEnumInfo_t2204979078_StaticFields), sizeof(MonoEnumInfo_t2204979078_ThreadStaticFields) };
extern const int32_t g_FieldOffsetTable849[11] = 
{
	MonoEnumInfo_t2204979078::get_offset_of_utype_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEnumInfo_t2204979078::get_offset_of_values_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEnumInfo_t2204979078::get_offset_of_names_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEnumInfo_t2204979078::get_offset_of_name_hash_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	THREAD_STATIC_FIELD_OFFSET,
	MonoEnumInfo_t2204979078_StaticFields::get_offset_of_global_cache_5(),
	MonoEnumInfo_t2204979078_StaticFields::get_offset_of_global_cache_monitor_6(),
	MonoEnumInfo_t2204979078_StaticFields::get_offset_of_sbyte_comparer_7(),
	MonoEnumInfo_t2204979078_StaticFields::get_offset_of_short_comparer_8(),
	MonoEnumInfo_t2204979078_StaticFields::get_offset_of_int_comparer_9(),
	MonoEnumInfo_t2204979078_StaticFields::get_offset_of_long_comparer_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize850 = { sizeof (SByteComparer_t2289762869), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize851 = { sizeof (ShortComparer_t2165764877), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize852 = { sizeof (IntComparer_t2697796556), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize853 = { sizeof (LongComparer_t1935479835), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize854 = { sizeof (Environment_t3305779819), -1, sizeof(Environment_t3305779819_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable854[2] = 
{
	0,
	Environment_t3305779819_StaticFields::get_offset_of_os_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize855 = { sizeof (SpecialFolder_t3287482643)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable855[24] = 
{
	SpecialFolder_t3287482643::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize856 = { sizeof (EventArgs_t1303406721), -1, sizeof(EventArgs_t1303406721_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable856[1] = 
{
	EventArgs_t1303406721_StaticFields::get_offset_of_Empty_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize857 = { sizeof (ExecutionEngineException_t2393925026), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize858 = { sizeof (FieldAccessException_t3919253727), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize859 = { sizeof (FlagsAttribute_t662196437), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize860 = { sizeof (FormatException_t1540828544), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable860[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize861 = { sizeof (GC_t2878187020), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize862 = { sizeof (Guid_t)+ sizeof (RuntimeObject), sizeof(Guid_t ), sizeof(Guid_t_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable862[15] = 
{
	Guid_t::get_offset_of__a_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__b_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__c_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__d_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__e_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__f_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__g_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__h_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__i_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__j_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__k_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t_StaticFields::get_offset_of_Empty_11(),
	Guid_t_StaticFields::get_offset_of__rngAccess_12(),
	Guid_t_StaticFields::get_offset_of__rng_13(),
	Guid_t_StaticFields::get_offset_of__fastRng_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize863 = { sizeof (GuidParser_t594874540), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable863[3] = 
{
	GuidParser_t594874540::get_offset_of__src_0(),
	GuidParser_t594874540::get_offset_of__length_1(),
	GuidParser_t594874540::get_offset_of__cur_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize864 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize865 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize866 = { sizeof (IndexOutOfRangeException_t3032476479), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize867 = { sizeof (InvalidCastException_t3051705080), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable867[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize868 = { sizeof (InvalidOperationException_t330130334), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable868[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize869 = { sizeof (LoaderOptimization_t2166784085)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable869[7] = 
{
	LoaderOptimization_t2166784085::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize870 = { sizeof (LocalDataStoreSlot_t1533255930), -1, sizeof(LocalDataStoreSlot_t1533255930_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable870[5] = 
{
	LocalDataStoreSlot_t1533255930::get_offset_of_slot_0(),
	LocalDataStoreSlot_t1533255930::get_offset_of_thread_local_1(),
	LocalDataStoreSlot_t1533255930_StaticFields::get_offset_of_lock_obj_2(),
	LocalDataStoreSlot_t1533255930_StaticFields::get_offset_of_slot_bitmap_thread_3(),
	LocalDataStoreSlot_t1533255930_StaticFields::get_offset_of_slot_bitmap_context_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize871 = { sizeof (Math_t1029967512), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize872 = { sizeof (MemberAccessException_t1711299098), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize873 = { sizeof (MethodAccessException_t3210213075), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable873[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize874 = { sizeof (MissingFieldException_t3440335132), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize875 = { sizeof (MissingMemberException_t681507010), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable875[3] = 
{
	MissingMemberException_t681507010::get_offset_of_ClassName_11(),
	MissingMemberException_t681507010::get_offset_of_MemberName_12(),
	MissingMemberException_t681507010::get_offset_of_Signature_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize876 = { sizeof (MissingMethodException_t3829242137), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable876[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize877 = { sizeof (MonoAsyncCall_t3121238468), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable877[7] = 
{
	MonoAsyncCall_t3121238468::get_offset_of_msg_0(),
	MonoAsyncCall_t3121238468::get_offset_of_cb_method_1(),
	MonoAsyncCall_t3121238468::get_offset_of_cb_target_2(),
	MonoAsyncCall_t3121238468::get_offset_of_state_3(),
	MonoAsyncCall_t3121238468::get_offset_of_res_4(),
	MonoAsyncCall_t3121238468::get_offset_of_out_args_5(),
	MonoAsyncCall_t3121238468::get_offset_of_wait_event_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize878 = { sizeof (MonoCustomAttrs_t3288799394), -1, sizeof(MonoCustomAttrs_t3288799394_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable878[3] = 
{
	MonoCustomAttrs_t3288799394_StaticFields::get_offset_of_corlib_0(),
	MonoCustomAttrs_t3288799394_StaticFields::get_offset_of_AttributeUsageType_1(),
	MonoCustomAttrs_t3288799394_StaticFields::get_offset_of_DefaultAttributeUsage_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize879 = { sizeof (AttributeInfo_t1729010380), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable879[2] = 
{
	AttributeInfo_t1729010380::get_offset_of__usage_0(),
	AttributeInfo_t1729010380::get_offset_of__inheritanceLevel_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize880 = { sizeof (MonoTouchAOTHelper_t3863100029), -1, sizeof(MonoTouchAOTHelper_t3863100029_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable880[1] = 
{
	MonoTouchAOTHelper_t3863100029_StaticFields::get_offset_of_FalseFlag_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize881 = { sizeof (MonoTypeInfo_t3353572741), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable881[2] = 
{
	MonoTypeInfo_t3353572741::get_offset_of_full_name_0(),
	MonoTypeInfo_t3353572741::get_offset_of_default_ctor_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize882 = { sizeof (MonoType_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable882[1] = 
{
	MonoType_t::get_offset_of_type_info_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize883 = { sizeof (MulticastNotSupportedException_t2857899371), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize884 = { sizeof (NonSerializedAttribute_t2626510564), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize885 = { sizeof (NotImplementedException_t1542628665), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize886 = { sizeof (NotSupportedException_t2487033105), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable886[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize887 = { sizeof (NullReferenceException_t2185676726), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable887[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize888 = { sizeof (NumberFormatter_t3678200339), -1, sizeof(NumberFormatter_t3678200339_StaticFields), sizeof(NumberFormatter_t3678200339_ThreadStaticFields) };
extern const int32_t g_FieldOffsetTable888[26] = 
{
	NumberFormatter_t3678200339_StaticFields::get_offset_of_MantissaBitsTable_0(),
	NumberFormatter_t3678200339_StaticFields::get_offset_of_TensExponentTable_1(),
	NumberFormatter_t3678200339_StaticFields::get_offset_of_DigitLowerTable_2(),
	NumberFormatter_t3678200339_StaticFields::get_offset_of_DigitUpperTable_3(),
	NumberFormatter_t3678200339_StaticFields::get_offset_of_TenPowersList_4(),
	NumberFormatter_t3678200339_StaticFields::get_offset_of_DecHexDigits_5(),
	NumberFormatter_t3678200339::get_offset_of__thread_6(),
	NumberFormatter_t3678200339::get_offset_of__nfi_7(),
	NumberFormatter_t3678200339::get_offset_of__NaN_8(),
	NumberFormatter_t3678200339::get_offset_of__infinity_9(),
	NumberFormatter_t3678200339::get_offset_of__isCustomFormat_10(),
	NumberFormatter_t3678200339::get_offset_of__specifierIsUpper_11(),
	NumberFormatter_t3678200339::get_offset_of__positive_12(),
	NumberFormatter_t3678200339::get_offset_of__specifier_13(),
	NumberFormatter_t3678200339::get_offset_of__precision_14(),
	NumberFormatter_t3678200339::get_offset_of__defPrecision_15(),
	NumberFormatter_t3678200339::get_offset_of__digitsLen_16(),
	NumberFormatter_t3678200339::get_offset_of__offset_17(),
	NumberFormatter_t3678200339::get_offset_of__decPointPos_18(),
	NumberFormatter_t3678200339::get_offset_of__val1_19(),
	NumberFormatter_t3678200339::get_offset_of__val2_20(),
	NumberFormatter_t3678200339::get_offset_of__val3_21(),
	NumberFormatter_t3678200339::get_offset_of__val4_22(),
	NumberFormatter_t3678200339::get_offset_of__cbuf_23(),
	NumberFormatter_t3678200339::get_offset_of__ind_24(),
	THREAD_STATIC_FIELD_OFFSET,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize889 = { sizeof (CustomInfo_t2050207728), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable889[14] = 
{
	CustomInfo_t2050207728::get_offset_of_UseGroup_0(),
	CustomInfo_t2050207728::get_offset_of_DecimalDigits_1(),
	CustomInfo_t2050207728::get_offset_of_DecimalPointPos_2(),
	CustomInfo_t2050207728::get_offset_of_DecimalTailSharpDigits_3(),
	CustomInfo_t2050207728::get_offset_of_IntegerDigits_4(),
	CustomInfo_t2050207728::get_offset_of_IntegerHeadSharpDigits_5(),
	CustomInfo_t2050207728::get_offset_of_IntegerHeadPos_6(),
	CustomInfo_t2050207728::get_offset_of_UseExponent_7(),
	CustomInfo_t2050207728::get_offset_of_ExponentDigits_8(),
	CustomInfo_t2050207728::get_offset_of_ExponentTailSharpDigits_9(),
	CustomInfo_t2050207728::get_offset_of_ExponentNegativeSignOnly_10(),
	CustomInfo_t2050207728::get_offset_of_DividePlaces_11(),
	CustomInfo_t2050207728::get_offset_of_Percents_12(),
	CustomInfo_t2050207728::get_offset_of_Permilles_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize890 = { sizeof (ObjectDisposedException_t3675417077), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable890[2] = 
{
	ObjectDisposedException_t3675417077::get_offset_of_obj_name_12(),
	ObjectDisposedException_t3675417077::get_offset_of_msg_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize891 = { sizeof (OperatingSystem_t4256499369), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable891[3] = 
{
	OperatingSystem_t4256499369::get_offset_of__platform_0(),
	OperatingSystem_t4256499369::get_offset_of__version_1(),
	OperatingSystem_t4256499369::get_offset_of__servicePack_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize892 = { sizeof (OutOfMemoryException_t782299704), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable892[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize893 = { sizeof (OverflowException_t1086194029), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable893[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize894 = { sizeof (PlatformID_t405509743)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable894[8] = 
{
	PlatformID_t405509743::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize895 = { sizeof (PlatformNotSupportedException_t3765158775), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable895[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize896 = { sizeof (RankException_t403763498), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize897 = { sizeof (ResolveEventArgs_t682394723), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable897[1] = 
{
	ResolveEventArgs_t682394723::get_offset_of_m_Name_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize898 = { sizeof (RuntimeMethodHandle_t2092377273)+ sizeof (RuntimeObject), sizeof(RuntimeMethodHandle_t2092377273 ), 0, 0 };
extern const int32_t g_FieldOffsetTable898[1] = 
{
	RuntimeMethodHandle_t2092377273::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize899 = { sizeof (StackOverflowException_t910691218), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif