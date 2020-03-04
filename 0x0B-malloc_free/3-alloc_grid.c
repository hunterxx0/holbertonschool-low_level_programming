#include <stdio.h>
#include <stdlib.h>
/**
* alloc_grid? (- concat)?
*
* @w: input int size
* @h: input int size
* Return: z
*/
int **alloc_grid(int w, int h)
{
	int **z;
	int i, j;


	if (w <= 0 || h <= 0)
		return (NULL);
	z = (int**)malloc(sizeof(int) * h);
		if (z == NULL)
			return (NULL);
		for (i = 0; i < h; i++)
		{
			z[i] = malloc(sizeof(int) * w);
			if (z[i] == NULL)
			{
				free(z[i]);
				free(z);
				return (NULL);
			}
			for (j = 0; j < h; j++)
			{
				z[i][j] = 0;
			}
		}
		return (z);
}
