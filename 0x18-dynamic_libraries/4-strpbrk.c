#include "holberton.h"
/**
* *_strpbrk(:)? (- search string)?
*
* @s: output char
* @a: input accept char
* Return: dest
*/
char *_strpbrk(char *s, char *a)
{
unsigned int i, j, z = 0;
char *p;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; a[j] != '\0'; j++)
{
if (s[i] == a[j])
z++;
}
if (z != 0)
break;
}
p = &s[i];
if (z != 0)
return (p);
else
return (0);
}
