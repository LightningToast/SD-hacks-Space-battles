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

// UnityEngine.Networking.DownloadHandlerAudioClip
struct DownloadHandlerAudioClip_t2414872380;
// System.String
struct String_t;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t773960193;
// System.Byte[]
struct ByteU5BU5D_t2103454637;
// System.NotSupportedException
struct NotSupportedException_t2730091309;
// System.Char[]
struct CharU5BU5D_t2710530878;
// System.IntPtr[]
struct IntPtrU5BU5D_t3164587135;
// System.Collections.IDictionary
struct IDictionary_t1205001567;
// System.Void
struct Void_t2198392797;

extern RuntimeClass* NotSupportedException_t2730091309_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral190991975;
extern const uint32_t DownloadHandlerAudioClip_GetText_m3179970392_MetadataUsageId;

struct ByteU5BU5D_t2103454637;


#ifndef U3CMODULEU3E_T2918013943_H
#define U3CMODULEU3E_T2918013943_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t2918013943 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T2918013943_H
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
	CharU5BU5D_t2710530878* ___WhiteChars_3;

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
	inline CharU5BU5D_t2710530878* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t2710530878** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t2710530878* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T2755612972_H
#define VALUETYPE_T2755612972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t2755612972  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t2755612972_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t2755612972_marshaled_com
{
};
#endif // VALUETYPE_T2755612972_H
#ifndef EXCEPTION_T1434153031_H
#define EXCEPTION_T1434153031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t1434153031  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t3164587135* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t1434153031 * ___inner_exception_1;
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
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t1434153031, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t3164587135* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t3164587135** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t3164587135* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t1434153031, ___inner_exception_1)); }
	inline Exception_t1434153031 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t1434153031 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t1434153031 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t1434153031, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t1434153031, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t1434153031, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t1434153031, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t1434153031, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t1434153031, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t1434153031, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t1434153031, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t1434153031, ____data_10)); }
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
#endif // EXCEPTION_T1434153031_H
#ifndef VOID_T2198392797_H
#define VOID_T2198392797_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t2198392797 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T2198392797_H
#ifndef BYTE_T2892313796_H
#define BYTE_T2892313796_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t2892313796 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t2892313796, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T2892313796_H
#ifndef ENUM_T21512255_H
#define ENUM_T21512255_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t21512255  : public ValueType_t2755612972
{
public:

public:
};

struct Enum_t21512255_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t2710530878* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t21512255_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t2710530878* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t2710530878** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t2710530878* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t21512255_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t21512255_marshaled_com
{
};
#endif // ENUM_T21512255_H
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
#ifndef SYSTEMEXCEPTION_T671312446_H
#define SYSTEMEXCEPTION_T671312446_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t671312446  : public Exception_t1434153031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T671312446_H
#ifndef AUDIOTYPE_T3165442575_H
#define AUDIOTYPE_T3165442575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioType
struct  AudioType_t3165442575 
{
public:
	// System.Int32 UnityEngine.AudioType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AudioType_t3165442575, ___value___1)); }
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
#endif // AUDIOTYPE_T3165442575_H
#ifndef DOWNLOADHANDLER_T773960193_H
#define DOWNLOADHANDLER_T773960193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.DownloadHandler
struct  DownloadHandler_t773960193  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_t773960193, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t773960193_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t773960193_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // DOWNLOADHANDLER_T773960193_H
#ifndef NOTSUPPORTEDEXCEPTION_T2730091309_H
#define NOTSUPPORTEDEXCEPTION_T2730091309_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t2730091309  : public SystemException_t671312446
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T2730091309_H
#ifndef DOWNLOADHANDLERAUDIOCLIP_T2414872380_H
#define DOWNLOADHANDLERAUDIOCLIP_T2414872380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.DownloadHandlerAudioClip
struct  DownloadHandlerAudioClip_t2414872380  : public DownloadHandler_t773960193
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerAudioClip
struct DownloadHandlerAudioClip_t2414872380_marshaled_pinvoke : public DownloadHandler_t773960193_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerAudioClip
struct DownloadHandlerAudioClip_t2414872380_marshaled_com : public DownloadHandler_t773960193_marshaled_com
{
};
#endif // DOWNLOADHANDLERAUDIOCLIP_T2414872380_H
// System.Byte[]
struct ByteU5BU5D_t2103454637  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};



