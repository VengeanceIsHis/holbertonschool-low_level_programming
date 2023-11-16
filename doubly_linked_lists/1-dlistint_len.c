#include "lists.h"
#include <stddef.h>
/**
 *dlistint_len - returns the number of elements in a list
 *@h: pointer to a node
 *Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int el = 0;

	if (h == NULL)
		return (el);
	while (h->prev != NULL)
		h = h->prev;
		while (h != NULL)
{
	el++;
	h = h->next;
}
	return (el);
}
