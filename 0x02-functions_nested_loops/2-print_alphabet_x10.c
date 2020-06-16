#include "holberton.h"
void print_alphabet_x10(void);
/**
 *print_alphabet_x10 - prints alphabet x10, in lowercasa
 *Return: 0
 */
void print_alphabet_x10(void)

{
	char oio = '0', umu;

	while (oio <= '9')

	{
		umu = 'a';
		while (umu <= 'z')
		{
			_putchar (umu);
			umu++;
		}
		_putchar ('\n');
		oio++;
	}
}
