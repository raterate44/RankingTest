﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Graphic
struct Graphic_t4081158439;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t81314118;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t3312141352;

#include "UnityEngine_UI_UnityEngine_UI_Selectable346534971.h"
#include "UnityEngine_UI_UnityEngine_UI_Toggle_ToggleTransit1813218323.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Toggle
struct  Toggle_t420319739  : public Selectable_t346534971
{
public:
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_16;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_t4081158439 * ___graphic_17;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_t81314118 * ___m_Group_18;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t3312141352 * ___onValueChanged_19;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_20;

public:
	inline static int32_t get_offset_of_toggleTransition_16() { return static_cast<int32_t>(offsetof(Toggle_t420319739, ___toggleTransition_16)); }
	inline int32_t get_toggleTransition_16() const { return ___toggleTransition_16; }
	inline int32_t* get_address_of_toggleTransition_16() { return &___toggleTransition_16; }
	inline void set_toggleTransition_16(int32_t value)
	{
		___toggleTransition_16 = value;
	}

	inline static int32_t get_offset_of_graphic_17() { return static_cast<int32_t>(offsetof(Toggle_t420319739, ___graphic_17)); }
	inline Graphic_t4081158439 * get_graphic_17() const { return ___graphic_17; }
	inline Graphic_t4081158439 ** get_address_of_graphic_17() { return &___graphic_17; }
	inline void set_graphic_17(Graphic_t4081158439 * value)
	{
		___graphic_17 = value;
		Il2CppCodeGenWriteBarrier(&___graphic_17, value);
	}

	inline static int32_t get_offset_of_m_Group_18() { return static_cast<int32_t>(offsetof(Toggle_t420319739, ___m_Group_18)); }
	inline ToggleGroup_t81314118 * get_m_Group_18() const { return ___m_Group_18; }
	inline ToggleGroup_t81314118 ** get_address_of_m_Group_18() { return &___m_Group_18; }
	inline void set_m_Group_18(ToggleGroup_t81314118 * value)
	{
		___m_Group_18 = value;
		Il2CppCodeGenWriteBarrier(&___m_Group_18, value);
	}

	inline static int32_t get_offset_of_onValueChanged_19() { return static_cast<int32_t>(offsetof(Toggle_t420319739, ___onValueChanged_19)); }
	inline ToggleEvent_t3312141352 * get_onValueChanged_19() const { return ___onValueChanged_19; }
	inline ToggleEvent_t3312141352 ** get_address_of_onValueChanged_19() { return &___onValueChanged_19; }
	inline void set_onValueChanged_19(ToggleEvent_t3312141352 * value)
	{
		___onValueChanged_19 = value;
		Il2CppCodeGenWriteBarrier(&___onValueChanged_19, value);
	}

	inline static int32_t get_offset_of_m_IsOn_20() { return static_cast<int32_t>(offsetof(Toggle_t420319739, ___m_IsOn_20)); }
	inline bool get_m_IsOn_20() const { return ___m_IsOn_20; }
	inline bool* get_address_of_m_IsOn_20() { return &___m_IsOn_20; }
	inline void set_m_IsOn_20(bool value)
	{
		___m_IsOn_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
