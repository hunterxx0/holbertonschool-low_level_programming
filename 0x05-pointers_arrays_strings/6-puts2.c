#include "holberton.h"
/**
* puts2(:)? (- other char)?
*
* @str: input string
* Return: 0 or 1
*/
void puts2(char *str)
{
int i = 0, j;
while (str[i] != '\0')
{
i++;
}
if (i % 2 == 0)
{
for (j = 0 ; j < i; j = j + 2)
{
_putchar(str[j]);
}
}
else
{
for (j = 0 ; j <= i; j = j + 2)
{
if (j != i)
{
_putchar(str[j]);
}
else
{
_putchar(str[j - 1]);
}
}
}
_putchar('\n');
}
