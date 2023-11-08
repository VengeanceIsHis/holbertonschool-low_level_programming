#include "lists.h"
#include <stdio.h>
/**
 *list_len - function that lists the elements passed to the function
 *@h: input head node
 *Return: number of elements in the list
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
