#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 *
 *
 *
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes;
	struct dlistint_t tmp;
	struct dlistint_t current;
	if (h == NULL)
		return (0);
	else 
	{
		tmp = h;
		while (tmp != NULL)
		{
	current = tmp->next;
	printf("%d", tmp->n);
nodes++;
tmp = current;
		}
		return (nodes);
}
}
