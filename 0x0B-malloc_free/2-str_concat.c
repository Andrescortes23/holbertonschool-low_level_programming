#include <stdlib.h>
/**
 *str_concat - to concatenate 2 string and allocate in new space of memory
 *@s1: first string
 *@s2: Second string
 *Return: NULL or New string
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int sizbet, sizhol, bet, hol;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	for (sizbet = 0; s1[sizbet] != '\0'; sizbet++)
	{
	}
	for (sizhol = 0; s2[sizhol] != '\0'; sizhol++)
	{
	}
	s3 = malloc(sizeof(char) * (sizbet + sizhol + 1));
	if (s3 == NULL)
		return (NULL);
	for (bet = 0; s1[bet] != '\0'; bet++)
	{
		s3[bet] = s1[bet];
	}
	for (hol = 0; s2[hol] != '\0'; hol++, bet++)
	{
		s3[bet] = s2[hol];
	}
	s3[bet] = '\0';
	return (s3);
}
