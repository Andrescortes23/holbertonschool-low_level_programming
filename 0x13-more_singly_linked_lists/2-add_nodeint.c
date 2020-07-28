#include "lists.h"
/**
 *add_nodeint - add node at the beginning
 *@head: pointer to head pointer
 *@n: data of struct
 *Return: pointer to new pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;

	*head = node;

	return (*head);
}
