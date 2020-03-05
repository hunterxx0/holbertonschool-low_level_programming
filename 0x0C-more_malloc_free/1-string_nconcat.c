#include <stdio.h>
#include <stdlib.h>
/**
* str_concat? (- concat)?
*
* @s1: input int array size
* @s2: input int array size
* @n: intput n
* Return: z
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *z;
	unsigned int i, k, j, x = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (j = 0; s1[j] != '\0'; j++)
	;
	for (k = 0; s2[k] != '\0'; k++)
	;
	if (n < k)
	{
		k = n;
	z = malloc(sizeof(char) * (j + n + 1));
	}
	else
		z = malloc(sizeof(char) * (j + k + 1));
	if (z == NULL)
	{
		return (NULL);
		free(z);
	}
	for (i = 0; i < k + j ; i++)
	{
		if (j == 0)
		{
			z[i] = s2[x];
			x++;
		}
		else if (i <= j - 1)
			z[i] = s1[i];
		else if (i > j - 1)
		{
			z[i] = s2[x];
			x++;
		}
	}
	z[i] = '\0';
	return (z);
}
