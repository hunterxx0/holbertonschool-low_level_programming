#include "hash_tables.h"
/**
 * hash_table_print? (- Prints a hash table)?
 *
 * @ht: input table
 * Return:
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x = 0, start = 0;
	hash_node_t *t = NULL;

	if (ht)
	{
		printf("{");
		while (x < ht->size)
		{
			if (ht->array[x])
			{
				if (start != 0)
					printf(", ");
				t = ht->array[x];
				while (t)
				{
					printf("'%s': '%s'", t->key, t->value);
					start = 1;
					if (t->next)
						printf(", ");
					t = t->next;
				}
			}
			x++;
		}
		printf("}\n");
	}
}
