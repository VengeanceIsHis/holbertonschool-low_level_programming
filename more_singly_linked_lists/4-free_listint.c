#include "lists.h"
#include <stdlib.h>
/**
 *free_listint - function that frees a node
 *@head: input node to free
 *Return: void
 */
void free_listint(listint_t *head)
{
listint_t *tmp;
while ((tmp = head) != NULL)
{
head = head->next;
free(tmp);
}
}
