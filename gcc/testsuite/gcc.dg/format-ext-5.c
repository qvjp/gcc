/* Test for gettext default attributes.  */
/* Origin: Joseph Myers <jsm28@cam.ac.uk> */
/* { dg-do compile } */
/* { dg-options "-std=gnu99 -Wformat" } */

extern int printf (const char *, ...);

extern char *gettext (const char *);
extern char *dgettext (const char *, const char *);
extern char *dcgettext (const char *, const char *, int);

void
foo (int i, long l)
{
  printf (gettext ("%d"), i);
  printf (gettext ("%ld"), i); /* { dg-warning "format" "gettext" } */
  printf (dgettext ("", "%d"), i);
  printf (dgettext ("", "%ld"), i); /* { dg-warning "format" "dgettext" } */
  printf (dcgettext ("", "%d", 0), i);
  printf (dcgettext ("", "%ld", 0), i); /* { dg-warning "format" "dcgettext" } */
}
