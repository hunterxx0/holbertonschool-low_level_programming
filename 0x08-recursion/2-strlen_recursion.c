#include "holberton.h"
/**
* _strlen_recursion(:)? (- leng)?
*
* @s: input char
* Return: a
*/
int _strlen_recursion(char *s)
{
if (*s != '\0')
{
int a = 0;
a += 1;
return (a + _strlen_recursion(++s));
}
else
return (0);
}
