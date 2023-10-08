#include "main.h"
/**
 *_memcpy - a function that copies memory location
 *@dest: memory from which is copied
 *@src: memory place to be copied
 *@n: number of bytes
 *Return: copied memory with given number of bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int a = 0;
int b = n;
for (; a < b; a++)
{
dest[a] = src[a];
n--;
}
return (dest);
}
