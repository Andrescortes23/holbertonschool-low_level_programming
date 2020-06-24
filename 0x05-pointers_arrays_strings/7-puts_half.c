#include "holberton.h"
/**
 *puts_half - half string
 *@str: string
 *Return: 0
 */
void puts_half(char *str)
{

	int den = 0;
	int mitad = 0;

	while (str[den] != '\0')
	{
		den++;
	}

	mitad = (den + 1) / 2;

	while (str[mitad] != '\0')
	{
		_putchar (str[mitad]);
		mitad++;
	}


	_putchar ('\n');
}
