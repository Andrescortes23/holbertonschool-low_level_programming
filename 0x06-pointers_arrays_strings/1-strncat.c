#include "holberton.h"
/**
 *_strncat - copy # of bytes
 *@dest: char
 *@src: char
 *@n: byte
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
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
	if (b > n)
		b = n;
	for (c = 0; c < b; c++)
	{
		*(dest + a) = *(src + c);
		a++;
	}
	return (dest);
}
