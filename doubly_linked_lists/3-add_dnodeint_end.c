#include "lists.h"
#include <stdlib.h>
/**
 *
 *
 *
 *
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	int count;
	dlistint_t *new;
	dlistint_t *tmp;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	tmp = *head;
	if (tmp != NULL)
	{
	while (tmp->prev != NULL)
		tmp = tmp->prev;
	}
	for (count = 0; new != NULL; count++)
	{
		new = new->next;
	}
	new->n = n;
	while (tmp != new)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
	new->prev = tmp;
	*head = new;
	return (new);
}
