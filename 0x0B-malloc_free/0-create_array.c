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

	z = malloc(sizeof(char) * s);
	if (s <= 0 || z == NULL)
		return (NULL);
	for (i = 0; i < s; i++)
	{
		z[i] = c;
	}
	return (z);
}
