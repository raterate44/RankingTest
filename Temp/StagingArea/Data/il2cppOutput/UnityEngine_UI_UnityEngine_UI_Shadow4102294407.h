﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UI_UnityEngine_UI_BaseMeshEffect862263786.h"
#include "UnityEngine_UnityEngine_Color2250949164.h"
#include "UnityEngine_UnityEngine_Vector2465617798.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Shadow
struct  Shadow_t4102294407  : public BaseMeshEffect_t862263786
{
public:
	// UnityEngine.Color UnityEngine.UI.Shadow::m_EffectColor
	Color_t2250949164  ___m_EffectColor_4;
	// UnityEngine.Vector2 UnityEngine.UI.Shadow::m_EffectDistance
	Vector2_t465617798  ___m_EffectDistance_5;
	// System.Boolean UnityEngine.UI.Shadow::m_UseGraphicAlpha
	bool ___m_UseGraphicAlpha_6;

public:
	inline static int32_t get_offset_of_m_EffectColor_4() { return static_cast<int32_t>(offsetof(Shadow_t4102294407, ___m_EffectColor_4)); }
	inline Color_t2250949164  get_m_EffectColor_4() const { return ___m_EffectColor_4; }
	inline Color_t2250949164 * get_address_of_m_EffectColor_4() { return &___m_EffectColor_4; }
	inline void set_m_EffectColor_4(Color_t2250949164  value)
	{
		___m_EffectColor_4 = value;
	}

	inline static int32_t get_offset_of_m_EffectDistance_5() { return static_cast<int32_t>(offsetof(Shadow_t4102294407, ___m_EffectDistance_5)); }
	inline Vector2_t465617798  get_m_EffectDistance_5() const { return ___m_EffectDistance_5; }
	inline Vector2_t465617798 * get_address_of_m_EffectDistance_5() { return &___m_EffectDistance_5; }
	inline void set_m_EffectDistance_5(Vector2_t465617798  value)
	{
		___m_EffectDistance_5 = value;
	}

	inline static int32_t get_offset_of_m_UseGraphicAlpha_6() { return static_cast<int32_t>(offsetof(Shadow_t4102294407, ___m_UseGraphicAlpha_6)); }
	inline bool get_m_UseGraphicAlpha_6() const { return ___m_UseGraphicAlpha_6; }
	inline bool* get_address_of_m_UseGraphicAlpha_6() { return &___m_UseGraphicAlpha_6; }
	inline void set_m_UseGraphicAlpha_6(bool value)
	{
		___m_UseGraphicAlpha_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
