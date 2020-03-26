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
 * set_bit? (- bit at idx)?
 *
 * @n: input number
 * @i: index
 * Return: x
 */
int set_bit(unsigned long int *n, unsigned int i)
{
	unsigned long int k;

 	if (i > 65 || !n)
		return (-1);
	k = 1 << i;
	*n |= k;
	return (1);

}
