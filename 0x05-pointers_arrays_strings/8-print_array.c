#include "holberton.h"
#include <stdio.h>
/**
 *print_array - array
 *@a: array
 *@n: nums of elemnts in array
 *Return: 0
 */
void print_array(int *a, int n)
{

	int h = 0;

	while (h < n)
	{
		printf("%d", a[h]);
		h++;

		if (h != n)
			printf(", ");
	}
	printf("\n");
}
