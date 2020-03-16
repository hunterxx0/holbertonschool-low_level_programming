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
if (*p < '0' || *p > '9')
return (0);
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
	int sum = 0, i;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (_digit(argv[i]) == 0)
		{
		printf("Error\n");
return (1);
		}
		sum += atoi(argv[i]);
}
printf("%d\n", sum);
	return (0);
}
