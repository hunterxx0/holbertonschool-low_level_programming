#include <stdio.h>
#include <stdlib.h>
/**
* _realloc? (- create array)?
*
* @p: input pointer
* @o: input int
* @n: input int
* Return: p
*/
void *_realloc(void *p, unsigned int o, unsigned int n)
{
	char *z;
	unsigned int i;

	if (n < 1)
	{
		free(p);
		return (NULL);
	}
	else if (n > o)
	{
		z = malloc(n);
		if (z == NULL)
			return (NULL);
		free(p);
		return (z);
	}
	else if (n < o)
	{
		z = malloc(n);
		if (z == NULL)
			return (NULL);
		for (i = 0; i < o; i++)
			z[i] = ((char *)p)[i];
		free(p);
		return (z);
	}
	else if (p == NULL)
	{
		p = malloc(n);
		if (p == NULL)
			return (NULL);
	}
	return (p);
}
