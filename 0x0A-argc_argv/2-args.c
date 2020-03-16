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
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
		return (0);
}
