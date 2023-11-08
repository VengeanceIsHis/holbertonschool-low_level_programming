#include "lists.h"
#include <stdio.h>
/**
 * 
 *
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;
	while (h)
	{
	h = h->next;
	elements++;
	}
	return (elements);
}
