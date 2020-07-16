#include <stdlib.h>
/**
 *int_index - search for integer
 *@array: array of int
 *@size: array size
 *@cmp: function to apply
 *Return: -1 or int matched
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (cmp && array && size)
		for (a = 0; a < size; a++)
		{
			if ((*cmp)(array[a]))
				return (a);
		}
	return (-1);
}
