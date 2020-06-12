/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)
{

	int x = 0 + '0';
	int c = 10 + '0';

	while (x < c)
	{
		putchar (x);
		x++;
	}
	putchar ('\n');

	return (0);
}
