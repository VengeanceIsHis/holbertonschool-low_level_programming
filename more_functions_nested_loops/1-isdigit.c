#include "main.h"
/**
 * _isdigit - checks for numbers 0-9
 *@c:ASCII number to be checked for the numbers
 *Return: 1 for a digit 0 for everything else
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
