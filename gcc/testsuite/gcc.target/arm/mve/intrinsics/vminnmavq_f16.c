/* { dg-require-effective-target arm_v8_1m_mve_fp_ok } */
/* { dg-add-options arm_v8_1m_mve_fp } */
/* { dg-additional-options "-O2" } */
/* { dg-final { check-function-bodies "**" "" } } */

#include "arm_mve.h"

#ifdef __cplusplus
extern "C" {
#endif

/*
**foo:
**	...
**	vminnmav.f16	(?:ip|fp|r[0-9]+), q[0-9]+(?:	@.*|)
**	...
*/
float16_t
foo (float16_t a, float16x8_t b)
{
  return vminnmavq_f16 (a, b);
}


/*
**foo1:
**	...
**	vminnmav.f16	(?:ip|fp|r[0-9]+), q[0-9]+(?:	@.*|)
**	...
*/
float16_t
foo1 (float16_t a, float16x8_t b)
{
  return vminnmavq (a, b);
}

/*
**foo2:
**	...
**	vminnmav.f16	(?:ip|fp|r[0-9]+), q[0-9]+(?:	@.*|)
**	...
*/
float16_t
foo2 (float16x8_t b)
{
  return vminnmavq (1.1, b);
}

#ifdef __cplusplus
}
#endif

/* { dg-final { scan-assembler-not "__ARM_undef" } } */