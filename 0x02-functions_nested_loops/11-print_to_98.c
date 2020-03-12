#include "holberton.h"
#include <stdio.h>
/**
* print_to_98(:)? (- to 98)?
* @n: input int
* Return: (0)
*/
void print_to_98(int n)
{
if (n < 98)
{
for (; n < 98; n++)
{
printf("%d, ", n);
}
printf("98\n");
}
else if (n > 98)
{
for (; n > 98; n--)
{
printf("%d, ", n);
}
printf("98\n");
}
else
{
printf("98\n");
}
}
