#include "lists.h"
/**
 *
 *
 *
 */
dlistint_t *get_dnode_at_index(dlistint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);
	for (count = 0; count < index; count++)
	{
		head = head->next
	}
	return (head);
}