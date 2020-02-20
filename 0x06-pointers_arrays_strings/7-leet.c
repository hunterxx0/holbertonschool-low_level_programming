#include "holberton.h"
/**
* *leet(:)? (- switch)?
*
* @swt: input array
* Return: swt
*/
char *leet(char *swt)
{
int i, j;
char l[] = "aAeEoOtTlL";
char s[] = "4433007711";
for (i = 0; swt[i] != '\0'; i++)
{
for (j = 0; l[j] != '\0'; j++)
{
if (swt[i] == l[j])
swt[i] = s[j];
}
}
return (swt);
}
