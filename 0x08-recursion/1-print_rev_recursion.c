#include "holberton.h"
/**
* _print_rev_recursion(:)? (- rever)?
*
* @s: input char
* Return:
*/
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
s++;
_print_rev_recursion(s);
_putchar(*(s - 1));
}
}
