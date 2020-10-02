#include "hash_tables.h"
/**
 *hash_table_create - create hash table
 *@size: size of hash table
 *Return: Hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *Newtable;
	unsigned long int ind = 0;

	if (size <= 0)
		return (NULL);

	Newtable = malloc(sizeof(hash_table_t));
	if (Newtable == NULL)
		return (NULL);

	Newtable->size = size;
	Newtable->array = malloc(sizeof(hash_node_t *) * size);
	if (Newtable->array == NULL)
		return (NULL);
	while (ind < size)
	{
		Newtable->array[ind] = NULL;
		ind++;
	}
	return (Newtable);
}
