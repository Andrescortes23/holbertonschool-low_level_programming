/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)

{

	int Z;

	for (Z = 0; Z <= 99; Z++)

	{
		putchar ((Z / 10) + '0');
		putchar ((Z % 10) + '0');
		{
			if (Z <= 98)
			{
				putchar (',');
				putchar (' ');
			}
		}
	}
	putchar ('\n');
	return (0);
}
