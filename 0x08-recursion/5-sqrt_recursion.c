#include "holberton.h"
/**
 *mult - return the multiplication of a
 *@a: tu multiplicate
 *@b: result
 *Return: 0
 */
int mult(int a, int b)
{
	if ((a * a) == b)
		return (a);
	a++;
	return (mult(a, b));
}

/**
 *_sqrt_recursion - to know if square root
 *@n: numb
 *Return: 0
 */
int _sqrt_recursion(int n)
{
	int a = 2;

	if (n == 1)
		return (1);
	return (mult(a, n));
}
