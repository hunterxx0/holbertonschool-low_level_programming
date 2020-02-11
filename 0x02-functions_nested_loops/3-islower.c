#include "holberton.h"
/**
* _islower(:)? (- low)?
* @c: (input int c)?
* Return: (0)
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
