#include "holberton.h"
/**
* *_memset(:)? (- memory set)?
*
* @s: input dest char
* @b: input char
* @n: input char
* Return: dest
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
