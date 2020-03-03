#include <stdio.h>
#include <stdlib.h>
/**
* str_concat? (- concat)?
*
* @s1: input int array size
* @s2: input int array size
* Return: z
*/
char *str_concat(char *s1, char *s2)
{
	char *z;
	unsigned int i, k, j, x = 0;

	for (j = 0; s1[j] != '\0'; j++)
	;
	for (k = 0; s2[k] != '\0'; k++)
	;
	k--;
	j--;
z = malloc(sizeof(char) * (k + j + 1));
	if ((j == 0 && k == 0) || z == NULL)
		return (0);
	for (i = 0; i <= k + j + 1; i++)
	{
		if (i <= j)
			z[i] = s1[i];
		else
		{
			z[i] = s2[x];
			x++;
		}
	}
	z[i] = '\0';
	return (z);
}
