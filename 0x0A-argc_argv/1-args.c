#include <stdio.h>
/**
 *main - program to print number of arguments
 *@argc: Number of arguments
 *@argv: array of pointers with size argc
 *Return: 0
 */
int main(int argc, char *argv[])
{
	if (argv)
		printf("%d\n", (argc - 1));
	return (0);
}
