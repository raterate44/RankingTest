﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.Assembly
struct Assembly_t141003736;
// System.Type
struct Type_t;
// System.AttributeUsageAttribute
struct AttributeUsageAttribute_t706536024;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoCustomAttrs
struct  MonoCustomAttrs_t2468772205  : public Il2CppObject
{
public:

public:
};

struct MonoCustomAttrs_t2468772205_StaticFields
{
public:
	// System.Reflection.Assembly System.MonoCustomAttrs::corlib
	Assembly_t141003736 * ___corlib_0;
	// System.Type System.MonoCustomAttrs::AttributeUsageType
	Type_t * ___AttributeUsageType_1;
	// System.AttributeUsageAttribute System.MonoCustomAttrs::DefaultAttributeUsage
	AttributeUsageAttribute_t706536024 * ___DefaultAttributeUsage_2;

public:
	inline static int32_t get_offset_of_corlib_0() { return static_cast<int32_t>(offsetof(MonoCustomAttrs_t2468772205_StaticFields, ___corlib_0)); }
	inline Assembly_t141003736 * get_corlib_0() const { return ___corlib_0; }
	inline Assembly_t141003736 ** get_address_of_corlib_0() { return &___corlib_0; }
	inline void set_corlib_0(Assembly_t141003736 * value)
	{
		___corlib_0 = value;
		Il2CppCodeGenWriteBarrier(&___corlib_0, value);
	}

	inline static int32_t get_offset_of_AttributeUsageType_1() { return static_cast<int32_t>(offsetof(MonoCustomAttrs_t2468772205_StaticFields, ___AttributeUsageType_1)); }
	inline Type_t * get_AttributeUsageType_1() const { return ___AttributeUsageType_1; }
	inline Type_t ** get_address_of_AttributeUsageType_1() { return &___AttributeUsageType_1; }
	inline void set_AttributeUsageType_1(Type_t * value)
	{
		___AttributeUsageType_1 = value;
		Il2CppCodeGenWriteBarrier(&___AttributeUsageType_1, value);
	}

	inline static int32_t get_offset_of_DefaultAttributeUsage_2() { return static_cast<int32_t>(offsetof(MonoCustomAttrs_t2468772205_StaticFields, ___DefaultAttributeUsage_2)); }
	inline AttributeUsageAttribute_t706536024 * get_DefaultAttributeUsage_2() const { return ___DefaultAttributeUsage_2; }
	inline AttributeUsageAttribute_t706536024 ** get_address_of_DefaultAttributeUsage_2() { return &___DefaultAttributeUsage_2; }
	inline void set_DefaultAttributeUsage_2(AttributeUsageAttribute_t706536024 * value)
	{
		___DefaultAttributeUsage_2 = value;
		Il2CppCodeGenWriteBarrier(&___DefaultAttributeUsage_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
