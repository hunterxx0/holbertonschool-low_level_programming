#include <stdio.h>
/**
* main(:)? (- argc argv)?
*
* @argc: input int
* @argv: input char
* Return: argv
*/
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	if (argc == 0)
		printf("%s\n", argv[argc]);
		return (0);
}
