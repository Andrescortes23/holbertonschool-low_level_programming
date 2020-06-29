#include "holberton.h"
/**
 *
 *
 *
 *
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
 *
 *
 *
 *
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
