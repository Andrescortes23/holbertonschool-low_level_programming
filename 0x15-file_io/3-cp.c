#include "holberton.h"
/**
 *main - principal function
 *@ac: num of paramethers
 *@av: paramethers
 *Return: 0
 */
int main(int ac, char *av[])
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	int rfd0 = 0, wfd1 = 0;
	int *buf;
	int fd0, fd1;

	fd0 = open(av[1], O_RDONLY);
	if (fd0 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	else
	{
		buf = malloc(sizeof(char) * 1024);
		rfd0 = read(fd0, buf, 1024);
		if (rfd0 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}

		fd1 = open(av[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
		if (fd1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
		else
		{
			wfd1 = write(fd1, buf, rfd0);
			if (wfd1 == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
				exit(99);
			}
		}
	}
	if (close(fd0) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd0);
		exit(100);
	}
	else if (close(fd1) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd1);
		exit(100);
	}
	free(buf);
	return (0);
}
