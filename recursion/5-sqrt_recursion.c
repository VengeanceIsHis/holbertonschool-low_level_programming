#include "main.h"
/**
*
*
*
*
*
*/
int _sqrt_recursion(int n)
{
  int i = 0;
  int j = n / 2;
  if (j != i)
    {
      i = j;
      j = (n / i + i) / 2;
    }
  return (j);
  _sqrt_recursion(n);
    }
