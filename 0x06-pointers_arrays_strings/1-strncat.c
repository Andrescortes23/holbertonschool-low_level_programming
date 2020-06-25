#include "holberton.h"
/**
 *
 *
 *
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	while (src[b] != '\0')
	{
		if (n > 0)
		{
			dest[a] = src[b];
			a++;
			n--;
		}
		b++;
	}
	return (dest);
}
