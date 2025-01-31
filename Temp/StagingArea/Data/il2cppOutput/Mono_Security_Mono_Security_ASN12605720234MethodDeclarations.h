﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Mono.Security.ASN1
struct ASN1_t2605720235;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_ASN12605720234.h"

// System.Void Mono.Security.ASN1::.ctor(System.Byte)
extern "C"  void ASN1__ctor_m32691595 (ASN1_t2605720235 * __this, uint8_t ___tag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.ASN1::.ctor(System.Byte,System.Byte[])
extern "C"  void ASN1__ctor_m3688855288 (ASN1_t2605720235 * __this, uint8_t ___tag0, ByteU5BU5D_t3835026402* ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.ASN1::.ctor(System.Byte[])
extern "C"  void ASN1__ctor_m2812922997 (ASN1_t2605720235 * __this, ByteU5BU5D_t3835026402* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.ASN1::get_Count()
extern "C"  int32_t ASN1_get_Count_m579313466 (ASN1_t2605720235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.ASN1::get_Tag()
extern "C"  uint8_t ASN1_get_Tag_m2798873007 (ASN1_t2605720235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.ASN1::get_Length()
extern "C"  int32_t ASN1_get_Length_m778823697 (ASN1_t2605720235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.ASN1::get_Value()
extern "C"  ByteU5BU5D_t3835026402* ASN1_get_Value_m2229768312 (ASN1_t2605720235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.ASN1::set_Value(System.Byte[])
extern "C"  void ASN1_set_Value_m1063274345 (ASN1_t2605720235 * __this, ByteU5BU5D_t3835026402* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.ASN1::CompareArray(System.Byte[],System.Byte[])
extern "C"  bool ASN1_CompareArray_m2071014626 (ASN1_t2605720235 * __this, ByteU5BU5D_t3835026402* ___array10, ByteU5BU5D_t3835026402* ___array21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.ASN1::CompareValue(System.Byte[])
extern "C"  bool ASN1_CompareValue_m3117818461 (ASN1_t2605720235 * __this, ByteU5BU5D_t3835026402* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.ASN1::Add(Mono.Security.ASN1)
extern "C"  ASN1_t2605720235 * ASN1_Add_m1528660622 (ASN1_t2605720235 * __this, ASN1_t2605720235 * ___asn10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.ASN1::GetBytes()
extern "C"  ByteU5BU5D_t3835026402* ASN1_GetBytes_m3982410951 (ASN1_t2605720235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.ASN1::Decode(System.Byte[],System.Int32&,System.Int32)
extern "C"  void ASN1_Decode_m947929221 (ASN1_t2605720235 * __this, ByteU5BU5D_t3835026402* ___asn10, int32_t* ___anPos1, int32_t ___anLength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.ASN1::DecodeTLV(System.Byte[],System.Int32&,System.Byte&,System.Int32&,System.Byte[]&)
extern "C"  void ASN1_DecodeTLV_m2898581687 (ASN1_t2605720235 * __this, ByteU5BU5D_t3835026402* ___asn10, int32_t* ___pos1, uint8_t* ___tag2, int32_t* ___length3, ByteU5BU5D_t3835026402** ___content4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.ASN1::get_Item(System.Int32)
extern "C"  ASN1_t2605720235 * ASN1_get_Item_m3505242534 (ASN1_t2605720235 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.ASN1::Element(System.Int32,System.Byte)
extern "C"  ASN1_t2605720235 * ASN1_Element_m1568353429 (ASN1_t2605720235 * __this, int32_t ___index0, uint8_t ___anTag1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.ASN1::ToString()
extern "C"  String_t* ASN1_ToString_m2669105451 (ASN1_t2605720235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
