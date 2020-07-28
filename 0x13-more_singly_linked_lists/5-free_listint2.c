#include "lists.h"
/**
 *free_listint2 - function to free the pointer to heade node
 *@head: pointer to brgining
 *Return: Null
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!head)
		return;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		(*head) = tmp;
	}
	head = NULL;
}
