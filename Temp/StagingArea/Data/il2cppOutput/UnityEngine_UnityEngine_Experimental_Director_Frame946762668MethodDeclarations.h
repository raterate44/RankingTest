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


#include "codegen/il2cpp-codegen.h"


// Methods for marshaling
struct FrameData_t946762668;
struct FrameData_t946762668_marshaled_pinvoke;

extern "C" void FrameData_t946762668_marshal_pinvoke(const FrameData_t946762668& unmarshaled, FrameData_t946762668_marshaled_pinvoke& marshaled);
extern "C" void FrameData_t946762668_marshal_pinvoke_back(const FrameData_t946762668_marshaled_pinvoke& marshaled, FrameData_t946762668& unmarshaled);
extern "C" void FrameData_t946762668_marshal_pinvoke_cleanup(FrameData_t946762668_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct FrameData_t946762668;
struct FrameData_t946762668_marshaled_com;

extern "C" void FrameData_t946762668_marshal_com(const FrameData_t946762668& unmarshaled, FrameData_t946762668_marshaled_com& marshaled);
extern "C" void FrameData_t946762668_marshal_com_back(const FrameData_t946762668_marshaled_com& marshaled, FrameData_t946762668& unmarshaled);
extern "C" void FrameData_t946762668_marshal_com_cleanup(FrameData_t946762668_marshaled_com& marshaled);
