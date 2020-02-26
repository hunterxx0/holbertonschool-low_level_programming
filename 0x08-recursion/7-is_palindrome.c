#include "holberton.h"
/**
 * _strlen(:)? (- leng)?
 *
 * @s: input char
 * Return: a
 */
int _strlen(char *s)
{
	if (*s != '\0')
	{
		int a = 0;
		a += 1;
		return (a + _strlen(++s));
	}
	else
		return (0);
}
/**
 * check(:)? (- check prime)?
 *
 * @s: input char
 * @l: input lenght
 * @x: input zero
 * Return: 0 or 1
 */
int check(char *s, int x, int l)
{
	if (s[x] != s[l])
	{
		return (0);
	}
	if (x <= l)
	{
		return (check(s, x + 1, l - 1));
	}
	return (1);
}

/**
* is_palindrome(:)? (- palind)?
*
* @s: input char
* Return: 0 or 1
*/
int is_palindrome(char *s)
{
	int c, l = _strlen(s) - 1;
if (l == 0)
	return (1);
else
{
	c = check(s, 0, l);
		if (c == 1)
			return (c);
		else
			return (c);
}
}
