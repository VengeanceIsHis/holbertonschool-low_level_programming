#ifndef main_h
#define main_h
#include <stddef.h>
/**
 *
 *
 *
 *
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;
size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlist_t *h);
#endif
