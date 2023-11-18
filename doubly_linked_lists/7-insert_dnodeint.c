#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count;
	int i;
	dlistint_t *current;
	dlistint_t *tmp;
	dlistint_t *new;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
tmp = *h;
if (tmp != NULL)
	for (count = 0; count < idx; count++)
	{
		tmp = tmp->next;
}
new = tmp;
new->prev = tmp;
new->next = current;
for (i = 0; current != NULL; i++)
{
	current = current->next
}
else 
{
*h = new;
}
return (new);
}
