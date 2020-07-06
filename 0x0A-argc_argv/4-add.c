#include <stdio.h>
#include <stdlib.h>
/**
 *main - Print the result of addition of numbers
 *@argc: Number of arguments
 *@argv: Array of pointers with size argc
 *Return 0 or 1
 */
int main(int argc, char *argv[])
{
	int result;
	int index;

	if (argv[1] == '\0')
		printf("0\n");

	for (index = 0; index < argc; index++)
	{
		if (atoi (argv[index]) >= 0 && atoi (argv[index]) <= 9)
		{
			printf("Error\n");
			return (1);
		}
	}
	result = atoi(argv[index]) + atoi(argv[index]);
	printf("%d\n", result);
	return (0);
}
