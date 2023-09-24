#include "main.h"

/**
 *print_last_digit - prints last digit of any given number
 *@n:integer used to get last digit from
 *Return: last digit of integer
 */
int print_last_digit(int n)
{
int a;
if (n < 0)
n = -n;
a = n % 10;

if (a < 0)
a = -a;

_putchar(a + '0');

return (a);
}
