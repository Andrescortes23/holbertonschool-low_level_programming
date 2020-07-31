#include "holberton.h"
#include <stdio.h>
/**
 *get_bit - return value if a bit in the index
 *@n: number to use get the bit
 *@index: index of number
 *Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
