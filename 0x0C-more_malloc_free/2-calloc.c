#include <stdio.h>
#include <stdlib.h>
/**
* _calloc? (- create array)?
*
* @n: input int malloc
* @s: input int malloc
* Return: z
*/
void *_calloc(unsigned int n, unsigned int s)
{
	char *z;
	unsigned int i;

	if (n == 0 || s == 0)
		return (NULL);
	z = malloc(n * s);
	if (z == NULL)
		return (NULL);
	for (i = 0; i < n * s; i++)
		z[i] = 0;
	return (z);
}
