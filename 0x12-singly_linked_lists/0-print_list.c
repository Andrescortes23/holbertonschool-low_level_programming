#include "lists.h"
#include <stdio.h>
/**
 *print_list - to print all elements in struct
 *@h: node
 *Return: counter of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int counter = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		counter++;
	}
	return (counter);
}
