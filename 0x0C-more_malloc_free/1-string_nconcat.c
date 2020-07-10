#include <stdlib.h>
/**
 *len - to know the len of string
 *@s: - string
 *Return: the len
 */
int len(char *s)
{
	unsigned int counter;

	while (s[counter] != '\0')
	{
		counter++;
	}
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
	unsigned int s1len, s2len, c;

	if (s1 == '\0')
		s1 = "";
	if (s2 == '\0')
		s2 = "";

	s1len = len(s1);
	s2len = len(s2);

	if (s2len > n)
		s2len = n;

	s3 = malloc(sizeof(char) * (s1len + s2len + 1));
	if (s3 == NULL)
		return (NULL);

	c = 0;
	while (*s1)
	{
		s3[c] = *s1;
		c++;
		s1++;
	}

	while (s2len != 0)
	{
		s3[c] = *s2;
		c++;
		s2len--;
		s2++;
	}
	s3[c] = '\0';
	return (s3);
}
