#include "holberton.h"
/**
* *leet(:)? (- switch)?
*
* @x: input array
* Return: 0
*/
char *leet(char *x)
{
int i, j;
char l[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
char s[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
for (i = 0; x[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (x[i] == l[j])
{
x[i] = s[j];
}
}
}
return (x);
}
