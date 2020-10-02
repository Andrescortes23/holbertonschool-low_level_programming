#include "hash_tables.h"
/**
 *hash_table_set - add elements to hash table
 *@ht: hash table
 *@key: key to enter in hash table
 *@value: value for key
 *Return: 1 succes, 0 fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int keyind;
	hash_node_t *Newnode;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);

	keyind = key_index((const unsigned char *) key, ht->size);

	while (ht->array[keyind] != NULL)
	{
		if (strcmp(key, ht->array[keyind]->key) == 0)
		{
			free(ht->array[keyind]->value);
			ht->array[keyind]->value = (strdup(value));
			return (1);
		}
		ht->array[keyind] = ht->array[keyind]->next;
	}
	Newnode = malloc(sizeof(hash_node_t));
	if (Newnode == NULL)
		return (0);

	Newnode->key = (strdup(key));
	if (Newnode->key == NULL)
	{
		free(Newnode);
		return (0);
	}
	Newnode->value = (strdup(value));
	Newnode->next = ht->array[keyind];
	ht->array[keyind] = Newnode;
	return (1);
}
