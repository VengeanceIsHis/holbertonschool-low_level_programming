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
      printf("Value checked array[%d] = [%d]");
      if (strcmp(array[i], value) == 0)
	{
	  result = 1;
	  printf("Found %d at index: %d");
	  break;
	}
      else
	continue;
    }
  if (result == 1)
	return (value);
}
