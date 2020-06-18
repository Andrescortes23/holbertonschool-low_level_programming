#include "holberton.h"
/**
 *print_diagonal - diagonal
 *@n: number
 *Return: 0
 */
void print_diagonal(int n)
{
	int u;
	int spc;

	if (n > 0)
	{
		for (u = 0; u < n; u++)
		{
			for (spc = 0; spc < u; spc++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
