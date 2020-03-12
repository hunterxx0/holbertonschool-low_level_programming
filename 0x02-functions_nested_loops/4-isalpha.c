#include "holberton.h"
/**
* _isalpha(:)? (- low up)?
* @c: (input in c)?
* Return: (0)
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
