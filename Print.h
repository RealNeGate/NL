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
//    	nstl_print(
//    		"Hello, ", "Bob", "!\n",
//     		"Here's an integer: ", 6 * 4, ", Now a float: ", 5.0, ".\n",
//     		"You know I'm balling ", "Usually like kobe", "\n"
//     	);
//     
//     	return 0;
//	}
#ifndef NSTL_PRINT
#define NSTL_PRINT

#ifndef NSTL_NO_STDIO
#include <stdio.h>
#endif // NSTL_NO_STDIO

#define nstl_concat(arg1, arg2)   nstl_concat1(arg1, arg2)
#define nstl_concat1(arg1, arg2)  nstl_concat2(arg1, arg2)
#define nstl_concat2(arg1, arg2)  arg1##arg2

#define nstl_print_v_iter_1(x, ...)   nstl_print_v_iter_n(0, x)
#define nstl_print_v_iter_2(x, ...)   nstl_print_v_iter_n(1, x) nstl_print_v_iter_1(__VA_ARGS__)
#define nstl_print_v_iter_3(x, ...)   nstl_print_v_iter_n(2, x) nstl_print_v_iter_2(__VA_ARGS__)
#define nstl_print_v_iter_4(x, ...)   nstl_print_v_iter_n(3, x) nstl_print_v_iter_3(__VA_ARGS__)
#define nstl_print_v_iter_5(x, ...)   nstl_print_v_iter_n(4, x) nstl_print_v_iter_4(__VA_ARGS__)
#define nstl_print_v_iter_6(x, ...)   nstl_print_v_iter_n(5, x) nstl_print_v_iter_5(__VA_ARGS__)
#define nstl_print_v_iter_7(x, ...)   nstl_print_v_iter_n(6, x) nstl_print_v_iter_6(__VA_ARGS__)
#define nstl_print_v_iter_8(x, ...)   nstl_print_v_iter_n(7, x) nstl_print_v_iter_7(__VA_ARGS__)
#define nstl_print_v_iter_9(x, ...)   nstl_print_v_iter_n(8, x) nstl_print_v_iter_8(__VA_ARGS__)
#define nstl_print_v_iter_10(x, ...)  nstl_print_v_iter_n(9, x) nstl_print_v_iter_9(__VA_ARGS__)
#define nstl_print_v_iter_11(x, ...)  nstl_print_v_iter_n(10,x) nstl_print_v_iter_10(__VA_ARGS__)
#define nstl_print_v_iter_12(x, ...)  nstl_print_v_iter_n(11,x) nstl_print_v_iter_11(__VA_ARGS__)
#define nstl_print_v_iter_13(x, ...)  nstl_print_v_iter_n(12,x) nstl_print_v_iter_12(__VA_ARGS__)
#define nstl_print_v_iter_14(x, ...)  nstl_print_v_iter_n(13,x) nstl_print_v_iter_13(__VA_ARGS__)
#define nstl_print_v_iter_15(x, ...)  nstl_print_v_iter_n(14,x) nstl_print_v_iter_14(__VA_ARGS__)
#define nstl_print_v_iter_16(x, ...)  nstl_print_v_iter_n(15,x) nstl_print_v_iter_15(__VA_ARGS__)
#define nstl_print_v_iter_17(x, ...)  nstl_print_v_iter_n(16,x) nstl_print_v_iter_16(__VA_ARGS__)
#define nstl_print_v_iter_18(x, ...)  nstl_print_v_iter_n(17,x) nstl_print_v_iter_17(__VA_ARGS__)
#define nstl_print_v_iter_19(x, ...)  nstl_print_v_iter_n(18,x) nstl_print_v_iter_18(__VA_ARGS__)
#define nstl_print_v_iter_20(x, ...)  nstl_print_v_iter_n(19,x) nstl_print_v_iter_19(__VA_ARGS__)
#define nstl_print_v_iter_21(x, ...)  nstl_print_v_iter_n(20,x) nstl_print_v_iter_20(__VA_ARGS__)
#define nstl_print_v_iter_22(x, ...)  nstl_print_v_iter_n(21,x) nstl_print_v_iter_21(__VA_ARGS__)
#define nstl_print_v_iter_23(x, ...)  nstl_print_v_iter_n(22,x) nstl_print_v_iter_22(__VA_ARGS__)
#define nstl_print_v_iter_24(x, ...)  nstl_print_v_iter_n(23,x) nstl_print_v_iter_23(__VA_ARGS__)
#define nstl_print_v_iter_25(x, ...)  nstl_print_v_iter_n(24,x) nstl_print_v_iter_24(__VA_ARGS__)
#define nstl_print_v_iter_26(x, ...)  nstl_print_v_iter_n(25,x) nstl_print_v_iter_25(__VA_ARGS__)
#define nstl_print_v_iter_27(x, ...)  nstl_print_v_iter_n(26,x) nstl_print_v_iter_26(__VA_ARGS__)
#define nstl_print_v_iter_28(x, ...)  nstl_print_v_iter_n(27,x) nstl_print_v_iter_27(__VA_ARGS__)
#define nstl_print_v_iter_29(x, ...)  nstl_print_v_iter_n(28,x) nstl_print_v_iter_28(__VA_ARGS__)
#define nstl_print_v_iter_30(x, ...)  nstl_print_v_iter_n(29,x) nstl_print_v_iter_29(__VA_ARGS__)
#define nstl_print_v_iter_31(x, ...)  nstl_print_v_iter_n(30,x) nstl_print_v_iter_30(__VA_ARGS__)
#define nstl_print_v_iter_32(x, ...)  nstl_print_v_iter_n(31,x) nstl_print_v_iter_31(__VA_ARGS__)

