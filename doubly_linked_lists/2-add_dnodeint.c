#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 *add_dnodeint - adds a node at the beginning of a list
 *@head: pointer to a node in list
 *@n: the data to input for the node
 *Return: Address of the node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;
dlistint_t *tmp;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->prev = NULL;
tmp = *head;
if (tmp != NULL)
{
while (tmp->prev != NULL)
tmp = tmp->prev;
}
new->next = tmp;
if (tmp != NULL)
tmp->prev = new;
*head = new;
return (new);
}
