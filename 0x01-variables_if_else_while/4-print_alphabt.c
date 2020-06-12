/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)
{
	char x = 'a';

	while (x <= 'z');
	if (x != 'q')
	{
		putchar (x);
		x++;
	}

	putchar ('\n');

	return (0);
}
