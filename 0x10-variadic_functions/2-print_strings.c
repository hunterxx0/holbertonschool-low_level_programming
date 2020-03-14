#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
* print_strings? (- print str)?
*
* @n: input int
* @s: separator
* Return:
*/
void print_strings(const char *s, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ap;

	if (n == 0)
		return;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		if (s != NULL || i != n - 1)
		printf("%s", s);
	}
	printf("\n");
	va_end(ap);
}
