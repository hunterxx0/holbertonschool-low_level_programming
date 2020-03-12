#include "holberton.h"
/**
* _puts(:)? (- long)?
*
* @str: input string
* Return: 0 or 1
*/
void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
