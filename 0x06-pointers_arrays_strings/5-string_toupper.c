#include "holberton.h"
/**
 *string_toupper - to chaange to upper
 *@s: pointer
 *Return: s
 */
char *string_toupper(char *s)
{
	int a;

	for (a = 0; *(s + a) != '\0'; a++)
	{
		if (*(s + a) >= 97 && *(s + a) <= 122)
		{
			*(s + a) -= 32;
		}
	}
	return (s);
}
