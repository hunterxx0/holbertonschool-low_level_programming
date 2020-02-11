#include "holberton.h"
/**
* times_table(:)? (- table)?
* Return: (0)
*/
void times_table(void)
{
int a, b, c;
for (a = 0; a < 10; a++)
{
for (b = 0; b < 10; b++)
{
c = a * b;
if (c <= 9)
{
if (b != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
_putchar(c + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar((c / 10) + '0');
_putchar((c % 10) + '0');
}
}
_putchar('\n');
}
}
