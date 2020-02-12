#include <stdio.h>
/**
* main(:)? (- 3 to 1024)?
* Return: (0)
*/
int main(void)
{
long int a = 0, b = 1, c, s = 0;
int i;
for (i = 1; i <= 50; i++)
{
c = a + b;
if (c < 4000000)
{
if (c % 2 == 0)
{
s = s + c;
}
a = b;
b = c;
}
}
printf("%ld", s);
printf("\n");
return (0);
}
