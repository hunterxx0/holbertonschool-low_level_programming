#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - alphabet
* Return: (0)
*/
int main(void)
{
char c;
c = 'a';
for (c = 'a'; c <= 'z'; c++)
{
if (c != 'q' && c != 'e')
{
putchar(c);
}
}
putchar('\n');
return (0);
}
