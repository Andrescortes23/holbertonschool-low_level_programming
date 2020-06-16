#include "holberton.h"
int print_sign(int n);
/**
 *print_sign- a function to print the sign of a number
 *@n: +, 0 or - number
 *Return: Always 0
 */
int print_sign(int n)

{

	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
