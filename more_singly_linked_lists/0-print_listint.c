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
	size_t count;
 if (h != NULL)
	 printf("%d", h->n);
 count += h->n;
 return (count);
}
