#include "lists.h"
/**
 *list_len - to return the number of elements in list
 *@h: node
 *Return: number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int counter;

	if (h == NULL)
		return (0);

	for (counter = 0; h != NULL; counter++)
	{
		h = h->next;
	}
	return (counter);
}
