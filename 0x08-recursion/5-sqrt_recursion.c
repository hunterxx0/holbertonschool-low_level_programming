#include "holberton.h"
/**
 * check(:)? (- check prime)?
 *
 * @n: input int
 * @i: input int
 * Return: n
 */
int check(int n, int i)
{
if (n == 1)
return (1);
	if (i == n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (check(n, i + 1));
}

/**
* _sqrt_recursion(:)? (- root)?
*
* @n: input int
* Return: c
*/
int _sqrt_recursion(int n)
{
	int c = check(n, 1);
return (c);
}
