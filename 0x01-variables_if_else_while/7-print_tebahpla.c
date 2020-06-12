/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)
{
	char x = 'a';

	for (x = 'a'; x <= 'z'; x--)
	{
		putchar (x);
		x++;
	}
	putchar ('\n');

	return (0);
}
