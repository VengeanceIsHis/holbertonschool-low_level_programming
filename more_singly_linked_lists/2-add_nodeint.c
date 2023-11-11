#include "lists.h"
/**
 * 
 *
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	list_t *push
		int length = 0;
	push = malloc(sizeof(listint_t));
	if (push == NULL)
		return (NULL);
	push->n = length;
	push->next = *head;
	*head = push;
	return (length);
}
