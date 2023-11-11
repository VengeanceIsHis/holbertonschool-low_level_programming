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
	push = malloc(sizeof(listint_t));
	if (head == NULL)
		return (NULL);
	if (push == NULL)
		return (NULL);
	if (*head == NULL)
		push->next = NULL;
	else 
		push->next = *head;
	push->n = n;
	*head = new_node;
	return (0);
}
