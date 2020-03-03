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

	for (j = 0; s[j] != '\0'; j++)
	;
	z = malloc(sizeof(char) * j);
	if (j == 0 || z == NULL || s == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
	{
		z[i] = s[i];
	}
	z[j] = '\0';
	return (z);
}
