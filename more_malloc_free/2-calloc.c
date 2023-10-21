#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_calloc - 
 *
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
int a = 0, m = 0;
char *s;
if (nmemb == 0 || size == 0)
return (NULL);
m = nmemb * size;
s = malloc(m);
if (s == NULL)
return (NULL);
while (a < m)
{
s[a] = 0;
a++;
}
return (s);
}
