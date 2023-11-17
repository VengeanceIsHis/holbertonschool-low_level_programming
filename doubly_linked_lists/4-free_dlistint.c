#include "lists.h"
#include <stdlib.h>
/**
 *free_dlistint - frees a list
 *@head: pointer to the first node in a list
 *Return: void
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
