#include "holberton.h"
/**
* print_number(:)? (- print int)?
*
* @n: input int
* Return: 0 or 1
*/
void print_number(int n)
{
int i, j, x, z;
unsigned int u;
if (n > -10 && n < 10)
{
if (n < 0)
{
_putchar('-');
_putchar (-n + '0');
}
else
{
_putchar (n + '0');
}
}
else
{
if (n < -9)
{
_putchar('-');
u = -n;
}
else
{
u = n;
}
for (i = 1000000000; i >= 10; i = i / 10)
{
x = u / i;
if (x > 0)
{
_putchar (x + '0');
j = i;
while (j >= 10)
{
z = ((u % j) / (j / 10));
_putchar (z + '0');
j = j / 10;
}
break;
}
}
}
}
