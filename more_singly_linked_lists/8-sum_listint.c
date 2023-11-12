#include "lists.h"
/**
 *
 *
 *
 *
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	int count;
	if (head == NULL)
		return (NULL);
	for (count = 0; head != NULL; count++)
	{
		sum += head->n;
	head = head->next;
	}
	return (sum);
}
