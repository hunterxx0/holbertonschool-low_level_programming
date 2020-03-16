#include "holberton.h"
/**
* *rot13(:)? (- encode)?
*
* @x: input array
* Return: 0
*/
char *rot13(char *x)
{
int i, j;
char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
for (i = 0; x[i] != '\0'; i++)
{
for (j = 0; a[j] != '\0'; j++)
{
if (x[i] == a[j])
{
x[i] = rot[j];
break;
}
}
}
return (x);
}
