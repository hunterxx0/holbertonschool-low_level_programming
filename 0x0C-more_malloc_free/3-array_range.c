#include <stdio.h>
#include <stdlib.h>
/**
* _calloc? (- create array)?
*
* @min: input int
* @max: input int
* Return: z
*/
int *array_range(int min, int max)
{
	int *z;
	int x = 0, i;

	if (min > max)
		return (NULL);
	z = malloc(sizeof(int) * (max - min + 1));
	if (z == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		z[x] = i;
		x++;
	}
	return (z);
}
