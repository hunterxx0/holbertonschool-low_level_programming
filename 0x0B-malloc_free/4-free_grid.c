#include <stdio.h>
#include <stdlib.h>
/**
* free_grid? (- concat)?
*
* @g: input int size
* @h: input int size
* Return: z
*/
void free_grid(int **g, int h)
{
	int i;

	for (i = 0; i < h; i++)
	{
		free(g[i]);
	}
	free(g);
}
