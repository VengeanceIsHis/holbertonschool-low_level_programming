#include "main.h"
/**
 *_strlen - prints the length of string
 *@s: string
 *Return: length
 */
int _strlen(char *s)
{
int str = 0;
while (*s != '\0')
{
str++;
s++;
}
return (str);
}
