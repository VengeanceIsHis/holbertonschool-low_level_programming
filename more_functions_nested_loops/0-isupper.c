#include "main.h"
/**
 * _isupper - checks for upper case letters
 *@c: ASCII number to check for upper case letters
 *Return: 1 for upper case letters 0 for everything else
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
return (0);
}
