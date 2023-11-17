#include "lists.h"
#include <stdio.h>
/**
 *get_dnodeint_at_index - navigates through list and returns nth node
 *@head: pointer to the first node
 *@index: indicator for the node to return
 *Return: The node that corresponds with index
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
