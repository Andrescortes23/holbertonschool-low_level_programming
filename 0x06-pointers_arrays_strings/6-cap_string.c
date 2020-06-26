#include "holberton.h"
/**
 *cap_string - to capit
 *@s: pointer
 *Return: s
 */
char *cap_string(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
		while (s[a] == ' ' || s[a] == '\n' || s[a] == '\t' ||
		       s[a] == '.' || s[a] == '(' || s[a] == '"')
		{
			a++;
			if (s[a] >= 'a' && s[a] <= 'z')
				s[a] = s[a] - ' ';
		}
	}
	return (s);
}
