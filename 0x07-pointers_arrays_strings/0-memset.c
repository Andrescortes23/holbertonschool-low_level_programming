#include "holberton.h"
/**
 *_memset - to fill memory
 *@s: char
 *@b: char
 *@n: bytes
 *Return: ol
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int tab;
	char *ol = s;

	for (tab = 0; tab < n; tab++)
		ol[tab] = b;
	return (ol);
}
