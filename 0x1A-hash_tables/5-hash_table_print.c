#include "hash_tables.h"
/**
 *hash_table_print - Print contents of hash table
 *@ht: Hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int ind = 0;
	hash_node_t *tmp;
	char com = ' ';

	if (ht == NULL)
		return;

	printf("{");
	while (ind < ht->size)
	{
		tmp = ht->array[ind];
		while (tmp != NULL)
		{
			if (com == ',')
				printf(",");
			printf("\'%s\': \'%s\'", (tmp->key), (tmp->value));
			tmp = tmp->next;
			com = ',';
		}
		ind++;
	}
	printf("}\n");
}
