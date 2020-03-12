#include <stdio.h>
#include <stdlib.h>
/**
* _strdup? (- create array)?
*
* @s: input int array size
* Return: z
*/
char *_strdup(char *s)
{
	char *z;
	unsigned int i, j;

	if (s == NULL)
		return (NULL);
	for (j = 0; s[j] != '\0'; j++)
	;
	z = malloc(sizeof(char) * j + 1);
	if (z == NULL)
		return (NULL);
	for (i = 0; i <= j; i++)
	{
		if (i != j)
			z[i] = s[i];
		else
			z[j] = '\0';
	}
return (z);
}
