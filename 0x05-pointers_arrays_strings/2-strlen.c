#include "holberton.h"
/**
 *_strlen - function to len
 *@s: string
 *Return: 0
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
