#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 *print_strings - prints strings with given seperator in between
 *@seperator: String input to print in between strings
 *@n: The number of strings passed to the function
 *@...: A variable number of strings to be printed
 *Return: void
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
va_list ap;
char *str;
unsigned int i;
va_start(ap, n);
for (i = 0; i < n; i++)
{
str = va_arg(ap, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (i != (n - 1) && seperator != NULL)
printf("%s", seperator);
}
printf("\n");
va_end(ap);
}
