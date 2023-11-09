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
	list_t push;
	list_t current_node;
	size_t n;
	push = (list_t *)malloc(sizeof(list_t));
	if (push == NULL)
		return (NULL);
	push->str = strdup(str);
	for (n = 0; str[n]; n++)
		;
	push->len = n;
	push->next = NULL;
	current_node = *head;
	if (current_node == NULL)
	{
		*head = push;
	else 
	{
		while (current_node->next != NULL)
		{
			current_node = current_node->next;
			current_node->next = push;
		}
	}
	return (push);
}
