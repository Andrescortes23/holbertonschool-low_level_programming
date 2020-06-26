#include "holberton.h"
/**
 *leet - to 1337
 *@s: pointer
 *Return: s
 */
char *leet(char *s)
{
	char *let = "aAeEoOtTlL";
	char *num = "4433007711";
	int a;
	int b;

	for (a = 0; s[a]; a++)
	{
		for (b = 0; let[b]; b++)
		{
			if (s[a] == let[b])
			{
				s[a] = num[b];
			}
		}
	}
	return (s);
}
