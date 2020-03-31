#include "holberton.h"
/**
 * read_textfile? (- read file)?
 *
 * @a: input head
 * @l: printed size
 * Return: x
 */
ssize_t read_textfile(const char *f, size_t l)
{
	ssize_t x = 0, len;
	int fd, b;
	char c;

	if (f == NULL)
		return (0);
	len = (ssize_t)l;
	fd = open(f, O_RDONLY);
        if (fd == -1)
                return (0);
	while ((b = read(fd, &c, sizeof(c))) > 0 && x < len)
	{
	        write(1, &c, 1);
		x++;
	}
	if (b == 0 && x < len)
	{
		c = '\n';
		write(1, &c, 1);
		x++;
	}
			close(fd);
	return (x);
}
