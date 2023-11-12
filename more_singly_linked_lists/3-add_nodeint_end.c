#include "lists.h"
#include <stdlib.h>
/**
 *add_nodeint_end - adds a node to the end of a list.
 *@head: input node to be added
 *@n: input value that goes into node
 *Return: address of the added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *push;
listint_t *new;
(void)new;
push = malloc(sizeof(listint_t));
if (push == NULL)
{
return (NULL);
}
push->n = n;
push->next = NULL;
new = *head;
if (*head == NULL)
{
*head = push;
}
else
{
while (new->next != NULL)
{
new = new->next;
}
new->next = push;
}
return (*head);
}
