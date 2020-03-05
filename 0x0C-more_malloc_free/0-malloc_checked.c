#include <stdio.h>
#include <stdlib.h>
/**
* ? (- create array)?
*
* @s: input int malloc
* Return: z
*/
void *malloc_checked(unsigned int b)
{
	char *z;

	z = malloc(b);
	if (z == NULL)
	{
		exit (98);
	}
	return (z);
}
