#include "holberton.h"
/**
 *print_triangle - print
 *@size: num
 *Return: 0
 */
void print_triangle(int size)
{
	int m;
	int n;


	if (size > 0)
	{
		m = size - 1;
		while (m > 0)
		{
			n = 0;
			while (n <= size)
			{
				_putchar ('#');
				_putchar ('\n');
				n++;
			}
			_putchar (' ');
			_putchar ('\n');
			m--;
		}
	}
	else
		_putchar ('\n');
}
