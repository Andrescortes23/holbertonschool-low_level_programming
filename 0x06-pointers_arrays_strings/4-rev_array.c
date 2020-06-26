#include "holberton.h"
/**
 *reverse_array - reverse elements
 *@a: pointer
 *@n: items
 *Return: 0
 */
void reverse_array(int *a, int n)
{
	int om;
	int mo;

	for (om = 0; om < n; om++, n--)
	{
		mo = a[om];
		a[om] = a[n - 1];
		a[n - 1] = mo;
	}
}
