#include "lists.h"
/**
 *sum_listint - returns sum of all integers in list
 *@head: input first node
 *Return: sum or 0 if error
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	int count;
	if (head == NULL)
		return (0);
	for (count = 0; head != NULL; count++)
	{
		sum += head->n;
	head = head->next;
	}
	return (sum);
}
