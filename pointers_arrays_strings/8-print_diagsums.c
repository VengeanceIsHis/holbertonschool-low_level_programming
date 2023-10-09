#include "main.h"
/**
 *print_diagsums - sum of two integers in a square
 *@a: input
 *@size: input
 *Return: 0
 */
void print_diagsums(int *a, int size)
{
int sum1, sum2, a;
sum1 = 0;
sum2 = 0;
for (a = 0; a < size; a++)
{
sum1 = sum1 + a[a * size + a];
}
for (a = size - 1; a >= 0; a--)
{
sum2 += a[y * size + (size - y -1)];
}
printf"%d, %d\n", sum1, sum2);
}
