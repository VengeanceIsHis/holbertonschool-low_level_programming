#include "lists.h"
#include <stddef.h>
/**
 *
 *
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t el = 0;

	if (h == NULL)
		return (el);
while (h->prev != NULL)
	h = h->prev;
while (h != NULL)
{
	if (h->n)
		el++;
	h = h->next;
}
	return (el);
	}
