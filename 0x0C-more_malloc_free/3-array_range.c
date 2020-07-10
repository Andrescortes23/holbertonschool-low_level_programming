#include <stdlib.h>
/**
 *array_range - creates an array of integers
 *@min: 0
 *@max: 10
 *Return: pointer to new array
 */
int *array_range(int min, int max)
{
	unsigned int rec, lock;
	int *s;

	if (min > max)
		return (NULL);

	rec = max - min + 1;

	s = malloc(sizeof(int) * rec);
	if (s == NULL)
		return (NULL);

	for (lock = 0; lock < rec; lock++)
		s[lock] = min + lock;
	return (s);
}
