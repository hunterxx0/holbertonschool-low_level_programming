#include "hash_tables.h"
/**
 * hash_table_get? (- retrieves a value associated with a key)?
 *
 * @ht: input table
 * @k: hash key
 * Return: n : pointer to the new hash table
 */
char *hash_table_get(const hash_table_t *ht, const char *k)
{
	unsigned long int x = 0;
	hash_node_t *t = NULL;

	if (ht)
	{
		while (x < ht->size)
		{
			if (ht->array[x])
			{
				if (!strcmp(ht->array[x]->key, k))
					return (ht->array[x]->value);
				if (ht->array[x]->next)
				{
					t = ht->array[x]->next;
					while (t)
					{
					if (!strcmp(t->key, k))
						return (t->value);
					t = t->next;
					}
				}
			}
			x++;
		}
	}
	return (NULL);
}
