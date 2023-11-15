#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 *print_dlistint - prints elements of all nodes
 *@h: pointer to a node in list
 *Return: Number of nodes in list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (nodes);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
	printf("%d\n", h->n);
nodes++;
h = h->next;
	}
		return (nodes);
}
