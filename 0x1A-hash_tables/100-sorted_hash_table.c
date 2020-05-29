#include "hash_tables.h"

/**
 * shash_table_create? (- creates an empty hash table)?
 *
 * @s: input size
 * Return: n : pointer to the new hash table
 */
shash_table_t *shash_table_create(unsigned long int s)
{
	shash_table_t *n = NULL;
	unsigned long int i = 0;

	n = malloc(sizeof(shash_table_t));
	if (!n)
		return (NULL);

	n->size = s;
	n->shead = NULL;
	n->stail = NULL;
	n->array = malloc(sizeof(shash_node_t *) * s);
	if (!n->array)
		return (NULL);
	while (i < s)
		n->array[i++] = NULL;
	return (n);
}
/**
 * check? (- Updates a hash table)?
 *
 * @ht: input table
 * @k: hash key
 * @v: key's value
 * Return: n : pointer to the new hash table
 */
int check(shash_table_t *ht, const char *k, const char *v)
{
	shash_node_t *t = NULL;
	char *z = NULL;

	if (shash_table_get(ht, k))
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
 * shash_table_set? (- Updates a hash table)?
 *
 * @ht: input table
 * @k: hash key
 * @v: key's value
 * Return: n : pointer to the new hash table
 */
int shash_table_set(shash_table_t *ht, const char *k, const char *v)
{
	shash_node_t *n = NULL, *t = NULL;
	unsigned long int x = 0;

	if (check(ht, k, v))
		return (1);
	n = malloc(sizeof(shash_node_t));
	if (!n || !k)
		return (0);
	n->key = strdup(k);
	n->value = strdup(v);
	n->next = NULL;
	n->snext = NULL;
	n->sprev = NULL;
	x = key_index((const unsigned char *)k, ht->size);
	if (!ht->array[x])
		ht->array[x] = n;
	else
	{
	n->next = ht->array[x];
	ht->array[x] = n;
	}
	if (!ht->shead)
		ht->shead = n;
	else
	{
		t = ht->shead;
		while (t && (!n->next && !n->sprev))
		{
		if (strcmp(k, t->key) < 0)
			{
				n->sprev = t->sprev;
				n->snext = t;
				if (t->sprev)
					t->sprev->snext = n;
				t->sprev = n;

				if (ht->shead == t)
					ht->shead = n;
				return (1);
			}
			if (!t->snext)
			{
				t->snext = n;
				n->sprev = t;
				ht->stail = n;
				return (1);
			}
			t = t->snext;
		}
	}
	return (1);
}

/**
 * shash_table_get? (- retrieves a value associated with a key)?
 *
 * @ht: input table
 * @k: hash key
 * Return: n : pointer to the new hash table
 */
char *shash_table_get(const shash_table_t *ht, const char *k)
{
	unsigned long int x = 0;
	shash_node_t *t = NULL;

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
 * shash_table_print? (- Prints a hash table)?
 *
 * @ht: input table
 * Return:
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int start = 0;
	shash_node_t *t = NULL;

	printf("{");
	if (ht)
	{
		t = ht->shead;
		while (t)
		{
			if (start != 0)
				printf(", ");
			printf("'%s': '%s'", t->key, t->value);
			start = 1;
			t = t->snext;
		}
	}
	printf("}\n");
}

/**
 * shash_table_print_rev? (- Prints a hash table)?
 *
 * @ht: input table
 * Return:
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int start = 0;
	shash_node_t *t = NULL;

	printf("{");
	if (ht)
	{
		t = ht->stail;
		while (t)
		{
			if (start != 0)
				printf(", ");
			printf("'%s': '%s'", t->key, t->value);
			start = 1;
			t = t->sprev;
		}
	}
	printf("}\n");
}

/**
 * shash_table_delete? (- deletes a hash table)?
 *
 * @ht: input table
 * Return:
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int x = 0;
	shash_node_t *t = NULL, *z = NULL;

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
