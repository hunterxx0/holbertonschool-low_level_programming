#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - one_dig_num
* Return: (0)
*/
int main(void)
{
int n;
n = 48;
for (n = 48; n <= 57; n++)
{
if (n != 57)
{
putchar(n);
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
