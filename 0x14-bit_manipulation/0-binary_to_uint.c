#include "holberton.h"
#include <stdio.h>
/**
 *binary_to_uint - to convert binary to decimal
 *@b: string of 1 and 0
 *Return: 0 or int
 */
unsigned int binary_to_uint(const char *b)
{
	int dec = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b == '1')
			dec = (dec << 1) | 1;
		else if (*b == '0')
			dec = dec << 1;
		else
			return (0);
		b++;
	}
	return (dec);
}
