#include "lists.h"
#include <stddef.h>
/**
 *
 *
 *
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes;
	dlistint_t tmp;
	dlistint_t current;
	if (h == NULL)
		return (NULL);
	else 
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
