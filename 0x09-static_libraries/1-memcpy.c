#include "holberton.h"
/**
* *_memcpy(:)? (- memory copy)?
*
* @dest: output char
* @src: input source char
* @n: input number of bytes
* Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
