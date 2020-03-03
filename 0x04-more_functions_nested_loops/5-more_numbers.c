#include "holberton.h"
/**
* more_numbers(:)? (- 0 to 14 X 10)?
*
*/
void more_numbers(void)
{
int i, j;
int x, y;
for (j = 1; j <= 10; j++)
{
for (i = 0; i <= 14; i++)
{
x = i / 10;
y = i % 10;
if (i >= 10)
{
_putchar(x + '0');
}
_putchar(y + '0');
}
_putchar('\n');
}
}
