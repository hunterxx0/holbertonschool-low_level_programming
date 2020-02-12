#include <stdio.h>
/**
* main(:)? (- 3 to 1024)?
* Return: (0)
*/
int main(void)
{
int n;
int s = 0;
for (n = 3; n < 1024; n++)
{
if (n % 3 == 0)
{
s = s + n;
}
}
printf("%d\n", s);
return (0);
}

