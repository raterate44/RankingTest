﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t1299948660;

#include "UnityEngine_UnityEngine_Events_BaseInvokableCall1711298336.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall`1<System.Int32>
struct  InvokableCall_1_t417560702  : public BaseInvokableCall_t1711298336
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t1299948660 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t417560702, ___Delegate_0)); }
	inline UnityAction_1_t1299948660 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t1299948660 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t1299948660 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier(&___Delegate_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
