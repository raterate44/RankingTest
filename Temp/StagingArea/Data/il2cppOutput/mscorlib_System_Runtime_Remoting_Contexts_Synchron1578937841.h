﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t1847988475;
// System.Runtime.Remoting.Contexts.SynchronizationAttribute
struct SynchronizationAttribute_t289755812;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.SynchronizedServerContextSink
struct  SynchronizedServerContextSink_t1578937841  : public Il2CppObject
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.SynchronizedServerContextSink::_next
	Il2CppObject * ____next_0;
	// System.Runtime.Remoting.Contexts.SynchronizationAttribute System.Runtime.Remoting.Contexts.SynchronizedServerContextSink::_att
	SynchronizationAttribute_t289755812 * ____att_1;

public:
	inline static int32_t get_offset_of__next_0() { return static_cast<int32_t>(offsetof(SynchronizedServerContextSink_t1578937841, ____next_0)); }
	inline Il2CppObject * get__next_0() const { return ____next_0; }
	inline Il2CppObject ** get_address_of__next_0() { return &____next_0; }
	inline void set__next_0(Il2CppObject * value)
	{
		____next_0 = value;
		Il2CppCodeGenWriteBarrier(&____next_0, value);
	}

	inline static int32_t get_offset_of__att_1() { return static_cast<int32_t>(offsetof(SynchronizedServerContextSink_t1578937841, ____att_1)); }
	inline SynchronizationAttribute_t289755812 * get__att_1() const { return ____att_1; }
	inline SynchronizationAttribute_t289755812 ** get_address_of__att_1() { return &____att_1; }
	inline void set__att_1(SynchronizationAttribute_t289755812 * value)
	{
		____att_1 = value;
		Il2CppCodeGenWriteBarrier(&____att_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
