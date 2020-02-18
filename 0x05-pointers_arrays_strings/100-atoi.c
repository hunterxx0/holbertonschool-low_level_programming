#include "holberton.h"
/**
* _atoi(:)? (- digits)?
*
* @s: input char
* Return: int
*/
int _atoi(char *s)
{
int i, n = 0, x = 0, m = 0, e = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] = '+')
{
x = x + 1;
}
else if (s[i] = '-')
{
m = m + 1
}
else if (s[i] >= '0' && s[i] <= '9')
{
n = 10 * n + (s[i] - '0');
if (m > x)
{
n = n * -1;
}
e = e + 1;
}
else if ((e != 0) && (s[i] <= '0' && s[i] >= '9'))
{
return (n);
break;
}
}
if ((s[i] <= '0' && s[i] >= '9') && e == 0 && s[i] == '\0')
{
return (0);
}
else
{
return (n);
}
}
