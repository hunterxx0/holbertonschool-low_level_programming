#include "holberton.h"
/**
* *leet(:)? (- transf)?
*
* @t: input array
* Return: t
*/
char *leet(char *t)
{
int i, j;
char l[] = "aAeEoOtTlL";
char s[] = "4433007711";
for (i = 0; t[i] != '\0'; i++)
{
for (j = 0; l[j] != '\0'; j++)
{
if (t[i] == l[j])
t[i] = s[j];
}
}
return (t);
}
