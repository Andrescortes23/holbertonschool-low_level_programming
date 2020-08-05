#include "holberton.h"
/**
 *read_textfile - to read a text file and printed
 *@filename: file to read and print
 *@letters: number of lotters to reand and print
 *Return: the number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0, r = 0, w = 0;
	char *buf = NULL;

	if (filename)
	{
		fd = open(filename, O_RDONLY);
		buf = malloc(sizeof(char) * letters);

		if (buf && fd != -1)
		{
			r = read(fd, buf, letters);
			w = write(STDOUT_FILENO, buf, r);
		}
		else
			return (0);
		close(fd);
		free(buf);
	}
	else
		return (0);
	return (w);
}
