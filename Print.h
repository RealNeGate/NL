// MIT License
//
// Copyright (c) 2021 Yasser Arguelles
// 
// Permission is hereby granted, free of charge, to any person obtaining
// a copy of this softwareand associated documentation files (the
// "Software"), to deal in the Software without restriction, including
// without limitation the rights to use, copy, modify, merge, publish,
// distribute, sublicense, and /or sell copies of the Software, and to
// permit persons to whom the Software is furnished to do so, subject to
// the following conditions:
// 
// The above copyright noticeand this permission notice shall be
// included in all copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT.IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
// LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
// OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
// WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//
// EXAMPLE
//	  
//	int main() {
//    	nl_print(
//    		"Hello, ", "Bob", "!\n",
//     		"Here's an integer: ", 6 * 4, ", Now a float: ", 5.0, ".\n",
//     		"You know I'm balling ", "Usually like kobe", "\n"
//     	);
//     
//     	return 0;
//	}
#ifndef NL_PRINT
#define NL_PRINT

#ifndef NL_NO_STDIO
#include <stdio.h>
#endif // NL_NO_STDIO

#ifndef NL_MY_FPRINTF
#define NL_MY_FPRINTF(stream, fmt, ...) fprintf(stream, fmt, __VA_ARGS__) 
#endif // NL_MY_FPRINTF

#ifndef NL_MY_SNPRINTF
#define NL_MY_SNPRINTF(buffer, len, fmt, ...) snprintf(buffer, len, fmt, __VA_ARGS__) 
#endif // NL_MY_SNPRINTF

#include <stdint.h>
#include <inttypes.h>
#include <stdarg.h>
#include <assert.h>

#define nl_concat(arg1, arg2)   nl_concat1(arg1, arg2)
#define nl_concat1(arg1, arg2)  nl_concat2(arg1, arg2)
#define nl_concat2(arg1, arg2)  arg1##arg2

#define nl_print_v_iter_1(x, ...)   nl_print_v_iter_n(0, x)
#define nl_print_v_iter_2(x, ...)   nl_print_v_iter_n(1, x) nl_print_v_iter_1(__VA_ARGS__)
#define nl_print_v_iter_3(x, ...)   nl_print_v_iter_n(2, x) nl_print_v_iter_2(__VA_ARGS__)
#define nl_print_v_iter_4(x, ...)   nl_print_v_iter_n(3, x) nl_print_v_iter_3(__VA_ARGS__)
#define nl_print_v_iter_5(x, ...)   nl_print_v_iter_n(4, x) nl_print_v_iter_4(__VA_ARGS__)
#define nl_print_v_iter_6(x, ...)   nl_print_v_iter_n(5, x) nl_print_v_iter_5(__VA_ARGS__)
#define nl_print_v_iter_7(x, ...)   nl_print_v_iter_n(6, x) nl_print_v_iter_6(__VA_ARGS__)
#define nl_print_v_iter_8(x, ...)   nl_print_v_iter_n(7, x) nl_print_v_iter_7(__VA_ARGS__)
#define nl_print_v_iter_9(x, ...)   nl_print_v_iter_n(8, x) nl_print_v_iter_8(__VA_ARGS__)
#define nl_print_v_iter_10(x, ...)  nl_print_v_iter_n(9, x) nl_print_v_iter_9(__VA_ARGS__)
#define nl_print_v_iter_11(x, ...)  nl_print_v_iter_n(10,x) nl_print_v_iter_10(__VA_ARGS__)
#define nl_print_v_iter_12(x, ...)  nl_print_v_iter_n(11,x) nl_print_v_iter_11(__VA_ARGS__)
#define nl_print_v_iter_13(x, ...)  nl_print_v_iter_n(12,x) nl_print_v_iter_12(__VA_ARGS__)
#define nl_print_v_iter_14(x, ...)  nl_print_v_iter_n(13,x) nl_print_v_iter_13(__VA_ARGS__)
#define nl_print_v_iter_15(x, ...)  nl_print_v_iter_n(14,x) nl_print_v_iter_14(__VA_ARGS__)
#define nl_print_v_iter_16(x, ...)  nl_print_v_iter_n(15,x) nl_print_v_iter_15(__VA_ARGS__)
#define nl_print_v_iter_17(x, ...)  nl_print_v_iter_n(16,x) nl_print_v_iter_16(__VA_ARGS__)
#define nl_print_v_iter_18(x, ...)  nl_print_v_iter_n(17,x) nl_print_v_iter_17(__VA_ARGS__)
#define nl_print_v_iter_19(x, ...)  nl_print_v_iter_n(18,x) nl_print_v_iter_18(__VA_ARGS__)
#define nl_print_v_iter_20(x, ...)  nl_print_v_iter_n(19,x) nl_print_v_iter_19(__VA_ARGS__)
#define nl_print_v_iter_21(x, ...)  nl_print_v_iter_n(20,x) nl_print_v_iter_20(__VA_ARGS__)
#define nl_print_v_iter_22(x, ...)  nl_print_v_iter_n(21,x) nl_print_v_iter_21(__VA_ARGS__)
#define nl_print_v_iter_23(x, ...)  nl_print_v_iter_n(22,x) nl_print_v_iter_22(__VA_ARGS__)
#define nl_print_v_iter_24(x, ...)  nl_print_v_iter_n(23,x) nl_print_v_iter_23(__VA_ARGS__)
#define nl_print_v_iter_25(x, ...)  nl_print_v_iter_n(24,x) nl_print_v_iter_24(__VA_ARGS__)
#define nl_print_v_iter_26(x, ...)  nl_print_v_iter_n(25,x) nl_print_v_iter_25(__VA_ARGS__)
#define nl_print_v_iter_27(x, ...)  nl_print_v_iter_n(26,x) nl_print_v_iter_26(__VA_ARGS__)
#define nl_print_v_iter_28(x, ...)  nl_print_v_iter_n(27,x) nl_print_v_iter_27(__VA_ARGS__)
#define nl_print_v_iter_29(x, ...)  nl_print_v_iter_n(28,x) nl_print_v_iter_28(__VA_ARGS__)
#define nl_print_v_iter_30(x, ...)  nl_print_v_iter_n(29,x) nl_print_v_iter_29(__VA_ARGS__)
#define nl_print_v_iter_31(x, ...)  nl_print_v_iter_n(30,x) nl_print_v_iter_30(__VA_ARGS__)
#define nl_print_v_iter_32(x, ...)  nl_print_v_iter_n(31,x) nl_print_v_iter_31(__VA_ARGS__)

