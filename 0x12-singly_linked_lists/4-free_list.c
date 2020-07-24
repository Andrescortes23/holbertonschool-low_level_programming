#include "lists.h"
/**
 *free_list - free the node
 *@head: node
 *Return: void
 */
void free_list(list_t *head)
{
	list_t *willy;

	while (head)
	{
		willy = head->next;
		free(willy);
		head = willy;
	}
}
