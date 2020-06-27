#include "holberton.h"
/**
 *_memcpy - copy
 *@dest: where goint to be copied
 *@src: where we take the data
 *@n: bytes copied
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int tab;

	for (tab = 0; tab < n; tab++)
		dest[tab] = src[tab];
	return (dest);
}
