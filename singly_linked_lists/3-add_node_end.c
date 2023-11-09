#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t push;
	push = malloc(sizeof(list_t));
	push->len = length;
	push->str = strdup(str);
	push->next = NULL;
	if (*head == NULL)
		*head = push;
	else 
	{
		struct node *lastnode = *head;
		while (lastnode->next != NULL)
		{
			lastnode = lastnode->next;
			lastnode->next = push;
		}
	}
	return (push);
}
