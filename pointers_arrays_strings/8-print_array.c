#include "main.h"
#include <stdio.h>
/**
 *print_array- prints n elements of an array
 *@a: array name
 *@n: is the number of elements to be printed
 *Return: n number of elements of an array
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < (n - 1); i++)
{
printf("%d, ", a[i]);
}
if (i == (n - 1))
{
printf("%d", a[n - 1]);
}
printf("\n");
}