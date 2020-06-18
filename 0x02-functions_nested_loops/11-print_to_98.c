#include "holberton.h"
/**
 *print_to_98 - print to 98
 *@n: numer
 *Return: 0
 */
#include <stdio.h>
void print_to_98(int n)
{
	while (n <= 97)
	{
		if (n != 98)
			printf("%d, ", n);
		else
			printf("%d", n);
		n++;
	}
	while (n > 97)
	{
		if (n != 98)
			printf("%d, ", n);
		else
			printf("%d", n);
		n--;
	}
	printf("\n");
}
