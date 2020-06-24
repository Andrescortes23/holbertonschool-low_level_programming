#include "holberton.h"
/**
 *_strcpy - copie string
 *@dest: destiny
 *@src: string
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	char *molo = dest;


	while (*src != '\0')
	{
		*molo = *src;
		src++;
		molo++;
	}
	*molo = '\0';

	return (dest);
}
