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
n = 0;
for (n = 0; n < 100 ; n++)
{
putchar((n / 10) + 48);
putchar((n % 10) + 48);
if (n != 99)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
