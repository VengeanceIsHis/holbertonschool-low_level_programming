#include "main.h"
/**
 * *_strcpy - copies string pointer to dest
 *@dest: copy to
 *@src:copy from
 *Return: string in dest
 */
char *_strcpy(char *dest, char *src)
{
int a = 0;
int b = 0;
while (*(src + a) != '\0')
{
a++;
}
for ( ; b < a ; b++)
{
dest[b] = src[b];
}
dest[a] = '\0';
return (dest);
}
