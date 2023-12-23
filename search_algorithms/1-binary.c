#include "search_algos.h"
#include <math.h>
/**
 *
 *
 */
int binary_search(int *array, size_t size, int value)
{
  size_t i, mid, hsize = size, power, exponent, term;
  int *hold = array;
  int result = -1, ans = 0;
  while (result < 0)
    {
      printf("Searching in array: ");
	  for (i = 0; i < hsize; i++)
	{
	  printf("%d", hold[i]);
	  if (i < hsize - 1)
	  printf(", ");
	}
      printf("\n");
      mid = hsize/2;
      exponent = 0;
      power = 1;
      while (power < size/hsize)
	{
	  power *= 2;
	  exponent++;
	}
      term = mid * power;
      if (mid == 1)
	{
	  result = 1;
	  ans = mid + term;
	  break;
	}
      else if (hold[mid] < value)
	{
	  hold = hold + mid;
      hsize -= mid;
	}
      else
	hsize = mid;
	}
  return ans;
}
