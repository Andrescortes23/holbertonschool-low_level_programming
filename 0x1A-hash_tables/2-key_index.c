#include "hash_tables.h"
/**
 *key_index - to get the index for a key
 *@size: size of hash table
 *@key: key
 *Return: index to store the key/value in hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);
	return (hash_djb2(key) % size);
}
