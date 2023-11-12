#include "lists.h"
#include <stdlib.h>
/**
 *get_nodeint_at_index - prints the data of the nth node
 *@head: input head node
 *@index: input to determine which node to return
 *Return: the found node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count;
if (head == NULL)
return (NULL);
for (count = 0; count < index; count++)
{
if (head == NULL)
return (NULL);
head = head->next;
}
return (head);	
}
