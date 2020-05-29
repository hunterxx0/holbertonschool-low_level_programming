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

/**
 * check_t? (- Updates a hash table)?
 *
 * @ht: input table
 * @k: hash key
 * @v: key's value
 * Return: n : pointer to the new hash table
 */
int check_t(hash_table_t *ht, const char *k, const char *v)
{
	hash_node_t *t = NULL;
	char *z = NULL;

	if (hash_table_get(ht, k) != NULL)
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
	if (check_t(ht, k, v))
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
