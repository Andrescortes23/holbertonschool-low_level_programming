#include "holberton.h"
/**
 *_pow_recursion - to power an int
 *@x: number to power
 *@y: times to power
 *Return: the number after power or -1 if y its lower than 0
 */
int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
