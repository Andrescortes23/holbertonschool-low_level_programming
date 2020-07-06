#include <stdio.h>
/**
 *main - program to printarguments it recives
 *@argc: Number of arguemnts
 *@argv: Array of pointers with size argc
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int ind;

	for (ind = 0; ind < argc; ind++)
	{
		printf("%s\n", argv[ind]);
	}
	return (0);
}
