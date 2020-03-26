#include "holberton.h"
#include <stdio.h>
/**
 * binary_to_uint? (- binary to unsg int)?
 *
 * @a: input head
 * Return: x
 */
unsigned int binary_to_uint(const char *a)
{
	unsigned int x = 1, i;
	int l;
	int z[64];

	if (a == NULL)
		return (0);
	for (i = 0; i < 64; i++)
	{
		z[i] = x;
		x *= 2;
	}
	for (l = 0; a[l]; l++)
		;
	l--;
	x = 0;
	for (i = 0; l >=0; i++, l--)
	{
		if (a[l] != '0' && a[l] != '1')
			return (0);
		if (a[l] == '1')
			x += z[i];
	}
	return (x);
}
