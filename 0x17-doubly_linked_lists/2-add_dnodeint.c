#include "lists.h"
/**
 *add_dnodeint - to add node to the end
 *@head: pointer to nodes
 *@n: int of new node
 *Return: New node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	new->prev = *head;

	return (*head);
}
