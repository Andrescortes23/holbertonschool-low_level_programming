#include <stdlib.h>
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
	unsigned int count1, count2, s1len, s2len, c;

	if (s1 == '\0')
		s1 = "";
	if (s2 == '\0')
		s2 = "";

	for (count1 = 0; s1[count1] != '\0'; count1++)
		s1len++;
	for (count2 = 0; s2[count2] != '\0'; count2++)
		s2len++;

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
