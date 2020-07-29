#include "lists.h"
/**
 *pop_listint - delete the head node
 *@head: pointer to head pointer
 *Return: data of deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n = 0;

	if (!*head)
		return (0);

	n = (*head)->n;
	tmp = (*head)->next;
	free (*head);
	*head = tmp;
	return (n);
}
