#include "lists.h"
#include <stdio.h>
/**
 * 
 *
 */
size_t list_len(const list_t *h)
{
	size_t elements;
	while (h)
	{
		if (h->str && h->len)
	{
		elements = elements + 2;
	}
	h = h->next;
	}
	return;
}
