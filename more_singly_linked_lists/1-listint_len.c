#include "lists.h"
/**
 *
 *
 */
size_t listint_len(const listint_t *h)
{
  size_t count;
  size_t i = 0;
  if (h == NULL)
{
  return (0);
 }
  for (count = 0; h != NULL; count++)
    {
      i += count
	h = h->next;
    }
  return (i);
}
