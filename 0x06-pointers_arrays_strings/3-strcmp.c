#include "holberton.h"
/**
 *_strcmp - to compare
 *@s1: string 1
 *@s2: string 2
 *Return: the result
 */
int _strcmp(char *s1, char *s2)
{

	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}

		/**
		for (a = 0; *(s1 + a) != '\0'; a++)
	{
	}
	a--;
	for (b = 0; *(s2 + b) != '\0'; b++)
	{
	}
	b--;
	if (s1[a] == s2[b])
	{
		return (0);
	}
	else
	{
		return (s1[a] - s2[b]);
	}
}
		*/
