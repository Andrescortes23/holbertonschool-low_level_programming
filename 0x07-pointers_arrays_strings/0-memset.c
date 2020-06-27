#include "holberton.h"
/**
 *
 *
 *
 *
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int tab;
	char *ol = s;

	for (tab = 0; tab < n; tab++)
		ol[tab] = b;
	return (ol);
}
