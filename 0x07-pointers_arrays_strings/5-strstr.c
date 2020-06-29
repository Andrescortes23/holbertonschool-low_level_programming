#include "holberton.h"
/**
 *slad - to find char
 *@s: string to scan
 *@c: char to find
 *Return:
 */
char *slad(char *s, char c)
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
 *_strstr - search for a byte
 *@haystack: string to scan
 *@needle: substring to match
 *Return: haystack
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if (slad(haystack, *needle))
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
