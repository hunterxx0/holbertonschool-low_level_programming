#include "holberton.h"
/**
* *cap_string(:)? (- cap )?
*
* @x: input array
* Return: x
*/
char *cap_string(char *x)
{
int i, j;
char s[] = {'\n', '\t', ' ', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
for (i = 0; x[i] != '\0'; i++)
{
for (j = 0; j < 13; j++)
{
if (x[i] == s[j] && (x[i + 1] >= 'a' && x[i + 1] <= 'z'))
{
x[i + 1] = x[i + 1] - 32;
}
}
}
return (x);
}
