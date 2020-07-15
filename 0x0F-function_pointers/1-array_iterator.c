#include <stdlib.h>
/**
 *array_iterator -  function aplly other function to every elemnt of an array
 *@array: array
 *@size: size of array
 *@action: fuction to apply to elemnts of array
 *Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	if (array == NULL || action == NULL)
		return;

	for (index = 0; index < size; index++)
		(*action)(array[index]);
}
