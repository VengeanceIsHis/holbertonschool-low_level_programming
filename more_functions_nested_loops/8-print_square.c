#include "main.h"
/**
 *print_square - prints square based on the size that you give
 *Return: No return
 *@size: input to determine if there is a square and the size of the square.
 */
void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{	
int i, j;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
