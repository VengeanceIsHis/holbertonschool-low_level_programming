#include "lists.h"
#include <stdlib.h>
/**
 *
 *
 *
 *
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;
	while (head != NULL)
		tmp = head;
	head = head->next;
	free(tmp->n);
	free(tmp);
}
}
