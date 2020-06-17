#include "holberton.h"
int print_last_digit(int);
/**
 *print_last_digit - the last digit
 *@oxy: last digit
 *Return: oxy
 */
int print_last_digit(int oxy)
{
	oxy = oxy % 10;
	if (oxy < 0)
		oxy = -oxy;
	_putchar ('0');
	return (oxy);
}
