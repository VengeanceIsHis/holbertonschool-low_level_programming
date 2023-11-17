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
	dlistint_t *new;
	dlistint_t *tmp;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	tmp = *head;
	if (tmp != NULL)
	{
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = tmp;
	}
	else
	{
		*head = new;
	}
	new->prev = tmp;
	return (new);
}
