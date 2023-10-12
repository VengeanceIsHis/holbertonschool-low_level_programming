#include "main.h"
/**
 *
 *
 *
 *
 */
int _pow_recursion(int x, int y)
{
  if (y == 0)
    return (-1);
  return (x = x ** y);
_pow_recursion(x, y);
}
