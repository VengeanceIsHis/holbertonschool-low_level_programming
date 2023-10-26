#include <stdio.h>
#include "dog.h"
/**
 *print_dog - function that prints all attributes of given dog
 *@d: a dog structure
 *Return: void
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: %s\n", (d->name) ? d->name : "(nil)" );
printf("Age: %s\n", (d->age) ? d->age : 0);
printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
}
}
