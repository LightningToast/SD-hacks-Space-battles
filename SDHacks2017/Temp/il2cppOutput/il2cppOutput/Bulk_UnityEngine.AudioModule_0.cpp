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

// UnityEngine.Audio.AudioMixer
struct AudioMixer_t3624282491;
// UnityEngine.Audio.AudioMixerGroup[]
struct AudioMixerGroupU5BU5D_t1940547199;
// System.String
struct String_t;
// UnityEngine.Audio.AudioMixerGroup
struct AudioMixerGroup_t2866063578;
// UnityEngine.Object
struct Object_t3504644959;
// UnityEngine.AudioClip
struct AudioClip_t3505022932;
// System.Single[]
struct SingleU5BU5D_t2558022491;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t259294911;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t4181094095;
// System.IAsyncResult
struct IAsyncResult_t340031441;
// System.AsyncCallback
struct AsyncCallback_t2314506972;
// UnityEngine.AudioExtensionDefinition
struct AudioExtensionDefinition_t181799281;
// System.Type
struct Type_t;
// System.String[]
struct StringU5BU5D_t2914275055;
// UnityEngine.AudioSourceExtension
struct AudioSourceExtension_t1086723751;
// UnityEngine.AudioSource
struct AudioSource_t1881938766;
// System.Collections.Generic.List`1<UnityEngine.AudioSpatializerExtensionDefinition>
struct List_1_t1357605577;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t2235220911;
// UnityEngine.AudioSpatializerExtensionDefinition
struct AudioSpatializerExtensionDefinition_t321807685;
// System.Collections.Generic.List`1<UnityEngine.AudioAmbisonicExtensionDefinition>
struct List_1_t852232238;
// UnityEngine.AudioAmbisonicExtensionDefinition
struct AudioAmbisonicExtensionDefinition_t4111401642;
// UnityEngine.AudioListenerExtension
struct AudioListenerExtension_t2188376730;
// UnityEngine.AudioListener
struct AudioListener_t1564079801;
// System.Collections.Generic.List`1<UnityEngine.AudioSourceExtension>
struct List_1_t2122521643;
// UnityEngine.Behaviour
struct Behaviour_t1064011594;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4256469858;
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
struct AudioConfigurationChangeHandler_t3767123146;
// UnityEngine.AnimationCurve
struct AnimationCurve_t1475162260;
// UnityEngine.AudioSpatializerExtensionDefinition[]
struct AudioSpatializerExtensionDefinitionU5BU5D_t908610568;
// UnityEngine.AudioSourceExtension[]
struct AudioSourceExtensionU5BU5D_t652283614;
// UnityEngine.AudioAmbisonicExtensionDefinition[]
struct AudioAmbisonicExtensionDefinitionU5BU5D_t1435163503;
// System.Char[]
struct CharU5BU5D_t2710530878;
// System.Void
struct Void_t2198392797;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t2258062238;
// System.Type[]
struct TypeU5BU5D_t2322505462;
// System.Reflection.MemberFilter
struct MemberFilter_t635519073;

extern RuntimeClass* Object_t3504644959_il2cpp_TypeInfo_var;
extern const uint32_t AudioMixerGroup__ctor_m1614834262_MetadataUsageId;
extern const uint32_t AudioClip__ctor_m3669494727_MetadataUsageId;
extern RuntimeClass* Int32_t2633422566_il2cpp_TypeInfo_var;
extern const uint32_t PCMSetPositionCallback_BeginInvoke_m270649274_MetadataUsageId;
extern RuntimeClass* StringU5BU5D_t2914275055_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral310237269;
extern Il2CppCodeGenString* _stringLiteral4251046666;
extern const uint32_t AudioExtensionDefinition_GetExtensionType_m247150428_MetadataUsageId;
extern RuntimeClass* AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_GetEnumerator_m3969806089_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m1768009383_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m339398266_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m966255976_RuntimeMethod_var;
extern const uint32_t AudioExtensionManager_AddSpatializerExtension_m482220115_MetadataUsageId;
extern const RuntimeMethod* List_1_GetEnumerator_m1520259664_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m3919577819_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m78054241_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2991583259_RuntimeMethod_var;
extern const uint32_t AudioExtensionManager_AddAmbisonicDecoderExtension_m2400674341_MetadataUsageId;
extern const uint32_t AudioExtensionManager_WriteExtensionProperties_m1579329545_MetadataUsageId;
extern const uint32_t AudioExtensionManager_AddSpatializerExtension_m3656995944_MetadataUsageId;
extern const uint32_t AudioExtensionManager_WriteExtensionProperties_m2281144542_MetadataUsageId;
extern const uint32_t AudioExtensionManager_GetListenerSpatializerExtensionType_m3815343981_MetadataUsageId;
extern const uint32_t AudioExtensionManager_GetListenerSpatializerExtensionEditorType_m1868381940_MetadataUsageId;
extern const uint32_t AudioExtensionManager_GetSourceSpatializerExtensionType_m2752168269_MetadataUsageId;
extern const RuntimeMethod* List_1_Add_m4269840472_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m2792579889_RuntimeMethod_var;
extern const uint32_t AudioExtensionManager_AddExtensionToManager_m3037816188_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Item_m2802060983_RuntimeMethod_var;
extern const RuntimeMethod* List_1_set_Item_m3783632087_RuntimeMethod_var;
extern const RuntimeMethod* List_1_RemoveAt_m3100685645_RuntimeMethod_var;
extern const uint32_t AudioExtensionManager_RemoveExtensionFromManager_m4025922535_MetadataUsageId;
extern RuntimeClass* AudioListener_t1564079801_il2cpp_TypeInfo_var;
extern const uint32_t AudioExtensionManager_Update_m2593150679_MetadataUsageId;
extern const uint32_t AudioExtensionManager_GetReadyToPlay_m1899384901_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral1493103067;
extern const uint32_t AudioExtensionManager_RegisterBuiltinDefinitions_m1303242357_MetadataUsageId;
extern RuntimeClass* List_1_t1357605577_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t852232238_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2122521643_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m3096134389_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m529932159_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m2170804072_RuntimeMethod_var;
extern const uint32_t AudioExtensionManager__cctor_m1395709139_MetadataUsageId;
extern RuntimeClass* AudioListenerExtension_t2188376730_il2cpp_TypeInfo_var;
extern const uint32_t AudioListener_AddExtension_m2190467448_MetadataUsageId;
extern RuntimeClass* AudioSettings_t4103728833_il2cpp_TypeInfo_var;
extern const uint32_t AudioSettings_InvokeOnAudioConfigurationChanged_m3543347177_MetadataUsageId;
extern const uint32_t AudioSettings_InvokeOnAudioManagerUpdate_m1115812373_MetadataUsageId;
extern const uint32_t AudioSettings_InvokeOnAudioSourcePlay_m1625090565_MetadataUsageId;
extern RuntimeClass* Boolean_t277042056_il2cpp_TypeInfo_var;
extern const uint32_t AudioConfigurationChangeHandler_BeginInvoke_m501498633_MetadataUsageId;
extern const uint32_t AudioSource_PlayOneShot_m3411240643_MetadataUsageId;
extern const uint32_t AudioSource_set_spatialize_m3019076892_MetadataUsageId;
extern RuntimeClass* AudioSourceExtension_t1086723751_il2cpp_TypeInfo_var;
extern const uint32_t AudioSource_AddSpatializerExtension_m3495425952_MetadataUsageId;
extern const uint32_t AudioSource_AddAmbisonicExtension_m1668135458_MetadataUsageId;

struct AudioMixerGroupU5BU5D_t1940547199;
struct SingleU5BU5D_t2558022491;
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
#ifndef U3CMODULEU3E_T2918013927_H
#define U3CMODULEU3E_T2918013927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t2918013927 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T2918013927_H
#ifndef AUDIOEXTENSIONDEFINITION_T181799281_H
#define AUDIOEXTENSIONDEFINITION_T181799281_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioExtensionDefinition
struct  AudioExtensionDefinition_t181799281  : public RuntimeObject
{
public:
	// System.String UnityEngine.AudioExtensionDefinition::assemblyName
	String_t* ___assemblyName_0;
	// System.String UnityEngine.AudioExtensionDefinition::extensionNamespace
	String_t* ___extensionNamespace_1;
	// System.String UnityEngine.AudioExtensionDefinition::extensionTypeName
	String_t* ___extensionTypeName_2;
	// System.Type UnityEngine.AudioExtensionDefinition::extensionType
	Type_t * ___extensionType_3;

public:
	inline static int32_t get_offset_of_assemblyName_0() { return static_cast<int32_t>(offsetof(AudioExtensionDefinition_t181799281, ___assemblyName_0)); }
	inline String_t* get_assemblyName_0() const { return ___assemblyName_0; }
	inline String_t** get_address_of_assemblyName_0() { return &___assemblyName_0; }
	inline void set_assemblyName_0(String_t* value)
	{
		___assemblyName_0 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_0), value);
	}

	inline static int32_t get_offset_of_extensionNamespace_1() { return static_cast<int32_t>(offsetof(AudioExtensionDefinition_t181799281, ___extensionNamespace_1)); }
	inline String_t* get_extensionNamespace_1() const { return ___extensionNamespace_1; }
	inline String_t** get_address_of_extensionNamespace_1() { return &___extensionNamespace_1; }
	inline void set_extensionNamespace_1(String_t* value)
	{
		___extensionNamespace_1 = value;
		Il2CppCodeGenWriteBarrier((&___extensionNamespace_1), value);
	}

	inline static int32_t get_offset_of_extensionTypeName_2() { return static_cast<int32_t>(offsetof(AudioExtensionDefinition_t181799281, ___extensionTypeName_2)); }
	inline String_t* get_extensionTypeName_2() const { return ___extensionTypeName_2; }
	inline String_t** get_address_of_extensionTypeName_2() { return &___extensionTypeName_2; }
	inline void set_extensionTypeName_2(String_t* value)
	{
		___extensionTypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___extensionTypeName_2), value);
	}

	inline static int32_t get_offset_of_extensionType_3() { return static_cast<int32_t>(offsetof(AudioExtensionDefinition_t181799281, ___extensionType_3)); }
	inline Type_t * get_extensionType_3() const { return ___extensionType_3; }
	inline Type_t ** get_address_of_extensionType_3() { return &___extensionType_3; }
	inline void set_extensionType_3(Type_t * value)
	{
		___extensionType_3 = value;
		Il2CppCodeGenWriteBarrier((&___extensionType_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOEXTENSIONDEFINITION_T181799281_H
#ifndef LIST_1_T1357605577_H
#define LIST_1_T1357605577_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.AudioSpatializerExtensionDefinition>
struct  List_1_t1357605577  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AudioSpatializerExtensionDefinitionU5BU5D_t908610568* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1357605577, ____items_1)); }
	inline AudioSpatializerExtensionDefinitionU5BU5D_t908610568* get__items_1() const { return ____items_1; }
	inline AudioSpatializerExtensionDefinitionU5BU5D_t908610568** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AudioSpatializerExtensionDefinitionU5BU5D_t908610568* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1357605577, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1357605577, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1357605577_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	AudioSpatializerExtensionDefinitionU5BU5D_t908610568* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1357605577_StaticFields, ___EmptyArray_4)); }
	inline AudioSpatializerExtensionDefinitionU5BU5D_t908610568* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline AudioSpatializerExtensionDefinitionU5BU5D_t908610568** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(AudioSpatializerExtensionDefinitionU5BU5D_t908610568* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1357605577_H
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
#ifndef LIST_1_T2122521643_H
#define LIST_1_T2122521643_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.AudioSourceExtension>
struct  List_1_t2122521643  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AudioSourceExtensionU5BU5D_t652283614* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2122521643, ____items_1)); }
	inline AudioSourceExtensionU5BU5D_t652283614* get__items_1() const { return ____items_1; }
	inline AudioSourceExtensionU5BU5D_t652283614** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AudioSourceExtensionU5BU5D_t652283614* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2122521643, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2122521643, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2122521643_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	AudioSourceExtensionU5BU5D_t652283614* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2122521643_StaticFields, ___EmptyArray_4)); }
	inline AudioSourceExtensionU5BU5D_t652283614* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline AudioSourceExtensionU5BU5D_t652283614** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(AudioSourceExtensionU5BU5D_t652283614* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2122521643_H
#ifndef LIST_1_T852232238_H
#define LIST_1_T852232238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.AudioAmbisonicExtensionDefinition>
struct  List_1_t852232238  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AudioAmbisonicExtensionDefinitionU5BU5D_t1435163503* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t852232238, ____items_1)); }
	inline AudioAmbisonicExtensionDefinitionU5BU5D_t1435163503* get__items_1() const { return ____items_1; }
	inline AudioAmbisonicExtensionDefinitionU5BU5D_t1435163503** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AudioAmbisonicExtensionDefinitionU5BU5D_t1435163503* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t852232238, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t852232238, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t852232238_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	AudioAmbisonicExtensionDefinitionU5BU5D_t1435163503* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t852232238_StaticFields, ___EmptyArray_4)); }
	inline AudioAmbisonicExtensionDefinitionU5BU5D_t1435163503* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline AudioAmbisonicExtensionDefinitionU5BU5D_t1435163503** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(AudioAmbisonicExtensionDefinitionU5BU5D_t1435163503* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T852232238_H
#ifndef AUDIOSETTINGS_T4103728833_H
#define AUDIOSETTINGS_T4103728833_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSettings
struct  AudioSettings_t4103728833  : public RuntimeObject
{
public:

public:
};

struct AudioSettings_t4103728833_StaticFields
{
public:
	// UnityEngine.AudioSettings/AudioConfigurationChangeHandler UnityEngine.AudioSettings::OnAudioConfigurationChanged
	AudioConfigurationChangeHandler_t3767123146 * ___OnAudioConfigurationChanged_0;

public:
	inline static int32_t get_offset_of_OnAudioConfigurationChanged_0() { return static_cast<int32_t>(offsetof(AudioSettings_t4103728833_StaticFields, ___OnAudioConfigurationChanged_0)); }
	inline AudioConfigurationChangeHandler_t3767123146 * get_OnAudioConfigurationChanged_0() const { return ___OnAudioConfigurationChanged_0; }
	inline AudioConfigurationChangeHandler_t3767123146 ** get_address_of_OnAudioConfigurationChanged_0() { return &___OnAudioConfigurationChanged_0; }
	inline void set_OnAudioConfigurationChanged_0(AudioConfigurationChangeHandler_t3767123146 * value)
	{
		___OnAudioConfigurationChanged_0 = value;
		Il2CppCodeGenWriteBarrier((&___OnAudioConfigurationChanged_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSETTINGS_T4103728833_H
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
#ifndef ENUMERATOR_T111601594_H
#define ENUMERATOR_T111601594_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.AudioAmbisonicExtensionDefinition>
struct  Enumerator_t111601594 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t852232238 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	AudioAmbisonicExtensionDefinition_t4111401642 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t111601594, ___l_0)); }
	inline List_1_t852232238 * get_l_0() const { return ___l_0; }
	inline List_1_t852232238 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t852232238 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t111601594, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t111601594, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t111601594, ___current_3)); }
	inline AudioAmbisonicExtensionDefinition_t4111401642 * get_current_3() const { return ___current_3; }
	inline AudioAmbisonicExtensionDefinition_t4111401642 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(AudioAmbisonicExtensionDefinition_t4111401642 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T111601594_H
#ifndef DOUBLE_T3754879929_H
#define DOUBLE_T3754879929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t3754879929 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t3754879929, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T3754879929_H
#ifndef UINT64_T4024794199_H
#define UINT64_T4024794199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t4024794199 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt64_t4024794199, ___m_value_2)); }
	inline uint64_t get_m_value_2() const { return ___m_value_2; }
	inline uint64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint64_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T4024794199_H
#ifndef PROPERTYNAME_T1110829634_H
#define PROPERTYNAME_T1110829634_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PropertyName
struct  PropertyName_t1110829634 
{
public:
	// System.Int32 UnityEngine.PropertyName::id
	int32_t ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(PropertyName_t1110829634, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYNAME_T1110829634_H
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
#ifndef ENUMERATOR_T616974933_H
#define ENUMERATOR_T616974933_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.AudioSpatializerExtensionDefinition>
struct  Enumerator_t616974933 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t1357605577 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	AudioSpatializerExtensionDefinition_t321807685 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t616974933, ___l_0)); }
	inline List_1_t1357605577 * get_l_0() const { return ___l_0; }
	inline List_1_t1357605577 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t1357605577 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t616974933, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t616974933, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t616974933, ___current_3)); }
	inline AudioSpatializerExtensionDefinition_t321807685 * get_current_3() const { return ___current_3; }
	inline AudioSpatializerExtensionDefinition_t321807685 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(AudioSpatializerExtensionDefinition_t321807685 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T616974933_H
#ifndef ENUMERATOR_T1494590267_H
#define ENUMERATOR_T1494590267_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t1494590267 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t2235220911 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t1494590267, ___l_0)); }
	inline List_1_t2235220911 * get_l_0() const { return ___l_0; }
	inline List_1_t2235220911 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t2235220911 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t1494590267, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t1494590267, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1494590267, ___current_3)); }
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
#endif // ENUMERATOR_T1494590267_H
#ifndef SINGLE_T3432132654_H
#define SINGLE_T3432132654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t3432132654 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t3432132654, ___m_value_7)); }
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
#endif // SINGLE_T3432132654_H
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
#ifndef RUNTIMETYPEHANDLE_T467150238_H
#define RUNTIMETYPEHANDLE_T467150238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t467150238 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t467150238, ___value_0)); }
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
#endif // RUNTIMETYPEHANDLE_T467150238_H
#ifndef BINDINGFLAGS_T92473767_H
#define BINDINGFLAGS_T92473767_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t92473767 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t92473767, ___value___1)); }
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
#endif // BINDINGFLAGS_T92473767_H
#ifndef PLAYABLEOUTPUTHANDLE_T69327170_H
#define PLAYABLEOUTPUTHANDLE_T69327170_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableOutputHandle
struct  PlayableOutputHandle_t69327170 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t69327170, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t69327170, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEOUTPUTHANDLE_T69327170_H
#ifndef AUDIOSPEAKERMODE_T3928681166_H
#define AUDIOSPEAKERMODE_T3928681166_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSpeakerMode
struct  AudioSpeakerMode_t3928681166 
{
public:
	// System.Int32 UnityEngine.AudioSpeakerMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AudioSpeakerMode_t3928681166, ___value___1)); }
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
#endif // AUDIOSPEAKERMODE_T3928681166_H
#ifndef FFTWINDOW_T1856668470_H
#define FFTWINDOW_T1856668470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.FFTWindow
struct  FFTWindow_t1856668470 
{
public:
	// System.Int32 UnityEngine.FFTWindow::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FFTWindow_t1856668470, ___value___1)); }
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
#endif // FFTWINDOW_T1856668470_H
#ifndef ANIMATIONCURVE_T1475162260_H
#define ANIMATIONCURVE_T1475162260_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationCurve
struct  AnimationCurve_t1475162260  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t1475162260, ___m_Ptr_0)); }
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
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t1475162260_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t1475162260_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // ANIMATIONCURVE_T1475162260_H
#ifndef AUDIOSOURCECURVETYPE_T1494192389_H
#define AUDIOSOURCECURVETYPE_T1494192389_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSourceCurveType
struct  AudioSourceCurveType_t1494192389 
{
public:
	// System.Int32 UnityEngine.AudioSourceCurveType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AudioSourceCurveType_t1494192389, ___value___1)); }
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
#endif // AUDIOSOURCECURVETYPE_T1494192389_H
#ifndef PLAYABLEHANDLE_T3419437258_H
#define PLAYABLEHANDLE_T3419437258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableHandle
struct  PlayableHandle_t3419437258 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableHandle::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t3419437258, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t3419437258, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEHANDLE_T3419437258_H
#ifndef AUDIOROLLOFFMODE_T1213789789_H
#define AUDIOROLLOFFMODE_T1213789789_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioRolloffMode
struct  AudioRolloffMode_t1213789789 
{
public:
	// System.Int32 UnityEngine.AudioRolloffMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AudioRolloffMode_t1213789789, ___value___1)); }
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
#endif // AUDIOROLLOFFMODE_T1213789789_H
#ifndef OBJECT_T3504644959_H
#define OBJECT_T3504644959_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t3504644959  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t3504644959, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t3504644959_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t3504644959_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
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
struct Object_t3504644959_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t3504644959_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T3504644959_H
#ifndef DELEGATE_T3667699696_H
#define DELEGATE_T3667699696_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t3667699696  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t2258062238 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t3667699696, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t3667699696, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t3667699696, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t3667699696, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t3667699696, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t3667699696, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t3667699696, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t3667699696, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t3667699696, ___data_8)); }
	inline DelegateData_t2258062238 * get_data_8() const { return ___data_8; }
	inline DelegateData_t2258062238 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t2258062238 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T3667699696_H
#ifndef AUDIOSPATIALIZEREXTENSIONDEFINITION_T321807685_H
#define AUDIOSPATIALIZEREXTENSIONDEFINITION_T321807685_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSpatializerExtensionDefinition
struct  AudioSpatializerExtensionDefinition_t321807685  : public RuntimeObject
{
public:
	// UnityEngine.PropertyName UnityEngine.AudioSpatializerExtensionDefinition::spatializerName
	PropertyName_t1110829634  ___spatializerName_0;
	// UnityEngine.AudioExtensionDefinition UnityEngine.AudioSpatializerExtensionDefinition::definition
	AudioExtensionDefinition_t181799281 * ___definition_1;
	// UnityEngine.AudioExtensionDefinition UnityEngine.AudioSpatializerExtensionDefinition::editorDefinition
	AudioExtensionDefinition_t181799281 * ___editorDefinition_2;

public:
	inline static int32_t get_offset_of_spatializerName_0() { return static_cast<int32_t>(offsetof(AudioSpatializerExtensionDefinition_t321807685, ___spatializerName_0)); }
	inline PropertyName_t1110829634  get_spatializerName_0() const { return ___spatializerName_0; }
	inline PropertyName_t1110829634 * get_address_of_spatializerName_0() { return &___spatializerName_0; }
	inline void set_spatializerName_0(PropertyName_t1110829634  value)
	{
		___spatializerName_0 = value;
	}

	inline static int32_t get_offset_of_definition_1() { return static_cast<int32_t>(offsetof(AudioSpatializerExtensionDefinition_t321807685, ___definition_1)); }
	inline AudioExtensionDefinition_t181799281 * get_definition_1() const { return ___definition_1; }
	inline AudioExtensionDefinition_t181799281 ** get_address_of_definition_1() { return &___definition_1; }
	inline void set_definition_1(AudioExtensionDefinition_t181799281 * value)
	{
		___definition_1 = value;
		Il2CppCodeGenWriteBarrier((&___definition_1), value);
	}

