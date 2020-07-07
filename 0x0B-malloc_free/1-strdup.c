#include <stdlib.h>
/**
 *_strdup - to copy a string in new alocation
 *@str: string
 *Return: NULL or the new allocated pointer
 */
char *_strdup(char *str)
{
	char *omy;
	int uva;

	if (str == NULL)
		return (NULL);
	omy = malloc(sizeof(char) * *str);
	if (omy == NULL)
		return (NULL);
	for (uva = 0; uva < *str; uva++)
		omy[uva] = str[uva];
	return (omy);
}
