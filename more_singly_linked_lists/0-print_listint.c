#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 *
 *
 *
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
 while (h != NULL)
 {
	 printf("%d", h->n);
 count += h->n;
 h = h->next;
 }
 return (count);
}
