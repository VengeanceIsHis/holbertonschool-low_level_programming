#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *insert_dnodeint_at_index - adds a node to the nth spot
 *@h: pointer to a node in a list
 *@n: data of new node to be added
 *idx: indicator for which place to insert node
 *Return: the address of added node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count;
	dlistint_t *tmp;
	dlistint_t *new;

	new = NULL;
if (idx == 0)
	new = add_dnodeint(h, n);
else
{
	tmp = *h;
	count = 1;
	if (tmp != NULL)
		while (tmp->prev != NULL)
			tmp = tmp->prev;
	while (tmp != NULL)
	{
		if (count == idx)
		{
			if (tmp->next == NULL)
				new = add_dnodeint_end(h, n);
			else
			{
				new = malloc(sizeof(dlistint_t));
				if (new != NULL)
				{
					new->n = n;
					new->next = tmp->next;
					new->prev = tmp;
					tmp->next->prev = new;
					tmp->next = new;
				}
			}
			break;
		}
		tmp = tmp->next;
		count++;
	}
}
return (new);
}
