#include "holberton.h"
/**
* print_last_digit(:)? (- last digit)?
* @r: (input int r)?
* Return: (0)
*/
int print_last_digit(int r)
{
int x;
if (r < 0)
{
x = r % 10 * -1;
}
else
{
x = r % 10;
}
_putchar ('0' + x);
return (x);
}
