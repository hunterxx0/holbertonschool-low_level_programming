#include "holberton.h"
/**
* main - last
* Return: (0)
*/
int print_last_digit(int r)
{
int z;
if (r >= 10)
{
z = r % 10;
return (z);
}
else
{
return (r);
}
}
