#include "holberton.h"
/**
 *print_square - print
 *@size: square
 *Return: 0
 */
void print_square(int size)
{
	int y;
	int r;

	if (size > 0)
	{
		for (y = 0; y < size; y++)
		{
			for (r = 0; r < size; r++)
				_putchar ('#');
			_putchar ('\n');
		}
	}
	else
		_putchar ('\n');
}