#define nstl_print_f_iter_1(x, ...)   nstl_print_f_iter_n(0, x)
#define nstl_print_f_iter_2(x, ...)   nstl_print_f_iter_n(1, x) nstl_print_f_iter_1(__VA_ARGS__)
#define nstl_print_f_iter_3(x, ...)   nstl_print_f_iter_n(2, x) nstl_print_f_iter_2(__VA_ARGS__)
#define nstl_print_f_iter_4(x, ...)   nstl_print_f_iter_n(3, x) nstl_print_f_iter_3(__VA_ARGS__)
#define nstl_print_f_iter_5(x, ...)   nstl_print_f_iter_n(4, x) nstl_print_f_iter_4(__VA_ARGS__)
#define nstl_print_f_iter_6(x, ...)   nstl_print_f_iter_n(5, x) nstl_print_f_iter_5(__VA_ARGS__)
#define nstl_print_f_iter_7(x, ...)   nstl_print_f_iter_n(6, x) nstl_print_f_iter_6(__VA_ARGS__)
#define nstl_print_f_iter_8(x, ...)   nstl_print_f_iter_n(7, x) nstl_print_f_iter_7(__VA_ARGS__)
#define nstl_print_f_iter_9(x, ...)   nstl_print_f_iter_n(8, x) nstl_print_f_iter_8(__VA_ARGS__)
#define nstl_print_f_iter_10(x, ...)  nstl_print_f_iter_n(9, x) nstl_print_f_iter_9(__VA_ARGS__)
#define nstl_print_f_iter_11(x, ...)  nstl_print_f_iter_n(10,x) nstl_print_f_iter_10(__VA_ARGS__)
#define nstl_print_f_iter_12(x, ...)  nstl_print_f_iter_n(11,x) nstl_print_f_iter_11(__VA_ARGS__)
#define nstl_print_f_iter_13(x, ...)  nstl_print_f_iter_n(12,x) nstl_print_f_iter_12(__VA_ARGS__)
#define nstl_print_f_iter_14(x, ...)  nstl_print_f_iter_n(13,x) nstl_print_f_iter_13(__VA_ARGS__)
#define nstl_print_f_iter_15(x, ...)  nstl_print_f_iter_n(14,x) nstl_print_f_iter_14(__VA_ARGS__)
#define nstl_print_f_iter_16(x, ...)  nstl_print_f_iter_n(15,x) nstl_print_f_iter_15(__VA_ARGS__)
#define nstl_print_f_iter_17(x, ...)  nstl_print_f_iter_n(16,x) nstl_print_f_iter_16(__VA_ARGS__)
#define nstl_print_f_iter_18(x, ...)  nstl_print_f_iter_n(17,x) nstl_print_f_iter_17(__VA_ARGS__)
#define nstl_print_f_iter_19(x, ...)  nstl_print_f_iter_n(18,x) nstl_print_f_iter_18(__VA_ARGS__)
#define nstl_print_f_iter_20(x, ...)  nstl_print_f_iter_n(19,x) nstl_print_f_iter_19(__VA_ARGS__)
#define nstl_print_f_iter_21(x, ...)  nstl_print_f_iter_n(20,x) nstl_print_f_iter_20(__VA_ARGS__)
#define nstl_print_f_iter_22(x, ...)  nstl_print_f_iter_n(21,x) nstl_print_f_iter_21(__VA_ARGS__)
#define nstl_print_f_iter_23(x, ...)  nstl_print_f_iter_n(22,x) nstl_print_f_iter_22(__VA_ARGS__)
#define nstl_print_f_iter_24(x, ...)  nstl_print_f_iter_n(23,x) nstl_print_f_iter_23(__VA_ARGS__)
#define nstl_print_f_iter_25(x, ...)  nstl_print_f_iter_n(24,x) nstl_print_f_iter_24(__VA_ARGS__)
#define nstl_print_f_iter_26(x, ...)  nstl_print_f_iter_n(25,x) nstl_print_f_iter_25(__VA_ARGS__)
#define nstl_print_f_iter_27(x, ...)  nstl_print_f_iter_n(26,x) nstl_print_f_iter_26(__VA_ARGS__)
#define nstl_print_f_iter_28(x, ...)  nstl_print_f_iter_n(27,x) nstl_print_f_iter_27(__VA_ARGS__)
#define nstl_print_f_iter_29(x, ...)  nstl_print_f_iter_n(28,x) nstl_print_f_iter_28(__VA_ARGS__)
#define nstl_print_f_iter_30(x, ...)  nstl_print_f_iter_n(29,x) nstl_print_f_iter_29(__VA_ARGS__)
#define nstl_print_f_iter_31(x, ...)  nstl_print_f_iter_n(30,x) nstl_print_f_iter_30(__VA_ARGS__)
#define nstl_print_f_iter_32(x, ...)  nstl_print_f_iter_n(31,x) nstl_print_f_iter_31(__VA_ARGS__)

