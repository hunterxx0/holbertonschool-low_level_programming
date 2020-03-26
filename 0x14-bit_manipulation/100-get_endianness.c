#include "holberton.h"
#include <stdio.h>
/**
 * get_endianness? (- endianness)?
 *
 * Return: 1 or 0
 */
int get_endianness(void)
{
	unsigned long int x = 1;
	char *z = (char *)&x;
	char r = *z + 48;
	int h = 5;

	if (r == '1')
		h = 1;
	else if (r == '0')
		h = 0;
	return (h);
}
