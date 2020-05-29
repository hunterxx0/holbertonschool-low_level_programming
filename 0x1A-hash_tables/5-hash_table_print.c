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
printf("'%s': '%s'", ht->array[x]->key, ht->array[x]->value);
start = 1;
if (ht->array[x]->next)
{
t = ht->array[x]->next;
while (t)
{
	if (start != 0)
		printf(", ");
printf("%s': '%s'", t->key, t->value);
t = t->next;
}
}
}
			x++;
		}
		printf("}\n");
	}
}
