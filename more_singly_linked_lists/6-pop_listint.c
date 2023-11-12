#include "lists.h"
#include <stdlib.h>
/**
 *pop_listint - function that deletes the head node
 *@head: input node to delete
 *Return: The data in node
 */
int pop_listint(listint_t **head)
{
int n;
listint_t *tmp;
	if (*head == NULL || head == NULL)
		return (0);
	n = (*head)->n;
	tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (n);
}
