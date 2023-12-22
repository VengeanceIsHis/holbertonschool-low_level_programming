#include "search_algos.h"
#include <math.h>
/**
 *
 *
 */
int binary_search(int *array, size_t size, int value)
{
  size_t i, mid, hsize = size;
  int *hold = array;
  int result = -1, term, exponent, power;
  while (hsize > 0)
    {
      printf("Searching in array: ");
      for (i = 0; i < hsize; i++)
	{
	  printf("%d", hold[i]);
	  if (i < hsize - 1)
	  printf(", ");
	}
      printf("\n");
      exponent = 0;
      power = 1;
      while (power < size/hsize)
	{
	  power *= 2;
	  exponent++;
	}
      term = mid * power
      if (hold[mid] == value)
	{
	  result = mid + term;
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
