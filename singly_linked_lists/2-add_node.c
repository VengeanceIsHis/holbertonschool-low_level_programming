#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *add_node - function that adds nodes as the head
 *@head: input list
 *@str: string input
 *Return: Address of list or NULL if empty
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *push;
int length = 0;
push = malloc(sizeof(list_t));
if (push == NULL)
return (NULL);
while (str[length])
length++;
push->len = length;
push->str = strdup(str);
push->next = *head;
*head = push;
return (push);
}
