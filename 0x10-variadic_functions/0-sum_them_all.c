#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
* sum_them_all? (- sum)?
*
* @n: input int
* Return: s
*/
int sum_them_all(const unsigned int n, ...)
{
	int s = 0;
	unsigned int i;
	va_list ap;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (i = 0; i < n; i++)
		s += va_arg(ap, int);
	va_end(ap);
	return (s);
}