	inline static int32_t get_offset_of_editorDefinition_2() { return static_cast<int32_t>(offsetof(AudioSpatializerExtensionDefinition_t321807685, ___editorDefinition_2)); }
	inline AudioExtensionDefinition_t181799281 * get_editorDefinition_2() const { return ___editorDefinition_2; }
	inline AudioExtensionDefinition_t181799281 ** get_address_of_editorDefinition_2() { return &___editorDefinition_2; }
	inline void set_editorDefinition_2(AudioExtensionDefinition_t181799281 * value)
	{
		___editorDefinition_2 = value;
		Il2CppCodeGenWriteBarrier((&___editorDefinition_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSPATIALIZEREXTENSIONDEFINITION_T321807685_H
#ifndef AUDIOAMBISONICEXTENSIONDEFINITION_T4111401642_H
#define AUDIOAMBISONICEXTENSIONDEFINITION_T4111401642_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioAmbisonicExtensionDefinition
struct  AudioAmbisonicExtensionDefinition_t4111401642  : public RuntimeObject
{
public:
	// UnityEngine.PropertyName UnityEngine.AudioAmbisonicExtensionDefinition::ambisonicPluginName
	PropertyName_t1110829634  ___ambisonicPluginName_0;
	// UnityEngine.AudioExtensionDefinition UnityEngine.AudioAmbisonicExtensionDefinition::definition
	AudioExtensionDefinition_t181799281 * ___definition_1;

public:
	inline static int32_t get_offset_of_ambisonicPluginName_0() { return static_cast<int32_t>(offsetof(AudioAmbisonicExtensionDefinition_t4111401642, ___ambisonicPluginName_0)); }
	inline PropertyName_t1110829634  get_ambisonicPluginName_0() const { return ___ambisonicPluginName_0; }
	inline PropertyName_t1110829634 * get_address_of_ambisonicPluginName_0() { return &___ambisonicPluginName_0; }
	inline void set_ambisonicPluginName_0(PropertyName_t1110829634  value)
	{
		___ambisonicPluginName_0 = value;
	}

	inline static int32_t get_offset_of_definition_1() { return static_cast<int32_t>(offsetof(AudioAmbisonicExtensionDefinition_t4111401642, ___definition_1)); }
	inline AudioExtensionDefinition_t181799281 * get_definition_1() const { return ___definition_1; }
	inline AudioExtensionDefinition_t181799281 ** get_address_of_definition_1() { return &___definition_1; }
	inline void set_definition_1(AudioExtensionDefinition_t181799281 * value)
	{
		___definition_1 = value;
		Il2CppCodeGenWriteBarrier((&___definition_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOAMBISONICEXTENSIONDEFINITION_T4111401642_H
#ifndef AUDIOEXTENSIONMANAGER_T4272479908_H
#define AUDIOEXTENSIONMANAGER_T4272479908_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioExtensionManager
struct  AudioExtensionManager_t4272479908  : public RuntimeObject
{
public:

public:
};

struct AudioExtensionManager_t4272479908_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.AudioSpatializerExtensionDefinition> UnityEngine.AudioExtensionManager::m_ListenerSpatializerExtensionDefinitions
	List_1_t1357605577 * ___m_ListenerSpatializerExtensionDefinitions_0;
	// System.Collections.Generic.List`1<UnityEngine.AudioSpatializerExtensionDefinition> UnityEngine.AudioExtensionManager::m_SourceSpatializerExtensionDefinitions
	List_1_t1357605577 * ___m_SourceSpatializerExtensionDefinitions_1;
	// System.Collections.Generic.List`1<UnityEngine.AudioAmbisonicExtensionDefinition> UnityEngine.AudioExtensionManager::m_SourceAmbisonicDecoderExtensionDefinitions
	List_1_t852232238 * ___m_SourceAmbisonicDecoderExtensionDefinitions_2;
	// System.Collections.Generic.List`1<UnityEngine.AudioSourceExtension> UnityEngine.AudioExtensionManager::m_SourceExtensionsToUpdate
	List_1_t2122521643 * ___m_SourceExtensionsToUpdate_3;
	// System.Int32 UnityEngine.AudioExtensionManager::m_NextStopIndex
	int32_t ___m_NextStopIndex_4;
	// System.Boolean UnityEngine.AudioExtensionManager::m_BuiltinDefinitionsRegistered
	bool ___m_BuiltinDefinitionsRegistered_5;
	// UnityEngine.PropertyName UnityEngine.AudioExtensionManager::m_SpatializerName
	PropertyName_t1110829634  ___m_SpatializerName_6;
	// UnityEngine.PropertyName UnityEngine.AudioExtensionManager::m_SpatializerExtensionName
	PropertyName_t1110829634  ___m_SpatializerExtensionName_7;
	// UnityEngine.PropertyName UnityEngine.AudioExtensionManager::m_ListenerSpatializerExtensionName
	PropertyName_t1110829634  ___m_ListenerSpatializerExtensionName_8;

public:
	inline static int32_t get_offset_of_m_ListenerSpatializerExtensionDefinitions_0() { return static_cast<int32_t>(offsetof(AudioExtensionManager_t4272479908_StaticFields, ___m_ListenerSpatializerExtensionDefinitions_0)); }
	inline List_1_t1357605577 * get_m_ListenerSpatializerExtensionDefinitions_0() const { return ___m_ListenerSpatializerExtensionDefinitions_0; }
	inline List_1_t1357605577 ** get_address_of_m_ListenerSpatializerExtensionDefinitions_0() { return &___m_ListenerSpatializerExtensionDefinitions_0; }
	inline void set_m_ListenerSpatializerExtensionDefinitions_0(List_1_t1357605577 * value)
	{
		___m_ListenerSpatializerExtensionDefinitions_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ListenerSpatializerExtensionDefinitions_0), value);
	}

	inline static int32_t get_offset_of_m_SourceSpatializerExtensionDefinitions_1() { return static_cast<int32_t>(offsetof(AudioExtensionManager_t4272479908_StaticFields, ___m_SourceSpatializerExtensionDefinitions_1)); }
	inline List_1_t1357605577 * get_m_SourceSpatializerExtensionDefinitions_1() const { return ___m_SourceSpatializerExtensionDefinitions_1; }
	inline List_1_t1357605577 ** get_address_of_m_SourceSpatializerExtensionDefinitions_1() { return &___m_SourceSpatializerExtensionDefinitions_1; }
	inline void set_m_SourceSpatializerExtensionDefinitions_1(List_1_t1357605577 * value)
	{
		___m_SourceSpatializerExtensionDefinitions_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceSpatializerExtensionDefinitions_1), value);
	}

	inline static int32_t get_offset_of_m_SourceAmbisonicDecoderExtensionDefinitions_2() { return static_cast<int32_t>(offsetof(AudioExtensionManager_t4272479908_StaticFields, ___m_SourceAmbisonicDecoderExtensionDefinitions_2)); }
	inline List_1_t852232238 * get_m_SourceAmbisonicDecoderExtensionDefinitions_2() const { return ___m_SourceAmbisonicDecoderExtensionDefinitions_2; }
	inline List_1_t852232238 ** get_address_of_m_SourceAmbisonicDecoderExtensionDefinitions_2() { return &___m_SourceAmbisonicDecoderExtensionDefinitions_2; }
	inline void set_m_SourceAmbisonicDecoderExtensionDefinitions_2(List_1_t852232238 * value)
	{
		___m_SourceAmbisonicDecoderExtensionDefinitions_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceAmbisonicDecoderExtensionDefinitions_2), value);
	}

	inline static int32_t get_offset_of_m_SourceExtensionsToUpdate_3() { return static_cast<int32_t>(offsetof(AudioExtensionManager_t4272479908_StaticFields, ___m_SourceExtensionsToUpdate_3)); }
	inline List_1_t2122521643 * get_m_SourceExtensionsToUpdate_3() const { return ___m_SourceExtensionsToUpdate_3; }
	inline List_1_t2122521643 ** get_address_of_m_SourceExtensionsToUpdate_3() { return &___m_SourceExtensionsToUpdate_3; }
	inline void set_m_SourceExtensionsToUpdate_3(List_1_t2122521643 * value)
	{
		___m_SourceExtensionsToUpdate_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceExtensionsToUpdate_3), value);
	}

	inline static int32_t get_offset_of_m_NextStopIndex_4() { return static_cast<int32_t>(offsetof(AudioExtensionManager_t4272479908_StaticFields, ___m_NextStopIndex_4)); }
	inline int32_t get_m_NextStopIndex_4() const { return ___m_NextStopIndex_4; }
	inline int32_t* get_address_of_m_NextStopIndex_4() { return &___m_NextStopIndex_4; }
	inline void set_m_NextStopIndex_4(int32_t value)
	{
		___m_NextStopIndex_4 = value;
	}

	inline static int32_t get_offset_of_m_BuiltinDefinitionsRegistered_5() { return static_cast<int32_t>(offsetof(AudioExtensionManager_t4272479908_StaticFields, ___m_BuiltinDefinitionsRegistered_5)); }
	inline bool get_m_BuiltinDefinitionsRegistered_5() const { return ___m_BuiltinDefinitionsRegistered_5; }
	inline bool* get_address_of_m_BuiltinDefinitionsRegistered_5() { return &___m_BuiltinDefinitionsRegistered_5; }
	inline void set_m_BuiltinDefinitionsRegistered_5(bool value)
	{
		___m_BuiltinDefinitionsRegistered_5 = value;
	}

	inline static int32_t get_offset_of_m_SpatializerName_6() { return static_cast<int32_t>(offsetof(AudioExtensionManager_t4272479908_StaticFields, ___m_SpatializerName_6)); }
	inline PropertyName_t1110829634  get_m_SpatializerName_6() const { return ___m_SpatializerName_6; }
	inline PropertyName_t1110829634 * get_address_of_m_SpatializerName_6() { return &___m_SpatializerName_6; }
	inline void set_m_SpatializerName_6(PropertyName_t1110829634  value)
	{
		___m_SpatializerName_6 = value;
	}

	inline static int32_t get_offset_of_m_SpatializerExtensionName_7() { return static_cast<int32_t>(offsetof(AudioExtensionManager_t4272479908_StaticFields, ___m_SpatializerExtensionName_7)); }
	inline PropertyName_t1110829634  get_m_SpatializerExtensionName_7() const { return ___m_SpatializerExtensionName_7; }
	inline PropertyName_t1110829634 * get_address_of_m_SpatializerExtensionName_7() { return &___m_SpatializerExtensionName_7; }
	inline void set_m_SpatializerExtensionName_7(PropertyName_t1110829634  value)
	{
		___m_SpatializerExtensionName_7 = value;
	}

	inline static int32_t get_offset_of_m_ListenerSpatializerExtensionName_8() { return static_cast<int32_t>(offsetof(AudioExtensionManager_t4272479908_StaticFields, ___m_ListenerSpatializerExtensionName_8)); }
	inline PropertyName_t1110829634  get_m_ListenerSpatializerExtensionName_8() const { return ___m_ListenerSpatializerExtensionName_8; }
	inline PropertyName_t1110829634 * get_address_of_m_ListenerSpatializerExtensionName_8() { return &___m_ListenerSpatializerExtensionName_8; }
	inline void set_m_ListenerSpatializerExtensionName_8(PropertyName_t1110829634  value)
	{
		___m_ListenerSpatializerExtensionName_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOEXTENSIONMANAGER_T4272479908_H
#ifndef AUDIOPLAYABLEOUTPUT_T1714909422_H
#define AUDIOPLAYABLEOUTPUT_T1714909422_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Audio.AudioPlayableOutput
struct  AudioPlayableOutput_t1714909422 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Audio.AudioPlayableOutput::m_Handle
	PlayableOutputHandle_t69327170  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AudioPlayableOutput_t1714909422, ___m_Handle_0)); }
	inline PlayableOutputHandle_t69327170  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t69327170 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t69327170  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOPLAYABLEOUTPUT_T1714909422_H
#ifndef COMPONENT_T3928353386_H
#define COMPONENT_T3928353386_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t3928353386  : public Object_t3504644959
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T3928353386_H
#ifndef AUDIOCONFIGURATION_T2443350749_H
#define AUDIOCONFIGURATION_T2443350749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioConfiguration
struct  AudioConfiguration_t2443350749 
{
public:
	// UnityEngine.AudioSpeakerMode UnityEngine.AudioConfiguration::speakerMode
	int32_t ___speakerMode_0;
	// System.Int32 UnityEngine.AudioConfiguration::dspBufferSize
	int32_t ___dspBufferSize_1;
	// System.Int32 UnityEngine.AudioConfiguration::sampleRate
	int32_t ___sampleRate_2;
	// System.Int32 UnityEngine.AudioConfiguration::numRealVoices
	int32_t ___numRealVoices_3;
	// System.Int32 UnityEngine.AudioConfiguration::numVirtualVoices
	int32_t ___numVirtualVoices_4;

public:
	inline static int32_t get_offset_of_speakerMode_0() { return static_cast<int32_t>(offsetof(AudioConfiguration_t2443350749, ___speakerMode_0)); }
	inline int32_t get_speakerMode_0() const { return ___speakerMode_0; }
	inline int32_t* get_address_of_speakerMode_0() { return &___speakerMode_0; }
	inline void set_speakerMode_0(int32_t value)
	{
		___speakerMode_0 = value;
	}

	inline static int32_t get_offset_of_dspBufferSize_1() { return static_cast<int32_t>(offsetof(AudioConfiguration_t2443350749, ___dspBufferSize_1)); }
	inline int32_t get_dspBufferSize_1() const { return ___dspBufferSize_1; }
	inline int32_t* get_address_of_dspBufferSize_1() { return &___dspBufferSize_1; }
	inline void set_dspBufferSize_1(int32_t value)
	{
		___dspBufferSize_1 = value;
	}

	inline static int32_t get_offset_of_sampleRate_2() { return static_cast<int32_t>(offsetof(AudioConfiguration_t2443350749, ___sampleRate_2)); }
	inline int32_t get_sampleRate_2() const { return ___sampleRate_2; }
	inline int32_t* get_address_of_sampleRate_2() { return &___sampleRate_2; }
	inline void set_sampleRate_2(int32_t value)
	{
		___sampleRate_2 = value;
	}

	inline static int32_t get_offset_of_numRealVoices_3() { return static_cast<int32_t>(offsetof(AudioConfiguration_t2443350749, ___numRealVoices_3)); }
	inline int32_t get_numRealVoices_3() const { return ___numRealVoices_3; }
	inline int32_t* get_address_of_numRealVoices_3() { return &___numRealVoices_3; }
	inline void set_numRealVoices_3(int32_t value)
	{
		___numRealVoices_3 = value;
	}

	inline static int32_t get_offset_of_numVirtualVoices_4() { return static_cast<int32_t>(offsetof(AudioConfiguration_t2443350749, ___numVirtualVoices_4)); }
	inline int32_t get_numVirtualVoices_4() const { return ___numVirtualVoices_4; }
	inline int32_t* get_address_of_numVirtualVoices_4() { return &___numVirtualVoices_4; }
	inline void set_numVirtualVoices_4(int32_t value)
	{
		___numVirtualVoices_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCONFIGURATION_T2443350749_H
#ifndef MULTICASTDELEGATE_T1294099178_H
#define MULTICASTDELEGATE_T1294099178_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t1294099178  : public Delegate_t3667699696
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t1294099178 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t1294099178 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t1294099178, ___prev_9)); }
	inline MulticastDelegate_t1294099178 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t1294099178 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t1294099178 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t1294099178, ___kpm_next_10)); }
	inline MulticastDelegate_t1294099178 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t1294099178 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t1294099178 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T1294099178_H
#ifndef AUDIOCLIPPLAYABLE_T1658957780_H
#define AUDIOCLIPPLAYABLE_T1658957780_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Audio.AudioClipPlayable
struct  AudioClipPlayable_t1658957780 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::m_Handle
	PlayableHandle_t3419437258  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AudioClipPlayable_t1658957780, ___m_Handle_0)); }
	inline PlayableHandle_t3419437258  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t3419437258 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t3419437258  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIPPLAYABLE_T1658957780_H
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
	RuntimeTypeHandle_t467150238  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t467150238  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t467150238 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t467150238  value)
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
	TypeU5BU5D_t2322505462* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t635519073 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t635519073 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t635519073 * ___FilterNameIgnoreCase_6;
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
	inline TypeU5BU5D_t2322505462* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t2322505462** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t2322505462* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t635519073 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t635519073 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t635519073 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t635519073 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t635519073 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t635519073 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t635519073 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t635519073 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t635519073 * value)
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
#ifndef AUDIOMIXERPLAYABLE_T1187433945_H
#define AUDIOMIXERPLAYABLE_T1187433945_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Audio.AudioMixerPlayable
struct  AudioMixerPlayable_t1187433945 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::m_Handle
	PlayableHandle_t3419437258  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AudioMixerPlayable_t1187433945, ___m_Handle_0)); }
	inline PlayableHandle_t3419437258  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t3419437258 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t3419437258  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOMIXERPLAYABLE_T1187433945_H
