#include "main.h"
/**
 *_strcmp - compares two strings and prints the result unless equal
 *@s1: input value 1
 *@s2: input value 2
 *Return: the difference of two inputs.
 *
 */
int _strcmp(char *s1, char *s2)
{
int i;

i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
i++;
}
return (0);
}
