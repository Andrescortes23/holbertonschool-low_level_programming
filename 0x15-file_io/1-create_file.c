#include "holberton.h"
/**
 *create_file - to create a file
 *@filename: the name of file to be created
 *@text_content: content to fill the file
 *Return: 1 if succes or -1 if fails
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
		{
		}
		w = write(fd, text_content, i);
		if (w == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
