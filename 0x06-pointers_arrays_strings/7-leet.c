#include "holberton.h"
/**
* *leet(:)? (- switch)?
*
* @swt: input array
* Return: 0
*/
char *leet(char *swt)
{
int i, j;
char l[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
char s[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
for (i = 0; swt[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (swt[i] == l[j])
swt[i] = s[j];
}
}
return (swt);
}
