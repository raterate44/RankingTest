﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.BitArray
struct BitArray_t1153580258;
// System.Text.RegularExpressions.IntervalCollection
struct IntervalCollection_t999243462;

#include "System_System_Text_RegularExpressions_Syntax_Expre2003179150.h"
#include "System_System_Text_RegularExpressions_Interval2175215420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.CharacterClass
struct  CharacterClass_t1429618533  : public Expression_t2003179150
{
public:
	// System.Boolean System.Text.RegularExpressions.Syntax.CharacterClass::negate
	bool ___negate_1;
	// System.Boolean System.Text.RegularExpressions.Syntax.CharacterClass::ignore
	bool ___ignore_2;
	// System.Collections.BitArray System.Text.RegularExpressions.Syntax.CharacterClass::pos_cats
	BitArray_t1153580258 * ___pos_cats_3;
	// System.Collections.BitArray System.Text.RegularExpressions.Syntax.CharacterClass::neg_cats
	BitArray_t1153580258 * ___neg_cats_4;
	// System.Text.RegularExpressions.IntervalCollection System.Text.RegularExpressions.Syntax.CharacterClass::intervals
	IntervalCollection_t999243462 * ___intervals_5;

public:
	inline static int32_t get_offset_of_negate_1() { return static_cast<int32_t>(offsetof(CharacterClass_t1429618533, ___negate_1)); }
	inline bool get_negate_1() const { return ___negate_1; }
	inline bool* get_address_of_negate_1() { return &___negate_1; }
	inline void set_negate_1(bool value)
	{
		___negate_1 = value;
	}

	inline static int32_t get_offset_of_ignore_2() { return static_cast<int32_t>(offsetof(CharacterClass_t1429618533, ___ignore_2)); }
	inline bool get_ignore_2() const { return ___ignore_2; }
	inline bool* get_address_of_ignore_2() { return &___ignore_2; }
	inline void set_ignore_2(bool value)
	{
		___ignore_2 = value;
	}

	inline static int32_t get_offset_of_pos_cats_3() { return static_cast<int32_t>(offsetof(CharacterClass_t1429618533, ___pos_cats_3)); }
	inline BitArray_t1153580258 * get_pos_cats_3() const { return ___pos_cats_3; }
	inline BitArray_t1153580258 ** get_address_of_pos_cats_3() { return &___pos_cats_3; }
	inline void set_pos_cats_3(BitArray_t1153580258 * value)
	{
		___pos_cats_3 = value;
		Il2CppCodeGenWriteBarrier(&___pos_cats_3, value);
	}

	inline static int32_t get_offset_of_neg_cats_4() { return static_cast<int32_t>(offsetof(CharacterClass_t1429618533, ___neg_cats_4)); }
	inline BitArray_t1153580258 * get_neg_cats_4() const { return ___neg_cats_4; }
	inline BitArray_t1153580258 ** get_address_of_neg_cats_4() { return &___neg_cats_4; }
	inline void set_neg_cats_4(BitArray_t1153580258 * value)
	{
		___neg_cats_4 = value;
		Il2CppCodeGenWriteBarrier(&___neg_cats_4, value);
	}

	inline static int32_t get_offset_of_intervals_5() { return static_cast<int32_t>(offsetof(CharacterClass_t1429618533, ___intervals_5)); }
	inline IntervalCollection_t999243462 * get_intervals_5() const { return ___intervals_5; }
	inline IntervalCollection_t999243462 ** get_address_of_intervals_5() { return &___intervals_5; }
	inline void set_intervals_5(IntervalCollection_t999243462 * value)
	{
		___intervals_5 = value;
		Il2CppCodeGenWriteBarrier(&___intervals_5, value);
	}
};

struct CharacterClass_t1429618533_StaticFields
{
public:
	// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.Syntax.CharacterClass::upper_case_characters
	Interval_t2175215420  ___upper_case_characters_0;

public:
	inline static int32_t get_offset_of_upper_case_characters_0() { return static_cast<int32_t>(offsetof(CharacterClass_t1429618533_StaticFields, ___upper_case_characters_0)); }
	inline Interval_t2175215420  get_upper_case_characters_0() const { return ___upper_case_characters_0; }
	inline Interval_t2175215420 * get_address_of_upper_case_characters_0() { return &___upper_case_characters_0; }
	inline void set_upper_case_characters_0(Interval_t2175215420  value)
	{
		___upper_case_characters_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
