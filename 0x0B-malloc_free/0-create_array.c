#include <stdlib.h>
/**
 *create_array - to an array of chars
 *@size: size of our array
 *@c: the char of our array
 *Return: NULL or the array in heap
 */
char *create_array(unsigned int size, char c)
{
	char *bombsh;
	unsigned int index;

	if (size == 0)
	{
		return (NULL);
	}
	bombsh = malloc(sizeof(char) * size);
	if (bombsh == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		bombsh[index] = c;
	return (bombsh);
}
