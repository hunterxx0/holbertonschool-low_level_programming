#include "holberton.h"
/**
* print_last_digit(:)? (- last digit)?
* @r: (input int r)?
* Return: (0)
*/
int print_last_digit(int r)
{
if (r >= 10)
{
return (r % 10);
}
else
{
return (r);
}
}
