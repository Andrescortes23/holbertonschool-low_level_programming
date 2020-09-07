#include "lists.h"
/**
 *sum_dlistint - to sum all the ints in nodes
 *@head: pointer to nodes
 *Return: Result of sum
 */
int sum_dlistint(dlistint_t *head)
{
	int a = 0;

	while (head != NULL)
	{
		a = a + head->n;
		head = head->next;
	}
	return (a);
}
