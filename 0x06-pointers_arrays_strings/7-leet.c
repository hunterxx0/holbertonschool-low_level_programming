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
char l[] = {'a', 'e', 'o', 't', 'l'};
char u[] = {'A', 'E', 'O', 'T', 'L'};
char s[] = {'4', '3', '0', '7', '1'};
for (i = 0; x[i] != '\0'; i++)
{
for (j = 0; j < 6; j++)
{
if (x[i] == l[j] || x[i] == u[j])
{
x[i] = s[j];
}
}
}
return (x);
}
