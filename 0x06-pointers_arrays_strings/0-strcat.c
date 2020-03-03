#include "holberton.h"
/**
* *_strcat(:)? (- concatenates)?
*
* @dest: input dest char
* @src: input char
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
int i, j;
for (i = 0; dest[i] != '\0'; i++)
{
}
for (j = 0; src[j] != '\0'; j++)
{
dest[i] = src[j];
i++;
}
dest[i + 1] = '\0';
return (dest);
}
