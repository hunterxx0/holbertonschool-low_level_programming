#include "holberton.h"
#include <stdio.h>
/**
 * clear_bit? (- bit at idx)?
 *
 * @n: input number
 * @i: index
 * Return: x
 */
int clear_bit(unsigned long int *n, unsigned int i)
{
	unsigned long int k;

	if (i > 65 || !n)
		return (-1);
	k = 1 << i;
	*n &= ~k;
	return (1);
}
