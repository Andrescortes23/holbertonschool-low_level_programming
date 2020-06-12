/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)
{

	char a = '0';
	char s = '9';
	char d = 'a';
	char f = 'f';

	for (a = '0'; a <= s; a++)
	{
		putchar (a);
	}

	for (d = 'a'; d <= f; d++)
	{
		putchar (d);
	}

	putchar ('\n');

	return (0);
}
