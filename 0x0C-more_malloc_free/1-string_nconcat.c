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
	unsigned int count1, count2, s1len = 0, s2len = 0, a, b;

	if (s1 == '\0')
		s1 = "";
	if (s2 == '\0')
		s2 = "";

	for (count1 = 0; s1[count1] != '\0'; count1++)
		s1len++;
	for (count2 = 0; s2[count2] != '\0'; count2++)
		s2len++;

	if (n >= s2len)
	{
	s3 = malloc(sizeof(char) * (s1len + s2len) + 1);

	if (s3 == NULL)
		return (NULL);

	for (a = 0; s1[a] != '\0'; a++)
		s3[a] = s1[a];
	for (b = 0; s2[b] != '\0'; b++, a++)
		s3[a] = s2[b];
	s3[a] = '\0';
	return (s3);
	}

	if (n < s2len)
	{
		s3 = malloc(sizeof(char) * (s1len + n) + 1);
		if (s3 == NULL)
			return (NULL);

		for (a = 0; s1[a] != '\0'; a++)
			s3[a] = s1[a];
		for (b = 0; b < n; b++, a++)
			s3[a] = s2[b];
		s3[a] = '\0';
		return (s3);
	}
	else
		return (NULL);
}
