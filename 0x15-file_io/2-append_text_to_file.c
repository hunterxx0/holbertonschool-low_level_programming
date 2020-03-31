#include "holberton.h"
/**
 * create_file? (- create file)?
 *
 * @f: input file
 * @tc: printed size
 * Return: x
 */
int append_text_to_file(const char *f, char *tc)
{
	ssize_t w = 0;
	int fd = 0, i = 0;

	if (!f)
		return (-1);
	if (tc)
	{
		fd = open(f, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);
		while (tc[i])
			i++;
		w = write(fd, tc, i);
		if (w == -1)
			return (-1);
		close(fd);
	}
	return (1);
}
