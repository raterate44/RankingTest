﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Selectable
struct Selectable_t346534971;

#include "mscorlib_System_ValueType4028081426.h"
#include "UnityEngine_UI_UnityEngine_UI_Navigation_Mode686167457.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation
struct  Navigation_t2564474001 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t346534971 * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t346534971 * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t346534971 * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t346534971 * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t2564474001, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t2564474001, ___m_SelectOnUp_1)); }
	inline Selectable_t346534971 * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_t346534971 ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_t346534971 * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_SelectOnUp_1, value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t2564474001, ___m_SelectOnDown_2)); }
	inline Selectable_t346534971 * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_t346534971 ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_t346534971 * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_SelectOnDown_2, value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t2564474001, ___m_SelectOnLeft_3)); }
	inline Selectable_t346534971 * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_t346534971 ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_t346534971 * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_SelectOnLeft_3, value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t2564474001, ___m_SelectOnRight_4)); }
	inline Selectable_t346534971 * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_t346534971 ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_t346534971 * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_SelectOnRight_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
