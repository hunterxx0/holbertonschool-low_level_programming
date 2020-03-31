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
	ssize_t x = 0, len, w = 0;
	int fd = 0, r = 0;
	char c, end = '\n';

	if (!f)
		return (0);
	len = (ssize_t)l;
	fd = open(f, O_RDONLY);
	if (fd == -1)
		return (0);
	while (x < len)
	{
		r = read(fd, &c, sizeof(c));
		if (r == -1)
			return (0);
		if (r != 0)
		{
			w = write(1, &c, 1);
			if (w == -1)
				return (0);
			x++;
		}
		if (r == 0 && x < len)
		{
			w = write(1, &end, 1);
			if (w == -1)
				return (0);
			x++;
			break;
		}
	}
	close(fd);
	if (x > len)
		return (0);
	return (x);
}
