#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - find int.
 *
 * @a: array
 * @s: size
 * @cmp: funct
 *
 * Return: -1 0 1
 */
int int_index(int *a, int s, int (*cmp)(int))
{
	int i;

	if (a == NULL || s <= 0)
		return (-1);
	for (i = 0; i < s; i++)
	{
		if (cmp(a[i]) == 1)
		{
			if (i == 0)
				return (1);
			else
				return (i);
		}
	}
	return (-1);
}
