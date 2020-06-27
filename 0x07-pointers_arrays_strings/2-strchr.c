#include "holberton.h"
/**
 *_strchr - locate character
 *@s: string to scan
 *@c: word to search
 *Return: s
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
		{
			return (s + a);
		}
	}
	return (0);
}
