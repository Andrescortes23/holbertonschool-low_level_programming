#include "holberton.h"
/**
 *prefix - to search char in a string
 *@s: string to scan
 *@c: char to find
 *Return: b
 */
char *prefix(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return ('\0');
}


/**
 *_strspn - to get the length
 *@s: string to scan
 *@accept: string to find
 *Return: zilo
 */
unsigned int _strspn(char *s, char *accept)
{
	int zulu = 0;

	while (*s && prefix(accept, *s))
	{
		zulu++;
		s++;
	}
	return (zulu);
}
