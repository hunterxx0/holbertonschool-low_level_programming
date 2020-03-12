#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - array iterator.
 *
 * @a: array
 * @s: size
 * @act: funct
 *
 */
void array_iterator(int *a, size_t s, void (*act)(int))
{
	unsigned int i;

	if (a == NULL || s == 0 || act == NULL)
		return;
	for (i = 0; i < s; i++)
	act(a[i]);
}
