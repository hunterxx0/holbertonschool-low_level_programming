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
	int i, j, l;


	if (w <= 0 || h <= 0)
		return (NULL);
	z = (int**)malloc(sizeof(int *) * h);
		if (z == NULL)
		{
			free(z);
			return (NULL);
		}
		for (i = 0; i < h; i++)
		{
			z[i] = malloc(sizeof(int) * w);
			if (z[i] == NULL)
			{
				l = 0;
				while (l < i)
				{
					free(z[l]);
					l++;
				}
				free(z);
				return (NULL);
			}
			for (j = 0; j < w; j++)
			{
				z[i][j] = 0;
			}
		}
		return (z);
}
