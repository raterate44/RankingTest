﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t3102830828;

#include "System_System_Text_RegularExpressions_Syntax_Captu3102830828.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.BalancingGroup
struct  BalancingGroup_t3405971450  : public CapturingGroup_t3102830828
{
public:
	// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.BalancingGroup::balance
	CapturingGroup_t3102830828 * ___balance_3;

public:
	inline static int32_t get_offset_of_balance_3() { return static_cast<int32_t>(offsetof(BalancingGroup_t3405971450, ___balance_3)); }
	inline CapturingGroup_t3102830828 * get_balance_3() const { return ___balance_3; }
	inline CapturingGroup_t3102830828 ** get_address_of_balance_3() { return &___balance_3; }
	inline void set_balance_3(CapturingGroup_t3102830828 * value)
	{
		___balance_3 = value;
		Il2CppCodeGenWriteBarrier(&___balance_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
