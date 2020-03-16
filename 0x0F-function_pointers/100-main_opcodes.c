#include <stdlib.h>
#include <stdio.h>
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
	char *z;
	int i;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(av[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	z = (char *)&main;
	for (i = 0; i < atoi(av[1]); i++)
	{
		printf("%02x", (unsigned char)z[i]);
		if (i != atoi(av[1]) - 1)
		printf(" ");
	}
	printf("\n");
	return (0);
}
