#include <stdlib.h>
/**
 *len - to know the len of string
 *@s: - string
 *Return: the len
 */
int len(char *s)
{
	unsigned int index, counter;

	for (index = 0; s[index] != '\0'; index++)
		counter++;
	return (counter);
}

/**
 *string_nconcat - concatenate 2 strings
 *@s1: string 1
 *@s2: string 2
 *@n: bytes to concatenate from s2
 *Return: pointer or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int s2len, c, d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s2len = len(s2);
	if (s2len > n)
		s2len = n;

	s3 = malloc(sizeof(char) * (len(s1) + s2len + 1));
	if (s3 == NULL)
		return (NULL);

	for (c = 0; s1[c]; c++)
		s3[c] = s1[c];
	for (d = 0; d < s2len; c++, d++)
		s3[c] = s2[d];
	s3[c] = '\0';
	return (s3);
}
