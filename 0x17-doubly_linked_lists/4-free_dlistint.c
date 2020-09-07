#include "lists.h"
/**
 *free_dlistint - to free nodes
 *@head: pointer to nodes
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	tmp = head;
	while (head != NULL)
	{
		tmp = tmp->next;
		free(head);
		head = tmp;
	}
}
