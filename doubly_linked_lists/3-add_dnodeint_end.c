#include "lists.h"
#include <stdlib.h>
/**
 *add_dnodeint_end - adds a node to the end of a list
 *@head: pointer to a node in a list
 *@n: data input for node
 *Return: address of inputted node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new;
dlistint_t *tmp;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = NULL;
tmp = *head;
if (tmp != NULL)
{
while (tmp->next != NULL)
tmp = tmp->next;
tmp->next = new;
}
else
{
*head = new;
}
new->prev = tmp;
return (new);
}
