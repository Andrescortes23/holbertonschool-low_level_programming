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
	char *tylon;
	unsigned int a, b, c, d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
	{
	}
	for (b = 0; s2[b] != '\0'; b++)
	{
	}
	if (b > n)
		b = n;
	if (n > b)
		n = b;

	tylon = malloc(sizeof(char) * (a + b + 1));
	if (tylon == NULL)
		return (NULL);

	for (c = 0; s1[c] != '\0'; c++)
		tylon[c] = s1[c];
	for (; b != 0; c++, d++, b--)
		tylon[c] = s2[d];
	tylon[c] = '\0';
	return (tylon);
}
