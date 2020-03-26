#include "holberton.h"
#include <string.h>
/**
 * rev_string(:)? (- rev string)?
 *
 * @s: input string
 * Return:
 */
void rev_string(char *s)
{
	char k;
	int i = 0, j, l;
	while (s[i] != '\0')
	{
		i++;
	}
	l = i - 1;
	for (j = 0 ; j < (i / 2); j++)
	{
		k = s[l];
		s[l] = s[j];
		s[j] = k;
		l--;
	}
}
/**
 * binary_to_uint? (- binary to unsg int)?
 *
 * @b: input head
 * Return: x
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 1, i;
	int z[64];
	char *a = strdup(b);

	if (b == NULL)
		return (0);
	for(i = 0; i < 64; i++)
	{
		z[i] = x;
		x *= 2;
	}
	rev_string(a);
	x = 0;
	for(i = 0; a[i]; i++)
	{
		if (a[i] != '0' && a[i] != '1')
			return (0);
		if (a[i] == '1')
			x += z[i];
	}
	return (x);
}
