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
 * err97(:)? (- long)?
 *
 * Return:
 */
void err97(void)
{
	char *e97 = "Usage: cp file_from file_to\n";
	int l97 = _strl(e97);

	write(STDERR_FILENO, e97, l97);
	exit(97);
}
/**
 * err98(:)? (- long)?
 *
 * Return:
 */
void err98(void)
{
        char *e98 = "Error: Can't read from file NAME_OF_THE_FILE\n";
        int l98 = _strl(e98);

		write(STDERR_FILENO, e98, l98);
		exit(98);
}
/**
 * err99(:)? (- err 99)?
 *
 * Return:
 */
void err99(void)
{
	char *e99 = "Error: Can't write to NAME_OF_THE_FILE\n";
        int l99 = _strl(e99);

	write(STDERR_FILENO, e99, l99);
	exit(99);
}
/**
 * err100(:)? (- err 100)?
 *
 * Return:
 */
void err100(void)
{
	char *e100 = "Error: Can't close fd FD_VALUE";
        int l100 = _strl(e100);

	write(STDERR_FILENO, e100, l100);
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
	char *e100 = "Error: Can't close fd FD_VALUE";
	char buf;
	int fr = 0, fw = 0, w = 0;
	int l100 = _strl(e100), cr = 0, cw = 0, r = 0;

	if (ac != 3)
		err97();
	fr = open(av[1], O_RDONLY);
	if (fr == -1)
		err98();
	fw = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fw == -1)
		err99();
	while ((r = read(fr, &buf, 1)) > 0)
	{
		if (r == -1)
			err98();
		w = write(fw, &buf, 1);
		if (w == -1)
			err99();
		fw = open(av[2], O_WRONLY | O_APPEND);
		if (fw == -1)
		err99();
	}
	cr = close(fr);
	cw = close(fw);
	if (cw == -1 || cr == -1)
		err100();
	return (0);
}
