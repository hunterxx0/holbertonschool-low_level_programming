#include "holberton.h"
/**
* print_numbers(:)? (- 0 to 14 X 10)?
*
*/
void print_numbers(void)
{
int i, j;
for(j = 1; j <= 10; j++)
{
for (i = 0; i <= 14; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
