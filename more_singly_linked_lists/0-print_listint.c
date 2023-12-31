#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 *print_listint - function that prints the data in listint_t
 *@h: pointer to the first node to gather data
 *Return: The number of nodes printed
 */
size_t print_listint(const listint_t *h)
{
size_t count;
if (h == NULL)
{
return (0);
}
for (count = 0; h != NULL; count++)
{
printf("%d\n", h->n);
h = h->next;
}
return (count);
}
