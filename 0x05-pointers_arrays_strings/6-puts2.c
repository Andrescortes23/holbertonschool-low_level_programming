#include "holberton.h"
/**
 *puts2 - to printf
 *@str: string
 *Return: 0
 */
void puts2(char *str)
{
	int b;

	b = 0;
	while (str[b] != '\0')
	{
		_putchar(str[b]);
		b += 2;

		if (b > 8)
		{
			_putchar('\n');
		}
	}
}
