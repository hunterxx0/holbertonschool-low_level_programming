#include <stdio.h>
#include <stdlib.h>
/**
* create_array? (- create array)?
*
* @s: input int array size
* @c: input char
* Return: z
*/
char *create_array(unsigned int s, char c)
{
	char *z;
	unsigned int i;

	if (s == 0)
		return (NULL);
	z = malloc(sizeof(char) * s);
	for (i = 0; i < s; i++)
	{
		z[i] = c;
	}
	return (z);
}
