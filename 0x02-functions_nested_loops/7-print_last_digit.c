#include "holberton.h"
/**
* print_last_digit(:)? (- last digit)?
* @r: (input int r)?
* Return: (0)
*/
int print_last_digit(int r)
{
int z = r * -1;
if (r < 0)
{
r = z % 10;
_putchar ('0' + r);
}
else
{
r = r % 10;
_putchar ('0' + r);
}
return (r);
}
