#include <stdio.h>
/**
* main(:)? (- 3 to 1024)?
* Return: (0)
*/
int main(void)
{
long a, a1, a2, b, b1, b2, c, c1, c2;
long d = 10000000000;
int i = 1;
a = 0;
b = 1;
for (i = 0; i < 91; i++)
{
c =  b + a;
a = b;
b = c;
printf("%ld, ", c);
}
a1 = a / d;
a2 = a % d;
b1 = b / d;
b2 = b % d;
for (; i < 98; i++)
{
c1 = a1 + b1;
c2 = a2 + b2;
if (c2 > d)
{
c2 = c2 % d;
c1++;
}
if (i != 97)
{
printf("%ld%ld, ", c1, c2);
a1 = b1;
a2 = b2;
b1 = c1;
b2 = c2;
}
else
{
printf("%ld%ld\n", c1, c2);
}
}
return (0);
}
