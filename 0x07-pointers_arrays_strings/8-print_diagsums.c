#include "holberton.h"
#include <stdio.h>
/**
* print_diagsums(:)? (- diagosum)?
*
* @a: input diag
* @s: input size
* Return: dest
*/
void print_diagsums(int *a, int s)
{
int i, j, z = 0, w = 0;
for (i = 0; i < s; i++)
{
for (j = 0; j < s; j++)
{
if (i + j == s - 1)
z = z + *a;
if (i == j)
w = w + *a;
a = a + 1;
}
}
printf("%d, ", w);
printf("%d\n", z);
}
