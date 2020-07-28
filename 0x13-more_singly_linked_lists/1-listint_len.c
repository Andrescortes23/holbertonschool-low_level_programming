#include "lists.h"
/**
 *listint_len - to count the number of elements in linked list
 *@h: header pointer
 *Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
