#include "holberton.h"
int _isalpha(int c);
/**
 *_isalpha - checks for an alphabetic character
 *@c: is a letter,lowercase or uppercase
 *Return: Always 0
 */
int _isalpha(int c)

{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
