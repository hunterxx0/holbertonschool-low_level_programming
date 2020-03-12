#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - add.
 *
 * @a: input int
 * @b: input int
 *
 * Return: add
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - sub.
 *
 * @a: input int
 * @b: input int
 *
 * Return: sub
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - mul.
 *
 * @a: input int
 * @b: input int
 *
 * Return: mul
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - div.
 *
 * @a: input int
 * @b: input int
 *
 * Return: div
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
  * op_mod - mod.
  *
  * @a: input int
  * @b: input int
  *
  * Return:mod
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
