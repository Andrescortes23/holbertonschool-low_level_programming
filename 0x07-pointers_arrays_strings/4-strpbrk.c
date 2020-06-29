#include "holberton.h"
/**
 *_strpbrk - to search in the string for any of seleccted byte
 *@s: string to scan
 *@accept: string to match
 *Return: s + a
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				return (s + a);
			}
		}
	}
	return (0);
}
