#include "hash_tables.h"
/**
 * hash_table_delete? (- deletes a hash table)?
 *
 * @ht: input table
 * Return:
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x = 0;
	hash_node_t *t = NULL, *z = NULL;

	if (ht)
	{
		while (x < ht->size)
		{
			if (ht->array[x])
			{
				free(ht->array[x]->key);
				free(ht->array[x]->value);
				if (ht->array[x]->next)
				{
					t = ht->array[x]->next;
					while (t)
					{
						z = t;
						t = t->next;
						free(z->key);
						free(z->value);
						free(z);
					}
				}
				free(ht->array[x]);
			}
			x++;
		}
		free(ht->array);
		free(ht);
	}
}
