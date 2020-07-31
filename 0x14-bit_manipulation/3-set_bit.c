#include "holberton.h"
/**
 *set_bit - to set a specific bit in a number
 *@n: number
 *@index: index of number
 *Return: converted bit
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n | (1 << index);
	return(1);
}
