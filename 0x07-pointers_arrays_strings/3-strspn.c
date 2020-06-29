#include "holberton.h"
/**
 *prefix - to search the prefix of the string
 *@s: string to scan
 *Return: b
 */
int prefix(char *s)
{
	int a = 0;
	int b = 0;

	while (s[a] != '\n' && s[a] != ',' && s[a] != '.')
	{
		s++;
		b++;
	}
	return (b);
}


/**
 *_strspn - to get the length
 *@s: string to scan
 *@accept: string to find
 *Return: zilo
 */
unsigned int _strspn(char *s, char *accept)
{
	int zilo = 0, q, w;
	int tom = prefix(s), ate = prefix(accept);

	for (q = 0; q < ate; q++)
	{
		for (w = 0; w < tom; w++)
		{
			if (accept[q] == s[w])
			{
				zilo++;
			}
		}
	}
	return (zilo);
}
