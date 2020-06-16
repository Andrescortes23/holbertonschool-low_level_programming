#include "holberton.h"
void print_alphabet(void);
/**
 *print_alphabet - prints the alphabet, in lowercase
 * Return: 0
 */
void print_alphabet(void)
{
	char so;

	for (so = 'a'; so <= 'z'; so++)

		_putchar(so);

	_putchar ('\n');
}
