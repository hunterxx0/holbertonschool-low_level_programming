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

	if (s1 == NULL)
	{
		s1 = malloc(sizeof(char));
		*s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = malloc(sizeof(char));
		*s2 = '\0';
	}
	for (j = 0; s1[j] != '\0'; j++)
	;
	for (k = 0; s2[k] != '\0'; k++)
	;
	if (j == 0 && k == 0)
		return (NULL);
	z = malloc(sizeof(char) * (k + j - 1));
	if (z == NULL)
		return (NULL);
	for (i = 0; i < k + j ; i++)
	{
		if (i <= j - 1)
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
