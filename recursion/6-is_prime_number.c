#include "main.h"
int prime(int n, int i);
/**
 *is_prime_number - states input as prime number or not
 *@n: input value
 *Return: 1 if n is prime, 0 if not
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (prime(n, n - 1));
}
/**
 *prime - checks input if it is prime
 *@n: input 
 *@i: input to iterate
 *Return: 1 if n is prime, 0 if not
 */
int prime(int n, int i)
{
if (i == 1)
return (1);
if n % i == 0 && i > 0)
return (0);
return (prime(n, i - 1));
}
