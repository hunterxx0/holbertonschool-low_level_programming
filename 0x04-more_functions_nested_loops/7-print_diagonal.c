#include "holberton.h"
/**
* print_diagonal(:)? (- print __)?
*
* @n: input int
*/
void print_diagonal(int n)
{
int i, j;
if (n > 0)
{
for (j = 0; j < n; j++)
{
if (j != 0)
{
i = 0;
while (i < j)
{
_putchar(' ');
i++;
}
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
