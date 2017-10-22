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

// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t2914275055;
// System.Char[]
struct CharU5BU5D_t2710530878;
// System.Byte[]
struct ByteU5BU5D_t2103454637;
// System.Void
struct Void_t2198392797;
// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkMigrationManager/PendingPlayerInfo>
struct List_1_t1909747341;

extern RuntimeClass* StringU5BU5D_t2914275055_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3520811296;
extern Il2CppCodeGenString* _stringLiteral4251046666;
extern Il2CppCodeGenString* _stringLiteral2186763900;
extern const uint32_t KeyValuePair_2_ToString_m1892158444_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m3422157211_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m1636135099_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m1694255639_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m935574451_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m768903737_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m2794560979_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m573827280_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m4199653167_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m3989116552_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m1877622808_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m702196871_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m3857975607_MetadataUsageId;

struct StringU5BU5D_t2914275055;


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
#ifndef NETWORKBROADCASTRESULT_T1062294258_H
#define NETWORKBROADCASTRESULT_T1062294258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkBroadcastResult
struct  NetworkBroadcastResult_t1062294258 
{
public:
	// System.String UnityEngine.Networking.NetworkBroadcastResult::serverAddress
	String_t* ___serverAddress_0;
	// System.Byte[] UnityEngine.Networking.NetworkBroadcastResult::broadcastData
	ByteU5BU5D_t2103454637* ___broadcastData_1;

public:
	inline static int32_t get_offset_of_serverAddress_0() { return static_cast<int32_t>(offsetof(NetworkBroadcastResult_t1062294258, ___serverAddress_0)); }
	inline String_t* get_serverAddress_0() const { return ___serverAddress_0; }
	inline String_t** get_address_of_serverAddress_0() { return &___serverAddress_0; }
	inline void set_serverAddress_0(String_t* value)
	{
		___serverAddress_0 = value;
		Il2CppCodeGenWriteBarrier((&___serverAddress_0), value);
	}

