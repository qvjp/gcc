// PR c++/104226
// { dg-do compile }
// { dg-options "-Wno-psabi" }

typedef unsigned short __attribute__((__vector_size__(16))) U;
typedef unsigned int __attribute__((__vector_size__(16))) V;
typedef unsigned int __attribute__((__vector_size__(32))) W;

U
foo (void)
{
  return __builtin_convertvector (__builtin_shufflevector ((V){}, (W){},
							   0, 0, 1, 0,
							   5, 5, 0, 2), U);
}
