#include "hash_tables.h"
/**
 *hash_table_get - give us the value from a key
 *@ht: hash table
 *@key: key to get the value
 *Return: 1 succes, 0 fail
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int keyind;

	if (ht == NULL || key == NULL)
		return (NULL);

	keyind = key_index((const unsigned char *) key, ht->size);
	if (keyind >= ht->size)
		return (NULL);

	tmp = ht->array[keyind];
	while (tmp != NULL)
	{
		if (strcmp(key, tmp->key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
