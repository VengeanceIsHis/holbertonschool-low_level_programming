#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 *
 *
 *
 */
size_t print_list(const list_t *h)
{
  size_t nodes = 0;
  if (h != NULL)
    {
      printf("[%d] %s\n", h->len, h->str);
    }
  else
    {
      printf("[0] (nil)\n");
    }
  nodes++;
  h = h->next;
 return (nodes);
}
