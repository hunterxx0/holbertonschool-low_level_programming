#include "hash_tables.h"
/**
 * key_index? (- Returns an index key)?
 *
 * @s: input size
 * @k: hash key
 * Return: n : pointer to the new hash table
 */
unsigned long int key_index(const unsigned char *k, unsigned long int s)
{
	unsigned long int x = 0;

	x = hash_djb2(k) % s;
	return (x);
}
