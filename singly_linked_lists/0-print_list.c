#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 *
 *
 *
 */
size_t print_list(const list_t *h)
{
  char *str = h;
  unsigned int len;
  if (str == NULL)
    printf("[0] (nil)");
  else
    len = strlen(str);
  return (str);
}
