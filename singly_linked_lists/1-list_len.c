#include "lists.h"
#include <stdio.h>
/**
 * 
 *
 */
size_t list_len(const list_t *h)
{
	size_t elements;
	while (h != NULL)
	{
	elements++;
	h = h->next;
	}
	return (elements);
}
