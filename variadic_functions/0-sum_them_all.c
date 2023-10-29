#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 *sum_them_all - function that adds all optional numbers given up to n
 *@n: max amount of input numbers to enter
 *@...: A variable number of input for sum
 *Return 0 if n is 0 else sum
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i, sum = 0;
if (n == 0)
{
return (0)
}
va_start(ap , n);
for (i = 0; i < n; i++)
sum += va_arg(ap, int);
va_end(ap); 
return (sum);
}
