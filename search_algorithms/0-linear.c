#include "search_algos.h"
/**
 *
 *
 */
int linear_search(int *array, size_t size, int value)
{
  size_t i;
  int result = 0;
  for (i = 0; i < size; i++)
    {
      printf("Value checked array[%lu] = [%d]", i, array[i]);
      if (array[i] == value)
	{
	  result = 1;
	  printf("Found %d at index: %lu", value, i);
	  break;
	}
      else
	continue;
    }
  if (result == 1)
	return (value);
  else
    return (-1);
}
