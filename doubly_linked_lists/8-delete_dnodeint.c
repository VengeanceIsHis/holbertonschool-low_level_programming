#include "lists.h"
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
	for (count = -1; count < index; count++)
	{
	if (head != NULL)
	head = head->next;
	}
if (count != index - 1)
return (-1);
else
	tmp = head;
head = head->next;
free (tmp);
return (1);
}