#define nl_print_f_iter_1(x, ...)   nl_print_f_iter_n(0, x)
#define nl_print_f_iter_2(x, ...)   nl_print_f_iter_n(1, x) nl_print_f_iter_1(__VA_ARGS__)
#define nl_print_f_iter_3(x, ...)   nl_print_f_iter_n(2, x) nl_print_f_iter_2(__VA_ARGS__)
#define nl_print_f_iter_4(x, ...)   nl_print_f_iter_n(3, x) nl_print_f_iter_3(__VA_ARGS__)
#define nl_print_f_iter_5(x, ...)   nl_print_f_iter_n(4, x) nl_print_f_iter_4(__VA_ARGS__)
#define nl_print_f_iter_6(x, ...)   nl_print_f_iter_n(5, x) nl_print_f_iter_5(__VA_ARGS__)
#define nl_print_f_iter_7(x, ...)   nl_print_f_iter_n(6, x) nl_print_f_iter_6(__VA_ARGS__)
#define nl_print_f_iter_8(x, ...)   nl_print_f_iter_n(7, x) nl_print_f_iter_7(__VA_ARGS__)
#define nl_print_f_iter_9(x, ...)   nl_print_f_iter_n(8, x) nl_print_f_iter_8(__VA_ARGS__)
#define nl_print_f_iter_10(x, ...)  nl_print_f_iter_n(9, x) nl_print_f_iter_9(__VA_ARGS__)
#define nl_print_f_iter_11(x, ...)  nl_print_f_iter_n(10,x) nl_print_f_iter_10(__VA_ARGS__)
#define nl_print_f_iter_12(x, ...)  nl_print_f_iter_n(11,x) nl_print_f_iter_11(__VA_ARGS__)
#define nl_print_f_iter_13(x, ...)  nl_print_f_iter_n(12,x) nl_print_f_iter_12(__VA_ARGS__)
#define nl_print_f_iter_14(x, ...)  nl_print_f_iter_n(13,x) nl_print_f_iter_13(__VA_ARGS__)
#define nl_print_f_iter_15(x, ...)  nl_print_f_iter_n(14,x) nl_print_f_iter_14(__VA_ARGS__)
#define nl_print_f_iter_16(x, ...)  nl_print_f_iter_n(15,x) nl_print_f_iter_15(__VA_ARGS__)
#define nl_print_f_iter_17(x, ...)  nl_print_f_iter_n(16,x) nl_print_f_iter_16(__VA_ARGS__)
#define nl_print_f_iter_18(x, ...)  nl_print_f_iter_n(17,x) nl_print_f_iter_17(__VA_ARGS__)
#define nl_print_f_iter_19(x, ...)  nl_print_f_iter_n(18,x) nl_print_f_iter_18(__VA_ARGS__)
#define nl_print_f_iter_20(x, ...)  nl_print_f_iter_n(19,x) nl_print_f_iter_19(__VA_ARGS__)
#define nl_print_f_iter_21(x, ...)  nl_print_f_iter_n(20,x) nl_print_f_iter_20(__VA_ARGS__)
#define nl_print_f_iter_22(x, ...)  nl_print_f_iter_n(21,x) nl_print_f_iter_21(__VA_ARGS__)
#define nl_print_f_iter_23(x, ...)  nl_print_f_iter_n(22,x) nl_print_f_iter_22(__VA_ARGS__)
#define nl_print_f_iter_24(x, ...)  nl_print_f_iter_n(23,x) nl_print_f_iter_23(__VA_ARGS__)
#define nl_print_f_iter_25(x, ...)  nl_print_f_iter_n(24,x) nl_print_f_iter_24(__VA_ARGS__)
#define nl_print_f_iter_26(x, ...)  nl_print_f_iter_n(25,x) nl_print_f_iter_25(__VA_ARGS__)
#define nl_print_f_iter_27(x, ...)  nl_print_f_iter_n(26,x) nl_print_f_iter_26(__VA_ARGS__)
#define nl_print_f_iter_28(x, ...)  nl_print_f_iter_n(27,x) nl_print_f_iter_27(__VA_ARGS__)
#define nl_print_f_iter_29(x, ...)  nl_print_f_iter_n(28,x) nl_print_f_iter_28(__VA_ARGS__)
#define nl_print_f_iter_30(x, ...)  nl_print_f_iter_n(29,x) nl_print_f_iter_29(__VA_ARGS__)
#define nl_print_f_iter_31(x, ...)  nl_print_f_iter_n(30,x) nl_print_f_iter_30(__VA_ARGS__)
#define nl_print_f_iter_32(x, ...)  nl_print_f_iter_n(31,x) nl_print_f_iter_31(__VA_ARGS__)

