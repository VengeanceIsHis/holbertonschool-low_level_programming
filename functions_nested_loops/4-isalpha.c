#include "main.h"
/**
 *_isalpha checks for all letters lowercase and uppercase
 *@c: The character that needs to be checked
 *Return: 1 for a letter, 0 if it isn't
*/

int _isalpha(int c)
{
if (c >= 65 && c <= 122)
{
return (1);
}
return (0);
}
