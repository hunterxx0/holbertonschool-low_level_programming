#include "holberton.h"
/**
 * read_textfile? (- read file)?
 *
 * @f: input file
 * @tc: printed size
 * Return: x
 */
int create_file(const char *f, char *tc)
{
	ssize_t w = 0;
	int fd = 0, i = 0;

	if (!f)
		return (0);
	fd = open(f, O_CREAT | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);
	if (tc)
	{
	while (tc[i])
	i++;
	i--;
	w = write(fd, tc, i);
	if (w == -1)
		return (-1);
	}
	close(fd);
	return (1);
}
