#include "holberton.h"
#include <stdio.h>
/**
 * flip_bits? (- flips)?
 *
 * @n: input number
 * @m: input number
 * Return: f
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = (n ^ m), f = 0;

	while (x > 0)
	{
		if (x & 1)
			f++;
		x >>= 1;
	}
	return (f);
}
