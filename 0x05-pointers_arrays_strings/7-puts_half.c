#include "holberton.h"
/**
* puts_half(:)? (- other char)?
*
* @str: input string
* Return: 0 or 1
*/
void puts_half(char *str)
{
int i = 0, j;
while (str[i] != '\0')
{
i++;
}
for (j = i / 2; j < i; j++)
{
_putchar(str[j]);
}
_putchar('\n');
}
