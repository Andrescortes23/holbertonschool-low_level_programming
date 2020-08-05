#include "holberton.h"
/**
 *append_text_to_file - append text in the end of a file
 *@filename: name of text file
 *@text_content: content to file
 *Return: 1 if succes, -1 if fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i] != 0; i++)
		{
		}
		w = write(fd, text_content, i);
		if (w == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
