#ifndef main_h
#define main_h
#include <stddef.h>
/**
 *
 *
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
size_t print_listint(const listint_t *h);
#endif
