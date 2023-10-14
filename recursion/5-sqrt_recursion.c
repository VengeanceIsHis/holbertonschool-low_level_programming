#include "main.h"
int _sqrt(int n, int i);
/**
*_sqrt_recursion - returns the square root of a number
*@n: input value
*Return: Result
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt(n, 0));
}
/**
 *_sqrt - recurses to find square root
 *@n: input value
 *@i: input value to iterate
 *Return: Result
 */
int _sqrt(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (_sqrt(n, i + 1));
}
