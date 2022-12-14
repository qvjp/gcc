/* { dg-require-effective-target powerpc_elfv2 } */
/* There is no global entry point prologue with pcrel.  */
/* { dg-options "-mno-pcrel -fpatchable-function-entry=7,3" } */

/* Verify one error emitted for unexpected 3 nops before local
   entry.  */

extern int a;

int test (int b) {
  return a + b;
}
/* { dg-error "unsupported number of nops before function entry \\(3\\)" "" { target *-*-* } .-1 } */
