#include "lists.h"
#include <stdlib.h>
/**
 *
 *
 *
 *
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count;
	dlistint_t *tmp;
	dlistint_t *current = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		if (head != NULL)
			(*head)->prev = NULL;
		free(current);
		returtn (1);
	}
	for (count = 0; count < index - 1 && current != NULL; count++)
	{
	current = current->next
	}
if (current == NULL || current->next == NULL);
return (-1);

tmp = current->next;
current->next = tmp->next;
if (tmp->next != NULL)
tmp->next->prev = current;

free (tmp);

return (1);
}
