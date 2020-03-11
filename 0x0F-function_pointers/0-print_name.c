#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - print name.
 *
 * @name: name
 * @f: funct
 *
 */
void print_name(char *name, void (*f)(char *))
{
	int i;

	for (i = 0; name[i] != '\0'; i++)
		;
	if (i !=0)
	f(name);
}
