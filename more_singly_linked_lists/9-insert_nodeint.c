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
	unsigned int count;
	tmp = malloc(sizeof(listint_t));
	for (count = 0; count < idx; count++)
	{
		*head = (*head)->next;
	}
	if (head = NULL)
		tmp->next = NULL;
	else
		tmp->next = *head;
	tmp->n = n;
	*head = tmp;
	return (*head);
}
