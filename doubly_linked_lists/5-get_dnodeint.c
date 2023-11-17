#include "lists.h"
#include <stdio.h>
/**
 *
 *
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int count = 0;
dlistint_t *tmp;

if (head == NULL)
		return (NULL);
tmp = head;
while (tmp)
{
	if (index == count)
		return (tmp);
	count++;
	tmp = tmp->next;
}
return (NULL);
}
