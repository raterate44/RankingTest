﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Runtime.Remoting.Activation.IActivator
struct IActivator_t785282678;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.ContextLevelActivator
struct  ContextLevelActivator_t2252582350  : public Il2CppObject
{
public:
	// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.ContextLevelActivator::m_NextActivator
	Il2CppObject * ___m_NextActivator_0;

public:
	inline static int32_t get_offset_of_m_NextActivator_0() { return static_cast<int32_t>(offsetof(ContextLevelActivator_t2252582350, ___m_NextActivator_0)); }
	inline Il2CppObject * get_m_NextActivator_0() const { return ___m_NextActivator_0; }
	inline Il2CppObject ** get_address_of_m_NextActivator_0() { return &___m_NextActivator_0; }
	inline void set_m_NextActivator_0(Il2CppObject * value)
	{
		___m_NextActivator_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_NextActivator_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
