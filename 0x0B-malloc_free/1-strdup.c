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
	int sostr;

	if (str == NULL)
		return (NULL);
	for (sostr = 0; str[sostr] != '\0'; sostr++)
	{
	}
	omy = malloc(sizeof(char) * sostr);
	if (omy == NULL)
		return (NULL);
	for (uva = 0; uva < sostr; uva++)
		omy[uva] = str[uva];
	return (omy);
}
