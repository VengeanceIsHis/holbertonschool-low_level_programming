#include "main.h"
/**
 *_strchr - finds first time a given character is present
 *@s: input string
 *@c: character to find
 *Return: pointer to the first occurrence of a given character or null if not found
 */
char *_strchr(char *s, char c)
{
int i = 0;
for (; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
}
return (0);
}
