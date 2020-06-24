#include "holberton.h"
#include <stdio.h>
/**
 *
 *
 *
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
