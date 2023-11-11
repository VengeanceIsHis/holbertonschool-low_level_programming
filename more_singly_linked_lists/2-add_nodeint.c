#include "lists.h"
#include <stdlib.h>
/**
 * 
 *
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *push;
	listint_t length;
	push = malloc(sizeof(listint_t));
	if (push == NULL)
		return (NULL);
	push->n = length;
	push->next = *head;
	*head = push;
	return (length);
}
