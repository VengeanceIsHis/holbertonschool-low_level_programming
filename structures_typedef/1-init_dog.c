#include <stdio.h>
#include "dog.h"
/**
 *init_dog - function that initialize a variable of type struct dog
 *@d: dog structure
 *@name: Name of the dog
 *@age: The age of the dog
 *@owner: The owner of the dog
 *Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
