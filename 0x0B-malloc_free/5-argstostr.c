#include <stdio.h>
#include <stdlib.h>
/**
* argstostr(:)? (- printit)?
*
* @argc: input int
* @argv: input char
* Return: argv
*/
char *argstostr(int ac, char **av)
{
	int i, j, x = 0,sum = 0;
	char *z;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			sum++;
		sum++;
	}
	z = malloc(sizeof(char) * (sum + 1));
	if (z == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
	z[x] = av[i][j];
	x++;
		}
		z[x] = '\n';
		x++;
	}
	z[x] = '\0';
	return (z);
}
