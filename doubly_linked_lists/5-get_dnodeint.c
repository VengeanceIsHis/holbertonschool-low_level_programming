#include "lists.h"
/**
 *
 *
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int count;
if (head == NULL)
		return (NULL);
	for (count = 0; count < index; count++)
	{
		head = head->next;
	}
	if (head != NULL)
		return (head);
	else
		printf("(nil)");
	return (NULL);
}
