#include "holberton.h"
/**
* times_table(:)? (- table)?
* Return: (0)
*/
void times_table(void)
{
int a;
int b;
int c;
for (a = 0; a <= 9; a++)
{
b = 0;
c = 0;
while (b < 10)
{
if (c <= 9)
{
_putchar (c + '0');
if (b < 9)
{
_putchar (',');
_putchar (' ');
_putchar (' ');
}
c = c + a;
b++;
}
else
{
_putchar ((c / 10) + '0');
_putchar ((c % 10) + '0');
if (b < 9)
{
_putchar (',');
_putchar (' ');
}
c = c + a;
b++;
}
}
_putchar ('\n');
}
}
