#include "hash_tables.h"

/**
 * check? (- Updates a hash table)?
 *
 * @ht: input table
 * @k: hash key
 * @v: key's value
 * Return: n : pointer to the new hash table
 */
int check(hash_table_t *ht, const char *k, const char *v)
{
        hash_node_t *t = NULL;
        char *z = NULL;

        if (hash_table_get(ht, k))
        {
                t = ht->array[key_index((const unsigned char *)k, ht->size)];
                if (!strcmp(k, t->key))
                {
                        z = t->value;
                        free(z);
                        t->value = strdup(v);
                        return (1);
                }
                else
                {
                        while (t)
                        {
                                if (!strcmp(k, t->key))
                                {
                                        z = t->value;
                                        free(z);
                                        t->value = strdup(v);
                                        return (1);
                                }
                                t = t->next;
                        }
                }
        }

        return (0);
}

/**
 * hash_table_set? (- Updates a hash table)?
 *
 * @ht: input table
 * @k: hash key
 * @v: key's value
 * Return: n : pointer to the new hash table
 */
int hash_table_set(hash_table_t *ht, const char *k, const char *v)
{
	hash_node_t *n = NULL;
	unsigned long int x = 0;

	if (!ht || !k)
		return (0);
	if (check(ht, k, v))
		return (1);
	n = malloc(sizeof(hash_node_t));
	if (!n)
		return (0);
	n->key = strdup(k);
	n->value = strdup(v);
	n->next = NULL;
	x = key_index((const unsigned char *)k, ht->size);
	if (!ht->array[x])
		ht->array[x] = n;
	else
	{
	n->next = ht->array[x];
	ht->array[x] = n;
	}

	return (1);
}
