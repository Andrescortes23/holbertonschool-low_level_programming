#include "hash_tables.h"
/**
 *hash_table_delete - delete hash table
 *@ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int ind = 0;
	hash_node_t *tmp, *aux;

	if (ht == NULL)
		return;

	while (ind < ht->size)
	{
		tmp = ht->array[ind];
		while (tmp != NULL)
		{
			aux = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = aux;
		}
		ind++;
	}
	free(ht->array);
	free(ht);
}
