#include "lists.h"
#include <stdlib.h>
/**
 *insert_nodeint_at_index - inserts a node to the nth place
 *@head: input head node
 *@idx: input length of list
 *@n: input to where to place new node
 *Return: address of node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *tmp;
listint_t *push;
unsigned int count;
if (head == NULL)
return (NULL);
if (idx != 0)
{
tmp = *head;
for (count = 0; count < idx - 1 && tmp != NULL; count++)
{
tmp = tmp->next;
}
if (tmp == NULL)
return (NULL);
}
push = malloc(sizeof(listint_t));
if (push == NULL)
return (NULL);
push->n = n;
if (idx == 0)
{
push->next = *head;
*head = push;
return (push);
}
push->next = tmp->next;
tmp->next = push;
return (push);
}
