﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Application/LogCallback
struct LogCallback_t3945898503;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Application
struct  Application_t3439453659  : public Il2CppObject
{
public:

public:
};

struct Application_t3439453659_StaticFields
{
public:
	// UnityEngine.Application/LogCallback UnityEngine.Application::s_LogCallbackHandler
	LogCallback_t3945898503 * ___s_LogCallbackHandler_0;
	// UnityEngine.Application/LogCallback UnityEngine.Application::s_LogCallbackHandlerThreaded
	LogCallback_t3945898503 * ___s_LogCallbackHandlerThreaded_1;

public:
	inline static int32_t get_offset_of_s_LogCallbackHandler_0() { return static_cast<int32_t>(offsetof(Application_t3439453659_StaticFields, ___s_LogCallbackHandler_0)); }
	inline LogCallback_t3945898503 * get_s_LogCallbackHandler_0() const { return ___s_LogCallbackHandler_0; }
	inline LogCallback_t3945898503 ** get_address_of_s_LogCallbackHandler_0() { return &___s_LogCallbackHandler_0; }
	inline void set_s_LogCallbackHandler_0(LogCallback_t3945898503 * value)
	{
		___s_LogCallbackHandler_0 = value;
		Il2CppCodeGenWriteBarrier(&___s_LogCallbackHandler_0, value);
	}

	inline static int32_t get_offset_of_s_LogCallbackHandlerThreaded_1() { return static_cast<int32_t>(offsetof(Application_t3439453659_StaticFields, ___s_LogCallbackHandlerThreaded_1)); }
	inline LogCallback_t3945898503 * get_s_LogCallbackHandlerThreaded_1() const { return ___s_LogCallbackHandlerThreaded_1; }
	inline LogCallback_t3945898503 ** get_address_of_s_LogCallbackHandlerThreaded_1() { return &___s_LogCallbackHandlerThreaded_1; }
	inline void set_s_LogCallbackHandlerThreaded_1(LogCallback_t3945898503 * value)
	{
		___s_LogCallbackHandlerThreaded_1 = value;
		Il2CppCodeGenWriteBarrier(&___s_LogCallbackHandlerThreaded_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
