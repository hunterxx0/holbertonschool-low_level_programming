#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - one_dig_num
* Return: (0)
*/
int main(void)
{
char c;
c = '0';
for (c = '0'; c <= '9'; c++)
{
if (c != 9)
{
putchar("%d, ", c);
}
else
{
putchar ("%d$ \n", c);
}


}
putchar('\n');
return (0);
}
