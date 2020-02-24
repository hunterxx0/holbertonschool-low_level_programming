#include "holberton.h"
/**
* _strspn(:)? (- accept)?
*
* @s: output char
* @a: input source char
* Return: dest
*/
unsigned int _strspn(char *s, char *a)
{
unsigned int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; a[j] != '\0'; j++)
{
if (s[i] == a[j])
break;
}
if (s[i] != a[j])
break;
}
return (i);
}