#define nl_print_f_iter_n(idx, x) \
	_Generic((x),                 \
	char*: NL__cstring,           \
	char: NL__char,               \
	short: NL__d,                 \
	int: NL__d,                   \
	long: NL__ld,                 \
	long long: NL__lld,           \
	unsigned char: NL__d,         \
	unsigned short: NL__d,        \
	unsigned int: NL__u,          \
	unsigned long: NL__lu,        \
	unsigned long long: NL__llu,  \
	float: NL__float,             \
	double: NL__float,            \
	default: NL__ptr              \
),

#define nl_print_v_iter_n(idx, x) , x

#define nl_print_narg(...) nl_print_narg_(__VA_ARGS__, nl_print_rseq_n())
#define nl_print_narg_(...) nl_print_arg_n(__VA_ARGS__) 

#define nl_print_arg_n(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, N, ...) N 
#define nl_print_rseq_n() 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0

#define nl_fprint(stream, ...)                                                                   \
	nl__internal_print(stream,                                                                   \
	(NL__PrintType[]) { nl_concat(nl_print_f_iter_, nl_print_narg(__VA_ARGS__))(__VA_ARGS__) 0 } \
	nl_concat(nl_print_v_iter_, nl_print_narg(__VA_ARGS__))(__VA_ARGS__))                        \

#define nl_print(...)                                                                            \
	nl__internal_print(stdout,                                                                   \
	(NL__PrintType[]) { nl_concat(nl_print_f_iter_, nl_print_narg(__VA_ARGS__))(__VA_ARGS__) 0 } \
	nl_concat(nl_print_v_iter_, nl_print_narg(__VA_ARGS__))(__VA_ARGS__))                        \

