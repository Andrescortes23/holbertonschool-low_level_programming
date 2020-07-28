#include "lists.h"
/**
 *add_nodeint_end - add new node to the end of list
 *@head: pointer to head pointer
 *@n: data of struct
 *Return: pointer to new pointer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = NULL, *tmp = NULL;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	tmp = *head;
	if (tmp == NULL)
	{
		*head = node;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = node;
	}
	return (*head);
}
