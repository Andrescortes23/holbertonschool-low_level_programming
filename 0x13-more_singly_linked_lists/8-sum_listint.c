#include "lists.h"
/**
 *sum_listint - sum all data of nodes
 *@head: pointer to frist node
 *Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	int suma;
	listint_t *tmp = head;

	if (tmp == NULL || head == NULL)
		return (0);

	while (tmp)
	{
		suma += tmp->n;
		tmp = tmp->next;
	}
	return (suma);
}