	inline static int32_t get_offset_of_broadcastData_1() { return static_cast<int32_t>(offsetof(NetworkBroadcastResult_t1062294258, ___broadcastData_1)); }
	inline ByteU5BU5D_t2103454637* get_broadcastData_1() const { return ___broadcastData_1; }
	inline ByteU5BU5D_t2103454637** get_address_of_broadcastData_1() { return &___broadcastData_1; }
	inline void set_broadcastData_1(ByteU5BU5D_t2103454637* value)
	{
		___broadcastData_1 = value;
		Il2CppCodeGenWriteBarrier((&___broadcastData_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.NetworkBroadcastResult
struct NetworkBroadcastResult_t1062294258_marshaled_pinvoke
{
	char* ___serverAddress_0;
	uint8_t* ___broadcastData_1;
};
// Native definition for COM marshalling of UnityEngine.Networking.NetworkBroadcastResult
struct NetworkBroadcastResult_t1062294258_marshaled_com
{
	Il2CppChar* ___serverAddress_0;
	uint8_t* ___broadcastData_1;
};
#endif // NETWORKBROADCASTRESULT_T1062294258_H
#ifndef INT64_T2274657764_H
#define INT64_T2274657764_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t2274657764 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int64_t2274657764, ___m_value_2)); }
	inline int64_t get_m_value_2() const { return ___m_value_2; }
	inline int64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int64_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T2274657764_H
#ifndef KEYVALUEPAIR_2_T4125963872_H
#define KEYVALUEPAIR_2_T4125963872_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
struct  KeyValuePair_2_t4125963872 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int64_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4125963872, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4125963872, ___value_1)); }
	inline int64_t get_value_1() const { return ___value_1; }
	inline int64_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int64_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T4125963872_H
#ifndef KEYVALUEPAIR_2_T189761378_H
#define KEYVALUEPAIR_2_T189761378_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
struct  KeyValuePair_2_t189761378 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t189761378, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t189761378, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T189761378_H
#ifndef KEYVALUEPAIR_2_T3050729127_H
#define KEYVALUEPAIR_2_T3050729127_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t3050729127 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3050729127, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3050729127, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T3050729127_H
#ifndef BOOLEAN_T277042056_H
#define BOOLEAN_T277042056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t277042056 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t277042056, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t277042056_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t277042056_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t277042056_StaticFields, ___TrueString_1)); }
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
#endif // BOOLEAN_T277042056_H
#ifndef KEYVALUEPAIR_2_T2128348164_H
#define KEYVALUEPAIR_2_T2128348164_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
struct  KeyValuePair_2_t2128348164 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2128348164, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2128348164, ___value_1)); }
	inline bool get_value_1() const { return ___value_1; }
	inline bool* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(bool value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2128348164_H
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
#ifndef CONNECTIONPENDINGPLAYERS_T3718658286_H
#define CONNECTIONPENDINGPLAYERS_T3718658286_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers
struct  ConnectionPendingPlayers_t3718658286 
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkMigrationManager/PendingPlayerInfo> UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers::players
	List_1_t1909747341 * ___players_0;

public:
	inline static int32_t get_offset_of_players_0() { return static_cast<int32_t>(offsetof(ConnectionPendingPlayers_t3718658286, ___players_0)); }
	inline List_1_t1909747341 * get_players_0() const { return ___players_0; }
	inline List_1_t1909747341 ** get_address_of_players_0() { return &___players_0; }
	inline void set_players_0(List_1_t1909747341 * value)
	{
		___players_0 = value;
		Il2CppCodeGenWriteBarrier((&___players_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers
struct ConnectionPendingPlayers_t3718658286_marshaled_pinvoke
{
	List_1_t1909747341 * ___players_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers
struct ConnectionPendingPlayers_t3718658286_marshaled_com
{
	List_1_t1909747341 * ___players_0;
};
#endif // CONNECTIONPENDINGPLAYERS_T3718658286_H
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
#ifndef KEYVALUEPAIR_2_T1714160987_H
#define KEYVALUEPAIR_2_T1714160987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
struct  KeyValuePair_2_t1714160987 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1714160987, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1714160987, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T1714160987_H
#ifndef INT32_T2633422566_H
#define INT32_T2633422566_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2633422566 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2633422566, ___m_value_2)); }
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
#endif // INT32_T2633422566_H
#ifndef INT16_T2397569623_H
#define INT16_T2397569623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t2397569623 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int16_t2397569623, ___m_value_2)); }
	inline int16_t get_m_value_2() const { return ___m_value_2; }
	inline int16_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int16_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T2397569623_H
#ifndef KEYVALUEPAIR_2_T1876596811_H
#define KEYVALUEPAIR_2_T1876596811_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>
struct  KeyValuePair_2_t1876596811 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int16_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1876596811, ___key_0)); }
	inline int16_t get_key_0() const { return ___key_0; }
	inline int16_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int16_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1876596811, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T1876596811_H
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
#ifndef EXTENSIONINTPAIR_T1615370488_H
#define EXTENSIONINTPAIR_T1615370488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair
struct  ExtensionIntPair_t1615370488 
{
public:
	// System.Object Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair::msgType
	RuntimeObject * ___msgType_0;
	// System.Int32 Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair::number
	int32_t ___number_1;

public:
	inline static int32_t get_offset_of_msgType_0() { return static_cast<int32_t>(offsetof(ExtensionIntPair_t1615370488, ___msgType_0)); }
	inline RuntimeObject * get_msgType_0() const { return ___msgType_0; }
	inline RuntimeObject ** get_address_of_msgType_0() { return &___msgType_0; }
	inline void set_msgType_0(RuntimeObject * value)
	{
		___msgType_0 = value;
		Il2CppCodeGenWriteBarrier((&___msgType_0), value);
	}

	inline static int32_t get_offset_of_number_1() { return static_cast<int32_t>(offsetof(ExtensionIntPair_t1615370488, ___number_1)); }
	inline int32_t get_number_1() const { return ___number_1; }
	inline int32_t* get_address_of_number_1() { return &___number_1; }
	inline void set_number_1(int32_t value)
	{
		___number_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair
struct ExtensionIntPair_t1615370488_marshaled_pinvoke
{
	Il2CppIUnknown* ___msgType_0;
	int32_t ___number_1;
};
// Native definition for COM marshalling of Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair
struct ExtensionIntPair_t1615370488_marshaled_com
{
	Il2CppIUnknown* ___msgType_0;
	int32_t ___number_1;
};
#endif // EXTENSIONINTPAIR_T1615370488_H
#ifndef KEYVALUEPAIR_2_T280161440_H
#define KEYVALUEPAIR_2_T280161440_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct  KeyValuePair_2_t280161440 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t280161440, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t280161440, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T280161440_H
#ifndef KEYVALUEPAIR_2_T1301237340_H
#define KEYVALUEPAIR_2_T1301237340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>
struct  KeyValuePair_2_t1301237340 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	intptr_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1301237340, ___key_0)); }
	inline intptr_t get_key_0() const { return ___key_0; }
	inline intptr_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(intptr_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1301237340, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T1301237340_H
#ifndef TYPE_T198362343_H
#define TYPE_T198362343_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// proto.PhoneEvent/Types/Type
struct  Type_t198362343 
{
public:
	// System.Int32 proto.PhoneEvent/Types/Type::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Type_t198362343, ___value___1)); }
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
#endif // TYPE_T198362343_H
#ifndef KEYVALUEPAIR_2_T607067939_H
#define KEYVALUEPAIR_2_T607067939_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  KeyValuePair_2_t607067939 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	KeyValuePair_2_t3050729127  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t607067939, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t607067939, ___value_1)); }
	inline KeyValuePair_2_t3050729127  get_value_1() const { return ___value_1; }
	inline KeyValuePair_2_t3050729127 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(KeyValuePair_2_t3050729127  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T607067939_H
#ifndef KEYVALUEPAIR_2_T2913600366_H
#define KEYVALUEPAIR_2_T2913600366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Networking.NetworkBroadcastResult>
struct  KeyValuePair_2_t2913600366 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	NetworkBroadcastResult_t1062294258  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2913600366, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2913600366, ___value_1)); }
	inline NetworkBroadcastResult_t1062294258  get_value_1() const { return ___value_1; }
	inline NetworkBroadcastResult_t1062294258 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(NetworkBroadcastResult_t1062294258  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2913600366_H
#ifndef KEYVALUEPAIR_2_T1644647942_H
#define KEYVALUEPAIR_2_T1644647942_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object>
struct  KeyValuePair_2_t1644647942 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	ExtensionIntPair_t1615370488  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1644647942, ___key_0)); }
	inline ExtensionIntPair_t1615370488  get_key_0() const { return ___key_0; }
	inline ExtensionIntPair_t1615370488 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(ExtensionIntPair_t1615370488  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1644647942, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T1644647942_H
#ifndef KEYVALUEPAIR_2_T2799396707_H
#define KEYVALUEPAIR_2_T2799396707_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>
struct  KeyValuePair_2_t2799396707 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ConnectionPendingPlayers_t3718658286  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2799396707, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2799396707, ___value_1)); }
	inline ConnectionPendingPlayers_t3718658286  get_value_1() const { return ___value_1; }
	inline ConnectionPendingPlayers_t3718658286 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(ConnectionPendingPlayers_t3718658286  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2799396707_H
#ifndef KEYVALUEPAIR_2_T3574068060_H
#define KEYVALUEPAIR_2_T3574068060_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,proto.PhoneEvent/Types/Type>
struct  KeyValuePair_2_t3574068060 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3574068060, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3574068060, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3574068060_H
// System.String[]
struct StringU5BU5D_t2914275055  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Collections.Generic.KeyValuePair`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2421817175_gshared (KeyValuePair_2_t1644647942 * __this, ExtensionIntPair_t1615370488  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3999725741_gshared (KeyValuePair_2_t1644647942 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m4191562221_gshared (KeyValuePair_2_t1644647942 * __this, ExtensionIntPair_t1615370488  ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object>::get_Key()
extern "C"  ExtensionIntPair_t1615370488  KeyValuePair_2_get_Key_m2287660198_gshared (KeyValuePair_2_t1644647942 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m788404038_gshared (KeyValuePair_2_t1644647942 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1892158444_gshared (KeyValuePair_2_t1644647942 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m3703980508_gshared (KeyValuePair_2_t1876596811 * __this, int16_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2260610435_gshared (KeyValuePair_2_t1876596811 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1241279413_gshared (KeyValuePair_2_t1876596811 * __this, int16_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>::get_Key()
extern "C"  int16_t KeyValuePair_2_get_Key_m4001418303_gshared (KeyValuePair_2_t1876596811 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m3578812968_gshared (KeyValuePair_2_t1876596811 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3422157211_gshared (KeyValuePair_2_t1876596811 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,proto.PhoneEvent/Types/Type>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1910768816_gshared (KeyValuePair_2_t3574068060 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,proto.PhoneEvent/Types/Type>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1395427884_gshared (KeyValuePair_2_t3574068060 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,proto.PhoneEvent/Types/Type>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2234391944_gshared (KeyValuePair_2_t3574068060 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,proto.PhoneEvent/Types/Type>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m564724_gshared (KeyValuePair_2_t3574068060 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,proto.PhoneEvent/Types/Type>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m3577894108_gshared (KeyValuePair_2_t3574068060 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,proto.PhoneEvent/Types/Type>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1636135099_gshared (KeyValuePair_2_t3574068060 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2250391939_gshared (KeyValuePair_2_t1714160987 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m4273661052_gshared (KeyValuePair_2_t1714160987 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3895777315_gshared (KeyValuePair_2_t1714160987 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m52553218_gshared (KeyValuePair_2_t1714160987 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m17194378_gshared (KeyValuePair_2_t1714160987 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1694255639_gshared (KeyValuePair_2_t1714160987 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1905228247_gshared (KeyValuePair_2_t280161440 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2568974006_gshared (KeyValuePair_2_t280161440 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2523013854_gshared (KeyValuePair_2_t280161440 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m1392247614_gshared (KeyValuePair_2_t280161440 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m644183845_gshared (KeyValuePair_2_t280161440 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m935574451_gshared (KeyValuePair_2_t280161440 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m944922394_gshared (KeyValuePair_2_t2799396707 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m4244868044_gshared (KeyValuePair_2_t2799396707 * __this, ConnectionPendingPlayers_t3718658286  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2097362691_gshared (KeyValuePair_2_t2799396707 * __this, int32_t ___key0, ConnectionPendingPlayers_t3718658286  ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m2088175936_gshared (KeyValuePair_2_t2799396707 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>::get_Value()
extern "C"  ConnectionPendingPlayers_t3718658286  KeyValuePair_2_get_Value_m974891435_gshared (KeyValuePair_2_t2799396707 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m768903737_gshared (KeyValuePair_2_t2799396707 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m3907566952_gshared (KeyValuePair_2_t1301237340 * __this, intptr_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1340483893_gshared (KeyValuePair_2_t1301237340 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1046954923_gshared (KeyValuePair_2_t1301237340 * __this, intptr_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Key()
extern "C"  intptr_t KeyValuePair_2_get_Key_m2062851278_gshared (KeyValuePair_2_t1301237340 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m1831044812_gshared (KeyValuePair_2_t1301237340 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2794560979_gshared (KeyValuePair_2_t1301237340 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m758687126_gshared (KeyValuePair_2_t2128348164 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1603717710_gshared (KeyValuePair_2_t2128348164 * __this, bool p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m4092806227_gshared (KeyValuePair_2_t2128348164 * __this, RuntimeObject * ___key0, bool ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m851519192_gshared (KeyValuePair_2_t2128348164 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Value()
extern "C"  bool KeyValuePair_2_get_Value_m378160927_gshared (KeyValuePair_2_t2128348164 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m573827280_gshared (KeyValuePair_2_t2128348164 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1658723806_gshared (KeyValuePair_2_t607067939 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3179743956_gshared (KeyValuePair_2_t607067939 * __this, KeyValuePair_2_t3050729127  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1111502450_gshared (KeyValuePair_2_t607067939 * __this, RuntimeObject * ___key0, KeyValuePair_2_t3050729127  ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m3927011729_gshared (KeyValuePair_2_t607067939 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
extern "C"  KeyValuePair_2_t3050729127  KeyValuePair_2_get_Value_m1410834898_gshared (KeyValuePair_2_t607067939 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m4199653167_gshared (KeyValuePair_2_t607067939 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2032842746_gshared (KeyValuePair_2_t189761378 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1232725712_gshared (KeyValuePair_2_t189761378 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2665256590_gshared (KeyValuePair_2_t189761378 * __this, RuntimeObject * ___key0, int32_t ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m3501000927_gshared (KeyValuePair_2_t189761378 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m558261432_gshared (KeyValuePair_2_t189761378 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3989116552_gshared (KeyValuePair_2_t189761378 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2835569005_gshared (KeyValuePair_2_t4125963872 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1736389101_gshared (KeyValuePair_2_t4125963872 * __this, int64_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m959449189_gshared (KeyValuePair_2_t4125963872 * __this, RuntimeObject * ___key0, int64_t ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m2764744769_gshared (KeyValuePair_2_t4125963872 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::get_Value()
extern "C"  int64_t KeyValuePair_2_get_Value_m3596745778_gshared (KeyValuePair_2_t4125963872 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1877622808_gshared (KeyValuePair_2_t4125963872 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2179644958_gshared (KeyValuePair_2_t3050729127 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3810792090_gshared (KeyValuePair_2_t3050729127 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2297796110_gshared (KeyValuePair_2_t3050729127 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m636538499_gshared (KeyValuePair_2_t3050729127 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m4193217671_gshared (KeyValuePair_2_t3050729127 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m702196871_gshared (KeyValuePair_2_t3050729127 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Networking.NetworkBroadcastResult>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1160328052_gshared (KeyValuePair_2_t2913600366 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Networking.NetworkBroadcastResult>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m414820314_gshared (KeyValuePair_2_t2913600366 * __this, NetworkBroadcastResult_t1062294258  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Networking.NetworkBroadcastResult>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m40446558_gshared (KeyValuePair_2_t2913600366 * __this, RuntimeObject * ___key0, NetworkBroadcastResult_t1062294258  ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Networking.NetworkBroadcastResult>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m47655277_gshared (KeyValuePair_2_t2913600366 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Networking.NetworkBroadcastResult>::get_Value()
extern "C"  NetworkBroadcastResult_t1062294258  KeyValuePair_2_get_Value_m3901152886_gshared (KeyValuePair_2_t2913600366 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Networking.NetworkBroadcastResult>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3857975607_gshared (KeyValuePair_2_t2913600366 * __this, const RuntimeMethod* method);

// System.Void System.Collections.Generic.KeyValuePair`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m2421817175(__this, p0, method) ((  void (*) (KeyValuePair_2_t1644647942 *, ExtensionIntPair_t1615370488 , const RuntimeMethod*))KeyValuePair_2_set_Key_m2421817175_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m3999725741(__this, p0, method) ((  void (*) (KeyValuePair_2_t1644647942 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Value_m3999725741_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m4191562221(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t1644647942 *, ExtensionIntPair_t1615370488 , RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m4191562221_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m2287660198(__this, method) ((  ExtensionIntPair_t1615370488  (*) (KeyValuePair_2_t1644647942 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m2287660198_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m788404038(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t1644647942 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m788404038_gshared)(__this, method)
// System.String System.String::Concat(System.String[])
extern "C"  String_t* String_Concat_m4132442772 (RuntimeObject * __this /* static, unused */, StringU5BU5D_t2914275055* ___values0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object>::ToString()
#define KeyValuePair_2_ToString_m1892158444(__this, method) ((  String_t* (*) (KeyValuePair_2_t1644647942 *, const RuntimeMethod*))KeyValuePair_2_ToString_m1892158444_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m3703980508(__this, p0, method) ((  void (*) (KeyValuePair_2_t1876596811 *, int16_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m3703980508_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m2260610435(__this, p0, method) ((  void (*) (KeyValuePair_2_t1876596811 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Value_m2260610435_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m1241279413(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t1876596811 *, int16_t, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m1241279413_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m4001418303(__this, method) ((  int16_t (*) (KeyValuePair_2_t1876596811 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m4001418303_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m3578812968(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t1876596811 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3578812968_gshared)(__this, method)
// System.String System.Int16::ToString()
extern "C"  String_t* Int16_ToString_m3556232225 (int16_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>::ToString()
#define KeyValuePair_2_ToString_m3422157211(__this, method) ((  String_t* (*) (KeyValuePair_2_t1876596811 *, const RuntimeMethod*))KeyValuePair_2_ToString_m3422157211_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,proto.PhoneEvent/Types/Type>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m1910768816(__this, p0, method) ((  void (*) (KeyValuePair_2_t3574068060 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m1910768816_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,proto.PhoneEvent/Types/Type>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m1395427884(__this, p0, method) ((  void (*) (KeyValuePair_2_t3574068060 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Value_m1395427884_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,proto.PhoneEvent/Types/Type>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m2234391944(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t3574068060 *, int32_t, int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_m2234391944_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,proto.PhoneEvent/Types/Type>::get_Key()
#define KeyValuePair_2_get_Key_m564724(__this, method) ((  int32_t (*) (KeyValuePair_2_t3574068060 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m564724_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,proto.PhoneEvent/Types/Type>::get_Value()
#define KeyValuePair_2_get_Value_m3577894108(__this, method) ((  int32_t (*) (KeyValuePair_2_t3574068060 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3577894108_gshared)(__this, method)
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m850714729 (int32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,proto.PhoneEvent/Types/Type>::ToString()
#define KeyValuePair_2_ToString_m1636135099(__this, method) ((  String_t* (*) (KeyValuePair_2_t3574068060 *, const RuntimeMethod*))KeyValuePair_2_ToString_m1636135099_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m2250391939(__this, p0, method) ((  void (*) (KeyValuePair_2_t1714160987 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m2250391939_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m4273661052(__this, p0, method) ((  void (*) (KeyValuePair_2_t1714160987 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Value_m4273661052_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m3895777315(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t1714160987 *, int32_t, int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_m3895777315_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Key()
#define KeyValuePair_2_get_Key_m52553218(__this, method) ((  int32_t (*) (KeyValuePair_2_t1714160987 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m52553218_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Value()
#define KeyValuePair_2_get_Value_m17194378(__this, method) ((  int32_t (*) (KeyValuePair_2_t1714160987 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m17194378_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::ToString()
#define KeyValuePair_2_ToString_m1694255639(__this, method) ((  String_t* (*) (KeyValuePair_2_t1714160987 *, const RuntimeMethod*))KeyValuePair_2_ToString_m1694255639_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m1905228247(__this, p0, method) ((  void (*) (KeyValuePair_2_t280161440 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m1905228247_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m2568974006(__this, p0, method) ((  void (*) (KeyValuePair_2_t280161440 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Value_m2568974006_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m2523013854(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t280161440 *, int32_t, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m2523013854_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m1392247614(__this, method) ((  int32_t (*) (KeyValuePair_2_t280161440 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1392247614_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m644183845(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t280161440 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m644183845_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
#define KeyValuePair_2_ToString_m935574451(__this, method) ((  String_t* (*) (KeyValuePair_2_t280161440 *, const RuntimeMethod*))KeyValuePair_2_ToString_m935574451_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m944922394(__this, p0, method) ((  void (*) (KeyValuePair_2_t2799396707 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m944922394_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m4244868044(__this, p0, method) ((  void (*) (KeyValuePair_2_t2799396707 *, ConnectionPendingPlayers_t3718658286 , const RuntimeMethod*))KeyValuePair_2_set_Value_m4244868044_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m2097362691(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t2799396707 *, int32_t, ConnectionPendingPlayers_t3718658286 , const RuntimeMethod*))KeyValuePair_2__ctor_m2097362691_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>::get_Key()
#define KeyValuePair_2_get_Key_m2088175936(__this, method) ((  int32_t (*) (KeyValuePair_2_t2799396707 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m2088175936_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>::get_Value()
#define KeyValuePair_2_get_Value_m974891435(__this, method) ((  ConnectionPendingPlayers_t3718658286  (*) (KeyValuePair_2_t2799396707 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m974891435_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>::ToString()
#define KeyValuePair_2_ToString_m768903737(__this, method) ((  String_t* (*) (KeyValuePair_2_t2799396707 *, const RuntimeMethod*))KeyValuePair_2_ToString_m768903737_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m3907566952(__this, p0, method) ((  void (*) (KeyValuePair_2_t1301237340 *, intptr_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m3907566952_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m1340483893(__this, p0, method) ((  void (*) (KeyValuePair_2_t1301237340 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Value_m1340483893_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m1046954923(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t1301237340 *, intptr_t, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m1046954923_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m2062851278(__this, method) ((  intptr_t (*) (KeyValuePair_2_t1301237340 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m2062851278_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m1831044812(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t1301237340 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1831044812_gshared)(__this, method)
// System.String System.IntPtr::ToString()
extern "C"  String_t* IntPtr_ToString_m2406307642 (intptr_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::ToString()
#define KeyValuePair_2_ToString_m2794560979(__this, method) ((  String_t* (*) (KeyValuePair_2_t1301237340 *, const RuntimeMethod*))KeyValuePair_2_ToString_m2794560979_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m758687126(__this, p0, method) ((  void (*) (KeyValuePair_2_t2128348164 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Key_m758687126_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m1603717710(__this, p0, method) ((  void (*) (KeyValuePair_2_t2128348164 *, bool, const RuntimeMethod*))KeyValuePair_2_set_Value_m1603717710_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m4092806227(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t2128348164 *, RuntimeObject *, bool, const RuntimeMethod*))KeyValuePair_2__ctor_m4092806227_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Key()
#define KeyValuePair_2_get_Key_m851519192(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t2128348164 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m851519192_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Value()
#define KeyValuePair_2_get_Value_m378160927(__this, method) ((  bool (*) (KeyValuePair_2_t2128348164 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m378160927_gshared)(__this, method)
// System.String System.Boolean::ToString()
extern "C"  String_t* Boolean_ToString_m2868098690 (bool* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::ToString()
#define KeyValuePair_2_ToString_m573827280(__this, method) ((  String_t* (*) (KeyValuePair_2_t2128348164 *, const RuntimeMethod*))KeyValuePair_2_ToString_m573827280_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m1658723806(__this, p0, method) ((  void (*) (KeyValuePair_2_t607067939 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Key_m1658723806_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m3179743956(__this, p0, method) ((  void (*) (KeyValuePair_2_t607067939 *, KeyValuePair_2_t3050729127 , const RuntimeMethod*))KeyValuePair_2_set_Value_m3179743956_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m1111502450(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t607067939 *, RuntimeObject *, KeyValuePair_2_t3050729127 , const RuntimeMethod*))KeyValuePair_2__ctor_m1111502450_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
#define KeyValuePair_2_get_Key_m3927011729(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t607067939 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m3927011729_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
#define KeyValuePair_2_get_Value_m1410834898(__this, method) ((  KeyValuePair_2_t3050729127  (*) (KeyValuePair_2_t607067939 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1410834898_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToString()
#define KeyValuePair_2_ToString_m4199653167(__this, method) ((  String_t* (*) (KeyValuePair_2_t607067939 *, const RuntimeMethod*))KeyValuePair_2_ToString_m4199653167_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m2032842746(__this, p0, method) ((  void (*) (KeyValuePair_2_t189761378 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Key_m2032842746_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m1232725712(__this, p0, method) ((  void (*) (KeyValuePair_2_t189761378 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Value_m1232725712_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m2665256590(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t189761378 *, RuntimeObject *, int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_m2665256590_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Key()
#define KeyValuePair_2_get_Key_m3501000927(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t189761378 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m3501000927_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Value()
#define KeyValuePair_2_get_Value_m558261432(__this, method) ((  int32_t (*) (KeyValuePair_2_t189761378 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m558261432_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::ToString()
#define KeyValuePair_2_ToString_m3989116552(__this, method) ((  String_t* (*) (KeyValuePair_2_t189761378 *, const RuntimeMethod*))KeyValuePair_2_ToString_m3989116552_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m2835569005(__this, p0, method) ((  void (*) (KeyValuePair_2_t4125963872 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Key_m2835569005_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m1736389101(__this, p0, method) ((  void (*) (KeyValuePair_2_t4125963872 *, int64_t, const RuntimeMethod*))KeyValuePair_2_set_Value_m1736389101_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m959449189(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t4125963872 *, RuntimeObject *, int64_t, const RuntimeMethod*))KeyValuePair_2__ctor_m959449189_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::get_Key()
#define KeyValuePair_2_get_Key_m2764744769(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t4125963872 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m2764744769_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::get_Value()
#define KeyValuePair_2_get_Value_m3596745778(__this, method) ((  int64_t (*) (KeyValuePair_2_t4125963872 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3596745778_gshared)(__this, method)
// System.String System.Int64::ToString()
extern "C"  String_t* Int64_ToString_m657892391 (int64_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::ToString()
#define KeyValuePair_2_ToString_m1877622808(__this, method) ((  String_t* (*) (KeyValuePair_2_t4125963872 *, const RuntimeMethod*))KeyValuePair_2_ToString_m1877622808_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m2179644958(__this, p0, method) ((  void (*) (KeyValuePair_2_t3050729127 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Key_m2179644958_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m3810792090(__this, p0, method) ((  void (*) (KeyValuePair_2_t3050729127 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Value_m3810792090_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m2297796110(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t3050729127 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m2297796110_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m636538499(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t3050729127 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m636538499_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m4193217671(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t3050729127 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m4193217671_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::ToString()
#define KeyValuePair_2_ToString_m702196871(__this, method) ((  String_t* (*) (KeyValuePair_2_t3050729127 *, const RuntimeMethod*))KeyValuePair_2_ToString_m702196871_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Networking.NetworkBroadcastResult>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m1160328052(__this, p0, method) ((  void (*) (KeyValuePair_2_t2913600366 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Key_m1160328052_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Networking.NetworkBroadcastResult>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m414820314(__this, p0, method) ((  void (*) (KeyValuePair_2_t2913600366 *, NetworkBroadcastResult_t1062294258 , const RuntimeMethod*))KeyValuePair_2_set_Value_m414820314_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Networking.NetworkBroadcastResult>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m40446558(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t2913600366 *, RuntimeObject *, NetworkBroadcastResult_t1062294258 , const RuntimeMethod*))KeyValuePair_2__ctor_m40446558_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Networking.NetworkBroadcastResult>::get_Key()
#define KeyValuePair_2_get_Key_m47655277(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t2913600366 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m47655277_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Networking.NetworkBroadcastResult>::get_Value()
#define KeyValuePair_2_get_Value_m3901152886(__this, method) ((  NetworkBroadcastResult_t1062294258  (*) (KeyValuePair_2_t2913600366 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3901152886_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Networking.NetworkBroadcastResult>::ToString()
#define KeyValuePair_2_ToString_m3857975607(__this, method) ((  String_t* (*) (KeyValuePair_2_t2913600366 *, const RuntimeMethod*))KeyValuePair_2_ToString_m3857975607_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.KeyValuePair`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m4191562221_gshared (KeyValuePair_2_t1644647942 * __this, ExtensionIntPair_t1615370488  ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		ExtensionIntPair_t1615370488  L_0 = ___key0;
		KeyValuePair_2_set_Key_m2421817175((KeyValuePair_2_t1644647942 *)__this, (ExtensionIntPair_t1615370488 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RuntimeObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m3999725741((KeyValuePair_2_t1644647942 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m4191562221_AdjustorThunk (RuntimeObject * __this, ExtensionIntPair_t1615370488  ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t1644647942 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1644647942 *>(__this + 1);
	KeyValuePair_2__ctor_m4191562221(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object>::get_Key()
extern "C"  ExtensionIntPair_t1615370488  KeyValuePair_2_get_Key_m2287660198_gshared (KeyValuePair_2_t1644647942 * __this, const RuntimeMethod* method)
{
	{
		ExtensionIntPair_t1615370488  L_0 = (ExtensionIntPair_t1615370488 )__this->get_key_0();
		return L_0;
	}
}
extern "C"  ExtensionIntPair_t1615370488  KeyValuePair_2_get_Key_m2287660198_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1644647942 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1644647942 *>(__this + 1);
	return KeyValuePair_2_get_Key_m2287660198(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2421817175_gshared (KeyValuePair_2_t1644647942 * __this, ExtensionIntPair_t1615370488  ___value0, const RuntimeMethod* method)
{
	{
		ExtensionIntPair_t1615370488  L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m2421817175_AdjustorThunk (RuntimeObject * __this, ExtensionIntPair_t1615370488  ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1644647942 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1644647942 *>(__this + 1);
	KeyValuePair_2_set_Key_m2421817175(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m788404038_gshared (KeyValuePair_2_t1644647942 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m788404038_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1644647942 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1644647942 *>(__this + 1);
	return KeyValuePair_2_get_Value_m788404038(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3999725741_gshared (KeyValuePair_2_t1644647942 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m3999725741_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1644647942 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1644647942 *>(__this + 1);
	KeyValuePair_2_set_Value_m3999725741(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1892158444_gshared (KeyValuePair_2_t1644647942 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m1892158444_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ExtensionIntPair_t1615370488  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t2914275055* G_B2_1 = NULL;
	StringU5BU5D_t2914275055* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t2914275055* G_B1_1 = NULL;
	StringU5BU5D_t2914275055* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t2914275055* G_B3_2 = NULL;
	StringU5BU5D_t2914275055* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t2914275055* G_B5_1 = NULL;
	StringU5BU5D_t2914275055* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t2914275055* G_B4_1 = NULL;
	StringU5BU5D_t2914275055* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t2914275055* G_B6_2 = NULL;
	StringU5BU5D_t2914275055* G_B6_3 = NULL;
	{
		StringU5BU5D_t2914275055* L_0 = (StringU5BU5D_t2914275055*)((StringU5BU5D_t2914275055*)SZArrayNew(StringU5BU5D_t2914275055_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral3520811296);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3520811296);
		StringU5BU5D_t2914275055* L_1 = (StringU5BU5D_t2914275055*)L_0;
		ExtensionIntPair_t1615370488  L_2 = KeyValuePair_2_get_Key_m2287660198((KeyValuePair_2_t1644647942 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		ExtensionIntPair_t1615370488  L_3 = KeyValuePair_2_get_Key_m2287660198((KeyValuePair_2_t1644647942 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (ExtensionIntPair_t1615370488 )L_3;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (&V_0));
		NullCheck((RuntimeObject *)L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_4);
		*(&V_0) = *(ExtensionIntPair_t1615370488 *)UnBox(L_4);
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t2914275055* L_7 = (StringU5BU5D_t2914275055*)G_B3_3;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral4251046666);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral4251046666);
		StringU5BU5D_t2914275055* L_8 = (StringU5BU5D_t2914275055*)L_7;
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m788404038((KeyValuePair_2_t1644647942 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_8;
		G_B4_2 = L_8;
		if (!L_9)
		{
			G_B5_0 = 3;
			G_B5_1 = L_8;
			G_B5_2 = L_8;
			goto IL_0072;
		}
	}
	{
		RuntimeObject * L_10 = KeyValuePair_2_get_Value_m788404038((KeyValuePair_2_t1644647942 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (RuntimeObject *)L_10;
		NullCheck((RuntimeObject *)(*(&V_1)));
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_1)));
		G_B6_0 = L_11;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_12;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t2914275055* L_13 = (StringU5BU5D_t2914275055*)G_B6_3;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral2186763900);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2186763900);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m4132442772(NULL /*static, unused*/, (StringU5BU5D_t2914275055*)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m1892158444_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1644647942 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1644647942 *>(__this + 1);
	return KeyValuePair_2_ToString_m1892158444(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1241279413_gshared (KeyValuePair_2_t1876596811 * __this, int16_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		int16_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m3703980508((KeyValuePair_2_t1876596811 *)__this, (int16_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RuntimeObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m2260610435((KeyValuePair_2_t1876596811 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m1241279413_AdjustorThunk (RuntimeObject * __this, int16_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t1876596811 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1876596811 *>(__this + 1);
	KeyValuePair_2__ctor_m1241279413(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>::get_Key()
extern "C"  int16_t KeyValuePair_2_get_Key_m4001418303_gshared (KeyValuePair_2_t1876596811 * __this, const RuntimeMethod* method)
{
	{
		int16_t L_0 = (int16_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int16_t KeyValuePair_2_get_Key_m4001418303_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1876596811 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1876596811 *>(__this + 1);
	return KeyValuePair_2_get_Key_m4001418303(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m3703980508_gshared (KeyValuePair_2_t1876596811 * __this, int16_t ___value0, const RuntimeMethod* method)
{
	{
		int16_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m3703980508_AdjustorThunk (RuntimeObject * __this, int16_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1876596811 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1876596811 *>(__this + 1);
	KeyValuePair_2_set_Key_m3703980508(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m3578812968_gshared (KeyValuePair_2_t1876596811 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m3578812968_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1876596811 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1876596811 *>(__this + 1);
	return KeyValuePair_2_get_Value_m3578812968(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2260610435_gshared (KeyValuePair_2_t1876596811 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m2260610435_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1876596811 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1876596811 *>(__this + 1);
	KeyValuePair_2_set_Value_m2260610435(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3422157211_gshared (KeyValuePair_2_t1876596811 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m3422157211_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int16_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t2914275055* G_B2_1 = NULL;
	StringU5BU5D_t2914275055* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t2914275055* G_B1_1 = NULL;
	StringU5BU5D_t2914275055* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t2914275055* G_B3_2 = NULL;
	StringU5BU5D_t2914275055* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t2914275055* G_B5_1 = NULL;
	StringU5BU5D_t2914275055* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t2914275055* G_B4_1 = NULL;
	StringU5BU5D_t2914275055* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t2914275055* G_B6_2 = NULL;
	StringU5BU5D_t2914275055* G_B6_3 = NULL;
	{
		StringU5BU5D_t2914275055* L_0 = (StringU5BU5D_t2914275055*)((StringU5BU5D_t2914275055*)SZArrayNew(StringU5BU5D_t2914275055_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral3520811296);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3520811296);
		StringU5BU5D_t2914275055* L_1 = (StringU5BU5D_t2914275055*)L_0;
		int16_t L_2 = KeyValuePair_2_get_Key_m4001418303((KeyValuePair_2_t1876596811 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		int16_t L_3 = KeyValuePair_2_get_Key_m4001418303((KeyValuePair_2_t1876596811 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int16_t)L_3;
		String_t* L_4 = Int16_ToString_m3556232225((int16_t*)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t2914275055* L_6 = (StringU5BU5D_t2914275055*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral4251046666);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral4251046666);
		StringU5BU5D_t2914275055* L_7 = (StringU5BU5D_t2914275055*)L_6;
		RuntimeObject * L_8 = KeyValuePair_2_get_Value_m3578812968((KeyValuePair_2_t1876596811 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
		if (!L_8)
		{
			G_B5_0 = 3;
			G_B5_1 = L_7;
			G_B5_2 = L_7;
			goto IL_0072;
		}
	}
	{
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m3578812968((KeyValuePair_2_t1876596811 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (RuntimeObject *)L_9;
		NullCheck((RuntimeObject *)(*(&V_1)));
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_1)));
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t2914275055* L_12 = (StringU5BU5D_t2914275055*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral2186763900);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2186763900);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m4132442772(NULL /*static, unused*/, (StringU5BU5D_t2914275055*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m3422157211_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1876596811 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1876596811 *>(__this + 1);
	return KeyValuePair_2_ToString_m3422157211(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,proto.PhoneEvent/Types/Type>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2234391944_gshared (KeyValuePair_2_t3574068060 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m1910768816((KeyValuePair_2_t3574068060 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = ___value1;
		KeyValuePair_2_set_Value_m1395427884((KeyValuePair_2_t3574068060 *)__this, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m2234391944_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t3574068060 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3574068060 *>(__this + 1);
	KeyValuePair_2__ctor_m2234391944(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,proto.PhoneEvent/Types/Type>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m564724_gshared (KeyValuePair_2_t3574068060 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m564724_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3574068060 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3574068060 *>(__this + 1);
	return KeyValuePair_2_get_Key_m564724(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,proto.PhoneEvent/Types/Type>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1910768816_gshared (KeyValuePair_2_t3574068060 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m1910768816_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t3574068060 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3574068060 *>(__this + 1);
	KeyValuePair_2_set_Key_m1910768816(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,proto.PhoneEvent/Types/Type>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m3577894108_gshared (KeyValuePair_2_t3574068060 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_1();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Value_m3577894108_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3574068060 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3574068060 *>(__this + 1);
	return KeyValuePair_2_get_Value_m3577894108(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,proto.PhoneEvent/Types/Type>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1395427884_gshared (KeyValuePair_2_t3574068060 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m1395427884_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t3574068060 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3574068060 *>(__this + 1);
	KeyValuePair_2_set_Value_m1395427884(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,proto.PhoneEvent/Types/Type>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1636135099_gshared (KeyValuePair_2_t3574068060 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m1636135099_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t2914275055* G_B2_1 = NULL;
	StringU5BU5D_t2914275055* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t2914275055* G_B1_1 = NULL;
	StringU5BU5D_t2914275055* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t2914275055* G_B3_2 = NULL;
	StringU5BU5D_t2914275055* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t2914275055* G_B5_1 = NULL;
	StringU5BU5D_t2914275055* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t2914275055* G_B4_1 = NULL;
	StringU5BU5D_t2914275055* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t2914275055* G_B6_2 = NULL;
	StringU5BU5D_t2914275055* G_B6_3 = NULL;
	{
		StringU5BU5D_t2914275055* L_0 = (StringU5BU5D_t2914275055*)((StringU5BU5D_t2914275055*)SZArrayNew(StringU5BU5D_t2914275055_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral3520811296);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3520811296);
		StringU5BU5D_t2914275055* L_1 = (StringU5BU5D_t2914275055*)L_0;
		int32_t L_2 = KeyValuePair_2_get_Key_m564724((KeyValuePair_2_t3574068060 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		int32_t L_3 = KeyValuePair_2_get_Key_m564724((KeyValuePair_2_t3574068060 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_3;
		String_t* L_4 = Int32_ToString_m850714729((int32_t*)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t2914275055* L_6 = (StringU5BU5D_t2914275055*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral4251046666);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral4251046666);
		StringU5BU5D_t2914275055* L_7 = (StringU5BU5D_t2914275055*)L_6;
		int32_t L_8 = KeyValuePair_2_get_Value_m3577894108((KeyValuePair_2_t3574068060 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		int32_t L_9 = KeyValuePair_2_get_Value_m3577894108((KeyValuePair_2_t3574068060 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (int32_t)L_9;
		RuntimeObject * L_10 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1));
		NullCheck((RuntimeObject *)L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_10);
		*(&V_1) = *(int32_t*)UnBox(L_10);
		G_B6_0 = L_11;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_12;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t2914275055* L_13 = (StringU5BU5D_t2914275055*)G_B6_3;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral2186763900);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2186763900);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m4132442772(NULL /*static, unused*/, (StringU5BU5D_t2914275055*)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m1636135099_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3574068060 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3574068060 *>(__this + 1);
	return KeyValuePair_2_ToString_m1636135099(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3895777315_gshared (KeyValuePair_2_t1714160987 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m2250391939((KeyValuePair_2_t1714160987 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = ___value1;
		KeyValuePair_2_set_Value_m4273661052((KeyValuePair_2_t1714160987 *)__this, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m3895777315_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t1714160987 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1714160987 *>(__this + 1);
	KeyValuePair_2__ctor_m3895777315(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m52553218_gshared (KeyValuePair_2_t1714160987 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m52553218_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1714160987 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1714160987 *>(__this + 1);
	return KeyValuePair_2_get_Key_m52553218(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2250391939_gshared (KeyValuePair_2_t1714160987 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m2250391939_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1714160987 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1714160987 *>(__this + 1);
	KeyValuePair_2_set_Key_m2250391939(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m17194378_gshared (KeyValuePair_2_t1714160987 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_1();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Value_m17194378_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1714160987 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1714160987 *>(__this + 1);
	return KeyValuePair_2_get_Value_m17194378(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m4273661052_gshared (KeyValuePair_2_t1714160987 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m4273661052_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1714160987 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1714160987 *>(__this + 1);
	KeyValuePair_2_set_Value_m4273661052(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1694255639_gshared (KeyValuePair_2_t1714160987 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m1694255639_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t2914275055* G_B2_1 = NULL;
	StringU5BU5D_t2914275055* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t2914275055* G_B1_1 = NULL;
	StringU5BU5D_t2914275055* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t2914275055* G_B3_2 = NULL;
	StringU5BU5D_t2914275055* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t2914275055* G_B5_1 = NULL;
	StringU5BU5D_t2914275055* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t2914275055* G_B4_1 = NULL;
	StringU5BU5D_t2914275055* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t2914275055* G_B6_2 = NULL;
	StringU5BU5D_t2914275055* G_B6_3 = NULL;
	{
		StringU5BU5D_t2914275055* L_0 = (StringU5BU5D_t2914275055*)((StringU5BU5D_t2914275055*)SZArrayNew(StringU5BU5D_t2914275055_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral3520811296);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3520811296);
		StringU5BU5D_t2914275055* L_1 = (StringU5BU5D_t2914275055*)L_0;
		int32_t L_2 = KeyValuePair_2_get_Key_m52553218((KeyValuePair_2_t1714160987 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		int32_t L_3 = KeyValuePair_2_get_Key_m52553218((KeyValuePair_2_t1714160987 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_3;
		String_t* L_4 = Int32_ToString_m850714729((int32_t*)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t2914275055* L_6 = (StringU5BU5D_t2914275055*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral4251046666);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral4251046666);
		StringU5BU5D_t2914275055* L_7 = (StringU5BU5D_t2914275055*)L_6;
		int32_t L_8 = KeyValuePair_2_get_Value_m17194378((KeyValuePair_2_t1714160987 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		int32_t L_9 = KeyValuePair_2_get_Value_m17194378((KeyValuePair_2_t1714160987 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (int32_t)L_9;
		String_t* L_10 = Int32_ToString_m850714729((int32_t*)(&V_1), /*hidden argument*/NULL);
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t2914275055* L_12 = (StringU5BU5D_t2914275055*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral2186763900);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2186763900);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m4132442772(NULL /*static, unused*/, (StringU5BU5D_t2914275055*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m1694255639_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1714160987 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1714160987 *>(__this + 1);
	return KeyValuePair_2_ToString_m1694255639(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2523013854_gshared (KeyValuePair_2_t280161440 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m1905228247((KeyValuePair_2_t280161440 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RuntimeObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m2568974006((KeyValuePair_2_t280161440 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m2523013854_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t280161440 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t280161440 *>(__this + 1);
	KeyValuePair_2__ctor_m2523013854(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m1392247614_gshared (KeyValuePair_2_t280161440 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m1392247614_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t280161440 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t280161440 *>(__this + 1);
	return KeyValuePair_2_get_Key_m1392247614(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1905228247_gshared (KeyValuePair_2_t280161440 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m1905228247_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t280161440 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t280161440 *>(__this + 1);
	KeyValuePair_2_set_Key_m1905228247(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m644183845_gshared (KeyValuePair_2_t280161440 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m644183845_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t280161440 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t280161440 *>(__this + 1);
	return KeyValuePair_2_get_Value_m644183845(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2568974006_gshared (KeyValuePair_2_t280161440 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m2568974006_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t280161440 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t280161440 *>(__this + 1);
	KeyValuePair_2_set_Value_m2568974006(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m935574451_gshared (KeyValuePair_2_t280161440 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m935574451_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t2914275055* G_B2_1 = NULL;
	StringU5BU5D_t2914275055* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t2914275055* G_B1_1 = NULL;
	StringU5BU5D_t2914275055* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t2914275055* G_B3_2 = NULL;
	StringU5BU5D_t2914275055* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t2914275055* G_B5_1 = NULL;
	StringU5BU5D_t2914275055* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t2914275055* G_B4_1 = NULL;
	StringU5BU5D_t2914275055* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t2914275055* G_B6_2 = NULL;
	StringU5BU5D_t2914275055* G_B6_3 = NULL;
	{
		StringU5BU5D_t2914275055* L_0 = (StringU5BU5D_t2914275055*)((StringU5BU5D_t2914275055*)SZArrayNew(StringU5BU5D_t2914275055_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral3520811296);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3520811296);
		StringU5BU5D_t2914275055* L_1 = (StringU5BU5D_t2914275055*)L_0;
		int32_t L_2 = KeyValuePair_2_get_Key_m1392247614((KeyValuePair_2_t280161440 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		int32_t L_3 = KeyValuePair_2_get_Key_m1392247614((KeyValuePair_2_t280161440 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_3;
		String_t* L_4 = Int32_ToString_m850714729((int32_t*)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t2914275055* L_6 = (StringU5BU5D_t2914275055*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral4251046666);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral4251046666);
		StringU5BU5D_t2914275055* L_7 = (StringU5BU5D_t2914275055*)L_6;
		RuntimeObject * L_8 = KeyValuePair_2_get_Value_m644183845((KeyValuePair_2_t280161440 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
		if (!L_8)
		{
			G_B5_0 = 3;
			G_B5_1 = L_7;
			G_B5_2 = L_7;
			goto IL_0072;
		}
	}
	{
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m644183845((KeyValuePair_2_t280161440 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (RuntimeObject *)L_9;
		NullCheck((RuntimeObject *)(*(&V_1)));
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_1)));
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t2914275055* L_12 = (StringU5BU5D_t2914275055*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral2186763900);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2186763900);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m4132442772(NULL /*static, unused*/, (StringU5BU5D_t2914275055*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m935574451_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t280161440 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t280161440 *>(__this + 1);
	return KeyValuePair_2_ToString_m935574451(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2097362691_gshared (KeyValuePair_2_t2799396707 * __this, int32_t ___key0, ConnectionPendingPlayers_t3718658286  ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m944922394((KeyValuePair_2_t2799396707 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ConnectionPendingPlayers_t3718658286  L_1 = ___value1;
		KeyValuePair_2_set_Value_m4244868044((KeyValuePair_2_t2799396707 *)__this, (ConnectionPendingPlayers_t3718658286 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m2097362691_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, ConnectionPendingPlayers_t3718658286  ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t2799396707 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2799396707 *>(__this + 1);
	KeyValuePair_2__ctor_m2097362691(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m2088175936_gshared (KeyValuePair_2_t2799396707 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m2088175936_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2799396707 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2799396707 *>(__this + 1);
	return KeyValuePair_2_get_Key_m2088175936(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m944922394_gshared (KeyValuePair_2_t2799396707 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m944922394_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2799396707 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2799396707 *>(__this + 1);
	KeyValuePair_2_set_Key_m944922394(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>::get_Value()
extern "C"  ConnectionPendingPlayers_t3718658286  KeyValuePair_2_get_Value_m974891435_gshared (KeyValuePair_2_t2799396707 * __this, const RuntimeMethod* method)
{
	{
		ConnectionPendingPlayers_t3718658286  L_0 = (ConnectionPendingPlayers_t3718658286 )__this->get_value_1();
		return L_0;
	}
}
extern "C"  ConnectionPendingPlayers_t3718658286  KeyValuePair_2_get_Value_m974891435_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2799396707 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2799396707 *>(__this + 1);
	return KeyValuePair_2_get_Value_m974891435(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m4244868044_gshared (KeyValuePair_2_t2799396707 * __this, ConnectionPendingPlayers_t3718658286  ___value0, const RuntimeMethod* method)
{
	{
		ConnectionPendingPlayers_t3718658286  L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m4244868044_AdjustorThunk (RuntimeObject * __this, ConnectionPendingPlayers_t3718658286  ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2799396707 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2799396707 *>(__this + 1);
	KeyValuePair_2_set_Value_m4244868044(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m768903737_gshared (KeyValuePair_2_t2799396707 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m768903737_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ConnectionPendingPlayers_t3718658286  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t G_B2_0 = 0;
	StringU5BU5D_t2914275055* G_B2_1 = NULL;
	StringU5BU5D_t2914275055* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t2914275055* G_B1_1 = NULL;
	StringU5BU5D_t2914275055* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t2914275055* G_B3_2 = NULL;
	StringU5BU5D_t2914275055* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t2914275055* G_B5_1 = NULL;
	StringU5BU5D_t2914275055* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t2914275055* G_B4_1 = NULL;
	StringU5BU5D_t2914275055* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t2914275055* G_B6_2 = NULL;
	StringU5BU5D_t2914275055* G_B6_3 = NULL;
	{
		StringU5BU5D_t2914275055* L_0 = (StringU5BU5D_t2914275055*)((StringU5BU5D_t2914275055*)SZArrayNew(StringU5BU5D_t2914275055_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral3520811296);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3520811296);
		StringU5BU5D_t2914275055* L_1 = (StringU5BU5D_t2914275055*)L_0;
		int32_t L_2 = KeyValuePair_2_get_Key_m2088175936((KeyValuePair_2_t2799396707 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		int32_t L_3 = KeyValuePair_2_get_Key_m2088175936((KeyValuePair_2_t2799396707 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_3;
		String_t* L_4 = Int32_ToString_m850714729((int32_t*)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t2914275055* L_6 = (StringU5BU5D_t2914275055*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral4251046666);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral4251046666);
		StringU5BU5D_t2914275055* L_7 = (StringU5BU5D_t2914275055*)L_6;
		ConnectionPendingPlayers_t3718658286  L_8 = KeyValuePair_2_get_Value_m974891435((KeyValuePair_2_t2799396707 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		ConnectionPendingPlayers_t3718658286  L_9 = KeyValuePair_2_get_Value_m974891435((KeyValuePair_2_t2799396707 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (ConnectionPendingPlayers_t3718658286 )L_9;
		RuntimeObject * L_10 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1));
		NullCheck((RuntimeObject *)L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_10);
		*(&V_1) = *(ConnectionPendingPlayers_t3718658286 *)UnBox(L_10);
		G_B6_0 = L_11;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_12;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t2914275055* L_13 = (StringU5BU5D_t2914275055*)G_B6_3;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral2186763900);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2186763900);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m4132442772(NULL /*static, unused*/, (StringU5BU5D_t2914275055*)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m768903737_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2799396707 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2799396707 *>(__this + 1);
	return KeyValuePair_2_ToString_m768903737(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1046954923_gshared (KeyValuePair_2_t1301237340 * __this, intptr_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m3907566952((KeyValuePair_2_t1301237340 *)__this, (intptr_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RuntimeObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m1340483893((KeyValuePair_2_t1301237340 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m1046954923_AdjustorThunk (RuntimeObject * __this, intptr_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t1301237340 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1301237340 *>(__this + 1);
	KeyValuePair_2__ctor_m1046954923(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Key()
extern "C"  intptr_t KeyValuePair_2_get_Key_m2062851278_gshared (KeyValuePair_2_t1301237340 * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = (intptr_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  intptr_t KeyValuePair_2_get_Key_m2062851278_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1301237340 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1301237340 *>(__this + 1);
	return KeyValuePair_2_get_Key_m2062851278(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m3907566952_gshared (KeyValuePair_2_t1301237340 * __this, intptr_t ___value0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m3907566952_AdjustorThunk (RuntimeObject * __this, intptr_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1301237340 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1301237340 *>(__this + 1);
	KeyValuePair_2_set_Key_m3907566952(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m1831044812_gshared (KeyValuePair_2_t1301237340 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m1831044812_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1301237340 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1301237340 *>(__this + 1);
	return KeyValuePair_2_get_Value_m1831044812(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1340483893_gshared (KeyValuePair_2_t1301237340 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m1340483893_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1301237340 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1301237340 *>(__this + 1);
	KeyValuePair_2_set_Value_m1340483893(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2794560979_gshared (KeyValuePair_2_t1301237340 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m2794560979_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t2914275055* G_B2_1 = NULL;
	StringU5BU5D_t2914275055* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t2914275055* G_B1_1 = NULL;
	StringU5BU5D_t2914275055* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t2914275055* G_B3_2 = NULL;
	StringU5BU5D_t2914275055* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t2914275055* G_B5_1 = NULL;
	StringU5BU5D_t2914275055* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t2914275055* G_B4_1 = NULL;
	StringU5BU5D_t2914275055* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t2914275055* G_B6_2 = NULL;
	StringU5BU5D_t2914275055* G_B6_3 = NULL;
	{
		StringU5BU5D_t2914275055* L_0 = (StringU5BU5D_t2914275055*)((StringU5BU5D_t2914275055*)SZArrayNew(StringU5BU5D_t2914275055_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral3520811296);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3520811296);
		StringU5BU5D_t2914275055* L_1 = (StringU5BU5D_t2914275055*)L_0;
		intptr_t L_2 = KeyValuePair_2_get_Key_m2062851278((KeyValuePair_2_t1301237340 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		intptr_t L_3 = KeyValuePair_2_get_Key_m2062851278((KeyValuePair_2_t1301237340 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (intptr_t)L_3;
		String_t* L_4 = IntPtr_ToString_m2406307642((intptr_t*)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t2914275055* L_6 = (StringU5BU5D_t2914275055*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral4251046666);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral4251046666);
		StringU5BU5D_t2914275055* L_7 = (StringU5BU5D_t2914275055*)L_6;
		RuntimeObject * L_8 = KeyValuePair_2_get_Value_m1831044812((KeyValuePair_2_t1301237340 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
		if (!L_8)
		{
			G_B5_0 = 3;
			G_B5_1 = L_7;
			G_B5_2 = L_7;
			goto IL_0072;
		}
	}
	{
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m1831044812((KeyValuePair_2_t1301237340 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (RuntimeObject *)L_9;
		NullCheck((RuntimeObject *)(*(&V_1)));
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_1)));
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t2914275055* L_12 = (StringU5BU5D_t2914275055*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral2186763900);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2186763900);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m4132442772(NULL /*static, unused*/, (StringU5BU5D_t2914275055*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m2794560979_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1301237340 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1301237340 *>(__this + 1);
	return KeyValuePair_2_ToString_m2794560979(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m4092806227_gshared (KeyValuePair_2_t2128348164 * __this, RuntimeObject * ___key0, bool ___value1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___key0;
		KeyValuePair_2_set_Key_m758687126((KeyValuePair_2_t2128348164 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		bool L_1 = ___value1;
		KeyValuePair_2_set_Value_m1603717710((KeyValuePair_2_t2128348164 *)__this, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m4092806227_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___key0, bool ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t2128348164 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2128348164 *>(__this + 1);
	KeyValuePair_2__ctor_m4092806227(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m851519192_gshared (KeyValuePair_2_t2128348164 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m851519192_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2128348164 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2128348164 *>(__this + 1);
	return KeyValuePair_2_get_Key_m851519192(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m758687126_gshared (KeyValuePair_2_t2128348164 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m758687126_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2128348164 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2128348164 *>(__this + 1);
	KeyValuePair_2_set_Key_m758687126(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Value()
extern "C"  bool KeyValuePair_2_get_Value_m378160927_gshared (KeyValuePair_2_t2128348164 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_value_1();
		return L_0;
	}
}
extern "C"  bool KeyValuePair_2_get_Value_m378160927_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2128348164 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2128348164 *>(__this + 1);
	return KeyValuePair_2_get_Value_m378160927(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1603717710_gshared (KeyValuePair_2_t2128348164 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m1603717710_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2128348164 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2128348164 *>(__this + 1);
	KeyValuePair_2_set_Value_m1603717710(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m573827280_gshared (KeyValuePair_2_t2128348164 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m573827280_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t2914275055* G_B2_1 = NULL;
	StringU5BU5D_t2914275055* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t2914275055* G_B1_1 = NULL;
	StringU5BU5D_t2914275055* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t2914275055* G_B3_2 = NULL;
	StringU5BU5D_t2914275055* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t2914275055* G_B5_1 = NULL;
	StringU5BU5D_t2914275055* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t2914275055* G_B4_1 = NULL;
	StringU5BU5D_t2914275055* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t2914275055* G_B6_2 = NULL;
	StringU5BU5D_t2914275055* G_B6_3 = NULL;
	{
		StringU5BU5D_t2914275055* L_0 = (StringU5BU5D_t2914275055*)((StringU5BU5D_t2914275055*)SZArrayNew(StringU5BU5D_t2914275055_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral3520811296);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3520811296);
		StringU5BU5D_t2914275055* L_1 = (StringU5BU5D_t2914275055*)L_0;
		RuntimeObject * L_2 = KeyValuePair_2_get_Key_m851519192((KeyValuePair_2_t2128348164 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_2)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0039;
		}
	}
	{
		RuntimeObject * L_3 = KeyValuePair_2_get_Key_m851519192((KeyValuePair_2_t2128348164 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (RuntimeObject *)L_3;
		NullCheck((RuntimeObject *)(*(&V_0)));
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_0)));
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t2914275055* L_6 = (StringU5BU5D_t2914275055*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral4251046666);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral4251046666);
		StringU5BU5D_t2914275055* L_7 = (StringU5BU5D_t2914275055*)L_6;
		bool L_8 = KeyValuePair_2_get_Value_m378160927((KeyValuePair_2_t2128348164 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		bool L_9 = KeyValuePair_2_get_Value_m378160927((KeyValuePair_2_t2128348164 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (bool)L_9;
		String_t* L_10 = Boolean_ToString_m2868098690((bool*)(&V_1), /*hidden argument*/NULL);
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t2914275055* L_12 = (StringU5BU5D_t2914275055*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral2186763900);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2186763900);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m4132442772(NULL /*static, unused*/, (StringU5BU5D_t2914275055*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m573827280_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2128348164 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2128348164 *>(__this + 1);
	return KeyValuePair_2_ToString_m573827280(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1111502450_gshared (KeyValuePair_2_t607067939 * __this, RuntimeObject * ___key0, KeyValuePair_2_t3050729127  ___value1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___key0;
		KeyValuePair_2_set_Key_m1658723806((KeyValuePair_2_t607067939 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3050729127  L_1 = ___value1;
		KeyValuePair_2_set_Value_m3179743956((KeyValuePair_2_t607067939 *)__this, (KeyValuePair_2_t3050729127 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m1111502450_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___key0, KeyValuePair_2_t3050729127  ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t607067939 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t607067939 *>(__this + 1);
	KeyValuePair_2__ctor_m1111502450(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m3927011729_gshared (KeyValuePair_2_t607067939 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m3927011729_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t607067939 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t607067939 *>(__this + 1);
	return KeyValuePair_2_get_Key_m3927011729(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1658723806_gshared (KeyValuePair_2_t607067939 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m1658723806_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t607067939 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t607067939 *>(__this + 1);
	KeyValuePair_2_set_Key_m1658723806(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
extern "C"  KeyValuePair_2_t3050729127  KeyValuePair_2_get_Value_m1410834898_gshared (KeyValuePair_2_t607067939 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_t3050729127  L_0 = (KeyValuePair_2_t3050729127 )__this->get_value_1();
		return L_0;
	}
}
extern "C"  KeyValuePair_2_t3050729127  KeyValuePair_2_get_Value_m1410834898_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t607067939 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t607067939 *>(__this + 1);
	return KeyValuePair_2_get_Value_m1410834898(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3179743956_gshared (KeyValuePair_2_t607067939 * __this, KeyValuePair_2_t3050729127  ___value0, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_t3050729127  L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m3179743956_AdjustorThunk (RuntimeObject * __this, KeyValuePair_2_t3050729127  ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t607067939 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t607067939 *>(__this + 1);
	KeyValuePair_2_set_Value_m3179743956(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m4199653167_gshared (KeyValuePair_2_t607067939 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m4199653167_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	KeyValuePair_2_t3050729127  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t G_B2_0 = 0;
	StringU5BU5D_t2914275055* G_B2_1 = NULL;
	StringU5BU5D_t2914275055* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t2914275055* G_B1_1 = NULL;
	StringU5BU5D_t2914275055* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t2914275055* G_B3_2 = NULL;
	StringU5BU5D_t2914275055* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t2914275055* G_B5_1 = NULL;
	StringU5BU5D_t2914275055* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t2914275055* G_B4_1 = NULL;
	StringU5BU5D_t2914275055* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t2914275055* G_B6_2 = NULL;
	StringU5BU5D_t2914275055* G_B6_3 = NULL;
	{
		StringU5BU5D_t2914275055* L_0 = (StringU5BU5D_t2914275055*)((StringU5BU5D_t2914275055*)SZArrayNew(StringU5BU5D_t2914275055_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral3520811296);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3520811296);
		StringU5BU5D_t2914275055* L_1 = (StringU5BU5D_t2914275055*)L_0;
		RuntimeObject * L_2 = KeyValuePair_2_get_Key_m3927011729((KeyValuePair_2_t607067939 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_2)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0039;
		}
	}
	{
		RuntimeObject * L_3 = KeyValuePair_2_get_Key_m3927011729((KeyValuePair_2_t607067939 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (RuntimeObject *)L_3;
		NullCheck((RuntimeObject *)(*(&V_0)));
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_0)));
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t2914275055* L_6 = (StringU5BU5D_t2914275055*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral4251046666);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral4251046666);
		StringU5BU5D_t2914275055* L_7 = (StringU5BU5D_t2914275055*)L_6;
		KeyValuePair_2_t3050729127  L_8 = KeyValuePair_2_get_Value_m1410834898((KeyValuePair_2_t607067939 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		KeyValuePair_2_t3050729127  L_9 = KeyValuePair_2_get_Value_m1410834898((KeyValuePair_2_t607067939 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (KeyValuePair_2_t3050729127 )L_9;
		Il2CppFakeBox<KeyValuePair_2_t3050729127 > L_10(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__104 = il2cpp_codegen_get_virtual_invoke_data(3, &L_10);
		String_t* L_11 = ((  String_t* (*) (RuntimeObject *, const RuntimeMethod*))il2cpp_virtual_invoke_data__104.methodPtr)((RuntimeObject *)(&L_10), /*hidden argument*/il2cpp_virtual_invoke_data__104.method);
		*(&V_1) = L_10.m_Value;
		G_B6_0 = L_11;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_12;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t2914275055* L_13 = (StringU5BU5D_t2914275055*)G_B6_3;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral2186763900);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2186763900);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m4132442772(NULL /*static, unused*/, (StringU5BU5D_t2914275055*)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m4199653167_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t607067939 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t607067939 *>(__this + 1);
	return KeyValuePair_2_ToString_m4199653167(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2665256590_gshared (KeyValuePair_2_t189761378 * __this, RuntimeObject * ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___key0;
		KeyValuePair_2_set_Key_m2032842746((KeyValuePair_2_t189761378 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = ___value1;
		KeyValuePair_2_set_Value_m1232725712((KeyValuePair_2_t189761378 *)__this, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m2665256590_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t189761378 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t189761378 *>(__this + 1);
	KeyValuePair_2__ctor_m2665256590(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m3501000927_gshared (KeyValuePair_2_t189761378 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m3501000927_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t189761378 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t189761378 *>(__this + 1);
	return KeyValuePair_2_get_Key_m3501000927(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2032842746_gshared (KeyValuePair_2_t189761378 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m2032842746_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t189761378 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t189761378 *>(__this + 1);
	KeyValuePair_2_set_Key_m2032842746(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m558261432_gshared (KeyValuePair_2_t189761378 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_1();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Value_m558261432_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t189761378 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t189761378 *>(__this + 1);
	return KeyValuePair_2_get_Value_m558261432(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1232725712_gshared (KeyValuePair_2_t189761378 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m1232725712_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t189761378 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t189761378 *>(__this + 1);
	KeyValuePair_2_set_Value_m1232725712(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3989116552_gshared (KeyValuePair_2_t189761378 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m3989116552_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t2914275055* G_B2_1 = NULL;
	StringU5BU5D_t2914275055* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t2914275055* G_B1_1 = NULL;
	StringU5BU5D_t2914275055* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t2914275055* G_B3_2 = NULL;
	StringU5BU5D_t2914275055* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t2914275055* G_B5_1 = NULL;
	StringU5BU5D_t2914275055* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t2914275055* G_B4_1 = NULL;
	StringU5BU5D_t2914275055* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t2914275055* G_B6_2 = NULL;
	StringU5BU5D_t2914275055* G_B6_3 = NULL;
	{
		StringU5BU5D_t2914275055* L_0 = (StringU5BU5D_t2914275055*)((StringU5BU5D_t2914275055*)SZArrayNew(StringU5BU5D_t2914275055_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral3520811296);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3520811296);
		StringU5BU5D_t2914275055* L_1 = (StringU5BU5D_t2914275055*)L_0;
		RuntimeObject * L_2 = KeyValuePair_2_get_Key_m3501000927((KeyValuePair_2_t189761378 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_2)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0039;
		}
	}
	{
		RuntimeObject * L_3 = KeyValuePair_2_get_Key_m3501000927((KeyValuePair_2_t189761378 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (RuntimeObject *)L_3;
		NullCheck((RuntimeObject *)(*(&V_0)));
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_0)));
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t2914275055* L_6 = (StringU5BU5D_t2914275055*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral4251046666);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral4251046666);
		StringU5BU5D_t2914275055* L_7 = (StringU5BU5D_t2914275055*)L_6;
		int32_t L_8 = KeyValuePair_2_get_Value_m558261432((KeyValuePair_2_t189761378 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		int32_t L_9 = KeyValuePair_2_get_Value_m558261432((KeyValuePair_2_t189761378 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (int32_t)L_9;
		String_t* L_10 = Int32_ToString_m850714729((int32_t*)(&V_1), /*hidden argument*/NULL);
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t2914275055* L_12 = (StringU5BU5D_t2914275055*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral2186763900);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2186763900);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m4132442772(NULL /*static, unused*/, (StringU5BU5D_t2914275055*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m3989116552_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t189761378 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t189761378 *>(__this + 1);
	return KeyValuePair_2_ToString_m3989116552(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m959449189_gshared (KeyValuePair_2_t4125963872 * __this, RuntimeObject * ___key0, int64_t ___value1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___key0;
		KeyValuePair_2_set_Key_m2835569005((KeyValuePair_2_t4125963872 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int64_t L_1 = ___value1;
		KeyValuePair_2_set_Value_m1736389101((KeyValuePair_2_t4125963872 *)__this, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m959449189_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___key0, int64_t ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t4125963872 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t4125963872 *>(__this + 1);
	KeyValuePair_2__ctor_m959449189(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m2764744769_gshared (KeyValuePair_2_t4125963872 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m2764744769_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t4125963872 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t4125963872 *>(__this + 1);
	return KeyValuePair_2_get_Key_m2764744769(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2835569005_gshared (KeyValuePair_2_t4125963872 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m2835569005_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t4125963872 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t4125963872 *>(__this + 1);
	KeyValuePair_2_set_Key_m2835569005(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::get_Value()
extern "C"  int64_t KeyValuePair_2_get_Value_m3596745778_gshared (KeyValuePair_2_t4125963872 * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = (int64_t)__this->get_value_1();
		return L_0;
	}
}
extern "C"  int64_t KeyValuePair_2_get_Value_m3596745778_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t4125963872 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t4125963872 *>(__this + 1);
	return KeyValuePair_2_get_Value_m3596745778(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1736389101_gshared (KeyValuePair_2_t4125963872 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m1736389101_AdjustorThunk (RuntimeObject * __this, int64_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t4125963872 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t4125963872 *>(__this + 1);
	KeyValuePair_2_set_Value_m1736389101(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1877622808_gshared (KeyValuePair_2_t4125963872 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m1877622808_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	int64_t V_1 = 0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t2914275055* G_B2_1 = NULL;
	StringU5BU5D_t2914275055* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t2914275055* G_B1_1 = NULL;
	StringU5BU5D_t2914275055* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t2914275055* G_B3_2 = NULL;
	StringU5BU5D_t2914275055* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t2914275055* G_B5_1 = NULL;
	StringU5BU5D_t2914275055* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t2914275055* G_B4_1 = NULL;
	StringU5BU5D_t2914275055* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t2914275055* G_B6_2 = NULL;
	StringU5BU5D_t2914275055* G_B6_3 = NULL;
	{
		StringU5BU5D_t2914275055* L_0 = (StringU5BU5D_t2914275055*)((StringU5BU5D_t2914275055*)SZArrayNew(StringU5BU5D_t2914275055_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral3520811296);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3520811296);
		StringU5BU5D_t2914275055* L_1 = (StringU5BU5D_t2914275055*)L_0;
		RuntimeObject * L_2 = KeyValuePair_2_get_Key_m2764744769((KeyValuePair_2_t4125963872 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_2)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0039;
		}
	}
	{
		RuntimeObject * L_3 = KeyValuePair_2_get_Key_m2764744769((KeyValuePair_2_t4125963872 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (RuntimeObject *)L_3;
		NullCheck((RuntimeObject *)(*(&V_0)));
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_0)));
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t2914275055* L_6 = (StringU5BU5D_t2914275055*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral4251046666);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral4251046666);
		StringU5BU5D_t2914275055* L_7 = (StringU5BU5D_t2914275055*)L_6;
		int64_t L_8 = KeyValuePair_2_get_Value_m3596745778((KeyValuePair_2_t4125963872 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		int64_t L_9 = KeyValuePair_2_get_Value_m3596745778((KeyValuePair_2_t4125963872 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (int64_t)L_9;
		String_t* L_10 = Int64_ToString_m657892391((int64_t*)(&V_1), /*hidden argument*/NULL);
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t2914275055* L_12 = (StringU5BU5D_t2914275055*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral2186763900);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2186763900);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m4132442772(NULL /*static, unused*/, (StringU5BU5D_t2914275055*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m1877622808_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t4125963872 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t4125963872 *>(__this + 1);
	return KeyValuePair_2_ToString_m1877622808(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2297796110_gshared (KeyValuePair_2_t3050729127 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___key0;
		KeyValuePair_2_set_Key_m2179644958((KeyValuePair_2_t3050729127 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RuntimeObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m3810792090((KeyValuePair_2_t3050729127 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m2297796110_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t3050729127 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3050729127 *>(__this + 1);
	KeyValuePair_2__ctor_m2297796110(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m636538499_gshared (KeyValuePair_2_t3050729127 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m636538499_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3050729127 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3050729127 *>(__this + 1);
	return KeyValuePair_2_get_Key_m636538499(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2179644958_gshared (KeyValuePair_2_t3050729127 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m2179644958_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t3050729127 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3050729127 *>(__this + 1);
	KeyValuePair_2_set_Key_m2179644958(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m4193217671_gshared (KeyValuePair_2_t3050729127 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m4193217671_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3050729127 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3050729127 *>(__this + 1);
	return KeyValuePair_2_get_Value_m4193217671(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3810792090_gshared (KeyValuePair_2_t3050729127 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m3810792090_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t3050729127 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3050729127 *>(__this + 1);
	KeyValuePair_2_set_Value_m3810792090(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m702196871_gshared (KeyValuePair_2_t3050729127 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m702196871_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t2914275055* G_B2_1 = NULL;
	StringU5BU5D_t2914275055* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t2914275055* G_B1_1 = NULL;
	StringU5BU5D_t2914275055* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t2914275055* G_B3_2 = NULL;
	StringU5BU5D_t2914275055* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t2914275055* G_B5_1 = NULL;
	StringU5BU5D_t2914275055* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t2914275055* G_B4_1 = NULL;
	StringU5BU5D_t2914275055* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t2914275055* G_B6_2 = NULL;
	StringU5BU5D_t2914275055* G_B6_3 = NULL;
	{
		StringU5BU5D_t2914275055* L_0 = (StringU5BU5D_t2914275055*)((StringU5BU5D_t2914275055*)SZArrayNew(StringU5BU5D_t2914275055_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral3520811296);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3520811296);
		StringU5BU5D_t2914275055* L_1 = (StringU5BU5D_t2914275055*)L_0;
		RuntimeObject * L_2 = KeyValuePair_2_get_Key_m636538499((KeyValuePair_2_t3050729127 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_2)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0039;
		}
	}
	{
		RuntimeObject * L_3 = KeyValuePair_2_get_Key_m636538499((KeyValuePair_2_t3050729127 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (RuntimeObject *)L_3;
		NullCheck((RuntimeObject *)(*(&V_0)));
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_0)));
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t2914275055* L_6 = (StringU5BU5D_t2914275055*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral4251046666);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral4251046666);
		StringU5BU5D_t2914275055* L_7 = (StringU5BU5D_t2914275055*)L_6;
		RuntimeObject * L_8 = KeyValuePair_2_get_Value_m4193217671((KeyValuePair_2_t3050729127 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
		if (!L_8)
		{
			G_B5_0 = 3;
			G_B5_1 = L_7;
			G_B5_2 = L_7;
			goto IL_0072;
		}
	}
	{
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m4193217671((KeyValuePair_2_t3050729127 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (RuntimeObject *)L_9;
		NullCheck((RuntimeObject *)(*(&V_1)));
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_1)));
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t2914275055* L_12 = (StringU5BU5D_t2914275055*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral2186763900);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2186763900);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m4132442772(NULL /*static, unused*/, (StringU5BU5D_t2914275055*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m702196871_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3050729127 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3050729127 *>(__this + 1);
	return KeyValuePair_2_ToString_m702196871(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Networking.NetworkBroadcastResult>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m40446558_gshared (KeyValuePair_2_t2913600366 * __this, RuntimeObject * ___key0, NetworkBroadcastResult_t1062294258  ___value1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___key0;
		KeyValuePair_2_set_Key_m1160328052((KeyValuePair_2_t2913600366 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		NetworkBroadcastResult_t1062294258  L_1 = ___value1;
		KeyValuePair_2_set_Value_m414820314((KeyValuePair_2_t2913600366 *)__this, (NetworkBroadcastResult_t1062294258 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m40446558_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___key0, NetworkBroadcastResult_t1062294258  ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t2913600366 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2913600366 *>(__this + 1);
	KeyValuePair_2__ctor_m40446558(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Networking.NetworkBroadcastResult>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m47655277_gshared (KeyValuePair_2_t2913600366 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m47655277_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2913600366 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2913600366 *>(__this + 1);
	return KeyValuePair_2_get_Key_m47655277(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Networking.NetworkBroadcastResult>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1160328052_gshared (KeyValuePair_2_t2913600366 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m1160328052_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2913600366 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2913600366 *>(__this + 1);
	KeyValuePair_2_set_Key_m1160328052(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Networking.NetworkBroadcastResult>::get_Value()
extern "C"  NetworkBroadcastResult_t1062294258  KeyValuePair_2_get_Value_m3901152886_gshared (KeyValuePair_2_t2913600366 * __this, const RuntimeMethod* method)
{
	{
		NetworkBroadcastResult_t1062294258  L_0 = (NetworkBroadcastResult_t1062294258 )__this->get_value_1();
		return L_0;
	}
}
extern "C"  NetworkBroadcastResult_t1062294258  KeyValuePair_2_get_Value_m3901152886_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2913600366 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2913600366 *>(__this + 1);
	return KeyValuePair_2_get_Value_m3901152886(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Networking.NetworkBroadcastResult>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m414820314_gshared (KeyValuePair_2_t2913600366 * __this, NetworkBroadcastResult_t1062294258  ___value0, const RuntimeMethod* method)
{
	{
		NetworkBroadcastResult_t1062294258  L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m414820314_AdjustorThunk (RuntimeObject * __this, NetworkBroadcastResult_t1062294258  ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2913600366 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2913600366 *>(__this + 1);
	KeyValuePair_2_set_Value_m414820314(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Networking.NetworkBroadcastResult>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3857975607_gshared (KeyValuePair_2_t2913600366 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m3857975607_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	NetworkBroadcastResult_t1062294258  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t G_B2_0 = 0;
	StringU5BU5D_t2914275055* G_B2_1 = NULL;
	StringU5BU5D_t2914275055* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t2914275055* G_B1_1 = NULL;
	StringU5BU5D_t2914275055* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t2914275055* G_B3_2 = NULL;
	StringU5BU5D_t2914275055* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t2914275055* G_B5_1 = NULL;
	StringU5BU5D_t2914275055* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t2914275055* G_B4_1 = NULL;
	StringU5BU5D_t2914275055* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t2914275055* G_B6_2 = NULL;
	StringU5BU5D_t2914275055* G_B6_3 = NULL;
	{
		StringU5BU5D_t2914275055* L_0 = (StringU5BU5D_t2914275055*)((StringU5BU5D_t2914275055*)SZArrayNew(StringU5BU5D_t2914275055_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral3520811296);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3520811296);
		StringU5BU5D_t2914275055* L_1 = (StringU5BU5D_t2914275055*)L_0;
		RuntimeObject * L_2 = KeyValuePair_2_get_Key_m47655277((KeyValuePair_2_t2913600366 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_2)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0039;
		}
	}
	{
		RuntimeObject * L_3 = KeyValuePair_2_get_Key_m47655277((KeyValuePair_2_t2913600366 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (RuntimeObject *)L_3;
		NullCheck((RuntimeObject *)(*(&V_0)));
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_0)));
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t2914275055* L_6 = (StringU5BU5D_t2914275055*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral4251046666);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral4251046666);
		StringU5BU5D_t2914275055* L_7 = (StringU5BU5D_t2914275055*)L_6;
		NetworkBroadcastResult_t1062294258  L_8 = KeyValuePair_2_get_Value_m3901152886((KeyValuePair_2_t2913600366 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		NetworkBroadcastResult_t1062294258  L_9 = KeyValuePair_2_get_Value_m3901152886((KeyValuePair_2_t2913600366 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (NetworkBroadcastResult_t1062294258 )L_9;
		RuntimeObject * L_10 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1));
		NullCheck((RuntimeObject *)L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_10);
		*(&V_1) = *(NetworkBroadcastResult_t1062294258 *)UnBox(L_10);
		G_B6_0 = L_11;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_12;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t2914275055* L_13 = (StringU5BU5D_t2914275055*)G_B6_3;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral2186763900);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2186763900);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m4132442772(NULL /*static, unused*/, (StringU5BU5D_t2914275055*)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m3857975607_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2913600366 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2913600366 *>(__this + 1);
	return KeyValuePair_2_ToString_m3857975607(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
