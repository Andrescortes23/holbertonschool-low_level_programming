/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)
{

	char x = 'a';
	char c = 'A';

	while (x <= 'z' && c <= 'Z')
	{
		putchar (x);
		x++;
	}
	{
			putchar (c);
			c++;
	}

	putchar ('\n');

	return (0);
}
