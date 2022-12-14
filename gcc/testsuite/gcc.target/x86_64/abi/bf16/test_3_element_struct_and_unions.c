/* This is an autogenerated file. Do not edit.  */

#include "defines.h"
#include "macros.h"

/* Check structs and unions of all permutations of 3 basic types.  */
int
main (void)
{
  check_struct_and_union3(char, char, __bf16, 4, 2);
  check_struct_and_union3(char, __bf16, char, 6, 2);
  check_struct_and_union3(char, __bf16, __bf16, 6, 2);
  check_struct_and_union3(char, __bf16, int, 8, 4);
#ifndef __ILP32__
  check_struct_and_union3(char, __bf16, long, 16, 8);
#endif
  check_struct_and_union3(char, __bf16, long long, 16, 8);
  check_struct_and_union3(char, __bf16, float, 8, 4);
  check_struct_and_union3(char, __bf16, double, 16, 8);
  check_struct_and_union3(char, __bf16, long double, 32, 16);
  check_struct_and_union3(char, int, __bf16, 12, 4);
#ifndef __ILP32__
  check_struct_and_union3(char, long, __bf16, 24, 8);
#endif
  check_struct_and_union3(char, long long, __bf16, 24, 8);
  check_struct_and_union3(char, float, __bf16, 12, 4);
  check_struct_and_union3(char, double, __bf16, 24, 8);
  check_struct_and_union3(char, long double, __bf16, 48, 16);
  check_struct_and_union3(__bf16, char, char, 4, 2);
  check_struct_and_union3(__bf16, char, __bf16, 6, 2);
  check_struct_and_union3(__bf16, char, int, 8, 4);
#ifndef __ILP32__
  check_struct_and_union3(__bf16, char, long, 16, 8);
#endif
  check_struct_and_union3(__bf16, char, long long, 16, 8);
  check_struct_and_union3(__bf16, char, float, 8, 4);
  check_struct_and_union3(__bf16, char, double, 16, 8);
  check_struct_and_union3(__bf16, char, long double, 32, 16);
  check_struct_and_union3(__bf16, __bf16, char, 6, 2);
  check_struct_and_union3(__bf16, __bf16, __bf16, 6, 2);
  check_struct_and_union3(__bf16, __bf16, int, 8, 4);
#ifndef __ILP32__
  check_struct_and_union3(__bf16, __bf16, long, 16, 8);
#endif
  check_struct_and_union3(__bf16, __bf16, long long, 16, 8);
  check_struct_and_union3(__bf16, __bf16, float, 8, 4);
  check_struct_and_union3(__bf16, __bf16, double, 16, 8);
  check_struct_and_union3(__bf16, __bf16, long double, 32, 16);
  check_struct_and_union3(__bf16, int, char, 12, 4);
  check_struct_and_union3(__bf16, int, __bf16, 12, 4);
  check_struct_and_union3(__bf16, int, int, 12, 4);
#ifndef __ILP32__
  check_struct_and_union3(__bf16, int, long, 16, 8);
#endif
  check_struct_and_union3(__bf16, int, long long, 16, 8);
  check_struct_and_union3(__bf16, int, float, 12, 4);
  check_struct_and_union3(__bf16, int, double, 16, 8);
  check_struct_and_union3(__bf16, int, long double, 32, 16);
#ifndef __ILP32__
  check_struct_and_union3(__bf16, long, char, 24, 8);
  check_struct_and_union3(__bf16, long, __bf16, 24, 8);
  check_struct_and_union3(__bf16, long, int, 24, 8);
  check_struct_and_union3(__bf16, long, long, 24, 8);
  check_struct_and_union3(__bf16, long, long long, 24, 8);
  check_struct_and_union3(__bf16, long, float, 24, 8);
  check_struct_and_union3(__bf16, long, double, 24, 8);
#endif
  check_struct_and_union3(__bf16, long, long double, 32, 16);
  check_struct_and_union3(__bf16, long long, char, 24, 8);
  check_struct_and_union3(__bf16, long long, __bf16, 24, 8);
  check_struct_and_union3(__bf16, long long, int, 24, 8);
  check_struct_and_union3(__bf16, long long, long, 24, 8);
  check_struct_and_union3(__bf16, long long, long long, 24, 8);
  check_struct_and_union3(__bf16, long long, float, 24, 8);
  check_struct_and_union3(__bf16, long long, double, 24, 8);
  check_struct_and_union3(__bf16, long long, long double, 32, 16);
  check_struct_and_union3(__bf16, float, char, 12, 4);
  check_struct_and_union3(__bf16, float, __bf16, 12, 4);
  check_struct_and_union3(__bf16, float, int, 12, 4);
#ifndef __ILP32__
  check_struct_and_union3(__bf16, float, long, 16, 8);
#endif
  check_struct_and_union3(__bf16, float, long long, 16, 8);
  check_struct_and_union3(__bf16, float, float, 12, 4);
  check_struct_and_union3(__bf16, float, double, 16, 8);
  check_struct_and_union3(__bf16, float, long double, 32, 16);
  check_struct_and_union3(__bf16, double, char, 24, 8);
  check_struct_and_union3(__bf16, double, __bf16, 24, 8);
  check_struct_and_union3(__bf16, double, int, 24, 8);
  check_struct_and_union3(__bf16, double, long, 24, 8);
  check_struct_and_union3(__bf16, double, long long, 24, 8);
  check_struct_and_union3(__bf16, double, float, 24, 8);
  check_struct_and_union3(__bf16, double, double, 24, 8);
  check_struct_and_union3(__bf16, double, long double, 32, 16);
  check_struct_and_union3(__bf16, long double, char, 48, 16);
  check_struct_and_union3(__bf16, long double, __bf16, 48, 16);
  check_struct_and_union3(__bf16, long double, int, 48, 16);
  check_struct_and_union3(__bf16, long double, long, 48, 16);
  check_struct_and_union3(__bf16, long double, long long, 48, 16);
  check_struct_and_union3(__bf16, long double, float, 48, 16);
  check_struct_and_union3(__bf16, long double, double, 48, 16);
  check_struct_and_union3(__bf16, long double, long double, 48, 16);
  check_struct_and_union3(int, char, __bf16, 8, 4);
  check_struct_and_union3(int, __bf16, char, 8, 4);
  check_struct_and_union3(int, __bf16, __bf16, 8, 4);
  check_struct_and_union3(int, __bf16, int, 12, 4);
#ifndef __ILP32__
  check_struct_and_union3(int, __bf16, long, 16, 8);
#endif
  check_struct_and_union3(int, __bf16, long long, 16, 8);
  check_struct_and_union3(int, __bf16, float, 12, 4);
  check_struct_and_union3(int, __bf16, double, 16, 8);
  check_struct_and_union3(int, __bf16, long double, 32, 16);
  check_struct_and_union3(int, int, __bf16, 12, 4);
#ifndef __ILP32__
  check_struct_and_union3(int, long, __bf16, 24, 8);
#endif
  check_struct_and_union3(int, long long, __bf16, 24, 8);
  check_struct_and_union3(int, float, __bf16, 12, 4);
  check_struct_and_union3(int, double, __bf16, 24, 8);
  check_struct_and_union3(int, long double, __bf16, 48, 16);
#ifndef __ILP32__
  check_struct_and_union3(long, char, __bf16, 16, 8);
  check_struct_and_union3(long, __bf16, char, 16, 8);
  check_struct_and_union3(long, __bf16, __bf16, 16, 8);
  check_struct_and_union3(long, __bf16, int, 16, 8);
  check_struct_and_union3(long, __bf16, long, 24, 8);
  check_struct_and_union3(long, __bf16, long long, 24, 8);
  check_struct_and_union3(long, __bf16, float, 16, 8);
  check_struct_and_union3(long, __bf16, double, 24, 8);
#endif
  check_struct_and_union3(long, __bf16, long double, 32, 16);
#ifndef __ILP32__
  check_struct_and_union3(long, int, __bf16, 16, 8);
  check_struct_and_union3(long, long, __bf16, 24, 8);
  check_struct_and_union3(long, long long, __bf16, 24, 8);
  check_struct_and_union3(long, float, __bf16, 16, 8);
  check_struct_and_union3(long, double, __bf16, 24, 8);
#endif
  check_struct_and_union3(long, long double, __bf16, 48, 16);
  check_struct_and_union3(long long, char, __bf16, 16, 8);
  check_struct_and_union3(long long, __bf16, char, 16, 8);
  check_struct_and_union3(long long, __bf16, __bf16, 16, 8);
  check_struct_and_union3(long long, __bf16, int, 16, 8);
#ifndef __ILP32__
  check_struct_and_union3(long long, __bf16, long, 24, 8);
#endif
  check_struct_and_union3(long long, __bf16, long long, 24, 8);
  check_struct_and_union3(long long, __bf16, float, 16, 8);
  check_struct_and_union3(long long, __bf16, double, 24, 8);
  check_struct_and_union3(long long, __bf16, long double, 32, 16);
  check_struct_and_union3(long long, int, __bf16, 16, 8);
#ifndef __ILP32__
  check_struct_and_union3(long long, long, __bf16, 24, 8);
#endif
  check_struct_and_union3(long long, long long, __bf16, 24, 8);
  check_struct_and_union3(long long, float, __bf16, 16, 8);
  check_struct_and_union3(long long, double, __bf16, 24, 8);
  check_struct_and_union3(long long, long double, __bf16, 48, 16);
  check_struct_and_union3(float, char, __bf16, 8, 4);
  check_struct_and_union3(float, __bf16, char, 8, 4);
  check_struct_and_union3(float, __bf16, __bf16, 8, 4);
  check_struct_and_union3(float, __bf16, int, 12, 4);
#ifndef __ILP32__
  check_struct_and_union3(float, __bf16, long, 16, 8);
#endif
  check_struct_and_union3(float, __bf16, long long, 16, 8);
  check_struct_and_union3(float, __bf16, float, 12, 4);
  check_struct_and_union3(float, __bf16, double, 16, 8);
  check_struct_and_union3(float, __bf16, long double, 32, 16);
  check_struct_and_union3(float, int, __bf16, 12, 4);
#ifndef __ILP32__
  check_struct_and_union3(float, long, __bf16, 24, 8);
#endif
  check_struct_and_union3(float, long long, __bf16, 24, 8);
  check_struct_and_union3(float, float, __bf16, 12, 4);
  check_struct_and_union3(float, double, __bf16, 24, 8);
  check_struct_and_union3(float, long double, __bf16, 48, 16);
  check_struct_and_union3(double, char, __bf16, 16, 8);
  check_struct_and_union3(double, __bf16, char, 16, 8);
  check_struct_and_union3(double, __bf16, __bf16, 16, 8);
  check_struct_and_union3(double, __bf16, int, 16, 8);
#ifndef __ILP32__
  check_struct_and_union3(double, __bf16, long, 24, 8);
#endif
  check_struct_and_union3(double, __bf16, long long, 24, 8);
  check_struct_and_union3(double, __bf16, float, 16, 8);
  check_struct_and_union3(double, __bf16, double, 24, 8);
  check_struct_and_union3(double, __bf16, long double, 32, 16);
  check_struct_and_union3(double, int, __bf16, 16, 8);
#ifndef __ILP32__
  check_struct_and_union3(double, long, __bf16, 24, 8);
#endif
  check_struct_and_union3(double, long long, __bf16, 24, 8);
  check_struct_and_union3(double, float, __bf16, 16, 8);
  check_struct_and_union3(double, double, __bf16, 24, 8);
  check_struct_and_union3(double, long double, __bf16, 48, 16);
  check_struct_and_union3(long double, char, __bf16, 32, 16);
  check_struct_and_union3(long double, __bf16, char, 32, 16);
  check_struct_and_union3(long double, __bf16, __bf16, 32, 16);
  check_struct_and_union3(long double, __bf16, int, 32, 16);
  check_struct_and_union3(long double, __bf16, long, 32, 16);
  check_struct_and_union3(long double, __bf16, long long, 32, 16);
  check_struct_and_union3(long double, __bf16, float, 32, 16);
  check_struct_and_union3(long double, __bf16, double, 32, 16);
  check_struct_and_union3(long double, __bf16, long double, 48, 16);
  check_struct_and_union3(long double, int, __bf16, 32, 16);
  check_struct_and_union3(long double, long, __bf16, 32, 16);
  check_struct_and_union3(long double, long long, __bf16, 32, 16);
  check_struct_and_union3(long double, float, __bf16, 32, 16);
  check_struct_and_union3(long double, double, __bf16, 32, 16);
  check_struct_and_union3(long double, long double, __bf16, 48, 16);
  return 0;
}
