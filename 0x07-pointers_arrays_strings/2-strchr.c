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
unsigned int i, j = 0;
char *p;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c && s[i] != ' ')
{
j++;
break;
}
}
p = &s[i];
if (j != 0)
return (p);
else
return (0);
}
