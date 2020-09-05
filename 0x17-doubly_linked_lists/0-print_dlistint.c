#include "lists.h"
/**
 *print_dlistint - to print nodes
 *@h: pointer to nodes
 *Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t iterator = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		iterator++;
	}
	return (iterator);
}
