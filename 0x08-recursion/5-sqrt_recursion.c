#include "holberton.h"
/**
 *div - return the multiplication of a
 *@a: tu multiplicate
 *@b: result
 *Return: 0
 */
int div(int a, int b)
{
	if (a > b)
		return (-1);
	a++;
	return (div(a, b));
}

/**
 *_sqrt_recursion - to know if square root
 *@n: numb
 *Return: 0
 */
int_sqrt_recursion(int n)
{

	if (n == 1)
		return (1);
	return (div(a, n));
}
