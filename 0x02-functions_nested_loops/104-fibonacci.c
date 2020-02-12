#include <stdio.h>
/**
* main(:)? (- 3 to 1024)?
* Return: (0)
*/
int main(void)
{
unsigned long int a = 0, b = 1, c;
int i;
for (i = 1; i <= 100; i++)
{
c = a + b;
printf("%lu", c);
if (i < 100)
{
printf(", ");
}
a = b;
b = c;
}
printf("\n");
return (0);
}
