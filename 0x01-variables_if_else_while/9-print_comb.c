/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)

{

	char cero;

	for (cero = '0'; cero <= '9'; cero++)

	{
		putchar (cero);
		putchar (',');
		putchar (' ');
	}
	putchar ('\n');
	return (0);
}
