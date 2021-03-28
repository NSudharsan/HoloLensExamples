#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Mesh[]
struct MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8;
// UnityEngine.ParticleSystem/Particle[]
struct ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E;
// UnityEngine.ParticleSystemRenderer
struct ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;


struct MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8;
struct ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t0349A77A3F13355590A8D42950AB18125A07DF5D 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color32
struct  Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.ParticleSystem/EmissionModule
struct  EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/EmissionModule::m_ParticleSystem
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParticleSystem_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D_marshaled_pinvoke
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D_marshaled_com
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/MainModule
struct  MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/MainModule::m_ParticleSystem
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParticleSystem_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B_marshaled_pinvoke
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B_marshaled_com
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/NoiseModule
struct  NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/NoiseModule::m_ParticleSystem
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParticleSystem_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/NoiseModule
struct NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591_marshaled_pinvoke
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/NoiseModule
struct NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591_marshaled_com
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/ShapeModule
struct  ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/ShapeModule::m_ParticleSystem
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParticleSystem_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/ShapeModule
struct ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_marshaled_pinvoke
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/ShapeModule
struct ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_marshaled_com
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
};

// UnityEngine.AnimationCurve
struct  AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.ParticleSystemCurveMode
struct  ParticleSystemCurveMode_t1B9D50590BC22BDD142A21664B8E2F9475409342 
{
public:
	// System.Int32 UnityEngine.ParticleSystemCurveMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParticleSystemCurveMode_t1B9D50590BC22BDD142A21664B8E2F9475409342, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ParticleSystemSimulationSpace
struct  ParticleSystemSimulationSpace_tC10E7C116E400697EDF9E5C81AD5BAAFD08F4C11 
{
public:
	// System.Int32 UnityEngine.ParticleSystemSimulationSpace::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParticleSystemSimulationSpace_tC10E7C116E400697EDF9E5C81AD5BAAFD08F4C11, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ParticleSystem/Particle
struct  Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 
{
public:
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Position_0;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Velocity_1;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AnimatedVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_AnimatedVelocity_2;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_InitialVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_InitialVelocity_3;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AxisOfRotation
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_AxisOfRotation_4;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Rotation
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Rotation_5;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AngularVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_AngularVelocity_6;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_StartSize
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_StartSize_7;
	// UnityEngine.Color32 UnityEngine.ParticleSystem/Particle::m_StartColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_StartColor_8;
	// System.UInt32 UnityEngine.ParticleSystem/Particle::m_RandomSeed
	uint32_t ___m_RandomSeed_9;
	// System.UInt32 UnityEngine.ParticleSystem/Particle::m_ParentRandomSeed
	uint32_t ___m_ParentRandomSeed_10;
	// System.Single UnityEngine.ParticleSystem/Particle::m_Lifetime
	float ___m_Lifetime_11;
	// System.Single UnityEngine.ParticleSystem/Particle::m_StartLifetime
	float ___m_StartLifetime_12;
	// System.Int32 UnityEngine.ParticleSystem/Particle::m_MeshIndex
	int32_t ___m_MeshIndex_13;
	// System.Single UnityEngine.ParticleSystem/Particle::m_EmitAccumulator0
	float ___m_EmitAccumulator0_14;
	// System.Single UnityEngine.ParticleSystem/Particle::m_EmitAccumulator1
	float ___m_EmitAccumulator1_15;
	// System.UInt32 UnityEngine.ParticleSystem/Particle::m_Flags
	uint32_t ___m_Flags_16;

public:
	inline static int32_t get_offset_of_m_Position_0() { return static_cast<int32_t>(offsetof(Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1, ___m_Position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Position_0() const { return ___m_Position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Position_0() { return &___m_Position_0; }
	inline void set_m_Position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Position_0 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_1() { return static_cast<int32_t>(offsetof(Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1, ___m_Velocity_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Velocity_1() const { return ___m_Velocity_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Velocity_1() { return &___m_Velocity_1; }
	inline void set_m_Velocity_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Velocity_1 = value;
	}

	inline static int32_t get_offset_of_m_AnimatedVelocity_2() { return static_cast<int32_t>(offsetof(Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1, ___m_AnimatedVelocity_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_AnimatedVelocity_2() const { return ___m_AnimatedVelocity_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_AnimatedVelocity_2() { return &___m_AnimatedVelocity_2; }
	inline void set_m_AnimatedVelocity_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_AnimatedVelocity_2 = value;
	}

	inline static int32_t get_offset_of_m_InitialVelocity_3() { return static_cast<int32_t>(offsetof(Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1, ___m_InitialVelocity_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_InitialVelocity_3() const { return ___m_InitialVelocity_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_InitialVelocity_3() { return &___m_InitialVelocity_3; }
	inline void set_m_InitialVelocity_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_InitialVelocity_3 = value;
	}

	inline static int32_t get_offset_of_m_AxisOfRotation_4() { return static_cast<int32_t>(offsetof(Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1, ___m_AxisOfRotation_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_AxisOfRotation_4() const { return ___m_AxisOfRotation_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_AxisOfRotation_4() { return &___m_AxisOfRotation_4; }
	inline void set_m_AxisOfRotation_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_AxisOfRotation_4 = value;
	}

	inline static int32_t get_offset_of_m_Rotation_5() { return static_cast<int32_t>(offsetof(Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1, ___m_Rotation_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Rotation_5() const { return ___m_Rotation_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Rotation_5() { return &___m_Rotation_5; }
	inline void set_m_Rotation_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Rotation_5 = value;
	}

	inline static int32_t get_offset_of_m_AngularVelocity_6() { return static_cast<int32_t>(offsetof(Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1, ___m_AngularVelocity_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_AngularVelocity_6() const { return ___m_AngularVelocity_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_AngularVelocity_6() { return &___m_AngularVelocity_6; }
	inline void set_m_AngularVelocity_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_AngularVelocity_6 = value;
	}

	inline static int32_t get_offset_of_m_StartSize_7() { return static_cast<int32_t>(offsetof(Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1, ___m_StartSize_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_StartSize_7() const { return ___m_StartSize_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_StartSize_7() { return &___m_StartSize_7; }
	inline void set_m_StartSize_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_StartSize_7 = value;
	}

	inline static int32_t get_offset_of_m_StartColor_8() { return static_cast<int32_t>(offsetof(Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1, ___m_StartColor_8)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_StartColor_8() const { return ___m_StartColor_8; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_StartColor_8() { return &___m_StartColor_8; }
	inline void set_m_StartColor_8(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_StartColor_8 = value;
	}

	inline static int32_t get_offset_of_m_RandomSeed_9() { return static_cast<int32_t>(offsetof(Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1, ___m_RandomSeed_9)); }
	inline uint32_t get_m_RandomSeed_9() const { return ___m_RandomSeed_9; }
	inline uint32_t* get_address_of_m_RandomSeed_9() { return &___m_RandomSeed_9; }
	inline void set_m_RandomSeed_9(uint32_t value)
	{
		___m_RandomSeed_9 = value;
	}

	inline static int32_t get_offset_of_m_ParentRandomSeed_10() { return static_cast<int32_t>(offsetof(Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1, ___m_ParentRandomSeed_10)); }
	inline uint32_t get_m_ParentRandomSeed_10() const { return ___m_ParentRandomSeed_10; }
	inline uint32_t* get_address_of_m_ParentRandomSeed_10() { return &___m_ParentRandomSeed_10; }
	inline void set_m_ParentRandomSeed_10(uint32_t value)
	{
		___m_ParentRandomSeed_10 = value;
	}

	inline static int32_t get_offset_of_m_Lifetime_11() { return static_cast<int32_t>(offsetof(Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1, ___m_Lifetime_11)); }
	inline float get_m_Lifetime_11() const { return ___m_Lifetime_11; }
	inline float* get_address_of_m_Lifetime_11() { return &___m_Lifetime_11; }
	inline void set_m_Lifetime_11(float value)
	{
		___m_Lifetime_11 = value;
	}

	inline static int32_t get_offset_of_m_StartLifetime_12() { return static_cast<int32_t>(offsetof(Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1, ___m_StartLifetime_12)); }
	inline float get_m_StartLifetime_12() const { return ___m_StartLifetime_12; }
	inline float* get_address_of_m_StartLifetime_12() { return &___m_StartLifetime_12; }
	inline void set_m_StartLifetime_12(float value)
	{
		___m_StartLifetime_12 = value;
	}

	inline static int32_t get_offset_of_m_MeshIndex_13() { return static_cast<int32_t>(offsetof(Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1, ___m_MeshIndex_13)); }
	inline int32_t get_m_MeshIndex_13() const { return ___m_MeshIndex_13; }
	inline int32_t* get_address_of_m_MeshIndex_13() { return &___m_MeshIndex_13; }
	inline void set_m_MeshIndex_13(int32_t value)
	{
		___m_MeshIndex_13 = value;
	}

	inline static int32_t get_offset_of_m_EmitAccumulator0_14() { return static_cast<int32_t>(offsetof(Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1, ___m_EmitAccumulator0_14)); }
	inline float get_m_EmitAccumulator0_14() const { return ___m_EmitAccumulator0_14; }
	inline float* get_address_of_m_EmitAccumulator0_14() { return &___m_EmitAccumulator0_14; }
	inline void set_m_EmitAccumulator0_14(float value)
	{
		___m_EmitAccumulator0_14 = value;
	}

	inline static int32_t get_offset_of_m_EmitAccumulator1_15() { return static_cast<int32_t>(offsetof(Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1, ___m_EmitAccumulator1_15)); }
	inline float get_m_EmitAccumulator1_15() const { return ___m_EmitAccumulator1_15; }
	inline float* get_address_of_m_EmitAccumulator1_15() { return &___m_EmitAccumulator1_15; }
	inline void set_m_EmitAccumulator1_15(float value)
	{
		___m_EmitAccumulator1_15 = value;
	}

	inline static int32_t get_offset_of_m_Flags_16() { return static_cast<int32_t>(offsetof(Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1, ___m_Flags_16)); }
	inline uint32_t get_m_Flags_16() const { return ___m_Flags_16; }
	inline uint32_t* get_address_of_m_Flags_16() { return &___m_Flags_16; }
	inline void set_m_Flags_16(uint32_t value)
	{
		___m_Flags_16 = value;
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Mesh
struct  Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.ParticleSystem/EmitParams
struct  EmitParams_t4F6429654653488A5D430701CD0743D011807CCC 
{
public:
	// UnityEngine.ParticleSystem/Particle UnityEngine.ParticleSystem/EmitParams::m_Particle
	Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1  ___m_Particle_0;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_PositionSet
	bool ___m_PositionSet_1;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_VelocitySet
	bool ___m_VelocitySet_2;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_AxisOfRotationSet
	bool ___m_AxisOfRotationSet_3;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_RotationSet
	bool ___m_RotationSet_4;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_AngularVelocitySet
	bool ___m_AngularVelocitySet_5;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_StartSizeSet
	bool ___m_StartSizeSet_6;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_StartColorSet
	bool ___m_StartColorSet_7;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_RandomSeedSet
	bool ___m_RandomSeedSet_8;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_StartLifetimeSet
	bool ___m_StartLifetimeSet_9;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_MeshIndexSet
	bool ___m_MeshIndexSet_10;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_ApplyShapeToPosition
	bool ___m_ApplyShapeToPosition_11;

public:
	inline static int32_t get_offset_of_m_Particle_0() { return static_cast<int32_t>(offsetof(EmitParams_t4F6429654653488A5D430701CD0743D011807CCC, ___m_Particle_0)); }
	inline Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1  get_m_Particle_0() const { return ___m_Particle_0; }
	inline Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 * get_address_of_m_Particle_0() { return &___m_Particle_0; }
	inline void set_m_Particle_0(Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1  value)
	{
		___m_Particle_0 = value;
	}

	inline static int32_t get_offset_of_m_PositionSet_1() { return static_cast<int32_t>(offsetof(EmitParams_t4F6429654653488A5D430701CD0743D011807CCC, ___m_PositionSet_1)); }
	inline bool get_m_PositionSet_1() const { return ___m_PositionSet_1; }
	inline bool* get_address_of_m_PositionSet_1() { return &___m_PositionSet_1; }
	inline void set_m_PositionSet_1(bool value)
	{
		___m_PositionSet_1 = value;
	}

	inline static int32_t get_offset_of_m_VelocitySet_2() { return static_cast<int32_t>(offsetof(EmitParams_t4F6429654653488A5D430701CD0743D011807CCC, ___m_VelocitySet_2)); }
	inline bool get_m_VelocitySet_2() const { return ___m_VelocitySet_2; }
	inline bool* get_address_of_m_VelocitySet_2() { return &___m_VelocitySet_2; }
	inline void set_m_VelocitySet_2(bool value)
	{
		___m_VelocitySet_2 = value;
	}

	inline static int32_t get_offset_of_m_AxisOfRotationSet_3() { return static_cast<int32_t>(offsetof(EmitParams_t4F6429654653488A5D430701CD0743D011807CCC, ___m_AxisOfRotationSet_3)); }
	inline bool get_m_AxisOfRotationSet_3() const { return ___m_AxisOfRotationSet_3; }
	inline bool* get_address_of_m_AxisOfRotationSet_3() { return &___m_AxisOfRotationSet_3; }
	inline void set_m_AxisOfRotationSet_3(bool value)
	{
		___m_AxisOfRotationSet_3 = value;
	}

	inline static int32_t get_offset_of_m_RotationSet_4() { return static_cast<int32_t>(offsetof(EmitParams_t4F6429654653488A5D430701CD0743D011807CCC, ___m_RotationSet_4)); }
	inline bool get_m_RotationSet_4() const { return ___m_RotationSet_4; }
	inline bool* get_address_of_m_RotationSet_4() { return &___m_RotationSet_4; }
	inline void set_m_RotationSet_4(bool value)
	{
		___m_RotationSet_4 = value;
	}

	inline static int32_t get_offset_of_m_AngularVelocitySet_5() { return static_cast<int32_t>(offsetof(EmitParams_t4F6429654653488A5D430701CD0743D011807CCC, ___m_AngularVelocitySet_5)); }
	inline bool get_m_AngularVelocitySet_5() const { return ___m_AngularVelocitySet_5; }
	inline bool* get_address_of_m_AngularVelocitySet_5() { return &___m_AngularVelocitySet_5; }
	inline void set_m_AngularVelocitySet_5(bool value)
	{
		___m_AngularVelocitySet_5 = value;
	}

	inline static int32_t get_offset_of_m_StartSizeSet_6() { return static_cast<int32_t>(offsetof(EmitParams_t4F6429654653488A5D430701CD0743D011807CCC, ___m_StartSizeSet_6)); }
	inline bool get_m_StartSizeSet_6() const { return ___m_StartSizeSet_6; }
	inline bool* get_address_of_m_StartSizeSet_6() { return &___m_StartSizeSet_6; }
	inline void set_m_StartSizeSet_6(bool value)
	{
		___m_StartSizeSet_6 = value;
	}

	inline static int32_t get_offset_of_m_StartColorSet_7() { return static_cast<int32_t>(offsetof(EmitParams_t4F6429654653488A5D430701CD0743D011807CCC, ___m_StartColorSet_7)); }
	inline bool get_m_StartColorSet_7() const { return ___m_StartColorSet_7; }
	inline bool* get_address_of_m_StartColorSet_7() { return &___m_StartColorSet_7; }
	inline void set_m_StartColorSet_7(bool value)
	{
		___m_StartColorSet_7 = value;
	}

	inline static int32_t get_offset_of_m_RandomSeedSet_8() { return static_cast<int32_t>(offsetof(EmitParams_t4F6429654653488A5D430701CD0743D011807CCC, ___m_RandomSeedSet_8)); }
	inline bool get_m_RandomSeedSet_8() const { return ___m_RandomSeedSet_8; }
	inline bool* get_address_of_m_RandomSeedSet_8() { return &___m_RandomSeedSet_8; }
	inline void set_m_RandomSeedSet_8(bool value)
	{
		___m_RandomSeedSet_8 = value;
	}

	inline static int32_t get_offset_of_m_StartLifetimeSet_9() { return static_cast<int32_t>(offsetof(EmitParams_t4F6429654653488A5D430701CD0743D011807CCC, ___m_StartLifetimeSet_9)); }
	inline bool get_m_StartLifetimeSet_9() const { return ___m_StartLifetimeSet_9; }
	inline bool* get_address_of_m_StartLifetimeSet_9() { return &___m_StartLifetimeSet_9; }
	inline void set_m_StartLifetimeSet_9(bool value)
	{
		___m_StartLifetimeSet_9 = value;
	}

	inline static int32_t get_offset_of_m_MeshIndexSet_10() { return static_cast<int32_t>(offsetof(EmitParams_t4F6429654653488A5D430701CD0743D011807CCC, ___m_MeshIndexSet_10)); }
	inline bool get_m_MeshIndexSet_10() const { return ___m_MeshIndexSet_10; }
	inline bool* get_address_of_m_MeshIndexSet_10() { return &___m_MeshIndexSet_10; }
	inline void set_m_MeshIndexSet_10(bool value)
	{
		___m_MeshIndexSet_10 = value;
	}

	inline static int32_t get_offset_of_m_ApplyShapeToPosition_11() { return static_cast<int32_t>(offsetof(EmitParams_t4F6429654653488A5D430701CD0743D011807CCC, ___m_ApplyShapeToPosition_11)); }
	inline bool get_m_ApplyShapeToPosition_11() const { return ___m_ApplyShapeToPosition_11; }
	inline bool* get_address_of_m_ApplyShapeToPosition_11() { return &___m_ApplyShapeToPosition_11; }
	inline void set_m_ApplyShapeToPosition_11(bool value)
	{
		___m_ApplyShapeToPosition_11 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/EmitParams
struct EmitParams_t4F6429654653488A5D430701CD0743D011807CCC_marshaled_pinvoke
{
	Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1  ___m_Particle_0;
	int32_t ___m_PositionSet_1;
	int32_t ___m_VelocitySet_2;
	int32_t ___m_AxisOfRotationSet_3;
	int32_t ___m_RotationSet_4;
	int32_t ___m_AngularVelocitySet_5;
	int32_t ___m_StartSizeSet_6;
	int32_t ___m_StartColorSet_7;
	int32_t ___m_RandomSeedSet_8;
	int32_t ___m_StartLifetimeSet_9;
	int32_t ___m_MeshIndexSet_10;
	int32_t ___m_ApplyShapeToPosition_11;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/EmitParams
struct EmitParams_t4F6429654653488A5D430701CD0743D011807CCC_marshaled_com
{
	Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1  ___m_Particle_0;
	int32_t ___m_PositionSet_1;
	int32_t ___m_VelocitySet_2;
	int32_t ___m_AxisOfRotationSet_3;
	int32_t ___m_RotationSet_4;
	int32_t ___m_AngularVelocitySet_5;
	int32_t ___m_StartSizeSet_6;
	int32_t ___m_StartColorSet_7;
	int32_t ___m_RandomSeedSet_8;
	int32_t ___m_StartLifetimeSet_9;
	int32_t ___m_MeshIndexSet_10;
	int32_t ___m_ApplyShapeToPosition_11;
};

// UnityEngine.ParticleSystem/MinMaxCurve
struct  MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD 
{
public:
	// UnityEngine.ParticleSystemCurveMode UnityEngine.ParticleSystem/MinMaxCurve::m_Mode
	int32_t ___m_Mode_0;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMultiplier
	float ___m_CurveMultiplier_1;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMin
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___m_CurveMin_2;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMax
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___m_CurveMax_3;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMin
	float ___m_ConstantMin_4;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMax
	float ___m_ConstantMax_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_CurveMultiplier_1() { return static_cast<int32_t>(offsetof(MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD, ___m_CurveMultiplier_1)); }
	inline float get_m_CurveMultiplier_1() const { return ___m_CurveMultiplier_1; }
	inline float* get_address_of_m_CurveMultiplier_1() { return &___m_CurveMultiplier_1; }
	inline void set_m_CurveMultiplier_1(float value)
	{
		___m_CurveMultiplier_1 = value;
	}

	inline static int32_t get_offset_of_m_CurveMin_2() { return static_cast<int32_t>(offsetof(MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD, ___m_CurveMin_2)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_m_CurveMin_2() const { return ___m_CurveMin_2; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_m_CurveMin_2() { return &___m_CurveMin_2; }
	inline void set_m_CurveMin_2(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___m_CurveMin_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurveMin_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurveMax_3() { return static_cast<int32_t>(offsetof(MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD, ___m_CurveMax_3)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_m_CurveMax_3() const { return ___m_CurveMax_3; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_m_CurveMax_3() { return &___m_CurveMax_3; }
	inline void set_m_CurveMax_3(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___m_CurveMax_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurveMax_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ConstantMin_4() { return static_cast<int32_t>(offsetof(MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD, ___m_ConstantMin_4)); }
	inline float get_m_ConstantMin_4() const { return ___m_ConstantMin_4; }
	inline float* get_address_of_m_ConstantMin_4() { return &___m_ConstantMin_4; }
	inline void set_m_ConstantMin_4(float value)
	{
		___m_ConstantMin_4 = value;
	}

	inline static int32_t get_offset_of_m_ConstantMax_5() { return static_cast<int32_t>(offsetof(MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD, ___m_ConstantMax_5)); }
	inline float get_m_ConstantMax_5() const { return ___m_ConstantMax_5; }
	inline float* get_address_of_m_ConstantMax_5() { return &___m_ConstantMax_5; }
	inline void set_m_ConstantMax_5(float value)
	{
		___m_ConstantMax_5 = value;
	}
};


// UnityEngine.ParticleSystem
struct  ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.ParticleSystemRenderer
struct  ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.ParticleSystem/Particle[]
struct ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1  m_Items[1];

public:
	inline Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Mesh[]
struct MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * m_Items[1];

public:
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



// System.Void UnityEngine.ParticleSystem/Particle::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Particle_set_position_mB749E41CD3C4C6DF501C0D68B6211CF7E2217FC2 (Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/Particle::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Particle_set_velocity_m4894BD6A75E7A1FCD433927F93396AA29A59709B (Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/Particle::set_lifetime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Particle_set_lifetime_mCE97F9D17D1E660DB9D9F3244150CB6624A74DC3 (Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/Particle::set_startLifetime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Particle_set_startLifetime_m7AC09262BBFE8818EA6B61BDB62264184CD27A82 (Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/Particle::set_startSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Particle_set_startSize_m7CDEE5B620B3D26B4CC5C1DA7C6E24ACCCF64466 (Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/Particle::set_rotation3D(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Particle_set_rotation3D_m0F402760524A81307FA4940751751C44DF2F77D0 (Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/Particle::set_angularVelocity3D(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Particle_set_angularVelocity3D_mE9A9544DF33CD0CCF4F1CA14994A2C436E4DF1F8 (Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/Particle::set_startColor(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Particle_set_startColor_mA7B0363E82B7A7CBB1C83F8C5D49FB7B7AF75554 (Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 * __this, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/Particle::set_randomSeed(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Particle_set_randomSeed_m8FD7A4DB7F8E7EBDEF2C51A28197F8D9D7CB6E04 (Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem::EmitOld_Internal(UnityEngine.ParticleSystem/Particle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_EmitOld_Internal_m4F094DC523986298D5626F0F3F2335DFF596C993 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 * ___particle0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem::SetParticles(UnityEngine.ParticleSystem/Particle[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_SetParticles_m79867147E65742BE1E1ADF0222C090BD6AF1E20A (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C* ___particles0, int32_t ___size1, int32_t ___offset2, const RuntimeMethod* method);
// System.Int32 UnityEngine.ParticleSystem::GetParticles(UnityEngine.ParticleSystem/Particle[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParticleSystem_GetParticles_mC310C32157EA281ECDC320B63B1E43ED5F6292B3 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C* ___particles0, int32_t ___size1, int32_t ___offset2, const RuntimeMethod* method);
// System.Int32 UnityEngine.ParticleSystem::GetParticles(UnityEngine.ParticleSystem/Particle[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParticleSystem_GetParticles_mF6FC6048609DD24AF7F1B8890C44AEC480BDFDEA (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C* ___particles0, int32_t ___size1, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem::Emit_Internal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Emit_Internal_m7C72C31F7F4875B54B00E255A450B045A4449646 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, int32_t ___count0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem::Emit_Injected(UnityEngine.ParticleSystem/EmitParams&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Emit_Injected_mC31E36D577A2D3135436438BFC27B6C76D9ADC72 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, EmitParams_t4F6429654653488A5D430701CD0743D011807CCC * ___emitParams0, int32_t ___count1, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/MainModule::.ctor(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule__ctor_m34F626B568C6D3C80A036409049761C8316E6A76 (MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B * __this, ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___particleSystem0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/EmissionModule::.ctor(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmissionModule__ctor_m9DFD2A0BB8BFAD2191C54E6627FC3B0E641EDD51 (EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D * __this, ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___particleSystem0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/ShapeModule::.ctor(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule__ctor_mB0CE9D41BBE5FFA5B70F465541BA63D9BEEA7264 (ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA * __this, ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___particleSystem0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/NoiseModule::.ctor(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule__ctor_mE450BC95A9B436FA1627E4D24B7B4E7E723DDB5B (NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 * __this, ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___particleSystem0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/EmissionModule::set_enabled_Injected(UnityEngine.ParticleSystem/EmissionModule&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmissionModule_set_enabled_Injected_m35208A8279D12A78D5DBCF751BF1760869051C82 (EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D * ____unity_self0, bool ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/EmissionModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmissionModule_set_enabled_mD9FD50C9F5EECD04B22D03E5C00C7DD64D2AC1F1 (EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/EmissionModule::set_rateOverTime_Injected(UnityEngine.ParticleSystem/EmissionModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmissionModule_set_rateOverTime_Injected_m19782FA56F82A6F0A6AFE6454E662F41098B6E3B (EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D * ____unity_self0, MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/EmissionModule::set_rateOverTime(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmissionModule_set_rateOverTime_m4EE4643D8E8B8BEC37BCB16DB76C9B8E4E4C8F48 (EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D * __this, MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/EmissionModule::set_rateOverDistance_Injected(UnityEngine.ParticleSystem/EmissionModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmissionModule_set_rateOverDistance_Injected_mAE704D450772549F48016A5703CA1DD5C3BF4CB3 (EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D * ____unity_self0, MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/EmissionModule::set_rateOverDistance(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmissionModule_set_rateOverDistance_mADD71A92B6860FD4CDA75A8C6E3C96A2E64B711A (EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D * __this, MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/MainModule::set_loop_Injected(UnityEngine.ParticleSystem/MainModule&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_loop_Injected_m064E3166CAA11D0842F105E473A231C0C15DE1B3 (MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B * ____unity_self0, bool ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/MainModule::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_loop_m9F43A092EFABBE92662DF9EDA73AF8D9C72DABB2 (MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/MainModule::set_simulationSpace_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystemSimulationSpace)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_simulationSpace_Injected_mFD6F06EA32114BC5C9D9CF3C10A5A0066E40664C (MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B * ____unity_self0, int32_t ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/MainModule::set_simulationSpace(UnityEngine.ParticleSystemSimulationSpace)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_simulationSpace_m59583EC5A1D9D64EC8C0CCE275CE6669FC8E268F (MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/MainModule::set_playOnAwake_Injected(UnityEngine.ParticleSystem/MainModule&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_playOnAwake_Injected_mAE88821DF50EB8AFD7079C587CC7FB633626B5FB (MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B * ____unity_self0, bool ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/MainModule::set_playOnAwake(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_playOnAwake_m85E164C05D5C39B0B3C6139BE360BAB41B0D7FCF (MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/MainModule::set_maxParticles_Injected(UnityEngine.ParticleSystem/MainModule&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_maxParticles_Injected_m6D4D611540F53CC4D8F21D9DD7EF3F68FC50F471 (MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B * ____unity_self0, int32_t ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/MainModule::set_maxParticles(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_maxParticles_m6FD14B44787B44D38DEDAE4FCBE9596A86A0460D (MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve__ctor_mF14A2DBABFDCF1E855911241A555949CAF212AE3 (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD * __this, float ___constant0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_enabled_Injected(UnityEngine.ParticleSystem/NoiseModule&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_enabled_Injected_m5BDCF3B7627CCD5C1010303F99147CA0B568F304 (NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 * ____unity_self0, bool ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_enabled_mEB9111E78363A42F79DC3AF9D97271053BAF66B8 (NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_strengthX_Injected(UnityEngine.ParticleSystem/NoiseModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_strengthX_Injected_mD80380BC6C8619B75DF8FF2A1F398BE7514E4EFA (NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 * ____unity_self0, MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_strengthX(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_strengthX_m916C928A094561A3191BACD29721D6B30E004E72 (NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 * __this, MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_strengthY_Injected(UnityEngine.ParticleSystem/NoiseModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_strengthY_Injected_mD384ABE98D36428BF15F75433143CAAAFAAECF89 (NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 * ____unity_self0, MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_strengthY(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_strengthY_m6D453B7A76EFEEFBA10823751FF27762FF241E5B (NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 * __this, MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_strengthZ_Injected(UnityEngine.ParticleSystem/NoiseModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_strengthZ_Injected_mE7178872EB165337AA3747D9A7C805C5E54DC0EB (NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 * ____unity_self0, MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_strengthZ(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_strengthZ_m0610693D3D5F8710707F516CE1F1B9CBBEF27DE5 (NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 * __this, MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_frequency_Injected(UnityEngine.ParticleSystem/NoiseModule&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_frequency_Injected_m532C31E13CDFAE1039EAEB267496FE0A238B0ABC (NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 * ____unity_self0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_frequency(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_frequency_mB9D083FBE9E97B0D5F7D29CE67FCD347DECB5F11 (NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_octaveCount_Injected(UnityEngine.ParticleSystem/NoiseModule&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_octaveCount_Injected_mDC9275A38357F8A3A4773172BC986CB1B7FB5417 (NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 * ____unity_self0, int32_t ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_octaveCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_octaveCount_m001A3DBB38E0A3FA28F3EB91EC3B6CA89F070A6D (NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_scrollSpeed_Injected(UnityEngine.ParticleSystem/NoiseModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_scrollSpeed_Injected_m99FD68CF17AC609C64A8A4BD33EB63927C9E2A01 (NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 * ____unity_self0, MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_scrollSpeed(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_scrollSpeed_m94E7B8C84B364D41AEC8BD1B7A7A31952F89CF2C (NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 * __this, MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/Particle::set_remainingLifetime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Particle_set_remainingLifetime_mE521DF9387892C00B3F21D4F76F3A55E77AFC6BE (Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/Particle::set_angularVelocity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Particle_set_angularVelocity_m16656F28F25F293E28B3004D6EC7EE9B113BCE7A (Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/ShapeModule::set_enabled_Injected(UnityEngine.ParticleSystem/ShapeModule&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_enabled_Injected_m7C9A449A65B6A44CAE2C49A049431822AF930D5F (ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA * ____unity_self0, bool ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/ShapeModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_enabled_mF6FE8ED99E482A739C00F894235F4E2CD09B0D1E (ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA * __this, bool ___value0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.ParticleSystem::Emit(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single,UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Emit_mC489C467AAF3C3721AC3315AF78DC4CE469E7AAC (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___velocity1, float ___size2, float ___lifetime3, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color4, const RuntimeMethod* method)
{
	Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 ));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___position0;
		Particle_set_position_mB749E41CD3C4C6DF501C0D68B6211CF7E2217FC2((Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 *)(&V_0), L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___velocity1;
		Particle_set_velocity_m4894BD6A75E7A1FCD433927F93396AA29A59709B((Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 *)(&V_0), L_1, /*hidden argument*/NULL);
		float L_2 = ___lifetime3;
		Particle_set_lifetime_mCE97F9D17D1E660DB9D9F3244150CB6624A74DC3((Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 *)(&V_0), L_2, /*hidden argument*/NULL);
		float L_3 = ___lifetime3;
		Particle_set_startLifetime_m7AC09262BBFE8818EA6B61BDB62264184CD27A82((Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 *)(&V_0), L_3, /*hidden argument*/NULL);
		float L_4 = ___size2;
		Particle_set_startSize_m7CDEE5B620B3D26B4CC5C1DA7C6E24ACCCF64466((Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 *)(&V_0), L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Particle_set_rotation3D_m0F402760524A81307FA4940751751C44DF2F77D0((Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 *)(&V_0), L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Particle_set_angularVelocity3D_mE9A9544DF33CD0CCF4F1CA14994A2C436E4DF1F8((Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 *)(&V_0), L_6, /*hidden argument*/NULL);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_7 = ___color4;
		Particle_set_startColor_mA7B0363E82B7A7CBB1C83F8C5D49FB7B7AF75554((Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 *)(&V_0), L_7, /*hidden argument*/NULL);
		Particle_set_randomSeed_m8FD7A4DB7F8E7EBDEF2C51A28197F8D9D7CB6E04((Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 *)(&V_0), 5, /*hidden argument*/NULL);
		ParticleSystem_EmitOld_Internal_m4F094DC523986298D5626F0F3F2335DFF596C993(__this, (Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 *)(&V_0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.ParticleSystem::Emit(UnityEngine.ParticleSystem/Particle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Emit_mF1E108B9BF7E0094C35CF71870B5B0EA72ABB485 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1  ___particle0, const RuntimeMethod* method)
{
	{
		ParticleSystem_EmitOld_Internal_m4F094DC523986298D5626F0F3F2335DFF596C993(__this, (Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 *)(&___particle0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.ParticleSystem::SetParticles(UnityEngine.ParticleSystem/Particle[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_SetParticles_m79867147E65742BE1E1ADF0222C090BD6AF1E20A (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C* ___particles0, int32_t ___size1, int32_t ___offset2, const RuntimeMethod* method)
{
	typedef void (*ParticleSystem_SetParticles_m79867147E65742BE1E1ADF0222C090BD6AF1E20A_ftn) (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E *, ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C*, int32_t, int32_t);
	static ParticleSystem_SetParticles_m79867147E65742BE1E1ADF0222C090BD6AF1E20A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_SetParticles_m79867147E65742BE1E1ADF0222C090BD6AF1E20A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::SetParticles(UnityEngine.ParticleSystem/Particle[],System.Int32,System.Int32)");
	_il2cpp_icall_func(__this, ___particles0, ___size1, ___offset2);
}
// System.Void UnityEngine.ParticleSystem::SetParticles(UnityEngine.ParticleSystem/Particle[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_SetParticles_m0658B777D1C6DDA7D244607AC55D5225774CEBFA (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C* ___particles0, int32_t ___size1, const RuntimeMethod* method)
{
	{
		ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C* L_0 = ___particles0;
		int32_t L_1 = ___size1;
		ParticleSystem_SetParticles_m79867147E65742BE1E1ADF0222C090BD6AF1E20A(__this, L_0, L_1, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.ParticleSystem::GetParticles(UnityEngine.ParticleSystem/Particle[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParticleSystem_GetParticles_mC310C32157EA281ECDC320B63B1E43ED5F6292B3 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C* ___particles0, int32_t ___size1, int32_t ___offset2, const RuntimeMethod* method)
{
	typedef int32_t (*ParticleSystem_GetParticles_mC310C32157EA281ECDC320B63B1E43ED5F6292B3_ftn) (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E *, ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C*, int32_t, int32_t);
	static ParticleSystem_GetParticles_mC310C32157EA281ECDC320B63B1E43ED5F6292B3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_GetParticles_mC310C32157EA281ECDC320B63B1E43ED5F6292B3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::GetParticles(UnityEngine.ParticleSystem/Particle[],System.Int32,System.Int32)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___particles0, ___size1, ___offset2);
	return icallRetVal;
}
// System.Int32 UnityEngine.ParticleSystem::GetParticles(UnityEngine.ParticleSystem/Particle[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParticleSystem_GetParticles_mF6FC6048609DD24AF7F1B8890C44AEC480BDFDEA (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C* ___particles0, int32_t ___size1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C* L_0 = ___particles0;
		int32_t L_1 = ___size1;
		int32_t L_2;
		L_2 = ParticleSystem_GetParticles_mC310C32157EA281ECDC320B63B1E43ED5F6292B3(__this, L_0, L_1, 0, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Int32 UnityEngine.ParticleSystem::GetParticles(UnityEngine.ParticleSystem/Particle[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParticleSystem_GetParticles_mAE8894E2B022EE009C6DDB1390AB331E7D40A344 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C* ___particles0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C* L_0 = ___particles0;
		int32_t L_1;
		L_1 = ParticleSystem_GetParticles_mF6FC6048609DD24AF7F1B8890C44AEC480BDFDEA(__this, L_0, (-1), /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.ParticleSystem::Emit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Emit_m07EF0D2DA84EB04814DA7EE6B8618B008DE75F28 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, int32_t ___count0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___count0;
		ParticleSystem_Emit_Internal_m7C72C31F7F4875B54B00E255A450B045A4449646(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.ParticleSystem::Emit_Internal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Emit_Internal_m7C72C31F7F4875B54B00E255A450B045A4449646 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, int32_t ___count0, const RuntimeMethod* method)
{
	typedef void (*ParticleSystem_Emit_Internal_m7C72C31F7F4875B54B00E255A450B045A4449646_ftn) (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E *, int32_t);
	static ParticleSystem_Emit_Internal_m7C72C31F7F4875B54B00E255A450B045A4449646_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_Emit_Internal_m7C72C31F7F4875B54B00E255A450B045A4449646_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::Emit_Internal(System.Int32)");
	_il2cpp_icall_func(__this, ___count0);
}
// System.Void UnityEngine.ParticleSystem::Emit(UnityEngine.ParticleSystem/EmitParams,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Emit_m1598252E2EF701A5010EFA395A87368495E9F9F7 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, EmitParams_t4F6429654653488A5D430701CD0743D011807CCC  ___emitParams0, int32_t ___count1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___count1;
		ParticleSystem_Emit_Injected_mC31E36D577A2D3135436438BFC27B6C76D9ADC72(__this, (EmitParams_t4F6429654653488A5D430701CD0743D011807CCC *)(&___emitParams0), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.ParticleSystem::EmitOld_Internal(UnityEngine.ParticleSystem/Particle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_EmitOld_Internal_m4F094DC523986298D5626F0F3F2335DFF596C993 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 * ___particle0, const RuntimeMethod* method)
{
	typedef void (*ParticleSystem_EmitOld_Internal_m4F094DC523986298D5626F0F3F2335DFF596C993_ftn) (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E *, Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 *);
	static ParticleSystem_EmitOld_Internal_m4F094DC523986298D5626F0F3F2335DFF596C993_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_EmitOld_Internal_m4F094DC523986298D5626F0F3F2335DFF596C993_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::EmitOld_Internal(UnityEngine.ParticleSystem/Particle&)");
	_il2cpp_icall_func(__this, ___particle0);
}
// UnityEngine.ParticleSystem/MainModule UnityEngine.ParticleSystem::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  ParticleSystem_get_main_m8F17DCC63679B15CE548BE83332FDB6635AE74A0 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method)
{
	MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  L_0;
		memset((&L_0), 0, sizeof(L_0));
		MainModule__ctor_m34F626B568C6D3C80A036409049761C8316E6A76((&L_0), __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.ParticleSystem/EmissionModule UnityEngine.ParticleSystem::get_emission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D  ParticleSystem_get_emission_m0BAA1EDF775A8712DA7D62BF3C42A2B1A6C96CA1 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method)
{
	EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D  L_0;
		memset((&L_0), 0, sizeof(L_0));
		EmissionModule__ctor_m9DFD2A0BB8BFAD2191C54E6627FC3B0E641EDD51((&L_0), __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.ParticleSystem/ShapeModule UnityEngine.ParticleSystem::get_shape()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA  ParticleSystem_get_shape_m986023201B5140A525EF34F81DAAF1866D889052 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method)
{
	ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ShapeModule__ctor_mB0CE9D41BBE5FFA5B70F465541BA63D9BEEA7264((&L_0), __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.ParticleSystem/NoiseModule UnityEngine.ParticleSystem::get_noise()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591  ParticleSystem_get_noise_m4059B8305FDEEE3FDE2DA67DBA2B56793D280EF8 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method)
{
	NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591  L_0;
		memset((&L_0), 0, sizeof(L_0));
		NoiseModule__ctor_mE450BC95A9B436FA1627E4D24B7B4E7E723DDB5B((&L_0), __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.ParticleSystem::Emit_Injected(UnityEngine.ParticleSystem/EmitParams&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Emit_Injected_mC31E36D577A2D3135436438BFC27B6C76D9ADC72 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, EmitParams_t4F6429654653488A5D430701CD0743D011807CCC * ___emitParams0, int32_t ___count1, const RuntimeMethod* method)
{
	typedef void (*ParticleSystem_Emit_Injected_mC31E36D577A2D3135436438BFC27B6C76D9ADC72_ftn) (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E *, EmitParams_t4F6429654653488A5D430701CD0743D011807CCC *, int32_t);
	static ParticleSystem_Emit_Injected_mC31E36D577A2D3135436438BFC27B6C76D9ADC72_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_Emit_Injected_mC31E36D577A2D3135436438BFC27B6C76D9ADC72_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::Emit_Injected(UnityEngine.ParticleSystem/EmitParams&,System.Int32)");
	_il2cpp_icall_func(__this, ___emitParams0, ___count1);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.ParticleSystemRenderer::GetMeshes(UnityEngine.Mesh[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParticleSystemRenderer_GetMeshes_m1B36A6BFF152AAE5520D727976E3DA26722C3A75 (ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * __this, MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* ___meshes0, const RuntimeMethod* method)
{
	typedef int32_t (*ParticleSystemRenderer_GetMeshes_m1B36A6BFF152AAE5520D727976E3DA26722C3A75_ftn) (ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 *, MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8*);
	static ParticleSystemRenderer_GetMeshes_m1B36A6BFF152AAE5520D727976E3DA26722C3A75_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystemRenderer_GetMeshes_m1B36A6BFF152AAE5520D727976E3DA26722C3A75_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystemRenderer::GetMeshes(UnityEngine.Mesh[])");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___meshes0);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/EmissionModule
IL2CPP_EXTERN_C void EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D_marshal_pinvoke(const EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D& unmarshaled, EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'EmissionModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
IL2CPP_EXTERN_C void EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D_marshal_pinvoke_back(const EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D_marshaled_pinvoke& marshaled, EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D& unmarshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'EmissionModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/EmissionModule
IL2CPP_EXTERN_C void EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D_marshal_pinvoke_cleanup(EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/EmissionModule
IL2CPP_EXTERN_C void EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D_marshal_com(const EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D& unmarshaled, EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D_marshaled_com& marshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'EmissionModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
IL2CPP_EXTERN_C void EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D_marshal_com_back(const EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D_marshaled_com& marshaled, EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D& unmarshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'EmissionModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/EmissionModule
IL2CPP_EXTERN_C void EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D_marshal_com_cleanup(EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.ParticleSystem/EmissionModule::.ctor(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmissionModule__ctor_m9DFD2A0BB8BFAD2191C54E6627FC3B0E641EDD51 (EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D * __this, ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___particleSystem0, const RuntimeMethod* method)
{
	{
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_0 = ___particleSystem0;
		__this->set_m_ParticleSystem_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void EmissionModule__ctor_m9DFD2A0BB8BFAD2191C54E6627FC3B0E641EDD51_AdjustorThunk (RuntimeObject * __this, ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___particleSystem0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D * _thisAdjusted = reinterpret_cast<EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D *>(__this + _offset);
	EmissionModule__ctor_m9DFD2A0BB8BFAD2191C54E6627FC3B0E641EDD51(_thisAdjusted, ___particleSystem0, method);
}
// System.Void UnityEngine.ParticleSystem/EmissionModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmissionModule_set_enabled_mD9FD50C9F5EECD04B22D03E5C00C7DD64D2AC1F1 (EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		EmissionModule_set_enabled_Injected_m35208A8279D12A78D5DBCF751BF1760869051C82((EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D *)__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void EmissionModule_set_enabled_mD9FD50C9F5EECD04B22D03E5C00C7DD64D2AC1F1_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D * _thisAdjusted = reinterpret_cast<EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D *>(__this + _offset);
	EmissionModule_set_enabled_mD9FD50C9F5EECD04B22D03E5C00C7DD64D2AC1F1(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.ParticleSystem/EmissionModule::set_rateOverTime(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmissionModule_set_rateOverTime_m4EE4643D8E8B8BEC37BCB16DB76C9B8E4E4C8F48 (EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D * __this, MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  ___value0, const RuntimeMethod* method)
{
	{
		EmissionModule_set_rateOverTime_Injected_m19782FA56F82A6F0A6AFE6454E662F41098B6E3B((EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D *)__this, (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD *)(&___value0), /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void EmissionModule_set_rateOverTime_m4EE4643D8E8B8BEC37BCB16DB76C9B8E4E4C8F48_AdjustorThunk (RuntimeObject * __this, MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D * _thisAdjusted = reinterpret_cast<EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D *>(__this + _offset);
	EmissionModule_set_rateOverTime_m4EE4643D8E8B8BEC37BCB16DB76C9B8E4E4C8F48(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.ParticleSystem/EmissionModule::set_rateOverDistance(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmissionModule_set_rateOverDistance_mADD71A92B6860FD4CDA75A8C6E3C96A2E64B711A (EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D * __this, MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  ___value0, const RuntimeMethod* method)
{
	{
		EmissionModule_set_rateOverDistance_Injected_mAE704D450772549F48016A5703CA1DD5C3BF4CB3((EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D *)__this, (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD *)(&___value0), /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void EmissionModule_set_rateOverDistance_mADD71A92B6860FD4CDA75A8C6E3C96A2E64B711A_AdjustorThunk (RuntimeObject * __this, MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D * _thisAdjusted = reinterpret_cast<EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D *>(__this + _offset);
	EmissionModule_set_rateOverDistance_mADD71A92B6860FD4CDA75A8C6E3C96A2E64B711A(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.ParticleSystem/EmissionModule::set_enabled_Injected(UnityEngine.ParticleSystem/EmissionModule&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmissionModule_set_enabled_Injected_m35208A8279D12A78D5DBCF751BF1760869051C82 (EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D * ____unity_self0, bool ___value1, const RuntimeMethod* method)
{
	typedef void (*EmissionModule_set_enabled_Injected_m35208A8279D12A78D5DBCF751BF1760869051C82_ftn) (EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D *, bool);
	static EmissionModule_set_enabled_Injected_m35208A8279D12A78D5DBCF751BF1760869051C82_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (EmissionModule_set_enabled_Injected_m35208A8279D12A78D5DBCF751BF1760869051C82_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/EmissionModule::set_enabled_Injected(UnityEngine.ParticleSystem/EmissionModule&,System.Boolean)");
	_il2cpp_icall_func(____unity_self0, ___value1);
}
// System.Void UnityEngine.ParticleSystem/EmissionModule::set_rateOverTime_Injected(UnityEngine.ParticleSystem/EmissionModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmissionModule_set_rateOverTime_Injected_m19782FA56F82A6F0A6AFE6454E662F41098B6E3B (EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D * ____unity_self0, MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD * ___value1, const RuntimeMethod* method)
{
	typedef void (*EmissionModule_set_rateOverTime_Injected_m19782FA56F82A6F0A6AFE6454E662F41098B6E3B_ftn) (EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D *, MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD *);
	static EmissionModule_set_rateOverTime_Injected_m19782FA56F82A6F0A6AFE6454E662F41098B6E3B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (EmissionModule_set_rateOverTime_Injected_m19782FA56F82A6F0A6AFE6454E662F41098B6E3B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/EmissionModule::set_rateOverTime_Injected(UnityEngine.ParticleSystem/EmissionModule&,UnityEngine.ParticleSystem/MinMaxCurve&)");
	_il2cpp_icall_func(____unity_self0, ___value1);
}
// System.Void UnityEngine.ParticleSystem/EmissionModule::set_rateOverDistance_Injected(UnityEngine.ParticleSystem/EmissionModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmissionModule_set_rateOverDistance_Injected_mAE704D450772549F48016A5703CA1DD5C3BF4CB3 (EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D * ____unity_self0, MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD * ___value1, const RuntimeMethod* method)
{
	typedef void (*EmissionModule_set_rateOverDistance_Injected_mAE704D450772549F48016A5703CA1DD5C3BF4CB3_ftn) (EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D *, MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD *);
	static EmissionModule_set_rateOverDistance_Injected_mAE704D450772549F48016A5703CA1DD5C3BF4CB3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (EmissionModule_set_rateOverDistance_Injected_mAE704D450772549F48016A5703CA1DD5C3BF4CB3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/EmissionModule::set_rateOverDistance_Injected(UnityEngine.ParticleSystem/EmissionModule&,UnityEngine.ParticleSystem/MinMaxCurve&)");
	_il2cpp_icall_func(____unity_self0, ___value1);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/EmitParams
IL2CPP_EXTERN_C void EmitParams_t4F6429654653488A5D430701CD0743D011807CCC_marshal_pinvoke(const EmitParams_t4F6429654653488A5D430701CD0743D011807CCC& unmarshaled, EmitParams_t4F6429654653488A5D430701CD0743D011807CCC_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Particle_0 = unmarshaled.get_m_Particle_0();
	marshaled.___m_PositionSet_1 = static_cast<int32_t>(unmarshaled.get_m_PositionSet_1());
	marshaled.___m_VelocitySet_2 = static_cast<int32_t>(unmarshaled.get_m_VelocitySet_2());
	marshaled.___m_AxisOfRotationSet_3 = static_cast<int32_t>(unmarshaled.get_m_AxisOfRotationSet_3());
	marshaled.___m_RotationSet_4 = static_cast<int32_t>(unmarshaled.get_m_RotationSet_4());
	marshaled.___m_AngularVelocitySet_5 = static_cast<int32_t>(unmarshaled.get_m_AngularVelocitySet_5());
	marshaled.___m_StartSizeSet_6 = static_cast<int32_t>(unmarshaled.get_m_StartSizeSet_6());
	marshaled.___m_StartColorSet_7 = static_cast<int32_t>(unmarshaled.get_m_StartColorSet_7());
	marshaled.___m_RandomSeedSet_8 = static_cast<int32_t>(unmarshaled.get_m_RandomSeedSet_8());
	marshaled.___m_StartLifetimeSet_9 = static_cast<int32_t>(unmarshaled.get_m_StartLifetimeSet_9());
	marshaled.___m_MeshIndexSet_10 = static_cast<int32_t>(unmarshaled.get_m_MeshIndexSet_10());
	marshaled.___m_ApplyShapeToPosition_11 = static_cast<int32_t>(unmarshaled.get_m_ApplyShapeToPosition_11());
}
IL2CPP_EXTERN_C void EmitParams_t4F6429654653488A5D430701CD0743D011807CCC_marshal_pinvoke_back(const EmitParams_t4F6429654653488A5D430701CD0743D011807CCC_marshaled_pinvoke& marshaled, EmitParams_t4F6429654653488A5D430701CD0743D011807CCC& unmarshaled)
{
	Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1  unmarshaled_m_Particle_temp_0;
	memset((&unmarshaled_m_Particle_temp_0), 0, sizeof(unmarshaled_m_Particle_temp_0));
	unmarshaled_m_Particle_temp_0 = marshaled.___m_Particle_0;
	unmarshaled.set_m_Particle_0(unmarshaled_m_Particle_temp_0);
	bool unmarshaled_m_PositionSet_temp_1 = false;
	unmarshaled_m_PositionSet_temp_1 = static_cast<bool>(marshaled.___m_PositionSet_1);
	unmarshaled.set_m_PositionSet_1(unmarshaled_m_PositionSet_temp_1);
	bool unmarshaled_m_VelocitySet_temp_2 = false;
	unmarshaled_m_VelocitySet_temp_2 = static_cast<bool>(marshaled.___m_VelocitySet_2);
	unmarshaled.set_m_VelocitySet_2(unmarshaled_m_VelocitySet_temp_2);
	bool unmarshaled_m_AxisOfRotationSet_temp_3 = false;
	unmarshaled_m_AxisOfRotationSet_temp_3 = static_cast<bool>(marshaled.___m_AxisOfRotationSet_3);
	unmarshaled.set_m_AxisOfRotationSet_3(unmarshaled_m_AxisOfRotationSet_temp_3);
	bool unmarshaled_m_RotationSet_temp_4 = false;
	unmarshaled_m_RotationSet_temp_4 = static_cast<bool>(marshaled.___m_RotationSet_4);
	unmarshaled.set_m_RotationSet_4(unmarshaled_m_RotationSet_temp_4);
	bool unmarshaled_m_AngularVelocitySet_temp_5 = false;
	unmarshaled_m_AngularVelocitySet_temp_5 = static_cast<bool>(marshaled.___m_AngularVelocitySet_5);
	unmarshaled.set_m_AngularVelocitySet_5(unmarshaled_m_AngularVelocitySet_temp_5);
	bool unmarshaled_m_StartSizeSet_temp_6 = false;
	unmarshaled_m_StartSizeSet_temp_6 = static_cast<bool>(marshaled.___m_StartSizeSet_6);
	unmarshaled.set_m_StartSizeSet_6(unmarshaled_m_StartSizeSet_temp_6);
	bool unmarshaled_m_StartColorSet_temp_7 = false;
	unmarshaled_m_StartColorSet_temp_7 = static_cast<bool>(marshaled.___m_StartColorSet_7);
	unmarshaled.set_m_StartColorSet_7(unmarshaled_m_StartColorSet_temp_7);
	bool unmarshaled_m_RandomSeedSet_temp_8 = false;
	unmarshaled_m_RandomSeedSet_temp_8 = static_cast<bool>(marshaled.___m_RandomSeedSet_8);
	unmarshaled.set_m_RandomSeedSet_8(unmarshaled_m_RandomSeedSet_temp_8);
	bool unmarshaled_m_StartLifetimeSet_temp_9 = false;
	unmarshaled_m_StartLifetimeSet_temp_9 = static_cast<bool>(marshaled.___m_StartLifetimeSet_9);
	unmarshaled.set_m_StartLifetimeSet_9(unmarshaled_m_StartLifetimeSet_temp_9);
	bool unmarshaled_m_MeshIndexSet_temp_10 = false;
	unmarshaled_m_MeshIndexSet_temp_10 = static_cast<bool>(marshaled.___m_MeshIndexSet_10);
	unmarshaled.set_m_MeshIndexSet_10(unmarshaled_m_MeshIndexSet_temp_10);
	bool unmarshaled_m_ApplyShapeToPosition_temp_11 = false;
	unmarshaled_m_ApplyShapeToPosition_temp_11 = static_cast<bool>(marshaled.___m_ApplyShapeToPosition_11);
	unmarshaled.set_m_ApplyShapeToPosition_11(unmarshaled_m_ApplyShapeToPosition_temp_11);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/EmitParams
IL2CPP_EXTERN_C void EmitParams_t4F6429654653488A5D430701CD0743D011807CCC_marshal_pinvoke_cleanup(EmitParams_t4F6429654653488A5D430701CD0743D011807CCC_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/EmitParams
IL2CPP_EXTERN_C void EmitParams_t4F6429654653488A5D430701CD0743D011807CCC_marshal_com(const EmitParams_t4F6429654653488A5D430701CD0743D011807CCC& unmarshaled, EmitParams_t4F6429654653488A5D430701CD0743D011807CCC_marshaled_com& marshaled)
{
	marshaled.___m_Particle_0 = unmarshaled.get_m_Particle_0();
	marshaled.___m_PositionSet_1 = static_cast<int32_t>(unmarshaled.get_m_PositionSet_1());
	marshaled.___m_VelocitySet_2 = static_cast<int32_t>(unmarshaled.get_m_VelocitySet_2());
	marshaled.___m_AxisOfRotationSet_3 = static_cast<int32_t>(unmarshaled.get_m_AxisOfRotationSet_3());
	marshaled.___m_RotationSet_4 = static_cast<int32_t>(unmarshaled.get_m_RotationSet_4());
	marshaled.___m_AngularVelocitySet_5 = static_cast<int32_t>(unmarshaled.get_m_AngularVelocitySet_5());
	marshaled.___m_StartSizeSet_6 = static_cast<int32_t>(unmarshaled.get_m_StartSizeSet_6());
	marshaled.___m_StartColorSet_7 = static_cast<int32_t>(unmarshaled.get_m_StartColorSet_7());
	marshaled.___m_RandomSeedSet_8 = static_cast<int32_t>(unmarshaled.get_m_RandomSeedSet_8());
	marshaled.___m_StartLifetimeSet_9 = static_cast<int32_t>(unmarshaled.get_m_StartLifetimeSet_9());
	marshaled.___m_MeshIndexSet_10 = static_cast<int32_t>(unmarshaled.get_m_MeshIndexSet_10());
	marshaled.___m_ApplyShapeToPosition_11 = static_cast<int32_t>(unmarshaled.get_m_ApplyShapeToPosition_11());
}
IL2CPP_EXTERN_C void EmitParams_t4F6429654653488A5D430701CD0743D011807CCC_marshal_com_back(const EmitParams_t4F6429654653488A5D430701CD0743D011807CCC_marshaled_com& marshaled, EmitParams_t4F6429654653488A5D430701CD0743D011807CCC& unmarshaled)
{
	Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1  unmarshaled_m_Particle_temp_0;
	memset((&unmarshaled_m_Particle_temp_0), 0, sizeof(unmarshaled_m_Particle_temp_0));
	unmarshaled_m_Particle_temp_0 = marshaled.___m_Particle_0;
	unmarshaled.set_m_Particle_0(unmarshaled_m_Particle_temp_0);
	bool unmarshaled_m_PositionSet_temp_1 = false;
	unmarshaled_m_PositionSet_temp_1 = static_cast<bool>(marshaled.___m_PositionSet_1);
	unmarshaled.set_m_PositionSet_1(unmarshaled_m_PositionSet_temp_1);
	bool unmarshaled_m_VelocitySet_temp_2 = false;
	unmarshaled_m_VelocitySet_temp_2 = static_cast<bool>(marshaled.___m_VelocitySet_2);
	unmarshaled.set_m_VelocitySet_2(unmarshaled_m_VelocitySet_temp_2);
	bool unmarshaled_m_AxisOfRotationSet_temp_3 = false;
	unmarshaled_m_AxisOfRotationSet_temp_3 = static_cast<bool>(marshaled.___m_AxisOfRotationSet_3);
	unmarshaled.set_m_AxisOfRotationSet_3(unmarshaled_m_AxisOfRotationSet_temp_3);
	bool unmarshaled_m_RotationSet_temp_4 = false;
	unmarshaled_m_RotationSet_temp_4 = static_cast<bool>(marshaled.___m_RotationSet_4);
	unmarshaled.set_m_RotationSet_4(unmarshaled_m_RotationSet_temp_4);
	bool unmarshaled_m_AngularVelocitySet_temp_5 = false;
	unmarshaled_m_AngularVelocitySet_temp_5 = static_cast<bool>(marshaled.___m_AngularVelocitySet_5);
	unmarshaled.set_m_AngularVelocitySet_5(unmarshaled_m_AngularVelocitySet_temp_5);
	bool unmarshaled_m_StartSizeSet_temp_6 = false;
	unmarshaled_m_StartSizeSet_temp_6 = static_cast<bool>(marshaled.___m_StartSizeSet_6);
	unmarshaled.set_m_StartSizeSet_6(unmarshaled_m_StartSizeSet_temp_6);
	bool unmarshaled_m_StartColorSet_temp_7 = false;
	unmarshaled_m_StartColorSet_temp_7 = static_cast<bool>(marshaled.___m_StartColorSet_7);
	unmarshaled.set_m_StartColorSet_7(unmarshaled_m_StartColorSet_temp_7);
	bool unmarshaled_m_RandomSeedSet_temp_8 = false;
	unmarshaled_m_RandomSeedSet_temp_8 = static_cast<bool>(marshaled.___m_RandomSeedSet_8);
	unmarshaled.set_m_RandomSeedSet_8(unmarshaled_m_RandomSeedSet_temp_8);
	bool unmarshaled_m_StartLifetimeSet_temp_9 = false;
	unmarshaled_m_StartLifetimeSet_temp_9 = static_cast<bool>(marshaled.___m_StartLifetimeSet_9);
	unmarshaled.set_m_StartLifetimeSet_9(unmarshaled_m_StartLifetimeSet_temp_9);
	bool unmarshaled_m_MeshIndexSet_temp_10 = false;
	unmarshaled_m_MeshIndexSet_temp_10 = static_cast<bool>(marshaled.___m_MeshIndexSet_10);
	unmarshaled.set_m_MeshIndexSet_10(unmarshaled_m_MeshIndexSet_temp_10);
	bool unmarshaled_m_ApplyShapeToPosition_temp_11 = false;
	unmarshaled_m_ApplyShapeToPosition_temp_11 = static_cast<bool>(marshaled.___m_ApplyShapeToPosition_11);
	unmarshaled.set_m_ApplyShapeToPosition_11(unmarshaled_m_ApplyShapeToPosition_temp_11);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/EmitParams
IL2CPP_EXTERN_C void EmitParams_t4F6429654653488A5D430701CD0743D011807CCC_marshal_com_cleanup(EmitParams_t4F6429654653488A5D430701CD0743D011807CCC_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/MainModule
IL2CPP_EXTERN_C void MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B_marshal_pinvoke(const MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B& unmarshaled, MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'MainModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
IL2CPP_EXTERN_C void MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B_marshal_pinvoke_back(const MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B_marshaled_pinvoke& marshaled, MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B& unmarshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'MainModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/MainModule
IL2CPP_EXTERN_C void MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B_marshal_pinvoke_cleanup(MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/MainModule
IL2CPP_EXTERN_C void MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B_marshal_com(const MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B& unmarshaled, MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B_marshaled_com& marshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'MainModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
IL2CPP_EXTERN_C void MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B_marshal_com_back(const MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B_marshaled_com& marshaled, MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B& unmarshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'MainModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/MainModule
IL2CPP_EXTERN_C void MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B_marshal_com_cleanup(MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.ParticleSystem/MainModule::.ctor(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule__ctor_m34F626B568C6D3C80A036409049761C8316E6A76 (MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B * __this, ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___particleSystem0, const RuntimeMethod* method)
{
	{
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_0 = ___particleSystem0;
		__this->set_m_ParticleSystem_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void MainModule__ctor_m34F626B568C6D3C80A036409049761C8316E6A76_AdjustorThunk (RuntimeObject * __this, ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___particleSystem0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B * _thisAdjusted = reinterpret_cast<MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B *>(__this + _offset);
	MainModule__ctor_m34F626B568C6D3C80A036409049761C8316E6A76(_thisAdjusted, ___particleSystem0, method);
}
// System.Void UnityEngine.ParticleSystem/MainModule::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_loop_m9F43A092EFABBE92662DF9EDA73AF8D9C72DABB2 (MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		MainModule_set_loop_Injected_m064E3166CAA11D0842F105E473A231C0C15DE1B3((MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B *)__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void MainModule_set_loop_m9F43A092EFABBE92662DF9EDA73AF8D9C72DABB2_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B * _thisAdjusted = reinterpret_cast<MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B *>(__this + _offset);
	MainModule_set_loop_m9F43A092EFABBE92662DF9EDA73AF8D9C72DABB2(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.ParticleSystem/MainModule::set_simulationSpace(UnityEngine.ParticleSystemSimulationSpace)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_simulationSpace_m59583EC5A1D9D64EC8C0CCE275CE6669FC8E268F (MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		MainModule_set_simulationSpace_Injected_mFD6F06EA32114BC5C9D9CF3C10A5A0066E40664C((MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B *)__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void MainModule_set_simulationSpace_m59583EC5A1D9D64EC8C0CCE275CE6669FC8E268F_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B * _thisAdjusted = reinterpret_cast<MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B *>(__this + _offset);
	MainModule_set_simulationSpace_m59583EC5A1D9D64EC8C0CCE275CE6669FC8E268F(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.ParticleSystem/MainModule::set_playOnAwake(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_playOnAwake_m85E164C05D5C39B0B3C6139BE360BAB41B0D7FCF (MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		MainModule_set_playOnAwake_Injected_mAE88821DF50EB8AFD7079C587CC7FB633626B5FB((MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B *)__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void MainModule_set_playOnAwake_m85E164C05D5C39B0B3C6139BE360BAB41B0D7FCF_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B * _thisAdjusted = reinterpret_cast<MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B *>(__this + _offset);
	MainModule_set_playOnAwake_m85E164C05D5C39B0B3C6139BE360BAB41B0D7FCF(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.ParticleSystem/MainModule::set_maxParticles(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_maxParticles_m6FD14B44787B44D38DEDAE4FCBE9596A86A0460D (MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		MainModule_set_maxParticles_Injected_m6D4D611540F53CC4D8F21D9DD7EF3F68FC50F471((MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B *)__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void MainModule_set_maxParticles_m6FD14B44787B44D38DEDAE4FCBE9596A86A0460D_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B * _thisAdjusted = reinterpret_cast<MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B *>(__this + _offset);
	MainModule_set_maxParticles_m6FD14B44787B44D38DEDAE4FCBE9596A86A0460D(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.ParticleSystem/MainModule::set_loop_Injected(UnityEngine.ParticleSystem/MainModule&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_loop_Injected_m064E3166CAA11D0842F105E473A231C0C15DE1B3 (MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B * ____unity_self0, bool ___value1, const RuntimeMethod* method)
{
	typedef void (*MainModule_set_loop_Injected_m064E3166CAA11D0842F105E473A231C0C15DE1B3_ftn) (MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B *, bool);
	static MainModule_set_loop_Injected_m064E3166CAA11D0842F105E473A231C0C15DE1B3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MainModule_set_loop_Injected_m064E3166CAA11D0842F105E473A231C0C15DE1B3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/MainModule::set_loop_Injected(UnityEngine.ParticleSystem/MainModule&,System.Boolean)");
	_il2cpp_icall_func(____unity_self0, ___value1);
}
// System.Void UnityEngine.ParticleSystem/MainModule::set_simulationSpace_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystemSimulationSpace)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_simulationSpace_Injected_mFD6F06EA32114BC5C9D9CF3C10A5A0066E40664C (MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B * ____unity_self0, int32_t ___value1, const RuntimeMethod* method)
{
	typedef void (*MainModule_set_simulationSpace_Injected_mFD6F06EA32114BC5C9D9CF3C10A5A0066E40664C_ftn) (MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B *, int32_t);
	static MainModule_set_simulationSpace_Injected_mFD6F06EA32114BC5C9D9CF3C10A5A0066E40664C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MainModule_set_simulationSpace_Injected_mFD6F06EA32114BC5C9D9CF3C10A5A0066E40664C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/MainModule::set_simulationSpace_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystemSimulationSpace)");
	_il2cpp_icall_func(____unity_self0, ___value1);
}
// System.Void UnityEngine.ParticleSystem/MainModule::set_playOnAwake_Injected(UnityEngine.ParticleSystem/MainModule&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_playOnAwake_Injected_mAE88821DF50EB8AFD7079C587CC7FB633626B5FB (MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B * ____unity_self0, bool ___value1, const RuntimeMethod* method)
{
	typedef void (*MainModule_set_playOnAwake_Injected_mAE88821DF50EB8AFD7079C587CC7FB633626B5FB_ftn) (MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B *, bool);
	static MainModule_set_playOnAwake_Injected_mAE88821DF50EB8AFD7079C587CC7FB633626B5FB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MainModule_set_playOnAwake_Injected_mAE88821DF50EB8AFD7079C587CC7FB633626B5FB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/MainModule::set_playOnAwake_Injected(UnityEngine.ParticleSystem/MainModule&,System.Boolean)");
	_il2cpp_icall_func(____unity_self0, ___value1);
}
// System.Void UnityEngine.ParticleSystem/MainModule::set_maxParticles_Injected(UnityEngine.ParticleSystem/MainModule&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_maxParticles_Injected_m6D4D611540F53CC4D8F21D9DD7EF3F68FC50F471 (MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B * ____unity_self0, int32_t ___value1, const RuntimeMethod* method)
{
	typedef void (*MainModule_set_maxParticles_Injected_m6D4D611540F53CC4D8F21D9DD7EF3F68FC50F471_ftn) (MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B *, int32_t);
	static MainModule_set_maxParticles_Injected_m6D4D611540F53CC4D8F21D9DD7EF3F68FC50F471_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MainModule_set_maxParticles_Injected_m6D4D611540F53CC4D8F21D9DD7EF3F68FC50F471_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/MainModule::set_maxParticles_Injected(UnityEngine.ParticleSystem/MainModule&,System.Int32)");
	_il2cpp_icall_func(____unity_self0, ___value1);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve__ctor_mF14A2DBABFDCF1E855911241A555949CAF212AE3 (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD * __this, float ___constant0, const RuntimeMethod* method)
{
	{
		__this->set_m_Mode_0(0);
		__this->set_m_CurveMultiplier_1((0.0f));
		__this->set_m_CurveMin_2((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)NULL);
		__this->set_m_CurveMax_3((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)NULL);
		__this->set_m_ConstantMin_4((0.0f));
		float L_0 = ___constant0;
		__this->set_m_ConstantMax_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void MinMaxCurve__ctor_mF14A2DBABFDCF1E855911241A555949CAF212AE3_AdjustorThunk (RuntimeObject * __this, float ___constant0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD * _thisAdjusted = reinterpret_cast<MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD *>(__this + _offset);
	MinMaxCurve__ctor_mF14A2DBABFDCF1E855911241A555949CAF212AE3(_thisAdjusted, ___constant0, method);
}
// UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/MinMaxCurve::op_Implicit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  MinMaxCurve_op_Implicit_m8D746D40E6CCBF5E8C4CE39F23A45712BFC372F5 (float ___constant0, const RuntimeMethod* method)
{
	MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___constant0;
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_1;
		memset((&L_1), 0, sizeof(L_1));
		MinMaxCurve__ctor_mF14A2DBABFDCF1E855911241A555949CAF212AE3((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/NoiseModule
IL2CPP_EXTERN_C void NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591_marshal_pinvoke(const NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591& unmarshaled, NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'NoiseModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
IL2CPP_EXTERN_C void NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591_marshal_pinvoke_back(const NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591_marshaled_pinvoke& marshaled, NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591& unmarshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'NoiseModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/NoiseModule
IL2CPP_EXTERN_C void NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591_marshal_pinvoke_cleanup(NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/NoiseModule
IL2CPP_EXTERN_C void NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591_marshal_com(const NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591& unmarshaled, NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591_marshaled_com& marshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'NoiseModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
IL2CPP_EXTERN_C void NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591_marshal_com_back(const NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591_marshaled_com& marshaled, NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591& unmarshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'NoiseModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/NoiseModule
IL2CPP_EXTERN_C void NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591_marshal_com_cleanup(NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.ParticleSystem/NoiseModule::.ctor(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule__ctor_mE450BC95A9B436FA1627E4D24B7B4E7E723DDB5B (NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 * __this, ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___particleSystem0, const RuntimeMethod* method)
{
	{
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_0 = ___particleSystem0;
		__this->set_m_ParticleSystem_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void NoiseModule__ctor_mE450BC95A9B436FA1627E4D24B7B4E7E723DDB5B_AdjustorThunk (RuntimeObject * __this, ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___particleSystem0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 * _thisAdjusted = reinterpret_cast<NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 *>(__this + _offset);
	NoiseModule__ctor_mE450BC95A9B436FA1627E4D24B7B4E7E723DDB5B(_thisAdjusted, ___particleSystem0, method);
}
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_enabled_mEB9111E78363A42F79DC3AF9D97271053BAF66B8 (NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		NoiseModule_set_enabled_Injected_m5BDCF3B7627CCD5C1010303F99147CA0B568F304((NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 *)__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void NoiseModule_set_enabled_mEB9111E78363A42F79DC3AF9D97271053BAF66B8_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 * _thisAdjusted = reinterpret_cast<NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 *>(__this + _offset);
	NoiseModule_set_enabled_mEB9111E78363A42F79DC3AF9D97271053BAF66B8(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_strengthX(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_strengthX_m916C928A094561A3191BACD29721D6B30E004E72 (NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 * __this, MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  ___value0, const RuntimeMethod* method)
{
	{
		NoiseModule_set_strengthX_Injected_mD80380BC6C8619B75DF8FF2A1F398BE7514E4EFA((NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 *)__this, (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD *)(&___value0), /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void NoiseModule_set_strengthX_m916C928A094561A3191BACD29721D6B30E004E72_AdjustorThunk (RuntimeObject * __this, MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 * _thisAdjusted = reinterpret_cast<NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 *>(__this + _offset);
	NoiseModule_set_strengthX_m916C928A094561A3191BACD29721D6B30E004E72(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_strengthY(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_strengthY_m6D453B7A76EFEEFBA10823751FF27762FF241E5B (NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 * __this, MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  ___value0, const RuntimeMethod* method)
{
	{
		NoiseModule_set_strengthY_Injected_mD384ABE98D36428BF15F75433143CAAAFAAECF89((NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 *)__this, (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD *)(&___value0), /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void NoiseModule_set_strengthY_m6D453B7A76EFEEFBA10823751FF27762FF241E5B_AdjustorThunk (RuntimeObject * __this, MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 * _thisAdjusted = reinterpret_cast<NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 *>(__this + _offset);
	NoiseModule_set_strengthY_m6D453B7A76EFEEFBA10823751FF27762FF241E5B(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_strengthZ(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_strengthZ_m0610693D3D5F8710707F516CE1F1B9CBBEF27DE5 (NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 * __this, MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  ___value0, const RuntimeMethod* method)
{
	{
		NoiseModule_set_strengthZ_Injected_mE7178872EB165337AA3747D9A7C805C5E54DC0EB((NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 *)__this, (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD *)(&___value0), /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void NoiseModule_set_strengthZ_m0610693D3D5F8710707F516CE1F1B9CBBEF27DE5_AdjustorThunk (RuntimeObject * __this, MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 * _thisAdjusted = reinterpret_cast<NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 *>(__this + _offset);
	NoiseModule_set_strengthZ_m0610693D3D5F8710707F516CE1F1B9CBBEF27DE5(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_frequency(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_frequency_mB9D083FBE9E97B0D5F7D29CE67FCD347DECB5F11 (NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		NoiseModule_set_frequency_Injected_m532C31E13CDFAE1039EAEB267496FE0A238B0ABC((NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 *)__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void NoiseModule_set_frequency_mB9D083FBE9E97B0D5F7D29CE67FCD347DECB5F11_AdjustorThunk (RuntimeObject * __this, float ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 * _thisAdjusted = reinterpret_cast<NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 *>(__this + _offset);
	NoiseModule_set_frequency_mB9D083FBE9E97B0D5F7D29CE67FCD347DECB5F11(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_octaveCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_octaveCount_m001A3DBB38E0A3FA28F3EB91EC3B6CA89F070A6D (NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		NoiseModule_set_octaveCount_Injected_mDC9275A38357F8A3A4773172BC986CB1B7FB5417((NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 *)__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void NoiseModule_set_octaveCount_m001A3DBB38E0A3FA28F3EB91EC3B6CA89F070A6D_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 * _thisAdjusted = reinterpret_cast<NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 *>(__this + _offset);
	NoiseModule_set_octaveCount_m001A3DBB38E0A3FA28F3EB91EC3B6CA89F070A6D(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_scrollSpeed(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_scrollSpeed_m94E7B8C84B364D41AEC8BD1B7A7A31952F89CF2C (NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 * __this, MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  ___value0, const RuntimeMethod* method)
{
	{
		NoiseModule_set_scrollSpeed_Injected_m99FD68CF17AC609C64A8A4BD33EB63927C9E2A01((NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 *)__this, (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD *)(&___value0), /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void NoiseModule_set_scrollSpeed_m94E7B8C84B364D41AEC8BD1B7A7A31952F89CF2C_AdjustorThunk (RuntimeObject * __this, MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 * _thisAdjusted = reinterpret_cast<NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 *>(__this + _offset);
	NoiseModule_set_scrollSpeed_m94E7B8C84B364D41AEC8BD1B7A7A31952F89CF2C(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_enabled_Injected(UnityEngine.ParticleSystem/NoiseModule&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_enabled_Injected_m5BDCF3B7627CCD5C1010303F99147CA0B568F304 (NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 * ____unity_self0, bool ___value1, const RuntimeMethod* method)
{
	typedef void (*NoiseModule_set_enabled_Injected_m5BDCF3B7627CCD5C1010303F99147CA0B568F304_ftn) (NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 *, bool);
	static NoiseModule_set_enabled_Injected_m5BDCF3B7627CCD5C1010303F99147CA0B568F304_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NoiseModule_set_enabled_Injected_m5BDCF3B7627CCD5C1010303F99147CA0B568F304_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/NoiseModule::set_enabled_Injected(UnityEngine.ParticleSystem/NoiseModule&,System.Boolean)");
	_il2cpp_icall_func(____unity_self0, ___value1);
}
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_strengthX_Injected(UnityEngine.ParticleSystem/NoiseModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_strengthX_Injected_mD80380BC6C8619B75DF8FF2A1F398BE7514E4EFA (NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 * ____unity_self0, MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD * ___value1, const RuntimeMethod* method)
{
	typedef void (*NoiseModule_set_strengthX_Injected_mD80380BC6C8619B75DF8FF2A1F398BE7514E4EFA_ftn) (NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 *, MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD *);
	static NoiseModule_set_strengthX_Injected_mD80380BC6C8619B75DF8FF2A1F398BE7514E4EFA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NoiseModule_set_strengthX_Injected_mD80380BC6C8619B75DF8FF2A1F398BE7514E4EFA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/NoiseModule::set_strengthX_Injected(UnityEngine.ParticleSystem/NoiseModule&,UnityEngine.ParticleSystem/MinMaxCurve&)");
	_il2cpp_icall_func(____unity_self0, ___value1);
}
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_strengthY_Injected(UnityEngine.ParticleSystem/NoiseModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_strengthY_Injected_mD384ABE98D36428BF15F75433143CAAAFAAECF89 (NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 * ____unity_self0, MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD * ___value1, const RuntimeMethod* method)
{
	typedef void (*NoiseModule_set_strengthY_Injected_mD384ABE98D36428BF15F75433143CAAAFAAECF89_ftn) (NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 *, MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD *);
	static NoiseModule_set_strengthY_Injected_mD384ABE98D36428BF15F75433143CAAAFAAECF89_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NoiseModule_set_strengthY_Injected_mD384ABE98D36428BF15F75433143CAAAFAAECF89_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/NoiseModule::set_strengthY_Injected(UnityEngine.ParticleSystem/NoiseModule&,UnityEngine.ParticleSystem/MinMaxCurve&)");
	_il2cpp_icall_func(____unity_self0, ___value1);
}
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_strengthZ_Injected(UnityEngine.ParticleSystem/NoiseModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_strengthZ_Injected_mE7178872EB165337AA3747D9A7C805C5E54DC0EB (NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 * ____unity_self0, MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD * ___value1, const RuntimeMethod* method)
{
	typedef void (*NoiseModule_set_strengthZ_Injected_mE7178872EB165337AA3747D9A7C805C5E54DC0EB_ftn) (NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 *, MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD *);
	static NoiseModule_set_strengthZ_Injected_mE7178872EB165337AA3747D9A7C805C5E54DC0EB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NoiseModule_set_strengthZ_Injected_mE7178872EB165337AA3747D9A7C805C5E54DC0EB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/NoiseModule::set_strengthZ_Injected(UnityEngine.ParticleSystem/NoiseModule&,UnityEngine.ParticleSystem/MinMaxCurve&)");
	_il2cpp_icall_func(____unity_self0, ___value1);
}
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_frequency_Injected(UnityEngine.ParticleSystem/NoiseModule&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_frequency_Injected_m532C31E13CDFAE1039EAEB267496FE0A238B0ABC (NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 * ____unity_self0, float ___value1, const RuntimeMethod* method)
{
	typedef void (*NoiseModule_set_frequency_Injected_m532C31E13CDFAE1039EAEB267496FE0A238B0ABC_ftn) (NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 *, float);
	static NoiseModule_set_frequency_Injected_m532C31E13CDFAE1039EAEB267496FE0A238B0ABC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NoiseModule_set_frequency_Injected_m532C31E13CDFAE1039EAEB267496FE0A238B0ABC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/NoiseModule::set_frequency_Injected(UnityEngine.ParticleSystem/NoiseModule&,System.Single)");
	_il2cpp_icall_func(____unity_self0, ___value1);
}
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_octaveCount_Injected(UnityEngine.ParticleSystem/NoiseModule&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_octaveCount_Injected_mDC9275A38357F8A3A4773172BC986CB1B7FB5417 (NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 * ____unity_self0, int32_t ___value1, const RuntimeMethod* method)
{
	typedef void (*NoiseModule_set_octaveCount_Injected_mDC9275A38357F8A3A4773172BC986CB1B7FB5417_ftn) (NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 *, int32_t);
	static NoiseModule_set_octaveCount_Injected_mDC9275A38357F8A3A4773172BC986CB1B7FB5417_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NoiseModule_set_octaveCount_Injected_mDC9275A38357F8A3A4773172BC986CB1B7FB5417_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/NoiseModule::set_octaveCount_Injected(UnityEngine.ParticleSystem/NoiseModule&,System.Int32)");
	_il2cpp_icall_func(____unity_self0, ___value1);
}
// System.Void UnityEngine.ParticleSystem/NoiseModule::set_scrollSpeed_Injected(UnityEngine.ParticleSystem/NoiseModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseModule_set_scrollSpeed_Injected_m99FD68CF17AC609C64A8A4BD33EB63927C9E2A01 (NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 * ____unity_self0, MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD * ___value1, const RuntimeMethod* method)
{
	typedef void (*NoiseModule_set_scrollSpeed_Injected_m99FD68CF17AC609C64A8A4BD33EB63927C9E2A01_ftn) (NoiseModule_t74C71EB8386C1CF92A748B051690D34F4CB04591 *, MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD *);
	static NoiseModule_set_scrollSpeed_Injected_m99FD68CF17AC609C64A8A4BD33EB63927C9E2A01_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NoiseModule_set_scrollSpeed_Injected_m99FD68CF17AC609C64A8A4BD33EB63927C9E2A01_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/NoiseModule::set_scrollSpeed_Injected(UnityEngine.ParticleSystem/NoiseModule&,UnityEngine.ParticleSystem/MinMaxCurve&)");
	_il2cpp_icall_func(____unity_self0, ___value1);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.ParticleSystem/Particle::set_lifetime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Particle_set_lifetime_mCE97F9D17D1E660DB9D9F3244150CB6624A74DC3 (Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		Particle_set_remainingLifetime_mE521DF9387892C00B3F21D4F76F3A55E77AFC6BE((Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 *)__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Particle_set_lifetime_mCE97F9D17D1E660DB9D9F3244150CB6624A74DC3_AdjustorThunk (RuntimeObject * __this, float ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 * _thisAdjusted = reinterpret_cast<Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 *>(__this + _offset);
	Particle_set_lifetime_mCE97F9D17D1E660DB9D9F3244150CB6624A74DC3(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.ParticleSystem/Particle::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Particle_set_position_mB749E41CD3C4C6DF501C0D68B6211CF7E2217FC2 (Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_m_Position_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Particle_set_position_mB749E41CD3C4C6DF501C0D68B6211CF7E2217FC2_AdjustorThunk (RuntimeObject * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 * _thisAdjusted = reinterpret_cast<Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 *>(__this + _offset);
	Particle_set_position_mB749E41CD3C4C6DF501C0D68B6211CF7E2217FC2(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.ParticleSystem/Particle::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Particle_set_velocity_m4894BD6A75E7A1FCD433927F93396AA29A59709B (Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_m_Velocity_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Particle_set_velocity_m4894BD6A75E7A1FCD433927F93396AA29A59709B_AdjustorThunk (RuntimeObject * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 * _thisAdjusted = reinterpret_cast<Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 *>(__this + _offset);
	Particle_set_velocity_m4894BD6A75E7A1FCD433927F93396AA29A59709B(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.ParticleSystem/Particle::set_remainingLifetime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Particle_set_remainingLifetime_mE521DF9387892C00B3F21D4F76F3A55E77AFC6BE (Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_m_Lifetime_11(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Particle_set_remainingLifetime_mE521DF9387892C00B3F21D4F76F3A55E77AFC6BE_AdjustorThunk (RuntimeObject * __this, float ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 * _thisAdjusted = reinterpret_cast<Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 *>(__this + _offset);
	Particle_set_remainingLifetime_mE521DF9387892C00B3F21D4F76F3A55E77AFC6BE(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.ParticleSystem/Particle::set_startLifetime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Particle_set_startLifetime_m7AC09262BBFE8818EA6B61BDB62264184CD27A82 (Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_m_StartLifetime_12(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Particle_set_startLifetime_m7AC09262BBFE8818EA6B61BDB62264184CD27A82_AdjustorThunk (RuntimeObject * __this, float ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 * _thisAdjusted = reinterpret_cast<Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 *>(__this + _offset);
	Particle_set_startLifetime_m7AC09262BBFE8818EA6B61BDB62264184CD27A82(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.ParticleSystem/Particle::set_startColor(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Particle_set_startColor_mA7B0363E82B7A7CBB1C83F8C5D49FB7B7AF75554 (Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 * __this, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___value0, const RuntimeMethod* method)
{
	{
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_0 = ___value0;
		__this->set_m_StartColor_8(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Particle_set_startColor_mA7B0363E82B7A7CBB1C83F8C5D49FB7B7AF75554_AdjustorThunk (RuntimeObject * __this, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 * _thisAdjusted = reinterpret_cast<Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 *>(__this + _offset);
	Particle_set_startColor_mA7B0363E82B7A7CBB1C83F8C5D49FB7B7AF75554(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.ParticleSystem/Particle::set_randomSeed(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Particle_set_randomSeed_m8FD7A4DB7F8E7EBDEF2C51A28197F8D9D7CB6E04 (Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___value0;
		__this->set_m_RandomSeed_9(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Particle_set_randomSeed_m8FD7A4DB7F8E7EBDEF2C51A28197F8D9D7CB6E04_AdjustorThunk (RuntimeObject * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 * _thisAdjusted = reinterpret_cast<Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 *>(__this + _offset);
	Particle_set_randomSeed_m8FD7A4DB7F8E7EBDEF2C51A28197F8D9D7CB6E04(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.ParticleSystem/Particle::set_startSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Particle_set_startSize_m7CDEE5B620B3D26B4CC5C1DA7C6E24ACCCF64466 (Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		float L_1 = ___value0;
		float L_2 = ___value0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		__this->set_m_StartSize_7(L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void Particle_set_startSize_m7CDEE5B620B3D26B4CC5C1DA7C6E24ACCCF64466_AdjustorThunk (RuntimeObject * __this, float ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 * _thisAdjusted = reinterpret_cast<Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 *>(__this + _offset);
	Particle_set_startSize_m7CDEE5B620B3D26B4CC5C1DA7C6E24ACCCF64466(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.ParticleSystem/Particle::set_rotation3D(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Particle_set_rotation3D_m0F402760524A81307FA4940751751C44DF2F77D0 (Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_0, (0.0174532924f), /*hidden argument*/NULL);
		__this->set_m_Rotation_5(L_1);
		uint32_t L_2 = __this->get_m_Flags_16();
		__this->set_m_Flags_16(((int32_t)((int32_t)L_2|(int32_t)2)));
		return;
	}
}
IL2CPP_EXTERN_C  void Particle_set_rotation3D_m0F402760524A81307FA4940751751C44DF2F77D0_AdjustorThunk (RuntimeObject * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 * _thisAdjusted = reinterpret_cast<Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 *>(__this + _offset);
	Particle_set_rotation3D_m0F402760524A81307FA4940751751C44DF2F77D0(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.ParticleSystem/Particle::set_angularVelocity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Particle_set_angularVelocity_m16656F28F25F293E28B3004D6EC7EE9B113BCE7A (Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_1), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply((float)L_0, (float)(0.0174532924f))), /*hidden argument*/NULL);
		__this->set_m_AngularVelocity_6(L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void Particle_set_angularVelocity_m16656F28F25F293E28B3004D6EC7EE9B113BCE7A_AdjustorThunk (RuntimeObject * __this, float ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 * _thisAdjusted = reinterpret_cast<Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 *>(__this + _offset);
	Particle_set_angularVelocity_m16656F28F25F293E28B3004D6EC7EE9B113BCE7A(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.ParticleSystem/Particle::set_angularVelocity3D(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Particle_set_angularVelocity3D_mE9A9544DF33CD0CCF4F1CA14994A2C436E4DF1F8 (Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_0, (0.0174532924f), /*hidden argument*/NULL);
		__this->set_m_AngularVelocity_6(L_1);
		uint32_t L_2 = __this->get_m_Flags_16();
		__this->set_m_Flags_16(((int32_t)((int32_t)L_2|(int32_t)2)));
		return;
	}
}
IL2CPP_EXTERN_C  void Particle_set_angularVelocity3D_mE9A9544DF33CD0CCF4F1CA14994A2C436E4DF1F8_AdjustorThunk (RuntimeObject * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 * _thisAdjusted = reinterpret_cast<Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 *>(__this + _offset);
	Particle_set_angularVelocity3D_mE9A9544DF33CD0CCF4F1CA14994A2C436E4DF1F8(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/ShapeModule
IL2CPP_EXTERN_C void ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_marshal_pinvoke(const ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA& unmarshaled, ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'ShapeModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
IL2CPP_EXTERN_C void ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_marshal_pinvoke_back(const ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_marshaled_pinvoke& marshaled, ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA& unmarshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'ShapeModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/ShapeModule
IL2CPP_EXTERN_C void ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_marshal_pinvoke_cleanup(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/ShapeModule
IL2CPP_EXTERN_C void ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_marshal_com(const ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA& unmarshaled, ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_marshaled_com& marshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'ShapeModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
IL2CPP_EXTERN_C void ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_marshal_com_back(const ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_marshaled_com& marshaled, ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA& unmarshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'ShapeModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/ShapeModule
IL2CPP_EXTERN_C void ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_marshal_com_cleanup(ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.ParticleSystem/ShapeModule::.ctor(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule__ctor_mB0CE9D41BBE5FFA5B70F465541BA63D9BEEA7264 (ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA * __this, ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___particleSystem0, const RuntimeMethod* method)
{
	{
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_0 = ___particleSystem0;
		__this->set_m_ParticleSystem_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void ShapeModule__ctor_mB0CE9D41BBE5FFA5B70F465541BA63D9BEEA7264_AdjustorThunk (RuntimeObject * __this, ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___particleSystem0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA * _thisAdjusted = reinterpret_cast<ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *>(__this + _offset);
	ShapeModule__ctor_mB0CE9D41BBE5FFA5B70F465541BA63D9BEEA7264(_thisAdjusted, ___particleSystem0, method);
}
// System.Void UnityEngine.ParticleSystem/ShapeModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_enabled_mF6FE8ED99E482A739C00F894235F4E2CD09B0D1E (ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		ShapeModule_set_enabled_Injected_m7C9A449A65B6A44CAE2C49A049431822AF930D5F((ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *)__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ShapeModule_set_enabled_mF6FE8ED99E482A739C00F894235F4E2CD09B0D1E_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA * _thisAdjusted = reinterpret_cast<ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *>(__this + _offset);
	ShapeModule_set_enabled_mF6FE8ED99E482A739C00F894235F4E2CD09B0D1E(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.ParticleSystem/ShapeModule::set_enabled_Injected(UnityEngine.ParticleSystem/ShapeModule&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_enabled_Injected_m7C9A449A65B6A44CAE2C49A049431822AF930D5F (ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA * ____unity_self0, bool ___value1, const RuntimeMethod* method)
{
	typedef void (*ShapeModule_set_enabled_Injected_m7C9A449A65B6A44CAE2C49A049431822AF930D5F_ftn) (ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA *, bool);
	static ShapeModule_set_enabled_Injected_m7C9A449A65B6A44CAE2C49A049431822AF930D5F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ShapeModule_set_enabled_Injected_m7C9A449A65B6A44CAE2C49A049431822AF930D5F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/ShapeModule::set_enabled_Injected(UnityEngine.ParticleSystem/ShapeModule&,System.Boolean)");
	_il2cpp_icall_func(____unity_self0, ___value1);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
