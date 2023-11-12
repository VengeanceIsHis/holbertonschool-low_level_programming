#include "lists.h"
#include <stdlib.h>
/**
 *
 *
 *
 *
 */
int pop_listint(listint_t **head)
{
	listint_t tmp;
	if (*head == NULL)
		return (0);
	tmp = head;
		head = head->next;
		free(tmp);
		return (head->n);
}
