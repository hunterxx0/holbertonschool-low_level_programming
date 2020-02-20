#include "holberton.h"
/**
* *_strncpy(:)? (- concatenates)?
*
* @a: input array
* @n: input long
* Return: 0
*/
void reverse_array(int *a, int n)
{
  int i, j, x = 0;
i = n - 1;
j = 0;
while (j < n / 2)
{
x = a[i];
a[i] = a[j];
a[j] = x;
j++;
i--;
}
}
