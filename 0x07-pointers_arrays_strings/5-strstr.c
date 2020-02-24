#include "holberton.h"
/**
* *_strstr(:)? (- search string)?
*
* @n: input char to find
* @h: input char to look into
* Return: n
*/
char *_strstr(char *h, char *n)
{
unsigned int i = 0, k, j = 0;
char *p;
for (k = 0; n[k] != '\0'; k++)
;
k -= 1;
while ((h[j] != '\0') && (n[i] != '\0'))
{
if (n[i] != h[j])
{
j++;
i = 0;
}
else
{
i++;
j++;
}
}
p = &h[j - 1 - k];
if (n[i] == '\0')
return (p);
else
return (0);
}
