#include "holberton.h"
/**
 * err97(:)? (- err 97)?
 *
 * Return:
 */
void err97(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}
/**
 * err98(:)? (- err 98)?
 *
 * @s: file name
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
 * @s: file name
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
 * @s: fd
 * Return:
 */
void err100(int s)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d", s);
	exit(100);
}
/**
 * main? (- cp 2 files)?
 *
 * @ac: input file
 * @av: printed size
 * Return: x
 */
int main(int ac, char **av)
{
	char buf[1024];
	int fr = 0, fw = 0, w = 0, cr = 0, cw = 0, r = 1;

	if (ac != 3)
		err97();
	fr = open(av[1], O_RDONLY);
	if (fr == -1)
		err98(av[1]);
	fw = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fw == -1)
		err99(av[2]);
	while (r)
	{
		r = read(fr, buf, 1024);
		if (r == -1)
			err98(av[1]);
		if (r > 0)
		{
			w = write(fw, buf, r);
			if (w == -1)
				err99(av[2]);
		}
	}
	cr = close(fr);
	if (cr == -1)
		err100(cr);
	cw = close(fw);
	if (cw == -1)
		err100(cw);
	return (0);
}
