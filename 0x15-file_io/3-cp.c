#include "holberton.h"
/**
* _strl(:)? (- long)?
*
* @s: input char
* Return: 0 or 1
*/
int _strl(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
/**
 * err97(:)? (- err 97)?
 *
 * Return:
 */
void err97()
{
	char *e97 = "Usage: cp file_from file_to\n";
	int l97 = _strl(e97);

	write(STDERR_FILENO, e97, l97);
	exit(97);
}
/**
 * err98(:)? (- err 98)?
 *
 * Return:
 */
void err98(char *s)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
	exit(98);
}
/**
 * err99(:)? (- err 99)?
 *
 * Return:
 */
void err99(char *s)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
	exit(99);
}
/**
 * err100(:)? (- err 100)?
 *
 * Return:
 */
void err100(int c)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d", c);
	exit(100);
}
/**
 * append_text_to_file? (- append text file)?
 *
 * @f: input file
 * @tc: printed size
 * Return: x
 */
int main(int ac, char **av)
{
	char buf;
	int fr = 0, fw = 0, w = 0;
	int cr = 0, cw = 0, r = 0;

	if (ac != 3)
		err97();
	fr = open(av[1], O_RDONLY);
	if (fr == -1)
		err98(av[1]);
	fw = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fw == -1)
		err99(av[2]);
	while ((r = read(fr, &buf, 1)) > 0)
	{
		if (r == -1)
			err98(av[1]);
		w = write(fw, &buf, 1);
		if (w == -1)
			err99(av[2]);
		fw = open(av[2], O_WRONLY | O_APPEND);
		if (fw == -1)
		err99(av[2]);
	}
	cr = close(fr);
	if (cr == -1)
		err100(cr);
	cw = close(fw);
	if (cw == -1)
		err100(cw);
	return (0);
}
