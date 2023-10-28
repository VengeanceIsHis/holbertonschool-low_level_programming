#include <stdlib.h>
#include "dog.h"
/**
 *free_dog - function that frees the memory space of dog
 *@d: input value to be freed
 *Return: void
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->owner);
free(d->name);
free(d);
}
}
