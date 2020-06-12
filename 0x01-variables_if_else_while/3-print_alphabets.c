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

	while (x <= 'z')
	{
		putchar (x);
		x++;
	}

	while (c <= 'Z')

	{
		putchar (c);
		c++;
	}




	putchar ('\n');

	return (0);
}
