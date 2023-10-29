#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 *print_numbers - prints all given numbers followed by given string
 *@n: number of paramers to be added to function
 *@...: infinite variables to be added to function
 *@seperator: string to add in between each variable
 *Return: void
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
va_start(ap, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(ap, int));
if (i != (n - 1) && seperator != NULL)
printf("%s", seperator);
}
printf("\n");
va_end(ap);
}
