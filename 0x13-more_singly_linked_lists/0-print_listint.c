#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 *print_listint - to print elements of list
 *@h: header pointer
 *Return: Counter of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int counter = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
