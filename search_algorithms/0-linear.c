#include "search_algos.h"
/**
 *linear_search - function that searches an array linearly
 *@array: Pointer to the first element in the array
 *@size: size of the array
 *@value: integer to search for in the array
 *Return: iterator that corresponds with value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
	printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	if (array[i] == value)
		return (i);
	}
	return (-1);
}
