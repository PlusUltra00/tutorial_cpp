#include <cstdint>

int main() {
	// C++ では 型名 変数名 = 値 で変数を定義している．
	// 型名 変数名     ; のみの場合は宣言　(declaration)
	// 型名 変数名 = 値;     の場合は初期化(initialization)
	// int  i = 1;  型名..int, 変数名..i, 値..1
	// long l = 2;  型名..int, 変数名..l, 値..2
	// 各数値型のバイト数を変数にまとめた．F11でデバッグしながらそれぞれのバイト数を確認するとよい．
	size_t size_int           = sizeof(int);
	size_t size_long          = sizeof(long);
	size_t size_unsigned      = sizeof(unsigned);
	size_t size_unsigned_long = sizeof(unsigned long);
	size_t size_ll            = sizeof(long long);
	size_t size_ull           = sizeof(unsigned long long);

	size_t size_char          = sizeof(char);
	size_t size_schar         = sizeof(signed char);
	size_t size_uchar         = sizeof(unsigned char);
	size_t size_wchar         = sizeof(wchar_t);

	size_t size_bool          = sizeof(bool);

	size_t size_short         = sizeof(short);
	size_t size_ushort        = sizeof(unsigned short);

	size_t size_int8          = sizeof(int8_t);
	size_t size_int16         = sizeof(int16_t);
	size_t size_int32         = sizeof(int32_t);
	size_t size_int64         = sizeof(int64_t);

	size_t size_uint8         = sizeof(uint8_t);
	size_t size_uint16        = sizeof(uint16_t);
	size_t size_uint32        = sizeof(uint32_t);
	size_t size_uint64        = sizeof(uint64_t);

	size_t size_intl8         = sizeof(int_least8_t);
	size_t size_intl16        = sizeof(int_least16_t);
	size_t size_intl32        = sizeof(int_least32_t);
	size_t size_intl64        = sizeof(int_least64_t);

	size_t size_uintl8        = sizeof(uint_least8_t);
	size_t size_uintl16       = sizeof(uint_least16_t);
	size_t size_uintl32       = sizeof(uint_least32_t);
	size_t size_uintl64       = sizeof(uint_least64_t);

	size_t size_intf8         = sizeof(int_fast8_t);
	size_t size_intf16        = sizeof(int_fast16_t);
	size_t size_intf32        = sizeof(int_fast32_t);
	size_t size_intf64        = sizeof(int_fast64_t);

	size_t size_uintf8        = sizeof(uint_fast8_t);
	size_t size_uintf16       = sizeof(uint_fast16_t);
	size_t size_uintf32       = sizeof(uint_fast32_t);
	size_t size_uintf64       = sizeof(uint_fast64_t);

	size_t size_intmax        = sizeof(intmax_t);
	size_t size_uintmax       = sizeof(uintmax_t);

	size_t size_size_t        = sizeof(size_t);

	size_t size_float         = sizeof(float);
	size_t size_double        = sizeof(double);

	// intptr_t などのポインタ(のちに解説)ではプラットフォームによってサイズが変化する．
#ifdef _WIN64 // 64bit であることを判定するマクロ
	size_t size_intptr        = sizeof(intptr_t);
	size_t size_uintptr       = sizeof(uintptr_t);
#else  // 32bit
	size_t size_intptr        = sizeof(intptr_t);
	size_t size_uintptr       = sizeof(uintptr_t);
#endif

	// 接尾辞として ul → unsigned long, ll → long long など型の情報を加えることができる表現が存在し，
	// これらをリテラルと呼ぶ．通常，整数をそのまま入力すれば int 型として解釈されるが，リテラルにより auto 型を用いた初期化が可能となる．

	auto INT = 3;

	auto LONGLONG = 3LL;
	auto longlong = 3ll;

	auto ulong = 3ul;
	auto ULONG = 3UL;

	auto FLOAT = 3.0f;
	auto DOUBLE = 3.0;
#if __cplusplus > 202002L // C++のバージョンを判定するマクロ
	auto SIZE = 3zu;  // C++ 23 or later. size_t型に対するリテラル
#endif

	// 四則演算の結果を示す．基本的にバイト数の違う整数どうしは大きい方の型となり，（int + long long → long long）
	// 浮動小数点数は double 型が優先される．
	auto sum = 3   + 3.0;
	auto sub = 3   - 3ul;
	auto mul = 3.0 * 3.0f;
	auto div = 3   / 3ll;

	// using と typedef は型に別名を付与することができる．using はC++のみの機能．typedef はC言語・C++どちらにも備わっている．
	// 違いとしては using であれば typedef よりもより自由な表現が可能となった（テンプレートなど，後述）．
	// 上に示している size_t は unsigned long long を typedef したものである．このほかにもライブラリによっては独自の typedef が定義してあるものもある．
#if __cplusplus // C++ であることを判定するマクロ
	using UINT  = unsigned int;
#else
	typedef unsigned int  UINT;
#endif
}