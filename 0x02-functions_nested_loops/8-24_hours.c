#include "holberton.h"
/**
* jack_bauer(:)? (- 24h)?
* Return: (0)
*/
void jack_bauer(void)
{
int a = 0;
int b = 0;
int c = 0;
int d = 0;
while (a < 3)
{
b = 0;
while (((b < 4) && (a == 2)) || ((b < 10) && a < 2))
{
c = 0;
d = 0;
while (c < 6)
{
d = 0;
while ((c <= 5) && (d < 10))
{
_putchar (a + '0');
_putchar (b + '0');
_putchar (':');
_putchar (c + '0');
_putchar (d + '0');
_putchar ('\n');
d++;
}
c++;
}
b++;
}
a++;
}
}
