#include <stdio.h>
#include <stdlib.h>
/**
 * _digit(:)? (- char)?
 *
 * @p: input char
 * Return: 0 or 1
 */
int _digit(char *p)
{
	while (*p != '\0')
	{
		if (*p == '-')
			p++;
		if (*p < '0' || *p > '9')
		{
			return (0);
		}
		p++;
	}
	return (1);

}

/**
* main(:)? (- argc argv)?
*
* @argc: input int
* @argv: input char
* Return: argv
*/
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Error\n");
			return (1);
	}
	if (_digit(argv[1]) == 0 || _digit(argv[2]) == 0)
	{
		printf("Error\n");
return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