#ifndef AUDIOMIXERGROUP_T2866063578_H
#define AUDIOMIXERGROUP_T2866063578_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Audio.AudioMixerGroup
struct  AudioMixerGroup_t2866063578  : public Object_t3504644959
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOMIXERGROUP_T2866063578_H
#ifndef AUDIOCLIP_T3505022932_H
#define AUDIOCLIP_T3505022932_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip
struct  AudioClip_t3505022932  : public Object_t3504644959
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t259294911 * ___m_PCMReaderCallback_2;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t4181094095 * ___m_PCMSetPositionCallback_3;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_2() { return static_cast<int32_t>(offsetof(AudioClip_t3505022932, ___m_PCMReaderCallback_2)); }
	inline PCMReaderCallback_t259294911 * get_m_PCMReaderCallback_2() const { return ___m_PCMReaderCallback_2; }
	inline PCMReaderCallback_t259294911 ** get_address_of_m_PCMReaderCallback_2() { return &___m_PCMReaderCallback_2; }
	inline void set_m_PCMReaderCallback_2(PCMReaderCallback_t259294911 * value)
	{
		___m_PCMReaderCallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMReaderCallback_2), value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_3() { return static_cast<int32_t>(offsetof(AudioClip_t3505022932, ___m_PCMSetPositionCallback_3)); }
	inline PCMSetPositionCallback_t4181094095 * get_m_PCMSetPositionCallback_3() const { return ___m_PCMSetPositionCallback_3; }
	inline PCMSetPositionCallback_t4181094095 ** get_address_of_m_PCMSetPositionCallback_3() { return &___m_PCMSetPositionCallback_3; }
	inline void set_m_PCMSetPositionCallback_3(PCMSetPositionCallback_t4181094095 * value)
	{
		___m_PCMSetPositionCallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMSetPositionCallback_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIP_T3505022932_H
#ifndef AUDIOMIXER_T3624282491_H
#define AUDIOMIXER_T3624282491_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Audio.AudioMixer
struct  AudioMixer_t3624282491  : public Object_t3504644959
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOMIXER_T3624282491_H
#ifndef SCRIPTABLEOBJECT_T4256469858_H
#define SCRIPTABLEOBJECT_T4256469858_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t4256469858  : public Object_t3504644959
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4256469858_marshaled_pinvoke : public Object_t3504644959_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4256469858_marshaled_com : public Object_t3504644959_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T4256469858_H
#ifndef AUDIOCONFIGURATIONCHANGEHANDLER_T3767123146_H
#define AUDIOCONFIGURATIONCHANGEHANDLER_T3767123146_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
struct  AudioConfigurationChangeHandler_t3767123146  : public MulticastDelegate_t1294099178
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCONFIGURATIONCHANGEHANDLER_T3767123146_H
#ifndef PCMSETPOSITIONCALLBACK_T4181094095_H
#define PCMSETPOSITIONCALLBACK_T4181094095_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip/PCMSetPositionCallback
struct  PCMSetPositionCallback_t4181094095  : public MulticastDelegate_t1294099178
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PCMSETPOSITIONCALLBACK_T4181094095_H
#ifndef BEHAVIOUR_T1064011594_H
#define BEHAVIOUR_T1064011594_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1064011594  : public Component_t3928353386
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1064011594_H
#ifndef AUDIOLISTENEREXTENSION_T2188376730_H
#define AUDIOLISTENEREXTENSION_T2188376730_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioListenerExtension
struct  AudioListenerExtension_t2188376730  : public ScriptableObject_t4256469858
{
public:
	// UnityEngine.AudioListener UnityEngine.AudioListenerExtension::m_audioListener
	AudioListener_t1564079801 * ___m_audioListener_2;

public:
	inline static int32_t get_offset_of_m_audioListener_2() { return static_cast<int32_t>(offsetof(AudioListenerExtension_t2188376730, ___m_audioListener_2)); }
	inline AudioListener_t1564079801 * get_m_audioListener_2() const { return ___m_audioListener_2; }
	inline AudioListener_t1564079801 ** get_address_of_m_audioListener_2() { return &___m_audioListener_2; }
	inline void set_m_audioListener_2(AudioListener_t1564079801 * value)
	{
		___m_audioListener_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_audioListener_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOLISTENEREXTENSION_T2188376730_H
#ifndef ASYNCCALLBACK_T2314506972_H
#define ASYNCCALLBACK_T2314506972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t2314506972  : public MulticastDelegate_t1294099178
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T2314506972_H
#ifndef PCMREADERCALLBACK_T259294911_H
#define PCMREADERCALLBACK_T259294911_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip/PCMReaderCallback
struct  PCMReaderCallback_t259294911  : public MulticastDelegate_t1294099178
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PCMREADERCALLBACK_T259294911_H
#ifndef AUDIOSOURCEEXTENSION_T1086723751_H
#define AUDIOSOURCEEXTENSION_T1086723751_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSourceExtension
struct  AudioSourceExtension_t1086723751  : public ScriptableObject_t4256469858
{
public:
	// UnityEngine.AudioSource UnityEngine.AudioSourceExtension::m_audioSource
	AudioSource_t1881938766 * ___m_audioSource_2;
	// System.Int32 UnityEngine.AudioSourceExtension::m_ExtensionManagerUpdateIndex
	int32_t ___m_ExtensionManagerUpdateIndex_3;

public:
	inline static int32_t get_offset_of_m_audioSource_2() { return static_cast<int32_t>(offsetof(AudioSourceExtension_t1086723751, ___m_audioSource_2)); }
	inline AudioSource_t1881938766 * get_m_audioSource_2() const { return ___m_audioSource_2; }
	inline AudioSource_t1881938766 ** get_address_of_m_audioSource_2() { return &___m_audioSource_2; }
	inline void set_m_audioSource_2(AudioSource_t1881938766 * value)
	{
		___m_audioSource_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_audioSource_2), value);
	}

	inline static int32_t get_offset_of_m_ExtensionManagerUpdateIndex_3() { return static_cast<int32_t>(offsetof(AudioSourceExtension_t1086723751, ___m_ExtensionManagerUpdateIndex_3)); }
	inline int32_t get_m_ExtensionManagerUpdateIndex_3() const { return ___m_ExtensionManagerUpdateIndex_3; }
	inline int32_t* get_address_of_m_ExtensionManagerUpdateIndex_3() { return &___m_ExtensionManagerUpdateIndex_3; }
	inline void set_m_ExtensionManagerUpdateIndex_3(int32_t value)
	{
		___m_ExtensionManagerUpdateIndex_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCEEXTENSION_T1086723751_H
#ifndef AUDIOSOURCE_T1881938766_H
#define AUDIOSOURCE_T1881938766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSource
struct  AudioSource_t1881938766  : public Behaviour_t1064011594
{
public:
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::spatializerExtension
	AudioSourceExtension_t1086723751 * ___spatializerExtension_2;
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::ambisonicExtension
	AudioSourceExtension_t1086723751 * ___ambisonicExtension_3;

public:
	inline static int32_t get_offset_of_spatializerExtension_2() { return static_cast<int32_t>(offsetof(AudioSource_t1881938766, ___spatializerExtension_2)); }
	inline AudioSourceExtension_t1086723751 * get_spatializerExtension_2() const { return ___spatializerExtension_2; }
	inline AudioSourceExtension_t1086723751 ** get_address_of_spatializerExtension_2() { return &___spatializerExtension_2; }
	inline void set_spatializerExtension_2(AudioSourceExtension_t1086723751 * value)
	{
		___spatializerExtension_2 = value;
		Il2CppCodeGenWriteBarrier((&___spatializerExtension_2), value);
	}

	inline static int32_t get_offset_of_ambisonicExtension_3() { return static_cast<int32_t>(offsetof(AudioSource_t1881938766, ___ambisonicExtension_3)); }
	inline AudioSourceExtension_t1086723751 * get_ambisonicExtension_3() const { return ___ambisonicExtension_3; }
	inline AudioSourceExtension_t1086723751 ** get_address_of_ambisonicExtension_3() { return &___ambisonicExtension_3; }
	inline void set_ambisonicExtension_3(AudioSourceExtension_t1086723751 * value)
	{
		___ambisonicExtension_3 = value;
		Il2CppCodeGenWriteBarrier((&___ambisonicExtension_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCE_T1881938766_H
#ifndef AUDIOLISTENER_T1564079801_H
#define AUDIOLISTENER_T1564079801_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioListener
struct  AudioListener_t1564079801  : public Behaviour_t1064011594
{
public:
	// UnityEngine.AudioListenerExtension UnityEngine.AudioListener::spatializerExtension
	AudioListenerExtension_t2188376730 * ___spatializerExtension_2;

public:
	inline static int32_t get_offset_of_spatializerExtension_2() { return static_cast<int32_t>(offsetof(AudioListener_t1564079801, ___spatializerExtension_2)); }
	inline AudioListenerExtension_t2188376730 * get_spatializerExtension_2() const { return ___spatializerExtension_2; }
	inline AudioListenerExtension_t2188376730 ** get_address_of_spatializerExtension_2() { return &___spatializerExtension_2; }
	inline void set_spatializerExtension_2(AudioListenerExtension_t2188376730 * value)
	{
		___spatializerExtension_2 = value;
		Il2CppCodeGenWriteBarrier((&___spatializerExtension_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOLISTENER_T1564079801_H
// UnityEngine.Audio.AudioMixerGroup[]
struct AudioMixerGroupU5BU5D_t1940547199  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AudioMixerGroup_t2866063578 * m_Items[1];

public:
	inline AudioMixerGroup_t2866063578 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioMixerGroup_t2866063578 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioMixerGroup_t2866063578 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline AudioMixerGroup_t2866063578 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioMixerGroup_t2866063578 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioMixerGroup_t2866063578 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Single[]
struct SingleU5BU5D_t2558022491  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
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


// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C"  Enumerator_t1494590267  List_1_GetEnumerator_m2312908917_gshared (List_1_t2235220911 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m2192970573_gshared (Enumerator_t1494590267 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m115165051_gshared (Enumerator_t1494590267 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m1661376822_gshared (Enumerator_t1494590267 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m1354523727_gshared (List_1_t2235220911 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C"  int32_t List_1_get_Count_m3554854614_gshared (List_1_t2235220911 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C"  RuntimeObject * List_1_get_Item_m1305759332_gshared (List_1_t2235220911 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,!0)
extern "C"  void List_1_set_Item_m883720370_gshared (List_1_t2235220911 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C"  void List_1_RemoveAt_m107051475_gshared (List_1_t2235220911 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m1015304704_gshared (List_1_t2235220911 * __this, const RuntimeMethod* method);

// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::GetHandle()
extern "C"  PlayableHandle_t3419437258  AudioClipPlayable_GetHandle_m698716387 (AudioClipPlayable_t1658957780 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Playables.PlayableHandle::op_Equality(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
extern "C"  bool PlayableHandle_op_Equality_m3795834239 (RuntimeObject * __this /* static, unused */, PlayableHandle_t3419437258  p0, PlayableHandle_t3419437258  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Audio.AudioClipPlayable::Equals(UnityEngine.Audio.AudioClipPlayable)
extern "C"  bool AudioClipPlayable_Equals_m3593016031 (AudioClipPlayable_t1658957780 * __this, AudioClipPlayable_t1658957780  ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::.ctor()
extern "C"  void Object__ctor_m1040057774 (Object_t3504644959 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::GetHandle()
extern "C"  PlayableHandle_t3419437258  AudioMixerPlayable_GetHandle_m2558019795 (AudioMixerPlayable_t1187433945 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Audio.AudioMixerPlayable::Equals(UnityEngine.Audio.AudioMixerPlayable)
extern "C"  bool AudioMixerPlayable_Equals_m2169714946 (AudioMixerPlayable_t1187433945 * __this, AudioMixerPlayable_t1187433945  ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[])
extern "C"  void PCMReaderCallback_Invoke_m2731740265 (PCMReaderCallback_t259294911 * __this, SingleU5BU5D_t2558022491* ___data0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32)
extern "C"  void PCMSetPositionCallback_Invoke_m992031814 (PCMSetPositionCallback_t4181094095 * __this, int32_t ___position0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String[])
extern "C"  String_t* String_Concat_m4132442772 (RuntimeObject * __this /* static, unused */, StringU5BU5D_t2914275055* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetType(System.String)
extern "C"  Type_t * Type_GetType_m1340207934 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AudioSource::get_spatialize()
extern "C"  bool AudioSource_get_spatialize_m894426778 (AudioSource_t1881938766 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m1843775054 (RuntimeObject * __this /* static, unused */, Object_t3504644959 * p0, Object_t3504644959 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioExtensionManager::RegisterBuiltinDefinitions()
extern "C"  void AudioExtensionManager_RegisterBuiltinDefinitions_m1303242357 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.AudioSpatializerExtensionDefinition>::GetEnumerator()
#define List_1_GetEnumerator_m3969806089(__this, method) ((  Enumerator_t616974933  (*) (List_1_t1357605577 *, const RuntimeMethod*))List_1_GetEnumerator_m2312908917_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.AudioSpatializerExtensionDefinition>::get_Current()
#define Enumerator_get_Current_m1768009383(__this, method) ((  AudioSpatializerExtensionDefinition_t321807685 * (*) (Enumerator_t616974933 *, const RuntimeMethod*))Enumerator_get_Current_m2192970573_gshared)(__this, method)
// System.String UnityEngine.AudioSettings::GetSpatializerPluginName()
extern "C"  String_t* AudioSettings_GetSpatializerPluginName_m351030697 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.PropertyName UnityEngine.PropertyName::op_Implicit(System.String)
extern "C"  PropertyName_t1110829634  PropertyName_op_Implicit_m36237779 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.PropertyName::op_Equality(UnityEngine.PropertyName,UnityEngine.PropertyName)
extern "C"  bool PropertyName_op_Equality_m1100584677 (RuntimeObject * __this /* static, unused */, PropertyName_t1110829634  p0, PropertyName_t1110829634  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type UnityEngine.AudioExtensionDefinition::GetExtensionType()
extern "C"  Type_t * AudioExtensionDefinition_GetExtensionType_m247150428 (AudioExtensionDefinition_t181799281 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::AddSpatializerExtension(System.Type)
extern "C"  AudioSourceExtension_t1086723751 * AudioSource_AddSpatializerExtension_m3495425952 (AudioSource_t1881938766 * __this, Type_t * ___extensionType0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSourceExtension::set_audioSource(UnityEngine.AudioSource)
extern "C"  void AudioSourceExtension_set_audioSource_m2905420079 (AudioSourceExtension_t1086723751 * __this, AudioSource_t1881938766 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioExtensionManager::WriteExtensionProperties(UnityEngine.AudioSourceExtension,System.String)
extern "C"  void AudioExtensionManager_WriteExtensionProperties_m1579329545 (RuntimeObject * __this /* static, unused */, AudioSourceExtension_t1086723751 * ___extension0, String_t* ___extensionName1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.AudioSpatializerExtensionDefinition>::MoveNext()
#define Enumerator_MoveNext_m339398266(__this, method) ((  bool (*) (Enumerator_t616974933 *, const RuntimeMethod*))Enumerator_MoveNext_m115165051_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.AudioSpatializerExtensionDefinition>::Dispose()
#define Enumerator_Dispose_m966255976(__this, method) ((  void (*) (Enumerator_t616974933 *, const RuntimeMethod*))Enumerator_Dispose_m1661376822_gshared)(__this, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.AudioAmbisonicExtensionDefinition>::GetEnumerator()
#define List_1_GetEnumerator_m1520259664(__this, method) ((  Enumerator_t111601594  (*) (List_1_t852232238 *, const RuntimeMethod*))List_1_GetEnumerator_m2312908917_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.AudioAmbisonicExtensionDefinition>::get_Current()
#define Enumerator_get_Current_m3919577819(__this, method) ((  AudioAmbisonicExtensionDefinition_t4111401642 * (*) (Enumerator_t111601594 *, const RuntimeMethod*))Enumerator_get_Current_m2192970573_gshared)(__this, method)
// System.String UnityEngine.AudioSettings::GetAmbisonicDecoderPluginName()
extern "C"  String_t* AudioSettings_GetAmbisonicDecoderPluginName_m2224992849 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::AddAmbisonicExtension(System.Type)
extern "C"  AudioSourceExtension_t1086723751 * AudioSource_AddAmbisonicExtension_m1668135458 (AudioSource_t1881938766 * __this, Type_t * ___extensionType0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.AudioAmbisonicExtensionDefinition>::MoveNext()
#define Enumerator_MoveNext_m78054241(__this, method) ((  bool (*) (Enumerator_t111601594 *, const RuntimeMethod*))Enumerator_MoveNext_m115165051_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.AudioAmbisonicExtensionDefinition>::Dispose()
#define Enumerator_Dispose_m2991583259(__this, method) ((  void (*) (Enumerator_t111601594 *, const RuntimeMethod*))Enumerator_Dispose_m1661376822_gshared)(__this, method)
// UnityEngine.PropertyName UnityEngine.PropertyName::op_Implicit(System.Int32)
extern "C"  PropertyName_t1110829634  PropertyName_op_Implicit_m390534942 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource UnityEngine.AudioSourceExtension::get_audioSource()
extern "C"  AudioSource_t1881938766 * AudioSourceExtension_get_audioSource_m247067304 (AudioSourceExtension_t1086723751 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.PropertyName UnityEngine.AudioSource::ReadExtensionName(System.Int32)
extern "C"  PropertyName_t1110829634  AudioSource_ReadExtensionName_m1004282844 (AudioSource_t1881938766 * __this, int32_t ___sourceIndex0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.PropertyName UnityEngine.AudioSource::ReadExtensionPropertyName(System.Int32)
extern "C"  PropertyName_t1110829634  AudioSource_ReadExtensionPropertyName_m3057463141 (AudioSource_t1881938766 * __this, int32_t ___sourceIndex0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AudioSource::ReadExtensionPropertyValue(System.Int32)
extern "C"  float AudioSource_ReadExtensionPropertyValue_m2316738097 (AudioSource_t1881938766 * __this, int32_t ___sourceIndex0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AudioSource::GetNumExtensionProperties()
extern "C"  int32_t AudioSource_GetNumExtensionProperties_m3666014541 (AudioSource_t1881938766 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::ClearExtensionProperties(UnityEngine.PropertyName)
extern "C"  void AudioSource_ClearExtensionProperties_m3564927376 (AudioSource_t1881938766 * __this, PropertyName_t1110829634  ___extensionName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioListenerExtension UnityEngine.AudioListener::AddExtension(System.Type)
extern "C"  AudioListenerExtension_t2188376730 * AudioListener_AddExtension_m2190467448 (AudioListener_t1564079801 * __this, Type_t * ___extensionType0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioListenerExtension::set_audioListener(UnityEngine.AudioListener)
extern "C"  void AudioListenerExtension_set_audioListener_m1490483160 (AudioListenerExtension_t2188376730 * __this, AudioListener_t1564079801 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioExtensionManager::WriteExtensionProperties(UnityEngine.AudioListenerExtension,System.String)
extern "C"  void AudioExtensionManager_WriteExtensionProperties_m2281144542 (RuntimeObject * __this /* static, unused */, AudioListenerExtension_t2188376730 * ___extension0, String_t* ___extensionName1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioListener UnityEngine.AudioListenerExtension::get_audioListener()
extern "C"  AudioListener_t1564079801 * AudioListenerExtension_get_audioListener_m1447216760 (AudioListenerExtension_t2188376730 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.PropertyName UnityEngine.AudioListener::ReadExtensionName(System.Int32)
extern "C"  PropertyName_t1110829634  AudioListener_ReadExtensionName_m4058978453 (AudioListener_t1564079801 * __this, int32_t ___listenerIndex0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.PropertyName UnityEngine.AudioListener::ReadExtensionPropertyName(System.Int32)
extern "C"  PropertyName_t1110829634  AudioListener_ReadExtensionPropertyName_m2552980367 (AudioListener_t1564079801 * __this, int32_t ___listenerIndex0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AudioListener::ReadExtensionPropertyValue(System.Int32)
extern "C"  float AudioListener_ReadExtensionPropertyValue_m3094838990 (AudioListener_t1564079801 * __this, int32_t ___listenerIndex0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AudioListener::GetNumExtensionProperties()
extern "C"  int32_t AudioListener_GetNumExtensionProperties_m2199353043 (AudioListener_t1564079801 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioListener::ClearExtensionProperties(UnityEngine.PropertyName)
extern "C"  void AudioListener_ClearExtensionProperties_m3264613977 (AudioListener_t1564079801 * __this, PropertyName_t1110829634  ___extensionName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.AudioSourceExtension>::Add(!0)
#define List_1_Add_m4269840472(__this, p0, method) ((  void (*) (List_1_t2122521643 *, AudioSourceExtension_t1086723751 *, const RuntimeMethod*))List_1_Add_m1354523727_gshared)(__this, p0, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.AudioSourceExtension>::get_Count()
#define List_1_get_Count_m2792579889(__this, method) ((  int32_t (*) (List_1_t2122521643 *, const RuntimeMethod*))List_1_get_Count_m3554854614_gshared)(__this, method)
// !0 System.Collections.Generic.List`1<UnityEngine.AudioSourceExtension>::get_Item(System.Int32)
#define List_1_get_Item_m2802060983(__this, p0, method) ((  AudioSourceExtension_t1086723751 * (*) (List_1_t2122521643 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1305759332_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.AudioSourceExtension>::set_Item(System.Int32,!0)
#define List_1_set_Item_m3783632087(__this, p0, p1, method) ((  void (*) (List_1_t2122521643 *, int32_t, AudioSourceExtension_t1086723751 *, const RuntimeMethod*))List_1_set_Item_m883720370_gshared)(__this, p0, p1, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.AudioSourceExtension>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m3100685645(__this, p0, method) ((  void (*) (List_1_t2122521643 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m107051475_gshared)(__this, p0, method)
// System.Boolean UnityEngine.PropertyName::op_Inequality(UnityEngine.PropertyName,UnityEngine.PropertyName)
extern "C"  bool PropertyName_op_Inequality_m4086853130 (RuntimeObject * __this /* static, unused */, PropertyName_t1110829634  p0, PropertyName_t1110829634  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type UnityEngine.AudioExtensionManager::GetSourceSpatializerExtensionType()
extern "C"  Type_t * AudioExtensionManager_GetSourceSpatializerExtensionType_m2752168269 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type UnityEngine.AudioExtensionManager::GetListenerSpatializerExtensionEditorType()
extern "C"  Type_t * AudioExtensionManager_GetListenerSpatializerExtensionEditorType_m1868381940 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type UnityEngine.AudioExtensionManager::GetListenerSpatializerExtensionType()
extern "C"  Type_t * AudioExtensionManager_GetListenerSpatializerExtensionType_m3815343981 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.AudioExtensionManager::GetAudioListener()
extern "C"  Object_t3504644959 * AudioExtensionManager_GetAudioListener_m2984758945 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioListenerExtension UnityEngine.AudioExtensionManager::AddSpatializerExtension(UnityEngine.AudioListener)
extern "C"  AudioListenerExtension_t2188376730 * AudioExtensionManager_AddSpatializerExtension_m3656995944 (RuntimeObject * __this /* static, unused */, AudioListener_t1564079801 * ___listener0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m999146850 (RuntimeObject * __this /* static, unused */, Object_t3504644959 * p0, Object_t3504644959 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Behaviour::get_enabled()
extern "C"  bool Behaviour_get_enabled_m2062246596 (Behaviour_t1064011594 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
extern "C"  bool AudioSource_get_isPlaying_m2862884913 (AudioSource_t1881938766 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioExtensionManager::RemoveExtensionFromManager(UnityEngine.AudioSourceExtension)
extern "C"  void AudioExtensionManager_RemoveExtensionFromManager_m4025922535 (RuntimeObject * __this /* static, unused */, AudioSourceExtension_t1086723751 * ___extension0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioExtensionManager::AddExtensionToManager(UnityEngine.AudioSourceExtension)
extern "C"  void AudioExtensionManager_AddExtensionToManager_m3037816188 (RuntimeObject * __this /* static, unused */, AudioSourceExtension_t1086723751 * ___extension0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m850358749 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.AudioSpatializerExtensionDefinition>::.ctor()
#define List_1__ctor_m3096134389(__this, method) ((  void (*) (List_1_t1357605577 *, const RuntimeMethod*))List_1__ctor_m1015304704_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.AudioAmbisonicExtensionDefinition>::.ctor()
#define List_1__ctor_m529932159(__this, method) ((  void (*) (List_1_t852232238 *, const RuntimeMethod*))List_1__ctor_m1015304704_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.AudioSourceExtension>::.ctor()
#define List_1__ctor_m2170804072(__this, method) ((  void (*) (List_1_t2122521643 *, const RuntimeMethod*))List_1__ctor_m1015304704_gshared)(__this, method)
// System.Void UnityEngine.AudioListener::INTERNAL_CALL_ReadExtensionName(UnityEngine.AudioListener,System.Int32,UnityEngine.PropertyName&)
extern "C"  void AudioListener_INTERNAL_CALL_ReadExtensionName_m160712257 (RuntimeObject * __this /* static, unused */, AudioListener_t1564079801 * ___self0, int32_t ___listenerIndex1, PropertyName_t1110829634 * ___value2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioListener::INTERNAL_CALL_ReadExtensionPropertyName(UnityEngine.AudioListener,System.Int32,UnityEngine.PropertyName&)
extern "C"  void AudioListener_INTERNAL_CALL_ReadExtensionPropertyName_m3132704040 (RuntimeObject * __this /* static, unused */, AudioListener_t1564079801 * ___self0, int32_t ___listenerIndex1, PropertyName_t1110829634 * ___value2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioListener::INTERNAL_CALL_ClearExtensionProperties(UnityEngine.AudioListener,UnityEngine.PropertyName&)
extern "C"  void AudioListener_INTERNAL_CALL_ClearExtensionProperties_m614887614 (RuntimeObject * __this /* static, unused */, AudioListener_t1564079801 * ___self0, PropertyName_t1110829634 * ___extensionName1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
extern "C"  ScriptableObject_t4256469858 * ScriptableObject_CreateInstance_m2052122103 (RuntimeObject * __this /* static, unused */, Type_t * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSettings::INTERNAL_CALL_GetConfiguration(UnityEngine.AudioConfiguration&)
extern "C"  void AudioSettings_INTERNAL_CALL_GetConfiguration_m3874171611 (RuntimeObject * __this /* static, unused */, AudioConfiguration_t2443350749 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean)
extern "C"  void AudioConfigurationChangeHandler_Invoke_m3495609342 (AudioConfigurationChangeHandler_t3767123146 * __this, bool ___deviceWasChanged0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioExtensionManager::Update()
extern "C"  void AudioExtensionManager_Update_m2593150679 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSourceExtension UnityEngine.AudioExtensionManager::AddSpatializerExtension(UnityEngine.AudioSource)
extern "C"  AudioSourceExtension_t1086723751 * AudioExtensionManager_AddSpatializerExtension_m482220115 (RuntimeObject * __this /* static, unused */, AudioSource_t1881938766 * ___source0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioExtensionManager::GetReadyToPlay(UnityEngine.AudioSourceExtension)
extern "C"  void AudioExtensionManager_GetReadyToPlay_m1899384901 (RuntimeObject * __this /* static, unused */, AudioSourceExtension_t1086723751 * ___extension0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
extern "C"  AudioClip_t3505022932 * AudioSource_get_clip_m4270278987 (AudioSource_t1881938766 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AudioClip::get_ambisonic()
extern "C"  bool AudioClip_get_ambisonic_m3497335091 (AudioClip_t3505022932 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSourceExtension UnityEngine.AudioExtensionManager::AddAmbisonicDecoderExtension(UnityEngine.AudioSource)
extern "C"  AudioSourceExtension_t1086723751 * AudioExtensionManager_AddAmbisonicDecoderExtension_m2400674341 (RuntimeObject * __this /* static, unused */, AudioSource_t1881938766 * ___source0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play(System.UInt64)
extern "C"  void AudioSource_Play_m4258457317 (AudioSource_t1881938766 * __this, uint64_t ___delay0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::INTERNAL_CALL_Pause(UnityEngine.AudioSource)
extern "C"  void AudioSource_INTERNAL_CALL_Pause_m4196339504 (RuntimeObject * __this /* static, unused */, AudioSource_t1881938766 * ___self0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::INTERNAL_CALL_UnPause(UnityEngine.AudioSource)
extern "C"  void AudioSource_INTERNAL_CALL_UnPause_m1840547120 (RuntimeObject * __this /* static, unused */, AudioSource_t1881938766 * ___self0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayOneShotHelper(UnityEngine.AudioClip,System.Single)
extern "C"  void AudioSource_PlayOneShotHelper_m443525293 (AudioSource_t1881938766 * __this, AudioClip_t3505022932 * ___clip0, float ___volumeScale1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AudioSource::get_spatializeInternal()
extern "C"  bool AudioSource_get_spatializeInternal_m116691644 (AudioSource_t1881938766 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_spatializeInternal(System.Boolean)
extern "C"  void AudioSource_set_spatializeInternal_m516009119 (AudioSource_t1881938766 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::GetOutputDataHelper(System.Single[],System.Int32)
extern "C"  void AudioSource_GetOutputDataHelper_m471571275 (AudioSource_t1881938766 * __this, SingleU5BU5D_t2558022491* ___samples0, int32_t ___channel1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::GetSpectrumDataHelper(System.Single[],System.Int32,UnityEngine.FFTWindow)
extern "C"  void AudioSource_GetSpectrumDataHelper_m1927840471 (AudioSource_t1881938766 * __this, SingleU5BU5D_t2558022491* ___samples0, int32_t ___channel1, int32_t ___window2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::INTERNAL_CALL_ReadExtensionName(UnityEngine.AudioSource,System.Int32,UnityEngine.PropertyName&)
extern "C"  void AudioSource_INTERNAL_CALL_ReadExtensionName_m2111190916 (RuntimeObject * __this /* static, unused */, AudioSource_t1881938766 * ___self0, int32_t ___sourceIndex1, PropertyName_t1110829634 * ___value2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::INTERNAL_CALL_ReadExtensionPropertyName(UnityEngine.AudioSource,System.Int32,UnityEngine.PropertyName&)
extern "C"  void AudioSource_INTERNAL_CALL_ReadExtensionPropertyName_m2322700458 (RuntimeObject * __this /* static, unused */, AudioSource_t1881938766 * ___self0, int32_t ___sourceIndex1, PropertyName_t1110829634 * ___value2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::INTERNAL_CALL_ClearExtensionProperties(UnityEngine.AudioSource,UnityEngine.PropertyName&)
extern "C"  void AudioSource_INTERNAL_CALL_ClearExtensionProperties_m2228654911 (RuntimeObject * __this /* static, unused */, AudioSource_t1881938766 * ___self0, PropertyName_t1110829634 * ___extensionName1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::GetHandle()
extern "C"  PlayableHandle_t3419437258  AudioClipPlayable_GetHandle_m698716387 (AudioClipPlayable_t1658957780 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t3419437258  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		PlayableHandle_t3419437258  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		PlayableHandle_t3419437258  L_1 = V_0;
		return L_1;
	}
}
extern "C"  PlayableHandle_t3419437258  AudioClipPlayable_GetHandle_m698716387_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AudioClipPlayable_t1658957780 * _thisAdjusted = reinterpret_cast<AudioClipPlayable_t1658957780 *>(__this + 1);
	return AudioClipPlayable_GetHandle_m698716387(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Audio.AudioClipPlayable::Equals(UnityEngine.Audio.AudioClipPlayable)
extern "C"  bool AudioClipPlayable_Equals_m3593016031 (AudioClipPlayable_t1658957780 * __this, AudioClipPlayable_t1658957780  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		PlayableHandle_t3419437258  L_0 = AudioClipPlayable_GetHandle_m698716387(__this, /*hidden argument*/NULL);
		PlayableHandle_t3419437258  L_1 = AudioClipPlayable_GetHandle_m698716387((&___other0), /*hidden argument*/NULL);
		bool L_2 = PlayableHandle_op_Equality_m3795834239(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
extern "C"  bool AudioClipPlayable_Equals_m3593016031_AdjustorThunk (RuntimeObject * __this, AudioClipPlayable_t1658957780  ___other0, const RuntimeMethod* method)
{
	AudioClipPlayable_t1658957780 * _thisAdjusted = reinterpret_cast<AudioClipPlayable_t1658957780 *>(__this + 1);
	return AudioClipPlayable_Equals_m3593016031(_thisAdjusted, ___other0, method);
}
// UnityEngine.Audio.AudioMixerGroup[] UnityEngine.Audio.AudioMixer::FindMatchingGroups(System.String)
extern "C"  AudioMixerGroupU5BU5D_t1940547199* AudioMixer_FindMatchingGroups_m143900623 (AudioMixer_t3624282491 * __this, String_t* ___subPath0, const RuntimeMethod* method)
{
	typedef AudioMixerGroupU5BU5D_t1940547199* (*AudioMixer_FindMatchingGroups_m143900623_ftn) (AudioMixer_t3624282491 *, String_t*);
	static AudioMixer_FindMatchingGroups_m143900623_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioMixer_FindMatchingGroups_m143900623_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioMixer::FindMatchingGroups(System.String)");
	AudioMixerGroupU5BU5D_t1940547199* retVal = _il2cpp_icall_func(__this, ___subPath0);
	return retVal;
}
// System.Void UnityEngine.Audio.AudioMixerGroup::.ctor()
extern "C"  void AudioMixerGroup__ctor_m1614834262 (AudioMixerGroup_t2866063578 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioMixerGroup__ctor_m1614834262_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3504644959_il2cpp_TypeInfo_var);
		Object__ctor_m1040057774(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::GetHandle()
extern "C"  PlayableHandle_t3419437258  AudioMixerPlayable_GetHandle_m2558019795 (AudioMixerPlayable_t1187433945 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t3419437258  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		PlayableHandle_t3419437258  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		PlayableHandle_t3419437258  L_1 = V_0;
		return L_1;
	}
}
extern "C"  PlayableHandle_t3419437258  AudioMixerPlayable_GetHandle_m2558019795_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AudioMixerPlayable_t1187433945 * _thisAdjusted = reinterpret_cast<AudioMixerPlayable_t1187433945 *>(__this + 1);
	return AudioMixerPlayable_GetHandle_m2558019795(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Audio.AudioMixerPlayable::Equals(UnityEngine.Audio.AudioMixerPlayable)
extern "C"  bool AudioMixerPlayable_Equals_m2169714946 (AudioMixerPlayable_t1187433945 * __this, AudioMixerPlayable_t1187433945  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		PlayableHandle_t3419437258  L_0 = AudioMixerPlayable_GetHandle_m2558019795(__this, /*hidden argument*/NULL);
		PlayableHandle_t3419437258  L_1 = AudioMixerPlayable_GetHandle_m2558019795((&___other0), /*hidden argument*/NULL);
		bool L_2 = PlayableHandle_op_Equality_m3795834239(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
extern "C"  bool AudioMixerPlayable_Equals_m2169714946_AdjustorThunk (RuntimeObject * __this, AudioMixerPlayable_t1187433945  ___other0, const RuntimeMethod* method)
{
	AudioMixerPlayable_t1187433945 * _thisAdjusted = reinterpret_cast<AudioMixerPlayable_t1187433945 *>(__this + 1);
	return AudioMixerPlayable_Equals_m2169714946(_thisAdjusted, ___other0, method);
}
// System.Void UnityEngine.AudioClip::.ctor()
extern "C"  void AudioClip__ctor_m3669494727 (AudioClip_t3505022932 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioClip__ctor_m3669494727_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_PCMReaderCallback_2((PCMReaderCallback_t259294911 *)NULL);
		__this->set_m_PCMSetPositionCallback_3((PCMSetPositionCallback_t4181094095 *)NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3504644959_il2cpp_TypeInfo_var);
		Object__ctor_m1040057774(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.AudioClip::get_ambisonic()
extern "C"  bool AudioClip_get_ambisonic_m3497335091 (AudioClip_t3505022932 * __this, const RuntimeMethod* method)
{
	typedef bool (*AudioClip_get_ambisonic_m3497335091_ftn) (AudioClip_t3505022932 *);
	static AudioClip_get_ambisonic_m3497335091_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_ambisonic_m3497335091_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_ambisonic()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[])
extern "C"  void AudioClip_InvokePCMReaderCallback_Internal_m2478892069 (AudioClip_t3505022932 * __this, SingleU5BU5D_t2558022491* ___data0, const RuntimeMethod* method)
{
	{
		PCMReaderCallback_t259294911 * L_0 = __this->get_m_PCMReaderCallback_2();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		PCMReaderCallback_t259294911 * L_1 = __this->get_m_PCMReaderCallback_2();
		SingleU5BU5D_t2558022491* L_2 = ___data0;
		NullCheck(L_1);
		PCMReaderCallback_Invoke_m2731740265(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32)
extern "C"  void AudioClip_InvokePCMSetPositionCallback_Internal_m610142191 (AudioClip_t3505022932 * __this, int32_t ___position0, const RuntimeMethod* method)
{
	{
		PCMSetPositionCallback_t4181094095 * L_0 = __this->get_m_PCMSetPositionCallback_3();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		PCMSetPositionCallback_t4181094095 * L_1 = __this->get_m_PCMSetPositionCallback_3();
		int32_t L_2 = ___position0;
		NullCheck(L_1);
		PCMSetPositionCallback_Invoke_m992031814(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
extern "C"  void DelegatePInvokeWrapper_PCMReaderCallback_t259294911 (PCMReaderCallback_t259294911 * __this, SingleU5BU5D_t2558022491* ___data0, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(float*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___data0' to native representation
	float* ____data0_marshaled = NULL;
	if (___data0 != NULL)
	{
		____data0_marshaled = reinterpret_cast<float*>((___data0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____data0_marshaled);

}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void PCMReaderCallback__ctor_m921976276 (PCMReaderCallback_t259294911 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[])
extern "C"  void PCMReaderCallback_Invoke_m2731740265 (PCMReaderCallback_t259294911 * __this, SingleU5BU5D_t2558022491* ___data0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		PCMReaderCallback_Invoke_m2731740265((PCMReaderCallback_t259294911 *)__this->get_prev_9(),___data0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	bool ___methodIsStatic = MethodIsStatic((RuntimeMethod*)(__this->get_method_3()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (RuntimeObject *, void* __this, SingleU5BU5D_t2558022491* ___data0, const RuntimeMethod* method);
		((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___data0,(RuntimeMethod*)(__this->get_method_3()));
	}
	else if (__this->get_m_target_2() != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (void* __this, SingleU5BU5D_t2558022491* ___data0, const RuntimeMethod* method);
		((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___data0,(RuntimeMethod*)(__this->get_method_3()));
	}
	else
	{
		typedef void (*FunctionPointerType) (void* __this, const RuntimeMethod* method);
		((FunctionPointerType)__this->get_method_ptr_0())(___data0,(RuntimeMethod*)(__this->get_method_3()));
	}
}
// System.IAsyncResult UnityEngine.AudioClip/PCMReaderCallback::BeginInvoke(System.Single[],System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* PCMReaderCallback_BeginInvoke_m1197959832 (PCMReaderCallback_t259294911 * __this, SingleU5BU5D_t2558022491* ___data0, AsyncCallback_t2314506972 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___data0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::EndInvoke(System.IAsyncResult)
extern "C"  void PCMReaderCallback_EndInvoke_m4069541022 (PCMReaderCallback_t259294911 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
extern "C"  void DelegatePInvokeWrapper_PCMSetPositionCallback_t4181094095 (PCMSetPositionCallback_t4181094095 * __this, int32_t ___position0, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___position0);

}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void PCMSetPositionCallback__ctor_m2609964073 (PCMSetPositionCallback_t4181094095 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32)
extern "C"  void PCMSetPositionCallback_Invoke_m992031814 (PCMSetPositionCallback_t4181094095 * __this, int32_t ___position0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		PCMSetPositionCallback_Invoke_m992031814((PCMSetPositionCallback_t4181094095 *)__this->get_prev_9(),___position0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	bool ___methodIsStatic = MethodIsStatic((RuntimeMethod*)(__this->get_method_3()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (RuntimeObject *, void* __this, int32_t ___position0, const RuntimeMethod* method);
		((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___position0,(RuntimeMethod*)(__this->get_method_3()));
	}
	else
	{
		typedef void (*FunctionPointerType) (void* __this, int32_t ___position0, const RuntimeMethod* method);
		((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___position0,(RuntimeMethod*)(__this->get_method_3()));
	}
}
// System.IAsyncResult UnityEngine.AudioClip/PCMSetPositionCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* PCMSetPositionCallback_BeginInvoke_m270649274 (PCMSetPositionCallback_t4181094095 * __this, int32_t ___position0, AsyncCallback_t2314506972 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PCMSetPositionCallback_BeginInvoke_m270649274_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t2633422566_il2cpp_TypeInfo_var, &___position0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::EndInvoke(System.IAsyncResult)
extern "C"  void PCMSetPositionCallback_EndInvoke_m2091274760 (PCMSetPositionCallback_t4181094095 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
// System.Type UnityEngine.AudioExtensionDefinition::GetExtensionType()
extern "C"  Type_t * AudioExtensionDefinition_GetExtensionType_m247150428 (AudioExtensionDefinition_t181799281 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionDefinition_GetExtensionType_m247150428_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	{
		Type_t * L_0 = __this->get_extensionType_3();
		if (L_0)
		{
			goto IL_004d;
		}
	}
	{
		StringU5BU5D_t2914275055* L_1 = ((StringU5BU5D_t2914275055*)SZArrayNew(StringU5BU5D_t2914275055_il2cpp_TypeInfo_var, (uint32_t)5));
		String_t* L_2 = __this->get_extensionNamespace_1();
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_t2914275055* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral310237269);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral310237269);
		StringU5BU5D_t2914275055* L_4 = L_3;
		String_t* L_5 = __this->get_extensionTypeName_2();
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_5);
		StringU5BU5D_t2914275055* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral4251046666);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral4251046666);
		StringU5BU5D_t2914275055* L_7 = L_6;
		String_t* L_8 = __this->get_assemblyName_0();
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m4132442772(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = il2cpp_codegen_get_type((Il2CppMethodPointer)&Type_GetType_m1340207934, L_9, "UnityEngine.AudioModule, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null");
		__this->set_extensionType_3(L_10);
	}

IL_004d:
	{
		Type_t * L_11 = __this->get_extensionType_3();
		V_0 = L_11;
		goto IL_0059;
	}

IL_0059:
	{
		Type_t * L_12 = V_0;
		return L_12;
	}
}
// UnityEngine.Object UnityEngine.AudioExtensionManager::GetAudioListener()
extern "C"  Object_t3504644959 * AudioExtensionManager_GetAudioListener_m2984758945 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef Object_t3504644959 * (*AudioExtensionManager_GetAudioListener_m2984758945_ftn) ();
	static AudioExtensionManager_GetAudioListener_m2984758945_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioExtensionManager_GetAudioListener_m2984758945_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioExtensionManager::GetAudioListener()");
	Object_t3504644959 * retVal = _il2cpp_icall_func();
	return retVal;
}
// UnityEngine.AudioSourceExtension UnityEngine.AudioExtensionManager::AddSpatializerExtension(UnityEngine.AudioSource)
extern "C"  AudioSourceExtension_t1086723751 * AudioExtensionManager_AddSpatializerExtension_m482220115 (RuntimeObject * __this /* static, unused */, AudioSource_t1881938766 * ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionManager_AddSpatializerExtension_m482220115_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioSourceExtension_t1086723751 * V_0 = NULL;
	AudioSpatializerExtensionDefinition_t321807685 * V_1 = NULL;
	Enumerator_t616974933  V_2;
	memset(&V_2, 0, sizeof(V_2));
	AudioSourceExtension_t1086723751 * V_3 = NULL;
	Exception_t1434153031 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1434153031 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		AudioSource_t1881938766 * L_0 = ___source0;
		NullCheck(L_0);
		bool L_1 = AudioSource_get_spatialize_m894426778(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		V_0 = (AudioSourceExtension_t1086723751 *)NULL;
		goto IL_00dc;
	}

IL_0013:
	{
		AudioSource_t1881938766 * L_2 = ___source0;
		NullCheck(L_2);
		AudioSourceExtension_t1086723751 * L_3 = L_2->get_spatializerExtension_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3504644959_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m1843775054(NULL /*static, unused*/, L_3, (Object_t3504644959 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		AudioSource_t1881938766 * L_5 = ___source0;
		NullCheck(L_5);
		AudioSourceExtension_t1086723751 * L_6 = L_5->get_spatializerExtension_2();
		V_0 = L_6;
		goto IL_00dc;
	}

IL_0030:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var);
		AudioExtensionManager_RegisterBuiltinDefinitions_m1303242357(NULL /*static, unused*/, /*hidden argument*/NULL);
		List_1_t1357605577 * L_7 = ((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->get_m_SourceSpatializerExtensionDefinitions_1();
		NullCheck(L_7);
		Enumerator_t616974933  L_8 = List_1_GetEnumerator_m3969806089(L_7, /*hidden argument*/List_1_GetEnumerator_m3969806089_RuntimeMethod_var);
		V_2 = L_8;
	}

IL_0041:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b6;
		}

IL_0046:
		{
			AudioSpatializerExtensionDefinition_t321807685 * L_9 = Enumerator_get_Current_m1768009383((&V_2), /*hidden argument*/Enumerator_get_Current_m1768009383_RuntimeMethod_var);
			V_1 = L_9;
			String_t* L_10 = AudioSettings_GetSpatializerPluginName_m351030697(NULL /*static, unused*/, /*hidden argument*/NULL);
			PropertyName_t1110829634  L_11 = PropertyName_op_Implicit_m36237779(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
			AudioSpatializerExtensionDefinition_t321807685 * L_12 = V_1;
			NullCheck(L_12);
			PropertyName_t1110829634  L_13 = L_12->get_spatializerName_0();
			bool L_14 = PropertyName_op_Equality_m1100584677(NULL /*static, unused*/, L_11, L_13, /*hidden argument*/NULL);
			if (!L_14)
			{
				goto IL_00b5;
			}
		}

IL_0069:
		{
			AudioSource_t1881938766 * L_15 = ___source0;
			AudioSpatializerExtensionDefinition_t321807685 * L_16 = V_1;
			NullCheck(L_16);
			AudioExtensionDefinition_t181799281 * L_17 = L_16->get_definition_1();
			NullCheck(L_17);
			Type_t * L_18 = AudioExtensionDefinition_GetExtensionType_m247150428(L_17, /*hidden argument*/NULL);
			NullCheck(L_15);
			AudioSourceExtension_t1086723751 * L_19 = AudioSource_AddSpatializerExtension_m3495425952(L_15, L_18, /*hidden argument*/NULL);
			V_3 = L_19;
			AudioSourceExtension_t1086723751 * L_20 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Object_t3504644959_il2cpp_TypeInfo_var);
			bool L_21 = Object_op_Inequality_m1843775054(NULL /*static, unused*/, L_20, (Object_t3504644959 *)NULL, /*hidden argument*/NULL);
			if (!L_21)
			{
				goto IL_00b4;
			}
		}

IL_0088:
		{
			AudioSourceExtension_t1086723751 * L_22 = V_3;
			AudioSource_t1881938766 * L_23 = ___source0;
			NullCheck(L_22);
			AudioSourceExtension_set_audioSource_m2905420079(L_22, L_23, /*hidden argument*/NULL);
			AudioSource_t1881938766 * L_24 = ___source0;
			AudioSourceExtension_t1086723751 * L_25 = V_3;
			NullCheck(L_24);
			L_24->set_spatializerExtension_2(L_25);
			AudioSourceExtension_t1086723751 * L_26 = V_3;
			AudioSpatializerExtensionDefinition_t321807685 * L_27 = V_1;
			NullCheck(L_27);
			AudioExtensionDefinition_t181799281 * L_28 = L_27->get_definition_1();
			NullCheck(L_28);
			Type_t * L_29 = AudioExtensionDefinition_GetExtensionType_m247150428(L_28, /*hidden argument*/NULL);
			NullCheck(L_29);
			String_t* L_30 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_29);
			IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var);
			AudioExtensionManager_WriteExtensionProperties_m1579329545(NULL /*static, unused*/, L_26, L_30, /*hidden argument*/NULL);
			AudioSourceExtension_t1086723751 * L_31 = V_3;
			V_0 = L_31;
			IL2CPP_LEAVE(0xDC, FINALLY_00c7);
		}

IL_00b4:
		{
		}

IL_00b5:
		{
		}

IL_00b6:
		{
			bool L_32 = Enumerator_MoveNext_m339398266((&V_2), /*hidden argument*/Enumerator_MoveNext_m339398266_RuntimeMethod_var);
			if (L_32)
			{
				goto IL_0046;
			}
		}

IL_00c2:
		{
			IL2CPP_LEAVE(0xD5, FINALLY_00c7);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1434153031 *)e.ex;
		goto FINALLY_00c7;
	}

FINALLY_00c7:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m966255976((&V_2), /*hidden argument*/Enumerator_Dispose_m966255976_RuntimeMethod_var);
		IL2CPP_END_FINALLY(199)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(199)
	{
		IL2CPP_JUMP_TBL(0xDC, IL_00dc)
		IL2CPP_JUMP_TBL(0xD5, IL_00d5)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1434153031 *)
	}

IL_00d5:
	{
		V_0 = (AudioSourceExtension_t1086723751 *)NULL;
		goto IL_00dc;
	}

IL_00dc:
	{
		AudioSourceExtension_t1086723751 * L_33 = V_0;
		return L_33;
	}
}
// UnityEngine.AudioSourceExtension UnityEngine.AudioExtensionManager::AddAmbisonicDecoderExtension(UnityEngine.AudioSource)
extern "C"  AudioSourceExtension_t1086723751 * AudioExtensionManager_AddAmbisonicDecoderExtension_m2400674341 (RuntimeObject * __this /* static, unused */, AudioSource_t1881938766 * ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionManager_AddAmbisonicDecoderExtension_m2400674341_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioSourceExtension_t1086723751 * V_0 = NULL;
	AudioAmbisonicExtensionDefinition_t4111401642 * V_1 = NULL;
	Enumerator_t111601594  V_2;
	memset(&V_2, 0, sizeof(V_2));
	AudioSourceExtension_t1086723751 * V_3 = NULL;
	Exception_t1434153031 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1434153031 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		AudioSource_t1881938766 * L_0 = ___source0;
		NullCheck(L_0);
		AudioSourceExtension_t1086723751 * L_1 = L_0->get_ambisonicExtension_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3504644959_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m1843775054(NULL /*static, unused*/, L_1, (Object_t3504644959 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		AudioSource_t1881938766 * L_3 = ___source0;
		NullCheck(L_3);
		AudioSourceExtension_t1086723751 * L_4 = L_3->get_ambisonicExtension_3();
		V_0 = L_4;
		goto IL_00b4;
	}

IL_001e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var);
		AudioExtensionManager_RegisterBuiltinDefinitions_m1303242357(NULL /*static, unused*/, /*hidden argument*/NULL);
		List_1_t852232238 * L_5 = ((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->get_m_SourceAmbisonicDecoderExtensionDefinitions_2();
		NullCheck(L_5);
		Enumerator_t111601594  L_6 = List_1_GetEnumerator_m1520259664(L_5, /*hidden argument*/List_1_GetEnumerator_m1520259664_RuntimeMethod_var);
		V_2 = L_6;
	}

IL_002f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_008e;
		}

IL_0034:
		{
			AudioAmbisonicExtensionDefinition_t4111401642 * L_7 = Enumerator_get_Current_m3919577819((&V_2), /*hidden argument*/Enumerator_get_Current_m3919577819_RuntimeMethod_var);
			V_1 = L_7;
			String_t* L_8 = AudioSettings_GetAmbisonicDecoderPluginName_m2224992849(NULL /*static, unused*/, /*hidden argument*/NULL);
			PropertyName_t1110829634  L_9 = PropertyName_op_Implicit_m36237779(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
			AudioAmbisonicExtensionDefinition_t4111401642 * L_10 = V_1;
			NullCheck(L_10);
			PropertyName_t1110829634  L_11 = L_10->get_ambisonicPluginName_0();
			bool L_12 = PropertyName_op_Equality_m1100584677(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/NULL);
			if (!L_12)
			{
				goto IL_008d;
			}
		}

IL_0057:
		{
			AudioSource_t1881938766 * L_13 = ___source0;
			AudioAmbisonicExtensionDefinition_t4111401642 * L_14 = V_1;
			NullCheck(L_14);
			AudioExtensionDefinition_t181799281 * L_15 = L_14->get_definition_1();
			NullCheck(L_15);
			Type_t * L_16 = AudioExtensionDefinition_GetExtensionType_m247150428(L_15, /*hidden argument*/NULL);
			NullCheck(L_13);
			AudioSourceExtension_t1086723751 * L_17 = AudioSource_AddAmbisonicExtension_m1668135458(L_13, L_16, /*hidden argument*/NULL);
			V_3 = L_17;
			AudioSourceExtension_t1086723751 * L_18 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Object_t3504644959_il2cpp_TypeInfo_var);
			bool L_19 = Object_op_Inequality_m1843775054(NULL /*static, unused*/, L_18, (Object_t3504644959 *)NULL, /*hidden argument*/NULL);
			if (!L_19)
			{
				goto IL_008c;
			}
		}

IL_0076:
		{
			AudioSourceExtension_t1086723751 * L_20 = V_3;
			AudioSource_t1881938766 * L_21 = ___source0;
			NullCheck(L_20);
			AudioSourceExtension_set_audioSource_m2905420079(L_20, L_21, /*hidden argument*/NULL);
			AudioSource_t1881938766 * L_22 = ___source0;
			AudioSourceExtension_t1086723751 * L_23 = V_3;
			NullCheck(L_22);
			L_22->set_ambisonicExtension_3(L_23);
			AudioSourceExtension_t1086723751 * L_24 = V_3;
			V_0 = L_24;
			IL2CPP_LEAVE(0xB4, FINALLY_009f);
		}

IL_008c:
		{
		}

IL_008d:
		{
		}

IL_008e:
		{
			bool L_25 = Enumerator_MoveNext_m78054241((&V_2), /*hidden argument*/Enumerator_MoveNext_m78054241_RuntimeMethod_var);
			if (L_25)
			{
				goto IL_0034;
			}
		}

IL_009a:
		{
			IL2CPP_LEAVE(0xAD, FINALLY_009f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1434153031 *)e.ex;
		goto FINALLY_009f;
	}

FINALLY_009f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2991583259((&V_2), /*hidden argument*/Enumerator_Dispose_m2991583259_RuntimeMethod_var);
		IL2CPP_END_FINALLY(159)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(159)
	{
		IL2CPP_JUMP_TBL(0xB4, IL_00b4)
		IL2CPP_JUMP_TBL(0xAD, IL_00ad)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1434153031 *)
	}

IL_00ad:
	{
		V_0 = (AudioSourceExtension_t1086723751 *)NULL;
		goto IL_00b4;
	}

IL_00b4:
	{
		AudioSourceExtension_t1086723751 * L_26 = V_0;
		return L_26;
	}
}
// System.Void UnityEngine.AudioExtensionManager::WriteExtensionProperties(UnityEngine.AudioSourceExtension,System.String)
extern "C"  void AudioExtensionManager_WriteExtensionProperties_m1579329545 (RuntimeObject * __this /* static, unused */, AudioSourceExtension_t1086723751 * ___extension0, String_t* ___extensionName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionManager_WriteExtensionProperties_m1579329545_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PropertyName_t1110829634  V_1;
	memset(&V_1, 0, sizeof(V_1));
	float V_2 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var);
		PropertyName_t1110829634  L_0 = ((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->get_m_SpatializerExtensionName_7();
		PropertyName_t1110829634  L_1 = PropertyName_op_Implicit_m390534942(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		bool L_2 = PropertyName_op_Equality_m1100584677(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_3 = ___extensionName1;
		PropertyName_t1110829634  L_4 = PropertyName_op_Implicit_m36237779(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var);
		((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->set_m_SpatializerExtensionName_7(L_4);
	}

IL_0021:
	{
		V_0 = 0;
		goto IL_006d;
	}

IL_0028:
	{
		AudioSourceExtension_t1086723751 * L_5 = ___extension0;
		NullCheck(L_5);
		AudioSource_t1881938766 * L_6 = AudioSourceExtension_get_audioSource_m247067304(L_5, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		PropertyName_t1110829634  L_8 = AudioSource_ReadExtensionName_m1004282844(L_6, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var);
		PropertyName_t1110829634  L_9 = ((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->get_m_SpatializerExtensionName_7();
		bool L_10 = PropertyName_op_Equality_m1100584677(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0068;
		}
	}
	{
		AudioSourceExtension_t1086723751 * L_11 = ___extension0;
		NullCheck(L_11);
		AudioSource_t1881938766 * L_12 = AudioSourceExtension_get_audioSource_m247067304(L_11, /*hidden argument*/NULL);
		int32_t L_13 = V_0;
		NullCheck(L_12);
		PropertyName_t1110829634  L_14 = AudioSource_ReadExtensionPropertyName_m3057463141(L_12, L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		AudioSourceExtension_t1086723751 * L_15 = ___extension0;
		NullCheck(L_15);
		AudioSource_t1881938766 * L_16 = AudioSourceExtension_get_audioSource_m247067304(L_15, /*hidden argument*/NULL);
		int32_t L_17 = V_0;
		NullCheck(L_16);
		float L_18 = AudioSource_ReadExtensionPropertyValue_m2316738097(L_16, L_17, /*hidden argument*/NULL);
		V_2 = L_18;
		AudioSourceExtension_t1086723751 * L_19 = ___extension0;
		PropertyName_t1110829634  L_20 = V_1;
		float L_21 = V_2;
		NullCheck(L_19);
		VirtActionInvoker2< PropertyName_t1110829634 , float >::Invoke(4 /* System.Void UnityEngine.AudioSourceExtension::WriteExtensionProperty(UnityEngine.PropertyName,System.Single) */, L_19, L_20, L_21);
	}

IL_0068:
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_006d:
	{
		int32_t L_23 = V_0;
		AudioSourceExtension_t1086723751 * L_24 = ___extension0;
		NullCheck(L_24);
		AudioSource_t1881938766 * L_25 = AudioSourceExtension_get_audioSource_m247067304(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		int32_t L_26 = AudioSource_GetNumExtensionProperties_m3666014541(L_25, /*hidden argument*/NULL);
		if ((((int32_t)L_23) < ((int32_t)L_26)))
		{
			goto IL_0028;
		}
	}
	{
		AudioSourceExtension_t1086723751 * L_27 = ___extension0;
		NullCheck(L_27);
		AudioSource_t1881938766 * L_28 = AudioSourceExtension_get_audioSource_m247067304(L_27, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var);
		PropertyName_t1110829634  L_29 = ((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->get_m_SpatializerExtensionName_7();
		NullCheck(L_28);
		AudioSource_ClearExtensionProperties_m3564927376(L_28, L_29, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.AudioListenerExtension UnityEngine.AudioExtensionManager::AddSpatializerExtension(UnityEngine.AudioListener)
extern "C"  AudioListenerExtension_t2188376730 * AudioExtensionManager_AddSpatializerExtension_m3656995944 (RuntimeObject * __this /* static, unused */, AudioListener_t1564079801 * ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionManager_AddSpatializerExtension_m3656995944_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioListenerExtension_t2188376730 * V_0 = NULL;
	AudioSpatializerExtensionDefinition_t321807685 * V_1 = NULL;
	Enumerator_t616974933  V_2;
	memset(&V_2, 0, sizeof(V_2));
	AudioListenerExtension_t2188376730 * V_3 = NULL;
	Exception_t1434153031 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1434153031 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		AudioListener_t1564079801 * L_0 = ___listener0;
		NullCheck(L_0);
		AudioListenerExtension_t2188376730 * L_1 = L_0->get_spatializerExtension_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3504644959_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m1843775054(NULL /*static, unused*/, L_1, (Object_t3504644959 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		AudioListener_t1564079801 * L_3 = ___listener0;
		NullCheck(L_3);
		AudioListenerExtension_t2188376730 * L_4 = L_3->get_spatializerExtension_2();
		V_0 = L_4;
		goto IL_00e4;
	}

IL_001e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var);
		AudioExtensionManager_RegisterBuiltinDefinitions_m1303242357(NULL /*static, unused*/, /*hidden argument*/NULL);
		List_1_t1357605577 * L_5 = ((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->get_m_ListenerSpatializerExtensionDefinitions_0();
		NullCheck(L_5);
		Enumerator_t616974933  L_6 = List_1_GetEnumerator_m3969806089(L_5, /*hidden argument*/List_1_GetEnumerator_m3969806089_RuntimeMethod_var);
		V_2 = L_6;
	}

IL_002f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00be;
		}

IL_0034:
		{
			AudioSpatializerExtensionDefinition_t321807685 * L_7 = Enumerator_get_Current_m1768009383((&V_2), /*hidden argument*/Enumerator_get_Current_m1768009383_RuntimeMethod_var);
			V_1 = L_7;
			String_t* L_8 = AudioSettings_GetSpatializerPluginName_m351030697(NULL /*static, unused*/, /*hidden argument*/NULL);
			PropertyName_t1110829634  L_9 = PropertyName_op_Implicit_m36237779(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
			AudioSpatializerExtensionDefinition_t321807685 * L_10 = V_1;
			NullCheck(L_10);
			PropertyName_t1110829634  L_11 = L_10->get_spatializerName_0();
			bool L_12 = PropertyName_op_Equality_m1100584677(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/NULL);
			if (L_12)
			{
				goto IL_0071;
			}
		}

IL_0057:
		{
			String_t* L_13 = AudioSettings_GetAmbisonicDecoderPluginName_m2224992849(NULL /*static, unused*/, /*hidden argument*/NULL);
			PropertyName_t1110829634  L_14 = PropertyName_op_Implicit_m36237779(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
			AudioSpatializerExtensionDefinition_t321807685 * L_15 = V_1;
			NullCheck(L_15);
			PropertyName_t1110829634  L_16 = L_15->get_spatializerName_0();
			bool L_17 = PropertyName_op_Equality_m1100584677(NULL /*static, unused*/, L_14, L_16, /*hidden argument*/NULL);
			if (!L_17)
			{
				goto IL_00bd;
			}
		}

IL_0071:
		{
			AudioListener_t1564079801 * L_18 = ___listener0;
			AudioSpatializerExtensionDefinition_t321807685 * L_19 = V_1;
			NullCheck(L_19);
			AudioExtensionDefinition_t181799281 * L_20 = L_19->get_definition_1();
			NullCheck(L_20);
			Type_t * L_21 = AudioExtensionDefinition_GetExtensionType_m247150428(L_20, /*hidden argument*/NULL);
			NullCheck(L_18);
			AudioListenerExtension_t2188376730 * L_22 = AudioListener_AddExtension_m2190467448(L_18, L_21, /*hidden argument*/NULL);
			V_3 = L_22;
			AudioListenerExtension_t2188376730 * L_23 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Object_t3504644959_il2cpp_TypeInfo_var);
			bool L_24 = Object_op_Inequality_m1843775054(NULL /*static, unused*/, L_23, (Object_t3504644959 *)NULL, /*hidden argument*/NULL);
			if (!L_24)
			{
				goto IL_00bc;
			}
		}

IL_0090:
		{
			AudioListenerExtension_t2188376730 * L_25 = V_3;
			AudioListener_t1564079801 * L_26 = ___listener0;
			NullCheck(L_25);
			AudioListenerExtension_set_audioListener_m1490483160(L_25, L_26, /*hidden argument*/NULL);
			AudioListener_t1564079801 * L_27 = ___listener0;
			AudioListenerExtension_t2188376730 * L_28 = V_3;
			NullCheck(L_27);
			L_27->set_spatializerExtension_2(L_28);
			AudioListenerExtension_t2188376730 * L_29 = V_3;
			AudioSpatializerExtensionDefinition_t321807685 * L_30 = V_1;
			NullCheck(L_30);
			AudioExtensionDefinition_t181799281 * L_31 = L_30->get_definition_1();
			NullCheck(L_31);
			Type_t * L_32 = AudioExtensionDefinition_GetExtensionType_m247150428(L_31, /*hidden argument*/NULL);
			NullCheck(L_32);
			String_t* L_33 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_32);
			IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var);
			AudioExtensionManager_WriteExtensionProperties_m2281144542(NULL /*static, unused*/, L_29, L_33, /*hidden argument*/NULL);
			AudioListenerExtension_t2188376730 * L_34 = V_3;
			V_0 = L_34;
			IL2CPP_LEAVE(0xE4, FINALLY_00cf);
		}

IL_00bc:
		{
		}

IL_00bd:
		{
		}

IL_00be:
		{
			bool L_35 = Enumerator_MoveNext_m339398266((&V_2), /*hidden argument*/Enumerator_MoveNext_m339398266_RuntimeMethod_var);
			if (L_35)
			{
				goto IL_0034;
			}
		}

IL_00ca:
		{
			IL2CPP_LEAVE(0xDD, FINALLY_00cf);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1434153031 *)e.ex;
		goto FINALLY_00cf;
	}

FINALLY_00cf:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m966255976((&V_2), /*hidden argument*/Enumerator_Dispose_m966255976_RuntimeMethod_var);
		IL2CPP_END_FINALLY(207)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(207)
	{
		IL2CPP_JUMP_TBL(0xE4, IL_00e4)
		IL2CPP_JUMP_TBL(0xDD, IL_00dd)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1434153031 *)
	}

IL_00dd:
	{
		V_0 = (AudioListenerExtension_t2188376730 *)NULL;
		goto IL_00e4;
	}

IL_00e4:
	{
		AudioListenerExtension_t2188376730 * L_36 = V_0;
		return L_36;
	}
}
// System.Void UnityEngine.AudioExtensionManager::WriteExtensionProperties(UnityEngine.AudioListenerExtension,System.String)
extern "C"  void AudioExtensionManager_WriteExtensionProperties_m2281144542 (RuntimeObject * __this /* static, unused */, AudioListenerExtension_t2188376730 * ___extension0, String_t* ___extensionName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionManager_WriteExtensionProperties_m2281144542_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PropertyName_t1110829634  V_1;
	memset(&V_1, 0, sizeof(V_1));
	float V_2 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var);
		PropertyName_t1110829634  L_0 = ((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->get_m_ListenerSpatializerExtensionName_8();
		PropertyName_t1110829634  L_1 = PropertyName_op_Implicit_m390534942(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		bool L_2 = PropertyName_op_Equality_m1100584677(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_3 = ___extensionName1;
		PropertyName_t1110829634  L_4 = PropertyName_op_Implicit_m36237779(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var);
		((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->set_m_ListenerSpatializerExtensionName_8(L_4);
	}

IL_0021:
	{
		V_0 = 0;
		goto IL_006d;
	}

IL_0028:
	{
		AudioListenerExtension_t2188376730 * L_5 = ___extension0;
		NullCheck(L_5);
		AudioListener_t1564079801 * L_6 = AudioListenerExtension_get_audioListener_m1447216760(L_5, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		PropertyName_t1110829634  L_8 = AudioListener_ReadExtensionName_m4058978453(L_6, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var);
		PropertyName_t1110829634  L_9 = ((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->get_m_ListenerSpatializerExtensionName_8();
		bool L_10 = PropertyName_op_Equality_m1100584677(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0068;
		}
	}
	{
		AudioListenerExtension_t2188376730 * L_11 = ___extension0;
		NullCheck(L_11);
		AudioListener_t1564079801 * L_12 = AudioListenerExtension_get_audioListener_m1447216760(L_11, /*hidden argument*/NULL);
		int32_t L_13 = V_0;
		NullCheck(L_12);
		PropertyName_t1110829634  L_14 = AudioListener_ReadExtensionPropertyName_m2552980367(L_12, L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		AudioListenerExtension_t2188376730 * L_15 = ___extension0;
		NullCheck(L_15);
		AudioListener_t1564079801 * L_16 = AudioListenerExtension_get_audioListener_m1447216760(L_15, /*hidden argument*/NULL);
		int32_t L_17 = V_0;
		NullCheck(L_16);
		float L_18 = AudioListener_ReadExtensionPropertyValue_m3094838990(L_16, L_17, /*hidden argument*/NULL);
		V_2 = L_18;
		AudioListenerExtension_t2188376730 * L_19 = ___extension0;
		PropertyName_t1110829634  L_20 = V_1;
		float L_21 = V_2;
		NullCheck(L_19);
		VirtActionInvoker2< PropertyName_t1110829634 , float >::Invoke(4 /* System.Void UnityEngine.AudioListenerExtension::WriteExtensionProperty(UnityEngine.PropertyName,System.Single) */, L_19, L_20, L_21);
	}

IL_0068:
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_006d:
	{
		int32_t L_23 = V_0;
		AudioListenerExtension_t2188376730 * L_24 = ___extension0;
		NullCheck(L_24);
		AudioListener_t1564079801 * L_25 = AudioListenerExtension_get_audioListener_m1447216760(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		int32_t L_26 = AudioListener_GetNumExtensionProperties_m2199353043(L_25, /*hidden argument*/NULL);
		if ((((int32_t)L_23) < ((int32_t)L_26)))
		{
			goto IL_0028;
		}
	}
	{
		AudioListenerExtension_t2188376730 * L_27 = ___extension0;
		NullCheck(L_27);
		AudioListener_t1564079801 * L_28 = AudioListenerExtension_get_audioListener_m1447216760(L_27, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var);
		PropertyName_t1110829634  L_29 = ((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->get_m_ListenerSpatializerExtensionName_8();
		NullCheck(L_28);
		AudioListener_ClearExtensionProperties_m3264613977(L_28, L_29, /*hidden argument*/NULL);
		return;
	}
}
// System.Type UnityEngine.AudioExtensionManager::GetListenerSpatializerExtensionType()
extern "C"  Type_t * AudioExtensionManager_GetListenerSpatializerExtensionType_m3815343981 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionManager_GetListenerSpatializerExtensionType_m3815343981_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioSpatializerExtensionDefinition_t321807685 * V_0 = NULL;
	Enumerator_t616974933  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Type_t * V_2 = NULL;
	Exception_t1434153031 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1434153031 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var);
		List_1_t1357605577 * L_0 = ((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->get_m_ListenerSpatializerExtensionDefinitions_0();
		NullCheck(L_0);
		Enumerator_t616974933  L_1 = List_1_GetEnumerator_m3969806089(L_0, /*hidden argument*/List_1_GetEnumerator_m3969806089_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0047;
		}

IL_0012:
		{
			AudioSpatializerExtensionDefinition_t321807685 * L_2 = Enumerator_get_Current_m1768009383((&V_1), /*hidden argument*/Enumerator_get_Current_m1768009383_RuntimeMethod_var);
			V_0 = L_2;
			String_t* L_3 = AudioSettings_GetSpatializerPluginName_m351030697(NULL /*static, unused*/, /*hidden argument*/NULL);
			PropertyName_t1110829634  L_4 = PropertyName_op_Implicit_m36237779(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
			AudioSpatializerExtensionDefinition_t321807685 * L_5 = V_0;
			NullCheck(L_5);
			PropertyName_t1110829634  L_6 = L_5->get_spatializerName_0();
			bool L_7 = PropertyName_op_Equality_m1100584677(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_0046;
			}
		}

IL_0035:
		{
			AudioSpatializerExtensionDefinition_t321807685 * L_8 = V_0;
			NullCheck(L_8);
			AudioExtensionDefinition_t181799281 * L_9 = L_8->get_definition_1();
			NullCheck(L_9);
			Type_t * L_10 = AudioExtensionDefinition_GetExtensionType_m247150428(L_9, /*hidden argument*/NULL);
			V_2 = L_10;
			IL2CPP_LEAVE(0x6D, FINALLY_0058);
		}

IL_0046:
		{
		}

IL_0047:
		{
			bool L_11 = Enumerator_MoveNext_m339398266((&V_1), /*hidden argument*/Enumerator_MoveNext_m339398266_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_0012;
			}
		}

IL_0053:
		{
			IL2CPP_LEAVE(0x66, FINALLY_0058);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1434153031 *)e.ex;
		goto FINALLY_0058;
	}

FINALLY_0058:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m966255976((&V_1), /*hidden argument*/Enumerator_Dispose_m966255976_RuntimeMethod_var);
		IL2CPP_END_FINALLY(88)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(88)
	{
		IL2CPP_JUMP_TBL(0x6D, IL_006d)
		IL2CPP_JUMP_TBL(0x66, IL_0066)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1434153031 *)
	}

IL_0066:
	{
		V_2 = (Type_t *)NULL;
		goto IL_006d;
	}

IL_006d:
	{
		Type_t * L_12 = V_2;
		return L_12;
	}
}
// System.Type UnityEngine.AudioExtensionManager::GetListenerSpatializerExtensionEditorType()
extern "C"  Type_t * AudioExtensionManager_GetListenerSpatializerExtensionEditorType_m1868381940 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionManager_GetListenerSpatializerExtensionEditorType_m1868381940_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioSpatializerExtensionDefinition_t321807685 * V_0 = NULL;
	Enumerator_t616974933  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Type_t * V_2 = NULL;
	Exception_t1434153031 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1434153031 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var);
		List_1_t1357605577 * L_0 = ((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->get_m_ListenerSpatializerExtensionDefinitions_0();
		NullCheck(L_0);
		Enumerator_t616974933  L_1 = List_1_GetEnumerator_m3969806089(L_0, /*hidden argument*/List_1_GetEnumerator_m3969806089_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0047;
		}

IL_0012:
		{
			AudioSpatializerExtensionDefinition_t321807685 * L_2 = Enumerator_get_Current_m1768009383((&V_1), /*hidden argument*/Enumerator_get_Current_m1768009383_RuntimeMethod_var);
			V_0 = L_2;
			String_t* L_3 = AudioSettings_GetSpatializerPluginName_m351030697(NULL /*static, unused*/, /*hidden argument*/NULL);
			PropertyName_t1110829634  L_4 = PropertyName_op_Implicit_m36237779(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
			AudioSpatializerExtensionDefinition_t321807685 * L_5 = V_0;
			NullCheck(L_5);
			PropertyName_t1110829634  L_6 = L_5->get_spatializerName_0();
			bool L_7 = PropertyName_op_Equality_m1100584677(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_0046;
			}
		}

IL_0035:
		{
			AudioSpatializerExtensionDefinition_t321807685 * L_8 = V_0;
			NullCheck(L_8);
			AudioExtensionDefinition_t181799281 * L_9 = L_8->get_editorDefinition_2();
			NullCheck(L_9);
			Type_t * L_10 = AudioExtensionDefinition_GetExtensionType_m247150428(L_9, /*hidden argument*/NULL);
			V_2 = L_10;
			IL2CPP_LEAVE(0x6D, FINALLY_0058);
		}

IL_0046:
		{
		}

IL_0047:
		{
			bool L_11 = Enumerator_MoveNext_m339398266((&V_1), /*hidden argument*/Enumerator_MoveNext_m339398266_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_0012;
			}
		}

IL_0053:
		{
			IL2CPP_LEAVE(0x66, FINALLY_0058);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1434153031 *)e.ex;
		goto FINALLY_0058;
	}

FINALLY_0058:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m966255976((&V_1), /*hidden argument*/Enumerator_Dispose_m966255976_RuntimeMethod_var);
		IL2CPP_END_FINALLY(88)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(88)
	{
		IL2CPP_JUMP_TBL(0x6D, IL_006d)
		IL2CPP_JUMP_TBL(0x66, IL_0066)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1434153031 *)
	}

IL_0066:
	{
		V_2 = (Type_t *)NULL;
		goto IL_006d;
	}

IL_006d:
	{
		Type_t * L_12 = V_2;
		return L_12;
	}
}
// System.Type UnityEngine.AudioExtensionManager::GetSourceSpatializerExtensionType()
extern "C"  Type_t * AudioExtensionManager_GetSourceSpatializerExtensionType_m2752168269 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionManager_GetSourceSpatializerExtensionType_m2752168269_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioSpatializerExtensionDefinition_t321807685 * V_0 = NULL;
	Enumerator_t616974933  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Type_t * V_2 = NULL;
	Exception_t1434153031 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1434153031 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var);
		List_1_t1357605577 * L_0 = ((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->get_m_SourceSpatializerExtensionDefinitions_1();
		NullCheck(L_0);
		Enumerator_t616974933  L_1 = List_1_GetEnumerator_m3969806089(L_0, /*hidden argument*/List_1_GetEnumerator_m3969806089_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0047;
		}

IL_0012:
		{
			AudioSpatializerExtensionDefinition_t321807685 * L_2 = Enumerator_get_Current_m1768009383((&V_1), /*hidden argument*/Enumerator_get_Current_m1768009383_RuntimeMethod_var);
			V_0 = L_2;
			String_t* L_3 = AudioSettings_GetSpatializerPluginName_m351030697(NULL /*static, unused*/, /*hidden argument*/NULL);
			PropertyName_t1110829634  L_4 = PropertyName_op_Implicit_m36237779(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
			AudioSpatializerExtensionDefinition_t321807685 * L_5 = V_0;
			NullCheck(L_5);
			PropertyName_t1110829634  L_6 = L_5->get_spatializerName_0();
			bool L_7 = PropertyName_op_Equality_m1100584677(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_0046;
			}
		}

IL_0035:
		{
			AudioSpatializerExtensionDefinition_t321807685 * L_8 = V_0;
			NullCheck(L_8);
			AudioExtensionDefinition_t181799281 * L_9 = L_8->get_definition_1();
			NullCheck(L_9);
			Type_t * L_10 = AudioExtensionDefinition_GetExtensionType_m247150428(L_9, /*hidden argument*/NULL);
			V_2 = L_10;
			IL2CPP_LEAVE(0x6D, FINALLY_0058);
		}

IL_0046:
		{
		}

IL_0047:
		{
			bool L_11 = Enumerator_MoveNext_m339398266((&V_1), /*hidden argument*/Enumerator_MoveNext_m339398266_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_0012;
			}
		}

IL_0053:
		{
			IL2CPP_LEAVE(0x66, FINALLY_0058);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1434153031 *)e.ex;
		goto FINALLY_0058;
	}

FINALLY_0058:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m966255976((&V_1), /*hidden argument*/Enumerator_Dispose_m966255976_RuntimeMethod_var);
		IL2CPP_END_FINALLY(88)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(88)
	{
		IL2CPP_JUMP_TBL(0x6D, IL_006d)
		IL2CPP_JUMP_TBL(0x66, IL_0066)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1434153031 *)
	}

IL_0066:
	{
		V_2 = (Type_t *)NULL;
		goto IL_006d;
	}

IL_006d:
	{
		Type_t * L_12 = V_2;
		return L_12;
	}
}
// System.Void UnityEngine.AudioExtensionManager::AddExtensionToManager(UnityEngine.AudioSourceExtension)
extern "C"  void AudioExtensionManager_AddExtensionToManager_m3037816188 (RuntimeObject * __this /* static, unused */, AudioSourceExtension_t1086723751 * ___extension0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionManager_AddExtensionToManager_m3037816188_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var);
		AudioExtensionManager_RegisterBuiltinDefinitions_m1303242357(NULL /*static, unused*/, /*hidden argument*/NULL);
		AudioSourceExtension_t1086723751 * L_0 = ___extension0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_m_ExtensionManagerUpdateIndex_3();
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0031;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var);
		List_1_t2122521643 * L_2 = ((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		AudioSourceExtension_t1086723751 * L_3 = ___extension0;
		NullCheck(L_2);
		List_1_Add_m4269840472(L_2, L_3, /*hidden argument*/List_1_Add_m4269840472_RuntimeMethod_var);
		AudioSourceExtension_t1086723751 * L_4 = ___extension0;
		List_1_t2122521643 * L_5 = ((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		NullCheck(L_5);
		int32_t L_6 = List_1_get_Count_m2792579889(L_5, /*hidden argument*/List_1_get_Count_m2792579889_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->set_m_ExtensionManagerUpdateIndex_3(((int32_t)((int32_t)L_6-(int32_t)1)));
	}

IL_0031:
	{
		return;
	}
}
// System.Void UnityEngine.AudioExtensionManager::RemoveExtensionFromManager(UnityEngine.AudioSourceExtension)
extern "C"  void AudioExtensionManager_RemoveExtensionFromManager_m4025922535 (RuntimeObject * __this /* static, unused */, AudioSourceExtension_t1086723751 * ___extension0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionManager_RemoveExtensionFromManager_m4025922535_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		AudioSourceExtension_t1086723751 * L_0 = ___extension0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_m_ExtensionManagerUpdateIndex_3();
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var);
		List_1_t2122521643 * L_4 = ((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		NullCheck(L_4);
		int32_t L_5 = List_1_get_Count_m2792579889(L_4, /*hidden argument*/List_1_get_Count_m2792579889_RuntimeMethod_var);
		if ((((int32_t)L_3) >= ((int32_t)L_5)))
		{
			goto IL_0060;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var);
		List_1_t2122521643 * L_6 = ((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		NullCheck(L_6);
		int32_t L_7 = List_1_get_Count_m2792579889(L_6, /*hidden argument*/List_1_get_Count_m2792579889_RuntimeMethod_var);
		V_1 = ((int32_t)((int32_t)L_7-(int32_t)1));
		List_1_t2122521643 * L_8 = ((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		int32_t L_9 = V_0;
		List_1_t2122521643 * L_10 = ((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		int32_t L_11 = V_1;
		NullCheck(L_10);
		AudioSourceExtension_t1086723751 * L_12 = List_1_get_Item_m2802060983(L_10, L_11, /*hidden argument*/List_1_get_Item_m2802060983_RuntimeMethod_var);
		NullCheck(L_8);
		List_1_set_Item_m3783632087(L_8, L_9, L_12, /*hidden argument*/List_1_set_Item_m3783632087_RuntimeMethod_var);
		List_1_t2122521643 * L_13 = ((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		int32_t L_14 = V_0;
		NullCheck(L_13);
		AudioSourceExtension_t1086723751 * L_15 = List_1_get_Item_m2802060983(L_13, L_14, /*hidden argument*/List_1_get_Item_m2802060983_RuntimeMethod_var);
		int32_t L_16 = V_0;
		NullCheck(L_15);
		L_15->set_m_ExtensionManagerUpdateIndex_3(L_16);
		List_1_t2122521643 * L_17 = ((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		int32_t L_18 = V_1;
		NullCheck(L_17);
		List_1_RemoveAt_m3100685645(L_17, L_18, /*hidden argument*/List_1_RemoveAt_m3100685645_RuntimeMethod_var);
	}

IL_0060:
	{
		AudioSourceExtension_t1086723751 * L_19 = ___extension0;
		NullCheck(L_19);
		L_19->set_m_ExtensionManagerUpdateIndex_3((-1));
		return;
	}
}
// System.Void UnityEngine.AudioExtensionManager::Update()
extern "C"  void AudioExtensionManager_Update_m2593150679 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionManager_Update_m2593150679_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioListener_t1564079801 * V_0 = NULL;
	AudioListenerExtension_t2188376730 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	AudioSourceExtension_t1086723751 * V_5 = NULL;
	int32_t G_B16_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B27_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var);
		AudioExtensionManager_RegisterBuiltinDefinitions_m1303242357(NULL /*static, unused*/, /*hidden argument*/NULL);
		PropertyName_t1110829634  L_0 = ((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->get_m_SpatializerName_6();
		String_t* L_1 = AudioSettings_GetSpatializerPluginName_m351030697(NULL /*static, unused*/, /*hidden argument*/NULL);
		PropertyName_t1110829634  L_2 = PropertyName_op_Implicit_m36237779(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		bool L_3 = PropertyName_op_Inequality_m4086853130(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_006c;
		}
	}
	{
		String_t* L_4 = AudioSettings_GetSpatializerPluginName_m351030697(NULL /*static, unused*/, /*hidden argument*/NULL);
		PropertyName_t1110829634  L_5 = PropertyName_op_Implicit_m36237779(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var);
		((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->set_m_SpatializerName_6(L_5);
		Type_t * L_6 = AudioExtensionManager_GetSourceSpatializerExtensionType_m2752168269(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var);
		Type_t * L_7 = AudioExtensionManager_GetSourceSpatializerExtensionType_m2752168269(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_7);
		PropertyName_t1110829634  L_9 = PropertyName_op_Implicit_m36237779(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->set_m_SpatializerExtensionName_7(L_9);
	}

IL_004d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var);
		Type_t * L_10 = AudioExtensionManager_GetListenerSpatializerExtensionEditorType_m1868381940(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_006b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var);
		Type_t * L_11 = AudioExtensionManager_GetListenerSpatializerExtensionType_m3815343981(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_12 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_11);
		PropertyName_t1110829634  L_13 = PropertyName_op_Implicit_m36237779(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->set_m_ListenerSpatializerExtensionName_8(L_13);
	}

IL_006b:
	{
	}

IL_006c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var);
		Object_t3504644959 * L_14 = AudioExtensionManager_GetAudioListener_m2984758945(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = ((AudioListener_t1564079801 *)IsInstSealed((RuntimeObject*)L_14, AudioListener_t1564079801_il2cpp_TypeInfo_var));
		AudioListener_t1564079801 * L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3504644959_il2cpp_TypeInfo_var);
		bool L_16 = Object_op_Inequality_m1843775054(NULL /*static, unused*/, L_15, (Object_t3504644959 *)NULL, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_009e;
		}
	}
	{
		AudioListener_t1564079801 * L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var);
		AudioListenerExtension_t2188376730 * L_18 = AudioExtensionManager_AddSpatializerExtension_m3656995944(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		V_1 = L_18;
		AudioListenerExtension_t2188376730 * L_19 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3504644959_il2cpp_TypeInfo_var);
		bool L_20 = Object_op_Inequality_m1843775054(NULL /*static, unused*/, L_19, (Object_t3504644959 *)NULL, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_009d;
		}
	}
	{
		AudioListenerExtension_t2188376730 * L_21 = V_1;
		NullCheck(L_21);
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.AudioListenerExtension::ExtensionUpdate() */, L_21);
	}

IL_009d:
	{
	}

IL_009e:
	{
		V_2 = 0;
		goto IL_00b9;
	}

IL_00a5:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var);
		List_1_t2122521643 * L_22 = ((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		int32_t L_23 = V_2;
		NullCheck(L_22);
		AudioSourceExtension_t1086723751 * L_24 = List_1_get_Item_m2802060983(L_22, L_23, /*hidden argument*/List_1_get_Item_m2802060983_RuntimeMethod_var);
		NullCheck(L_24);
		VirtActionInvoker0::Invoke(7 /* System.Void UnityEngine.AudioSourceExtension::ExtensionUpdate() */, L_24);
		int32_t L_25 = V_2;
		V_2 = ((int32_t)((int32_t)L_25+(int32_t)1));
	}

IL_00b9:
	{
		int32_t L_26 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var);
		List_1_t2122521643 * L_27 = ((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		NullCheck(L_27);
		int32_t L_28 = List_1_get_Count_m2792579889(L_27, /*hidden argument*/List_1_get_Count_m2792579889_RuntimeMethod_var);
		if ((((int32_t)L_26) < ((int32_t)L_28)))
		{
			goto IL_00a5;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var);
		int32_t L_29 = ((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->get_m_NextStopIndex_4();
		List_1_t2122521643 * L_30 = ((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		NullCheck(L_30);
		int32_t L_31 = List_1_get_Count_m2792579889(L_30, /*hidden argument*/List_1_get_Count_m2792579889_RuntimeMethod_var);
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_00e3;
		}
	}
	{
		G_B16_0 = 0;
		goto IL_00e8;
	}

IL_00e3:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var);
		int32_t L_32 = ((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->get_m_NextStopIndex_4();
		G_B16_0 = L_32;
	}

IL_00e8:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var);
		((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->set_m_NextStopIndex_4(G_B16_0);
		List_1_t2122521643 * L_33 = ((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		NullCheck(L_33);
		int32_t L_34 = List_1_get_Count_m2792579889(L_33, /*hidden argument*/List_1_get_Count_m2792579889_RuntimeMethod_var);
		if ((((int32_t)L_34) <= ((int32_t)0)))
		{
			goto IL_0110;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var);
		List_1_t2122521643 * L_35 = ((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		NullCheck(L_35);
		int32_t L_36 = List_1_get_Count_m2792579889(L_35, /*hidden argument*/List_1_get_Count_m2792579889_RuntimeMethod_var);
		G_B19_0 = ((int32_t)((int32_t)1+(int32_t)((int32_t)((int32_t)L_36/(int32_t)8))));
		goto IL_0111;
	}

IL_0110:
	{
		G_B19_0 = 0;
	}

IL_0111:
	{
		V_3 = G_B19_0;
		V_4 = 0;
		goto IL_01ae;
	}

IL_011a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var);
		List_1_t2122521643 * L_37 = ((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		int32_t L_38 = ((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->get_m_NextStopIndex_4();
		NullCheck(L_37);
		AudioSourceExtension_t1086723751 * L_39 = List_1_get_Item_m2802060983(L_37, L_38, /*hidden argument*/List_1_get_Item_m2802060983_RuntimeMethod_var);
		V_5 = L_39;
		AudioSourceExtension_t1086723751 * L_40 = V_5;
		NullCheck(L_40);
		AudioSource_t1881938766 * L_41 = AudioSourceExtension_get_audioSource_m247067304(L_40, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3504644959_il2cpp_TypeInfo_var);
		bool L_42 = Object_op_Equality_m999146850(NULL /*static, unused*/, L_41, (Object_t3504644959 *)NULL, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_0160;
		}
	}
	{
		AudioSourceExtension_t1086723751 * L_43 = V_5;
		NullCheck(L_43);
		AudioSource_t1881938766 * L_44 = AudioSourceExtension_get_audioSource_m247067304(L_43, /*hidden argument*/NULL);
		NullCheck(L_44);
		bool L_45 = Behaviour_get_enabled_m2062246596(L_44, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_0160;
		}
	}
	{
		AudioSourceExtension_t1086723751 * L_46 = V_5;
		NullCheck(L_46);
		AudioSource_t1881938766 * L_47 = AudioSourceExtension_get_audioSource_m247067304(L_46, /*hidden argument*/NULL);
		NullCheck(L_47);
		bool L_48 = AudioSource_get_isPlaying_m2862884913(L_47, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0175;
		}
	}

IL_0160:
	{
		AudioSourceExtension_t1086723751 * L_49 = V_5;
		NullCheck(L_49);
		VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.AudioSourceExtension::Stop() */, L_49);
		AudioSourceExtension_t1086723751 * L_50 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var);
		AudioExtensionManager_RemoveExtensionFromManager_m4025922535(NULL /*static, unused*/, L_50, /*hidden argument*/NULL);
		goto IL_01a7;
	}

IL_0175:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var);
		int32_t L_51 = ((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->get_m_NextStopIndex_4();
		((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->set_m_NextStopIndex_4(((int32_t)((int32_t)L_51+(int32_t)1)));
		int32_t L_52 = ((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->get_m_NextStopIndex_4();
		List_1_t2122521643 * L_53 = ((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		NullCheck(L_53);
		int32_t L_54 = List_1_get_Count_m2792579889(L_53, /*hidden argument*/List_1_get_Count_m2792579889_RuntimeMethod_var);
		if ((((int32_t)L_52) < ((int32_t)L_54)))
		{
			goto IL_019c;
		}
	}
	{
		G_B27_0 = 0;
		goto IL_01a1;
	}

IL_019c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var);
		int32_t L_55 = ((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->get_m_NextStopIndex_4();
		G_B27_0 = L_55;
	}

IL_01a1:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var);
		((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->set_m_NextStopIndex_4(G_B27_0);
	}

IL_01a7:
	{
		int32_t L_56 = V_4;
		V_4 = ((int32_t)((int32_t)L_56+(int32_t)1));
	}

IL_01ae:
	{
		int32_t L_57 = V_4;
		int32_t L_58 = V_3;
		if ((((int32_t)L_57) < ((int32_t)L_58)))
		{
			goto IL_011a;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.AudioExtensionManager::GetReadyToPlay(UnityEngine.AudioSourceExtension)
extern "C"  void AudioExtensionManager_GetReadyToPlay_m1899384901 (RuntimeObject * __this /* static, unused */, AudioSourceExtension_t1086723751 * ___extension0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionManager_GetReadyToPlay_m1899384901_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioSourceExtension_t1086723751 * L_0 = ___extension0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3504644959_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m1843775054(NULL /*static, unused*/, L_0, (Object_t3504644959 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		AudioSourceExtension_t1086723751 * L_2 = ___extension0;
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.AudioSourceExtension::Play() */, L_2);
		AudioSourceExtension_t1086723751 * L_3 = ___extension0;
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var);
		AudioExtensionManager_AddExtensionToManager_m3037816188(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityEngine.AudioExtensionManager::RegisterBuiltinDefinitions()
extern "C"  void AudioExtensionManager_RegisterBuiltinDefinitions_m1303242357 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionManager_RegisterBuiltinDefinitions_m1303242357_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		V_0 = (bool)0;
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var);
		bool L_0 = ((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->get_m_BuiltinDefinitionsRegistered_5();
		if (L_0)
		{
			goto IL_004d;
		}
	}
	{
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_2 = AudioSettings_GetSpatializerPluginName_m351030697(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m850358749(NULL /*static, unused*/, L_2, _stringLiteral1493103067, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}

IL_0028:
	{
	}

IL_002a:
	{
		bool L_4 = V_0;
		if (L_4)
		{
			goto IL_0044;
		}
	}
	{
		String_t* L_5 = AudioSettings_GetAmbisonicDecoderPluginName_m2224992849(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m850358749(NULL /*static, unused*/, L_5, _stringLiteral1493103067, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0046;
		}
	}

IL_0044:
	{
	}

IL_0046:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var);
		((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->set_m_BuiltinDefinitionsRegistered_5((bool)1);
	}

IL_004d:
	{
		return;
	}
}
// System.Void UnityEngine.AudioExtensionManager::.cctor()
extern "C"  void AudioExtensionManager__cctor_m1395709139 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionManager__cctor_m1395709139_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t1357605577 * L_0 = (List_1_t1357605577 *)il2cpp_codegen_object_new(List_1_t1357605577_il2cpp_TypeInfo_var);
		List_1__ctor_m3096134389(L_0, /*hidden argument*/List_1__ctor_m3096134389_RuntimeMethod_var);
		((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->set_m_ListenerSpatializerExtensionDefinitions_0(L_0);
		List_1_t1357605577 * L_1 = (List_1_t1357605577 *)il2cpp_codegen_object_new(List_1_t1357605577_il2cpp_TypeInfo_var);
		List_1__ctor_m3096134389(L_1, /*hidden argument*/List_1__ctor_m3096134389_RuntimeMethod_var);
		((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->set_m_SourceSpatializerExtensionDefinitions_1(L_1);
		List_1_t852232238 * L_2 = (List_1_t852232238 *)il2cpp_codegen_object_new(List_1_t852232238_il2cpp_TypeInfo_var);
		List_1__ctor_m529932159(L_2, /*hidden argument*/List_1__ctor_m529932159_RuntimeMethod_var);
		((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->set_m_SourceAmbisonicDecoderExtensionDefinitions_2(L_2);
		List_1_t2122521643 * L_3 = (List_1_t2122521643 *)il2cpp_codegen_object_new(List_1_t2122521643_il2cpp_TypeInfo_var);
		List_1__ctor_m2170804072(L_3, /*hidden argument*/List_1__ctor_m2170804072_RuntimeMethod_var);
		((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->set_m_SourceExtensionsToUpdate_3(L_3);
		((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->set_m_NextStopIndex_4(0);
		((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->set_m_BuiltinDefinitionsRegistered_5((bool)0);
		PropertyName_t1110829634  L_4 = PropertyName_op_Implicit_m390534942(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->set_m_SpatializerName_6(L_4);
		PropertyName_t1110829634  L_5 = PropertyName_op_Implicit_m390534942(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->set_m_SpatializerExtensionName_7(L_5);
		PropertyName_t1110829634  L_6 = PropertyName_op_Implicit_m390534942(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		((AudioExtensionManager_t4272479908_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var))->set_m_ListenerSpatializerExtensionName_8(L_6);
		return;
	}
}
// System.Int32 UnityEngine.AudioListener::GetNumExtensionProperties()
extern "C"  int32_t AudioListener_GetNumExtensionProperties_m2199353043 (AudioListener_t1564079801 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*AudioListener_GetNumExtensionProperties_m2199353043_ftn) (AudioListener_t1564079801 *);
	static AudioListener_GetNumExtensionProperties_m2199353043_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioListener_GetNumExtensionProperties_m2199353043_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioListener::GetNumExtensionProperties()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.PropertyName UnityEngine.AudioListener::ReadExtensionName(System.Int32)
extern "C"  PropertyName_t1110829634  AudioListener_ReadExtensionName_m4058978453 (AudioListener_t1564079801 * __this, int32_t ___listenerIndex0, const RuntimeMethod* method)
{
	PropertyName_t1110829634  V_0;
	memset(&V_0, 0, sizeof(V_0));
	PropertyName_t1110829634  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = ___listenerIndex0;
		AudioListener_INTERNAL_CALL_ReadExtensionName_m160712257(NULL /*static, unused*/, __this, L_0, (&V_0), /*hidden argument*/NULL);
		PropertyName_t1110829634  L_1 = V_0;
		V_1 = L_1;
		goto IL_0011;
	}

IL_0011:
	{
		PropertyName_t1110829634  L_2 = V_1;
		return L_2;
	}
}
// System.Void UnityEngine.AudioListener::INTERNAL_CALL_ReadExtensionName(UnityEngine.AudioListener,System.Int32,UnityEngine.PropertyName&)
extern "C"  void AudioListener_INTERNAL_CALL_ReadExtensionName_m160712257 (RuntimeObject * __this /* static, unused */, AudioListener_t1564079801 * ___self0, int32_t ___listenerIndex1, PropertyName_t1110829634 * ___value2, const RuntimeMethod* method)
{
	typedef void (*AudioListener_INTERNAL_CALL_ReadExtensionName_m160712257_ftn) (AudioListener_t1564079801 *, int32_t, PropertyName_t1110829634 *);
	static AudioListener_INTERNAL_CALL_ReadExtensionName_m160712257_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioListener_INTERNAL_CALL_ReadExtensionName_m160712257_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioListener::INTERNAL_CALL_ReadExtensionName(UnityEngine.AudioListener,System.Int32,UnityEngine.PropertyName&)");
	_il2cpp_icall_func(___self0, ___listenerIndex1, ___value2);
}
// UnityEngine.PropertyName UnityEngine.AudioListener::ReadExtensionPropertyName(System.Int32)
extern "C"  PropertyName_t1110829634  AudioListener_ReadExtensionPropertyName_m2552980367 (AudioListener_t1564079801 * __this, int32_t ___listenerIndex0, const RuntimeMethod* method)
{
	PropertyName_t1110829634  V_0;
	memset(&V_0, 0, sizeof(V_0));
	PropertyName_t1110829634  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = ___listenerIndex0;
		AudioListener_INTERNAL_CALL_ReadExtensionPropertyName_m3132704040(NULL /*static, unused*/, __this, L_0, (&V_0), /*hidden argument*/NULL);
		PropertyName_t1110829634  L_1 = V_0;
		V_1 = L_1;
		goto IL_0011;
	}

IL_0011:
	{
		PropertyName_t1110829634  L_2 = V_1;
		return L_2;
	}
}
// System.Void UnityEngine.AudioListener::INTERNAL_CALL_ReadExtensionPropertyName(UnityEngine.AudioListener,System.Int32,UnityEngine.PropertyName&)
extern "C"  void AudioListener_INTERNAL_CALL_ReadExtensionPropertyName_m3132704040 (RuntimeObject * __this /* static, unused */, AudioListener_t1564079801 * ___self0, int32_t ___listenerIndex1, PropertyName_t1110829634 * ___value2, const RuntimeMethod* method)
{
	typedef void (*AudioListener_INTERNAL_CALL_ReadExtensionPropertyName_m3132704040_ftn) (AudioListener_t1564079801 *, int32_t, PropertyName_t1110829634 *);
	static AudioListener_INTERNAL_CALL_ReadExtensionPropertyName_m3132704040_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioListener_INTERNAL_CALL_ReadExtensionPropertyName_m3132704040_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioListener::INTERNAL_CALL_ReadExtensionPropertyName(UnityEngine.AudioListener,System.Int32,UnityEngine.PropertyName&)");
	_il2cpp_icall_func(___self0, ___listenerIndex1, ___value2);
}
// System.Single UnityEngine.AudioListener::ReadExtensionPropertyValue(System.Int32)
extern "C"  float AudioListener_ReadExtensionPropertyValue_m3094838990 (AudioListener_t1564079801 * __this, int32_t ___listenerIndex0, const RuntimeMethod* method)
{
	typedef float (*AudioListener_ReadExtensionPropertyValue_m3094838990_ftn) (AudioListener_t1564079801 *, int32_t);
	static AudioListener_ReadExtensionPropertyValue_m3094838990_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioListener_ReadExtensionPropertyValue_m3094838990_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioListener::ReadExtensionPropertyValue(System.Int32)");
	float retVal = _il2cpp_icall_func(__this, ___listenerIndex0);
	return retVal;
}
// System.Void UnityEngine.AudioListener::ClearExtensionProperties(UnityEngine.PropertyName)
extern "C"  void AudioListener_ClearExtensionProperties_m3264613977 (AudioListener_t1564079801 * __this, PropertyName_t1110829634  ___extensionName0, const RuntimeMethod* method)
{
	{
		AudioListener_INTERNAL_CALL_ClearExtensionProperties_m614887614(NULL /*static, unused*/, __this, (&___extensionName0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AudioListener::INTERNAL_CALL_ClearExtensionProperties(UnityEngine.AudioListener,UnityEngine.PropertyName&)
extern "C"  void AudioListener_INTERNAL_CALL_ClearExtensionProperties_m614887614 (RuntimeObject * __this /* static, unused */, AudioListener_t1564079801 * ___self0, PropertyName_t1110829634 * ___extensionName1, const RuntimeMethod* method)
{
	typedef void (*AudioListener_INTERNAL_CALL_ClearExtensionProperties_m614887614_ftn) (AudioListener_t1564079801 *, PropertyName_t1110829634 *);
	static AudioListener_INTERNAL_CALL_ClearExtensionProperties_m614887614_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioListener_INTERNAL_CALL_ClearExtensionProperties_m614887614_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioListener::INTERNAL_CALL_ClearExtensionProperties(UnityEngine.AudioListener,UnityEngine.PropertyName&)");
	_il2cpp_icall_func(___self0, ___extensionName1);
}
// UnityEngine.AudioListenerExtension UnityEngine.AudioListener::AddExtension(System.Type)
extern "C"  AudioListenerExtension_t2188376730 * AudioListener_AddExtension_m2190467448 (AudioListener_t1564079801 * __this, Type_t * ___extensionType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioListener_AddExtension_m2190467448_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioListenerExtension_t2188376730 * V_0 = NULL;
	{
		AudioListenerExtension_t2188376730 * L_0 = __this->get_spatializerExtension_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3504644959_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m999146850(NULL /*static, unused*/, L_0, (Object_t3504644959 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Type_t * L_2 = ___extensionType0;
		ScriptableObject_t4256469858 * L_3 = ScriptableObject_CreateInstance_m2052122103(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->set_spatializerExtension_2(((AudioListenerExtension_t2188376730 *)IsInstClass((RuntimeObject*)L_3, AudioListenerExtension_t2188376730_il2cpp_TypeInfo_var)));
	}

IL_0025:
	{
		AudioListenerExtension_t2188376730 * L_4 = __this->get_spatializerExtension_2();
		V_0 = L_4;
		goto IL_0031;
	}

IL_0031:
	{
		AudioListenerExtension_t2188376730 * L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.AudioListener UnityEngine.AudioListenerExtension::get_audioListener()
extern "C"  AudioListener_t1564079801 * AudioListenerExtension_get_audioListener_m1447216760 (AudioListenerExtension_t2188376730 * __this, const RuntimeMethod* method)
{
	AudioListener_t1564079801 * V_0 = NULL;
	{
		AudioListener_t1564079801 * L_0 = __this->get_m_audioListener_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		AudioListener_t1564079801 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.AudioListenerExtension::set_audioListener(UnityEngine.AudioListener)
extern "C"  void AudioListenerExtension_set_audioListener_m1490483160 (AudioListenerExtension_t2188376730 * __this, AudioListener_t1564079801 * ___value0, const RuntimeMethod* method)
{
	{
		AudioListener_t1564079801 * L_0 = ___value0;
		__this->set_m_audioListener_2(L_0);
		return;
	}
}
// System.Void UnityEngine.AudioListenerExtension::WriteExtensionProperty(UnityEngine.PropertyName,System.Single)
extern "C"  void AudioListenerExtension_WriteExtensionProperty_m1411025383 (AudioListenerExtension_t2188376730 * __this, PropertyName_t1110829634  ___propertyName0, float ___propertyValue1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.AudioListenerExtension::ExtensionUpdate()
extern "C"  void AudioListenerExtension_ExtensionUpdate_m2651813007 (AudioListenerExtension_t2188376730 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Double UnityEngine.AudioSettings::get_dspTime()
extern "C"  double AudioSettings_get_dspTime_m2747045145 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef double (*AudioSettings_get_dspTime_m2747045145_ftn) ();
	static AudioSettings_get_dspTime_m2747045145_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSettings_get_dspTime_m2747045145_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSettings::get_dspTime()");
	double retVal = _il2cpp_icall_func();
	return retVal;
}
// System.String UnityEngine.AudioSettings::GetSpatializerPluginName()
extern "C"  String_t* AudioSettings_GetSpatializerPluginName_m351030697 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef String_t* (*AudioSettings_GetSpatializerPluginName_m351030697_ftn) ();
	static AudioSettings_GetSpatializerPluginName_m351030697_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSettings_GetSpatializerPluginName_m351030697_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSettings::GetSpatializerPluginName()");
	String_t* retVal = _il2cpp_icall_func();
	return retVal;
}
// UnityEngine.AudioConfiguration UnityEngine.AudioSettings::GetConfiguration()
extern "C"  AudioConfiguration_t2443350749  AudioSettings_GetConfiguration_m1036304670 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	AudioConfiguration_t2443350749  V_0;
	memset(&V_0, 0, sizeof(V_0));
	AudioConfiguration_t2443350749  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		AudioSettings_INTERNAL_CALL_GetConfiguration_m3874171611(NULL /*static, unused*/, (&V_0), /*hidden argument*/NULL);
		AudioConfiguration_t2443350749  L_0 = V_0;
		V_1 = L_0;
		goto IL_000f;
	}

IL_000f:
	{
		AudioConfiguration_t2443350749  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.AudioSettings::INTERNAL_CALL_GetConfiguration(UnityEngine.AudioConfiguration&)
extern "C"  void AudioSettings_INTERNAL_CALL_GetConfiguration_m3874171611 (RuntimeObject * __this /* static, unused */, AudioConfiguration_t2443350749 * ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSettings_INTERNAL_CALL_GetConfiguration_m3874171611_ftn) (AudioConfiguration_t2443350749 *);
	static AudioSettings_INTERNAL_CALL_GetConfiguration_m3874171611_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSettings_INTERNAL_CALL_GetConfiguration_m3874171611_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSettings::INTERNAL_CALL_GetConfiguration(UnityEngine.AudioConfiguration&)");
	_il2cpp_icall_func(___value0);
}
// System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean)
extern "C"  void AudioSettings_InvokeOnAudioConfigurationChanged_m3543347177 (RuntimeObject * __this /* static, unused */, bool ___deviceWasChanged0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioSettings_InvokeOnAudioConfigurationChanged_m3543347177_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioConfigurationChangeHandler_t3767123146 * L_0 = ((AudioSettings_t4103728833_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t4103728833_il2cpp_TypeInfo_var))->get_OnAudioConfigurationChanged_0();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		AudioConfigurationChangeHandler_t3767123146 * L_1 = ((AudioSettings_t4103728833_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t4103728833_il2cpp_TypeInfo_var))->get_OnAudioConfigurationChanged_0();
		bool L_2 = ___deviceWasChanged0;
		NullCheck(L_1);
		AudioConfigurationChangeHandler_Invoke_m3495609342(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void UnityEngine.AudioSettings::InvokeOnAudioManagerUpdate()
extern "C"  void AudioSettings_InvokeOnAudioManagerUpdate_m1115812373 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioSettings_InvokeOnAudioManagerUpdate_m1115812373_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var);
		AudioExtensionManager_Update_m2593150679(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AudioSettings::InvokeOnAudioSourcePlay(UnityEngine.AudioSource)
extern "C"  void AudioSettings_InvokeOnAudioSourcePlay_m1625090565 (RuntimeObject * __this /* static, unused */, AudioSource_t1881938766 * ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioSettings_InvokeOnAudioSourcePlay_m1625090565_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioSourceExtension_t1086723751 * V_0 = NULL;
	AudioSourceExtension_t1086723751 * V_1 = NULL;
	{
		AudioSource_t1881938766 * L_0 = ___source0;
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var);
		AudioSourceExtension_t1086723751 * L_1 = AudioExtensionManager_AddSpatializerExtension_m482220115(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		AudioSourceExtension_t1086723751 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3504644959_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m1843775054(NULL /*static, unused*/, L_2, (Object_t3504644959 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		AudioSourceExtension_t1086723751 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var);
		AudioExtensionManager_GetReadyToPlay_m1899384901(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_001a:
	{
		AudioSource_t1881938766 * L_5 = ___source0;
		NullCheck(L_5);
		AudioClip_t3505022932 * L_6 = AudioSource_get_clip_m4270278987(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3504644959_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m1843775054(NULL /*static, unused*/, L_6, (Object_t3504644959 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		AudioSource_t1881938766 * L_8 = ___source0;
		NullCheck(L_8);
		AudioClip_t3505022932 * L_9 = AudioSource_get_clip_m4270278987(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		bool L_10 = AudioClip_get_ambisonic_m3497335091(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0056;
		}
	}
	{
		AudioSource_t1881938766 * L_11 = ___source0;
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var);
		AudioSourceExtension_t1086723751 * L_12 = AudioExtensionManager_AddAmbisonicDecoderExtension_m2400674341(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		AudioSourceExtension_t1086723751 * L_13 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3504644959_il2cpp_TypeInfo_var);
		bool L_14 = Object_op_Inequality_m1843775054(NULL /*static, unused*/, L_13, (Object_t3504644959 *)NULL, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0055;
		}
	}
	{
		AudioSourceExtension_t1086723751 * L_15 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var);
		AudioExtensionManager_GetReadyToPlay_m1899384901(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
	}

IL_0055:
	{
	}

IL_0056:
	{
		return;
	}
}
// System.String UnityEngine.AudioSettings::GetAmbisonicDecoderPluginName()
extern "C"  String_t* AudioSettings_GetAmbisonicDecoderPluginName_m2224992849 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef String_t* (*AudioSettings_GetAmbisonicDecoderPluginName_m2224992849_ftn) ();
	static AudioSettings_GetAmbisonicDecoderPluginName_m2224992849_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSettings_GetAmbisonicDecoderPluginName_m2224992849_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSettings::GetAmbisonicDecoderPluginName()");
	String_t* retVal = _il2cpp_icall_func();
	return retVal;
}
extern "C"  void DelegatePInvokeWrapper_AudioConfigurationChangeHandler_t3767123146 (AudioConfigurationChangeHandler_t3767123146 * __this, bool ___deviceWasChanged0, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(___deviceWasChanged0));

}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void AudioConfigurationChangeHandler__ctor_m437706034 (AudioConfigurationChangeHandler_t3767123146 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean)
extern "C"  void AudioConfigurationChangeHandler_Invoke_m3495609342 (AudioConfigurationChangeHandler_t3767123146 * __this, bool ___deviceWasChanged0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		AudioConfigurationChangeHandler_Invoke_m3495609342((AudioConfigurationChangeHandler_t3767123146 *)__this->get_prev_9(),___deviceWasChanged0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	bool ___methodIsStatic = MethodIsStatic((RuntimeMethod*)(__this->get_method_3()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (RuntimeObject *, void* __this, bool ___deviceWasChanged0, const RuntimeMethod* method);
		((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___deviceWasChanged0,(RuntimeMethod*)(__this->get_method_3()));
	}
	else
	{
		typedef void (*FunctionPointerType) (void* __this, bool ___deviceWasChanged0, const RuntimeMethod* method);
		((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___deviceWasChanged0,(RuntimeMethod*)(__this->get_method_3()));
	}
}
// System.IAsyncResult UnityEngine.AudioSettings/AudioConfigurationChangeHandler::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* AudioConfigurationChangeHandler_BeginInvoke_m501498633 (AudioConfigurationChangeHandler_t3767123146 * __this, bool ___deviceWasChanged0, AsyncCallback_t2314506972 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioConfigurationChangeHandler_BeginInvoke_m501498633_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t277042056_il2cpp_TypeInfo_var, &___deviceWasChanged0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::EndInvoke(System.IAsyncResult)
extern "C"  void AudioConfigurationChangeHandler_EndInvoke_m2882387597 (AudioConfigurationChangeHandler_t3767123146 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
extern "C"  void AudioSource_set_volume_m1389513228 (AudioSource_t1881938766 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_volume_m1389513228_ftn) (AudioSource_t1881938766 *, float);
	static AudioSource_set_volume_m1389513228_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_volume_m1389513228_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_volume(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
extern "C"  void AudioSource_set_pitch_m3096837971 (AudioSource_t1881938766 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_pitch_m3096837971_ftn) (AudioSource_t1881938766 *, float);
	static AudioSource_set_pitch_m3096837971_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_pitch_m3096837971_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_pitch(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.AudioSource::get_time()
extern "C"  float AudioSource_get_time_m885998366 (AudioSource_t1881938766 * __this, const RuntimeMethod* method)
{
	typedef float (*AudioSource_get_time_m885998366_ftn) (AudioSource_t1881938766 *);
	static AudioSource_get_time_m885998366_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_time_m885998366_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_time()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AudioSource::set_time(System.Single)
extern "C"  void AudioSource_set_time_m1447883345 (AudioSource_t1881938766 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_time_m1447883345_ftn) (AudioSource_t1881938766 *, float);
	static AudioSource_set_time_m1447883345_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_time_m1447883345_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_time(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Int32 UnityEngine.AudioSource::get_timeSamples()
extern "C"  int32_t AudioSource_get_timeSamples_m2833233197 (AudioSource_t1881938766 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*AudioSource_get_timeSamples_m2833233197_ftn) (AudioSource_t1881938766 *);
	static AudioSource_get_timeSamples_m2833233197_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_timeSamples_m2833233197_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_timeSamples()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AudioSource::set_timeSamples(System.Int32)
extern "C"  void AudioSource_set_timeSamples_m260558316 (AudioSource_t1881938766 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_timeSamples_m260558316_ftn) (AudioSource_t1881938766 *, int32_t);
	static AudioSource_set_timeSamples_m260558316_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_timeSamples_m260558316_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_timeSamples(System.Int32)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
extern "C"  AudioClip_t3505022932 * AudioSource_get_clip_m4270278987 (AudioSource_t1881938766 * __this, const RuntimeMethod* method)
{
	typedef AudioClip_t3505022932 * (*AudioSource_get_clip_m4270278987_ftn) (AudioSource_t1881938766 *);
	static AudioSource_get_clip_m4270278987_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_clip_m4270278987_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_clip()");
	AudioClip_t3505022932 * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
extern "C"  void AudioSource_set_clip_m942088600 (AudioSource_t1881938766 * __this, AudioClip_t3505022932 * ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_clip_m942088600_ftn) (AudioSource_t1881938766 *, AudioClip_t3505022932 *);
	static AudioSource_set_clip_m942088600_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_clip_m942088600_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AudioSource::set_outputAudioMixerGroup(UnityEngine.Audio.AudioMixerGroup)
extern "C"  void AudioSource_set_outputAudioMixerGroup_m4198912989 (AudioSource_t1881938766 * __this, AudioMixerGroup_t2866063578 * ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_outputAudioMixerGroup_m4198912989_ftn) (AudioSource_t1881938766 *, AudioMixerGroup_t2866063578 *);
	static AudioSource_set_outputAudioMixerGroup_m4198912989_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_outputAudioMixerGroup_m4198912989_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_outputAudioMixerGroup(UnityEngine.Audio.AudioMixerGroup)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AudioSource::Play(System.UInt64)
extern "C"  void AudioSource_Play_m4258457317 (AudioSource_t1881938766 * __this, uint64_t ___delay0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_Play_m4258457317_ftn) (AudioSource_t1881938766 *, uint64_t);
	static AudioSource_Play_m4258457317_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_Play_m4258457317_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::Play(System.UInt64)");
	_il2cpp_icall_func(__this, ___delay0);
}
// System.Void UnityEngine.AudioSource::Play()
extern "C"  void AudioSource_Play_m2530136319 (AudioSource_t1881938766 * __this, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		V_0 = (((int64_t)((int64_t)0)));
		uint64_t L_0 = V_0;
		AudioSource_Play_m4258457317(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AudioSource::PlayDelayed(System.Single)
extern "C"  void AudioSource_PlayDelayed_m1927910548 (AudioSource_t1881938766 * __this, float ___delay0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_PlayDelayed_m1927910548_ftn) (AudioSource_t1881938766 *, float);
	static AudioSource_PlayDelayed_m1927910548_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_PlayDelayed_m1927910548_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::PlayDelayed(System.Single)");
	_il2cpp_icall_func(__this, ___delay0);
}
// System.Void UnityEngine.AudioSource::PlayScheduled(System.Double)
extern "C"  void AudioSource_PlayScheduled_m2872064297 (AudioSource_t1881938766 * __this, double ___time0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_PlayScheduled_m2872064297_ftn) (AudioSource_t1881938766 *, double);
	static AudioSource_PlayScheduled_m2872064297_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_PlayScheduled_m2872064297_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::PlayScheduled(System.Double)");
	_il2cpp_icall_func(__this, ___time0);
}
// System.Void UnityEngine.AudioSource::SetScheduledStartTime(System.Double)
extern "C"  void AudioSource_SetScheduledStartTime_m1183505486 (AudioSource_t1881938766 * __this, double ___time0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_SetScheduledStartTime_m1183505486_ftn) (AudioSource_t1881938766 *, double);
	static AudioSource_SetScheduledStartTime_m1183505486_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_SetScheduledStartTime_m1183505486_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::SetScheduledStartTime(System.Double)");
	_il2cpp_icall_func(__this, ___time0);
}
// System.Void UnityEngine.AudioSource::SetScheduledEndTime(System.Double)
extern "C"  void AudioSource_SetScheduledEndTime_m4196311992 (AudioSource_t1881938766 * __this, double ___time0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_SetScheduledEndTime_m4196311992_ftn) (AudioSource_t1881938766 *, double);
	static AudioSource_SetScheduledEndTime_m4196311992_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_SetScheduledEndTime_m4196311992_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::SetScheduledEndTime(System.Double)");
	_il2cpp_icall_func(__this, ___time0);
}
// System.Void UnityEngine.AudioSource::Stop()
extern "C"  void AudioSource_Stop_m3630325379 (AudioSource_t1881938766 * __this, const RuntimeMethod* method)
{
	typedef void (*AudioSource_Stop_m3630325379_ftn) (AudioSource_t1881938766 *);
	static AudioSource_Stop_m3630325379_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_Stop_m3630325379_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::Stop()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AudioSource::Pause()
extern "C"  void AudioSource_Pause_m2916379178 (AudioSource_t1881938766 * __this, const RuntimeMethod* method)
{
	{
		AudioSource_INTERNAL_CALL_Pause_m4196339504(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AudioSource::INTERNAL_CALL_Pause(UnityEngine.AudioSource)
extern "C"  void AudioSource_INTERNAL_CALL_Pause_m4196339504 (RuntimeObject * __this /* static, unused */, AudioSource_t1881938766 * ___self0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_INTERNAL_CALL_Pause_m4196339504_ftn) (AudioSource_t1881938766 *);
	static AudioSource_INTERNAL_CALL_Pause_m4196339504_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_INTERNAL_CALL_Pause_m4196339504_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::INTERNAL_CALL_Pause(UnityEngine.AudioSource)");
	_il2cpp_icall_func(___self0);
}
// System.Void UnityEngine.AudioSource::UnPause()
extern "C"  void AudioSource_UnPause_m4161969434 (AudioSource_t1881938766 * __this, const RuntimeMethod* method)
{
	{
		AudioSource_INTERNAL_CALL_UnPause_m1840547120(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AudioSource::INTERNAL_CALL_UnPause(UnityEngine.AudioSource)
extern "C"  void AudioSource_INTERNAL_CALL_UnPause_m1840547120 (RuntimeObject * __this /* static, unused */, AudioSource_t1881938766 * ___self0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_INTERNAL_CALL_UnPause_m1840547120_ftn) (AudioSource_t1881938766 *);
	static AudioSource_INTERNAL_CALL_UnPause_m1840547120_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_INTERNAL_CALL_UnPause_m1840547120_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::INTERNAL_CALL_UnPause(UnityEngine.AudioSource)");
	_il2cpp_icall_func(___self0);
}
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
extern "C"  bool AudioSource_get_isPlaying_m2862884913 (AudioSource_t1881938766 * __this, const RuntimeMethod* method)
{
	typedef bool (*AudioSource_get_isPlaying_m2862884913_ftn) (AudioSource_t1881938766 *);
	static AudioSource_get_isPlaying_m2862884913_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_isPlaying_m2862884913_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_isPlaying()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
extern "C"  void AudioSource_PlayOneShot_m3411240643 (AudioSource_t1881938766 * __this, AudioClip_t3505022932 * ___clip0, float ___volumeScale1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioSource_PlayOneShot_m3411240643_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioSourceExtension_t1086723751 * V_0 = NULL;
	{
		AudioClip_t3505022932 * L_0 = ___clip0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3504644959_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m1843775054(NULL /*static, unused*/, L_0, (Object_t3504644959 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		AudioClip_t3505022932 * L_2 = ___clip0;
		NullCheck(L_2);
		bool L_3 = AudioClip_get_ambisonic_m3497335091(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var);
		AudioSourceExtension_t1086723751 * L_4 = AudioExtensionManager_AddAmbisonicDecoderExtension_m2400674341(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		V_0 = L_4;
		AudioSourceExtension_t1086723751 * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3504644959_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Inequality_m1843775054(NULL /*static, unused*/, L_5, (Object_t3504644959 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0032;
		}
	}
	{
		AudioSourceExtension_t1086723751 * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var);
		AudioExtensionManager_GetReadyToPlay_m1899384901(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
	}

IL_0032:
	{
	}

IL_0033:
	{
		AudioClip_t3505022932 * L_8 = ___clip0;
		float L_9 = ___volumeScale1;
		AudioSource_PlayOneShotHelper_m443525293(__this, L_8, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AudioSource::PlayOneShotHelper(UnityEngine.AudioClip,System.Single)
extern "C"  void AudioSource_PlayOneShotHelper_m443525293 (AudioSource_t1881938766 * __this, AudioClip_t3505022932 * ___clip0, float ___volumeScale1, const RuntimeMethod* method)
{
	typedef void (*AudioSource_PlayOneShotHelper_m443525293_ftn) (AudioSource_t1881938766 *, AudioClip_t3505022932 *, float);
	static AudioSource_PlayOneShotHelper_m443525293_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_PlayOneShotHelper_m443525293_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::PlayOneShotHelper(UnityEngine.AudioClip,System.Single)");
	_il2cpp_icall_func(__this, ___clip0, ___volumeScale1);
}
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
extern "C"  void AudioSource_set_loop_m2829635583 (AudioSource_t1881938766 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_loop_m2829635583_ftn) (AudioSource_t1881938766 *, bool);
	static AudioSource_set_loop_m2829635583_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_loop_m2829635583_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_loop(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AudioSource::set_playOnAwake(System.Boolean)
extern "C"  void AudioSource_set_playOnAwake_m1388341892 (AudioSource_t1881938766 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_playOnAwake_m1388341892_ftn) (AudioSource_t1881938766 *, bool);
	static AudioSource_set_playOnAwake_m1388341892_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_playOnAwake_m1388341892_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_playOnAwake(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AudioSource::set_spatialBlend(System.Single)
extern "C"  void AudioSource_set_spatialBlend_m2827117600 (AudioSource_t1881938766 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_spatialBlend_m2827117600_ftn) (AudioSource_t1881938766 *, float);
	static AudioSource_set_spatialBlend_m2827117600_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_spatialBlend_m2827117600_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_spatialBlend(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.AudioSource::get_spatializeInternal()
extern "C"  bool AudioSource_get_spatializeInternal_m116691644 (AudioSource_t1881938766 * __this, const RuntimeMethod* method)
{
	typedef bool (*AudioSource_get_spatializeInternal_m116691644_ftn) (AudioSource_t1881938766 *);
	static AudioSource_get_spatializeInternal_m116691644_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_spatializeInternal_m116691644_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_spatializeInternal()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AudioSource::set_spatializeInternal(System.Boolean)
extern "C"  void AudioSource_set_spatializeInternal_m516009119 (AudioSource_t1881938766 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_spatializeInternal_m516009119_ftn) (AudioSource_t1881938766 *, bool);
	static AudioSource_set_spatializeInternal_m516009119_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_spatializeInternal_m516009119_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_spatializeInternal(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.AudioSource::get_spatialize()
extern "C"  bool AudioSource_get_spatialize_m894426778 (AudioSource_t1881938766 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = AudioSource_get_spatializeInternal_m116691644(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.AudioSource::set_spatialize(System.Boolean)
extern "C"  void AudioSource_set_spatialize_m3019076892 (AudioSource_t1881938766 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioSource_set_spatialize_m3019076892_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioSourceExtension_t1086723751 * V_0 = NULL;
	{
		bool L_0 = AudioSource_get_spatializeInternal_m116691644(__this, /*hidden argument*/NULL);
		bool L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0042;
		}
	}
	{
		bool L_2 = ___value0;
		AudioSource_set_spatializeInternal_m516009119(__this, L_2, /*hidden argument*/NULL);
		bool L_3 = ___value0;
		if (!L_3)
		{
			goto IL_0041;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var);
		AudioSourceExtension_t1086723751 * L_4 = AudioExtensionManager_AddSpatializerExtension_m482220115(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		V_0 = L_4;
		AudioSourceExtension_t1086723751 * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3504644959_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Inequality_m1843775054(NULL /*static, unused*/, L_5, (Object_t3504644959 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		bool L_7 = AudioSource_get_isPlaying_m2862884913(__this, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		AudioSourceExtension_t1086723751 * L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_t4272479908_il2cpp_TypeInfo_var);
		AudioExtensionManager_GetReadyToPlay_m1899384901(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
	}

IL_0040:
	{
	}

IL_0041:
	{
	}

IL_0042:
	{
		return;
	}
}
// System.Void UnityEngine.AudioSource::set_spatializePostEffects(System.Boolean)
extern "C"  void AudioSource_set_spatializePostEffects_m2896849541 (AudioSource_t1881938766 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_spatializePostEffects_m2896849541_ftn) (AudioSource_t1881938766 *, bool);
	static AudioSource_set_spatializePostEffects_m2896849541_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_spatializePostEffects_m2896849541_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_spatializePostEffects(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AudioSource::SetCustomCurve(UnityEngine.AudioSourceCurveType,UnityEngine.AnimationCurve)
extern "C"  void AudioSource_SetCustomCurve_m1271290856 (AudioSource_t1881938766 * __this, int32_t ___type0, AnimationCurve_t1475162260 * ___curve1, const RuntimeMethod* method)
{
	typedef void (*AudioSource_SetCustomCurve_m1271290856_ftn) (AudioSource_t1881938766 *, int32_t, AnimationCurve_t1475162260 *);
	static AudioSource_SetCustomCurve_m1271290856_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_SetCustomCurve_m1271290856_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::SetCustomCurve(UnityEngine.AudioSourceCurveType,UnityEngine.AnimationCurve)");
	_il2cpp_icall_func(__this, ___type0, ___curve1);
}
// System.Void UnityEngine.AudioSource::set_bypassReverbZones(System.Boolean)
extern "C"  void AudioSource_set_bypassReverbZones_m259940914 (AudioSource_t1881938766 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_bypassReverbZones_m259940914_ftn) (AudioSource_t1881938766 *, bool);
	static AudioSource_set_bypassReverbZones_m259940914_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_bypassReverbZones_m259940914_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_bypassReverbZones(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AudioSource::set_dopplerLevel(System.Single)
extern "C"  void AudioSource_set_dopplerLevel_m3436053566 (AudioSource_t1881938766 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_dopplerLevel_m3436053566_ftn) (AudioSource_t1881938766 *, float);
	static AudioSource_set_dopplerLevel_m3436053566_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_dopplerLevel_m3436053566_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_dopplerLevel(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AudioSource::set_spread(System.Single)
extern "C"  void AudioSource_set_spread_m197808762 (AudioSource_t1881938766 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_spread_m197808762_ftn) (AudioSource_t1881938766 *, float);
	static AudioSource_set_spread_m197808762_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_spread_m197808762_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_spread(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AudioSource::set_priority(System.Int32)
extern "C"  void AudioSource_set_priority_m2101602875 (AudioSource_t1881938766 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_priority_m2101602875_ftn) (AudioSource_t1881938766 *, int32_t);
	static AudioSource_set_priority_m2101602875_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_priority_m2101602875_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_priority(System.Int32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AudioSource::set_mute(System.Boolean)
extern "C"  void AudioSource_set_mute_m2746404431 (AudioSource_t1881938766 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_mute_m2746404431_ftn) (AudioSource_t1881938766 *, bool);
	static AudioSource_set_mute_m2746404431_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_mute_m2746404431_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_mute(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AudioSource::set_minDistance(System.Single)
extern "C"  void AudioSource_set_minDistance_m386709314 (AudioSource_t1881938766 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_minDistance_m386709314_ftn) (AudioSource_t1881938766 *, float);
	static AudioSource_set_minDistance_m386709314_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_minDistance_m386709314_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_minDistance(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AudioSource::set_maxDistance(System.Single)
extern "C"  void AudioSource_set_maxDistance_m3838552113 (AudioSource_t1881938766 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_maxDistance_m3838552113_ftn) (AudioSource_t1881938766 *, float);
	static AudioSource_set_maxDistance_m3838552113_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_maxDistance_m3838552113_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_maxDistance(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AudioSource::set_rolloffMode(UnityEngine.AudioRolloffMode)
extern "C"  void AudioSource_set_rolloffMode_m486597456 (AudioSource_t1881938766 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_rolloffMode_m486597456_ftn) (AudioSource_t1881938766 *, int32_t);
	static AudioSource_set_rolloffMode_m486597456_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_rolloffMode_m486597456_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_rolloffMode(UnityEngine.AudioRolloffMode)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AudioSource::GetOutputDataHelper(System.Single[],System.Int32)
extern "C"  void AudioSource_GetOutputDataHelper_m471571275 (AudioSource_t1881938766 * __this, SingleU5BU5D_t2558022491* ___samples0, int32_t ___channel1, const RuntimeMethod* method)
{
	typedef void (*AudioSource_GetOutputDataHelper_m471571275_ftn) (AudioSource_t1881938766 *, SingleU5BU5D_t2558022491*, int32_t);
	static AudioSource_GetOutputDataHelper_m471571275_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_GetOutputDataHelper_m471571275_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::GetOutputDataHelper(System.Single[],System.Int32)");
	_il2cpp_icall_func(__this, ___samples0, ___channel1);
}
// System.Void UnityEngine.AudioSource::GetOutputData(System.Single[],System.Int32)
extern "C"  void AudioSource_GetOutputData_m1655011450 (AudioSource_t1881938766 * __this, SingleU5BU5D_t2558022491* ___samples0, int32_t ___channel1, const RuntimeMethod* method)
{
	{
		SingleU5BU5D_t2558022491* L_0 = ___samples0;
		int32_t L_1 = ___channel1;
		AudioSource_GetOutputDataHelper_m471571275(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AudioSource::GetSpectrumDataHelper(System.Single[],System.Int32,UnityEngine.FFTWindow)
extern "C"  void AudioSource_GetSpectrumDataHelper_m1927840471 (AudioSource_t1881938766 * __this, SingleU5BU5D_t2558022491* ___samples0, int32_t ___channel1, int32_t ___window2, const RuntimeMethod* method)
{
	typedef void (*AudioSource_GetSpectrumDataHelper_m1927840471_ftn) (AudioSource_t1881938766 *, SingleU5BU5D_t2558022491*, int32_t, int32_t);
	static AudioSource_GetSpectrumDataHelper_m1927840471_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_GetSpectrumDataHelper_m1927840471_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::GetSpectrumDataHelper(System.Single[],System.Int32,UnityEngine.FFTWindow)");
	_il2cpp_icall_func(__this, ___samples0, ___channel1, ___window2);
}
// System.Void UnityEngine.AudioSource::GetSpectrumData(System.Single[],System.Int32,UnityEngine.FFTWindow)
extern "C"  void AudioSource_GetSpectrumData_m914394662 (AudioSource_t1881938766 * __this, SingleU5BU5D_t2558022491* ___samples0, int32_t ___channel1, int32_t ___window2, const RuntimeMethod* method)
{
	{
		SingleU5BU5D_t2558022491* L_0 = ___samples0;
		int32_t L_1 = ___channel1;
		int32_t L_2 = ___window2;
		AudioSource_GetSpectrumDataHelper_m1927840471(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.AudioSource::GetNumExtensionProperties()
extern "C"  int32_t AudioSource_GetNumExtensionProperties_m3666014541 (AudioSource_t1881938766 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*AudioSource_GetNumExtensionProperties_m3666014541_ftn) (AudioSource_t1881938766 *);
	static AudioSource_GetNumExtensionProperties_m3666014541_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_GetNumExtensionProperties_m3666014541_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::GetNumExtensionProperties()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.PropertyName UnityEngine.AudioSource::ReadExtensionName(System.Int32)
extern "C"  PropertyName_t1110829634  AudioSource_ReadExtensionName_m1004282844 (AudioSource_t1881938766 * __this, int32_t ___sourceIndex0, const RuntimeMethod* method)
{
	PropertyName_t1110829634  V_0;
	memset(&V_0, 0, sizeof(V_0));
	PropertyName_t1110829634  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = ___sourceIndex0;
		AudioSource_INTERNAL_CALL_ReadExtensionName_m2111190916(NULL /*static, unused*/, __this, L_0, (&V_0), /*hidden argument*/NULL);
		PropertyName_t1110829634  L_1 = V_0;
		V_1 = L_1;
		goto IL_0011;
	}

IL_0011:
	{
		PropertyName_t1110829634  L_2 = V_1;
		return L_2;
	}
}
// System.Void UnityEngine.AudioSource::INTERNAL_CALL_ReadExtensionName(UnityEngine.AudioSource,System.Int32,UnityEngine.PropertyName&)
extern "C"  void AudioSource_INTERNAL_CALL_ReadExtensionName_m2111190916 (RuntimeObject * __this /* static, unused */, AudioSource_t1881938766 * ___self0, int32_t ___sourceIndex1, PropertyName_t1110829634 * ___value2, const RuntimeMethod* method)
{
	typedef void (*AudioSource_INTERNAL_CALL_ReadExtensionName_m2111190916_ftn) (AudioSource_t1881938766 *, int32_t, PropertyName_t1110829634 *);
	static AudioSource_INTERNAL_CALL_ReadExtensionName_m2111190916_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_INTERNAL_CALL_ReadExtensionName_m2111190916_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::INTERNAL_CALL_ReadExtensionName(UnityEngine.AudioSource,System.Int32,UnityEngine.PropertyName&)");
	_il2cpp_icall_func(___self0, ___sourceIndex1, ___value2);
}
// UnityEngine.PropertyName UnityEngine.AudioSource::ReadExtensionPropertyName(System.Int32)
extern "C"  PropertyName_t1110829634  AudioSource_ReadExtensionPropertyName_m3057463141 (AudioSource_t1881938766 * __this, int32_t ___sourceIndex0, const RuntimeMethod* method)
{
	PropertyName_t1110829634  V_0;
	memset(&V_0, 0, sizeof(V_0));
	PropertyName_t1110829634  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = ___sourceIndex0;
		AudioSource_INTERNAL_CALL_ReadExtensionPropertyName_m2322700458(NULL /*static, unused*/, __this, L_0, (&V_0), /*hidden argument*/NULL);
		PropertyName_t1110829634  L_1 = V_0;
		V_1 = L_1;
		goto IL_0011;
	}

IL_0011:
	{
		PropertyName_t1110829634  L_2 = V_1;
		return L_2;
	}
}
// System.Void UnityEngine.AudioSource::INTERNAL_CALL_ReadExtensionPropertyName(UnityEngine.AudioSource,System.Int32,UnityEngine.PropertyName&)
extern "C"  void AudioSource_INTERNAL_CALL_ReadExtensionPropertyName_m2322700458 (RuntimeObject * __this /* static, unused */, AudioSource_t1881938766 * ___self0, int32_t ___sourceIndex1, PropertyName_t1110829634 * ___value2, const RuntimeMethod* method)
{
	typedef void (*AudioSource_INTERNAL_CALL_ReadExtensionPropertyName_m2322700458_ftn) (AudioSource_t1881938766 *, int32_t, PropertyName_t1110829634 *);
	static AudioSource_INTERNAL_CALL_ReadExtensionPropertyName_m2322700458_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_INTERNAL_CALL_ReadExtensionPropertyName_m2322700458_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::INTERNAL_CALL_ReadExtensionPropertyName(UnityEngine.AudioSource,System.Int32,UnityEngine.PropertyName&)");
	_il2cpp_icall_func(___self0, ___sourceIndex1, ___value2);
}
// System.Single UnityEngine.AudioSource::ReadExtensionPropertyValue(System.Int32)
extern "C"  float AudioSource_ReadExtensionPropertyValue_m2316738097 (AudioSource_t1881938766 * __this, int32_t ___sourceIndex0, const RuntimeMethod* method)
{
	typedef float (*AudioSource_ReadExtensionPropertyValue_m2316738097_ftn) (AudioSource_t1881938766 *, int32_t);
	static AudioSource_ReadExtensionPropertyValue_m2316738097_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_ReadExtensionPropertyValue_m2316738097_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::ReadExtensionPropertyValue(System.Int32)");
	float retVal = _il2cpp_icall_func(__this, ___sourceIndex0);
	return retVal;
}
// System.Void UnityEngine.AudioSource::ClearExtensionProperties(UnityEngine.PropertyName)
extern "C"  void AudioSource_ClearExtensionProperties_m3564927376 (AudioSource_t1881938766 * __this, PropertyName_t1110829634  ___extensionName0, const RuntimeMethod* method)
{
	{
		AudioSource_INTERNAL_CALL_ClearExtensionProperties_m2228654911(NULL /*static, unused*/, __this, (&___extensionName0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AudioSource::INTERNAL_CALL_ClearExtensionProperties(UnityEngine.AudioSource,UnityEngine.PropertyName&)
extern "C"  void AudioSource_INTERNAL_CALL_ClearExtensionProperties_m2228654911 (RuntimeObject * __this /* static, unused */, AudioSource_t1881938766 * ___self0, PropertyName_t1110829634 * ___extensionName1, const RuntimeMethod* method)
{
	typedef void (*AudioSource_INTERNAL_CALL_ClearExtensionProperties_m2228654911_ftn) (AudioSource_t1881938766 *, PropertyName_t1110829634 *);
	static AudioSource_INTERNAL_CALL_ClearExtensionProperties_m2228654911_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_INTERNAL_CALL_ClearExtensionProperties_m2228654911_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::INTERNAL_CALL_ClearExtensionProperties(UnityEngine.AudioSource,UnityEngine.PropertyName&)");
	_il2cpp_icall_func(___self0, ___extensionName1);
}
// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::AddSpatializerExtension(System.Type)
extern "C"  AudioSourceExtension_t1086723751 * AudioSource_AddSpatializerExtension_m3495425952 (AudioSource_t1881938766 * __this, Type_t * ___extensionType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioSource_AddSpatializerExtension_m3495425952_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioSourceExtension_t1086723751 * V_0 = NULL;
	{
		AudioSourceExtension_t1086723751 * L_0 = __this->get_spatializerExtension_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3504644959_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m999146850(NULL /*static, unused*/, L_0, (Object_t3504644959 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Type_t * L_2 = ___extensionType0;
		ScriptableObject_t4256469858 * L_3 = ScriptableObject_CreateInstance_m2052122103(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->set_spatializerExtension_2(((AudioSourceExtension_t1086723751 *)IsInstClass((RuntimeObject*)L_3, AudioSourceExtension_t1086723751_il2cpp_TypeInfo_var)));
	}

IL_0025:
	{
		AudioSourceExtension_t1086723751 * L_4 = __this->get_spatializerExtension_2();
		V_0 = L_4;
		goto IL_0031;
	}

IL_0031:
	{
		AudioSourceExtension_t1086723751 * L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::AddAmbisonicExtension(System.Type)
extern "C"  AudioSourceExtension_t1086723751 * AudioSource_AddAmbisonicExtension_m1668135458 (AudioSource_t1881938766 * __this, Type_t * ___extensionType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioSource_AddAmbisonicExtension_m1668135458_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioSourceExtension_t1086723751 * V_0 = NULL;
	{
		AudioSourceExtension_t1086723751 * L_0 = __this->get_ambisonicExtension_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3504644959_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m999146850(NULL /*static, unused*/, L_0, (Object_t3504644959 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Type_t * L_2 = ___extensionType0;
		ScriptableObject_t4256469858 * L_3 = ScriptableObject_CreateInstance_m2052122103(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->set_ambisonicExtension_3(((AudioSourceExtension_t1086723751 *)IsInstClass((RuntimeObject*)L_3, AudioSourceExtension_t1086723751_il2cpp_TypeInfo_var)));
	}

IL_0025:
	{
		AudioSourceExtension_t1086723751 * L_4 = __this->get_ambisonicExtension_3();
		V_0 = L_4;
		goto IL_0031;
	}

IL_0031:
	{
		AudioSourceExtension_t1086723751 * L_5 = V_0;
		return L_5;
	}
}
// System.Boolean UnityEngine.AudioSource::SetSpatializerFloat(System.Int32,System.Single)
extern "C"  bool AudioSource_SetSpatializerFloat_m164725599 (AudioSource_t1881938766 * __this, int32_t ___index0, float ___value1, const RuntimeMethod* method)
{
	typedef bool (*AudioSource_SetSpatializerFloat_m164725599_ftn) (AudioSource_t1881938766 *, int32_t, float);
	static AudioSource_SetSpatializerFloat_m164725599_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_SetSpatializerFloat_m164725599_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::SetSpatializerFloat(System.Int32,System.Single)");
	bool retVal = _il2cpp_icall_func(__this, ___index0, ___value1);
	return retVal;
}
// UnityEngine.AudioSource UnityEngine.AudioSourceExtension::get_audioSource()
extern "C"  AudioSource_t1881938766 * AudioSourceExtension_get_audioSource_m247067304 (AudioSourceExtension_t1086723751 * __this, const RuntimeMethod* method)
{
	AudioSource_t1881938766 * V_0 = NULL;
	{
		AudioSource_t1881938766 * L_0 = __this->get_m_audioSource_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		AudioSource_t1881938766 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.AudioSourceExtension::set_audioSource(UnityEngine.AudioSource)
extern "C"  void AudioSourceExtension_set_audioSource_m2905420079 (AudioSourceExtension_t1086723751 * __this, AudioSource_t1881938766 * ___value0, const RuntimeMethod* method)
{
	{
		AudioSource_t1881938766 * L_0 = ___value0;
		__this->set_m_audioSource_2(L_0);
		return;
	}
}
// System.Void UnityEngine.AudioSourceExtension::WriteExtensionProperty(UnityEngine.PropertyName,System.Single)
extern "C"  void AudioSourceExtension_WriteExtensionProperty_m579257515 (AudioSourceExtension_t1086723751 * __this, PropertyName_t1110829634  ___propertyName0, float ___propertyValue1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.AudioSourceExtension::Play()
extern "C"  void AudioSourceExtension_Play_m2436720661 (AudioSourceExtension_t1086723751 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.AudioSourceExtension::Stop()
extern "C"  void AudioSourceExtension_Stop_m4166864140 (AudioSourceExtension_t1086723751 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.AudioSourceExtension::ExtensionUpdate()
extern "C"  void AudioSourceExtension_ExtensionUpdate_m1714032189 (AudioSourceExtension_t1086723751 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
