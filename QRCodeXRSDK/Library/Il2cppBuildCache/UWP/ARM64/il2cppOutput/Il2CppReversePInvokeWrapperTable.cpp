﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>



// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

struct EVENT_FILTER_DESCRIPTOR_t59379AB6F16CCEA5C0BDF328FF5AC64040CED05B ;
struct Guid_t ;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

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


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

extern "C" uint32_t DEFAULT_CALL ReversePInvokeWrapper_Delegate_AddRef_mFA0BE538AEC4FE987D5DA56F8EFBB9DA0D29A005(intptr_t ___thisPtr0);
extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_Delegate_QueryInterface_m76A7979A68ADEB6F6EB66308FC097B442E56BAAD(intptr_t ___thisPtr0, Guid_t * ___iid1, intptr_t* ___obj2);
extern "C" uint32_t DEFAULT_CALL ReversePInvokeWrapper_Delegate_Release_m810003673F117445EA74386DB0E658CD76567F19(intptr_t ___thisPtr0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_EventProvider_EtwEnableCallBack_m21ADE6DC652B28DDB916AC68B9FC908B18006FFD(Guid_t * ___sourceId0, int32_t ___controlCode1, uint8_t ___setLevel2, int64_t ___anyKeyword3, int64_t ___allKeyword4, EVENT_FILTER_DESCRIPTOR_t59379AB6F16CCEA5C0BDF328FF5AC64040CED05B * ___filterData5, void* ___callbackContext6);
extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_EventSource__invoke_m986B661A9ED24DAAD891750536AB83CFEA26EA4E(intptr_t ___thisPtr0, intptr_t ___senderPtr1, intptr_t ___argsPtr2);
extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_IAsyncOperation__OnCompleted_m4242E9D8367A600E19943EE942F0B6B2F11E69F1(intptr_t ___thisPtr0, intptr_t ___operationPtr1, int32_t ___status2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_m0045E44F7E960D6B4A864D5206D4116249C09BB0(intptr_t ___arg0);


IL2CPP_EXTERN_C const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[];
const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[7] = 
{
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_Delegate_AddRef_mFA0BE538AEC4FE987D5DA56F8EFBB9DA0D29A005),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_Delegate_QueryInterface_m76A7979A68ADEB6F6EB66308FC097B442E56BAAD),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_Delegate_Release_m810003673F117445EA74386DB0E658CD76567F19),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_EventProvider_EtwEnableCallBack_m21ADE6DC652B28DDB916AC68B9FC908B18006FFD),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_EventSource__invoke_m986B661A9ED24DAAD891750536AB83CFEA26EA4E),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IAsyncOperation__OnCompleted_m4242E9D8367A600E19943EE942F0B6B2F11E69F1),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_m0045E44F7E960D6B4A864D5206D4116249C09BB0),
};
