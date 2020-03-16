#include "holberton.h"
/**
 * swap_int(:)? (- to 98)?
 *
 * @a: input int
 * @b: input int
 * Return: 0 or 1
 */
void swap_int(int *a, int *b)
{
int n = *a;
*a = *b;
*b = n;
}
