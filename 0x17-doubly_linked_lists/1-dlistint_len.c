#include "lists.h"
/**
 *dlistint_len - to know number of elements in linked list
 *@h: pointer to nodes
 *Return: Numbr of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t iterator = 0;

	while (h != NULL)
	{
		iterator++;
		h = h->next;
	}
	return (iterator);
}
