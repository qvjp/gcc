/* Low-level functions for atomic operations.  Alpha version.
   Copyright (C) 1999, 2000, 2001 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with the GNU C Library; see the file COPYING.LIB.  If not,
   write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

#ifndef _BITS_ATOMICITY_H
#define _BITS_ATOMICITY_H	1

/* @@@ With gas we can play nice .subsection games to get the
   non-predicted branch pointing forward.  But Digital assemblers
   don't understand those directives.  This isn't a terribly
   important issue, so just ignore it.  */

typedef int _Atomic_word;

static inline _Atomic_word
__attribute__ ((__unused__))
__exchange_and_add (volatile _Atomic_word* __mem, int __val)
{
  register int __result, __tmp;

  __asm__ __volatile__ (
      "\n$Lxadd_%=:\n\t"
      "ldl_l  %0,%3\n\t"
      "addl   %0,%4,%1\n\t"
      "stl_c  %1,%2\n\t"
      "beq    %1,$Lxadd_%=\n\t"
      "mb"
      : "=&r"(__result), "=&r"(__tmp), "=m"(*__mem)
      : "m" (*__mem), "r"(__val));

  return __result;
}

static inline void
__attribute__ ((__unused__))
__atomic_add (volatile _Atomic_word* __mem, int __val)
{
  register _Atomic_word __result;

  __asm__ __volatile__ (
      "\n$Ladd_%=:\n\t"
      "ldl_l  %0,%2\n\t"
      "addl   %0,%3,%0\n\t"
      "stl_c  %0,%1\n\t"
      "beq    %0,$Ladd_%=\n\t"
      "mb"
      : "=&r"(__result), "=m"(*__mem)
      : "m" (*__mem), "r"(__val));
}

static inline int
__attribute__ ((__unused__))
__compare_and_swap (volatile long *__p, long __oldval, long __newval)
{
  int __ret;

  __asm__ __volatile__ (
      "\n$Lcas_%=:\n\t"
      "ldq_l  %0,%4\n\t"
      "cmpeq  %0,%2,%0\n\t"
      "beq    %0,3f\n\t"
      "mov    %3,%0\n\t"
      "stq_c  %0,%1\n\t"
      "beq    %0,$Lcas_%=\n\t"
      "mb"
      : "=&r"(__ret), "=m"(*__p)
      : "r"(__oldval), "r"(__newval), "m"(*__p));

  return __ret;
}

#endif /* atomicity.h */
