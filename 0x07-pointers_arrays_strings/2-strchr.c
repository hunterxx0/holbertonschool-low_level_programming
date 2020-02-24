#include "holberton.h"
/**
* *_strchr(:)? (- memory copy)?
*
* @s: output char
* @c: input source char
* Return: dest
*/
char *_strchr(char *s, char c)
{
unsigned int i;
char *p;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
break;
}
p = &s[i];
return (p);
}
