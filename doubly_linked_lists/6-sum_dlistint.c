#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *sum_dlistint - gathers the sum of all data in list
 *@head: pointer to the first ndoe in a list
 *Return: the sum of all node data
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
