#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *
 *
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *push;
	list_t *current_node;
	push = malloc(sizeof(list_t));
	if (push == NULL)
		return (NULL);
	push->str = strdup(str);
	if (push->str == NULL)
	{
		free(push);
		return (NULL);
}
	push->len = strlen(push->str);
	push->next = NULL;
	if (*head == NULL)
	{
		*head = push;
	return (push);
	}
current_node = *head;
		while (current_node->next)
		{
			current_node = current_node->next;
		}
			current_node->next = push;
	return (push);
}
