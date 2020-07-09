#include <stdlib.h>
/**
 *malloc_checked - allocates memory
 *@b: size of memory
 *Return: 98 or magno
 */
void *malloc_checked(unsigned int b)
{
	void *magno;

	magno = malloc(b);

	if (!magno)
	{
		exit(98);
	}
	return (magno);
}
