#include "search_algos.h"
/**
 *
 *
 */
int binary_search(int *array, size_t size, int value)
{
  size_t i, j = 0, mid, hsize = size;
  int *hold = array;
  int result = -1;
  while (hsize > 0)
    {
      j++;
      printf("Searching in array: ");
      for (i = 0; i < hsize; i++)
	{
	  printf("%d", hold[i]);
	  if (i < hsize - 1)
	  printf(", ");
	}
      printf("\n");
      mid = hsize/2;
      if (hold[mid] == value)
	{
	  result = mid + hsize^j;
	  break;
	}
      else if (hold[mid] < value)
	{
	  hold = hold + mid + 1;
      hsize -= mid + 1;
	}
      else
	hsize = mid;
    }
  return result;
}
