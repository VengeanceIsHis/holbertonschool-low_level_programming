#include "main.h"
/**
 *_strpbrk - searches a string for any of a set of bytes
 *@s: input string
 *@accept: input to pull characters from
 *Return: s if pulled character, null if there is none
 */
char *_strpbrk(char *s, char *accept)
{
int k;
while (*s)
{
for (k = 0; accept[k]; k++)
{
if (*s == accept[k])
return (s);
}
s++;
}
return ('\0');
}
