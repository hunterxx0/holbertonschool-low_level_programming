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
 * get_bit? (- bit at idx)?
 *
 * @n: input number
 * @i: index
 * Return: x
 */
int get_bit(unsigned long int n, unsigned int i)
{
	unsigned long int c = 4611686018427387904, x = 0, j = 0, l = 0;
	char z[100];

	c <<= 1;
	while (j < 100)
	{
		z[j] = '0';
		j++;
	}
	j = 0;
	while (c > 0)
	{
		if (((n & c) == 0) && ((x != 0) || (c >> 1 == 0)))
		{
			j++;
			z[j] = '0';
		}
		if ((n & c) != 0)
		{
			z[j] = '1';
			j++;
			x++;
		}
		c >>= 1;
	}
	z[j] = '\0';
	rev_str(z);
	while (z[l])
		l++;
	l--;
	if (i > l || i > 32)
		return (-1);
	return (z[i] - '0');

}
