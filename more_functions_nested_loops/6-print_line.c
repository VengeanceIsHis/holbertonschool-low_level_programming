#include "main.h"
/**
 *print_line - prints underscore as many times as needed and then the next line
 *@n: The number of underscores to draw
*Return: no return
 */
void print_line(int n)
{
int x;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (x = 0; x < n; x++)
{
_putchar(95);
}
_putchar('\n');
}
}
