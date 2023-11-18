#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *
 *
 *
 *
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int sum = 0;
	if (head == NULL)
		return (0);
	tmp = head;
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
