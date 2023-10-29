#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *int_index - function that searches for an integer
 *@array: array input
 *@size: size of given array
 *@cmp: pointer to function
 *Return: i or -1 if fail
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if (size > 0)
{
if (array != NULL && cmp != NULL)
{
while (i < size)
{
if (cmp(array[i]))
return (i);
i++;
}
}
}
return (-1);
}
