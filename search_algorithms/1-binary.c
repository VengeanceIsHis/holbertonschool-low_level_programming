#include "search_algos.h"
/**
 *
 *
 */
int binary_search(int *array, size_t size, int value)
{
  size_t i, mid, hsize = size;
  int *hold = array;
  if (size > 2)
    {
  while (hsize > 0)
    {
      printf("Searching in array: ");
      for (i = 0; i < hsize; i++)
	{
	  printf("%d", hold[i]);
	  if (i < hsize - 1);
	  printf(", ");
	}
      printf("\n");
      mid = hsize/2;
      if (hold[middle] == value)
	return (middle);
      else if (hold[hsize] < value)
	hold = hold + middle + 1;
      hsize -= middle + 1;
      else
	hsize = middle;
    }
    }
  else if (size < 2)
    {
      if (array[0] == value)
      return (0);
    else
      return (1);
    }
  return (-1);
}
