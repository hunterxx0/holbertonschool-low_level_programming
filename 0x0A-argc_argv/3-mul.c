#include <stdio.h>
#include <stdlib.h>
/**
* main(:)? (- argc argv)?
*
* @argc: input int
* @argv: input char
* Return: argv
*/
int main(int argc, char *argv[])
{
	if (argc < 2 && (argv[1] > 'a' && argv[1] < 'z'))
	{
		printf("Error\n");
			return (1);
	}
	if (argv[2] > 'a' && argv[2] < 'z')
	{
		printf("Error\n");
return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
