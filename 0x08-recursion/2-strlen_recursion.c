#include "holberton.h"
/**
 *_strlen_recursion - to know the length
 *@s: string
 *Return: int
 */
int _strlen_recursion(char *s)
{


	if (*s != '\0')
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	else
		return (0);
}
