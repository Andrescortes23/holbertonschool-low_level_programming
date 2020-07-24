#include "lists.h"
#include <string.h>
/**
 *add_node - add new node to list_t
 *@head: adress of the node
 *@str: string to duplicate
 *Return: adress of new node
 */
list_t *add_node(list_t **head, const char *str)
{
	char *name;
	unsigned int index = 0, lenname;
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	name = strdup(str);
	if (name == NULL)
		return (NULL);

	while (*str)
	{
		str++;
		index++;
	}
	lenname = index;


	node->str = name;
	node->len = lenname;
	node->next = *head;
	*head = node;

	return (*head);
}
