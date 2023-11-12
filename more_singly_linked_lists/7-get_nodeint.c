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
	if (*head == NULL)
		return (NULL);
	tmp = (*head);
	for (count = 0; count < index; count++)
	{
*head = *head->next;
	}
	return (*head);
	
}
