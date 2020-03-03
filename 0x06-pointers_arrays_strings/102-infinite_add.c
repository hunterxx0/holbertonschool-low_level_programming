#include "holberton.h"
/**
* *infinite_add(:)? (- print int)?
*
* @n1: input char
* @n2: input char
* @r: input buffer
* @size_r: input size buffer
* Return: 0 or 1
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, j, k, x, z, h, a = 0, c = 0, w, y = 0;
for (i = 0; n1[i] != '\0'; i++)
;
for (j = 0; n2[j] != '\0'; j++)
;
i -= 1;
j -= 1;











if (a != 0)
{
r[k] = 1;
k++;
r[k] = '\0';
}
else
r[k] = '\0';
w = k - 1;
y = 0;
}
while (y < k / 2)
{
c = r[w];
r[w] = r[y];
r[y] = c;
y++;
w--;
}
for (z = 0; r[z] != '\0'; i++)
;
if (z <= size_r)
return (r);
else
return (0);
}
