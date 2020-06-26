#include "holberton.h"
/**
 *_strcmp - to compare
 *@s1: string 1
 *@s2: string 2
 *Return: the result
 */
int _strcmp(char *s1, char *s2)
{
	int a;
	int b;
	int oxy;

	for (a = 0; *(s1 + a) != '\0'; a++)
	{
	}
	for (b = 0; *(s2 + b) != '\0'; b++)
	{
	}

	while (*(s1 + a) != '\0')
	{
		if (*(s2 + b) > *(s1 + a))
			oxy = -15;
		if (*(s2 + b) < *(s1 + a))
			oxy = 15;
		if (*(s1 + a) == '\0')
			oxy = 0;
	}
	return oxy;
}
