#include "lists.h"
#include <stdlib.h>
/**
 *add_nodeint - adds a note to the beginning of a list
 *@head: pointer to the first node
 *@n: input data for the node
 *Return: Address of the new node
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
*head = push;
return (*head);
}
