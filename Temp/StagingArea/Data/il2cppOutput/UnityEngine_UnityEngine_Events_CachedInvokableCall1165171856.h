﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object[]
struct ObjectU5BU5D_t3632007997;

#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen2112584674.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
struct  CachedInvokableCall_1_t1165171856  : public InvokableCall_1_t2112584674
{
public:
	// System.Object[] UnityEngine.Events.CachedInvokableCall`1::m_Arg1
	ObjectU5BU5D_t3632007997* ___m_Arg1_1;

public:
	inline static int32_t get_offset_of_m_Arg1_1() { return static_cast<int32_t>(offsetof(CachedInvokableCall_1_t1165171856, ___m_Arg1_1)); }
	inline ObjectU5BU5D_t3632007997* get_m_Arg1_1() const { return ___m_Arg1_1; }
	inline ObjectU5BU5D_t3632007997** get_address_of_m_Arg1_1() { return &___m_Arg1_1; }
	inline void set_m_Arg1_1(ObjectU5BU5D_t3632007997* value)
	{
		___m_Arg1_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_Arg1_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
