#include "lists.h"
#include <stdlib.h>
/**
 *free_list - function that frees a node and its data
 *@head: the node to be freed
 *Return: void
 */
void free_list(list_t *head)
{
list_t *tmp;
while (head != NULL)
{
tmp = head;
head = head->next;
free(tmp->str);
free(tmp);
}
}
