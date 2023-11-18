#include "lists.h"
#include <stdlib.h>
/**
 *delete_dnodeint_at_index - deletes a node at the nth place
 *@head: pointer to the first node in a given list
 *@index: indicator for the node to be deleted
 *Return: 1 for completed function and -1 for error
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
		return (1);
	}
	for (count = 0; count < index - 1 && current != NULL; count++)
	{
	current = current->next;
	}
if (current == NULL || current->next == NULL)
return (-1);

tmp = current->next;
current->next = tmp->next;
if (tmp->next != NULL)
tmp->next->prev = current;

free(tmp);

return (1);
}
