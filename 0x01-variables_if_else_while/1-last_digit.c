#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - string
* Return: (0)
*/
int main(void)
{
int n, l;
srand(time(0));
n = rand() - RAND_MAX / 2;
l = n % 10;
if (l == 0)
{
printf("Last digit of %d", n);
printf(" is %d", l);
printf(" and is 0\n");
}
else if (l < 6)
{
printf("Last digit of %d", n);
printf(" is %d", l);
printf(" and is less than 6 and not 0\n");
}
else
{
printf("Last digit of %d", n);
printf(" is %d", l);
printf(" and is greater than 5\n");
}
return (0);
}
