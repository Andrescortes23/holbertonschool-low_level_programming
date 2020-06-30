#include "holberton.h"
/**
 *_strstr - find first ocurrence
 *@haystack: string to search
 *@needle: substring
 *Return: 0 or a
 */
char *_strstr(char *haystack, char *needle)
{
	char *a = haystack;
	char *b = needle;

	while (*haystack != '\0' && *b != '\0')
	{
		if (*haystack == *b)
		{
			haystack++;
			b++;
		}
		else
		{
			haystack++;
			a = haystack;
			b = needle;
		}

	}
	if (*b == '\0')
	{
		return (a);
	}
	else
		return (0);
}
