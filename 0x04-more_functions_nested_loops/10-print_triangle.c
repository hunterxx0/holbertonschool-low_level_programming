#include "holberton.h"
/**
* print_triangle(:)? (- print __)?
*
* @size: input int
*/
void print_triangle(int size)
{
int i, j, k;
if (size > 0)
{
for (j = 1; j <= size; j++)
{
if (j != size)
{
i = size - j;
while (i > 0)
{
_putchar(' ');
i--;
}
}
k = j;
if (j == 0)
{
_putchar('#');
}
else
{
while (k > 0)
{
_putchar('#');
k--;
}
_putchar('\n');
}
}
}
else
{
_putchar('\n');
}
}
