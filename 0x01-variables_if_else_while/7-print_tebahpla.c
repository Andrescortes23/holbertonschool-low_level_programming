/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)

{
	char x;

	for (x = 'z'; x >= 'a'; x = x - 1)
	{
		putchar (x);
	}
	putchar ('\n');

	return (0);
}
