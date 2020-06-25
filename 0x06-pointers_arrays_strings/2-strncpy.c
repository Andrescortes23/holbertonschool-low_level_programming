#include "holberton.h"
/**
 *_strncpy - copy with byte
 *@dest: string
 *@src: string to append
 *@n: byte appended
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;
	int b;
	int c;

	for (a = 0; *(dest + a) != '\0'; a++)
	{
	}
	for (b = 0; *(src + b) != '\0'; b++)
	{
	}
	for (c = 0; c < n && *(src + c) != '\0'; c++)
		*(dest + c) = *(src + c);
	for (; c < n; c++)
		*(dest + c) = '\0';

	return (dest);
}
