#include "variadic_functions.h"
/**
 * print_c? (- print c)?
 *
 * @ap: input format
 * Return:
 */
void print_c(va_list ap)
{
	printf("%c", va_arg(ap, int));
}
/**
 * print_i? (- print int)?
 *
 * @ap: input format
 * Return:
 */
void print_i(va_list ap)
{
	printf("%d", va_arg(ap, int));
}
/**
 * print_f? (- print f)?
 *
 * @ap: input format
 * Return:
 */
void print_f(va_list ap)
{
	printf("%f", va_arg(ap, double));
}
/**
 * print_s? (- print s)?
 *
 * @ap: input format
 * Return:
 */
void print_s(va_list ap)
{
	char *str = va_arg(ap, char *);

	if (str != NULL)
		printf("%s", str);
	else
		printf("(nil)");
}
/**
 * print_all? (- print a)?
 *
 * @frm: input format
 * Return:
 */
void print_all(const char * const frm, ...)
{
	get_f get[] = {
		{'c', print_c},
		{'i', print_i},
		{'f', print_f},
		{'s', print_s},
	};
	unsigned int j, i = 0;
	va_list ap;


	va_start(ap, frm);
	while (frm[i] && frm)
	{
		j = 0;
		while (j < 4)
		{
			if (get[j].c == frm[i])
			{
				get[j].f(ap);
				if (frm[i + 1] != '\0')
					printf(", ");
			}
				j++;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
