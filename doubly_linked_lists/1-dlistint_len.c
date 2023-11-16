#include "lists.h"
#include <stddef.h>
/**
 *
 *
 *
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
