#include "holberton.h"
/**
 *
 *
 *
 *
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
 *
 *
 *
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	int zilo = 0, q, w;
	int tom = prefix(s), ate = prefix(accept);

	for (q = 0; q < tom; q++)
	{
		for (w = 0; w < ate; w++)
		{
			if (s[q] == accept[w])
			{
				zilo++;
			}
		}
	}
	return (zilo);
}
