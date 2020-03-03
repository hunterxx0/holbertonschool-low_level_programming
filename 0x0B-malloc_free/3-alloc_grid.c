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
	int **z, *p;
	int i, j, l;

	if (w <= 0 || h <= 0)
		return (0);
	l = sizeof(int *) * h + sizeof(int) * w * h;
	z = (int **)malloc(l);
	p = (int *)(z + h);
	for (i = 0; i < h; i++)
		z[i] = (p + w * i);
	for (i = 0; i < w; i++)
	{
		for (j = 0; j < h; j++)
		{
			*((z + i) + j) = 0;
		}
	}
	return (z);
}
