#include "holberton.h"
/**
 *_isdigit - to check for a digit
 *@c: digit
 *Return: 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
