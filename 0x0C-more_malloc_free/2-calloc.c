#include <stdlib.h>
/**
 *_calloc - to allocate memory to an array
 *@nmemb: elemnts of array
 *@size: number of bytes of array
 *Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *besub;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	besub = malloc(nmemb * size);

	if (besub != NULL)
		for (a = 0; a < size * nmemb; a++)
			besub[a] = 0;
	return (besub);
}
