#include "holberton.h"
int _islower(int c);
/**
 *_islower - a function that checks for lowercase character
 *@c: is lowercase
 *Return: 1
 */
int _islower(int c)

{


	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
