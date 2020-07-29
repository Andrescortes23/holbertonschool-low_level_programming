#include "lists.h"
/**
 *get_nodeint_at_index - make a index
 *@head: pointer to first node
 *@index: index of nodes
 *Return: nth node of list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int ind = 0;
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		if (ind == index)
			return (tmp);
		ind++;
		head = head->next;
	}
	return (NULL);
}
