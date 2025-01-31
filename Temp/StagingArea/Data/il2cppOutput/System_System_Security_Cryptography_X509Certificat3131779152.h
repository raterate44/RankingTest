﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Cryptography.OidCollection
struct OidCollection_t400430593;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t321260052;

#include "mscorlib_System_Object707969140.h"
#include "System_System_Security_Cryptography_X509Certificat2277473179.h"
#include "System_System_Security_Cryptography_X509Certificate973511362.h"
#include "mscorlib_System_TimeSpan1834055012.h"
#include "System_System_Security_Cryptography_X509Certificate275241831.h"
#include "mscorlib_System_DateTime2933746480.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509ChainPolicy
struct  X509ChainPolicy_t3131779152  : public Il2CppObject
{
public:
	// System.Security.Cryptography.OidCollection System.Security.Cryptography.X509Certificates.X509ChainPolicy::apps
	OidCollection_t400430593 * ___apps_0;
	// System.Security.Cryptography.OidCollection System.Security.Cryptography.X509Certificates.X509ChainPolicy::cert
	OidCollection_t400430593 * ___cert_1;
	// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509ChainPolicy::store
	X509Certificate2Collection_t321260052 * ___store_2;
	// System.Security.Cryptography.X509Certificates.X509RevocationFlag System.Security.Cryptography.X509Certificates.X509ChainPolicy::rflag
	int32_t ___rflag_3;
	// System.Security.Cryptography.X509Certificates.X509RevocationMode System.Security.Cryptography.X509Certificates.X509ChainPolicy::mode
	int32_t ___mode_4;
	// System.TimeSpan System.Security.Cryptography.X509Certificates.X509ChainPolicy::timeout
	TimeSpan_t1834055012  ___timeout_5;
	// System.Security.Cryptography.X509Certificates.X509VerificationFlags System.Security.Cryptography.X509Certificates.X509ChainPolicy::vflags
	int32_t ___vflags_6;
	// System.DateTime System.Security.Cryptography.X509Certificates.X509ChainPolicy::vtime
	DateTime_t2933746480  ___vtime_7;

public:
	inline static int32_t get_offset_of_apps_0() { return static_cast<int32_t>(offsetof(X509ChainPolicy_t3131779152, ___apps_0)); }
	inline OidCollection_t400430593 * get_apps_0() const { return ___apps_0; }
	inline OidCollection_t400430593 ** get_address_of_apps_0() { return &___apps_0; }
	inline void set_apps_0(OidCollection_t400430593 * value)
	{
		___apps_0 = value;
		Il2CppCodeGenWriteBarrier(&___apps_0, value);
	}

	inline static int32_t get_offset_of_cert_1() { return static_cast<int32_t>(offsetof(X509ChainPolicy_t3131779152, ___cert_1)); }
	inline OidCollection_t400430593 * get_cert_1() const { return ___cert_1; }
	inline OidCollection_t400430593 ** get_address_of_cert_1() { return &___cert_1; }
	inline void set_cert_1(OidCollection_t400430593 * value)
	{
		___cert_1 = value;
		Il2CppCodeGenWriteBarrier(&___cert_1, value);
	}

	inline static int32_t get_offset_of_store_2() { return static_cast<int32_t>(offsetof(X509ChainPolicy_t3131779152, ___store_2)); }
	inline X509Certificate2Collection_t321260052 * get_store_2() const { return ___store_2; }
	inline X509Certificate2Collection_t321260052 ** get_address_of_store_2() { return &___store_2; }
	inline void set_store_2(X509Certificate2Collection_t321260052 * value)
	{
		___store_2 = value;
		Il2CppCodeGenWriteBarrier(&___store_2, value);
	}

	inline static int32_t get_offset_of_rflag_3() { return static_cast<int32_t>(offsetof(X509ChainPolicy_t3131779152, ___rflag_3)); }
	inline int32_t get_rflag_3() const { return ___rflag_3; }
	inline int32_t* get_address_of_rflag_3() { return &___rflag_3; }
	inline void set_rflag_3(int32_t value)
	{
		___rflag_3 = value;
	}

	inline static int32_t get_offset_of_mode_4() { return static_cast<int32_t>(offsetof(X509ChainPolicy_t3131779152, ___mode_4)); }
	inline int32_t get_mode_4() const { return ___mode_4; }
	inline int32_t* get_address_of_mode_4() { return &___mode_4; }
	inline void set_mode_4(int32_t value)
	{
		___mode_4 = value;
	}

	inline static int32_t get_offset_of_timeout_5() { return static_cast<int32_t>(offsetof(X509ChainPolicy_t3131779152, ___timeout_5)); }
	inline TimeSpan_t1834055012  get_timeout_5() const { return ___timeout_5; }
	inline TimeSpan_t1834055012 * get_address_of_timeout_5() { return &___timeout_5; }
	inline void set_timeout_5(TimeSpan_t1834055012  value)
	{
		___timeout_5 = value;
	}

	inline static int32_t get_offset_of_vflags_6() { return static_cast<int32_t>(offsetof(X509ChainPolicy_t3131779152, ___vflags_6)); }
	inline int32_t get_vflags_6() const { return ___vflags_6; }
	inline int32_t* get_address_of_vflags_6() { return &___vflags_6; }
	inline void set_vflags_6(int32_t value)
	{
		___vflags_6 = value;
	}

	inline static int32_t get_offset_of_vtime_7() { return static_cast<int32_t>(offsetof(X509ChainPolicy_t3131779152, ___vtime_7)); }
	inline DateTime_t2933746480  get_vtime_7() const { return ___vtime_7; }
	inline DateTime_t2933746480 * get_address_of_vtime_7() { return &___vtime_7; }
	inline void set_vtime_7(DateTime_t2933746480  value)
	{
		___vtime_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
