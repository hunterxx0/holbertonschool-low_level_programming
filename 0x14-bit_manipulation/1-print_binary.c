#include "holberton.h"
#include <stdio.h>
/**
 * print_binary? (- unsg int to binary)?
 *
 * @n: input number
 * Return: x
 */
void print_binary(unsigned long int n)
{
	unsigned long int c = 4611686018427387904, x = 0;

	while (c > 0)
	{
		if (((n & c) == 0) && ((x != 0) || (c >> 1 == 0)))
			_putchar('0');
		if ((n & c) != 0)
		{
			_putchar('1');
			x++;
		}
		c >>= 1;
	}
}
