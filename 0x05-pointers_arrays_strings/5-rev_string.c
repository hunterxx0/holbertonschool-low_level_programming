#include "holberton.h"
/**
* rev_string(:)? (- rev string)?
*
* @s: input string
* Return: 0 or 1
*/
void rev_string(char *s)
{
char k;
int i = 0, j, l;
while (s[i] != '\0')
{
i++;
}
l = i - 1;
for (j = 0 ; j < (i / 2); j++)
{
k = s[l];
s[l] = s[j];
s[j] = k;
l--;
}
}
