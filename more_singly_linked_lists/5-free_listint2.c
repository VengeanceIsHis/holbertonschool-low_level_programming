#include "lists.h"
#include <stdlib.h>
/**
 *
 *
 *
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	while ((tmp = head) != NULL)
	{
		head->next = NULL;
		head = head->next;
		free(tmp);
	}
}
