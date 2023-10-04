#include "main.h"
/**
 *_strncat - prints out 2 strings while on the second string prints out a certain amount.
 *@dest: 1st input value
 *@src: 2nd input value
 *@n: value that shows the amount of elements are printed
 *Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
int str1;
int str2;
str1 = 0;
while (dest[str1] != '\0')
{
str1++;
}
str2 = 0;
while (str2 < n && src[str2] != '\0')
{
dest[str1] = src[str2];
str1++;
str2++;
}
dest[str1] = '\0';
return (dest);
}
