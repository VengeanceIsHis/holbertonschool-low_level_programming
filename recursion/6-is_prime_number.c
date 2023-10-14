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
    Return (0);
  if (n == i)
    Return (1);
  if (n % i == 0)
    Return (0);
  i++;
  is_prime_number(n);
}
