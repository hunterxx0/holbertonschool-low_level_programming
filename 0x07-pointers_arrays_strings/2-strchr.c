#include "holberton.h"
/**
* *_strchr(:)? (- str chr)?
*
* @s: input dest char
* @c: input char
* Return: s
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] && s[i] != c; i++)
		;
	if (s[i] == c)
		return (&s[i]);
	return (0);
}
