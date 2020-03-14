#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
* print_numbers? (- print numbers)?
*
* @n: input int
* @s: separator
* Return:
*/
void print_numbers(const char *s, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (s != NULL && i != n - 1)
		printf("%s", s);
	}
	va_end(ap);
	printf("\n");
}
