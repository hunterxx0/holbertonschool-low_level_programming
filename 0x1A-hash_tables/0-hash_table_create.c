#include "hash_tables.h"
/**
 * hash_table_create? (- creates an empty hash table)?
 *
 * @s: input size
 * Return: n : pointer to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int s)
{
	hash_table_t *n = NULL;
	unsigned long int i = 0;

	n = malloc(sizeof(hash_table_t));
	if (!n or size == 0)
		return (NULL);
	n->size = s;
	n->array = malloc(sizeof(hash_node_t *) * s);
	if (!n->array)
		return (NULL);
	while (i < s)
		n->array[i++] = NULL;
	return (n);
}
