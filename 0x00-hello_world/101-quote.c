#include <stdio.h>
#include <unistd.h>
/**
 * _strlen(:)? (- long)?
 *
 * @s: in char
 * Return: 0 or 1
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
/**
* main - write
* Return: (1)
*/
int main(void)
{
char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
int l = _strlen(s);

write(STDERR_FILENO, s, l);
return (1);
}
