#include "holberton.h"
/**
 *_puts - to print a string
 *@str: string
 *Return: 0
 */
void _puts(char *str)
{

	while (*str)
	{
		_putchar (*str);
		str++;
	}
	if (*str == '\0')
		_putchar ('\n');
}
