#include "holberton.h"
#include <stdio.h>
/**
 * rev_str(:)? (- rev string)?
 *
 * @s: input string
 * Return: 0 or 1
 */
void rev_str(char *s)
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
	for (i = 0; l >= 0; i++, l--)
	{
		if (a[l] != '0' && a[l] != '1')
			return (0);
		if (a[l] == '1')
			x += z[i];
	}
	return (x);
}
/**
 * clear_bit? (- bit at idx)?
 *
 * @n: input number
 * @i: index
 * Return: x
 */
int clear_bit(unsigned long int *n, unsigned int i)
{
	unsigned long int z, j = 0, l = 0, c = 4611686018427387904, x = 0;
	char h[80];

	if (!n)
		return (-1);
	c <<= 1;
	while (j < 80)
	{
		h[j] = '0';
		j++;
	}
	z = *n;
	j = 0;
	while (c > 0)
	{
		if (((z & c) == 0) && ((x != 0) || (c >> 1 == 0)))
		{
			h[j] = '0';
			j++;
		}
		if ((z & c) != 0)
		{
			h[j] = '1';
			j++;
			x++;
		}
		c >>= 1;
	}
	h[j] = '\0';
	rev_str(h);
	while (h[l])
		l++;
	l--;
	if (i > l)
		return (-1);
	if (h[i] != '0')
		h[i] = '0';
	rev_str(h);
	*n = binary_to_uint(h);
	return (1);
}
