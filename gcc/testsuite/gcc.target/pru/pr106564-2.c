/* { dg-do assemble } */
/* { dg-options "-Os" } */
/* { dg-final { object-size text <= 8 } } */


unsigned long long test(unsigned int a)
{
        return a;
}
