#include "variadic_functions.h"
#include "funct.h"
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
