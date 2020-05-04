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
p = &s[i];
if (s[i] == c)
{
p = &s[i];
return (p);
}
else if (s[i + 1] == c)
{
p = &s[i + 1];
return (p);
}
}
return (0);
}
