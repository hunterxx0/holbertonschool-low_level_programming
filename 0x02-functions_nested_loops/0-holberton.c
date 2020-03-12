#include "holberton.h"
/**
* main - holberton
* Return: (0)
*/
int main(void)
{
char c[] = "Holberton";
int i;
int l = sizeof(c);
for (i = 0; i < l - 1; i++)
{
_putchar(c[i]);
}
_putchar('\n');
return (0);
}
