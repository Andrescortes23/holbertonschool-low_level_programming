#include "holberton.h"
/**
 *puts2 - to printf
 *@str: string
 *Return: 0
 */
void puts2(char *str)
{
	int owl;

	owl = 0;

	while (str[owl] != '\0')
	{
		_putchar(str[owl]);
		owl += 2;
	}
	_putchar('\n');
}
