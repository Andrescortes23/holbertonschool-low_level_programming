/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)

{

	int cero;

	for (cero = '0'; cero <= '9'; cero++)
	{
		putchar (cero);

		if (cero < '9')
		{
			putchar (',');
			putchar (' ');
		}
	}
	putchar ('\n');
	return (0);
}
