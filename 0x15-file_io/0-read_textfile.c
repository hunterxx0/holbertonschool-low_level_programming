#include "holberton.h"
/**
 * read_textfile? (- read file)?
 *
 * @f: input file
 * @l: printed size
 * Return: x
 */
ssize_t read_textfile(const char *f, size_t l)
{
	ssize_t w = 0;
	int fd = 0, r = 0;
	char *c = malloc(l);

	if (!f || !l)
		return (0);
	fd = open(f, O_RDONLY);
	if (fd == -1)
		return (0);
	r = read(fd, c, l);
	if (r == -1)
		return (0);
	w = write(1, c, r);
	if (w == -1 || w != r)
	{
		free(c);
		return (0);
	}
	free(c);
	close(fd);
	return (w);
}
