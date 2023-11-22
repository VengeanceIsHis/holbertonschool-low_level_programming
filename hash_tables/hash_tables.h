#ifndef main_h
#define main_h
/**
 *struct hash_node_s - Node of a hash table
 *@key: The key, string
 *@value: The value corresponding to a key
 *@next: A pointer to the next node
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;
/**
 *struct hash_table_s - Hash table data structure
 *@size: The size of the array
 *@array: an array of size @size
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;
hash_table_t *hash_table_create(unsigned long int size);
#endif
