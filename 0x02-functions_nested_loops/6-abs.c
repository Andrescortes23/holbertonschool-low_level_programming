#include "holberton.h"
int _abs(int);
/**
 *_abs - function computes the absolute value of the integer
 *@s: absolute value
 *Return: s
 */
int _abs(int s)
{

	if (s > 0)
		return (s);
	else
		return (-s);

}
