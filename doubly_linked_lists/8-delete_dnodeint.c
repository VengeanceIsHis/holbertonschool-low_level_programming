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
	for (count = 0; count < index; count++)
	{
	if (*head != NULL)
	*head = (*head)->next;
	}
if (count != index)
return (-1);
else
	tmp = *head;
*head = (*head)->next;
free (tmp);
return (1);
}
