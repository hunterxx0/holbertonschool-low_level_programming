#include "holberton.h"
/**
* main - alpha x10
* Return: (0)
*/
void print_alphabet_x10(void)
{
int x;
for (x = 1; x <= 10; x++)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
