#include "lists.h"
#include <stdlib.h>
/**
 *
 *
 *
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int count;
	if (head == NULL)
		return (NULL);
	for (count = 0; count < index; count++)
	{
		if (head->next != NULL)
			tmp = (*head)->next;
		head = tmp;
	}
	return (head);
	
}
