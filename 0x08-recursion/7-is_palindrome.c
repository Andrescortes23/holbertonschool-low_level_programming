#include "holberton.h"
/**
 *lenofstring - the length
 *@a: string
 *Return: the length
 */
int lenofstring(char *a)
{
	if (*a == '\0')
		return (0);
	return (1 + lenofstring(a + 1));
}

/**
 *match - to match the chars
 *@v: string
 *@lenos: length of string
 *Return: 1 / 0
 */
int match(char *v, int lenos)
{
	if (*v != '\0')
	{
		if (*v == *(v + lenos))
			return (1 * match(v + 1, lenos - 2));
		else
			return (0);
	}
	return (1);
}
/**
 *is_palindrome - to know if is palindrome
 *@s: string
 *Return: 1 / 0
 */
int is_palindrome(char *s)
{
	int lenos = lenofstring(s) - 1;

	if (lenos == 0 || lenos == 1)
		return (1);
	else
		return (match(s, lenos));
}