#define nl_sprint(buf, len, ...)                                                                 \
	nl__internal_sprint(buf, len,                                                                \
	(NL__PrintType[]) { nl_concat(nl_print_f_iter_, nl_print_narg(__VA_ARGS__))(__VA_ARGS__) 0 } \
	nl_concat(nl_print_v_iter_, nl_print_narg(__VA_ARGS__))(__VA_ARGS__))                        \

typedef enum {
	NL__none,
    NL__char,
    NL__d,
    NL__ld,
    NL__lld,
    NL__u,
    NL__lu,
    NL__llu,
    NL__ptr,
    NL__float,
    NL__cstring
} NL__PrintType;

inline static void nl__internal_print(FILE* restrict out, const NL__PrintType* restrict fmt, ...) {
    va_list va;
    va_start(va, fmt);
	
    // TODO: maybe do something fancy like a custom print eventually...
    for (; *fmt != NL__none; fmt++) switch ((NL__PrintType) *fmt) {
		case NL__char:    NL_MY_FPRINTF(out, "%c",   va_arg(va, int)); break;
		case NL__d:       NL_MY_FPRINTF(out, "%d",   va_arg(va, int)); break;
		case NL__ld:      NL_MY_FPRINTF(out, "%ld",  va_arg(va, long)); break;
		case NL__lld:     NL_MY_FPRINTF(out, "%lld", va_arg(va, long long)); break;
		case NL__u:       NL_MY_FPRINTF(out, "%u",   va_arg(va, unsigned int)); break;
		case NL__lu:      NL_MY_FPRINTF(out, "%lu",  va_arg(va, unsigned long)); break;
		case NL__llu:     NL_MY_FPRINTF(out, "%llu", va_arg(va, unsigned long long)); break;
		case NL__ptr:     NL_MY_FPRINTF(out, "%p",   va_arg(va, void*)); break;
		case NL__float:   NL_MY_FPRINTF(out, "%f",   va_arg(va, double)); break;
		case NL__cstring: NL_MY_FPRINTF(out, "%s",   va_arg(va, char*)); break;
		default: assert(0);
    }
	
    va_end(va);
}

inline static ptrdiff_t nl__internal_sprint(char* buffer, size_t len, const NL__PrintType* restrict fmt, ...) {
	// must be representable in ptrdiff_t
	assert(len < PTRDIFF_MAX);
	
    va_list va;
    va_start(va, fmt);
	
    // TODO: maybe do something fancy like a custom print eventually...
    size_t total = 0;
    for (; *fmt != NL__none; fmt++) {
        size_t piece_length = 0;
        switch ((NL__PrintType) *fmt) {
			case NL__char:    piece_length = NL_MY_SNPRINTF(buffer, len, "%c",   va_arg(va, int)); break;
			case NL__d:       piece_length = NL_MY_SNPRINTF(buffer, len, "%d",   va_arg(va, int)); break;
			case NL__ld:      piece_length = NL_MY_SNPRINTF(buffer, len, "%ld",  va_arg(va, long)); break;
			case NL__lld:     piece_length = NL_MY_SNPRINTF(buffer, len, "%lld", va_arg(va, long long)); break;
			case NL__u:       piece_length = NL_MY_SNPRINTF(buffer, len, "%u",   va_arg(va, unsigned int)); break;
			case NL__lu:      piece_length = NL_MY_SNPRINTF(buffer, len, "%lu",  va_arg(va, unsigned long)); break;
			case NL__llu:     piece_length = NL_MY_SNPRINTF(buffer, len, "%llu", va_arg(va, unsigned long long)); break;
			case NL__ptr:     piece_length = NL_MY_SNPRINTF(buffer, len, "%p",   va_arg(va, void*)); break;
			case NL__float:   piece_length = NL_MY_SNPRINTF(buffer, len, "%f",   va_arg(va, double)); break;
			case NL__cstring: piece_length = NL_MY_SNPRINTF(buffer, len, "%s",   va_arg(va, char*)); break;
			default: assert(0);
        }
		
        if (piece_length < 0 || piece_length >= len) return -1;
        len -= piece_length;
		
        buffer += piece_length;
        total += piece_length;
    }
	
    va_end(va);
    return total;
}

#endif /* NL_PRINT */
