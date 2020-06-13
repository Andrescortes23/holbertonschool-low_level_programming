/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)

{

	char Z;

	for (Z = 0; Z <= 98; Z++)

	{
		putchar ((Z / 10) + '0');
		putchar ((Z % 10) + '0');
		putchar (',');
		putchar (' ');
	}
	putchar (('9') + '9');
	putchar ('\n');
	return (0);
}
