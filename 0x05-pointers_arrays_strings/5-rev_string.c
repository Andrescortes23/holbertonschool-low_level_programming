#include "holberton.h"
/**
 *rev_string - reverse
 *@s: string
 *Return: 0
 */
void rev_string(char *s)
{
	int doil;
	int doli;
	char lodi;

	doil = 0;
	while (s[doil] != '\0')
	{
		doil++;
	}
	doli = 0;
	while (doil > doli)
	{
		lodi = s[doil - 1];
		s[doil - 1] = s[doli];
		s[doli] = lodi;
		doli++;
		doil--;
	}

}
