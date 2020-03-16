#include "holberton.h"
/**
* *_strncat(:)? (- concatenates)?
*
* @dest: input dest char
* @src: input char
* @n: input
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i, j;
for (i = 0; dest[i] != '\0'; i++)
{
}
j = 0;
while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
i++;
j++;
}
dest[i + 1] = '\0';
return (dest);
}