// System.Void UnityEngine.Networking.DownloadHandler::.ctor()
extern "C"  void DownloadHandler__ctor_m1416739409 (DownloadHandler_t773960193 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.DownloadHandlerAudioClip::InternalCreateAudioClip(System.String,UnityEngine.AudioType)
extern "C"  void DownloadHandlerAudioClip_InternalCreateAudioClip_m3857312133 (DownloadHandlerAudioClip_t2414872380 * __this, String_t* ___url0, int32_t ___audioType1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.Networking.DownloadHandlerAudioClip::InternalGetData()
extern "C"  ByteU5BU5D_t2103454637* DownloadHandlerAudioClip_InternalGetData_m3686868100 (DownloadHandlerAudioClip_t2414872380 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotSupportedException::.ctor(System.String)
extern "C"  void NotSupportedException__ctor_m1734903330 (NotSupportedException_t2730091309 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Networking.DownloadHandlerAudioClip
extern "C" void DownloadHandlerAudioClip_t2414872380_marshal_pinvoke(const DownloadHandlerAudioClip_t2414872380& unmarshaled, DownloadHandlerAudioClip_t2414872380_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void DownloadHandlerAudioClip_t2414872380_marshal_pinvoke_back(const DownloadHandlerAudioClip_t2414872380_marshaled_pinvoke& marshaled, DownloadHandlerAudioClip_t2414872380& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.DownloadHandlerAudioClip
extern "C" void DownloadHandlerAudioClip_t2414872380_marshal_pinvoke_cleanup(DownloadHandlerAudioClip_t2414872380_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.DownloadHandlerAudioClip
extern "C" void DownloadHandlerAudioClip_t2414872380_marshal_com(const DownloadHandlerAudioClip_t2414872380& unmarshaled, DownloadHandlerAudioClip_t2414872380_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void DownloadHandlerAudioClip_t2414872380_marshal_com_back(const DownloadHandlerAudioClip_t2414872380_marshaled_com& marshaled, DownloadHandlerAudioClip_t2414872380& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.DownloadHandlerAudioClip
extern "C" void DownloadHandlerAudioClip_t2414872380_marshal_com_cleanup(DownloadHandlerAudioClip_t2414872380_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Networking.DownloadHandlerAudioClip::.ctor(System.String,UnityEngine.AudioType)
extern "C"  void DownloadHandlerAudioClip__ctor_m1805234635 (DownloadHandlerAudioClip_t2414872380 * __this, String_t* ___url0, int32_t ___audioType1, const RuntimeMethod* method)
{
	{
		DownloadHandler__ctor_m1416739409(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___url0;
		int32_t L_1 = ___audioType1;
		DownloadHandlerAudioClip_InternalCreateAudioClip_m3857312133(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.DownloadHandlerAudioClip::InternalCreateAudioClip(System.String,UnityEngine.AudioType)
extern "C"  void DownloadHandlerAudioClip_InternalCreateAudioClip_m3857312133 (DownloadHandlerAudioClip_t2414872380 * __this, String_t* ___url0, int32_t ___audioType1, const RuntimeMethod* method)
{
	typedef void (*DownloadHandlerAudioClip_InternalCreateAudioClip_m3857312133_ftn) (DownloadHandlerAudioClip_t2414872380 *, String_t*, int32_t);
	static DownloadHandlerAudioClip_InternalCreateAudioClip_m3857312133_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DownloadHandlerAudioClip_InternalCreateAudioClip_m3857312133_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.DownloadHandlerAudioClip::InternalCreateAudioClip(System.String,UnityEngine.AudioType)");
	_il2cpp_icall_func(__this, ___url0, ___audioType1);
}
// System.Byte[] UnityEngine.Networking.DownloadHandlerAudioClip::GetData()
extern "C"  ByteU5BU5D_t2103454637* DownloadHandlerAudioClip_GetData_m1700882078 (DownloadHandlerAudioClip_t2414872380 * __this, const RuntimeMethod* method)
{
	ByteU5BU5D_t2103454637* V_0 = NULL;
	{
		ByteU5BU5D_t2103454637* L_0 = DownloadHandlerAudioClip_InternalGetData_m3686868100(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		ByteU5BU5D_t2103454637* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Networking.DownloadHandlerAudioClip::GetText()
extern "C"  String_t* DownloadHandlerAudioClip_GetText_m3179970392 (DownloadHandlerAudioClip_t2414872380 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DownloadHandlerAudioClip_GetText_m3179970392_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t2730091309 * L_0 = (NotSupportedException_t2730091309 *)il2cpp_codegen_object_new(NotSupportedException_t2730091309_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m1734903330(L_0, _stringLiteral190991975, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// System.Byte[] UnityEngine.Networking.DownloadHandlerAudioClip::InternalGetData()
extern "C"  ByteU5BU5D_t2103454637* DownloadHandlerAudioClip_InternalGetData_m3686868100 (DownloadHandlerAudioClip_t2414872380 * __this, const RuntimeMethod* method)
{
	typedef ByteU5BU5D_t2103454637* (*DownloadHandlerAudioClip_InternalGetData_m3686868100_ftn) (DownloadHandlerAudioClip_t2414872380 *);
	static DownloadHandlerAudioClip_InternalGetData_m3686868100_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DownloadHandlerAudioClip_InternalGetData_m3686868100_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.DownloadHandlerAudioClip::InternalGetData()");
	ByteU5BU5D_t2103454637* retVal = _il2cpp_icall_func(__this);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
