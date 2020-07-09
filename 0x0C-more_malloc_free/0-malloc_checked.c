#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
/**
 *malloc_checked - allocates memory
 *@b: size of memory
 *Return: 98 or magno
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
