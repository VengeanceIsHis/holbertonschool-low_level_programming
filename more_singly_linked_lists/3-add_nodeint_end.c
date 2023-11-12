#include "lists.h"
#include <stdlib.h>
/**
 * 
 *
 *
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *push;
	push = malloc(sizeof(listint_t));
	if (head == NULL)
		return (NULL);
	push->next = NULL;
	push->n = n;
	*head = push;
	return (*head);
}
