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
	if (s == 0 || j - 1 > 1000)
		return (0);
	z = malloc(sizeof(char) * 1000);
	for (i = 0; i < j; i++)
	{
		z[i] = s[i];
	}
	z[j] = '\0';
	return (z);
}
