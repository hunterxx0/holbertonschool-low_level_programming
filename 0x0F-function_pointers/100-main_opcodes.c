#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main(:)? (- argc argv)?
 *
 * @ac: number of arguments
 * @av: arguments
 *
 * Return: r
 */
int main(int ac, char *av[])
{
	int *z;

	if (ac != 2)
	{
		printf("Error\n");
			exit(1);
	}

	if (strlen(av[1]) != 2)
	{
		printf("Error\n");
		exit(2);
	}
	if (av[1] < 0)
	{
		printf("Error\n");
		exit(2);
	}
	z = (int *)&main;
	printf("%x\n", z[atoi(av[1])]);
	return (0);
}
