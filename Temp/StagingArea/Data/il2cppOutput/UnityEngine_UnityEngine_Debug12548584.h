﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Logger
struct Logger_t713155905;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Debug
struct  Debug_t12548584  : public Il2CppObject
{
public:

public:
};

struct Debug_t12548584_StaticFields
{
public:
	// UnityEngine.Logger UnityEngine.Debug::s_Logger
	Logger_t713155905 * ___s_Logger_0;

public:
	inline static int32_t get_offset_of_s_Logger_0() { return static_cast<int32_t>(offsetof(Debug_t12548584_StaticFields, ___s_Logger_0)); }
	inline Logger_t713155905 * get_s_Logger_0() const { return ___s_Logger_0; }
	inline Logger_t713155905 ** get_address_of_s_Logger_0() { return &___s_Logger_0; }
	inline void set_s_Logger_0(Logger_t713155905 * value)
	{
		___s_Logger_0 = value;
		Il2CppCodeGenWriteBarrier(&___s_Logger_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
