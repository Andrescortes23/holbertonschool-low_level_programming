#include "lists.h"
/**
 *get_dnodeint_at_index - to get a specific node
 *@head: pointer to nodes
 *@index: the specific node in index
 *Return: The requested node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int a = 0;

	while (head != NULL)
	{
		if (a == index)
		{
			return (head);
		}
		a++;
		head = head->next;
	}
	return (NULL);
}
