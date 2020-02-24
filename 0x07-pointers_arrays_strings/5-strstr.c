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
unsigned int i = 0, j = 0;
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
if (n[i] == '\0')
return (n);
else
return (0);
}
