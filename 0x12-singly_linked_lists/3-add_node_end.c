#include "lists.h"
#include <string.h>
/**
 *add_node_end - add node to the end
 *@head: node adress
 *@str: string to duplicate
 *Return: New node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int index = 0, lenname;
	list_t *node, *tmp;
	char *name;

	node = malloc(sizeof(list_t));
	if (nodo == NULL)
		return (NULL);

	name = strdup(str);
	while (*str)
	{
		str++;
		index++;
	}
	lenname = index;

	nodo->str = name;
	nodo->len = lenname;
	nodo->next = NULL;
}
