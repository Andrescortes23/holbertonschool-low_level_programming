#include "lists.h"
/**
 *list_len - to return the number of elements in list
 *@h: node
 *Return: number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int counter;

	for (counter = 0; h[counter].str != '\0'; counter++)
	{
	}
	return (counter);
}
