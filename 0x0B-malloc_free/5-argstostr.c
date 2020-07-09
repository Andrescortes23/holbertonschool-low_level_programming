#include <stdlib.h>
/**
 *sizeofarray - to know the size of array of pointers
 *@ac: number of arguments
 *@av: arguments of the program
 *Return: the size
 */
int sizeofarray(int ac, char **av)
{
	int index1, index2, lock1 = 0, lock2 = 0, arstr;

	for (index1 = 0; index1 < ac; index1++)
	{
		lock1++;
		for (index2 = 0; av[index1][index2] != '\0'; index2++)
			lock2++;
	}
	arstr = lock1 + lock2;
	return (arstr);
}

/**
 *argstostr - to concatenate all the arguments of my program
 *@ac: number of arguments
 *@av: arguments of the program
 *Return: NULL or omele
 */
char *argstostr(int ac, char **av)
{
	char *omele;
	int call, index1, index2, lock1 = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	call = sizeofarray(ac, av);
	omele = malloc(call + 1);

	for (index1 = 0; index1 < ac; index1++)
	{
		for (index2 = 0; av[index1][index2] != '\0'; index2++, lock1++)
		{
			omele[lock1] = av[index1][index2];
			omele[lock1 + 1] = '\0';
		}
		omele[lock1++] = '\n';
	}
	return (omele);
}
