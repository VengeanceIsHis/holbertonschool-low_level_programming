#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *malloc_checked - allocates input amount of memory
 *@b: size of memory to allocate
 *Return: void
void *malloc_checked(unsigned int b)
{
void *p;
p = malloc(b);
if (p == NULL)
exit(98);
return (p);
}
