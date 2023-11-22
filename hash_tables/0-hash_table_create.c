#include "hash_tables.h"
#include <stddef.h>
/**
 *
 *
 *
 *
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t hash;
	
	if (size == 0)
		return (NULL);
	hash = calloc(sizeof(hash_table_t *));
	if (hash == NULL)
		return (NULL);
	hash->size = size;
	hash->array = calloc(size, sizeof(hash_node_t *));
	if (hash->array == NULL)
	{
		free(hash);
		return (NULL);
	}
	return (hash);
}
