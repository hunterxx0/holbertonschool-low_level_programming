#include <stdio.h>
#include <stdlib.h>
/**
* argstostr(:)? (- printit)?
*
* @ac: input int
* @av: input char
* Return: argv
*/
char *argstostr(int ac, char **av)
{
	int i, j, x, sum = 0;
	char *z;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (x = 0; av[i][x]; x++)
			sum++;
		sum++;
	}
	x = 0;
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
