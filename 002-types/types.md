# types
## C++ における型とは


| 型名                     | サイズ               | 符号 | 接尾辞                                           |
| ------------------------ | -------------------- | ---- | ------------------------------------------------ |
| `bool`                   | 1bit~ <sup>1)</sup>  | なし |                                                  |
| `char`                   | 8bit  <sup>2)</sup>  |      |                                                  |
| `wchar_t`                | 8bit~ <sup>3)</sup>  |      |                                                  |
| `signed char`            | 8bit                 | あり |                                                  |
| `unsigned char`          | 8bit                 | なし |                                                  |
| `int8_t`                 | 8bit                 | あり |                                                  |
| `uint8_t`                | 8bit                 | なし |                                                  |
| `int_fast8_t`            | 8bit~                | あり |                                                  |
| `uint_fast8_t`           | 8bit~                | なし |                                                  |
| `int_least8_t`           | 8bit~ <sup>3)</sup>  | あり |                                                  |
| `uint_least8_t`          | 8bit~ <sup>3)</sup>  | なし |                                                  |
| `short`                  | 16bit~ <sup>3)</sup> | あり |                                                  |
| `signed short`           | 16bit~ <sup>3)</sup> | あり |                                                  |
| `unsigned short`         | 16bit~ <sup>3)</sup> | なし |                                                  |
| `short int`              | 16bit~ <sup>3)</sup> | あり |                                                  |
| `signed short int`       | 16bit~ <sup>3)</sup> | あり |                                                  |
| `unsigned short int`     | 16bit~ <sup>3)</sup> | なし |                                                  |
| `int16_t`                | 16bit                | あり |                                                  |
| `uint16_t`               | 16bit                | なし |                                                  |
| `int_fast16_t`           | 16bit~               | あり |                                                  |
| `uint_fast16_t`          | 16bit~               | なし |                                                  |
| `int_least16_t`          | 16bit~               | あり |                                                  |
| `uint_least16_t`         | 16bit~               | なし |                                                  |
| `int`                    | 16bit~               | あり |                                                  |
| `signed int`             | 16bit~               | あり |                                                  |
| `unsigned int`           | 16bit~               | なし | `u, U`                                           |
| `signed`                 | 16bit~               | あり |                                                  |
| `unsigned`               | 16bit~               | なし | `u, U`                                           |
| `int32_t`                | 32bit                | あり |                                                  |
| `uint32_t`               | 32bit                | なし |                                                  |
| `int_fast32_t`           | 32bit~               | あり |                                                  |
| `uint_fast32_t`          | 32bit~               | なし |                                                  |
| `int_least32_t`          | 32bit~               | あり |                                                  |
| `uint_least32_t`         | 32bit~               | なし |                                                  |
| `long`                   | 32bit~ <sup>4)</sup> | あり | `l, L`                                           |
| `long int`               | 32bit~ <sup>4)</sup> | あり | `l, L`                                           |
| `signed long`            | 32bit~ <sup>4)</sup> | あり | `l, L`                                           |
| `signed long int`        | 32bit~ <sup>4)</sup> | あり | `l, L`                                           |
| `unsigned long`          | 32bit~ <sup>4)</sup> | なし | `ul, UL, uL, Ul`                                 |
| `unsigned long int`      | 32bit~ <sup>4)</sup> | なし | `ul, UL, uL, Ul`                                 |
| `int64_t`                | 64bit                | あり |                                                  |
| `uint64_t`               | 64bit                | なし |                                                  |
| `int_fast64_t`           | 64bit~               | あり |                                                  |
| `uint_fast64_t`          | 64bit~               | なし |                                                  |
| `int_least64_t`          | 64bit~               | あり |                                                  |
| `uint_least64_t`         | 64bit~               | なし |                                                  |
| `long long`              | 64bit~               | あり | `ll, LL`                                         |
| `long long int`          | 64bit~               | あり | `ll, LL`                                         |
| `signed long long`       | 64bit~               | あり | `ll, LL`                                         |
| `signed long long int`   | 64bit~               | あり | `ll, LL`                                         |
| `unsigned long long`     | 64bit~               | なし | `ull, ULL, uLL, Ull`                             |
| `unsigned long long int` | 64bit~               | なし | `ull, ULL, uLL, Ull`                             |
| `intmax_t`               | 64bit~ <sup>5)</sup> | あり |                                                  |
| `uintmax_t`              | 64bit~ <sup>5)</sup> | なし |                                                  |
| `size_t`                 | 64bit  <sup>6)</sup> | なし | `z, Z, zu, uz, ZU, UZ, zU, Zu, uZ, Uz`(C++20 or later) |
| `intptr_t`               | size of pointer      | あり |                                                  |
| `uintptr_t`              | size of pointer      | なし |                                                  |
| `wint_t`                 | <sup>7)</sup>        |      |                                                  |
| `ptrdiff_t`              | <sup>8)</sup>        | あり |                                                  |
| `sig_atomic_t`           | <sup>9)</sup>        |      |                                                  |