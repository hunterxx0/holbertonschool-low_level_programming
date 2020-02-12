#include <stdio.h>
/**
* main(:)? (- 3 to 1024)?
* Return: (0)
*/
int main(void)
{
long int a = 0, b = 1, c;
int i;
for (i = 1; i <= 50; i++)
{
printf("%ld", b);
if (i <= 50)
{
printf(", ");
}
c = a + b;
a = b;
b = c;
}
printf("\n");
return (0);
}
