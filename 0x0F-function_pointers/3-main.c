#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
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
	int a, b, r;

	if (ac != 4)
	{
		printf("Error\n");
			exit(98);
	}
	if ((strlen(av[1]) != 1) || (av[2][0] != '+' && av[2][0] != '-'))
	{
		printf("Error\n");
		exit(99);
	}
	if (av[2][0] != '*' && av[2][0] != '/' && av[2][0] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(av[1]);
	b = atoi(av[3]);
	r = get_op_func(av[2])(a, b);
	printf("%d\n", r);
	return (0);
}
