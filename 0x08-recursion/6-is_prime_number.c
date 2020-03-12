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
	if (n <= 1)
	{
		return (n == 2);
	}
	if (n % i == 0)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	return (check(n, i + 1));
}

/**
* is_prime_number(:)? (- prime)?
*
* @n: input int
* Return: n
*/
int is_prime_number(int n)
{
	int c = check(n, 2);
if (c == 0)
	return (0);
	else
	return (1);
}
