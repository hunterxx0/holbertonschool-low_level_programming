#include "holberton.h"
/**
* _atoi(:)? (- digits)?
*
* @s: input char
* Return: int
*/
int _atoi(char *s)
{
int i, x = 0, m = 0, e = 0;
unsigned int n = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == '+')
{
x = x + 1;
}
else if (s[i] == '-')
{
m = m + 1;
}
else if (s[i] >= '0' && s[i] <= '9')
{
n = 10 * n + (s[i] - '0');
e = e + 1;
}
else if (e != 0 && ((s[i] >= 'a' && s[i] <= 'z') || (s[i] <= ' ')))
{
break;
}
}
if (e == 0 && s[i] == '\0')
{
return (0);
}
else
{
if (m > x)
{
n = n * -1;
}
return (n);
}
}