#define nstl_print_f_iter_n(idx, x) '%', _Generic((x), char: 'c', char*: 's', double: 'f', short: 'd', int: 'd', default: 'p' ), 
#define nstl_print_v_iter_n(idx, x) , x

#define nstl_print_narg(...) nstl_print_narg_(__VA_ARGS__, nstl_print_rseq_n())
#define nstl_print_narg_(...) nstl_print_arg_n(__VA_ARGS__) 

#define nstl_print_arg_n(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, N, ...) N 
#define nstl_print_rseq_n() 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0

#define nstl_fprint(stream, ...) \
    fprintf(stream, \
        nstl_concat(nstl_print_f_iter_, nstl_print_narg(__VA_ARGS__))(__VA_ARGS__) \
        nstl_concat(nstl_print_v_iter_, nstl_print_narg(__VA_ARGS__))(__VA_ARGS__) \
    );

#define nstl_print(...) \
    printf( \
        &(char[]) { nstl_concat(nstl_print_f_iter_, nstl_print_narg(__VA_ARGS__))(__VA_ARGS__) '\0' } \
        nstl_concat(nstl_print_v_iter_, nstl_print_narg(__VA_ARGS__))(__VA_ARGS__) \
    );

#define nstl_sprint(buf, ...) \
    sprintf(buf, \
        &(char[]) { nstl_concat(nstl_print_f_iter_, nstl_print_narg(__VA_ARGS__))(__VA_ARGS__) '\0' } \
        nstl_concat(nstl_print_v_iter_, nstl_print_narg(__VA_ARGS__))(__VA_ARGS__) \
    );

#endif /* NSTL_PRINT */