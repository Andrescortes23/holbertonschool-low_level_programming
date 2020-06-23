#include "holberton.h"
/**
 *print_rev - print in reverse
 *@s: string
 *Return: 0
 */
void print_rev(char *s)
{
	int a;

	a = 0;
	while (*(s + a) != '\0')
	{
		a++;
	}
	while (a >= 0)
	{
		_putchar (*(s + a));
		a--;
	}
		_putchar ('\n');
}
