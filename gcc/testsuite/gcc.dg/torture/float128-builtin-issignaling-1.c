/* Test _Float128 __builtin_issignaling.  */
/* { dg-do run } */
/* { dg-options "" } */
/* { dg-add-options float128 } */
/* { dg-add-options ieee } */
/* { dg-require-effective-target float128_runtime } */
/* { dg-additional-options "-fsignaling-nans" } */
/* Workaround for PR57484 on ia32: */
/* { dg-additional-options "-msse2 -mfpmath=sse" { target { ia32 && sse2_runtime } } } */

#define WIDTH 128
#define EXT 0
#include "builtin-issignaling-1.c"
