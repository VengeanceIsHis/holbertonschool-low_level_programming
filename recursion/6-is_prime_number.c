#include "main.h"
/**
 *
 *
 *
 *
 */
int is_prime_number(int n)
{
  int i = 2;
  if (n == 0 || n == 1)
    return (0);
  if (n == i)
    return (1);
  if (n % i == 0)
    return (0);
  i++;
  is_prime_number(n);
}
