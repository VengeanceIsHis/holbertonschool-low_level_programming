#include "main.h"
/**
 *more_numbers - prints numbers from 0 to 14 10 times
 *@a: int to count how many times the loop will be repeated
 *@b:integer used to count from 0 to 14
 *Return: void
 */
void more_numbers(void)
{
int a, b;
for (a = 0; a < 10; a++)
{
for (b = 0; b < 15; b++)
{
if (b > 9)
{
_putchar((b / 10) + '0');
}
_putchar((b % 10) + '0');
}
_putchar('\n');
}
}
