#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 *print_list - function that prints the elements of list_t nodes
 *@h: pointer to each node and its data
 *Return: Nodes added
 */
size_t print_list(const list_t *h)
{
size_t nodes = 0;
while (h)
{
if (h->str != NULL)
{
printf("[%d] %s\n", h->len, h->str);
}
else
{
printf("[0] (nil)\n");
}
nodes++;
h = h->next;
}
return (nodes);
}
