#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 *
 *
 *
 *
 *
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
  va_list ap;
  unsigned int i;
  if (n == 0)
    printf(" ")
      if (seperator != NULL)
	va_start(ap, n);
  for (i = 0; i < n; i++)
    printf("%d", va_arg(ap, int);
	   printf("%s", seperator);
	   va_end(ap);
	   }
