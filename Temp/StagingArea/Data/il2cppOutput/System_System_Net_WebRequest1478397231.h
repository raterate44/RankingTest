﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Specialized.HybridDictionary
struct HybridDictionary_t2736090941;
// System.Net.IWebProxy
struct IWebProxy_t2540215827;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_MarshalByRefObject3870530982.h"
#include "System_System_Net_Security_AuthenticationLevel3108582610.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebRequest
struct  WebRequest_t1478397231  : public MarshalByRefObject_t3870530982
{
public:
	// System.Net.Security.AuthenticationLevel System.Net.WebRequest::authentication_level
	int32_t ___authentication_level_4;

public:
	inline static int32_t get_offset_of_authentication_level_4() { return static_cast<int32_t>(offsetof(WebRequest_t1478397231, ___authentication_level_4)); }
	inline int32_t get_authentication_level_4() const { return ___authentication_level_4; }
	inline int32_t* get_address_of_authentication_level_4() { return &___authentication_level_4; }
	inline void set_authentication_level_4(int32_t value)
	{
		___authentication_level_4 = value;
	}
};

struct WebRequest_t1478397231_StaticFields
{
public:
	// System.Collections.Specialized.HybridDictionary System.Net.WebRequest::prefixes
	HybridDictionary_t2736090941 * ___prefixes_1;
	// System.Boolean System.Net.WebRequest::isDefaultWebProxySet
	bool ___isDefaultWebProxySet_2;
	// System.Net.IWebProxy System.Net.WebRequest::defaultWebProxy
	Il2CppObject * ___defaultWebProxy_3;
	// System.Object System.Net.WebRequest::lockobj
	Il2CppObject * ___lockobj_5;

public:
	inline static int32_t get_offset_of_prefixes_1() { return static_cast<int32_t>(offsetof(WebRequest_t1478397231_StaticFields, ___prefixes_1)); }
	inline HybridDictionary_t2736090941 * get_prefixes_1() const { return ___prefixes_1; }
	inline HybridDictionary_t2736090941 ** get_address_of_prefixes_1() { return &___prefixes_1; }
	inline void set_prefixes_1(HybridDictionary_t2736090941 * value)
	{
		___prefixes_1 = value;
		Il2CppCodeGenWriteBarrier(&___prefixes_1, value);
	}

	inline static int32_t get_offset_of_isDefaultWebProxySet_2() { return static_cast<int32_t>(offsetof(WebRequest_t1478397231_StaticFields, ___isDefaultWebProxySet_2)); }
	inline bool get_isDefaultWebProxySet_2() const { return ___isDefaultWebProxySet_2; }
	inline bool* get_address_of_isDefaultWebProxySet_2() { return &___isDefaultWebProxySet_2; }
	inline void set_isDefaultWebProxySet_2(bool value)
	{
		___isDefaultWebProxySet_2 = value;
	}

	inline static int32_t get_offset_of_defaultWebProxy_3() { return static_cast<int32_t>(offsetof(WebRequest_t1478397231_StaticFields, ___defaultWebProxy_3)); }
	inline Il2CppObject * get_defaultWebProxy_3() const { return ___defaultWebProxy_3; }
	inline Il2CppObject ** get_address_of_defaultWebProxy_3() { return &___defaultWebProxy_3; }
	inline void set_defaultWebProxy_3(Il2CppObject * value)
	{
		___defaultWebProxy_3 = value;
		Il2CppCodeGenWriteBarrier(&___defaultWebProxy_3, value);
	}

	inline static int32_t get_offset_of_lockobj_5() { return static_cast<int32_t>(offsetof(WebRequest_t1478397231_StaticFields, ___lockobj_5)); }
	inline Il2CppObject * get_lockobj_5() const { return ___lockobj_5; }
	inline Il2CppObject ** get_address_of_lockobj_5() { return &___lockobj_5; }
	inline void set_lockobj_5(Il2CppObject * value)
	{
		___lockobj_5 = value;
		Il2CppCodeGenWriteBarrier(&___lockobj_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
