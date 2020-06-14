/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)

{

	char cero;

	for (cero = '0'; cero <= '8'; cero++)

	{
		putchar (cero);
		putchar (',');
		putchar (' ');
	}
	putchar (57);
	putchar ('\n');
	return (0);
}
