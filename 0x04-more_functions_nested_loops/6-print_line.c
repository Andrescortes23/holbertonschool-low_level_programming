#include "holberton.h"
/**
 *print_line - print line
 *@n: integer
 *Return: 0
 */
void print_line(int n)
{
	int o;

	o = 0;
	while (o < n)
	{
		_putchar('_');
		o++;

	if (o <= 0)
	{
		_putchar('\n');
	}
	}
	_putchar('\n');
}
