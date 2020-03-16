#include "holberton.h"
/**
* print_square(:)? (- 0 to 14 X 10)?
*
* @size: input int
*/
void print_square(int size)
{
int i, j;
if (size > 0)
{
for (j = 1; j <= size; j++)
{
for (i = 1; i <= size; i++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
