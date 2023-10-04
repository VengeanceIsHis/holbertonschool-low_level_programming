#include "main.h"
/**
 *_strcat - concatenates two strings
 *@dest: first input value
 *@src: second input value
 *Return: void
*/
char *_strcat(char *dest, char *src)
{
int str1;
int str2;

str1 = 0;
while (dest[str1] != '\0')
{
str1++;
}
str2 = 0;
while (src[str2] != '\0')
{
dest[str1] = src[str2];
str1++;
str2++;
}
dest[str1] = '\0';
return (dest);
}
