#include "lists.h"
#include <stdlib.h>
/**
 *
 *
 *
 *
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp;
	listint_t *push;
	unsigned int count;
	if (head == NULL)
		*tmp->next = NULL;
	if (idx != 0)
	{
		tmp = *head;
		for (count = 0; count < idx - 1 && tmp != NULL; count++)
		{
			tmp = tmp->next;
		}
	}
		push = malloc(sizeof(listint_t));
		if (push == NULL)
			return (NULL);
		if (idx == 0)
		{
		push->n = n;
			push->next = *head;
			*head = push;
			return (push);
	}
	push->next = tmp->next;
	tmp->next = push;
	return (push);
}
